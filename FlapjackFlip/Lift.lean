import RiscvZkvm.Interpreter.Decode
import FlapjackFlip.Image
import FlapjackFlip.Machine

namespace FlapjackFlip.Lift

open RiscvZkvm.Rv64

inductive OpInfo where
  | none
  | alu3 (op : String) (rd rs1 rs2 : Nat)
  | alui (op : String) (rd rs1 : Nat) (imm : Int)
  | lui (rd : Nat) (imm : Int)
  | auipc (rd : Nat) (imm : Int)
  | jal (rd : Nat) (imm : Int)
  | jalr (rd rs1 : Nat) (imm : Int)
  | br (op : String) (rs1 rs2 : Nat) (imm : Int)
  | ld (op : String) (rd rs1 : Nat) (imm : Int)
  | st (op : String) (rs1 rs2 : Nat) (imm : Int)
  | mulhu (rd rs1 rs2 : Nat)
  deriving Repr, Inhabited, BEq

def classifyInstr : Option Instr → OpInfo
  | some (.ADD rd rs1 rs2)  => .alu3 "ADD" rd.toNat rs1.toNat rs2.toNat
  | some (.SUB rd rs1 rs2)  => .alu3 "SUB" rd.toNat rs1.toNat rs2.toNat
  | some (.AND rd rs1 rs2)  => .alu3 "AND" rd.toNat rs1.toNat rs2.toNat
  | some (.OR rd rs1 rs2)   => .alu3 "OR"  rd.toNat rs1.toNat rs2.toNat
  | some (.XOR rd rs1 rs2)  => .alu3 "XOR" rd.toNat rs1.toNat rs2.toNat
  | some (.MUL rd rs1 rs2)  => .alu3 "MUL" rd.toNat rs1.toNat rs2.toNat
  | some (.MULHU rd rs1 rs2) => .mulhu rd.toNat rs1.toNat rs2.toNat
  | some (.ADDI rd rs1 imm) => .alui "ADDI" rd.toNat rs1.toNat imm.toInt
  | some (.ANDI rd rs1 imm) => .alui "ANDI" rd.toNat rs1.toNat imm.toInt
  | some (.ORI rd rs1 imm)  => .alui "ORI"  rd.toNat rs1.toNat imm.toInt
  | some (.XORI rd rs1 imm) => .alui "XORI" rd.toNat rs1.toNat imm.toInt
  | some (.SLLI rd rs1 sh)  => .alui "SLLI" rd.toNat rs1.toNat (Int.ofNat sh.toNat)
  | some (.SRLI rd rs1 sh)  => .alui "SRLI" rd.toNat rs1.toNat (Int.ofNat sh.toNat)
  | some (.SRAI rd rs1 sh)  => .alui "SRAI" rd.toNat rs1.toNat (Int.ofNat sh.toNat)
  | some (.LUI rd imm)      => .lui rd.toNat (Int.ofNat imm.toNat)
  | some (.AUIPC rd imm)    => .auipc rd.toNat (Int.ofNat imm.toNat)
  | some (.JAL rd imm)      => .jal rd.toNat imm.toInt
  | some (.JALR rd rs1 imm) => .jalr rd.toNat rs1.toNat imm.toInt
  | some (.BEQ rs1 rs2 imm)  => .br "BEQ"  rs1.toNat rs2.toNat imm.toInt
  | some (.BNE rs1 rs2 imm)  => .br "BNE"  rs1.toNat rs2.toNat imm.toInt
  | some (.BLT rs1 rs2 imm)  => .br "BLT"  rs1.toNat rs2.toNat imm.toInt
  | some (.BGE rs1 rs2 imm)  => .br "BGE"  rs1.toNat rs2.toNat imm.toInt
  | some (.BLTU rs1 rs2 imm) => .br "BLTU" rs1.toNat rs2.toNat imm.toInt
  | some (.BGEU rs1 rs2 imm) => .br "BGEU" rs1.toNat rs2.toNat imm.toInt
  | some (.LD rd rs1 imm)   => .ld "LD"  rd.toNat rs1.toNat imm.toInt
  | some (.LWU rd rs1 imm)  => .ld "LWU" rd.toNat rs1.toNat imm.toInt
  | some (.LBU rd rs1 imm)  => .ld "LBU" rd.toNat rs1.toNat imm.toInt
  | some (.SD rs1 rs2 imm)  => .st "SD"  rs1.toNat rs2.toNat imm.toInt
  | some (.SW rs1 rs2 imm)  => .st "SW"  rs1.toNat rs2.toNat imm.toInt
  | some (.SB rs1 rs2 imm)  => .st "SB"  rs1.toNat rs2.toNat imm.toInt
  | _ => .none

