import FlapjackFlip.Lift

/-! Untrusted source reconstruction for straight-line compiler output. Every
candidate must pass recompilation and the proved equivalence gate before use. -/
namespace FlapjackFlip.StraightLine

private def ident (c : Char) : Bool := c.isAlphanum || c == '_'

private def substitute (env : List (String × String)) (s : String) : String := Id.run do
  let mut out := ""
  let mut word := ""
  for c in s.toList do
    if ident c then word := word.push c
    else
      out := out ++ ((env.find? (·.1 == word)).map Prod.snd).getD word
      out := out.push c
      word := ""
  return out ++ ((env.find? (·.1 == word)).map Prod.snd).getD word

private def atomic (s : String) : Bool :=
  s == "@base" || s.toList.all Char.isDigit

private def expression (s : String) : String :=
  -- Canonicalize the address form produced by the register lifter.
  let parts := s.splitOn " + "
  let s := match parts with
    | [a, "@base"] => if a.toList.all Char.isDigit then "@base + " ++ a else s
    | _ => s
  let s := match s.splitOn " " with
    | [a, op, b] =>
      if ["+", "&", "|", "^"].contains op && a.startsWith "v" && b.startsWith "v" && b < a then
        b ++ " " ++ op ++ " " ++ a
      else s
    | _ => s
  if atomic s then s else "(" ++ s ++ ")"

/-- Bounded textual substitution; rejects control flow and multiple functions.
This is deliberately a proposal, not a trusted optimization. -/
def propose (source : String) : Option String := Id.run do
  let mut env : List (String × String) := []
  let mut out : List String := []
  let mut functions := 0
  let mut headerStores := 0
  let mut started := false
  let mut locals := 0
  for raw in source.splitOn "\n" do
    let line := raw.trimAscii.toString
    if line.isEmpty || line == "}" then continue
    if line.startsWith "fun " then
      functions := functions + 1
      if line != "fun 1 main() {" || functions != 1 then return none
      continue
    if line.startsWith "var " then continue
    -- The lifter optionally emits four heap-header restoration stores. Exact
    -- recompilation checks whether deleting these is justified for this image.
    if !started && headerStores < 4 &&
        (line.startsWith "st @base + 8," || line.startsWith "st @base + 16," ||
         line.startsWith "st @base + 24," || line.startsWith "st @base + 32,") then
      headerStores := headerStores + 1
      continue
    started := true
    if line.startsWith "return " then
      let ret := ((env.find? (·.1 == "r10")).map Prod.snd).getD "0"
      out := out ++ ["  return " ++ ret ++ ";"]
      continue
    if line.startsWith "if " || line.startsWith "while " || line.contains '{' ||
        line.startsWith "else" || line.startsWith "break" || line.startsWith "continue" then
      return none
    match line.splitOn " = " with
    | [lhs, rhs] =>
      unless lhs.startsWith "r" || lhs.startsWith "s" do return none
      let value := expression (substitute env (rhs.dropEnd 1).toString)
      if value.length > 4096 then return none
      if Lift.containsSubstr value "lds " || Lift.containsSubstr value "ld8 " then
        let name := s!"v{locals}"
        locals := locals + 1
        out := out ++ [s!"  var 1 {name} = {value};"]
        env := (lhs, name) :: env.filter (·.1 != lhs)
      else
        env := (lhs, value) :: env.filter (·.1 != lhs)
    | _ =>
      let rendered := substitute env line
      -- Unresolved virtual registers/stack slots make this proposal unusable.
      out := out ++ ["  " ++ rendered]
  if functions != 1 then return none
  return some ("fun 1 main() {\n" ++ String.intercalate "\n" out ++ "\n}\n")

end FlapjackFlip.StraightLine
