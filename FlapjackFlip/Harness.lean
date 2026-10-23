/-
  FlapjackFlip.Harness

  The executable half of the acceptance criteria: the test oracle, and the check that a
  decompilation behaves like the binary on concrete inputs.

  FROZEN. This file is part of the acceptance specification; see `PROMPT.md`.
-/

import Flapjack.Parser.Lexer
import FlapjackFlip.Spec

namespace FlapjackFlip.Harness

open Flapjack (HolOracle HolOracleResult HolIoEvent HolOutcome HolFfiName)

/-! ## The test world

Every FFI call, whatever its name, consumes the next `len` bytes of an input stream and
returns them as the new array contents (zeros once the stream runs out). A program
therefore *reads* input through the array an FFI call returns and *writes* output
through the array and configuration bytes it passes in; both are recorded in the trace. -/

abbrev Input := List (BitVec 8)

def oracle : HolOracle Input := fun _ input _conf arr =>
  .ret (input.drop arr.length)
    ((input.take arr.length) ++ List.replicate (arr.length - input.length) 0)

/-- Deterministic pseudo-random bytes (a 64-bit LCG). -/
def pseudoRandom (seed len : Nat) : Input := Id.run do
  let mut x := seed
  let mut out := #[]
  for _ in [0:len] do
    x := (x * 6364136223846793005 + 1442695040888963407) % 2 ^ 64
    out := out.push (BitVec.ofNat 8 (x / 2 ^ 56))
  return out.toList

/-- The inputs every test is run on. -/
def inputs : List Input :=
  [[], pseudoRandom 1 16, pseudoRandom 2 64, pseudoRandom 3 256, List.replicate 64 0xff]

/-- Step budget for an original test binary. -/
def fuel : Nat := 2000000

/-- Step budget for a recompiled binary: generous, but finite. -/
def recompiledFuel (originalSteps : Nat) : Nat := 10 * originalSteps + 100000

/-- Size budget: a decompilation may have at most this many Pancake tokens, where
`orig` is the token count of the source the test binary was compiled from. -/
def tokenBudget (orig : Nat) : Nat := 4 * orig

/-! ## Running -/

/-- Run until the image stops or `fuel` steps are spent; also return the steps used. -/
def run (img : Image) (input : Input) (fuel : Nat) : Observation × Nat := Id.run do
  let mut c : Config Input :=
    { machine := install img, ffi := Flapjack.initialHolFfiState oracle input }
  let mut steps := 0
  while steps < fuel && c.status.isRunning do
    c := stepConfig img c
    steps := steps + 1
  return (Observation.ofConfig c, steps)

def tokenCount (source : String) : Nat :=
  (Flapjack.Parser.pancakeLex source).length

/-! ## Printing traces -/

def hex (bytes : List (BitVec 8)) : String :=
  String.join (bytes.map fun b =>
    let n := b.toNat
    String.ofList [Nat.digitChar (n / 16), Nat.digitChar (n % 16)])

def nameString : HolFfiName → String
  | .extCall n => Flapjack.Basis.Pure.MlString.toStringOfBytes n
  | .sharedMem _ => "<shared memory>"

def showEvent (e : HolIoEvent) : String :=
  s!"@{nameString e.name} conf={hex e.configuration} in={hex (e.bytes.map (·.1))} out={hex (e.bytes.map (·.2))}"

def showStatus : Status → String
  | .running => "still running (out of fuel)"
  | .failed => "failed (trap, bad memory access or bad FFI arguments)"
  | .halted .success => "halted: success"
  | .halted .resourceLimitHit => "halted: out of memory"
  | .halted (.ffiOutcome _) => "halted: FFI outcome"

def showObservation (o : Observation) : String :=
  String.join (o.events.map (showEvent · ++ "\n")) ++ showStatus o.status

/-- The two observations agree exactly. -/
def sameObservation (a b : Observation) : Bool :=
  a.events == b.events && showStatus a.status == showStatus b.status

/-! ## Checking one test -/

/-- Check one test: decompile `img`, recompile, compare on every input, and check the
size budget against the source the test was compiled from. -/
def checkCase (decompile : Image → Except String String) (originalSource : String)
    (img : Image) : Except String Unit := do
  let src ← (decompile img).mapError (s!"decompiler gave up: {·}")
  let img' ← (compile src).mapError (s!"decompiled source does not compile: {·}")
  let tokens := tokenCount src
  let budget := tokenBudget (tokenCount originalSource)
  if tokens > budget then
    throw s!"decompiled source has {tokens} tokens, budget is {budget}"
  for input in inputs do
    let (o, steps) := run img input fuel
    let (o', _) := run img' input (recompiledFuel steps)
    unless sameObservation o o' do
      throw s!"behaviour differs on input {hex input}\n--- original\n{showObservation o}\n--- recompiled\n{showObservation o'}"

end FlapjackFlip.Harness
