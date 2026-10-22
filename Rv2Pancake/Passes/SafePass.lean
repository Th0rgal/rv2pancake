import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv

namespace Rv2Pancake.Passes

open Rv2Pancake.Spec

/-- The CompCert-style `propose + check` verified pass combinator (`VerifiedStmtPass`).
    - `propose`: arbitrary untrusted heuristic transformation on `PanProg` (zero proof burden).
    - `check`: fast boolean validator checking that `p` and `p'` are semantically equivalent.
    - `sound`: one-time proof that whenever `check p p' = true`, `StmtEquiv p p'` holds. -/
structure VerifiedStmtPass where
  name    : String
  propose : PanProg → PanProg
  check   : PanProg → PanProg → Bool
  sound   : ∀ p p', check p p' = true → StmtEquiv p p'

/-- Apply a `VerifiedStmtPass` with automatic verified fallback:
    If `check p (propose p)` succeeds, returns `propose p`; otherwise returns `p` unchanged. -/
def VerifiedStmtPass.apply (vp : VerifiedStmtPass) (p : PanProg) : PanProg :=
  let p' := vp.propose p
  if vp.check p p' then p' else p

/-- Universal soundness theorem for `VerifiedStmtPass.apply`:
    Regardless of what `vp.propose` produces, `vp.apply p` is ALWAYS equivalent to `p`. -/
theorem VerifiedStmtPass.apply_sound (vp : VerifiedStmtPass) (p : PanProg) :
    StmtEquiv p (vp.apply p) := by
  dsimp [VerifiedStmtPass.apply]
  split
  · next h => exact vp.sound p (vp.propose p) h
  · exact StmtEquiv.refl p

/-- Compose two `VerifiedStmtPass` passes sequentially. -/
def VerifiedStmtPass.seq (vp1 vp2 : VerifiedStmtPass) (p : PanProg) : PanProg :=
  vp2.apply (vp1.apply p)

theorem VerifiedStmtPass.seq_sound (vp1 vp2 : VerifiedStmtPass) (p : PanProg) :
    StmtEquiv p (VerifiedStmtPass.seq vp1 vp2 p) := by
  exact StmtEquiv.trans (vp1.apply_sound p) (vp2.apply_sound (vp1.apply p))

/-- Apply a list of `VerifiedStmtPass` passes to the body of a `whileLoop` dispatcher. -/
def runPassPipeline (passes : List VerifiedStmtPass) (p : PanProg) : PanProg :=
  match passes with
  | [] => p
  | vp :: rest => runPassPipeline rest (vp.apply p)

theorem runPassPipeline_sound (passes : List VerifiedStmtPass) (p : PanProg) :
    StmtEquiv p (runPassPipeline passes p) := by
  induction passes generalizing p with
  | nil => exact StmtEquiv.refl p
  | cons vp rest ih =>
    exact StmtEquiv.trans (vp.apply_sound p) (ih (vp.apply p))

/-- Theorem: If two loop bodies are `StmtEquiv`, and neither contains nested `whileLoop`,
    then lifted `whileLoop` programs have identical execution for any fuel budget. -/
def isLoopFree : PanProg → Bool
  | .skip         => true
  | .assign _ _   => true
  | .store _ _    => true
  | .seq p1 p2    => isLoopFree p1 && isLoopFree p2
  | .ifElse _ t f => isLoopFree t && isLoopFree f
  | .whileLoop _ _ => false

theorem evalPan_eq_execStmt_of_isLoopFree (fuel : Nat) (st : PanState) (p : PanProg)
    (hlf : isLoopFree p = true) :
    evalPan fuel st p = execStmt st p := by
  induction p generalizing st with
  | skip => simp [evalPan, execStmt]
  | assign v e => simp [evalPan, execStmt]
  | store a e => simp [evalPan, execStmt]
  | seq p1 p2 ih1 ih2 =>
    simp only [isLoopFree, Bool.and_eq_true] at hlf
    simp only [evalPan, execStmt, ih1 st hlf.1, ih2 _ hlf.2]
  | ifElse c t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at hlf
    simp only [evalPan, execStmt]
    split
    · exact iht st hlf.1
    · exact ihf st hlf.2
  | whileLoop c b =>
    simp [isLoopFree] at hlf

theorem whileLoop_congr_of_stmtEquiv (cond : PanExp) (b1 b2 : PanProg)
    (hlf1 : isLoopFree b1 = true) (hlf2 : isLoopFree b2 = true)
    (heq : StmtEquiv b1 b2) :
    PanEquiv (.whileLoop cond b1) (.whileLoop cond b2) := by
  intro fuel
  induction fuel with
  | zero => intro st; simp [evalPan]
  | succ fuel' ih =>
    intro st
    simp only [evalPan]
    split
    · rw [evalPan_eq_execStmt_of_isLoopFree fuel' st b1 hlf1]
      rw [evalPan_eq_execStmt_of_isLoopFree fuel' st b2 hlf2]
      rw [heq st]
      exact ih (execStmt st b2)
    · rfl

end Rv2Pancake.Passes
