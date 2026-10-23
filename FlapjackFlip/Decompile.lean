import FlapjackFlip.Compile
import FlapjackFlip.Image
import FlapjackFlip.Lift
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

/-- Decompile a Flapjack RISC-V binary image back to Pancake source. -/
def decompile (img : Image) : Except String String :=
  Lift.decompileImage (disassemble img) img.bitmaps.length img.ffiNames

end FlapjackFlip
