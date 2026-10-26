# rv2pancake

A RISC-V to Pancake decompiler in Lean 4 (`v4.35.0`), with a proved instruction lifter and validated optimization passes. `scripts/validate.sh` builds the core, runs seven executable benchmarks, and audits the transitive axioms of its production theorems.

The Lake package currently declares version **0.1.0**. The 0.3 roadmap is unfinished. `FlapjackFlip/` is a separate, experimental integration: its source includes an exact-image certification gate, but this package does not build it or include its external compiler dependencies and challenge tests. Historical Flapjack benchmark counts below describe the earlier ungated implementation, not a certified release of this checkout.

## What It Achieves

1. **Minimal Observational Spec (`Rv2Pancake/Spec/Equiv.lean`)**:
   - External correctness (`ObsEquiv` / `ObsEquivRVPan`) only constrains observable ABI state upon termination (`pc = 0`): the return register `a0` (`x10`) and 64-bit memory `mem : Word -> Word`.
   - The program counter (`pcVar`) and caller-saved temporaries are treated as ghost state at the boundary, allowing multi-instruction superblock fusion without over-constraining the specification.
2. **Full RV64IM Lifter & Strict ELF64 Loader (`Rv2Pancake/Base/`)**:
   - Proves simulation (`liftInstr_regs_sim`, `liftInstr_mem_sim`, `liftInstr_obsEquiv_sim`) across all 31 architectural registers (`x1..x31` with hardwired `x0 = 0`) and RV64IM instructions (`add/sub/mul/divu/remu`, 32-bit `*w` word ops, shifts, signed/unsigned branches, `jal`/`jalr`, `ld`/`sd`, `lui`/`auipc`).
   - Parses ELF64 `PT_LOAD` executable segments (`PF_X`) and rejects illegal opcodes/funct3/funct7 (`decodeRV64WordOpt = none`).
3. **Verified Symbolic Validator & Superblock Fusion (`Rv2Pancake/Passes/SymCheck.lean`)**:
   - Every optimization pass uses an untrusted `propose` paired with a verified boolean validator `check` (`check_sound`).
   - Eliminates 100% of `x0`-induced neutral operations (`0 + e -> e`, `e + 0 -> e`, `e - 0 -> e`, shifts/bitwise by `0`) and folds sequential `pc` transitions across basic blocks (`unrollAndFoldBody`), cutting dynamic `pc == addr` dispatcher checks by **78%–85%** (and **100%** under entry-PC specialization).
4. **Structured Flapjack `.fjimg` Lifter (`FlapjackFlip/Lift.lean` & `scripts/proto_decompile.py`)**:
   - Recovers function boundaries, stack frames (`x24`), globals (`@base` / `@top`), `while` loops with `break`/`continue`, `if`/`else` branches, multi-word struct returns, exception handlers (`PushHandler`/`PopHandler`), and FFI calls (`@name(...)`).
   - Historical results for the ungated implementation: **120/120** visible and **500/500** synthetic tests within the `4x` token budget. These are finite behavioral tests, not proof of arbitrary-input equivalence. The current exact-image gate has not reproduced those coverage results.
5. **Four Quality Meta-Specs (`Rv2Pancake/Spec/MetaSpecs.lean` & `Tests/RoundTripTest.lean`)**:
   - **MS1 (Non-Vacuity)**: Concrete end-to-end execution equivalence across 7 graduated RV64IM benchmarks (`N1a`–`N5` + `Silver GCD`).
   - **MS2 (Strict ISA Conformance)**: Kernel-checked (`by decide`) rejection of illegal RV64 words and exact decoding of RV64IM instructions.
   - **MS3 (Structural Progress & DQ Score)**: Formal proofs that `0 + e` artifacts drop to `0` and superblock fusion strictly reduces `pc == addr` checks.
   - **MS4 (Validator Sensitivity)**: Kernel-checked (`by decide`) mutation tests proving the validators reject register, constant, and loop mutations.

## Minimal Examples

### 1. Verified Superblock Decompilation (`N1a: alu_basic`)

Given a 4-instruction RV64I program:

