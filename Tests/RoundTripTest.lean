import Rv2Pancake.Pipeline

open Rv2Pancake.Spec
open Rv2Pancake.Base
open Rv2Pancake.Passes
open Rv2Pancake

namespace Rv2Pancake.Tests

/-- Helper to create an initial RISC-V state at `prog.entryPc` with zeroed registers and memory. -/
def mkInitRVState (prog : ElfProg) : RVState :=
  { pc     := prog.entryPc
  , regs   := fun _ => 0
  , mem    := fun _ => 0
  , halted := false
  , retVal := 0 }

/-- Benchmark 1: Straight-line arithmetic (`x1 = 10; x2 = 15; x10 = x1 + x2; ecall` -> 25). -/
def progAluBasic : ElfProg :=
  { entryPc := 0x1000
  , code :=
    [ (0x1000, .opImm .add 1 0 10)
    , (0x1004, .opImm .add 2 0 15)
    , (0x1008, .opReg .add 10 1 2)
    , (0x100C, .ecall)
    ] }

/-- Benchmark 2: Diamond conditional branch (`if x1 == x2 then x10 = 100 else x10 = 42`). -/
def progBranchDiamond : ElfProg :=
  { entryPc := 0x1000
  , code :=
    [ (0x1000, .opImm .add 1 0 7)
    , (0x1004, .opImm .add 2 0 9)
    , (0x1008, .branch .beq 1 2 0x1014)
    , (0x100C, .opImm .add 10 0 42)
    , (0x1010, .jal 0 0x1018)
    , (0x1014, .opImm .add 10 0 100)
    , (0x1018, .ecall)
    ] }

/-- Benchmark 3: Sum loop `sum_{i=1}^{10} i = 55`. -/
def progSumLoop : ElfProg :=
  { entryPc := 0x1000
  , code :=
    [ (0x1000, .opImm .add 1 0 1)     -- i = 1
    , (0x1004, .opImm .add 2 0 11)    -- limit = 11
    , (0x1008, .opImm .add 10 0 0)    -- sum = 0
    , (0x100C, .branch .beq 1 2 0x101C) -- if i == 11 goto exit
    , (0x1010, .opReg .add 10 10 1)   -- sum += i
    , (0x1014, .opImm .add 1 1 1)     -- i += 1
    , (0x1018, .jal 0 0x100C)         -- goto loop
    , (0x101C, .ecall)
    ] }

/-- Benchmark 4: Iterative Fibonacci `fib(10) = 55` with memory load/store round-trip. -/
def progFib10 : ElfProg :=
  { entryPc := 0x1000
  , code :=
    [ (0x1000, .opImm .add 1 0 0)     -- a = 0
    , (0x1004, .opImm .add 2 0 1)     -- b = 1
    , (0x1008, .opImm .add 3 0 10)    -- n = 10
    , (0x100C, .branch .beq 3 0 0x1024) -- if n == 0 goto done
    , (0x1010, .opReg .add 4 1 2)     -- t = a + b
    , (0x1014, .opImm .add 1 2 0)     -- a = b
    , (0x1018, .opImm .add 2 4 0)     -- b = t
    , (0x101C, .opImm .sub 3 3 1)     -- n = n - 1 (note: opImm sub or add -1)
    , (0x1020, .jal 0 0x100C)         -- repeat
    , (0x1024, .sd 0 1 0x2000)        -- store result to mem[0x2000]
    , (0x1028, .ld 10 0 0x2000)       -- load result into a0 (x10)
    , (0x102C, .ecall)
    ] }

/-- Verify that running `prog` on RISC-V (`runRV`) and running `decompileProg prog` on Pancake (`evalPan`)
    produce the exact same return value `a0` (`x10` / `retVar`). -/
def checkRoundTrip (prog : ElfProg) (fuel : Nat) (expected : Word) : Bool :=
  let rvInit  := mkInitRVState prog
  let panInit := initPanState rvInit
  let rvFinal := runRV prog fuel rvInit
  let panBase := evalPan fuel panInit (baseLift prog)
  let panOpt  := evalPan fuel panInit (decompileProg prog)
  rvFinal.retVal == expected &&
  panBase.vars (regVar 10) == expected &&
  panOpt.vars (regVar 10) == expected &&
  panOpt.vars retVar == expected

theorem roundTrip_aluBasic : checkRoundTrip progAluBasic 10 25 = true := by native_decide

theorem roundTrip_branchDiamond : checkRoundTrip progBranchDiamond 15 42 = true := by native_decide

theorem roundTrip_sumLoop : checkRoundTrip progSumLoop 80 55 = true := by native_decide

theorem roundTrip_fib10 : checkRoundTrip progFib10 100 55 = true := by native_decide

end Rv2Pancake.Tests
