import Rv2Pancake
import Tests.RoundTripTest

open Rv2Pancake
open Rv2Pancake.Spec
open Rv2Pancake.Tests

def runSelfTestSuite : IO UInt32 := do
  let ok1 := checkRoundTrip progAluBasic 10 25
  let ok2 := checkRoundTrip progBranchDiamond 15 42
  let ok3 := checkRoundTrip progSumLoop 80 55
  let ok4 := checkRoundTrip progFib10 100 55
  IO.println s!"[rv2pancake] Round-trip self-test suite:"
  IO.println s!"  1. alu_basic      (expected 25): {if ok1 then "PASS" else "FAIL"}"
  IO.println s!"  2. branch_diamond (expected 42): {if ok2 then "PASS" else "FAIL"}"
  IO.println s!"  3. sum_1_to_10    (expected 55): {if ok3 then "PASS" else "FAIL"}"
  IO.println s!"  4. fib_10_mem     (expected 55): {if ok4 then "PASS" else "FAIL"}"
  if ok1 && ok2 && ok3 && ok4 then
    IO.println "\n--- Sample Decompiled Pancake Output (fib_10_mem) ---"
    IO.println (emitPancakeSource progFib10)
    return 0
  else
    return 1

def main (args : List String) : IO UInt32 := do
  match args with
  | [] | ["--self-test"] =>
    runSelfTestSuite
  | [inPath] =>
    let bytes ← IO.FS.readBinFile inPath
    let elfProg := parseElfOrRaw bytes
    IO.println (emitPancakeSource elfProg)
    return 0
  | [inPath, "-o", outPath] =>
    let bytes ← IO.FS.readBinFile inPath
    let elfProg := parseElfOrRaw bytes
    let src := emitPancakeSource elfProg
    IO.FS.writeFile outPath src
    IO.println s!"[rv2pancake] Wrote verified Pancake program to {outPath} ({elfProg.code.length} instructions lifted)"
    return 0
  | _ =>
    IO.eprintln "Usage: rv2pancake [--self-test | <input.elf> [-o <output.pan>]]"
    return 1
