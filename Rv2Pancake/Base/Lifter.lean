import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem

namespace Rv2Pancake.Base

open Rv2Pancake.Spec

/-- Lift a RISC-V architectural register read into a Pancake expression.
    Register `x0` is hardwired to constant `0`. -/
def regExp (r : RegIdx) : PanExp :=
  if r == 0 then .const 0 else .var (regVar r)

/-- Lift a RISC-V architectural register write into a Pancake statement.
    Writes to `x0` become `.skip`. -/
def assignReg (r : RegIdx) (e : PanExp) : PanProg :=
  if r == 0 then .skip else .assign (regVar r) e

/-- Lift a RISC-V branch condition into a Pancake expression (`1` if taken, `0` otherwise). -/
def branchCondExp (c : BranchCond) (rs1 rs2 : RegIdx) : PanExp :=
  let e1 := regExp rs1
  let e2 := regExp rs2
  match c with
  | .beq  => .binOp .eqOp e1 e2
  | .bne  => .binOp .neOp e1 e2
  | .bltu => .binOp .ltU  e1 e2
  | .bgeu => .binOp .eqOp (.binOp .ltU e1 e2) (.const 0)

/-- Lift a single RV64I instruction at `addr` into its exact Pancake statement
    (updating registers, memory, and `pcVar`). -/
def liftInstr (addr : Word) (ins : RVInstr) : PanProg :=
  match ins with
  | .opImm op rd rs1 imm =>
    let valExp := .binOp op (regExp rs1) (.const imm)
    .seq (assignReg rd valExp) (.assign pcVar (.const (addr + 4)))
  | .opReg op rd rs1 rs2 =>
    let valExp := .binOp op (regExp rs1) (regExp rs2)
    .seq (assignReg rd valExp) (.assign pcVar (.const (addr + 4)))
  | .lui rd imm20 =>
    .seq (assignReg rd (.const imm20)) (.assign pcVar (.const (addr + 4)))
  | .auipc rd imm20 =>
    .seq (assignReg rd (.const (addr + imm20))) (.assign pcVar (.const (addr + 4)))
  | .ld rd rs1 offset =>
    let addrExp := .binOp .add (regExp rs1) (.const offset)
    .seq (assignReg rd (.load addrExp)) (.assign pcVar (.const (addr + 4)))
  | .sd rs1 rs2 offset =>
    let addrExp := .binOp .add (regExp rs1) (.const offset)
    .seq (.store addrExp (regExp rs2)) (.assign pcVar (.const (addr + 4)))
  | .branch cond rs1 rs2 targetPc =>
    .ifElse (branchCondExp cond rs1 rs2)
      (.assign pcVar (.const targetPc))
      (.assign pcVar (.const (addr + 4)))
  | .jal rd targetPc =>
    .seq (assignReg rd (.const (addr + 4))) (.assign pcVar (.const targetPc))
  | .jalr rd rs1 offset =>
    let nextPcExp := .binOp .add (regExp rs1) (.const offset)
    -- Save `nextPc` before clobbering `rd` in case `rd == rs1`
    .seq (.assign pcVar nextPcExp) (assignReg rd (.const (addr + 4)))
  | .ecall =>
    .seq (.assign retVar (regExp 10))
         (.seq (.assign haltVar (.const 1))
               (.assign pcVar (.const 0)))

/-- Lift a table of `(addr, RVInstr)` pairs into a cascading `if (pc == addr)` dispatcher body. -/
def liftCodeTable (code : List (Word × RVInstr)) : PanProg :=
  match code with
  | [] =>
    .seq (.assign retVar (regExp 10))
         (.seq (.assign haltVar (.const 1))
               (.assign pcVar (.const 0)))
  | (addr, ins) :: rest =>
    let cond := .binOp .eqOp (.var pcVar) (.const addr)
    .ifElse cond (liftInstr addr ins) (liftCodeTable rest)

/-- Lift a complete `ElfProg` into a structured Pancake program:
    Initializes `pc := entryPc` and steps the dispatcher while `pc != 0`. -/
def baseLift (prog : ElfProg) : PanProg :=
  let loopCond := .binOp .neOp (.var pcVar) (.const 0)
  .whileLoop loopCond (liftCodeTable prog.code)

end Rv2Pancake.Base
