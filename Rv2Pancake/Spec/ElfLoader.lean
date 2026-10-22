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

/-- Sign-extend a `w`-bit unsigned value (stored in `UInt32`) to 64-bit `Word`. -/
def signExtend32 (val : UInt32) (bits : Nat) : Word :=
  let v64 := val.toUInt64
  let signBit := (v64 >>> (bits - 1).toUInt64) &&& 1
  if signBit == 1 then
    v64 ||| ((0xFFFFFFFFFFFFFFFF : UInt64) <<< bits.toUInt64)
  else
    v64

/-- Pure RV64I 32-bit instruction decoder. -/
def decodeRV64Word (pc : Word) (raw : UInt32) : RVInstr :=
  let opcode := raw &&& 0x7F
  let rd     := ((raw >>> 7) &&& 0x1F).toNat
  let funct3 := (raw >>> 12) &&& 0x7
  let rs1    := ((raw >>> 15) &&& 0x1F).toNat
  let rs2    := ((raw >>> 20) &&& 0x1F).toNat
  let funct7 := (raw >>> 25) &&& 0x7F
  if opcode == 0x13 then -- OP-IMM
    let immI := signExtend32 ((raw >>> 20) &&& 0xFFF) 12
    let shamt := ((raw >>> 20) &&& 0x3F).toUInt64
    if funct3 == 0x0 then .opImm .add rd rs1 immI
    else if funct3 == 0x7 then .opImm .bitAnd rd rs1 immI
    else if funct3 == 0x6 then .opImm .bitOr rd rs1 immI
    else if funct3 == 0x4 then .opImm .bitXor rd rs1 immI
    else if funct3 == 0x3 then .opImm .ltU rd rs1 immI
    else if funct3 == 0x1 then .opImm .shl rd rs1 shamt
    else if funct3 == 0x5 then .opImm .shr rd rs1 shamt
    else .opImm .add rd rs1 immI
  else if opcode == 0x33 then -- OP-REG
    if funct3 == 0x0 then
      if funct7 == 0x20 then .opReg .sub rd rs1 rs2 else .opReg .add rd rs1 rs2
    else if funct3 == 0x7 then .opReg .bitAnd rd rs1 rs2
    else if funct3 == 0x6 then .opReg .bitOr rd rs1 rs2
    else if funct3 == 0x4 then .opReg .bitXor rd rs1 rs2
    else if funct3 == 0x1 then .opReg .shl rd rs1 rs2
    else if funct3 == 0x5 then .opReg .shr rd rs1 rs2
    else if funct3 == 0x3 then .opReg .ltU rd rs1 rs2
    else .opReg .add rd rs1 rs2
  else if opcode == 0x37 then -- LUI
    let imm20 := signExtend32 (raw &&& 0xFFFFF000) 32
    .lui rd imm20
  else if opcode == 0x17 then -- AUIPC
    let imm20 := signExtend32 (raw &&& 0xFFFFF000) 32
    .auipc rd imm20
  else if opcode == 0x03 then -- LD
    let immI := signExtend32 ((raw >>> 20) &&& 0xFFF) 12
    .ld rd rs1 immI
  else if opcode == 0x23 then -- SD
    let immSRaw := (((raw >>> 25) &&& 0x7F) <<< 5) ||| ((raw >>> 7) &&& 0x1F)
    let immS := signExtend32 immSRaw 12
    .sd rs1 rs2 immS
  else if opcode == 0x63 then -- BRANCH
    let b12 := ((raw >>> 31) &&& 1) <<< 12
    let b11 := ((raw >>> 7) &&& 1) <<< 11
    let b10_5 := ((raw >>> 25) &&& 0x3F) <<< 5
    let b4_1 := ((raw >>> 8) &&& 0xF) <<< 1
    let off := signExtend32 (b12 ||| b11 ||| b10_5 ||| b4_1) 13
    let cond :=
      if funct3 == 0x0 then BranchCond.beq
      else if funct3 == 0x1 then BranchCond.bne
      else if funct3 == 0x6 then BranchCond.bltu
      else BranchCond.bgeu
    .branch cond rs1 rs2 (pc + off)
  else if opcode == 0x6F then -- JAL
    let j20 := ((raw >>> 31) &&& 1) <<< 20
    let j19_12 := ((raw >>> 12) &&& 0xFF) <<< 12
    let j11 := ((raw >>> 20) &&& 1) <<< 11
    let j10_1 := ((raw >>> 21) &&& 0x3FF) <<< 1
    let off := signExtend32 (j20 ||| j19_12 ||| j11 ||| j10_1) 21
    .jal rd (pc + off)
  else if opcode == 0x67 then -- JALR
    let immI := signExtend32 ((raw >>> 20) &&& 0xFFF) 12
    .jalr rd rs1 immI
  else
    .ecall

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

/-- Decode a linear sequence of 32-bit RISC-V instructions from `bytes` starting at `off`. -/
def decodeCodeSlice (bytes : ByteArray) (basePc : Word) (off : Nat) (count : Nat) : List (Word × RVInstr) :=
  match count with
  | 0 => []
  | n + 1 =>
    if off + 3 < bytes.size then
      let w := readU32LE bytes off
      (basePc, decodeRV64Word basePc w) :: decodeCodeSlice bytes (basePc + 4) (off + 4) n
    else
      []

/-- Fast ELF64 / Raw flat binary stripper:
    If `bytes` has an ELF64 header, extracts `e_entry` (offset 24) and the first `PT_LOAD`
    executable segment; otherwise treats `bytes` as a raw RV64 `.text` slice at `0x1000`. -/
def parseElfOrRaw (bytes : ByteArray) : ElfProg :=
  if isElfMagic bytes then
    let entry := readU64LE bytes 24
    let phoff := (readU64LE bytes 32).toNat
    let codeOff := if phoff + 56 <= bytes.size then (readU64LE bytes (phoff + 8)).toNat else 64
    let filesz  := if phoff + 56 <= bytes.size then (readU64LE bytes (phoff + 32)).toNat else (bytes.size - 64)
    let vaddr   := if phoff + 56 <= bytes.size then readU64LE bytes (phoff + 16) else entry
    let maxInstrs := min 2048 (filesz / 4)
    { entryPc := if entry == 0 then 0x1000 else entry
    , code    := decodeCodeSlice bytes (if vaddr == 0 then 0x1000 else vaddr) codeOff maxInstrs }
  else
    let maxInstrs := min 2048 (bytes.size / 4)
    { entryPc := 0x1000
    , code    := decodeCodeSlice bytes 0x1000 0 maxInstrs }

end Rv2Pancake.Spec
