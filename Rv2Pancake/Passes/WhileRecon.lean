import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Passes.SafePass

namespace Rv2Pancake.Passes

open Rv2Pancake.Spec

theorem whileLoop_unroll_once (c : PanExp) (b : PanProg) (fuel : Nat) (st : PanState) :
    evalPan (fuel + 1) st (.whileLoop c b) =
      if evalExp st c != 0 then evalPan fuel (evalPan fuel st b) (.whileLoop c b) else st := by
  simp [evalPan]

def normLoopBody : PanProg → PanProg
  | .skip => .skip
  | .assign v e => .assign v e
  | .store a e => .store a e
  | .seq p1 p2 =>
    let p1' := normLoopBody p1
    let p2' := normLoopBody p2
    if p2' == .skip then p1'
    else .seq p1' p2'
  | .ifElse c t f => .ifElse c (normLoopBody t) (normLoopBody f)
  | .whileLoop c b => .whileLoop c (normLoopBody b)

theorem normLoopBody_equiv (p : PanProg) : StmtEquiv p (normLoopBody p) := by
  induction p with
  | skip => exact StmtEquiv.refl _
  | assign v e => exact StmtEquiv.refl _
  | store a e => exact StmtEquiv.refl _
  | seq p1 p2 ih1 ih2 =>
    intro st
    simp only [normLoopBody]
    split
    · next hp2 =>
      have hp2' : normLoopBody p2 = .skip := eq_of_beq hp2
      simp only [execStmt]
      rw [ih1 st, ih2 (execStmt st (normLoopBody p1)), hp2']
      rfl
    · simp only [execStmt]
      rw [ih1 st, ih2 (execStmt st (normLoopBody p1))]
  | ifElse c t f iht ihf =>
    intro st
    simp only [normLoopBody, execStmt]
    split
    · exact iht st
    · exact ihf st
  | whileLoop c b _ =>
    intro st
    rfl

theorem normLoopBody_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (normLoopBody p) = true := by
  induction p with
  | skip => rfl
  | assign v e => rfl
  | store a e => rfl
  | seq p1 p2 ih1 ih2 =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    simp only [normLoopBody]
    split
    · exact ih1 h.1
    · simp only [isLoopFree, Bool.and_eq_true]
      exact ⟨ih1 h.1, ih2 h.2⟩
  | ifElse c t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    simp only [normLoopBody, isLoopFree, Bool.and_eq_true]
    exact ⟨iht h.1, ihf h.2⟩
  | whileLoop c b _ =>
    simp [isLoopFree] at h

def proposeWhileRecon : PanProg → PanProg := normLoopBody

def checkWhileRecon (p p' : PanProg) : Bool :=
  (normLoopBody p == normLoopBody p') && isLoopFree p'

theorem checkWhileRecon_sound (p p' : PanProg) (h : checkWhileRecon p p' = true) :
    StmtEquiv p p' := by
  simp only [checkWhileRecon, Bool.and_eq_true] at h
  have heq : normLoopBody p = normLoopBody p' := eq_of_beq h.1
  have h1 : StmtEquiv p (normLoopBody p) := normLoopBody_equiv p
  have h2 : StmtEquiv p' (normLoopBody p') := normLoopBody_equiv p'
  intro st
  rw [h1 st, heq, ← h2 st]

def whileReconPass : VerifiedStmtPass where
  name := "whileRecon"
  propose := proposeWhileRecon
  check := checkWhileRecon
  sound := checkWhileRecon_sound

theorem whileReconPass_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (whileReconPass.apply p) = true := by
  dsimp [VerifiedStmtPass.apply, whileReconPass, proposeWhileRecon]
  split
  · exact normLoopBody_isLoopFree p h
  · exact h

end Rv2Pancake.Passes
