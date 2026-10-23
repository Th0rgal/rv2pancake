/-
  FlapjackFlip.Machine

  What it means to run an `Image`: install it in a riscv-zkvm machine and step it
  with `RiscvZkvm.Rv64.step`, handling the three CakeML/Pancake runtime entry points
  (halt, FFI, cache-clear) the way CakeML's target semantics does.

  FROZEN. This file is part of the acceptance specification; see `PROMPT.md`.

  ## The installation

  Flapjack emits code for CakeML's RISC-V calling convention
  (`Flapjack.Compiler.Backend.RiscVConfig.isRiscvMachineConfig`,
  `Flapjack.Pancake.Proofs.PanToTarget.panInstalled`), which we realise concretely:

  | what                    | where                                                   |
  |-------------------------|---------------------------------------------------------|
  | code                    | `codeBase = 0x8001_0000` (code memory; not data-addressable) |
  | halt entry              | `codeBase - 16`                                         |
  | cache-clear entry       | `codeBase - 32`                                         |
  | FFI entry `i`           | `codeBase - 16 * (i + 3)`                               |
  | bitmaps                 | `bitmapBase = 0xa000_0000`                              |
  | heap                    | `[heapStart, stackStart)`, 4 MiB                        |
  | stack                   | `[stackStart, stackEnd)`, 4 MiB                         |

  Registers at entry: `pc = a0 = codeBase`, `a1 = heapStart`, `a2 = stackStart`,
  `a3 = stackEnd`, everything else zero. The first five heap words hold the
  bitmap/data/code pointers that `panInstalled` requires. All other memory is zero.

  ## The runtime entry points

  The entry points hold no instructions. Like CakeML's `evaluate` in
  `targetSemScript.sml`, the semantics intercepts the pc:

  * **halt**: the run ends. `a0 = 0` is `success`, anything else is
    `resourceLimitHit` (CakeML's out-of-memory exit).
  * **FFI `i`**: the configuration bytes `[a0, a0 + a1)` and the array
    `[a2, a2 + a3)` are passed to Flapjack's `callFFIHOL` (which appends the
    `io_event`). A returned array is written back over `[a2, a2 + a3)` and execution
    resumes at the link register `ra`; a final result ends the run with
    `ffiOutcome`. Other registers are left unchanged (one of the behaviours
    `ffiInterferOkHOL` allows).
  * **cache-clear**: Pancake never uses it; reaching it fails.

  Any other pc is an ordinary `RiscvZkvm.Rv64.step`; `none` (trap, invalid memory
  access, undecodable or missing instruction, `ECALL`, `EBREAK`) fails.
-/

import Flapjack.FfiHOL
import RiscvZkvm.Rv64
import RiscvZkvm.Interpreter.Decode
import FlapjackFlip.Image

namespace FlapjackFlip

open RiscvZkvm.Rv64
open Flapjack (HolFfiState HolFfiName HolIoEvent HolOutcome HolFfiResult HolOracle)

/-! ## Layout -/

def codeBase    : Word := 0x80010000
def haltPc      : Word := codeBase - 16
def ccachePc    : Word := codeBase - 32
def ffiPc (i : Nat) : Word := codeBase - BitVec.ofNat 64 (16 * (i + 3))
def bitmapBase  : Word := 0xa0000000
def heapStart   : Word := 0xa0100000
def stackStart  : Word := 0xa0500000
def stackEnd    : Word := 0xa0900000

/-- Index of the FFI entry at `pc`, if any. -/
def ffiIndexAt? (img : Image) (pc : Word) : Option Nat :=
  (List.range img.ffiNames.length).find? (ffiPc · == pc)

/-- `[a, a + len)` lies inside one of the model's data zones. riscv-zkvm's valid
addresses are the union of `[0x20, 0x7800_0000]` and `[0xa000_0000, 0xc000_0000]`
(the input zone is inside the first), so checking the two ends and that they are in
the same zone is exact. -/
def rangeValid (a : Word) (len : Nat) : Bool :=
  len == 0 ||
    (a.toNat + len ≤ 2 ^ 64 &&
      let last : Word := a + BitVec.ofNat 64 (len - 1)
      isValidMemAddr a && isValidMemAddr last &&
        (decide (last.toNat < 0x80000000) == decide (a.toNat < 0x80000000)))

/-! ## Initial state -/

/-- Little-endian doublewords of a byte list, padded with zeros. -/
def packDwords (bytes : List (BitVec 8)) : List Word :=
  (List.range ((bytes.length + 7) / 8)).map fun k =>
    bytesToWordLE ((bytes.drop (8 * k)).take 8 ++ List.replicate (8 - ((bytes.drop (8 * k)).take 8).length) 0)

