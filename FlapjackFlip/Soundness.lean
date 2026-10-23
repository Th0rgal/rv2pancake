import FlapjackFlip.Decompile
import FlapjackFlip.Spec

namespace FlapjackFlip

theorem Refines.refl (img : Image) : Refines img img := by
  intro σ oracle s n
  refine ⟨n, ?_⟩
  simp

theorem Equivalent.refl (img : Image) : Equivalent img img :=
  ⟨Refines.refl img, Refines.refl img⟩

/-- A candidate is returned only after `compile` reproduces the image, and equal
images refine each other. -/
theorem decompile_sound : DecompilerSound decompile := by
  intro img src h
  unfold decompile at h
  cases hLift : Lift.decompileImage (disassemble img) img.bitmaps.length img.ffiNames with
  | error e =>
    simp [hLift] at h
  | ok cand =>
    simp only [hLift] at h
    cases hComp : compile cand with
    | error e =>
      simp [hComp] at h
    | ok img' =>
      simp only [hComp] at h
      by_cases hEq : img = img'
      · subst hEq
        simp at h
        subst h
        exact ⟨img, hComp, Equivalent.refl img⟩
      · simp [hEq] at h

end FlapjackFlip