```asm
0x1000: addi x1, x0, 10
0x1004: addi x2, x0, 15
0x1008: add  x10, x1, x2
0x100c: jalr x0, x0, 0      # return (pc = 0)
```

- **Raw lifted dispatcher (`baseLift`)**: 4 separate `if (pc == addr)` branches inside `while (pc != 0)` with `0 + 10` and `0 + 15` artifacts (`AST size = 612`, `PC checks = 20`, `Zero-Adds = 8`).
- **Verified superblock output (`decompileSuperblock`)**: folds the entire path `0x1000 -> 0x1004 -> 0x1008 -> 0x100c -> 0` into a single constant-propagated block (`AST size = 74`, `PC checks = 3`, `Zero-Adds = 0`, `DQ = 889‰`):

```pancake
if ((pc == 4096)) {
  x1 = 10;
  x2 = 15;
  x10 = 25;
  pc = 0;
}
```

### 2. Flapjack `.fjimg` Structured Decompilation (`tests/00_hello`)

```pancake
fun 1 main() {
  var 1 r6 = 0;
  var 1 r10 = 0;
  var 1 r11 = 0;
  var 1 r12 = 0;
  var 1 r13 = 0;
  r6 = 48879;
  st @base, r6;
  r10 = 0;
  r11 = 0;
  r12 = @base;
  r13 = 8;
  @out(r10, r11, r12, r13);
  r10 = 0;
  return 1;
}
```

## Benchmark Results (`rv2pancake --self-test`)

| Benchmark | Return (`a0`) | AST (`Raw -> Opt`) | `PC Checks` (`Raw -> Super`) | `Zero-Adds` (`Raw -> Opt`) | `DQ` Score |
| :--- | :---: | :---: | :---: | :---: | :---: |
| `N1a: alu_basic` | `25` | `612 -> 74` | `20 -> 3` (-85%) | `8 -> 0` | `889‰` |
| `N1b: rv64im_mul_div_w` | `42` | `2704 -> 216` | `50 -> 8` (-84%) | `15 -> 0` | `896‰` |
| `N2 : branch_diamond` | `42` | `1347 -> 161` | `32 -> 6` (-81%) | `16 -> 0` | `860‰` |
| `N3 : sum_loop_1_to_10` | `55` | `1665 -> 199` | `36 -> 7` (-81%) | `12 -> 0` | `838‰` |
| `N4 : fib_10_mem_ld_sd` | `55` | `3316 -> 265` | `52 -> 11` (-79%) | `28 -> 0` | `849‰` |
| `N5 : call_stack_jalr` | `100` | `1049 -> 281` | `24 -> 22` (default pipeline) | `8 -> 0` | `438‰` |
| `SLV: silver_gcd_48_18` | `6` | `2017 -> 188` | `40 -> 8` (-80%) | `20 -> 0` | `852‰` |

## Build & Run

```bash
scripts/validate.sh
.lake/build/bin/rv2pancake --self-test
.lake/build/bin/rv2pancake path/to/binary.elf
```

## Verification boundaries

Production proofs under `Rv2Pancake` are audited against the allowlist `propext`, `Classical.choice`, and `Quot.sound`. The audit enumerates theorem declarations, including generated declarations; it does not rely on a fixed theorem count. The executable benchmark module also contains `native_decide` test lemmas and is deliberately excluded from the production audit. Core proof claims concern the modeled semantics; they do not establish that every rendered source string is accepted by the external Flapjack compiler.

If `turbo-lean` is on PATH, validation additionally checks `Rv2Pancake/Pipeline.lean`. Its failure fails validation. Without it, the mandatory Lean axiom audit still runs. This integration does not upgrade turbo-lean itself.

Remaining 0.3 work: integrate the external Flapjack toolchain and reproducible challenge tests, recover certified coverage beyond exact image equality, and measure performance on larger unseen programs. See [NOTES.md](NOTES.md).

The verified adjacent-write cleanup reduces optimized AST sizes on every current benchmark: N1a 89→74, N1b 246→216, and N5 287→281, for example. It preserves dependent updates such as two increments and memory operations; these are covered by kernel-checked regression tests. AST reductions are measured; runtime speedups have not been established.
