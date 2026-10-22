import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Passes.SafePass
import Rv2Pancake.Passes.SymCheck

namespace Rv2Pancake.Passes

open Rv2Pancake.Spec

theorem assign_self_equiv (v : VarId) : StmtEquiv (.assign v (.var v)) .skip := by
  intro st
  cases st with
  | mk vars mem =>
    simp only [execStmt, evalExp, setVar, PanState.mk.injEq, and_true]
    funext x
    by_cases h : x = v
    · subst h; simp
    · simp [h]

def elimSelfAssign : PanProg → PanProg
  | .skip          => .skip
  | .assign v (.var v') => if v == v' then .skip else .assign v (.var v')
  | .assign v e    => .assign v (simpExp e)
  | .store a e     => .store (simpExp a) (simpExp e)
  | .seq p1 p2     =>
    match elimSelfAssign p1 with
    | .skip => elimSelfAssign p2
    | p1'   => .seq p1' (elimSelfAssign p2)
  | .ifElse c t f  => .ifElse (simpExp c) (elimSelfAssign t) (elimSelfAssign f)
  | .whileLoop c b => .whileLoop (simpExp c) (elimSelfAssign b)

theorem elimSelfAssign_equiv (p : PanProg) : StmtEquiv p (elimSelfAssign p) := by
  induction p with
  | skip => exact StmtEquiv.refl _
  | assign v e =>
    cases e with
    | const w => exact StmtEquiv.refl _
    | var v' =>
      intro st
      dsimp [elimSelfAssign]
      by_cases h : v = v'
      · subst h
        simp [assign_self_equiv v st]
      · have hb : (v == v') = false := beq_false_of_ne h
        simp [hb]
    | load addr =>
      intro st
      simp [elimSelfAssign, execStmt, simpExp, evalExp, evalExp_simpExp]
    | binOp op e1 e2 =>
      intro st
      simp [elimSelfAssign, execStmt, simpExp, evalExp, evalExp_simpBinOp, evalExp_simpExp]
  | store a e =>
    intro st
    simp [elimSelfAssign, execStmt, evalExp_simpExp]
  | seq p1 p2 ih1 ih2 =>
    intro st
    dsimp [elimSelfAssign, execStmt]
    rw [ih1 st, ih2 (execStmt st (elimSelfAssign p1))]
    generalize elimSelfAssign p1 = p1'
    cases p1' <;> rfl
  | ifElse c t f iht ihf =>
    intro st
    dsimp [elimSelfAssign, execStmt]
    rw [evalExp_simpExp st c]
    split
    · exact iht st
    · exact ihf st
  | whileLoop c b _ =>
    intro st
    rfl

theorem elimSelfAssign_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (elimSelfAssign p) = true := by
  induction p with
  | skip => rfl
  | assign v e =>
    cases e with
    | var v' =>
      dsimp [elimSelfAssign]
      split <;> rfl
    | _ => rfl
  | store a e => rfl
  | seq p1 p2 ih1 ih2 =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    have h1 := ih1 h.1
    have h2 := ih2 h.2
    dsimp [elimSelfAssign]
    split
    · exact h2
    · simp [isLoopFree, h1, h2]
  | ifElse c t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    simp [elimSelfAssign, isLoopFree, iht h.1, ihf h.2]
  | whileLoop c b _ =>
    simp [isLoopFree] at h

def proposeDeadRegElim : PanProg → PanProg := elimSelfAssign

def checkDeadRegElim (p p' : PanProg) : Bool :=
  (elimSelfAssign p == elimSelfAssign p') && isLoopFree p'

theorem checkDeadRegElim_sound (p p' : PanProg) (h : checkDeadRegElim p p' = true) : StmtEquiv p p' := by
  simp only [checkDeadRegElim, Bool.and_eq_true, beq_iff_eq] at h
  have h1 : StmtEquiv p (elimSelfAssign p) := elimSelfAssign_equiv p
  have h2 : StmtEquiv (elimSelfAssign p') p' := (elimSelfAssign_equiv p').symm
  rw [h.1] at h1
  exact StmtEquiv.trans h1 h2

def deadRegElimPass : VerifiedStmtPass where
  name    := "deadRegElim"
  propose := proposeDeadRegElim
  check   := checkDeadRegElim
  sound   := checkDeadRegElim_sound

theorem deadRegElimPass_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (deadRegElimPass.apply p) = true := by
  dsimp [VerifiedStmtPass.apply, deadRegElimPass]
  split
  · next hc =>
    simp only [checkDeadRegElim, Bool.and_eq_true] at hc
    exact hc.2
  · exact h

end Rv2Pancake.Passes
