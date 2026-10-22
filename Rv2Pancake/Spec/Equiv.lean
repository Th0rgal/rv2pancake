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
      else if v == haltVar then (if rv.halted then 1 else 0)
      else if v == retVar then rv.retVal
      else if 1 ≤ v ∧ v ≤ 31 then readReg rv.regs v
      else 0
  , mem := rv.mem }

/-- Theorem: `initPanState` always satisfies `SimRel`. -/
theorem initPanState_sim (rv : RVState) : SimRel rv (initPanState rv) := by
  refine ⟨?_, ?_, ?_⟩
  · simp [initPanState, pcVar]
  · intro (r : Nat) hr1 hr31
    have hne0 : r ≠ 0 := Nat.ne_of_gt (Nat.lt_of_lt_of_le Nat.zero_lt_one hr1)
    have hne32 : r ≠ 32 := Nat.ne_of_lt (Nat.lt_of_le_of_lt hr31 (by decide))
    have hne33 : r ≠ 33 := Nat.ne_of_lt (Nat.lt_of_le_of_lt hr31 (by decide))
    simp [initPanState, regVar, pcVar, haltVar, retVar, hne0, hne32, hne33, hr1, hr31]
  · intro addr
    rfl

/-- Minimal Black-Box Observational Equivalence (`ObsEquiv` — Minimal Spec TCB):
    Two states (or RISC-V vs Pancake states) are observationally equivalent at halt (`pc == 0`)
    iff they agree on the return register `a0` (`x10`) and on all memory words `mem`.
    Crucially, `pcVar` and dead temporary registers are treated as ghost state so passes
    can legally fuse multiple PCs and eliminate intermediate `pc` assignments. -/
structure ObsState where
  retWord : Word
  mem     : Mem

/-- Extract the external observation `(a0 / x10, mem)` from a RISC-V state. -/
def observeRV (rv : RVState) : ObsState :=
  { retWord := readReg rv.regs 10, mem := rv.mem }

/-- Extract the external observation `(x10, mem)` from a Pancake state. -/
def observePan (pan : PanState) : ObsState :=
  { retWord := pan.vars (regVar 10), mem := pan.mem }

/-- Minimal Observational Equivalence between a RISC-V state and a Pancake state. -/
def ObsEquivRVPan (rv : RVState) (pan : PanState) : Prop :=
  pan.vars (regVar 10) = readReg rv.regs 10 ∧ ∀ addr : Word, pan.mem addr = rv.mem addr

/-- Theorem: Full simulation `SimRel` immediately implies minimal observational equivalence `ObsEquivRVPan`. -/
theorem SimRel.toObsEquiv {rv : RVState} {pan : PanState} (h : SimRel rv pan) :
    ObsEquivRVPan rv pan :=
  ⟨h.regs_eq 10 (by decide) (by decide), h.mem_eq⟩

/-- Minimal Observational Equivalence between two Pancake programs under `evalPan`. -/
def ObsEquiv (p1 p2 : PanProg) : Prop :=
  ∀ (fuel : Nat) (st : PanState),
    (evalPan fuel st p1).vars (regVar 10) = (evalPan fuel st p2).vars (regVar 10) ∧
    (evalPan fuel st p1).mem = (evalPan fuel st p2).mem

theorem ObsEquiv.refl (p : PanProg) : ObsEquiv p p :=
  fun _ _ => ⟨rfl, rfl⟩

theorem ObsEquiv.symm {p1 p2 : PanProg} (h : ObsEquiv p1 p2) : ObsEquiv p2 p1 :=
  fun fuel st => ⟨(h fuel st).1.symm, (h fuel st).2.symm⟩

theorem ObsEquiv.trans {p1 p2 p3 : PanProg} (h1 : ObsEquiv p1 p2) (h2 : ObsEquiv p2 p3) :
    ObsEquiv p1 p3 :=
  fun fuel st => ⟨(h1 fuel st).1.trans (h2 fuel st).1, (h1 fuel st).2.trans (h2 fuel st).2⟩

/-- Equivalence of two Pancake programs under `execStmt` (`StmtEquiv`):
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

theorem PanEquiv.symm {p1 p2 : PanProg} (h : PanEquiv p1 p2) : PanEquiv p2 p1 :=
  fun fuel st => (h fuel st).symm

theorem PanEquiv.trans {p1 p2 p3 : PanProg} (h1 : PanEquiv p1 p2) (h2 : PanEquiv p2 p3) :
    PanEquiv p1 p3 :=
  fun fuel st => (h1 fuel st).trans (h2 fuel st)

/-- Theorem: `PanEquiv` implies minimal observational equivalence `ObsEquiv`. -/
theorem PanEquiv.toObsEquiv {p1 p2 : PanProg} (h : PanEquiv p1 p2) : ObsEquiv p1 p2 :=
  fun fuel st => by rw [h fuel st]; exact ⟨rfl, rfl⟩

end Rv2Pancake.Spec
