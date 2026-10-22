import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem

namespace Rv2Pancake.Spec

/-- State correspondence (`SimRel`) between a RISC-V machine state and a Pancake state:
    1. `pc` matches `vars pcVar` (var 0) whenever not halted.
    2. Every architectural register `r ∈ 1..31` matches `vars r`.
    3. Memory `mem` is identical. -/
structure SimRel (rv : RVState) (pan : PanState) : Prop where
  pc_eq   : pan.vars pcVar = (if rv.halted then 0 else rv.pc)
  regs_eq : ∀ r : RegIdx, 1 ≤ r → r ≤ 31 → pan.vars (regVar r) = readReg rv.regs r
  mem_eq  : ∀ addr : Word, pan.mem addr = rv.mem addr

/-- Construct the canonical initial Pancake state from a RISC-V state. -/
def initPanState (rv : RVState) : PanState :=
  { vars := fun v =>
      if v == pcVar then (if rv.halted then 0 else rv.pc)
      else if 1 ≤ v ∧ v ≤ 31 then readReg rv.regs v
      else 0
  , mem := rv.mem }

/-- Theorem: `initPanState` always satisfies `SimRel`. -/
theorem initPanState_sim (rv : RVState) : SimRel rv (initPanState rv) := by
  refine ⟨?_, ?_, ?_⟩
  · simp [initPanState, pcVar]
  · intro (r : Nat) hr1 hr31
    have hne : r ≠ 0 := Nat.ne_of_gt (Nat.lt_of_lt_of_le Nat.zero_lt_one hr1)
    simp [initPanState, regVar, pcVar, hne, hr1, hr31]
  · intro addr
    rfl

/-- Equivalence of two Pancake programs under `execStmt` (`ProgEquiv`):
    For all states `st`, executing `p1` produces the exact same variable and memory state as `p2`. -/
def StmtEquiv (p1 p2 : PanProg) : Prop :=
  ∀ st : PanState, execStmt st p1 = execStmt st p2

theorem StmtEquiv.refl (p : PanProg) : StmtEquiv p p :=
  fun _ => rfl

theorem StmtEquiv.symm {p1 p2 : PanProg} (h : StmtEquiv p1 p2) : StmtEquiv p2 p1 :=
  fun st => (h st).symm

theorem StmtEquiv.trans {p1 p2 p3 : PanProg} (h1 : StmtEquiv p1 p2) (h2 : StmtEquiv p2 p3) :
    StmtEquiv p1 p3 :=
  fun st => (h1 st).trans (h2 st)

/-- Full program equivalence under `evalPan` for any fuel budget. -/
def PanEquiv (p1 p2 : PanProg) : Prop :=
  ∀ (fuel : Nat) (st : PanState), evalPan fuel st p1 = evalPan fuel st p2

theorem PanEquiv.refl (p : PanProg) : PanEquiv p p :=
  fun _ _ => rfl

theorem PanEquiv.trans {p1 p2 p3 : PanProg} (h1 : PanEquiv p1 p2) (h2 : PanEquiv p2 p3) :
    PanEquiv p1 p3 :=
  fun fuel st => (h1 fuel st).trans (h2 fuel st)

end Rv2Pancake.Spec
