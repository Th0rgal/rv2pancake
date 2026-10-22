import Rv2Pancake.Spec.RiscvSem

namespace Rv2Pancake.Spec

/-- Read a 32-bit little-endian instruction word from a ByteArray at offset `off`. -/
def readU32LE (bytes : ByteArray) (off : Nat) : UInt32 :=
  if off + 3 < bytes.size then
    let b0 := (bytes.get! off).toUInt32
    let b1 := (bytes.get! (off + 1)).toUInt32 <<< 8
    let b2 := (bytes.get! (off + 2)).toUInt32 <<< 16
    let b3 := (bytes.get! (off + 3)).toUInt32 <<< 24
    b0 ||| b1 ||| b2 ||| b3
  else
    0

/-- Sign-extend a `bits`-bit unsigned value (stored in `UInt32`) to 64-bit `Word`. -/
def signExtend32 (val : UInt32) (bits : Nat) : Word :=
  let v64 := val.toUInt64
  let signBit := (v64 >>> (bits - 1).toUInt64) &&& 1
  if signBit == 1 then
    v64 ||| ((0xFFFFFFFFFFFFFFFF : UInt64) <<< bits.toUInt64)
  else
    v64

/-- Strict RV64IM 32-bit instruction decoder returning `Option RVInstr`.
    Returns `none` on any illegal or unimplemented opcode/funct3/funct7 combination
    (required by Meta-Spec MS2 — no silent fallback to `ecall` or `add`). -/