def trackedRegs : List Nat := [1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 22, 23, 31]

def rname (r : Nat) : String :=
  if r == 0 then "0"
  else if r == 26 then "@base"
  else if r == 25 then "(@base + 4194304)"
  else s!"r{r}"

def u64Mod : Int := 18446744073709551616

def toU64Nat (v : Int) : Nat :=
  (v % u64Mod).toNat

def imm32U64 (hi20 : Int) (op : String) (lo12 : Int) : Nat :=
  let v0 : Int :=
    if hi20 >= 0x80000 then
      ((hi20 - 0x100000) * 4096) % u64Mod
    else
      (hi20 * 4096) % u64Mod
  let b0 : BitVec 64 := BitVec.ofNat 64 v0.toNat
  let b1 : BitVec 64 := BitVec.ofInt 64 lo12
  let res : BitVec 64 :=
    if op == "ADDI" then b0 + b1
    else if op == "XORI" then b0 ^^^ b1
    else b0
  res.toNat

def offsetTarget (pc : Nat) (imm : Int) : Nat :=
  let t : Int := Int.ofNat pc + imm / 4
  if t < 0 then 0 else t.toNat

def offsetTargetSigned (pc : Nat) (imm : Int) : Int :=
  Int.ofNat pc + imm / 4

structure LoopInfo where
  hdr : Nat
  b1 : Nat
  jExit : Nat
  b2 : Nat
  deriving Repr, Inhabited, BEq

def isAuipc1 (ins : Array OpInfo) (i : Nat) : Bool :=
  match ins[i]? with
  | some (.auipc 1 _) => true
  | _ => false

def isCallAt (ins : Array OpInfo) (i : Nat) : Option Int :=
  match ins[i]?, ins[i + 2]? with
  | some (.auipc 1 _), some (.jal 0 imm) =>
    some (offsetTargetSigned (i + 2) imm)
  | _, _ => none

def lookupFnName (fnNames : List (Nat × String)) (tgt : Nat) : Option String :=
  (fnNames.find? (fun p => p.1 == tgt)).map Prod.snd

def lookupLoop (loops : List (Nat × LoopInfo)) (pc : Nat) : Option LoopInfo :=
  (loops.find? (fun p => p.1 == pc)).map Prod.snd

def containsSubstr (haystack needle : String) : Bool :=
  (haystack.splitOn needle).length > 1

def isIdentChar (c : Char) : Bool :=
  c.isAlphanum || c == '_'

def usesIdent (s : String) (ident : String) : Bool :=
  let parts := s.splitOn ident
  if parts.length <= 1 then false
  else
    let rec check : List String → Bool
      | [] => false
      | [_] => false
      | a :: b :: rest =>
        let prevOk := match a.toList.reverse with
          | [] => true
          | c :: _ => !isIdentChar c
        let nextOk := match b.toList with
          | [] => true
          | c :: _ => !isIdentChar c
        if prevOk && nextOk then true else check (b :: rest)
    check parts

