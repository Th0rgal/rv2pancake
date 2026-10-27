import FlapjackFlip.Spec

/-!
Sufficient certificates for the frozen all-oracles, all-fuel refinement contract.
The two machines may take different numbers of steps. These are proof-carrying
certificates, not an executable decision procedure for arbitrary equivalence.
-/
namespace FlapjackFlip

theorem stepConfig_stopped {σ} (img : Image) (c : Config σ)
    (h : c.status.isRunning = false) : stepConfig img c = c := by
  cases hs : c.status <;> simp_all [Status.isRunning, stepConfig]

theorem runConfig_stopped {σ} (img : Image) (c : Config σ)
    (h : c.status.isRunning = false) (n : Nat) : runConfig img n c = c := by
  cases n <;> simp [runConfig, h]

theorem runConfig_succ {σ} (img : Image) (c : Config σ) (n : Nat) :
    runConfig img (n + 1) c = runConfig img n (stepConfig img c) := by
  cases h : c.status.isRunning
  · simp [runConfig, h, stepConfig_stopped img c h, runConfig_stopped img c h]
  · simp [runConfig, h]

theorem runConfig_add {σ} (img : Image) (c : Config σ) (n m : Nat) :
    runConfig img (n + m) c = runConfig img m (runConfig img n c) := by
  induction n generalizing c with
  | zero => simp [runConfig]
  | succ n ih =>
    rw [Nat.succ_add, runConfig_succ, runConfig_succ]
    exact ih (stepConfig img c)

/-- A forward simulation with finite target stuttering and exact observations.
A relation must cover every oracle, including oracles that terminate at an FFI
call. No fixed test inputs or finite execution bound occur in this certificate. -/
structure Simulation (a b : Image) where
  Rel : {σ : Type} → Config σ → Config σ → Prop
  initial : ∀ {σ} (oracle : Flapjack.HolOracle σ) (s : σ),
    Rel { machine := install a, ffi := Flapjack.initialHolFfiState oracle s }
        { machine := install b, ffi := Flapjack.initialHolFfiState oracle s }
  events : ∀ {σ} {ca cb : Config σ}, Rel ca cb → ca.ffi.ioEvents = cb.ffi.ioEvents
  status : ∀ {σ} {ca cb : Config σ}, Rel ca cb → ca.status = cb.status
  advance : ∀ {σ} {ca cb : Config σ}, Rel ca cb →
    ∃ m, Rel (stepConfig a ca) (runConfig b m cb)

theorem Simulation.run {a b : Image} (cert : Simulation a b)
    {σ} {ca cb : Config σ} (h : cert.Rel ca cb) (n : Nat) :
    ∃ m, cert.Rel (runConfig a n ca) (runConfig b m cb) := by
  induction n generalizing ca cb with
  | zero => exact ⟨0, h⟩
  | succ n ih =>
    obtain ⟨k, hk⟩ := cert.advance h
    obtain ⟨m, hm⟩ := ih hk
    exact ⟨k + m, by rw [runConfig_succ, runConfig_add]; exact hm⟩

theorem Simulation.sound {a b : Image} (cert : Simulation a b) : Refines a b := by
  intro σ oracle s n
  obtain ⟨m, hm⟩ := cert.run (cert.initial oracle s) n
  refine ⟨m, ?_⟩
  have he := cert.events hm
  have hs := cert.status hm
  change (observe a oracle s n).events = (observe b oracle s m).events at he
  change (observe a oracle s n).status = (observe b oracle s m).status at hs
  exact ⟨by simp [he], fun _ => ⟨hs.symm, he.symm⟩⟩

/-- Independent simulations in both directions establish the frozen contract. -/
structure EquivalenceCertificate (a b : Image) where
  forward : Simulation a b
  backward : Simulation b a

theorem EquivalenceCertificate.sound {a b : Image}
    (cert : EquivalenceCertificate a b) : Equivalent a b :=
  ⟨cert.forward.sound, cert.backward.sound⟩

end FlapjackFlip
