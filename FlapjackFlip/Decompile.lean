import FlapjackFlip.Compile
import FlapjackFlip.Image
import FlapjackFlip.Lift
import FlapjackFlip.StraightLine
import FlapjackFlip.DecodedCheck
import FlapjackFlip.Spec
import RiscvZkvm.Interpreter.Decode

namespace FlapjackFlip

open RiscvZkvm.Rv64

/-- The instructions of an image, in order. `none` marks a word the riscv-zkvm decoder
does not understand. -/
def disassemble (img : Image) : List (Option Instr) :=
  (List.range (img.code.length / 4)).map fun k =>
    match (img.code.drop (4 * k)).take 4 with
    | [b0, b1, b2, b3] => RiscvZkvm.Interpreter.decode (b3 ++ b2 ++ b1 ++ b0)
    | _ => none

/-- Try untrusted proposals, returning only one certified against the input. -/
def checkCandidates (img : Image) : List String → Except String String
  | [] => .error "no candidate passed the equivalence certificate"
  | src :: rest =>
    match compile src with
    | .error _ => checkCandidates img rest
    | .ok img' =>
      if decide (img = img') || checkDecoded img img' then .ok src
      else checkCandidates img rest

/-- Recover source using untrusted proposals and a proved image certificate. -/
def decompile (img : Image) : Except String String :=
  match Lift.decompileImage (disassemble img) img.bitmaps.length img.ffiNames with
  | .error e => .error e
  | .ok src => checkCandidates img ((StraightLine.propose src).toList ++ [src])

end FlapjackFlip
