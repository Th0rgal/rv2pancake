import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Spec.ElfLoader
import Rv2Pancake.Base.Lifter
import Rv2Pancake.Base.BaseSound
import Rv2Pancake.Passes.SafePass
import Rv2Pancake.Passes.SymCheck
import Rv2Pancake.Passes.BlockFusion
import Rv2Pancake.Passes.IfElseRecon
import Rv2Pancake.Passes.WhileRecon
import Rv2Pancake.Passes.DeadRegElim

namespace Rv2Pancake

open Rv2Pancake.Spec
open Rv2Pancake.Base
open Rv2Pancake.Passes

/-- Optimize the loop-free body of a lifted Pancake dispatcher through the 5 verified passes:
    1. `symCheckPass` (`0 + c -> c`, constant propagation, constant branch pruning)
    2. `blockFusionPass` (right-associated sequence normalization and `.skip` pruning)
    3. `ifElseReconPass` (diamond branch simplification & constant folding)
    4. `whileReconPass` (loop body trailing-skip normalization)
    5. `deadRegElimPass` (self-assign and overwritten-register store coalescing) -/
def optimizeDispatcherBody (body : PanProg) : PanProg :=
  let b0 := symCheckPass.apply body
  let b1 := blockFusionPass.apply b0
  let b2 := ifElseReconPass.apply b1
  let b3 := whileReconPass.apply b2
  deadRegElimPass.apply b3

/-- Theorem: `optimizeDispatcherBody` preserves the `isLoopFree` invariant. -/
theorem optimizeDispatcherBody_isLoopFree (body : PanProg) (h : isLoopFree body = true) :
    isLoopFree (optimizeDispatcherBody body) = true := by
  unfold optimizeDispatcherBody
  have h0 := symCheckPass_isLoopFree body h
  have h1 := blockFusionPass_isLoopFree _ h0
  have h2 := ifElseReconPass_isLoopFree _ h1
  have h3 := whileReconPass_isLoopFree _ h2
  exact deadRegElimPass_isLoopFree _ h3

/-- Theorem: `optimizeDispatcherBody` is universally sound (`StmtEquiv body (optimizeDispatcherBody body)`). -/
theorem optimizeDispatcherBody_sound (body : PanProg) :
    StmtEquiv body (optimizeDispatcherBody body) := by
  unfold optimizeDispatcherBody
  have s0 := symCheckPass.apply_sound body
  have s1 := blockFusionPass.apply_sound (symCheckPass.apply body)
  have s2 := ifElseReconPass.apply_sound (blockFusionPass.apply (symCheckPass.apply body))
  have s3 := whileReconPass.apply_sound (ifElseReconPass.apply (blockFusionPass.apply (symCheckPass.apply body)))
  have s4 := deadRegElimPass.apply_sound (whileReconPass.apply (ifElseReconPass.apply (blockFusionPass.apply (symCheckPass.apply body))))
  exact StmtEquiv.trans s0 (StmtEquiv.trans s1 (StmtEquiv.trans s2 (StmtEquiv.trans s3 s4)))

/-- Superblock multi-PC fusion (`superblockDecompile k prog`):
    Unrolls `k` micro-steps of the dispatcher body per outer loop iteration,
    fusing consecutive addresses (`4096 -> 4100 -> 4104 -> ...`) via `unrollAndFoldBody k`,
    and then runs `optimizeDispatcherBody`.
    When `pc == 0` (halted), `liftCodeTable` is idempotent on `pcVar = 0`, `retVar`, and `mem`! -/
def superblockBody (k : Nat) (prog : ElfProg) : PanProg :=
  optimizeDispatcherBody (unrollAndFoldBody k (liftCodeTable prog.code))

theorem superblockBody_isLoopFree (k : Nat) (prog : ElfProg) :
    isLoopFree (superblockBody k prog) = true := by
  unfold superblockBody
  apply optimizeDispatcherBody_isLoopFree
  apply unrollAndFoldBody_isLoopFree
  exact liftCodeTable_isLoopFree prog.code

/-- Theorem: `superblockBody k prog` is strictly `StmtEquiv` to `seqRepeat k (liftCodeTable prog.code)`. -/
theorem superblockBody_equiv_seqRepeat (k : Nat) (prog : ElfProg) :
    StmtEquiv (seqRepeat k (liftCodeTable prog.code)) (superblockBody k prog) := by
  unfold superblockBody
  exact StmtEquiv.trans
    (unrollAndFoldBody_equiv_seqRepeat k (liftCodeTable prog.code))
    (optimizeDispatcherBody_sound (unrollAndFoldBody k (liftCodeTable prog.code)))

