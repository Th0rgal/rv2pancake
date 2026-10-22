import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Passes.SafePass
import Rv2Pancake.Passes.SymCheck

namespace Rv2Pancake.Passes

open Rv2Pancake.Spec

theorem ifElse_same_equiv (c : PanExp) (b : PanProg) : StmtEquiv (.ifElse c b b) b := by
  intro st
  simp only [execStmt]
  split <;> rfl

theorem ifElse_const_zero_equiv (t f : PanProg) : StmtEquiv (.ifElse (.const 0) t f) f := by
  intro st
  simp [execStmt, evalExp]

def reconIfElse : PanProg → PanProg
  | .skip => .skip
  | .assign v e => .assign v (simpExp e)
  | .store a e => .store (simpExp a) (simpExp e)
  | .seq p1 p2 => .seq (reconIfElse p1) (reconIfElse p2)
  | .ifElse c t f =>
    let c' := simpExp c
    let t' := reconIfElse t
    let f' := reconIfElse f
    match c' with
    | .const w => if w != 0 then t' else f'
    | _ =>
      if t' == f' then t'
      else .ifElse c' t' f'
  | .whileLoop c b => .whileLoop (simpExp c) (reconIfElse b)

theorem reconIfElse_equiv (p : PanProg) : StmtEquiv p (reconIfElse p) := by
  induction p with
  | skip => exact StmtEquiv.refl _
  | assign v e =>
    intro st
    simp [reconIfElse, execStmt, evalExp_simpExp]
  | store a e =>
    intro st
    simp [reconIfElse, execStmt, evalExp_simpExp]
  | seq p1 p2 ih1 ih2 =>
    intro st
    simp only [reconIfElse, execStmt]
    rw [ih1 st, ih2 (execStmt st (reconIfElse p1))]
  | ifElse c t f iht ihf =>
    intro st
    dsimp [reconIfElse]
    have hc := evalExp_simpExp st c
    generalize hce : simpExp c = c'
    rw [hce] at hc
    cases c' with
    | const w =>
      dsimp
      by_cases hw : (w != 0) = true
      · simp [execStmt, ← hc, evalExp, hw, iht st]
      · have hwf : (w != 0) = false := Bool.eq_false_iff.mpr hw
        simp [execStmt, ← hc, evalExp, hwf, ihf st]
    | _ =>
      dsimp
      split
      · next htf =>
        have htf' : reconIfElse t = reconIfElse f := eq_of_beq htf
        simp only [execStmt, ← hc]
        split
        · exact iht st
        · rw [ihf st, ← htf']
      · simp only [execStmt, ← hc]
        split
        · exact iht st
        · exact ihf st
  | whileLoop c b _ =>
    intro st
    rfl

theorem reconIfElse_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (reconIfElse p) = true := by
  induction p with
  | skip => rfl
  | assign v e => rfl
  | store a e => rfl
  | seq p1 p2 ih1 ih2 =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    simp only [reconIfElse, isLoopFree, Bool.and_eq_true]
    exact ⟨ih1 h.1, ih2 h.2⟩
  | ifElse c t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    dsimp [reconIfElse]
    generalize simpExp c = c'
    cases c' with
    | const w =>
      dsimp
      split
      · exact iht h.1
      · exact ihf h.2
    | _ =>
      dsimp
      split
      · exact iht h.1
      · simp only [isLoopFree, Bool.and_eq_true]
        exact ⟨iht h.1, ihf h.2⟩
  | whileLoop c b _ =>
    simp [isLoopFree] at h

def proposeIfElseRecon : PanProg → PanProg := reconIfElse

def checkIfElseRecon (p p' : PanProg) : Bool :=
  (reconIfElse p == reconIfElse p') && isLoopFree p'

theorem checkIfElseRecon_sound (p p' : PanProg) (h : checkIfElseRecon p p' = true) :
    StmtEquiv p p' := by
  simp only [checkIfElseRecon, Bool.and_eq_true] at h
  have heq : reconIfElse p = reconIfElse p' := eq_of_beq h.1
  have h1 : StmtEquiv p (reconIfElse p) := reconIfElse_equiv p
  have h2 : StmtEquiv p' (reconIfElse p') := reconIfElse_equiv p'
  intro st
  rw [h1 st, heq, ← h2 st]

def ifElseReconPass : VerifiedStmtPass where
  name := "ifElseRecon"
  propose := proposeIfElseRecon
  check := checkIfElseRecon
  sound := checkIfElseRecon_sound

theorem ifElseReconPass_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (ifElseReconPass.apply p) = true := by
  dsimp [VerifiedStmtPass.apply, ifElseReconPass, proposeIfElseRecon]
  split
  · exact reconIfElse_isLoopFree p h
  · exact h

end Rv2Pancake.Passes
