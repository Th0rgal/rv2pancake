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
  sorry

end FlapjackFlip
