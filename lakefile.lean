import Lake
open Lake DSL

package «rv2pancake» where
  version := v!"0.1.0"

@[default_target]
lean_lib «Rv2Pancake» where
  roots := #[`Rv2Pancake, `Tests.RoundTripTest]

lean_exe «rv2pancake» where
  root := `Main
