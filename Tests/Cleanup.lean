import Rv2Pancake.Passes.DeadRegElim

/-! Kernel-reduced regressions for adjacent dead-store cleanup. -/
namespace Rv2Pancake.Tests.Cleanup

open Spec Passes

def returnWrite : PanProg := .assign retVar (.var 10)
def increment : PanProg := .assign 10 (.binOp .add (.var 10) (.const 1))
def pointerLoad : PanProg := .assign 10 (.load (.var 10))

theorem duplicate_chain_collapses :
    deadRegElimPass.apply (.seq returnWrite (.seq returnWrite returnWrite)) =
      returnWrite := by decide

theorem duplicate_prefix_collapses_with_tail :
    deadRegElimPass.apply
      (.seq returnWrite (.seq returnWrite (.assign pcVar (.const 0)))) =
      .seq returnWrite (.assign pcVar (.const 0)) := by decide

/-- Repeated increments must execute twice: syntactic repetition alone is unsafe. -/
theorem dependent_increments_retained :
    deadRegElimPass.apply (.seq increment increment) = .seq increment increment := by decide

/-- The second load uses the pointer produced by the first load. -/
theorem dependent_load_addresses_retained :
    deadRegElimPass.apply (.seq pointerLoad pointerLoad) = .seq pointerLoad pointerLoad := by decide

theorem different_register_writes_retained :
    let p := .seq returnWrite (.assign 10 (.const 7))
    deadRegElimPass.apply p = p := by decide

/-- A store between two loads can change the loaded value. -/
theorem intervening_store_preserved :
    let read := PanProg.assign 10 (.load (.const 4096))
    let p := .seq read (.seq (.store (.const 4096) (.const 7)) read)
    deadRegElimPass.apply p = p := by decide

/-- The checker rejects deleting a live return assignment, even in a duplicate chain. -/
theorem rejects_live_write_deletion :
    checkDeadRegElim (.seq returnWrite returnWrite) .skip = false := by decide

theorem rejects_dependent_increment_deletion :
    checkDeadRegElim (.seq increment increment) increment = false := by decide

/-- `execStmt` soundness applies to loop-free dispatcher bodies. -/
theorem rejects_loop_candidate :
    let p := PanProg.whileLoop (.const 1) returnWrite
    checkDeadRegElim p p = false := by decide

end Rv2Pancake.Tests.Cleanup