partial def emitRange
    (ins : Array OpInfo)
    (ffiNames : Array String)
    (fnNames : List (Nat × String))
    (loops : List (Nat × LoopInfo))
    (fs : Nat)
    (isMain : Bool)
    (hasExn : Bool)
    (readsR11 : Bool)
    (lo hi : Nat)
    (loopStack : List LoopInfo)
    (indent : String) : Except String (List String) := do
  let mut stmts : List String := []
  let mut pc : Nat := lo
  while pc < hi do
    let topHdr? := loopStack.getLast?.map (·.hdr)
    match lookupLoop loops pc with
    | some li =>
      if topHdr? != some pc then
        let bodyStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
          pc (li.b1 + 1) (loopStack ++ [li]) (indent ++ "  ")
        stmts := stmts ++ [s!"{indent}while 1 \{"] ++ bodyStmts ++ [s!"{indent}}"]
        let exitStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
          (li.b1 + 1) li.jExit loopStack indent
        stmts := stmts ++ exitStmts
        pc := li.b2 + 1
        continue
    | none => pure ()

    let cur := ins[pc]?.getD .none

    -- 0. Skip s0 bitmap tag before PushHandler: ORI x22, x0, imm; SD x24, x22, 0; ADDI x24, x24, -24
    if let .alui "ORI" 22 0 _ := cur then
      if pc + 2 < hi then
        if let (some (.st "SD" 24 22 0), some (.alui "ADDI" 24 24 _)) := (ins[pc + 1]?, ins[pc + 2]?) then
          pc := pc + 2
          continue

    -- 1. Stack overflow check: ADDI x24, x24, -8*k; BGEU x24, x25, 12
    if let .alui "ADDI" 24 24 _ := cur then
      if pc + 1 < hi then
        if let some (.br "BGEU" 24 25 _) := ins[pc + 1]? then
          if pc + 15 < hi && ins[pc + 4]? == some (.alui "ORI" 22 0 1) && isAuipc1 ins (pc + 15) then
            let callPc := pc + 15
            match isCallAt ins callPc with
            | some tgtInt =>
              let tgt := tgtInt.toNat
              match lookupFnName fnNames tgt with
              | some callee =>
                let mut k := callPc + 6
                while k < hi && (match ins[k]? with | some (.jal _ _) => false | _ => true) do
                  k := k + 1
                match ins[k]? with
                | some (.jal _ jImm) =>
                  let afterHandler := offsetTarget k jImm
                  let normalStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
                    (callPc + 6) k loopStack indent
                  let handlerStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
                    (k + 1) afterHandler loopStack (indent ++ "  ")
                  if !hasExn && !readsR11 then
                    stmts := stmts ++ [s!"{indent}r10 = {callee}(r10, r11, r12, r13);"] ++ normalStmts
                  else if !hasExn then
                    stmts := stmts ++ [s!"{indent}res = {callee}(r10, r11, r12, r13); r10 = res.0; r11 = res.1;"] ++ normalStmts
                  else if handlerStmts.length == 1 && (handlerStmts.head!.trimAscii.toString.startsWith "return") then
                    stmts := stmts ++
                      [s!"{indent}res = {callee}(r10, r11, r12, r13); r10 = res.0; r11 = res.1; if (res.2 != 0) \{"] ++
                      handlerStmts ++
                      [s!"{indent}}"] ++
                      normalStmts
                  else
                    stmts := stmts ++
                      [s!"{indent}res = {callee}(r10, r11, r12, r13); r10 = res.0; r11 = res.1; if (res.2 != 0) \{"] ++
                      handlerStmts ++
                      [s!"{indent}} else \{"] ++
                      (normalStmts.map (fun ns => "  " ++ ns)) ++
                      [s!"{indent}}"]
                  pc := afterHandler
                  continue
                | _ => throw s!"expected JAL after PopHandler at {callPc}"
              | none => throw s!"unknown callee at {tgt}"
            | none => throw s!"malformed call at {callPc}"
          else
            pc := pc + 4
            continue

    -- 2. Direct call (FFI or halt)
    if let some tgtInt := isCallAt ins pc then
      if pc + 2 < hi then
        if tgtInt == -4 then
          stmts := stmts ++ [s!"{indent}return (r10 == 0);"]
          pc := pc + 3
          continue
        else if tgtInt <= -12 then
          let ffiIdx := ((-12 - tgtInt) / 4).toNat
          match ffiNames[ffiIdx]? with
          | some fname =>
            stmts := stmts ++ [s!"{indent}@{fname}(r10, r11, r12, r13);"]
            pc := pc + 3
            continue
          | none => throw s!"FFI index out of bounds: {ffiIdx}"

    -- 3. 64-bit constant materialization (6 instructions starting with LUI x31)
    if let .lui 31 imm0 := cur then
      if pc + 5 < hi then
        match ins[pc + 1]?, ins[pc + 2]?, ins[pc + 3]?, ins[pc + 4]?, ins[pc + 5]? with
        | some (.alui op1 _ _ imm1), some (.lui _ imm2), some (.alui op3 _ _ imm3),
          some (.alui "SLLI" _ _ 32), some (.alu3 "OR" rd _ 31) =>
          let lo32 := (imm32U64 imm0 op1 imm1) % 4294967296
          let hi32 := (imm32U64 imm2 op3 imm3) % 4294967296
          let val64 := hi32 * 4294967296 + lo32
          stmts := stmts ++ [s!"{indent}r{rd} = {val64};"]
          pc := pc + 6
          continue
        | _, _, _, _, _ => pure ()

    -- 4. 32-bit constant materialization (LUI rd; ADDI/XORI rd)
    if let .lui rd imm0 := cur then
      if pc + 1 < hi then
        match ins[pc + 1]? with
        | some (.alui op1 rd1 rs1 imm1) =>
          if (op1 == "ADDI" || op1 == "XORI") && rd1 == rd && rs1 == rd then
            let val64 := imm32U64 imm0 op1 imm1
            stmts := stmts ++ [s!"{indent}r{rd} = {val64};"]
            pc := pc + 2
            continue
        | _ => pure ()

    -- 5. MULHU (dead high multiply before MUL)
    if let .mulhu _ _ _ := cur then
      pc := pc + 1
      continue

    -- 6. Epilogue ADDI x24, x24, +8*k
    if let .alui "ADDI" 24 24 _ := cur then
      pc := pc + 1
      continue

    -- 7. JALR (function return)
    if let .jalr _ _ _ := cur then
      if isMain then
        stmts := stmts ++ [s!"{indent}return 1;"]
      else if !hasExn && !readsR11 then
        stmts := stmts ++ [s!"{indent}return r10;"]
      else
        stmts := stmts ++ [s!"{indent}return <r10, r11, 0>;"]
      pc := pc + 1
      continue

    -- 8. JAL
    if let .jal 0 imm := cur then
      let tgt := offsetTarget pc imm
      if tgt == pc + 1 then
        pc := pc + 1
        continue
      if tgt < 250 then
        if isMain then
          stmts := stmts ++ [s!"{indent}return 0;"]
        else if !hasExn && !readsR11 then
          stmts := stmts ++ [s!"{indent}return r10;"]
        else
          stmts := stmts ++ [s!"{indent}return <r10, r11, 1>;"]
        pc := pc + 1
        continue
      if let some callee := lookupFnName fnNames tgt then
        if tgt != fs then
          if isMain then
            if !hasExn && !readsR11 then
              stmts := stmts ++ [s!"{indent}r10 = {callee}(r10, r11, r12, r13); return 1;"]
            else
              stmts := stmts ++ [s!"{indent}res = {callee}(r10, r11, r12, r13); if (res.2 != 0) \{ return 0; } else \{ return 1; }"]
          else
            stmts := stmts ++ [s!"{indent}return {callee}(r10, r11, r12, r13);"]
          pc := pc + 1
          continue
      if let some li := loopStack.getLast? then
        if tgt == li.hdr then
          if pc != li.b1 then
            stmts := stmts ++ [s!"{indent}continue;"]
          pc := pc + 1
          continue
        if tgt == li.b1 + 1 then
          let exitStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
            (li.b1 + 1) li.jExit loopStack.dropLast indent
          stmts := stmts ++ exitStmts ++ [s!"{indent}break;"]
          pc := pc + 1
          continue
        if tgt == li.jExit + 1 || tgt == li.b2 + 1 then
          stmts := stmts ++ [s!"{indent}break;"]
          pc := pc + 1
          continue
      throw s!"unhandled JAL at {pc} -> {tgt}"

    -- 9. Conditional Branch
    if let .br op rs1 rs2 imm := cur then
      let s1 := rname rs1
      let s2 := rname rs2
      let cond :=
        match op with
        | "BEQ"  => s!"{s1} == {s2}"
        | "BNE"  => s!"{s1} != {s2}"
        | "BLT"  => s!"{s1} < {s2}"
        | "BGE"  => s!"{s1} >= {s2}"
        | "BLTU" => s!"{s1} <+ {s2}"
        | _      => s!"{s1} >=+ {s2}"
      let tTarget := offsetTarget pc imm
      if let some li := loopStack.getLast? then
        if tTarget == li.b1 + 1 then
          stmts := stmts ++ [s!"{indent}if {cond} \{ break; }"]
          pc := pc + 1
          continue
      let prev := if tTarget > 0 then ins[tTarget - 1]?.getD .none else .none
      let prevIsCall := tTarget >= 3 && tTarget - 3 >= fs && isAuipc1 ins (tTarget - 3)
      if let .jal 0 prevImm := prev then
        if !prevIsCall then
          let jTarget := offsetTarget (tTarget - 1) prevImm
          let isLoopTarget := match loopStack.getLast? with
            | some li =>
              jTarget == li.hdr || jTarget == li.b1 + 1 || jTarget == li.jExit + 1 || jTarget == li.b2 + 1
            | none => false
          let isFnTarget := (lookupFnName fnNames jTarget).isSome && jTarget != fs
          let isSpecial := jTarget < 250 || isFnTarget || isLoopTarget
          if isSpecial then
            let thenStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
              (pc + 1) tTarget loopStack (indent ++ "  ")
            stmts := stmts ++ [s!"{indent}if {cond} \{ } else \{"] ++ thenStmts ++ [s!"{indent}}"]
            pc := tTarget
            continue
          else
            let thenStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
              (pc + 1) (tTarget - 1) loopStack (indent ++ "  ")
            let elseStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
              tTarget jTarget loopStack (indent ++ "  ")
            stmts := stmts ++
              [s!"{indent}if {cond} \{"] ++
              elseStmts ++
              [s!"{indent}} else \{"] ++
              thenStmts ++
              [s!"{indent}}"]
            pc := jTarget
            continue
      let thenStmts ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11
        (pc + 1) tTarget loopStack (indent ++ "  ")
      stmts := stmts ++ [s!"{indent}if {cond} \{ } else \{"] ++ thenStmts ++ [s!"{indent}}"]
      pc := tTarget
      continue

    -- 10. Loads and Stores
    if let .ld op rd rs1 imm := cur then
      if rs1 == 24 then
        let slot := (imm / 8).toNat
        if rd != 0 then
          stmts := stmts ++ [s!"{indent}r{rd} = s{slot};"]
      else if rs1 == 25 then
        if imm == -24 then
          if rd != 0 then
            stmts := stmts ++ [s!"{indent}r{rd} = 2097152;"]
        else if imm == -136 then
          if rd != 0 then
            stmts := stmts ++ [s!"{indent}r{rd} = (lds 1 (@base + 4194168));"]
        else
          pure ()
      else
        let addr :=
          if imm == 0 then rname rs1
          else if imm > 0 then s!"{rname rs1} + {imm.toNat}"
          else s!"{rname rs1} - {(-imm).toNat}"
        if rd != 0 then
          if op == "LWU" then
            let aligned := s!"(({addr}) & (0 - 8))"
            let shift := s!"((({addr}) & 7) << 3)"
            stmts := stmts ++ [s!"{indent}r{rd} = (((lds 1 {aligned}) >>> {shift}) & 4294967295);"]
          else
            let ldOp := if op == "LD" then "lds 1" else "ld8"
            stmts := stmts ++ [s!"{indent}r{rd} = {ldOp} ({addr});"]
      pc := pc + 1
      continue

    if let .st op rs1 rs2 imm := cur then
      if rs1 == 24 then
        let slot := (imm / 8).toNat
        stmts := stmts ++ [s!"{indent}s{slot} = {rname rs2};"]
      else if rs1 == 25 then
        if imm == -136 then
          stmts := stmts ++ [s!"{indent}st @base + 4194168, {rname rs2};"]
        else
          pure ()
      else
        let addr :=
          if imm == 0 then rname rs1
          else if imm > 0 then s!"{rname rs1} + {imm.toNat}"
          else s!"{rname rs1} - {(-imm).toNat}"
        let stOp := if op == "SD" then "st" else if op == "SW" then "st32" else "st8"
        stmts := stmts ++ [s!"{indent}{stOp} {addr}, {rname rs2};"]
      pc := pc + 1
      continue

    -- 11. ALU register-register
    if let .alu3 op rd rs1 rs2 := cur then
      if rd != 0 then
        if op == "OR" && rs1 == rs2 then
          if rd != rs1 then
            stmts := stmts ++ [s!"{indent}r{rd} = {rname rs1};"]
        else
          let sym :=
            match op with
            | "ADD" => "+"
            | "SUB" => "-"
            | "AND" => "&"
            | "OR"  => "|"
            | "XOR" => "^"
            | _     => "*"
          stmts := stmts ++ [s!"{indent}r{rd} = {rname rs1} {sym} {rname rs2};"]
      pc := pc + 1
      continue

    -- 12. ALU immediate
    if let .alui op rd rs1 imm := cur then
      let uimm := toU64Nat imm
      if rd != 0 then
        if (op == "ORI" || op == "ADDI") && rs1 == 0 then
          stmts := stmts ++ [s!"{indent}r{rd} = {uimm};"]
        else if op == "ADDI" && imm < 0 then
          stmts := stmts ++ [s!"{indent}r{rd} = {rname rs1} - {(-imm).toNat};"]
        else
          let sym :=
            match op with
            | "ADDI" => "+"
            | "ANDI" => "&"
            | "ORI"  => "|"
            | "XORI" => "^"
            | "SLLI" => "<<"
            | "SRLI" => ">>>"
            | _      => ">>"
          stmts := stmts ++ [s!"{indent}r{rd} = {rname rs1} {sym} {uimm};"]
      pc := pc + 1
      continue

    throw s!"unhandled instruction at {pc}: {repr cur}"
  return stmts

