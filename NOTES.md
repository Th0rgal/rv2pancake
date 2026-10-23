# Progress & Architecture Notes (`rv2pancake` & `flapjack-flip`)

## 1. `flapjack-flip` Decompiler Status
- Ported the structured RV64IM-to-Pancake lifter to Lean 4 (`FlapjackFlip/Lift.lean`) and also preserved the prototype in `scripts/proto_decompile.py` and `Rv2Pancake/FlapjackBridge.lean`.
- **Visible test suite (`tests/`)**: **120 / 120 PASS (100%)** (`20/20` handwritten tests `00_hello`..`19_early_return` + `100/100` random generated tests `gen_0_000`..`gen_0_099`).
- **Synthetic hidden test suites (`scripts/gen_tests.py`)**: **500 / 500 PASS (100%)** across seeds `42`, `999`, and `777`.
- All 120 visible and 500 hidden tests recompile with Flapjack within the `4x` Pancake token budget and match the exact FFI trace and halt status on all 5 test inputs.

## 2. `rv2pancake` Verified Pipeline Status
- **131 kernel-checked theorems, 0 `sorryAx`**, covering:
  - Minimal observational specification (`ObsEquiv` / `ObsEquivRVPan` on `a0` and `mem` upon `pc = 0`).
  - Full RV64IM instruction lifter (`add/sub/mul/divu/remu`, `*w` 32-bit word ops, shifts, branches, `jal`/`jalr`, `ld`/`sd`, `lui`/`auipc`) and strict ELF64 loader.
  - Verified translation validation (`SymCheck`) and superblock fusion (`BlockFusion`), reducing `pc == addr` dispatcher checks by 78%–85% (and 100% with entry-PC specialization).
  - Four quality meta-specs (MS1 Non-Vacuity, MS2 Strict ISA Conformance, MS3 Structural Progress & DQ Score, MS4 Validator Sensitivity).

## 3. Next Steps
1. Add `Rv2Pancake/FlapjackBridge.lean` so `rv2pancake` directly exposes the Flapjack `.fjimg` decompiler alongside the verified ELF64 RV64IM lifter.
2. Complete the `decompile_sound` proof in `flapjack-flip/FlapjackFlip/Soundness.lean` (`0 sorryAx`, `0 native_decide`).
