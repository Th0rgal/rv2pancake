import FlapjackFlip.Decompile
import FlapjackFlip.Spec

namespace FlapjackFlip

theorem Refines.refl (img : Image) : Refines img img := by
  intro σ oracle s n
  refine ⟨n, ?_⟩
  simp

theorem Equivalent.refl (img : Image) : Equivalent img img :=
  ⟨Refines.refl img, Refines.refl img⟩

/-- Soundness is independent of the proposal generator. -/
theorem checkCandidates_sound (img : Image) (candidates : List String) (src : String)
    (h : checkCandidates img candidates = .ok src) :
    ∃ img', compile src = .ok img' ∧ Equivalent img img' := by
  induction candidates with
  | nil => simp [checkCandidates] at h
  | cons cand rest ih =>
    simp only [checkCandidates] at h
    cases hc : compile cand with
    | error e => simp only [hc] at h; exact ih h
    | ok img' =>
      simp only [hc] at h
      split at h
      next hg =>
        have he : cand = src := Except.ok.inj h
        subst src
        refine ⟨img', hc, ?_⟩
        simp only [Bool.or_eq_true, decide_eq_true_eq] at hg
        rcases hg with heq | hdecoded
        · subst img'; exact Equivalent.refl img
        · exact checkDecoded_sound hdecoded
      next => exact ih h

/-- Every returned source recompiles to an equivalent image for every oracle. -/
theorem decompile_sound : DecompilerSound decompile := by
  intro img src h
  unfold decompile at h
  cases hl : Lift.decompileImage (disassemble img) img.bitmaps.length img.ffiNames with
  | error e => simp [hl] at h
  | ok cand =>
    simp only [hl] at h
    exact checkCandidates_sound img _ src h

end FlapjackFlip
