import Acceptance
import FlapjackFlip.Simulation
import FlapjackFlip.DecodedCheck
import Lean.Util.CollectAxioms
import Lean.Elab.Command

open Lean Elab Command in
run_cmd do
  let env ← getEnv
  let allowed := #[``propext, ``Classical.choice, ``Quot.sound]
  let mut count : Nat := 0
  for (name, _) in env.constants.toList do
    if (`FlapjackFlip).isPrefixOf name || name == `acceptance then
      count := count + 1
      for axiomName in ← collectAxioms name do
        unless allowed.contains axiomName do
          throwError "{name} depends on disallowed axiom {axiomName}"
  if count == 0 then throwError "No integration declarations audited"
  logInfo m!"Audited {count} integration declarations and their transitive axiom dependencies"