/-- Decoded code memory: instruction `k` of `code` at `codeBase + 4k`. -/
def codeMem (img : Image) (a : Word) : Option Instr :=
  if codeBase ≤ a ∧ (a - codeBase).toNat < img.code.length ∧ (a - codeBase).toNat % 4 = 0 then
    let k := (a - codeBase).toNat
    match img.code.drop k |>.take 4 with
    | [b0, b1, b2, b3] => RiscvZkvm.Interpreter.decode (b3 ++ b2 ++ b1 ++ b0)
    | _ => none
  else none

/-- The words that `panInstalled` requires at the start of the heap. -/
def heapHeader (img : Image) : List Word :=
  let bitmapEnd := bitmapBase + BitVec.ofNat 64 (8 * img.bitmaps.length)
  let codeEnd := codeBase + BitVec.ofNat 64 img.code.length
  [bitmapBase, bitmapEnd, bitmapEnd, codeEnd, codeEnd]

/-- Initial data memory as a list of (dword address, value) cells; everything else 0. -/
def initialCells (img : Image) : List (Word × Word) :=
  (img.bitmaps.zipIdx.map fun (w, k) => (bitmapBase + BitVec.ofNat 64 (8 * k), w)) ++
  ((heapHeader img).zipIdx.map fun (w, k) => (heapStart + BitVec.ofNat 64 (8 * k), w))

def initialRegs : Reg → Word
  | .x10 => codeBase
  | .x11 => heapStart
  | .x12 => stackStart
  | .x13 => stackEnd
  | _ => 0

/-- The installed image, as the proof model's machine state. -/
def install (img : Image) : MachineState where
  regs := initialRegs
  mem := fun a => ((initialCells img).find? (·.1 == a)).map (·.2) |>.getD 0
  code := codeMem img
  pc := codeBase

/-! ## One step -/

/-- Where a run is. -/
inductive Status where
  | running
  | halted (outcome : HolOutcome)
  | failed
  deriving Inhabited

def Status.isRunning : Status → Bool
  | .running => true
  | _ => false

/-- A machine state together with the FFI state threaded through it. -/
structure Config (σ : Type) where
  machine : MachineState
  ffi : HolFfiState σ
  status : Status := .running

/-- Write `bytes` at `a, a+1, …`. -/
def writeBytes (m : MachineState) (a : Word) (bytes : List (BitVec 8)) : MachineState :=
  (bytes.zipIdx.foldl fun m (b, k) => m.setByte (a + BitVec.ofNat 64 k) b) m

/-- One step of the installed image. -/
def stepConfig {σ} (img : Image) (c : Config σ) : Config σ :=
  match c.status with
  | .halted _ | .failed => c
  | .running =>
    let ms := c.machine
    if ms.pc == haltPc then
      let outcome := if ms.getReg .x10 == 0 then HolOutcome.success else .resourceLimitHit
      { c with status := .halted outcome }
    else if ms.pc == ccachePc then
      { c with status := .failed }
    else match ffiIndexAt? img ms.pc with
    | some i =>
      let confPtr := ms.getReg .x10
      let confLen := (ms.getReg .x11).toNat
      let arrPtr := ms.getReg .x12
      let arrLen := (ms.getReg .x13).toNat
      if !(rangeValid confPtr confLen && rangeValid arrPtr arrLen) then
        { c with status := .failed }
      else
        let conf := ms.readBytes confPtr confLen
        let arr := ms.readBytes arrPtr arrLen
        let name := HolFfiName.extCall (Flapjack.Basis.Pure.MlString.ofString img.ffiNames[i]!)
        match Flapjack.callFFIHOL c.ffi name conf arr with
        | .final e => { c with status := .halted (.ffiOutcome e) }
        | .ret ffi' arr' =>
          { c with machine := (writeBytes ms arrPtr arr').setPC (ms.getReg .x1), ffi := ffi' }
    | none =>
      match step ms with
      | some m' => { c with machine := m' }
      | none => { c with status := .failed }

/-- `n` steps. -/
def runConfig {σ} (img : Image) : Nat → Config σ → Config σ
  | 0, c => c
  | n + 1, c =>
    if c.status.isRunning then runConfig img n (stepConfig img c) else c

/-! ## Observations -/

/-- What can be seen of a run after some number of steps: the FFI events so far, and
whether (and how) it has stopped. -/
structure Observation where
  events : List HolIoEvent
  status : Status

def Observation.ofConfig {σ} (c : Config σ) : Observation :=
  { events := c.ffi.ioEvents, status := c.status }

/-- The semantics of a binary: the image installed in riscv-zkvm's `MachineState`, run
for `n` steps against `oracle` starting from oracle state `s`. -/
def observe {σ} (img : Image) (oracle : HolOracle σ) (s : σ) (n : Nat) : Observation :=
  Observation.ofConfig
    (runConfig img n { machine := install img, ffi := Flapjack.initialHolFfiState oracle s })

end FlapjackFlip