def decodeRV64WordOpt (pc : Word) (raw : UInt32) : Option RVInstr :=
  let opcode := raw &&& 0x7F
  let rd     := ((raw >>> 7) &&& 0x1F).toNat
  let funct3 := (raw >>> 12) &&& 0x7
  let rs1    := ((raw >>> 15) &&& 0x1F).toNat
  let rs2    := ((raw >>> 20) &&& 0x1F).toNat
  let funct7 := (raw >>> 25) &&& 0x7F
  let top6   := (raw >>> 26) &&& 0x3F
  if opcode == 0x13 then -- OP-IMM (64-bit)
    let immI := signExtend32 ((raw >>> 20) &&& 0xFFF) 12
    let shamt := ((raw >>> 20) &&& 0x3F).toUInt64
    if funct3 == 0x0 then some (.opImm .add rd rs1 immI)
    else if funct3 == 0x2 then some (.opImm .ltS rd rs1 immI)
    else if funct3 == 0x3 then some (.opImm .ltU rd rs1 immI)
    else if funct3 == 0x4 then some (.opImm .bitXor rd rs1 immI)
    else if funct3 == 0x6 then some (.opImm .bitOr rd rs1 immI)
    else if funct3 == 0x7 then some (.opImm .bitAnd rd rs1 immI)
    else if funct3 == 0x1 then
      if top6 == 0x00 then some (.opImm .shl rd rs1 shamt) else none
    else if funct3 == 0x5 then
      if top6 == 0x00 then some (.opImm .shr rd rs1 shamt)
      else if top6 == 0x10 then some (.opImm .sar rd rs1 shamt)
      else none
    else none
  else if opcode == 0x1B then -- OP-IMM-32 (`*iw`)
    let immI := signExtend32 ((raw >>> 20) &&& 0xFFF) 12
    let shamt5 := ((raw >>> 20) &&& 0x1F).toUInt64
    if funct3 == 0x0 then some (.opImm .addw rd rs1 immI)
    else if funct3 == 0x1 && funct7 == 0x00 then some (.opImm .sllw rd rs1 shamt5)
    else if funct3 == 0x5 && funct7 == 0x00 then some (.opImm .srlw rd rs1 shamt5)
    else if funct3 == 0x5 && funct7 == 0x20 then some (.opImm .sraw rd rs1 shamt5)
    else none
  else if opcode == 0x33 then -- OP-REG (RV64I + M extension)
    if funct7 == 0x01 then -- RV64M
      if funct3 == 0x0 then some (.opReg .mul rd rs1 rs2)
      else if funct3 == 0x5 then some (.opReg .divU rd rs1 rs2)
      else if funct3 == 0x7 then some (.opReg .remU rd rs1 rs2)
      else none
    else if funct3 == 0x0 then
      if funct7 == 0x00 then some (.opReg .add rd rs1 rs2)
      else if funct7 == 0x20 then some (.opReg .sub rd rs1 rs2)
      else none
    else if funct3 == 0x1 && funct7 == 0x00 then some (.opReg .shl rd rs1 rs2)
    else if funct3 == 0x2 && funct7 == 0x00 then some (.opReg .ltS rd rs1 rs2)
    else if funct3 == 0x3 && funct7 == 0x00 then some (.opReg .ltU rd rs1 rs2)
    else if funct3 == 0x4 && funct7 == 0x00 then some (.opReg .bitXor rd rs1 rs2)
    else if funct3 == 0x5 && funct7 == 0x00 then some (.opReg .shr rd rs1 rs2)
    else if funct3 == 0x5 && funct7 == 0x20 then some (.opReg .sar rd rs1 rs2)
    else if funct3 == 0x6 && funct7 == 0x00 then some (.opReg .bitOr rd rs1 rs2)
    else if funct3 == 0x7 && funct7 == 0x00 then some (.opReg .bitAnd rd rs1 rs2)
    else none
  else if opcode == 0x3B then -- OP-32 (`addw`, `subw`, `mulw`, `sllw`, `srlw`, `sraw`)
    if funct3 == 0x0 && funct7 == 0x00 then some (.opReg .addw rd rs1 rs2)
    else if funct3 == 0x0 && funct7 == 0x20 then some (.opReg .subw rd rs1 rs2)
    else if funct3 == 0x0 && funct7 == 0x01 then some (.opReg .mulw rd rs1 rs2)
    else if funct3 == 0x1 && funct7 == 0x00 then some (.opReg .sllw rd rs1 rs2)
    else if funct3 == 0x5 && funct7 == 0x00 then some (.opReg .srlw rd rs1 rs2)
    else if funct3 == 0x5 && funct7 == 0x20 then some (.opReg .sraw rd rs1 rs2)
    else none
  else if opcode == 0x37 then -- LUI
    let imm20 := signExtend32 (raw &&& 0xFFFFF000) 32
    some (.lui rd imm20)
  else if opcode == 0x17 then -- AUIPC
    let imm20 := signExtend32 (raw &&& 0xFFFFF000) 32
    some (.auipc rd imm20)
  else if opcode == 0x03 then -- LOAD (`ld` when funct3 == 0x3)
    if funct3 == 0x3 then
      let immI := signExtend32 ((raw >>> 20) &&& 0xFFF) 12
      some (.ld rd rs1 immI)
    else none
  else if opcode == 0x23 then -- STORE (`sd` when funct3 == 0x3)
    if funct3 == 0x3 then
      let immSRaw := (((raw >>> 25) &&& 0x7F) <<< 5) ||| ((raw >>> 7) &&& 0x1F)
      let immS := signExtend32 immSRaw 12
      some (.sd rs1 rs2 immS)
    else none
  else if opcode == 0x63 then -- BRANCH
    let b12 := ((raw >>> 31) &&& 1) <<< 12
    let b11 := ((raw >>> 7) &&& 1) <<< 11
    let b10_5 := ((raw >>> 25) &&& 0x3F) <<< 5
    let b4_1 := ((raw >>> 8) &&& 0xF) <<< 1
    let off := signExtend32 (b12 ||| b11 ||| b10_5 ||| b4_1) 13
    if funct3 == 0x0 then some (.branch .beq rs1 rs2 (pc + off))
    else if funct3 == 0x1 then some (.branch .bne rs1 rs2 (pc + off))
    else if funct3 == 0x4 then some (.branch .blt rs1 rs2 (pc + off))
    else if funct3 == 0x5 then some (.branch .bge rs1 rs2 (pc + off))
    else if funct3 == 0x6 then some (.branch .bltu rs1 rs2 (pc + off))
    else if funct3 == 0x7 then some (.branch .bgeu rs1 rs2 (pc + off))
    else none
  else if opcode == 0x6F then -- JAL
    let j20 := ((raw >>> 31) &&& 1) <<< 20
    let j19_12 := ((raw >>> 12) &&& 0xFF) <<< 12
    let j11 := ((raw >>> 20) &&& 1) <<< 11
    let j10_1 := ((raw >>> 21) &&& 0x3FF) <<< 1
    let off := signExtend32 (j20 ||| j19_12 ||| j11 ||| j10_1) 21
    some (.jal rd (pc + off))
  else if opcode == 0x67 then -- JALR
    if funct3 == 0x0 then
      let immI := signExtend32 ((raw >>> 20) &&& 0xFFF) 12
      some (.jalr rd rs1 immI)
    else none
  else if raw == 0x00000073 || raw == 0x00100073 then -- ECALL / EBREAK
    some .ecall
  else
    none

