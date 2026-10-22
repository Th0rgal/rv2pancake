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

theorem assignReg_reg_sim (regs : RegIdx → Word) (pan : PanState)
    (hregs_eq : ∀ r : RegIdx, 1 ≤ r → r ≤ 31 → pan.vars (regVar r) = readReg regs r)
    (rd : RegIdx) (e : PanExp) (v : Word) (hev : evalExp pan e = v)
    (r : RegIdx) (hr1 : 1 ≤ r) (hr31 : r ≤ 31) :
    (execStmt pan (assignReg rd e)).vars (regVar r) = readReg (writeReg regs rd v) r := by
  by_cases hrd0 : rd = 0
  · subst hrd0
    simp [assignReg, execStmt, writeReg, hregs_eq r hr1 hr31]
  · have hbrd0 : (rd == 0) = false := beq_false_of_ne hrd0
    by_cases hrr : r = rd
    · subst hrr
      simp [assignReg, hbrd0, execStmt, hev, setVar_same, readReg_writeReg_same regs r v hrd0]
    · have hne : regVar r ≠ regVar rd := hrr
      simp [assignReg, hbrd0, execStmt, hev, setVar_diff pan (regVar r) (regVar rd) v hne,
        readReg_writeReg_diff regs r rd v hrr, hregs_eq r hr1 hr31]

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

/-- Full architectural register simulation (`1..31`) across `liftInstr` and `execRVInstr`. -/
theorem liftInstr_regs_sim (rv : RVState) (pan : PanState) (hsim : SimRel rv pan)
    (addr : Word) (ins : RVInstr) (hregs : validSrcRegs ins) :
    ∀ (r : RegIdx), 1 ≤ r → r ≤ 31 →
      (execStmt pan (liftInstr addr ins)).vars (regVar r) =
      readReg (execRVInstr ins { rv with pc := addr }).regs r := by
  intro r hr1 hr31
  have hne_pc : regVar r ≠ pcVar := by
    unfold regVar pcVar
    exact Nat.ne_of_gt (Nat.lt_of_lt_of_le Nat.zero_lt_one hr1)
  cases ins with
  | opImm op rd rs1 imm =>
    simp only [liftInstr, execStmt, evalExp, setVar_diff _ (regVar r) pcVar _ hne_pc, execRVInstr]
    exact assignReg_reg_sim rv.regs pan hsim.regs_eq rd (.binOp op (regExp rs1) (.const imm))
      (evalBinOp op (readReg rv.regs rs1) imm)
      (by simp [evalExp, evalExp_regExp rv pan hsim rs1 hregs]) r hr1 hr31
  | opReg op rd rs1 rs2 =>
    simp only [liftInstr, execStmt, evalExp, setVar_diff _ (regVar r) pcVar _ hne_pc, execRVInstr]
    exact assignReg_reg_sim rv.regs pan hsim.regs_eq rd (.binOp op (regExp rs1) (regExp rs2))
      (evalBinOp op (readReg rv.regs rs1) (readReg rv.regs rs2))
      (by simp [evalExp, evalExp_regExp rv pan hsim rs1 hregs.1, evalExp_regExp rv pan hsim rs2 hregs.2]) r hr1 hr31
  | lui rd imm20 =>
    simp only [liftInstr, execStmt, evalExp, setVar_diff _ (regVar r) pcVar _ hne_pc, execRVInstr]
    exact assignReg_reg_sim rv.regs pan hsim.regs_eq rd (.const imm20) imm20 rfl r hr1 hr31
  | auipc rd imm20 =>
    simp only [liftInstr, execStmt, evalExp, setVar_diff _ (regVar r) pcVar _ hne_pc, execRVInstr]
    exact assignReg_reg_sim rv.regs pan hsim.regs_eq rd (.const (addr + imm20)) (addr + imm20) rfl r hr1 hr31
  | ld rd rs1 offset =>
    simp only [liftInstr, execStmt, evalExp, setVar_diff _ (regVar r) pcVar _ hne_pc, execRVInstr]
    exact assignReg_reg_sim rv.regs pan hsim.regs_eq rd (.load (.binOp .add (regExp rs1) (.const offset)))
      (rv.mem (readReg rv.regs rs1 + offset))
      (by simp [evalExp, evalBinOp, evalExp_regExp rv pan hsim rs1 hregs, hsim.mem_eq]) r hr1 hr31
  | sd rs1 rs2 offset =>
    simp only [liftInstr, execStmt, evalExp, setVar_diff _ (regVar r) pcVar _ hne_pc, setMem, execRVInstr]
    exact hsim.regs_eq r hr1 hr31
  | branch cond rs1 rs2 targetPc =>
    simp only [liftInstr, execStmt, execRVInstr]
    split <;> simp [setVar_diff _ (regVar r) pcVar _ hne_pc, hsim.regs_eq r hr1 hr31]
  | jal rd targetPc =>
    simp only [liftInstr, execStmt, evalExp, setVar_diff _ (regVar r) pcVar _ hne_pc, execRVInstr]
    exact assignReg_reg_sim rv.regs pan hsim.regs_eq rd (.const (addr + 4)) (addr + 4) rfl r hr1 hr31
  | jalr rd rs1 offset =>
    simp only [liftInstr, execStmt, execRVInstr]
    let pan1 := setVar pan pcVar (evalExp pan (.binOp .bitAnd (.binOp .add (regExp rs1) (.const offset)) (.const jalrMask)))
    have hregs1 : ∀ r' : RegIdx, 1 ≤ r' → r' ≤ 31 → pan1.vars (regVar r') = readReg rv.regs r' := by
      intro r' hr1' hr31'
      have hne' : regVar r' ≠ pcVar := Nat.ne_of_gt (Nat.lt_of_lt_of_le Nat.zero_lt_one hr1')
      rw [setVar_diff pan (regVar r') pcVar _ hne']
      exact hsim.regs_eq r' hr1' hr31'
    exact assignReg_reg_sim rv.regs pan1 hregs1 rd (.const (addr + 4)) (addr + 4) rfl r hr1 hr31
  | ecall =>
    have hne_halt : regVar r ≠ haltVar := by
      unfold regVar haltVar
      exact Nat.ne_of_lt (Nat.lt_of_le_of_lt hr31 (by decide))
    have hne_ret : regVar r ≠ retVar := by
      unfold regVar retVar
      exact Nat.ne_of_lt (Nat.lt_of_le_of_lt hr31 (by decide))
    simp only [liftInstr, execStmt, evalExp,
      setVar_diff _ (regVar r) pcVar _ hne_pc,
      setVar_diff _ (regVar r) haltVar _ hne_halt,
      setVar_diff _ (regVar r) retVar _ hne_ret,
      execRVInstr]
    exact hsim.regs_eq r hr1 hr31

/-- Master single-instruction observational equivalence theorem:
    Executing `liftInstr addr ins` preserves `ObsEquivRVPan` (`a0 / x10` and `mem`)
    with `execRVInstr ins { rv with pc := addr }`. -/
theorem liftInstr_obsEquiv_sim (rv : RVState) (pan : PanState) (hsim : SimRel rv pan)
    (addr : Word) (ins : RVInstr) (hregs : validSrcRegs ins) :
    ObsEquivRVPan (execRVInstr ins { rv with pc := addr }) (execStmt pan (liftInstr addr ins)) := by
  refine ⟨?_, ?_⟩
  · exact liftInstr_regs_sim rv pan hsim addr ins hregs 10 (by decide) (by decide)
  · exact liftInstr_mem_sim rv pan hsim addr ins hregs

end Rv2Pancake.Base
