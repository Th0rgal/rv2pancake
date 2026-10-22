namespace Rv2Pancake.Spec

/-- 64-bit word value used by both RISC-V (RV64I) and Pancake. -/
abbrev Word := UInt64

/-- Register index (0..31 in RISC-V; 0 is hardwired x0 = 0). -/
abbrev RegIdx := Nat

/-- Flat word-addressed / byte-aligned memory model shared by RISC-V and Pancake. -/
abbrev Mem := Word → Word

/-- Read a register from a register file (x0 is always 0). -/
def readReg (regs : RegIdx → Word) (r : RegIdx) : Word :=
  if r == 0 then 0 else regs r

/-- Write a register in a register file (writes to x0 are ignored). -/
def writeReg (regs : RegIdx → Word) (r : RegIdx) (v : Word) : RegIdx → Word :=
  if r == 0 then regs else fun idx => if idx == r then v else regs idx

@[simp]
theorem readReg_zero (regs : RegIdx → Word) : readReg regs 0 = 0 := rfl

theorem readReg_writeReg_same (regs : RegIdx → Word) (r : RegIdx) (v : Word) (h : r ≠ 0) :
    readReg (writeReg regs r v) r = v := by
  have hb : (r == 0) = false := beq_false_of_ne h
  simp [readReg, writeReg, hb]

theorem readReg_writeReg_diff (regs : RegIdx → Word) (r1 r2 : RegIdx) (v : Word) (h : r1 ≠ r2) :
    readReg (writeReg regs r2 v) r1 = readReg regs r1 := by
  by_cases h1 : r1 = 0
  · subst h1; rfl
  · by_cases h2 : r2 = 0
    · subst h2; rfl
    · have hb1 : (r1 == 0) = false := beq_false_of_ne h1
      have hb2 : (r2 == 0) = false := beq_false_of_ne h2
      have h12 : (r1 == r2) = false := beq_false_of_ne h
      simp [readReg, writeReg, hb1, hb2, h12]

/-- Binary ALU operations shared across RV64I and Pancake expressions. -/
inductive BinOp where
  | add
  | sub
  | bitAnd
  | bitOr
  | bitXor
  | shl
  | shr
  | eqOp
  | neOp
  | ltU
  deriving DecidableEq, Repr

/-- Evaluate a binary operation on 64-bit words. -/
def evalBinOp (op : BinOp) (a b : Word) : Word :=
  match op with
  | .add    => a + b
  | .sub    => a - b
  | .bitAnd => a &&& b
  | .bitOr  => a ||| b
  | .bitXor => a ^^^ b
  | .shl    => a <<< (b % 64)
  | .shr    => a >>> (b % 64)
  | .eqOp   => if a == b then 1 else 0
  | .neOp   => if a != b then 1 else 0
  | .ltU    => if a < b then 1 else 0

/-- Branch condition codes in RV64I. -/
inductive BranchCond where
  | beq
  | bne
  | bltu
  | bgeu
  deriving DecidableEq, Repr

def evalBranchCond (c : BranchCond) (a b : Word) : Bool :=
  match c with
  | .beq  => a == b
  | .bne  => a != b
  | .bltu => a < b
  | .bgeu => !(a < b)

/-- Core RV64I instruction set (decoded from ELF .text segment). -/
inductive RVInstr where
  | opImm  (op : BinOp) (rd rs1 : RegIdx) (imm : Word)
  | opReg  (op : BinOp) (rd rs1 rs2 : RegIdx)
  | lui    (rd : RegIdx) (imm20 : Word)
  | auipc  (rd : RegIdx) (imm20 : Word)
  | ld     (rd rs1 : RegIdx) (offset : Word)
  | sd     (rs1 rs2 : RegIdx) (offset : Word)
  | branch (cond : BranchCond) (rs1 rs2 : RegIdx) (targetPc : Word)
  | jal    (rd : RegIdx) (targetPc : Word)
  | jalr   (rd rs1 : RegIdx) (offset : Word)
  | ecall  -- Halt / return to host with a0 (x10) as output
  deriving DecidableEq, Repr

/-- Machine state of the RISC-V processor. -/
structure RVState where
  pc     : Word
  regs   : RegIdx → Word
  mem    : Mem
  halted : Bool
  retVal : Word

/-- A stripped ELF program: entry point and list of `(pc, instruction)` pairs. -/
structure ElfProg where
  entryPc : Word
  code    : List (Word × RVInstr)
  deriving DecidableEq, Repr

/-- Fetch instruction at `pc` in the stripped ELF table. -/
def fetchInstr (code : List (Word × RVInstr)) (pc : Word) : Option RVInstr :=
  match code with
  | [] => none
  | (addr, ins) :: rest => if pc == addr then some ins else fetchInstr rest pc

/-- Execute one RV64I instruction at `st.pc`. -/
def execRVInstr (ins : RVInstr) (st : RVState) : RVState :=
  match ins with
  | .opImm op rd rs1 imm =>
    let v := evalBinOp op (readReg st.regs rs1) imm
    { st with pc := st.pc + 4, regs := writeReg st.regs rd v }
  | .opReg op rd rs1 rs2 =>
    let v := evalBinOp op (readReg st.regs rs1) (readReg st.regs rs2)
    { st with pc := st.pc + 4, regs := writeReg st.regs rd v }
  | .lui rd imm20 =>
    { st with pc := st.pc + 4, regs := writeReg st.regs rd imm20 }
  | .auipc rd imm20 =>
    { st with pc := st.pc + 4, regs := writeReg st.regs rd (st.pc + imm20) }
  | .ld rd rs1 offset =>
    let addr := readReg st.regs rs1 + offset
    let v := st.mem addr
    { st with pc := st.pc + 4, regs := writeReg st.regs rd v }
  | .sd rs1 rs2 offset =>
    let addr := readReg st.regs rs1 + offset
    let v := readReg st.regs rs2
    { st with pc := st.pc + 4, mem := fun a => if a == addr then v else st.mem a }
  | .branch cond rs1 rs2 targetPc =>
    let taken := evalBranchCond cond (readReg st.regs rs1) (readReg st.regs rs2)
    { st with pc := if taken then targetPc else st.pc + 4 }
  | .jal rd targetPc =>
    { st with pc := targetPc, regs := writeReg st.regs rd (st.pc + 4) }
  | .jalr rd rs1 offset =>
    let nextPc := readReg st.regs rs1 + offset
    { st with pc := nextPc, regs := writeReg st.regs rd (st.pc + 4) }
  | .ecall =>
    { st with pc := 0, halted := true, retVal := readReg st.regs 10 }

/-- Single clocked step of the RISC-V machine. Halts when `pc == 0` or `fetchInstr` is `none`. -/
def stepRV (prog : ElfProg) (st : RVState) : RVState :=
  if st.halted || st.pc == 0 then
    { st with halted := true, retVal := readReg st.regs 10 }
  else
    match fetchInstr prog.code st.pc with
    | some ins => execRVInstr ins st
    | none     => { st with pc := 0, halted := true, retVal := readReg st.regs 10 }

/-- Run the RISC-V machine for `fuel` steps. -/
def runRV (prog : ElfProg) (fuel : Nat) (st : RVState) : RVState :=
  match fuel with
  | 0 => st
  | fuel' + 1 =>
    if st.halted || st.pc == 0 then
      { st with halted := true, retVal := readReg st.regs 10 }
    else
      runRV prog fuel' (stepRV prog st)

end Rv2Pancake.Spec
