# Progress & Architecture Notes (`flapjack-flip` & `rv2pancake`)

## 1. Current Test Results (`FlapjackFlip/Lift.lean`)
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

## 4. What Remains for `scripts/accept.sh` Criterion 2 (`decompile_sound`)
- Currently `FlapjackFlip/Soundness.lean` has `Refines.refl` and `Equivalent.refl` proved, and `decompile_sound` has a `sorry` placeholder.
- `DecompilerSound decompile` requires:
  `∀ img src, decompile img = .ok src → ∃ img', compile src = .ok img' ∧ Equivalent img img'`.
- Key facts established:
  1. `Flapjack.RiscV.NativeSource.compile` is invariant to function and variable names (tested on `00_hello`..`19_early_return`: compiling structurally matching ASTs produces byte-for-byte identical `Image`, where `img' == img` gives `Equivalent.refl img`).
  2. For general lifted programs where `img' != img`, `Equivalent img img'` requires a proved simulation/equivalence checker `checkEquiv img img' = true → Equivalent img img'` or exact AST synthesis so `compile src == .ok img`.
