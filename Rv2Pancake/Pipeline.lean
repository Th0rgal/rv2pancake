import Rv2Pancake.Spec.RiscvSem
import Rv2Pancake.Spec.PancakeSem
import Rv2Pancake.Spec.Equiv
import Rv2Pancake.Spec.ElfLoader
import Rv2Pancake.Base.Lifter
import Rv2Pancake.Base.BaseSound
import Rv2Pancake.Passes.SafePass
import Rv2Pancake.Passes.BlockFusion
import Rv2Pancake.Passes.IfElseRecon
import Rv2Pancake.Passes.WhileRecon
import Rv2Pancake.Passes.DeadRegElim

namespace Rv2Pancake

open Rv2Pancake.Spec
open Rv2Pancake.Base
open Rv2Pancake.Passes

/-- Optimize the loop-free body of a lifted Pancake dispatcher through the 4 verified passes:
    1. `blockFusionPass`
    2. `ifElseReconPass`
    3. `whileReconPass`
    4. `deadRegElimPass` -/
def optimizeDispatcherBody (body : PanProg) : PanProg :=
  let b1 := blockFusionPass.apply body
  let b2 := ifElseReconPass.apply b1
  let b3 := whileReconPass.apply b2
  deadRegElimPass.apply b3

/-- Theorem: `optimizeDispatcherBody` preserves the `isLoopFree` invariant. -/
theorem optimizeDispatcherBody_isLoopFree (body : PanProg) (h : isLoopFree body = true) :
    isLoopFree (optimizeDispatcherBody body) = true := by
  unfold optimizeDispatcherBody
  have h1 := blockFusionPass_isLoopFree body h
  have h2 := ifElseReconPass_isLoopFree _ h1
  have h3 := whileReconPass_isLoopFree _ h2
  exact deadRegElimPass_isLoopFree _ h3

/-- Theorem: `optimizeDispatcherBody` is universally sound (`StmtEquiv body (optimizeDispatcherBody body)`). -/
theorem optimizeDispatcherBody_sound (body : PanProg) :
    StmtEquiv body (optimizeDispatcherBody body) := by
  unfold optimizeDispatcherBody
  have s1 := blockFusionPass.apply_sound body
  have s2 := ifElseReconPass.apply_sound (blockFusionPass.apply body)
  have s3 := whileReconPass.apply_sound (ifElseReconPass.apply (blockFusionPass.apply body))
  have s4 := deadRegElimPass.apply_sound (whileReconPass.apply (ifElseReconPass.apply (blockFusionPass.apply body)))
  exact StmtEquiv.trans s1 (StmtEquiv.trans s2 (StmtEquiv.trans s3 s4))

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
  | .binOp .bitAnd a b => s!"({renderExp a} & {renderExp b})"
  | .binOp .bitOr a b  => s!"({renderExp a} | {renderExp b})"
  | .binOp .bitXor a b => s!"({renderExp a} ^ {renderExp b})"
  | .binOp .shl a b    => s!"({renderExp a} << {renderExp b})"
  | .binOp .shr a b    => s!"({renderExp a} >>> {renderExp b})"
  | .binOp .eqOp a b   => s!"({renderExp a} == {renderExp b})"
  | .binOp .neOp a b   => s!"({renderExp a} != {renderExp b})"
  | .binOp .ltU a b    => s!"({renderExp a} <+ {renderExp b})"

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

end Rv2Pancake
