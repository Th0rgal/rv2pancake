/-
  FlapjackFlip.Compile

  Pancake source to `Image`, through Flapjack's verified native RISC-V compiler.

  FROZEN. This file is part of the acceptance specification; see `PROMPT.md`.
-/

import Flapjack.RiscV.NativeSource
import FlapjackFlip.Image

namespace FlapjackFlip

open Flapjack

/-- Compile Pancake source text to a binary image.

This is exactly the computation behind `flapjack-compile --hex`:
`RiscV.NativeSource.compile`, whose output `nativeCLIOutput_correct` relates to the
source semantics. Programs that use Pancake shared memory (`!ld`/`!st`) are rejected:
their FFI entries are memory-mapped I/O, which this project does not model. -/
def compile (source : String) : Except String Image :=
  match RiscV.NativeSource.compile source with
  | .error e => .error (sourceRiscVImageErrorDescription e)
  | .ok out =>
    match out.artifact with
    | none => .error "native backend compilation failed"
    | some (bytes, bitmaps, config) =>
      let names := config.labConf.ffiNames.getD []
      if names.any (fun | .sharedMem _ => true | .extCall _ => false) then
        .error "shared-memory operations are not supported"
      else
        .ok { ffiNames := (Compiler.Backend.Backend.ffinamesToStringList names).map
                Basis.Pure.MlString.toStringOfBytes
              bitmaps := bitmaps
              code := bytes }

end FlapjackFlip
