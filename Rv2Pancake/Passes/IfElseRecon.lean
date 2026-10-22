import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Passes.SafePass

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
  | .assign v e => .assign v e
  | .store a e => .store a e
  | .seq p1 p2 => .seq (reconIfElse p1) (reconIfElse p2)
  | .ifElse c t f =>
    let t' := reconIfElse t
    let f' := reconIfElse f
    if c == .const 0 then f'
    else if t' == f' then t'
    else .ifElse c t' f'
  | .whileLoop c b => .whileLoop c (reconIfElse b)

theorem reconIfElse_equiv (p : PanProg) : StmtEquiv p (reconIfElse p) := by
  induction p with
  | skip => exact StmtEquiv.refl _
  | assign v e => exact StmtEquiv.refl _
  | store a e => exact StmtEquiv.refl _
  | seq p1 p2 ih1 ih2 =>
    intro st
    simp only [reconIfElse, execStmt]
    rw [ih1 st, ih2 (execStmt st (reconIfElse p1))]
  | ifElse c t f iht ihf =>
    intro st
    simp only [reconIfElse]
    split
    · next hc =>
      have hc' : c = .const 0 := eq_of_beq hc
      subst hc'
      have h0 := ifElse_const_zero_equiv t f st
      rw [h0, ihf st]
    · split
      · next htf =>
        have htf' : reconIfElse t = reconIfElse f := eq_of_beq htf
        simp only [execStmt]
        split
        · exact iht st
        · rw [ihf st, ← htf']
      · simp only [execStmt]
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
    simp only [reconIfElse]
    split
    · exact ihf h.2
    · split
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
