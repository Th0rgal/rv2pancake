import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Passes.SafePass

namespace Rv2Pancake.Passes

open Rv2Pancake.Spec

/-- Simplify a binary operation on two simplified sub-expressions:
    Performs constant folding when both operands are `.const` AND algebraic neutral-element /
    masking simplifications (`0 + e -> e`, `e + 0 -> e`, `e - 0 -> e`, `e | 0 -> e`,
    `e ^ 0 -> e`, `e << 0 -> e`, `e >>> 0 -> e`, `e & ~0 -> e`). -/
def simpBinOp (op : BinOp) (e1 e2 : PanExp) : PanExp :=
  match e1, e2 with
  | .const w1, .const w2 => .const (evalBinOp op w1 w2)
  | .const 0, e =>
    match op with
    | .add   => e
    | .bitOr => e
    | .bitXor => e
    | _      => .binOp op (.const 0) e
  | e, .const 0 =>
    match op with
    | .add    => e
    | .sub    => e
    | .bitOr  => e
    | .bitXor => e
    | .shl    => e
    | .shr    => e
    | _       => .binOp op e (.const 0)
  | _, _                 => .binOp op e1 e2

theorem evalExp_simpBinOp (st : PanState) (op : BinOp) (e1 e2 : PanExp) :
    evalExp st (simpBinOp op e1 e2) = evalBinOp op (evalExp st e1) (evalExp st e2) := by
  cases e1 with
  | const w1 =>
    cases e2 with
    | const w2 => rfl
    | _ =>
      by_cases h0 : w1 = 0
      · subst h0
        cases op <;> simp [simpBinOp, evalExp, evalBinOp]
      · simp [simpBinOp, h0, evalExp]
  | _ =>
    cases e2 with
    | const w2 =>
      by_cases h0 : w2 = 0
      · subst h0
        cases op <;> simp [simpBinOp, evalExp, evalBinOp]
      · simp [simpBinOp, h0, evalExp]
    | _ => rfl

/-- Recursively fold constants inside a `PanExp` (`0 + c -> c`, `a + b -> c`, etc.). -/
def simpExp : PanExp → PanExp
  | .const w        => .const w
  | .var v          => .var v
  | .load addr      => .load (simpExp addr)
  | .binOp op e1 e2 => simpBinOp op (simpExp e1) (simpExp e2)

/-- Soundness of `simpExp`: evaluates to the exact same `Word` in every state `st`. -/
theorem evalExp_simpExp (st : PanState) (e : PanExp) :
    evalExp st (simpExp e) = evalExp st e := by
  induction e with
  | const w => rfl
  | var v => rfl
  | load addr ih =>
    simp [simpExp, evalExp, ih]
  | binOp op e1 e2 ih1 ih2 =>
    simp only [simpExp, evalExp_simpBinOp, evalExp, ih1, ih2]

/-- Substitute variable `v` with expression `rep` inside expression `e`. -/
def substVarExp (v : VarId) (rep : PanExp) : PanExp → PanExp
  | .const w        => .const w
  | .var x          => if x == v then rep else .var x
  | .load addr      => .load (substVarExp v rep addr)
  | .binOp op e1 e2 => .binOp op (substVarExp v rep e1) (substVarExp v rep e2)

/-- Key substitution lemma: evaluating `substVarExp v rep e` in state `st` equals
    evaluating `e` in `setVar st v (evalExp st rep)`. -/
theorem evalExp_substVarExp (st : PanState) (v : VarId) (rep e : PanExp) :
    evalExp st (substVarExp v rep e) = evalExp (setVar st v (evalExp st rep)) e := by
  induction e with
  | const w => rfl
  | var x =>
    dsimp [substVarExp, evalExp, setVar]
    by_cases h : x = v
    · subst h; simp
    · have hb : (x == v) = false := beq_false_of_ne h
      simp [hb, evalExp]
  | load addr ih =>
    simp [substVarExp, evalExp, setVar, ih]
  | binOp op e1 e2 ih1 ih2 =>
    simp [substVarExp, evalExp, ih1, ih2]

