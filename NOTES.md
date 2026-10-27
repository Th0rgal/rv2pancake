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

These files are built separately using the pinned original challenge and its Lean
4.33.1 dependencies. `scripts/prepare-integration.py` preserves the frozen judge
and overlays this repository's non-frozen implementation modules.

- `checkCandidates_sound` proves soundness independently of candidate generation.
- Candidates are accepted only by exact-image equality or `checkDecoded_sound`.
- `checkDecoded` permits different encodings of the same modeled instructions,
  with equal code length, bitmaps and FFI names. It does not handle relocated code.
- `Simulation.sound` and `EquivalenceCertificate.sound` provide a proved framework
  for matching executions with different step counts; generating and checking
  layout-changing certificates remains unfinished.
- Straight-line reconstruction recovers exact images for five visible cases:
  hello, echo, arithmetic, FFI configuration and `gen_0_029`. It operates on the
  lifted binary, never the tests' source text. All returned candidates are checked.
- Current certified coverage is 5/120 visible; the historical 120/120 and 500/500
  results above still belong only to the ungated implementation.

## 5. Validation entry points

The core gate remains `scripts/validate.sh`. Integration commands, full release
thresholds, generated-suite pins, evidence paths and explicit pending milestones
are documented in [integration/ROADMAP.md](integration/ROADMAP.md).

The integration axiom audit walks all `FlapjackFlip` declarations and the frozen
`acceptance` root transitively, allowing only `propext`, `Classical.choice` and
`Quot.sound`. Certificate tests include metadata/instruction/length mutations and
a kernel-checked unequal-image witness. End-to-end smoke checks also reject a
corrupted runtime prefix. A passing proof job is not a passing full release gate.
