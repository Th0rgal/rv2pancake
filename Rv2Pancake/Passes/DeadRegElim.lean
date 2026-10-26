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

/-- An earlier assignment is dead if the immediately following assignment writes the
same variable and substituting the earlier value leaves its RHS unchanged. This
also catches repeated `ret_val = x10` writes, but never drops `x = x + 1`. -/
def overwriteIndependent (v : VarId) (e : PanExp) (v' : VarId) (e' : PanExp) : Bool :=
  v == v' && substVarExp v e e' == e'

theorem overwriteIndependent_sound (v v' : VarId) (e e' : PanExp)
    (h : overwriteIndependent v e v' e' = true) :
    StmtEquiv (.seq (.assign v e) (.assign v' e')) (.assign v' e') := by
  simp only [overwriteIndependent, Bool.and_eq_true, beq_iff_eq] at h
  rcases h with ⟨rfl, hs⟩
  simpa only [hs] using seq_assign_same_equiv v e e'

/-- Coalesce a leading assignment with an immediately following independent
write, including the head of a right-associated sequence. -/
def coalesceAssign (v : VarId) (e : PanExp) (q : PanProg) : PanProg :=
  match q with
  | .assign v' e' =>
    if overwriteIndependent v e v' e' then q else .seq (.assign v e) q
  | .seq (.assign v' e') _ =>
    if overwriteIndependent v e v' e' then q else .seq (.assign v e) q
  | _ => .seq (.assign v e) q

theorem coalesceAssign_equiv (v : VarId) (e : PanExp) (q : PanProg) :
    StmtEquiv (.seq (.assign v e) q) (coalesceAssign v e q) := by
  cases q with
  | assign v' e' =>
    dsimp [coalesceAssign]
    split
    · next h => exact overwriteIndependent_sound v v' e e' h
    · exact StmtEquiv.refl _
  | seq head rest =>
    cases head with
    | assign v' e' =>
      dsimp [coalesceAssign]
      split
      · next h =>
        intro st
        change execStmt (execStmt st (.seq (.assign v e) (.assign v' e'))) rest = _
        rw [overwriteIndependent_sound v v' e e' h st]
        rfl
      · exact StmtEquiv.refl _
    | _ => exact StmtEquiv.refl _
  | _ => exact StmtEquiv.refl _

theorem coalesceAssign_isLoopFree (v : VarId) (e : PanExp) (q : PanProg)
    (hq : isLoopFree q = true) : isLoopFree (coalesceAssign v e q) = true := by
  cases q with
  | assign v' e' =>
    dsimp [coalesceAssign]
    split <;> rfl
  | seq head rest =>
    cases head with
    | assign v' e' =>
      dsimp [coalesceAssign]
      split
      · exact hq
      · exact hq
    | _ => exact hq
  | _ => exact hq

/-- Remove adjacent overwritten writes recursively. The pipeline has already
right-associated its sequences, so chains collapse in one bottom-up traversal. -/
def elimOverwritten : PanProg → PanProg
  | .seq a b =>
    match elimOverwritten a with
    | .assign v e => coalesceAssign v e (elimOverwritten b)
    | a' => .seq a' (elimOverwritten b)
  | .ifElse c t f => .ifElse c (elimOverwritten t) (elimOverwritten f)
  | .whileLoop c b => .whileLoop c (elimOverwritten b)
  | p => p

theorem elimOverwritten_equiv (p : PanProg) : StmtEquiv p (elimOverwritten p) := by
  induction p with
  | seq a b iha ihb =>
    intro st
    change execStmt (execStmt st a) b = _
    rw [iha st, ihb (execStmt st (elimOverwritten a))]
    dsimp [elimOverwritten]
    generalize elimOverwritten a = a'
    cases a' with
    | assign v e => exact coalesceAssign_equiv v e (elimOverwritten b) st
    | _ => rfl
  | ifElse c t f iht ihf =>
    intro st
    dsimp [elimOverwritten, execStmt]
    split
    · exact iht st
    · exact ihf st
  | whileLoop c b _ => intro st; rfl
  | _ => exact StmtEquiv.refl _

theorem elimOverwritten_isLoopFree (p : PanProg) (hp : isLoopFree p = true) :
    isLoopFree (elimOverwritten p) = true := by
  induction p with
  | seq a b iha ihb =>
    simp only [isLoopFree, Bool.and_eq_true] at hp
    have ha := iha hp.1
    have hb := ihb hp.2
    dsimp [elimOverwritten]
    generalize h : elimOverwritten a = a' at *
    cases a' with
    | assign v e => exact coalesceAssign_isLoopFree v e (elimOverwritten b) hb
    | _ =>
      change (isLoopFree _ && isLoopFree _) = true
      rw [ha, hb]
      rfl
  | ifElse c t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at hp
    simp only [elimOverwritten, isLoopFree, iht hp.1, ihf hp.2, Bool.and_self]
  | whileLoop c b _ => exact hp
  | _ => rfl

def proposeDeadRegElim (p : PanProg) : PanProg :=
  elimOverwritten (elimSelfAssign p)

theorem proposeDeadRegElim_equiv (p : PanProg) : StmtEquiv p (proposeDeadRegElim p) :=
  StmtEquiv.trans (elimSelfAssign_equiv p) (elimOverwritten_equiv (elimSelfAssign p))

/-- The candidate must equal the proved cleanup and remain loop-free. In
particular an arbitrary proposer cannot delete a live assignment. -/
def checkDeadRegElim (p p' : PanProg) : Bool :=
  (proposeDeadRegElim p == p') && isLoopFree p'

theorem checkDeadRegElim_sound (p p' : PanProg) (h : checkDeadRegElim p p' = true) : StmtEquiv p p' := by
  simp only [checkDeadRegElim, Bool.and_eq_true, beq_iff_eq] at h
  rw [← h.1]
  exact proposeDeadRegElim_equiv p

/-- Every loop-free input's proposed cleanup is accepted, so the verified
fallback does not conceal a failed optimization. -/
theorem checkDeadRegElim_accepts_proposal (p : PanProg) (hp : isLoopFree p = true) :
    checkDeadRegElim p (proposeDeadRegElim p) = true := by
  simp only [checkDeadRegElim, beq_self_eq_true, Bool.true_and]
  exact elimOverwritten_isLoopFree (elimSelfAssign p) (elimSelfAssign_isLoopFree p hp)

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
