import Rv2Pancake
import Lean.Util.CollectAxioms
import Lean.Elab.Command

open Lean Elab Command in
run_cmd do
  let env ← getEnv
  let allowed := #[``propext, ``Classical.choice, ``Quot.sound]
  let mut count : Nat := 0
  for (name, info) in env.constants.toList do
    if (`Rv2Pancake).isPrefixOf name then
      if info.isTheorem then
        count := count + 1
        for axiomName in ← collectAxioms name do
          unless allowed.contains axiomName do
            throwError "{name} depends on disallowed axiom {axiomName}"
  if count == 0 then
    throwError "No production theorems audited"
  logInfo m!"Audited {count} production theorems: only propext, Classical.choice and Quot.sound allowed"
