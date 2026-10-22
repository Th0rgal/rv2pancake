import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Passes.SafePass

namespace Rv2Pancake.Passes

open Rv2Pancake.Spec

theorem seq_skip_left (p : PanProg) : StmtEquiv (.seq .skip p) p := by
  intro st
  rfl

theorem seq_skip_right (p : PanProg) : StmtEquiv (.seq p .skip) p := by
  intro st
  rfl

theorem seq_assoc (p1 p2 p3 : PanProg) : StmtEquiv (.seq (.seq p1 p2) p3) (.seq p1 (.seq p2 p3)) := by
  intro st
  rfl

def appendSeq (p1 p2 : PanProg) : PanProg :=
  match p1, p2 with
  | .skip, q      => q
  | p, .skip      => p
  | .seq a b, q   => .seq a (appendSeq b q)
  | p, q          => .seq p q

theorem appendSeq_equiv (p1 p2 : PanProg) : StmtEquiv (appendSeq p1 p2) (.seq p1 p2) := by
  induction p1 with
  | skip =>
    intro st
    rfl
  | seq a b _ ihb =>
    intro st
    cases p2 with
    | skip => rfl
    | _ => exact ihb (execStmt st a)
  | _ =>
    intro st
    cases p2 <;> rfl

theorem appendSeq_isLoopFree (p1 p2 : PanProg) (h1 : isLoopFree p1 = true) (h2 : isLoopFree p2 = true) :
    isLoopFree (appendSeq p1 p2) = true := by
  induction p1 with
  | skip => exact h2
  | seq a b _ ihb =>
    simp only [isLoopFree, Bool.and_eq_true] at h1
    cases p2 with
    | skip => simp [appendSeq, isLoopFree, h1.1, h1.2]
    | _ => simp [appendSeq, isLoopFree, h1.1, ihb h1.2]
  | _ =>
    cases p2 with
    | skip => exact h1
    | _ =>
      change (isLoopFree _ && isLoopFree _) = true
      rw [h1, h2]
      rfl

def fuseSeqs : PanProg → PanProg
  | .skip          => .skip
  | .assign v e    => .assign v e
  | .store a e     => .store a e
  | .seq p1 p2     => appendSeq (fuseSeqs p1) (fuseSeqs p2)
  | .ifElse c t f  => .ifElse c (fuseSeqs t) (fuseSeqs f)
  | .whileLoop c b => .whileLoop c (fuseSeqs b)

theorem fuseSeqs_equiv (p : PanProg) : StmtEquiv p (fuseSeqs p) := by
  induction p with
  | skip => exact StmtEquiv.refl _
  | assign v e => exact StmtEquiv.refl _
  | store a e => exact StmtEquiv.refl _
  | seq p1 p2 ih1 ih2 =>
    intro st
    have hm := (appendSeq_equiv (fuseSeqs p1) (fuseSeqs p2)) st
    rw [fuseSeqs, hm]
    dsimp [execStmt]
    rw [ih1 st, ih2 (execStmt st (fuseSeqs p1))]
  | ifElse c t f iht ihf =>
    intro st
    dsimp [fuseSeqs, execStmt]
    split
    · exact iht st
    · exact ihf st
  | whileLoop c b _ =>
    intro st
    rfl

theorem fuseSeqs_isLoopFree (p : PanProg) (h : isLoopFree p = true) : isLoopFree (fuseSeqs p) = true := by
  induction p with
  | skip => rfl
  | assign v e => rfl
  | store a e => rfl
  | seq p1 p2 ih1 ih2 =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    exact appendSeq_isLoopFree (fuseSeqs p1) (fuseSeqs p2) (ih1 h.1) (ih2 h.2)
  | ifElse c t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    simp [fuseSeqs, isLoopFree, iht h.1, ihf h.2]
  | whileLoop c b _ =>
    simp [isLoopFree] at h

def proposeBlockFusion : PanProg → PanProg := fuseSeqs

def checkBlockFusion (p p' : PanProg) : Bool :=
  (fuseSeqs p == fuseSeqs p') && isLoopFree p'

theorem checkBlockFusion_sound (p p' : PanProg) (h : checkBlockFusion p p' = true) : StmtEquiv p p' := by
  simp only [checkBlockFusion, Bool.and_eq_true, beq_iff_eq] at h
  have h1 : StmtEquiv p (fuseSeqs p) := fuseSeqs_equiv p
  have h2 : StmtEquiv (fuseSeqs p') p' := (fuseSeqs_equiv p').symm
  rw [h.1] at h1
  exact StmtEquiv.trans h1 h2

def blockFusionPass : VerifiedStmtPass where
  name    := "blockFusion"
  propose := proposeBlockFusion
  check   := checkBlockFusion
  sound   := checkBlockFusion_sound

theorem blockFusionPass_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (blockFusionPass.apply p) = true := by
  dsimp [VerifiedStmtPass.apply, blockFusionPass]
  split
  · next hc =>
    simp only [checkBlockFusion, Bool.and_eq_true] at hc
    exact hc.2
  · exact h

end Rv2Pancake.Passes
