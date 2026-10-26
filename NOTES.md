# Progress & Architecture Notes (`flapjack-flip` & `rv2pancake`)

## 1. Historical ungated Test Results (`FlapjackFlip/Lift.lean`)
- **Visible test suite (`tests/`)**: **120 / 120 PASS (100%)** via `lake exe flip-check tests`.
  - **20 / 20 hand-written tests PASS**:
    `00_hello`, `01_echo`, `02_arith`, `03_shifts`, `04_compare`,
    `05_if_else`, `06_sum_loop`, `07_break_continue`, `08_calls`, `09_recursion`,
    `10_globals`, `11_memory_widths`, `12_structs`, `13_exceptions`, `14_ffi_conf`,
    `15_nested_loops`, `16_sort`, `17_checksum`, `18_collatz`, `19_early_return`.
  - **100 / 100 generated tests (`gen_0_000` .. `gen_0_099`) PASS**.
- **Synthetic hidden test suites (`scripts/gen_tests.py`)**: **500 / 500 PASS (100%)** across seeds `42` (100), `999` (340), and `777` (60).
- **Token budget**: Every decompiled program stays well within the `4 * tokenCount(originalSource)` limit.
- **Recompilation & execution**: Every decompiled program compiles cleanly via `FlapjackFlip.compile` and produces the exact same FFI event trace and termination status on all 5 test inputs (`FlapjackFlip.Harness.inputs`).

## 2. How `FlapjackFlip/Lift.lean` Works
1. **Runtime Prefix Skipping**: Instructions `0..249` are always the fixed CakeML/Pancake startup stub (`initStubs`, `gcStub`, `raiseStub`, `storeConstsStub`); user code (`main`) starts at instruction `250`.
2. **Function Boundary Recovery**: Scans `250..nIns` for `AUIPC x1, 0; ADDI x1, x1, 12; JAL x0, offset` call sites whose target `>= 250` to partition the instruction stream into functions (`main` at `250`, `fn_<pc>` for callees).
3. **Loop & Branch Structuring**:
   - Detects backward `JAL x0` edges to loop headers `(hdr, b1, jExit, b2)` emitted by `StackToLab.flattenHOL (.loop body)` and structures them into `while 1 { ... }` with `break;` and `continue;`.
   - Structures forward conditional branches (`BEQ`, `BNE`, `BLT`, `BGE`, `BLTU`, `BGEU`) into `if ... { ... } else { ... }` blocks, handling early returns, tail calls, and loop breaks/continues.
4. **Calling Convention, Stack Frames, Globals & Exceptions**:
   - Maps stack-frame loads/stores (`LD`/`SD` relative to `x24`) to local variables `s0, s1, ...`.
   - Maps `@base` (`x26`) and `@top` (`x25 = @base + 4194304`) offsets, including exception ID slot `x25 - 136` (`@base + 4194168`).
   - Handles 32-bit unsigned loads (`LWU`) via aligned 64-bit `lds 1` + shift + mask, 32-bit/64-bit constant materialization (`LUI` + `ADDI`/`XORI` + `SLLI 32` + `OR`), FFI calls (`tgtInt <= -12`), and raw halt (`tgtInt == -4`).
   - Preserves multi-word struct returns (`{1, 1, 1}`) and exception handler dispatch (`PushHandler` / `PopHandler` patterns).

## 3. Prototype Scripts Saved
- `scripts/proto_decompile.py`: Python prototype of the structured RV64IM-to-Pancake lifter.
- `scripts/disasm_tests.py`: Helper to inspect decoded instructions across `tests/*/image.fjimg`.

## 4. Flapjack certification boundary

These files are not built by this repository's `lakefile.lean`. The challenge harness and dependencies live in a separate project; no current certified coverage count is established here.
- `FlapjackFlip/Soundness.lean` contains a proof of `decompile_sound` without a `sorry` placeholder by returning a candidate only when recompilation reproduces the complete input image.
- This exact-image gate is intentionally conservative: behavior-preserving lifted programs whose compiler layout differs are rejected. The historical visible-suite count above must not be attributed to this gated decompiler.
- `DecompilerSound decompile` requires:
  `∀ img src, decompile img = .ok src → ∃ img', compile src = .ok img' ∧ Equivalent img img'`.
- Key facts established:
  1. `Flapjack.RiscV.NativeSource.compile` is invariant to function and variable names for structurally matching ASTs.
  2. General lifted programs where `img' != img` still require a proved simulation/equivalence checker `checkEquiv img img' = true → Equivalent img img'` or exact AST synthesis.

## 5. Validation entry point
- Run `scripts/validate.sh` for the release gate. It builds the project and runs all seven self-test benchmarks.
- `Tests/AxiomAudit.lean` always audits all production theorem dependencies, including generated theorems, allowing only `propext`, `Classical.choice`, and `Quot.sound`. Benchmark-only `native_decide` lemmas are outside this production proof boundary.
- When `turbo-lean` is on PATH, validation also checks `Rv2Pancake/Pipeline.lean`. Flapjack is explicitly excluded from core validation; this checkout has no nested acceptance workflow.
