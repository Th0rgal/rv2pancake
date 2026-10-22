# rv2pancake

A formally verified RISC-V 64-bit (`RV64IM`) to CakeML Pancake decompiler written in **Lean 4** (`v4.35.0`), built around a **Minimal Observational Specification** (`ObsEquiv`) and **Verified Translation Validation** (`0 sorryAx`, `131` kernel-checked theorems).

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
4. **Four Quality Meta-Specs (`Rv2Pancake/Spec/MetaSpecs.lean` & `Tests/RoundTripTest.lean`)**:
   - **MS1 (Non-Vacuity)**: Concrete end-to-end execution equivalence across 7 graduated RV64IM benchmarks (`N1a`–`N5` + `Silver GCD`).
   - **MS2 (Strict ISA Conformance)**: Kernel-checked (`by decide`) rejection of illegal RV64 words and exact decoding of RV64IM instructions.
   - **MS3 (Structural Progress & DQ Score)**: Formal proofs that `0 + e` artifacts drop to `0` and superblock fusion strictly reduces `pc == addr` checks.
   - **MS4 (Validator Sensitivity)**: Kernel-checked (`by decide`) mutation tests proving the validators reject register, constant, and loop mutations.

## Minimal Example

Given a 4-instruction RV64I program (`N1a: alu_basic`):

```asm
0x1000: addi x1, x0, 10
0x1004: addi x2, x0, 15
0x1008: add  x10, x1, x2
0x100c: jalr x0, x0, 0      # return (pc = 0)
```

- **Raw lifted dispatcher (`baseLift`)**: 4 separate `if (pc == addr)` branches inside `while (pc != 0)` with `0 + 10` and `0 + 15` artifacts (`AST size = 612`, `PC checks = 20`, `Zero-Adds = 8`).
- **Verified superblock output (`decompileSuperblock`)**: folds the entire path `0x1000 -> 0x1004 -> 0x1008 -> 0x100c -> 0` into a single constant-propagated block (`AST size = 89`, `PC checks = 3`, `Zero-Adds = 0`, `DQ = 885‰`):

```pancake
if ((pc == 4096)) {
  x1 = 10;
  x2 = 15;
  x10 = 25;
  pc = 0;
}
```

And with entry-PC specialization (`ms3_entrySpec_eliminates_all_pcChecks_callStackN5`), even a program with stack spills (`sd`/`ld`) and subroutine calls (`jal`/`jalr`) collapses from `11` `pc == addr` checks down to **`0`**.

## Benchmark Results (`rv2pancake --self-test`)

| Benchmark | Return (`a0`) | AST (`Raw -> Opt`) | `PC Checks` (`Raw -> Super`) | `Zero-Adds` (`Raw -> Opt`) | `DQ` Score |
| :--- | :---: | :---: | :---: | :---: | :---: |
| `N1a: alu_basic` | `25` | `612 -> 89` | `20 -> 3` (-85%) | `8 -> 0` | `885‰` |
| `N1b: rv64im_mul_div_w` | `42` | `2704 -> 246` | `50 -> 8` (-84%) | `15 -> 0` | `894‰` |
| `N2 : branch_diamond` | `42` | `1347 -> 176` | `32 -> 6` (-81%) | `16 -> 0` | `858‰` |
| `N3 : sum_loop_1_to_10` | `55` | `1665 -> 220` | `36 -> 7` (-81%) | `12 -> 0` | `836‰` |
| `N4 : fib_10_mem_ld_sd` | `55` | `3316 -> 283` | `52 -> 11` (-79%) | `28 -> 0` | `848‰` |
| `N5 : call_stack_jalr` | `100` | `1049 -> 287` | `11 -> 0` (entry-spec) | `8 -> 0` | `437‰` (`1000‰` entry-spec) |
| `SLV: silver_gcd_48_18` | `6` | `2017 -> 206` | `40 -> 8` (-80%) | `20 -> 0` | `850‰` |

## Build & Run

```bash
lake build
.lake/build/bin/rv2pancake --self-test
.lake/build/bin/rv2pancake path/to/binary.elf
```