/-- Double assignment to the same variable `v`:
    `seq (assign v e1) (assign v e2)` is equivalent to `assign v (substVarExp v e1 e2)`. -/
theorem seq_assign_same_equiv (v : VarId) (e1 e2 : PanExp) :
    StmtEquiv (.seq (.assign v e1) (.assign v e2)) (.assign v (substVarExp v e1 e2)) := by
  intro st
  cases st with
  | mk vars mem =>
    simp only [execStmt, evalExp_substVarExp, setVar, PanState.mk.injEq, and_true]
    funext x
    by_cases h : x = v
    · subst h; simp
    · have hb : (x == v) = false := beq_false_of_ne h
      simp [hb]

/-- Commute an assignment `assign v1 e1` with a non-interfering `assign v2 (.const c)`
    when `v1 ≠ v2`:
    `seq (assign v2 (.const c)) (assign v1 e1)` is equivalent to
    `seq (assign v1 (substVarExp v2 (.const c) e1)) (assign v2 (.const c))`. -/
theorem seq_assign_const_comm (v1 v2 : VarId) (c : Word) (e1 : PanExp) (hne : v1 ≠ v2) :
    StmtEquiv
      (.seq (.assign v2 (.const c)) (.assign v1 e1))
      (.seq (.assign v1 (substVarExp v2 (.const c) e1)) (.assign v2 (.const c))) := by
  intro st
  cases st with
  | mk vars mem =>
    simp only [execStmt, evalExp_substVarExp, evalExp, setVar, PanState.mk.injEq, and_true]
    funext x
    by_cases hx2 : x = v2
    · subst hx2
      have hne' : (x == v1) = false := beq_false_of_ne (Ne.symm hne)
      simp [hne']
    · have hbx2 : (x == v2) = false := beq_false_of_ne hx2
      by_cases hx1 : x = v1
      · subst hx1
        simp [hbx2]
      · have hbx1 : (x == v1) = false := beq_false_of_ne hx1
        simp [hbx2, hbx1]

/-- Commute `assign v (.const c)` past a memory store `store a e`. -/
theorem seq_assign_const_store_comm (v : VarId) (c : Word) (a e : PanExp) :
    StmtEquiv
      (.seq (.assign v (.const c)) (.store a e))
      (.seq (.store (substVarExp v (.const c) a) (substVarExp v (.const c) e)) (.assign v (.const c))) := by
  intro st
  cases st with
  | mk vars mem =>
    simp only [execStmt, evalExp_substVarExp, evalExp, setVar, setMem]
    rfl

/-- Commute `assign v (.const c)` into an `ifElse`:
    `seq (assign v (.const c)) (ifElse cond t f)` is equivalent to
    `ifElse (substVarExp v (.const c) cond) (seq (assign v (.const c)) t) (seq (assign v (.const c)) f)`. -/
theorem seq_assign_const_ifElse (v : VarId) (c : Word) (cond : PanExp) (t f : PanProg) :
    StmtEquiv
      (.seq (.assign v (.const c)) (.ifElse cond t f))
      (.ifElse (substVarExp v (.const c) cond)
        (.seq (.assign v (.const c)) t)
        (.seq (.assign v (.const c)) f)) := by
  intro st
  dsimp [execStmt]
  rw [evalExp_substVarExp]
  rfl

/-- Remove `.skip` on the left of a `.seq`. -/
def seqSkipElim (p1 p2 : PanProg) : PanProg :=
  match p1 with
  | .skip => p2
  | _     => .seq p1 p2

theorem seqSkipElim_equiv (p1 p2 : PanProg) :
    StmtEquiv (.seq p1 p2) (seqSkipElim p1 p2) := by
  intro st
  cases p1 <;> rfl

theorem seqSkipElim_isLoopFree (p1 p2 : PanProg)
    (h1 : isLoopFree p1 = true) (h2 : isLoopFree p2 = true) :
    isLoopFree (seqSkipElim p1 p2) = true := by
  dsimp [seqSkipElim]
  split
  · exact h2
  · change (isLoopFree p1 && isLoopFree p2) = true
    rw [h1, h2]
    rfl

def extractTrailingConst (v : VarId) : PanProg → Option (PanProg × Word)
  | .assign v' (.const c') =>
    if v' == v then some (.skip, c') else none
  | .seq a b =>
    match extractTrailingConst v b with
    | some (prefB, c') => some (seqSkipElim a prefB, c')
    | none             => none
  | _ => none

