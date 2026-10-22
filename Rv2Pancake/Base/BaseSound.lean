import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Base.Lifter
import Rv2Pancake.Passes.SafePass

namespace Rv2Pancake.Base

open Rv2Pancake.Spec
open Rv2Pancake.Passes

theorem assignReg_isLoopFree (r : RegIdx) (e : PanExp) :
    isLoopFree (assignReg r e) = true := by
  unfold assignReg
  split <;> rfl

theorem liftInstr_isLoopFree (addr : Word) (ins : RVInstr) :
    isLoopFree (liftInstr addr ins) = true := by
  cases ins <;> simp [liftInstr, isLoopFree, assignReg_isLoopFree]

theorem liftCodeTable_isLoopFree (code : List (Word × RVInstr)) :
    isLoopFree (liftCodeTable code) = true := by
  induction code with
  | nil => rfl
  | cons hd tl ih =>
    rcases hd with ⟨addr, ins⟩
    simp [liftCodeTable, isLoopFree, liftInstr_isLoopFree, ih]

theorem evalExp_regExp (rv : RVState) (pan : PanState) (hsim : SimRel rv pan)
    (r : RegIdx) (hr : r ≤ 31) :
    evalExp pan (regExp r) = readReg rv.regs r := by
  by_cases h0 : r = 0
  · subst h0
    simp [regExp, evalExp, readReg]
  · have hb : (r == 0) = false := beq_false_of_ne h0
    have hr1 : 1 ≤ r := Nat.one_le_iff_ne_zero.mpr h0
    simp [regExp, evalExp, readReg, hb, hsim.regs_eq r hr1 hr]

theorem assignReg_pcVar_preserved (st : PanState) (r : RegIdx) (e : PanExp) :
    (execStmt st (assignReg r e)).vars pcVar = st.vars pcVar := by
  by_cases h0 : r = 0
  · subst h0
    simp [assignReg, execStmt]
  · have hb : (r == 0) = false := beq_false_of_ne h0
    have hne : pcVar ≠ regVar r := by
      unfold pcVar regVar
      exact Ne.symm h0
    simp [assignReg, hb, execStmt, setVar_diff st pcVar (regVar r) _ hne]

theorem assignReg_mem_preserved (st : PanState) (r : RegIdx) (e : PanExp) :
    (execStmt st (assignReg r e)).mem = st.mem := by
  unfold assignReg
  split <;> rfl

theorem liftInstr_opImm_pc_step (st : PanState) (addr : Word) (op : BinOp) (rd rs1 : RegIdx) (imm : Word) :
    (execStmt st (liftInstr addr (.opImm op rd rs1 imm))).vars pcVar = addr + 4 := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_opReg_pc_step (st : PanState) (addr : Word) (op : BinOp) (rd rs1 rs2 : RegIdx) :
    (execStmt st (liftInstr addr (.opReg op rd rs1 rs2))).vars pcVar = addr + 4 := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_lui_pc_step (st : PanState) (addr : Word) (rd : RegIdx) (imm20 : Word) :
    (execStmt st (liftInstr addr (.lui rd imm20))).vars pcVar = addr + 4 := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_auipc_pc_step (st : PanState) (addr : Word) (rd : RegIdx) (imm20 : Word) :
    (execStmt st (liftInstr addr (.auipc rd imm20))).vars pcVar = addr + 4 := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_ld_pc_step (st : PanState) (addr : Word) (rd rs1 : RegIdx) (offset : Word) :
    (execStmt st (liftInstr addr (.ld rd rs1 offset))).vars pcVar = addr + 4 := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_sd_pc_step (st : PanState) (addr : Word) (rs1 rs2 : RegIdx) (offset : Word) :
    (execStmt st (liftInstr addr (.sd rs1 rs2 offset))).vars pcVar = addr + 4 := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_jal_pc_step (st : PanState) (addr : Word) (rd : RegIdx) (targetPc : Word) :
    (execStmt st (liftInstr addr (.jal rd targetPc))).vars pcVar = targetPc := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_ecall_pc_step (st : PanState) (addr : Word) :
    (execStmt st (liftInstr addr .ecall)).vars pcVar = 0 := by
  simp [liftInstr, execStmt, evalExp]