def insertSortedUnique (xs : List Nat) (x : Nat) : List Nat :=
  match xs with
  | [] => [x]
  | y :: ys =>
    if x == y then xs
    else if x < y then x :: xs
    else y :: insertSortedUnique ys x

def decompileImage (decoded : List (Option Instr)) (numBitmaps : Nat) (ffiNamesList : List String) :
    Except String String := do
  let ins : Array OpInfo := (decoded.map classifyInstr).toArray
  let nIns := ins.size
  if nIns <= 250 then
    throw s!"image too short: {nIns} instructions"
  let ffiNames := ffiNamesList.toArray

  -- Find all function starts
  let mut fstarts : List Nat := [250]
  for i in [250:nIns] do
    if let some tgtInt := isCallAt ins i then
      if tgtInt >= 250 then
        fstarts := insertSortedUnique fstarts tgtInt.toNat

  let fends : List Nat := fstarts.drop 1 ++ [nIns]
  let fnNames : List (Nat × String) :=
    fstarts.zipIdx.map fun (fs, idx) => (fs, if idx == 0 then "main" else s!"fn_{fs}")

  -- Detect exception writes and post-call r11 reads
  let mut hasExn := false
  let mut readsR11 := false
  for i in [250:nIns] do
    match ins[i]? with
    | some (.st _ 25 _ (-136)) => hasExn := true
    | _ => pure ()
    let uses11 :=
      match ins[i]? with
      | some (.alu3 _ _ rs1 rs2) => rs1 == 11 || rs2 == 11
      | some (.st _ _ rs2 _) => rs2 == 11
      | _ => false
    if uses11 then
      let loCall := if i > 265 then i - 15 else 250
      let mut nearCall := false
      for c in [loCall:i] do
        if let some tgtInt := isCallAt ins c then
          if tgtInt >= 250 then
            nearCall := true
      if nearCall then
        readsR11 := true

  let mut fnCodes : List String := []
  for (fs, fe) in fstarts.zip fends do
    let isMain := fs == 250
    -- Identify backward JALs to loop headers
    let mut byHdr : List (Nat × List Nat) := []
    for i in [fs:fe] do
      let prevAuipc := i >= fs + 2 && isAuipc1 ins (i - 2)
      if !prevAuipc then
        if let some (.jal 0 imm) := ins[i]? then
          let tgt := offsetTarget i imm
          if fs <= tgt && tgt < i then
            let curList := ((byHdr.find? (·.1 == tgt)).map Prod.snd).getD []
            byHdr := (byHdr.filter (·.1 != tgt)) ++ [(tgt, curList ++ [i])]

    let mut loops : List (Nat × LoopInfo) := []
    for (hdr, jals) in byHdr do
      if jals.length >= 2 then
        let b2 := jals.getLast!
        let b1 := jals.dropLast.getLast!
        let mut jExitOpt : Option Nat := none
        for k in [b1 + 1 : b2] do
          if jExitOpt.isNone then
            if let some (.jal _ _) := ins[k]? then
              jExitOpt := some k
        if let some jExit := jExitOpt then
          loops := loops ++ [(hdr, { hdr := hdr, b1 := b1, jExit := jExit, b2 := b2 })]

    let body ← emitRange ins ffiNames fnNames loops fs isMain hasExn readsR11 fs fe [] "  "
    let bodyStr := String.intercalate "\n" body
    let fname := (lookupFnName fnNames fs).getD s!"fn_{fs}"
    let resDecl :=
      if usesIdent bodyStr "res" then ["  var {1, 1, 1} res = <0, 0, 0>;"] else []
    let mut maxSlot : Nat := 12
    for s in [12:64] do
      if usesIdent bodyStr s!"s{s}" then
        maxSlot := s + 1
    if isMain then
      let header := "fun 1 main() {"
      let rDecls := trackedRegs.filterMap fun r =>
        if usesIdent bodyStr s!"r{r}" then some s!"  var 1 r{r} = 0;" else none
      let sDecls := (List.range maxSlot).filterMap fun s =>
        if usesIdent bodyStr s!"s{s}" then some s!"  var 1 s{s} = 0;" else none
      let bEnd := 2684354560 + 8 * numBitmaps
      let cEnd := 2147549184 + 4 * nIns
      let initStmts :=
        if body.length > 15 then
          [ s!"  st @base + 8, {bEnd};",
            s!"  st @base + 16, {bEnd};",
            s!"  st @base + 24, {cEnd};",
            s!"  st @base + 32, {cEnd};" ]
        else []
      fnCodes := fnCodes ++ [String.intercalate "\n" ([header] ++ resDecl ++ rDecls ++ sDecls ++ initStmts ++ body ++ ["}"])]
    else
      let retShape := if !hasExn && !readsR11 then "1" else "{1, 1, 1}"
      let header := s!"fun {retShape} {fname}(1 r10, 1 r11, 1 r12, 1 r13) \{"
      let rDecls := trackedRegs.filterMap fun r =>
        if r != 10 && r != 11 && r != 12 && r != 13 && usesIdent bodyStr s!"r{r}" then
          some s!"  var 1 r{r} = 0;"
        else none
      let sDecls := (List.range maxSlot).filterMap fun s =>
        if usesIdent bodyStr s!"s{s}" then some s!"  var 1 s{s} = 0;" else none
      fnCodes := fnCodes ++ [String.intercalate "\n" ([header] ++ resDecl ++ rDecls ++ sDecls ++ body ++ ["}"])]

  return String.intercalate "\n\n" fnCodes ++ "\n"

end FlapjackFlip.Lift