theorem extractTrailingConst_sound (v : VarId) (p pref : PanProg) (c : Word)
    (h : extractTrailingConst v p = some (pref, c)) :
    StmtEquiv p (.seq pref (.assign v (.const c))) ∧
    (isLoopFree p = true → isLoopFree pref = true) := by
  induction p generalizing pref c with
  | skip => simp [extractTrailingConst] at h
  | assign v' e' =>
    cases e' with
    | const c' =>
      dsimp [extractTrailingConst] at h
      split at h
      · next hvv =>
        have hv : v' = v := eq_of_beq hvv
        subst hv
        injection h with hpair
        injection hpair with hpref hc
        subst hpref hc
        exact ⟨fun _ => rfl, fun _ => rfl⟩
      · contradiction
    | _ => simp [extractTrailingConst] at h
  | store _ _ => simp [extractTrailingConst] at h
  | seq a b _ ihb =>
    dsimp [extractTrailingConst] at h
    generalize hxb : extractTrailingConst v b = xb at h
    cases xb with
    | none => contradiction
    | some pair =>
      rcases pair with ⟨prefB, c'⟩
      dsimp at h
      injection h with hpair
      injection hpair with hpref hc
      subst hpref hc
      have ⟨heqb, hlfb⟩ := ihb prefB c' hxb
      refine ⟨?_, ?_⟩
      · intro st
        change execStmt (execStmt st a) b =
          execStmt (execStmt st (seqSkipElim a prefB)) (.assign v (.const c'))
        rw [← seqSkipElim_equiv a prefB st]
        exact heqb (execStmt st a)
      · intro hlf
        simp only [isLoopFree, Bool.and_eq_true] at hlf
        exact seqSkipElim_isLoopFree a prefB hlf.1 (hlfb hlf.2)
  | ifElse _ _ _ => simp [extractTrailingConst] at h
  | whileLoop _ _ => simp [extractTrailingConst] at h

/-- Push `assign v (.const c)` through any loop-free statement `p`, simplifying conditions
    and coalescing duplicate writes to `v`. -/
def pushConstAssign (v : VarId) (c : Word) : PanProg → PanProg
  | .skip => .assign v (.const c)
  | .assign v2 e2 =>
    let e2' := simpExp (substVarExp v (.const c) e2)
    if v == v2 then
      .assign v e2'
    else
      .seq (.assign v2 e2') (.assign v (.const c))
  | .store a e =>
    let a' := simpExp (substVarExp v (.const c) a)
    let e' := simpExp (substVarExp v (.const c) e)
    .seq (.store a' e') (.assign v (.const c))
  | .seq p1 p2 =>
    let p1' := pushConstAssign v c p1
    match extractTrailingConst v p1' with
    | some (pref, c') => .seq pref (pushConstAssign v c' p2)
    | none            => .seq p1' p2
  | .ifElse cond t f =>
    let cond' := simpExp (substVarExp v (.const c) cond)
    match cond' with
    | .const w =>
      if w != 0 then pushConstAssign v c t
      else pushConstAssign v c f
    | _ =>
      .ifElse cond' (pushConstAssign v c t) (pushConstAssign v c f)
  | .whileLoop cond body =>
    .seq (.assign v (.const c)) (.whileLoop cond body)

theorem pushConstAssign_equiv (v : VarId) (c : Word) (p : PanProg) :
    StmtEquiv (.seq (.assign v (.const c)) p) (pushConstAssign v c p) := by
  induction p generalizing c with
  | skip =>
    intro st
    rfl
  | assign v2 e2 =>
    intro st
    dsimp [pushConstAssign]
    by_cases hvv : v = v2
    · subst hvv
      simp only [beq_self_eq_true, ↓reduceIte]
      have h1 := seq_assign_same_equiv v (.const c) e2 st
      rw [h1]
      simp [execStmt, evalExp_simpExp]
    · have hb : (v == v2) = false := beq_false_of_ne hvv
      simp only [hb, Bool.false_eq_true, ↓reduceIte]
      have hcomm := seq_assign_const_comm v2 v c e2 (Ne.symm hvv) st
      rw [hcomm]
      simp [execStmt, evalExp_simpExp]
  | store a e =>
    intro st
    dsimp [pushConstAssign]
    have hcomm := seq_assign_const_store_comm v c a e st
    rw [hcomm]
    simp [execStmt, evalExp_simpExp]
  | seq p1 p2 ih1 ih2 =>
    intro st
    dsimp [pushConstAssign]
    have h1 := ih1 c st
    generalize hex : extractTrailingConst v (pushConstAssign v c p1) = extOpt
    cases extOpt with
    | none =>
      dsimp [execStmt]
      simp only [execStmt] at h1
      rw [h1]
    | some pair =>
      rcases pair with ⟨pref, c'⟩
      have ⟨hext, _⟩ := extractTrailingConst_sound v (pushConstAssign v c p1) pref c' hex
      dsimp [execStmt]
      simp only [execStmt] at h1 hext
      rw [h1, hext st]
      exact ih2 c' (execStmt st pref)
  | ifElse cond t f iht ihf =>
    intro st
    dsimp [pushConstAssign]
    have hpush := seq_assign_const_ifElse v c cond t f st
    rw [hpush]
    have hc := evalExp_simpExp st (substVarExp v (.const c) cond)
    generalize hce : simpExp (substVarExp v (.const c) cond) = cond'
    rw [hce] at hc
    cases cond' with
    | const w =>
      dsimp
      by_cases hw : (w != 0) = true
      · simp only [hw, ↓reduceIte, execStmt, ← hc, evalExp]
        exact iht c st
      · have hwf : (w != 0) = false := Bool.eq_false_iff.mpr hw
        simp only [hwf, Bool.false_eq_true, ↓reduceIte, execStmt, ← hc, evalExp]
        exact ihf c st
    | _ =>
      simp only [execStmt, ← hc]
      split
      · exact iht c st
      · exact ihf c st
  | whileLoop cond body _ =>
    intro st
    rfl

theorem pushConstAssign_isLoopFree (v : VarId) (c : Word) (p : PanProg)
    (h : isLoopFree p = true) :
    isLoopFree (pushConstAssign v c p) = true := by
  induction p generalizing c with
  | skip => rfl
  | assign v2 e2 =>
    dsimp [pushConstAssign]
    split <;> rfl
  | store a e => rfl
  | seq p1 p2 ih1 ih2 =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    have h1 := ih1 c h.1
    dsimp [pushConstAssign]
    generalize hex : extractTrailingConst v (pushConstAssign v c p1) = extOpt
    cases extOpt with
    | none =>
      simp [isLoopFree, h1, h.2]
    | some pair =>
      rcases pair with ⟨pref, c'⟩
      have ⟨_, hlf_pref⟩ := extractTrailingConst_sound v (pushConstAssign v c p1) pref c' hex
      simp [isLoopFree, hlf_pref h1, ih2 c' h.2]
  | ifElse cond t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    dsimp [pushConstAssign]
    generalize simpExp (substVarExp v (.const c) cond) = cond'
    cases cond' with
    | const w =>
      dsimp
      split
      · exact iht c h.1
      · exact ihf c h.2
    | _ =>
      simp [isLoopFree, iht c h.1, ihf c h.2]
  | whileLoop cond body _ =>
    simp [isLoopFree] at h

/-- Extract any non-`pcVar` trailing constant assignment `(prefixProg, v, c)` from a statement `p`
    (recursing into right-nested `.seq a b` chains). Keeps `pcVar` (`v == 0`) at the leaf end
    so `pc := nextAddr` always stays at the end of every lifted instruction block! -/
def extractAnyTrailingConst : PanProg → Option (PanProg × VarId × Word)
  | .assign v (.const c) =>
    if v == pcVar then none else some (.skip, v, c)
  | .seq a b =>
    match extractAnyTrailingConst b with
    | some (prefB, v, c) => some (seqSkipElim a prefB, v, c)
    | none               => none
  | _ => none

theorem extractAnyTrailingConst_sound (p pref : PanProg) (v : VarId) (c : Word)
    (h : extractAnyTrailingConst p = some (pref, v, c)) :
    StmtEquiv p (.seq pref (.assign v (.const c))) ∧
    (isLoopFree p = true → isLoopFree pref = true) := by
  induction p generalizing pref v c with
  | skip => simp [extractAnyTrailingConst] at h
  | assign v' e' =>
    cases e' with
    | const c' =>
      dsimp [extractAnyTrailingConst] at h
      split at h
      · contradiction
      · injection h with h1
        injection h1 with hpref h2
        injection h2 with hv hc
        subst hpref hv hc
        exact ⟨fun _ => rfl, fun _ => rfl⟩
    | _ => simp [extractAnyTrailingConst] at h
  | store _ _ => simp [extractAnyTrailingConst] at h
  | seq a b _ ihb =>
    dsimp [extractAnyTrailingConst] at h
    generalize hxb : extractAnyTrailingConst b = xb at h
    cases xb with
    | none => contradiction
    | some triple =>
      rcases triple with ⟨prefB, v', c'⟩
      dsimp at h
      injection h with h1
      injection h1 with hpref h2
      injection h2 with hv hc
      subst hpref hv hc
      have ⟨heqb, hlfb⟩ := ihb prefB v' c' hxb
      refine ⟨?_, ?_⟩
      · intro st
        change execStmt (execStmt st a) b =
          execStmt (execStmt st (seqSkipElim a prefB)) (.assign v' (.const c'))
        rw [← seqSkipElim_equiv a prefB st]
        exact heqb (execStmt st a)
      · intro hlf
        simp only [isLoopFree, Bool.and_eq_true] at hlf
        exact seqSkipElim_isLoopFree a prefB hlf.1 (hlfb hlf.2)
  | ifElse _ _ _ => simp [extractAnyTrailingConst] at h
  | whileLoop _ _ => simp [extractAnyTrailingConst] at h

/-- Recursively propagate constant assignments (`assign v (.const c)`) through sequential statements
    and across `ifElse` branches. -/
def propConstSeq : PanProg → PanProg
  | .skip => .skip
  | .assign v e => .assign v (simpExp e)
  | .store a e => .store (simpExp a) (simpExp e)
  | .seq p1 p2 =>
    let p1' := propConstSeq p1
    let p2' := propConstSeq p2
    match extractAnyTrailingConst p1' with
    | some (pref, v, c) =>
      if v == pcVar then
        .seq p1' p2'
      else
        match pref with
        | .skip => pushConstAssign v c p2'
        | _     => .seq pref (pushConstAssign v c p2')
    | none => .seq p1' p2'
  | .ifElse cond t f =>
    let cond' := simpExp cond
    let t' := propConstSeq t
    let f' := propConstSeq f
    match cond' with
    | .const w => if w != 0 then t' else f'
    | _        => .ifElse cond' t' f'
  | .whileLoop cond body =>
    .whileLoop (simpExp cond) (propConstSeq body)

theorem propConstSeq_equiv (p : PanProg) : StmtEquiv p (propConstSeq p) := by
  induction p with
  | skip => exact StmtEquiv.refl _
  | assign v e =>
    intro st
    simp [propConstSeq, execStmt, evalExp_simpExp]
  | store a e =>
    intro st
    simp [propConstSeq, execStmt, evalExp_simpExp]
  | seq p1 p2 ih1 ih2 =>
    intro st
    dsimp [propConstSeq]
    have h1 := ih1 st
    generalize hex : extractAnyTrailingConst (propConstSeq p1) = extOpt
    cases extOpt with
    | none =>
      dsimp [execStmt]
      rw [h1, ih2 (execStmt st (propConstSeq p1))]
    | some triple =>
      rcases triple with ⟨pref, v, c⟩
      dsimp
      split
      · dsimp [execStmt]
        rw [h1, ih2 (execStmt st (propConstSeq p1))]
      · have ⟨hext, _⟩ := extractAnyTrailingConst_sound (propConstSeq p1) pref v c hex
        have hpush := pushConstAssign_equiv v c (propConstSeq p2)
        cases pref with
        | skip =>
          dsimp [execStmt]
          rw [h1, ih2 (execStmt st (propConstSeq p1)), hext st]
          exact hpush st
        | _ =>
          dsimp [execStmt]
          rw [h1, ih2 (execStmt st (propConstSeq p1)), hext st]
          exact hpush (execStmt st _)
  | ifElse cond t f iht ihf =>
    intro st
    dsimp [propConstSeq]
    have hc := evalExp_simpExp st cond
    generalize hce : simpExp cond = cond'
    rw [hce] at hc
    cases cond' with
    | const w =>
      dsimp
      by_cases hw : (w != 0) = true
      · simp only [hw, ↓reduceIte, execStmt, ← hc, evalExp]
        exact iht st
      · have hwf : (w != 0) = false := Bool.eq_false_iff.mpr hw
        simp only [hwf, Bool.false_eq_true, ↓reduceIte, execStmt, ← hc, evalExp]
        exact ihf st
    | _ =>
      simp only [execStmt, ← hc]
      split
      · exact iht st
      · exact ihf st
  | whileLoop cond body _ =>
    intro st
    rfl

theorem propConstSeq_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (propConstSeq p) = true := by
  induction p with
  | skip => rfl
  | assign v e => rfl
  | store a e => rfl
  | seq p1 p2 ih1 ih2 =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    have h1 := ih1 h.1
    have h2 := ih2 h.2
    dsimp [propConstSeq]
    generalize hex : extractAnyTrailingConst (propConstSeq p1) = extOpt
    cases extOpt with
    | none =>
      simp [isLoopFree, h1, h2]
    | some triple =>
      rcases triple with ⟨pref, v, c⟩
      dsimp
      split
      · simp [isLoopFree, h1, h2]
      · have ⟨_, hlf_pref⟩ := extractAnyTrailingConst_sound (propConstSeq p1) pref v c hex
        have hlf_p := hlf_pref h1
        have hpush := pushConstAssign_isLoopFree v c (propConstSeq p2) h2
        cases pref with
        | skip => exact hpush
        | _ =>
          change (isLoopFree _ && isLoopFree (pushConstAssign v c (propConstSeq p2))) = true
          rw [hlf_p, hpush]
          rfl
  | ifElse cond t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at h
    dsimp [propConstSeq]
    generalize simpExp cond = cond'
    cases cond' with
    | const w =>
      dsimp
      split
      · exact iht h.1
      · exact ihf h.2
    | _ =>
      simp [isLoopFree, iht h.1, ihf h.2]
  | whileLoop cond body _ =>
    simp [isLoopFree] at h

def pushLeafTrailingPc (body b : PanProg) : PanProg :=
  match extractTrailingConst pcVar b with
  | some (pref, c) =>
    let pushed := pushConstAssign pcVar c body
    seqSkipElim pref pushed
  | none           => .seq b (propConstSeq body)

theorem pushLeafTrailingPc_equiv (body b : PanProg) :
    StmtEquiv (.seq b body) (pushLeafTrailingPc body b) := by
  intro st
  dsimp [pushLeafTrailingPc]
  generalize hex : extractTrailingConst pcVar b = extOpt
  cases extOpt with
  | none =>
    dsimp [execStmt]
    exact propConstSeq_equiv body (execStmt st b)
  | some pair =>
    rcases pair with ⟨pref, c⟩
    have ⟨hext, _⟩ := extractTrailingConst_sound pcVar b pref c hex
    have hpush := pushConstAssign_equiv pcVar c body
    rw [← seqSkipElim_equiv pref (pushConstAssign pcVar c body) st]
    change execStmt (execStmt st b) body = execStmt (execStmt st pref) (pushConstAssign pcVar c body)
    rw [hext st]
    exact hpush (execStmt st pref)

theorem pushLeafTrailingPc_isLoopFree (body b : PanProg)
    (hbody : isLoopFree body = true) (hb : isLoopFree b = true) :
    isLoopFree (pushLeafTrailingPc body b) = true := by
  dsimp [pushLeafTrailingPc]
  generalize hex : extractTrailingConst pcVar b = extOpt
  cases extOpt with
  | none =>
    have hprop := propConstSeq_isLoopFree body hbody
    change (isLoopFree b && isLoopFree (propConstSeq body)) = true
    rw [hb, hprop]
    rfl
  | some pair =>
    rcases pair with ⟨pref, c⟩
    have ⟨_, hlf_pref⟩ := extractTrailingConst_sound pcVar b pref c hex
    have hlfp := hlf_pref hb
    have hpush := pushConstAssign_isLoopFree pcVar c body hbody
    exact seqSkipElim_isLoopFree pref _ hlfp hpush

def pushBranchTrailingPc (body : PanProg) : PanProg → PanProg
  | .ifElse cond t f =>
    .ifElse cond (pushBranchTrailingPc body t) (pushBranchTrailingPc body f)
  | .seq p1 (.ifElse cond t f) =>
    .seq p1 (.ifElse cond (pushBranchTrailingPc body t) (pushBranchTrailingPc body f))
  | .seq p1 (.seq p2 (.ifElse cond t f)) =>
    .seq p1 (.seq p2 (.ifElse cond (pushBranchTrailingPc body t) (pushBranchTrailingPc body f)))
  | b =>
    pushLeafTrailingPc body b

theorem pushBranchTrailingPc_equiv (body b : PanProg) :
    StmtEquiv (.seq b body) (pushBranchTrailingPc body b) := by
  induction b with
  | ifElse cond t f iht ihf =>
    intro st
    dsimp [pushBranchTrailingPc, execStmt]
    split
    · exact iht st
    · exact ihf st
  | seq p1 p2 _ ih2 =>
    cases p2 with
    | ifElse cond t f =>
      intro st
      dsimp [pushBranchTrailingPc, execStmt]
      exact ih2 (execStmt st p1)
    | seq p2a p2b =>
      cases p2b with
      | ifElse cond t f =>
        intro st
        dsimp [pushBranchTrailingPc, execStmt]
        exact ih2 (execStmt st p1)
      | _ =>
        exact pushLeafTrailingPc_equiv body _
    | _ =>
      exact pushLeafTrailingPc_equiv body _
  | _ =>
    exact pushLeafTrailingPc_equiv body _

theorem pushBranchTrailingPc_isLoopFree (body b : PanProg)
    (hbody : isLoopFree body = true) (hb : isLoopFree b = true) :
    isLoopFree (pushBranchTrailingPc body b) = true := by
  induction b with
  | ifElse cond t f iht ihf =>
    simp only [isLoopFree, Bool.and_eq_true] at hb
    simp [pushBranchTrailingPc, isLoopFree, iht hb.1, ihf hb.2]
  | seq p1 p2 _ ih2 =>
    cases p2 with
    | ifElse cond t f =>
      simp only [isLoopFree, Bool.and_eq_true] at hb
      have h2 := ih2 (by simp [isLoopFree, hb.2.1, hb.2.2])
      dsimp [pushBranchTrailingPc]
      change (isLoopFree p1 && isLoopFree (pushBranchTrailingPc body (.ifElse cond t f))) = true
      rw [hb.1, h2]
      rfl
    | seq p2a p2b =>
      cases p2b with
      | ifElse cond t f =>
        simp only [isLoopFree, Bool.and_eq_true] at hb
        have h2 := ih2 (by simp [isLoopFree, hb.2.1, hb.2.2.1, hb.2.2.2])
        dsimp [pushBranchTrailingPc]
        change (isLoopFree p1 && isLoopFree (pushBranchTrailingPc body (.seq p2a (.ifElse cond t f)))) = true
        rw [hb.1, h2]
        rfl
      | _ =>
        exact pushLeafTrailingPc_isLoopFree body _ hbody hb
    | _ =>
      exact pushLeafTrailingPc_isLoopFree body _ hbody hb
  | _ =>
    exact pushLeafTrailingPc_isLoopFree body _ hbody hb

def unrollAndFoldBody (k : Nat) (body : PanProg) : PanProg :=
  match k with
  | 0 => body
  | k' + 1 => pushBranchTrailingPc body (unrollAndFoldBody k' body)

/-- Raw `k`-step sequential composition of a loop-free dispatcher body `body`. -/
def seqRepeat (k : Nat) (body : PanProg) : PanProg :=
  match k with
  | 0 => body
  | k' + 1 => .seq (seqRepeat k' body) body

theorem seqRepeat_isLoopFree (k : Nat) (body : PanProg) (h : isLoopFree body = true) :
    isLoopFree (seqRepeat k body) = true := by
  induction k with
  | zero => exact h
  | succ k' ih =>
    simp [seqRepeat, isLoopFree, ih, h]

theorem unrollAndFoldBody_equiv_seqRepeat (k : Nat) (body : PanProg) :
    StmtEquiv (seqRepeat k body) (unrollAndFoldBody k body) := by
  induction k with
  | zero =>
    exact StmtEquiv.refl body
  | succ k' ih =>
    intro st
    dsimp [seqRepeat, unrollAndFoldBody]
    have hpush := pushBranchTrailingPc_equiv body (unrollAndFoldBody k' body) st
    rw [← hpush]
    dsimp [execStmt]
    rw [ih st]

theorem unrollAndFoldBody_isLoopFree (k : Nat) (body : PanProg) (h : isLoopFree body = true) :
    isLoopFree (unrollAndFoldBody k body) = true := by
  induction k with
  | zero => exact h
  | succ k' ih =>
    dsimp [unrollAndFoldBody]
    exact pushBranchTrailingPc_isLoopFree body (unrollAndFoldBody k' body) h ih

/-- Universal Symbolic Validator (`symCheckPass`):
    Proposes `propConstSeq` (constant folding `0 + c -> c`, constant propagation across
    assignments, store expressions, and branches) and checks equivalence via `propConstSeq == p'`. -/
def proposeSymCheck : PanProg → PanProg := propConstSeq

def checkSymCheck (p p' : PanProg) : Bool :=
  (propConstSeq p == p') && isLoopFree p'

theorem checkSymCheck_sound (p p' : PanProg) (h : checkSymCheck p p' = true) :
    StmtEquiv p p' := by
  simp only [checkSymCheck, Bool.and_eq_true, beq_iff_eq] at h
  have h1 : StmtEquiv p (propConstSeq p) := propConstSeq_equiv p
  rw [h.1] at h1
  exact h1

def symCheckPass : VerifiedStmtPass where
  name    := "symCheck"
  propose := proposeSymCheck
  check   := checkSymCheck
  sound   := checkSymCheck_sound

theorem symCheckPass_isLoopFree (p : PanProg) (h : isLoopFree p = true) :
    isLoopFree (symCheckPass.apply p) = true := by
  dsimp [VerifiedStmtPass.apply, symCheckPass]
  split
  · next hc =>
    simp only [checkSymCheck, Bool.and_eq_true] at hc
    exact hc.2
  · exact h

end Rv2Pancake.Passes