theorem liftInstr_pc_step (st : PanState) (addr : Word) :
    (∀ op rd rs1 imm, (execStmt st (liftInstr addr (.opImm op rd rs1 imm))).vars pcVar = addr + 4) ∧
    (∀ op rd rs1 rs2, (execStmt st (liftInstr addr (.opReg op rd rs1 rs2))).vars pcVar = addr + 4) ∧
    (∀ rd imm20, (execStmt st (liftInstr addr (.lui rd imm20))).vars pcVar = addr + 4) ∧
    (∀ rd imm20, (execStmt st (liftInstr addr (.auipc rd imm20))).vars pcVar = addr + 4) ∧
    (∀ rd rs1 offset, (execStmt st (liftInstr addr (.ld rd rs1 offset))).vars pcVar = addr + 4) ∧
    (∀ rs1 rs2 offset, (execStmt st (liftInstr addr (.sd rs1 rs2 offset))).vars pcVar = addr + 4) ∧
    (∀ rd targetPc, (execStmt st (liftInstr addr (.jal rd targetPc))).vars pcVar = targetPc) ∧
    ((execStmt st (liftInstr addr .ecall)).vars pcVar = 0) := by
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_, ?_, ?_⟩
  · intro op rd rs1 imm; simp [liftInstr, execStmt, evalExp]
  · intro op rd rs1 rs2; simp [liftInstr, execStmt, evalExp]
  · intro rd imm20; simp [liftInstr, execStmt, evalExp]
  · intro rd imm20; simp [liftInstr, execStmt, evalExp]
  · intro rd rs1 offset; simp [liftInstr, execStmt, evalExp]
  · intro rs1 rs2 offset; simp [liftInstr, execStmt, evalExp]
  · intro rd targetPc; simp [liftInstr, execStmt, evalExp]
  · simp [liftInstr, execStmt, evalExp]

/-- Register indices used as source operands (`rs1`, `rs2`) in `ins` are within `0..31`. -/
def validSrcRegs : RVInstr → Prop
  | .opImm _ _ rs1 _      => rs1 ≤ 31
  | .opReg _ _ rs1 rs2    => rs1 ≤ 31 ∧ rs2 ≤ 31
  | .lui _ _              => True
  | .auipc _ _            => True
  | .ld _ rs1 _           => rs1 ≤ 31
  | .sd rs1 rs2 _         => rs1 ≤ 31 ∧ rs2 ≤ 31
  | .branch _ rs1 rs2 _   => rs1 ≤ 31 ∧ rs2 ≤ 31
  | .jal _ _              => True
  | .jalr _ rs1 _         => rs1 ≤ 31
  | .ecall                => True

theorem liftInstr_sd_mem_sim (rv : RVState) (pan : PanState) (hsim : SimRel rv pan)
    (addr : Word) (rs1 rs2 : RegIdx) (offset : Word)
    (hrs1 : rs1 ≤ 31) (hrs2 : rs2 ≤ 31) :
    ∀ a : Word,
      (execStmt pan (liftInstr addr (.sd rs1 rs2 offset))).mem a =
      (execRVInstr (.sd rs1 rs2 offset) { rv with pc := addr }).mem a := by
  intro a
  simp only [liftInstr, execStmt, setVar, setMem, evalExp, evalBinOp, execRVInstr,
    evalExp_regExp rv pan hsim rs1 hrs1, evalExp_regExp rv pan hsim rs2 hrs2]
  split <;> simp [hsim.mem_eq a]

theorem liftInstr_mem_sim (rv : RVState) (pan : PanState) (hsim : SimRel rv pan)
    (addr : Word) (ins : RVInstr) (hregs : validSrcRegs ins) :
    ∀ a : Word,
      (execStmt pan (liftInstr addr ins)).mem a =
      (execRVInstr ins { rv with pc := addr }).mem a := by
  intro a
  cases ins with
  | opImm op rd rs1 imm =>
    simp [liftInstr, execStmt, setVar, assignReg_mem_preserved, execRVInstr, hsim.mem_eq a]
  | opReg op rd rs1 rs2 =>
    simp [liftInstr, execStmt, setVar, assignReg_mem_preserved, execRVInstr, hsim.mem_eq a]
  | lui rd imm20 =>
    simp [liftInstr, execStmt, setVar, assignReg_mem_preserved, execRVInstr, hsim.mem_eq a]
  | auipc rd imm20 =>
    simp [liftInstr, execStmt, setVar, assignReg_mem_preserved, execRVInstr, hsim.mem_eq a]
  | ld rd rs1 offset =>
    simp [liftInstr, execStmt, setVar, assignReg_mem_preserved, execRVInstr, hsim.mem_eq a]
  | sd rs1 rs2 offset =>
    exact liftInstr_sd_mem_sim rv pan hsim addr rs1 rs2 offset hregs.1 hregs.2 a
  | branch cond rs1 rs2 targetPc =>
    simp only [liftInstr, execStmt, execRVInstr]
    split <;> simp [setVar, hsim.mem_eq a]
  | jal rd targetPc =>
    simp [liftInstr, execStmt, setVar, assignReg_mem_preserved, execRVInstr, hsim.mem_eq a]
  | jalr rd rs1 offset =>
    simp [liftInstr, execStmt, setVar, assignReg_mem_preserved, execRVInstr, hsim.mem_eq a]
  | ecall =>
    simp [liftInstr, execStmt, setVar, execRVInstr, hsim.mem_eq a]

end Rv2Pancake.Base