/-- Full verified multi-step decompilation (`decompileSuperblock k prog`):
    Runs `superblockBody k prog` inside `while (pc != 0)`. -/
def decompileSuperblock (k : Nat) (prog : ElfProg) : PanProg :=
  let loopCond := .binOp .neOp (.var pcVar) (.const 0)
  .whileLoop loopCond (superblockBody k prog)

/-- Theorem: `decompileSuperblock k prog` is `PanEquiv` to the `k`-step unrolled dispatcher! -/
theorem decompileSuperblock_equiv_seqRepeat (k : Nat) (prog : ElfProg) :
    PanEquiv
      (.whileLoop (.binOp .neOp (.var pcVar) (.const 0)) (seqRepeat k (liftCodeTable prog.code)))
      (decompileSuperblock k prog) := by
  unfold decompileSuperblock
  exact whileLoop_congr_of_stmtEquiv
    (.binOp .neOp (.var pcVar) (.const 0))
    (seqRepeat k (liftCodeTable prog.code))
    (superblockBody k prog)
    (seqRepeat_isLoopFree k (liftCodeTable prog.code) (liftCodeTable_isLoopFree prog.code))
    (superblockBody_isLoopFree k prog)
    (superblockBody_equiv_seqRepeat k prog)

/-- Full verified decompilation pipeline (`decompileProg`):
    Lifts `ElfProg` and applies all 4 verified `propose + check` structuring & optimization passes. -/
def decompileProg (prog : ElfProg) : PanProg :=
  let loopCond := .binOp .neOp (.var pcVar) (.const 0)
  let rawBody  := liftCodeTable prog.code
  let optBody  := optimizeDispatcherBody rawBody
  .whileLoop loopCond optBody

/-- Master End-to-End Equivalence Theorem (`decompileProg_equiv_baseLift`):
    For any stripped ELF program `prog`, fuel budget `fuel`, and state `st`,
    the structured/optimized Pancake program `decompileProg prog` produces the
    exact same final state as `baseLift prog`. -/
theorem decompileProg_equiv_baseLift (prog : ElfProg) :
    PanEquiv (baseLift prog) (decompileProg prog) := by
  unfold baseLift decompileProg
  have hlf1 : isLoopFree (liftCodeTable prog.code) = true :=
    liftCodeTable_isLoopFree prog.code
  have hlf2 : isLoopFree (optimizeDispatcherBody (liftCodeTable prog.code)) = true :=
    optimizeDispatcherBody_isLoopFree (liftCodeTable prog.code) hlf1
  have heq : StmtEquiv (liftCodeTable prog.code) (optimizeDispatcherBody (liftCodeTable prog.code)) :=
    optimizeDispatcherBody_sound (liftCodeTable prog.code)
  exact whileLoop_congr_of_stmtEquiv
    (.binOp .neOp (.var pcVar) (.const 0))
    (liftCodeTable prog.code)
    (optimizeDispatcherBody (liftCodeTable prog.code))
    hlf1 hlf2 heq

/-- Corollary (`decompileProg_obsEquiv_baseLift`):
    `decompileProg prog` is observationally equivalent (`ObsEquiv` on `retVar` and `mem`)
    to `baseLift prog`. -/
theorem decompileProg_obsEquiv_baseLift (prog : ElfProg) :
    ObsEquiv (baseLift prog) (decompileProg prog) :=
  PanEquiv.toObsEquiv (decompileProg_equiv_baseLift prog)

/-- Corollary (`decompileSuperblock_obsEquiv_seqRepeat`):
    `decompileSuperblock k prog` is observationally equivalent (`ObsEquiv` on `retVar` and `mem`)
    to the `k`-step unrolled dispatcher. -/
theorem decompileSuperblock_obsEquiv_seqRepeat (k : Nat) (prog : ElfProg) :
    ObsEquiv
      (.whileLoop (.binOp .neOp (.var pcVar) (.const 0)) (seqRepeat k (liftCodeTable prog.code)))
      (decompileSuperblock k prog) :=
  PanEquiv.toObsEquiv (decompileSuperblock_equiv_seqRepeat k prog)

