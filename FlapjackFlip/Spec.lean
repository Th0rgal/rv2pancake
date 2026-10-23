/-
  FlapjackFlip.Spec

  The correctness statement a decompiler has to prove.

  FROZEN. This file is part of the acceptance specification; see `PROMPT.md`.
-/

import FlapjackFlip.Compile
import FlapjackFlip.Machine

namespace FlapjackFlip

open Flapjack (HolOracle HolOutcome)

/-- A run has stopped in a way that must be reproduced exactly. Running out of
memory (`resourceLimitHit`) is not one of them: how much stack a program needs
depends on how it was compiled, so, as in CakeML's correctness theorems, hitting the
limit only promises that what happened before it was right. -/
def Status.Final : Status → Prop
  | .running => False
  | .halted .resourceLimitHit => False
  | _ => True

/-- Whatever `a` does, `b` does too: every trace `a` produces is a prefix of one `b`
produces, and if `a` stops (other than by running out of memory) then `b` stops in
the same way with the same trace. For every FFI oracle, so for every input. -/
def Refines (a b : Image) : Prop :=
  ∀ (σ : Type) (oracle : HolOracle σ) (s : σ) (n : Nat), ∃ m,
    let oa := observe a oracle s n
    let ob := observe b oracle s m
    oa.events <+: ob.events ∧
    (oa.status.Final → ob.status = oa.status ∧ ob.events = oa.events)

/-- Two binaries are equivalent when each refines the other. -/
def Equivalent (a b : Image) : Prop :=
  Refines a b ∧ Refines b a

/-- **The theorem to prove.** Whenever the decompiler returns source text, that text
compiles with Flapjack, and the result behaves exactly like the binary it came from. -/
def DecompilerSound (decompile : Image → Except String String) : Prop :=
  ∀ img src, decompile img = .ok src →
    ∃ img', compile src = .ok img' ∧ Equivalent img img'

end FlapjackFlip
