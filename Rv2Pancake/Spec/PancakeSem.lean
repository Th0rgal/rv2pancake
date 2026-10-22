import Rv2Pancake.Spec.RiscvSem

namespace Rv2Pancake.Spec

/-- Variable identifier in Pancake (`0` = `pc`, `1..31` = `x1..x31`, `>= 32` = temporaries). -/
abbrev VarId := Nat

/-- Variable id corresponding to RISC-V architectural register `r` (`1..31`). -/
def regVar (r : RegIdx) : VarId := r

/-- Special Pancake variable holding the program counter `pc` (`VarId = 0`). -/
def pcVar : VarId := 0

/--Special Pancake variable holding the halted flag (`VarId = 32`). -/
def haltVar : VarId := 32

/-- Special Pancake variable holding the return value `retVal` (`VarId = 33`). -/
def retVar : VarId := 33

/-- Pancake expressions (pure word-level expressions with memory load). -/
inductive PanExp where
  | const (w : Word)
  | var   (v : VarId)
  | load  (addr : PanExp)
  | binOp (op : BinOp) (e1 e2 : PanExp)
  deriving DecidableEq, Repr

/-- Pancake statements (structured imperative language: skip, assign, store, seq, if, while). -/
inductive PanProg where
  | skip
  | assign (v : VarId) (e : PanExp)
  | store  (addr : PanExp) (val : PanExp)
  | seq    (p1 p2 : PanProg)
  | ifElse (cond : PanExp) (thenBr elseBr : PanProg)
  | whileLoop (cond : PanExp) (body : PanProg)
  deriving DecidableEq, Repr

/-- Pancake execution state: local variable environment and shared word memory. -/
structure PanState where
  vars : VarId → Word
  mem  : Mem

/-- Evaluate a Pancake expression in state `st`. -/
def evalExp (st : PanState) : PanExp → Word
  | .const w        => w
  | .var v          => st.vars v
  | .load addr      => st.mem (evalExp st addr)
  | .binOp op e1 e2 => evalBinOp op (evalExp st e1) (evalExp st e2)

/-- Update a local variable in `PanState`. -/
def setVar (st : PanState) (v : VarId) (w : Word) : PanState :=
  { st with vars := fun x => if x == v then w else st.vars x }

/-- Store a word to memory in `PanState`. -/
def setMem (st : PanState) (addr val : Word) : PanState :=
  { st with mem := fun a => if a == addr then val else st.mem a }

@[simp]
theorem setVar_same (st : PanState) (v : VarId) (w : Word) :
    (setVar st v w).vars v = w := by
  simp [setVar]

theorem setVar_diff (st : PanState) (v1 v2 : VarId) (w : Word) (h : v1 ≠ v2) :
    (setVar st v2 w).vars v1 = st.vars v1 := by
  simp [setVar, h]

/-- Evaluate a non-looping Pancake statement (body of a basic block or single-step dispatcher). -/
def execStmt (st : PanState) : PanProg → PanState
  | .skip          => st
  | .assign v e    => setVar st v (evalExp st e)
  | .store a e     => setMem st (evalExp st a) (evalExp st e)
  | .seq p1 p2     => execStmt (execStmt st p1) p2
  | .ifElse c t f  => if evalExp st c != 0 then execStmt st t else execStmt st f
  | .whileLoop _ _ => st

/-- Fuel-bounded execution of a Pancake program (unrolling `whileLoop` up to `fuel` iterations). -/
def evalPan (fuel : Nat) (st : PanState) : PanProg → PanState
  | .skip          => st
  | .assign v e    => setVar st v (evalExp st e)
  | .store a e     => setMem st (evalExp st a) (evalExp st e)
  | .seq p1 p2     => evalPan fuel (evalPan fuel st p1) p2
  | .ifElse c t f  => if evalExp st c != 0 then evalPan fuel st t else evalPan fuel st f
  | .whileLoop c b =>
    match fuel with
    | 0 => st
    | fuel' + 1 =>
      if evalExp st c != 0 then
        evalPan fuel' (evalPan fuel' st b) (.whileLoop c b)
      else
        st

end Rv2Pancake.Spec