/-- Render a Pancake expression into concrete CakeML Pancake surface syntax. -/
def renderExp : PanExp → String
  | .const w        => s!"{w}"
  | .var 0          => "pc"
  | .var 32         => "halted"
  | .var 33         => "ret_val"
  | .var v          => s!"x{v}"
  | .load addr      => s!"lds 1 ({renderExp addr})"
  | .binOp .add a b    => s!"({renderExp a} + {renderExp b})"
  | .binOp .sub a b    => s!"({renderExp a} - {renderExp b})"
  | .binOp .mul a b    => s!"({renderExp a} * {renderExp b})"
  | .binOp .divU a b   => s!"({renderExp a} / {renderExp b})"
  | .binOp .remU a b   => s!"({renderExp a} % {renderExp b})"
  | .binOp .bitAnd a b => s!"({renderExp a} & {renderExp b})"
  | .binOp .bitOr a b  => s!"({renderExp a} | {renderExp b})"
  | .binOp .bitXor a b => s!"({renderExp a} ^ {renderExp b})"
  | .binOp .shl a b    => s!"({renderExp a} << {renderExp b})"
  | .binOp .shr a b    => s!"({renderExp a} >>> {renderExp b})"
  | .binOp .sar a b    => s!"({renderExp a} >> {renderExp b})"
  | .binOp .eqOp a b   => s!"({renderExp a} == {renderExp b})"
  | .binOp .neOp a b   => s!"({renderExp a} != {renderExp b})"
  | .binOp .ltU a b    => s!"({renderExp a} <+ {renderExp b})"
  | .binOp .ltS a b    => s!"({renderExp a} < {renderExp b})"
  | .binOp .addw a b   => s!"sext32({renderExp a} + {renderExp b})"
  | .binOp .subw a b   => s!"sext32({renderExp a} - {renderExp b})"
  | .binOp .mulw a b   => s!"sext32({renderExp a} * {renderExp b})"
  | .binOp .sllw a b   => s!"sext32({renderExp a} << {renderExp b})"
  | .binOp .srlw a b   => s!"sext32({renderExp a} >>> {renderExp b})"
  | .binOp .sraw a b   => s!"sext32({renderExp a} >> {renderExp b})"

/-- Render a Pancake statement into indented CakeML Pancake surface syntax. -/
partial def renderProg (indent : String) : PanProg → String
  | .skip          => s!"{indent}skip;"
  | .assign v e    =>
    let lhs := renderExp (.var v)
    s!"{indent}{lhs} = {renderExp e};"
  | .store a e     =>
    s!"{indent}st {renderExp a}, {renderExp e};"
  | .seq p1 p2     =>
    s!"{renderProg indent p1}\n{renderProg indent p2}"
  | .ifElse c t f  =>
    s!"{indent}if {renderExp c} \{\n{renderProg (indent ++ "  ") t}\n{indent}} else \{\n{renderProg (indent ++ "  ") f}\n{indent}}"
  | .whileLoop c b =>
    s!"{indent}while ({renderExp c}) \{\n{renderProg (indent ++ "  ") b}\n{indent}}"

/-- Pretty-print a complete `ElfProg` decompiled into a CakeML Pancake `fun main()` unit. -/
def emitPancakeSource (prog : ElfProg) : String :=
  let panAst := decompileProg prog
  s!"// Generated by rv2pancake (Lean 4 v4.35.0 - Verified Propose+Check Pipeline)\n" ++
  s!"fun entry() \{\n" ++
  s!"  var pc = {prog.entryPc};\n" ++
  s!"  var halted = 0;\n" ++
  s!"  var ret_val = 0;\n" ++
  s!"{renderProg "  " panAst}\n" ++
  s!"  return ret_val;\n" ++
  s!"}\n"

/-- Pretty-print a complete `ElfProg` decompiled with `k`-step superblock fusion into Pancake. -/
def emitSuperblockSource (k : Nat) (prog : ElfProg) : String :=
  let panAst := decompileSuperblock k prog
  s!"// Generated by rv2pancake (Lean 4 v4.35.0 - Verified Superblock k={k} + SymCheck)\n" ++
  s!"fun entry() \{\n" ++
  s!"  var pc = {prog.entryPc};\n" ++
  s!"  var halted = 0;\n" ++
  s!"  var ret_val = 0;\n" ++
  s!"{renderProg "  " panAst}\n" ++
  s!"  return ret_val;\n" ++
  s!"}\n"

end Rv2Pancake
