import FlapjackFlip.Soundness

namespace FlapjackFlip.CertificateTests

-- FENCE's predecessor/successor bits have the same meaning in the pinned model.
-- This witness is about that model, not stronger hardware memory-order semantics.
def fenceA : Image := { ffiNames := [], bitmaps := [], code := [15, 0, 0, 0] }
def fenceB : Image := { ffiNames := [], bitmaps := [], code := [15, 0, 0, 16] }

example : fenceA ≠ fenceB := by decide
example : checkDecoded fenceA fenceB = true := by decide
example : Equivalent fenceA fenceB := checkDecoded_sound (by decide)
example : checkDecoded fenceA { fenceB with ffiNames := ["write"] } = false := by decide
example : checkDecoded fenceA { fenceB with bitmaps := [1] } = false := by decide
example : checkDecoded fenceA { fenceB with code := [15, 0, 0] } = false := by decide
example : checkDecoded fenceA { fenceB with code := [19, 0, 0, 0] } = false := by decide
example : checkDecoded fenceA { fenceB with code := [0, 0, 0, 0] } = false := by decide
example : checkDecoded { fenceA with code := [15] } { fenceB with code := [15] } = true := by decide

-- Partial trailing words always trap in the frozen decoder; only aligned
-- instruction windows are observable as code.
example : checkDecoded { fenceA with code := [15, 0, 0, 0, 7] }
    { fenceB with code := [15, 0, 0, 16, 99] } = true := by decide
example : checkDecoded { fenceA with code := [15, 0, 0, 0, 15, 0, 0, 0] }
    { fenceB with code := [15, 0, 0, 16, 19, 0, 0, 0] } = false := by decide

-- An empty candidate list cannot produce an accepted output.
example (img : Image) : checkCandidates img [] =
    .error "no candidate passed the equivalence certificate" := rfl

end FlapjackFlip.CertificateTests
