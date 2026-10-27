import FlapjackFlip

open FlapjackFlip

/-- These examples guard non-vacuity; the full release gate still requires all
120 visible cases and the generated-suite targets. -/
def main : IO UInt32 := do
  for name in ["00_hello", "01_echo", "02_arith", "14_ffi_conf", "gen_0_029"] do
    let dir : System.FilePath := s!"tests/{name}"
    let img ← Image.readFile (dir / "image.fjimg")
    let source ← IO.FS.readFile (dir / "source.pnk")
    match Harness.checkCase decompile source img with
    | .error e => throw (IO.userError s!"certified regression {name}: {e}")
    | .ok () => IO.println s!"PASS certified regression {name}"
  -- A changed runtime prefix cannot inherit the user's-body certificate.
  let img ← Image.readFile "tests/00_hello/image.fjimg"
  let corrupt := { img with code := [0, 0, 0, 0] ++ img.code.drop 4 }
  match decompile corrupt with
  | .ok _ => throw (IO.userError "corrupted runtime prefix was accepted")
  | .error _ => IO.println "PASS corrupted runtime prefix rejected"
  return 0
