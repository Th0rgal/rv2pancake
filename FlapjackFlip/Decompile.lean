import FlapjackFlip.Compile
import FlapjackFlip.Image
import FlapjackFlip.Lift
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

/-- Decompile a Flapjack RISC-V binary image back to Pancake source.

The lifted source is returned only when Flapjack recompiles it to an image
observationally equivalent to the input. Equality is the witness used here;
any future witness of `Equivalent` can replace it. -/
def decompile (img : Image) : Except String String :=
  match Lift.decompileImage (disassemble img) img.bitmaps.length img.ffiNames with
  | .error e => .error e
  | .ok src =>
    match compile src with
    | .ok img' =>
      if decide (img = img') then .ok src
      else .error "recompiled image is not identical"
    | .error e => .error e

end FlapjackFlip
