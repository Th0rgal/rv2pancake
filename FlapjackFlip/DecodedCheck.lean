import FlapjackFlip.Simulation

namespace FlapjackFlip

/-- Decode one four-byte window. Partial words retain the frozen model's trap. -/
def decodeAt (img : Image) (k : Nat) : Option RiscvZkvm.Rv64.Instr :=
  match (img.code.drop k).take 4 with
  | [b0, b1, b2, b3] => RiscvZkvm.Interpreter.decode (b3 ++ b2 ++ b1 ++ b0)
  | _ => none

/-- Decode aligned words in one traversal; trailing partial words trap. -/
def decodedWords : List (BitVec 8) → List (Option RiscvZkvm.Rv64.Instr)
  | b0 :: b1 :: b2 :: b3 :: rest =>
    RiscvZkvm.Interpreter.decode (b3 ++ b2 ++ b1 ++ b0) :: decodedWords rest
  | _ => []

theorem decodeAt_word (img : Image) (k : Nat) :
    decodeAt img (4 * k) = (decodedWords img.code)[k]?.getD none := by
  cases img with
  | mk names bits bytes =>
    induction k generalizing bytes with
    | zero =>
      cases bytes with
      | nil => rfl
      | cons b0 rest =>
        cases rest with
        | nil => rfl
        | cons b1 rest =>
          cases rest with
          | nil => rfl
          | cons b2 rest =>
            cases rest <;> rfl
    | succ k ih =>
      cases bytes with
      | nil => simp [decodeAt, decodedWords]
      | cons b0 rest =>
        cases rest with
        | nil => simp [decodeAt, decodedWords, Nat.mul_succ, List.drop_succ_cons]
        | cons b1 rest =>
          cases rest with
          | nil => simp [decodeAt, decodedWords, Nat.mul_succ, List.drop_succ_cons]
          | cons b2 rest =>
            cases rest with
            | nil => simp [decodeAt, decodedWords, Nat.mul_succ, List.drop_succ_cons]
            | cons b3 rest =>
              simpa [decodeAt, decodedWords, Nat.mul_succ,
                List.drop_succ_cons] using ih rest

/-- A conservative executable certificate: equal metadata, equal code length,
and equal aligned decoded instructions. This does not certify relocated code
or different stack layouts. Decoding traverses each byte list once. -/
def checkDecoded (a b : Image) : Bool :=
  decide (a.ffiNames = b.ffiNames ∧ a.bitmaps = b.bitmaps ∧ a.code.length = b.code.length) &&
    decide (decodedWords a.code = decodedWords b.code)

theorem checkDecoded_sound {a b : Image} (h : checkDecoded a b = true) : Equivalent a b := by
  simp only [checkDecoded, Bool.and_eq_true, decide_eq_true_eq] at h
  obtain ⟨⟨hffi, hbits, hlen⟩, hdecode⟩ := h
  have hc : codeMem a = codeMem b := by
    funext pc
    unfold codeMem
    rw [hlen]
    split
    next hp =>
      change decodeAt a (pc - codeBase).toNat = decodeAt b (pc - codeBase).toNat
      have halign : (pc - codeBase).toNat = 4 * ((pc - codeBase).toNat / 4) := by omega
      rw [halign, decodeAt_word, decodeAt_word, hdecode]
    next => rfl
  have hi : install a = install b := by
    simp only [install, initialCells, heapHeader, hbits, hlen, hc]
  have hs : ∀ {σ} (c : Config σ), stepConfig a c = stepConfig b c := by
    intro σ c
    simp only [stepConfig, ffiIndexAt?, hffi]
  have sim : Simulation a b := {
    Rel := fun ca cb => ca = cb
    initial := fun _ _ => by simp only [hi]
    events := fun h => congrArg (fun c => c.ffi.ioEvents) h
    status := fun h => congrArg Config.status h
    advance := fun {σ} {ca cb} h => ⟨1, by
      subst cb
      rw [runConfig_succ]
      change _ = stepConfig _ ca
      exact hs ca⟩ }
  have rev : Simulation b a := {
    Rel := fun ca cb => ca = cb
    initial := fun _ _ => by simp only [hi]
    events := fun h => congrArg (fun c => c.ffi.ioEvents) h
    status := fun h => congrArg Config.status h
    advance := fun {σ} {ca cb} h => ⟨1, by
      subst cb
      rw [runConfig_succ]
      change _ = stepConfig _ ca
      exact (hs ca).symm⟩ }
  exact ⟨sim.sound, rev.sound⟩

end FlapjackFlip