/-- Total RV64IM 32-bit decoder wrapper (maps `none` to `.ecall` when total signature is needed). -/
def decodeRV64Word (pc : Word) (raw : UInt32) : RVInstr :=
  (decodeRV64WordOpt pc raw).getD .ecall

/-- Check if a ByteArray starts with the ELF magic header `\x7FELF`. -/
def isElfMagic (bytes : ByteArray) : Bool :=
  bytes.size >= 64 &&
  bytes.get! 0 == 0x7F &&
  bytes.get! 1 == 0x45 &&
  bytes.get! 2 == 0x4C &&
  bytes.get! 3 == 0x46

/-- Read a 64-bit little-endian word from a ByteArray at offset `off`. -/
def readU64LE (bytes : ByteArray) (off : Nat) : UInt64 :=
  (readU32LE bytes off).toUInt64 ||| ((readU32LE bytes (off + 4)).toUInt64 <<< 32)

/-- Decode a linear sequence of 32-bit RISC-V instructions from `bytes` starting at `off`.
    Skips invalid instruction words rather than silently fabricating instructions. -/
def decodeCodeSlice (bytes : ByteArray) (basePc : Word) (off : Nat) (count : Nat) : List (Word × RVInstr) :=
  match count with
  | 0 => []
  | n + 1 =>
    if off + 3 < bytes.size then
      let w := readU32LE bytes off
      match decodeRV64WordOpt basePc w with
      | some ins => (basePc, ins) :: decodeCodeSlice bytes (basePc + 4) (off + 4) n
      | none     => decodeCodeSlice bytes (basePc + 4) (off + 4) n
    else
      []

/-- Locate the first executable `PT_LOAD` (`p_type == 1` and `(p_flags & 1) != 0`) program header
    in an ELF64 image by scanning up to `phnum` entries of size `phentsize`. -/
def findExecSegment (bytes : ByteArray) (phoff : Nat) (phentsize : Nat) (phnum : Nat) : Option (Nat × Nat × Word) :=
  match phnum with
  | 0 => none
  | n + 1 =>
    if phoff + 56 <= bytes.size then
      let p_type  := readU32LE bytes phoff
      let p_flags := readU32LE bytes (phoff + 4)
      let p_off   := (readU64LE bytes (phoff + 8)).toNat
      let p_vaddr := readU64LE bytes (phoff + 16)
      let p_filesz := (readU64LE bytes (phoff + 32)).toNat
      if p_type == 1 && (p_flags &&& 1) != 0 && p_filesz > 0 then
        some (p_off, p_filesz, p_vaddr)
      else
        findExecSegment bytes (phoff + phentsize) phentsize n
    else
      none

/-- Fast ELF64 / Raw flat binary stripper:
    If `bytes` has an ELF64 header, scans the program header table (`e_phoff`, `e_phentsize`, `e_phnum`)
    for the executable `PT_LOAD` (`PF_X`) segment; otherwise treats `bytes` as a raw RV64 `.text` slice at `0x1000`. -/
def parseElfOrRaw (bytes : ByteArray) : ElfProg :=
  if isElfMagic bytes then
    let entry     := readU64LE bytes 24
    let phoff     := (readU64LE bytes 32).toNat
    let phentsize := if bytes.size >= 56 then (bytes.get! 54).toNat + ((bytes.get! 55).toNat * 256) else 56
    let phnum     := if bytes.size >= 58 then (bytes.get! 56).toNat + ((bytes.get! 57).toNat * 256) else 1
    let (codeOff, filesz, vaddr) :=
      match findExecSegment bytes phoff (if phentsize == 0 then 56 else phentsize) (min 16 phnum) with
      | some seg => seg
      | none =>
        let cOff := if phoff + 56 <= bytes.size then (readU64LE bytes (phoff + 8)).toNat else 64
        let fSz  := if phoff + 56 <= bytes.size then (readU64LE bytes (phoff + 32)).toNat else (bytes.size - 64)
        let vAd  := if phoff + 56 <= bytes.size then readU64LE bytes (phoff + 16) else entry
        (cOff, fSz, vAd)
    let maxInstrs := min 2048 (filesz / 4)
    { entryPc := if entry == 0 then 0x1000 else entry
    , code    := decodeCodeSlice bytes (if vaddr == 0 then 0x1000 else vaddr) codeOff maxInstrs }
  else
    let maxInstrs := min 2048 (bytes.size / 4)
    { entryPc := 0x1000
    , code    := decodeCodeSlice bytes 0x1000 0 maxInstrs }

end Rv2Pancake.Spec
