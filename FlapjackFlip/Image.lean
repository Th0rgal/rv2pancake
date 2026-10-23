/-
  FlapjackFlip.Image

  The decompiler's input: a stripped RISC-V binary produced by Flapjack.

  FROZEN. This file is part of the acceptance specification; see `PROMPT.md`.
-/

namespace FlapjackFlip

/-- A Flapjack RV64 binary, stripped of everything except what is needed to run it.

* `code` is the machine code exactly as `flapjack-compile --hex` prints it. Execution
  starts at its first byte.
* `bitmaps` are the stack-frame bitmaps Flapjack emits next to the code (the `.quad`s
  after `cake_bitmaps:` in the assembly frame). The code reads them at run time.
* `ffiNames` are the external FFI names in FFI index order: the `i`-th entry is the
  function the code reaches by jumping to FFI entry `i` (see `FlapjackFlip.Machine`).
  These names are observable behaviour, so a binary has to keep them, the same way an
  ELF keeps the names of its dynamic imports.

Function names, function boundaries and source text are *not* part of an image. -/
structure Image where
  ffiNames : List String
  bitmaps  : List (BitVec 64)
  code     : List (BitVec 8)
  deriving DecidableEq, Repr, Inhabited

namespace Image

def header : String := "flapjack-flip image v1"

private def hexDigit (n : Nat) : Char :=
  if n < 10 then Char.ofNat ('0'.toNat + n) else Char.ofNat ('a'.toNat + n - 10)

private def hexOf (width n : Nat) : String :=
  String.ofList ((List.range width).reverse.map fun i => hexDigit (n / 16 ^ i % 16))

private def digitOf? (c : Char) : Option Nat :=
  if '0' ≤ c ∧ c ≤ '9' then some (c.toNat - '0'.toNat)
  else if 'a' ≤ c ∧ c ≤ 'f' then some (c.toNat - 'a'.toNat + 10)
  else none

private def parseHex? (s : String) : Option Nat :=
  if s.isEmpty then none
  else s.toList.foldlM (fun acc c => (digitOf? c).map (acc * 16 + ·)) 0

private def isFfiNameChar (c : Char) : Bool :=
  c.isAlphanum || c == '_' || c == '\''

/-- The text form: a header line, one `ffi NAME` line per FFI name in index order, a
`bitmaps` line of 16-digit words and a `code` line of 2-digit bytes, all lowercase hex. -/
def render (img : Image) : String :=
  let ffi := img.ffiNames.map (s!"ffi {·}\n")
  let bitmaps := " ".intercalate (img.bitmaps.map (hexOf 16 ·.toNat))
  let code := " ".intercalate (img.code.map (hexOf 2 ·.toNat))
  header ++ "\n" ++ String.join ffi ++ s!"bitmaps {bitmaps}\n" ++ s!"code {code}\n"

private def words (s : String) : List String :=
  (s.splitOn " ").filter (!·.isEmpty)

/-- Inverse of `render`. -/
def parse (text : String) : Except String Image := do
  let lines := (text.splitOn "\n").map (·.trimAscii.toString) |>.filter (!·.isEmpty)
  let some first := lines.head? | throw "empty image"
  unless first == header do throw s!"expected header '{header}'"
  let mut img : Image := { ffiNames := [], bitmaps := [], code := [] }
  let mut sawBitmaps := false
  let mut sawCode := false
  for line in lines.drop 1 do
    match words line with
    | "ffi" :: [name] =>
      unless name.all isFfiNameChar do throw s!"bad FFI name '{name}'"
      img := { img with ffiNames := img.ffiNames ++ [name] }
    | "bitmaps" :: ws =>
      let some vs := ws.mapM fun w => if w.length == 16 then parseHex? w else none
        | throw "malformed bitmaps line"
      img := { img with bitmaps := vs.map (BitVec.ofNat 64) }
      sawBitmaps := true
    | "code" :: bs =>
      let some vs := bs.mapM fun b => if b.length == 2 then parseHex? b else none
        | throw "malformed code line"
      img := { img with code := vs.map (BitVec.ofNat 8) }
      sawCode := true
    | _ => throw s!"unexpected line '{line}'"
  unless sawBitmaps && sawCode do throw "image needs a bitmaps line and a code line"
  return img

def readFile (path : System.FilePath) : IO Image := do
  match parse (← IO.FS.readFile path) with
  | .ok img => pure img
  | .error e => throw (IO.userError s!"{path}: {e}")

end Image

end FlapjackFlip
