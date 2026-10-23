import glob, subprocess, re, sys, os
from collections import defaultdict

REGS = [1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 22, 23, 31]

def parse_ins(line):
    idx, rest = line.split(": ", 1)
    idx = int(idx)
    if not rest.startswith("some (RiscvZkvm.Rv64.Instr."):
        return idx, ("NONE",)
    s = rest[len("some (RiscvZkvm.Rv64.Instr."):-1]
    op = s.split()[0]
    regs = [int(x) for x in re.findall(r"Reg\.x(\d+)", s)]
    m = re.search(r"0x([0-9a-fA-F]+)#(\d+)", s)
    imm = None
    if m:
        val = int(m.group(1), 16)
        bits = int(m.group(2))
        if bits in (12, 13, 21) and val >= (1 << (bits - 1)):
            val -= (1 << bits)
        imm = val
    return idx, (op, regs, imm)

def rname(r):
    if r == 0: return "0"
    if r == 26: return "@base"
    if r == 25: return "(@base + 4194304)"
    return f"r{r}"

def imm32_u64(hi20, op, lo12):
    # LUI sign-extends 20-bit hi20 << 12 to 64 bits
    if hi20 >= 0x80000:
        v = ((hi20 - 0x100000) << 12) & ((1 << 64) - 1)
    else:
        v = (hi20 << 12) & ((1 << 64) - 1)
    if op == "ADDI":
        v = (v + lo12) & ((1 << 64) - 1)
    elif op == "XORI":
        l64 = lo12 & ((1 << 64) - 1)
        v = (v ^ l64) & ((1 << 64) - 1)
    return v

def decompile_img(img_path, ffi_names):
    num_bitmaps = sum(len(l.split()) - 1 for l in open(img_path) if l.startswith("bitmaps "))
    out = subprocess.check_output([".lake/build/bin/try-src", "dump-img", img_path], text=True)
    lines = out.strip().splitlines()
    ins = {}
    for l in lines:
        idx, parsed = parse_ins(l)
        ins[idx] = parsed
    n_ins = len(lines)
    fstarts = {250}
    for i in range(250, n_ins):
        if ins[i][0] == "AUIPC" and ins[i][1] == [1] and i+2 < n_ins and ins[i+2][0] == "JAL" and ins[i+2][1] == [0]:
            tgt = (i + 2) + ins[i+2][2] // 4
            if tgt >= 250:
                fstarts.add(tgt)
    fstarts = sorted(fstarts)
    fends = fstarts[1:] + [n_ins]
    fn_names = {fs: ("main" if idx == 0 else f"fn_{fs}") for idx, fs in enumerate(fstarts)}

    has_exn = any(
        ins[i][0] in ("SD", "SW", "SB") and ins[i][1][0] == 25 and ins[i][2] == -136
        for i in range(250, n_ins)
    )
    reads_r11 = any(
        op in ("ADD", "SUB", "AND", "OR", "XOR", "MUL", "SD", "SW", "SB") and 11 in regs[1:]
        for i in range(250, n_ins)
        for op, regs, imm in [ins[i]]
        if any(
            ins[c][0] == "AUIPC" and ins[c][1] == [1] and c+2 < n_ins and ins[c+2][0] == "JAL" and ins[c+2][1] == [0] and (c+2)+ins[c+2][2]//4 >= 250
            for c in range(max(250, i-15), i)
        )
    )
    fn_codes = []
    for fs, fe in zip(fstarts, fends):
        is_main = (fs == 250)
        by_hdr = defaultdict(list)
        for i in range(fs, fe):
            if i-2 >= fs and ins[i-2][0] == "AUIPC" and ins[i-2][1] == [1]: continue
            if ins[i][0] == "JAL" and ins[i][1] == [0]:
                tgt = i + ins[i][2] // 4
                if fs <= tgt < i:
                    by_hdr[tgt].append(i)
        loops = {}
        for hdr, jals in by_hdr.items():
            b1, b2 = jals[-2], jals[-1]
            j_exit = None
            for k in range(b1 + 1, b2):
                if ins[k][0] == "JAL":
                    j_exit = k
                    break
            loops[hdr] = (b1, j_exit, b2)

        def emit_range(lo, hi, loop_stack, indent="  "):
            stmts = []
            pc = lo
            while pc < hi:
                if pc in loops and (not loop_stack or loop_stack[-1][0] != pc):
                    b1, j_exit, b2 = loops[pc]
                    body_stmts = emit_range(pc, b1 + 1, loop_stack + [(pc, b1, j_exit, b2)], indent + "  ")
                    stmts.append(f"{indent}while 1 {{")
                    stmts.extend(body_stmts)
                    stmts.append(f"{indent}}}")
                    exit_stmts = emit_range(b1 + 1, j_exit, loop_stack, indent)
                    stmts.extend(exit_stmts)
                    pc = b2 + 1
                    continue

                op, regs, imm = ins[pc]

                # 0. Skip s0 bitmap tag before PushHandler (ORI x22, x0, imm; SD x24, x22, 0; ADDI x24, x24, -24)
                if op == "ORI" and regs == [22, 0] and pc + 2 < hi and ins[pc+1] == ("SD", [24, 22], 0) and ins[pc+2][0] == "ADDI" and ins[pc+2][1] == [24, 24]:
                    pc += 2
                    continue

                # 1. Stack overflow check: ADDI x24, x24, -8*k; BGEU x24, x25, 12; ORI x10, x0, 2; JAL x0, sec2
                if op == "ADDI" and regs == [24, 24] and pc + 1 < hi and ins[pc+1][0] == "BGEU" and ins[pc+1][1] == [24, 25]:
                    # Check if this is PushHandler (followed by ORI x22, x0, 1; SD x24, x22, 0; AUIPC x22, 0...)
                    if pc + 4 < hi and ins[pc+4] == ("ORI", [22, 0], 1) and pc + 15 < hi and ins[pc+15][0] == "AUIPC" and ins[pc+15][1] == [1]:
                        call_pc = pc + 15
                        tgt = (call_pc + 2) + ins[call_pc+2][2] // 4
                        callee = fn_names[tgt]
                        # PopHandler is call_pc+3 .. call_pc+5
                        k = call_pc + 6
                        pass
                        # wait: find JAL after PopHandler
                        while k < hi and ins[k][0] != "JAL":
                            k += 1
                        after_handler = k + ins[k][2] // 4
                        normal_stmts = emit_range(call_pc + 6, k, loop_stack, indent)
                        handler_stmts = emit_range(k + 1, after_handler, loop_stack, indent + "  ")
                        if not has_exn and not reads_r11:
                            stmts.append(f"{indent}r10 = {callee}(r10, r11, r12, r13);")
                            stmts.extend(normal_stmts)
                        elif not has_exn:
                            stmts.append(f"{indent}res = {callee}(r10, r11, r12, r13); r10 = res.0; r11 = res.1;")
                            stmts.extend(normal_stmts)
                        elif len(handler_stmts) == 1 and handler_stmts[0].strip().startswith("return"):
                            stmts.append(f"{indent}res = {callee}(r10, r11, r12, r13); r10 = res.0; r11 = res.1; if (res.2 != 0) {{")
                            stmts.extend(handler_stmts)
                            stmts.append(f"{indent}}}")
                            stmts.extend(normal_stmts)
                        else:
                            stmts.append(f"{indent}res = {callee}(r10, r11, r12, r13); r10 = res.0; r11 = res.1; if (res.2 != 0) {{")
                            stmts.extend(handler_stmts)
                            stmts.append(f"{indent}}} else {{")
                            for ns in normal_stmts:
                                stmts.append("  " + ns)
                            stmts.append(f"{indent}}}")
                        pc = after_handler
                        continue
                    else:
                        # Function prologue stack adjustment: skip 4 instructions
                        pc += 4
                        continue

                # 2. Direct call (FFI or halt)
                if op == "AUIPC" and regs == [1] and pc + 2 < hi and ins[pc+2][0] == "JAL" and ins[pc+2][1] == [0]:
                    tgt = (pc + 2) + ins[pc+2][2] // 4
                    if tgt == -4:
                        # haltPc!
                        stmts.append(f"{indent}return (r10 == 0);")
                        pc += 3
                        continue
                    else:
                        ffi_idx = (-12 - tgt) // 4
                        fname = ffi_names[ffi_idx]
                        stmts.append(f"{indent}@{fname}(r10, r11, r12, r13);")
                        pc += 3
                        continue

                # 3. 64-bit constant materialization (6 instructions starting with LUI x31)
                if op == "LUI" and regs == [31] and pc + 5 < hi and ins[pc+4][0] == "SLLI" and ins[pc+4][2] == 32 and ins[pc+5][0] == "OR" and ins[pc+5][1][2] == 31:
                    lo32 = imm32_u64(imm, ins[pc+1][0], ins[pc+1][2]) & 0xffffffff
                    hi32 = imm32_u64(ins[pc+2][2], ins[pc+3][0], ins[pc+3][2]) & 0xffffffff
                    val64 = (hi32 << 32) | lo32
                    rd = ins[pc+5][1][0]
                    stmts.append(f"{indent}r{rd} = {val64};")
                    pc += 6
                    continue

                # 4. 32-bit constant materialization (LUI rd; ADDI/XORI rd)
                if op == "LUI" and pc + 1 < hi and ins[pc+1][0] in ("ADDI", "XORI") and ins[pc+1][1][0] == regs[0] and ins[pc+1][1][1] == regs[0]:
                    val64 = imm32_u64(imm, ins[pc+1][0], ins[pc+1][2])
                    rd = regs[0]
                    stmts.append(f"{indent}r{rd} = {val64};")
                    pc += 2
                    continue

                # 5. MULHU (dead high multiply before MUL)
                if op == "MULHU":
                    pc += 1
                    continue

                # 6. Epilogue ADDI x24, x24, +8*k
                if op == "ADDI" and regs == [24, 24]:
                    pc += 1
                    continue

                # 7. JALR (function return)
                if op == "JALR":
                    if is_main:
                        stmts.append(f"{indent}return 1;")
                    elif not has_exn and not reads_r11:
                        stmts.append(f"{indent}return r10;")
                    else:
                        stmts.append(f"{indent}return <r10, r11, 0>;")
                    pc += 1
                    continue

                # 8. JAL
                if op == "JAL" and regs == [0]:
                    tgt = pc + imm // 4
                    if tgt == pc + 1:
                        pc += 1
                        continue
                    if tgt < 250:
                        # Jump to raiseStubLocation (sec 20 = 203) or halt
                        if is_main:
                            stmts.append(f"{indent}return 0;")
                        elif not has_exn and not reads_r11:
                            stmts.append(f"{indent}return r10;")
                        else:
                            stmts.append(f"{indent}return <r10, r11, 1>;")
                        pc += 1
                        continue
                    if tgt in fn_names and tgt != fs:
                        # Tail call!
                        callee = fn_names[tgt]
                        if is_main:
                            if not has_exn and not reads_r11:
                                stmts.append(f"{indent}r10 = {callee}(r10, r11, r12, r13); return 1;")
                            else:
                                stmts.append(f"{indent}res = {callee}(r10, r11, r12, r13); if (res.2 != 0) {{ return 0; }} else {{ return 1; }}")
                        else:
                            stmts.append(f"{indent}return {callee}(r10, r11, r12, r13);")
                        pc += 1
                        continue
                    if loop_stack:
                        hdr, b1, j_exit, b2 = loop_stack[-1]
                        if tgt == hdr:
                            if pc != b1:
                                stmts.append(f"{indent}continue;")
                            pc += 1
                            continue
                        if tgt == b1 + 1:
                            exit_stmts = emit_range(b1 + 1, j_exit, loop_stack[:-1], indent)
                            stmts.extend(exit_stmts)
                            stmts.append(f"{indent}break;")
                            pc += 1
                            continue
                        if tgt in (j_exit + 1, b2 + 1):
                            stmts.append(f"{indent}break;")
                            pc += 1
                            continue
                    raise RuntimeError(f"Unhandled JAL at {pc} -> {tgt} in {img_path}")

                # 9. Conditional Branch
                if op in ("BEQ", "BNE", "BLT", "BGE", "BLTU", "BGEU"):
                    rs1, rs2 = rname(regs[0]), rname(regs[1])
                    cond_map = {
                        "BEQ": f"{rs1} == {rs2}",
                        "BNE": f"{rs1} != {rs2}",
                        "BLT": f"{rs1} < {rs2}",
                        "BGE": f"{rs1} >= {rs2}",
                        "BLTU": f"{rs1} <+ {rs2}",
                        "BGEU": f"{rs1} >=+ {rs2}",
                    }
                    cond = cond_map[op]
                    T = pc + imm // 4
                    if loop_stack and T == loop_stack[-1][1] + 1:
                        stmts.append(f"{indent}if {cond} {{ break; }}")
                        pc += 1
                        continue
                    prev_op, prev_regs, prev_imm = ins[T - 1]
                    if prev_op == "JAL" and prev_regs == [0] and not (T-3 >= fs and ins[T-3][0] == "AUIPC" and ins[T-3][1] == [1]):
                        J = (T - 1) + prev_imm // 4
                        is_special = (J < 250) or (J in fn_names and J != fs) or (loop_stack and J in (loop_stack[-1][0], loop_stack[-1][1] + 1, loop_stack[-1][2] + 1, loop_stack[-1][3] + 1))
                        if is_special:
                            then_stmts = emit_range(pc + 1, T, loop_stack, indent + "  ")
                            stmts.append(f"{indent}if {cond} {{ }} else {{")
                            stmts.extend(then_stmts)
                            stmts.append(f"{indent}}}")
                            pc = T
                            continue
                        else:
                            then_stmts = emit_range(pc + 1, T - 1, loop_stack, indent + "  ")
                            else_stmts = emit_range(T, J, loop_stack, indent + "  ")
                            stmts.append(f"{indent}if {cond} {{")
                            stmts.extend(else_stmts)
                            stmts.append(f"{indent}}} else {{")
                            stmts.extend(then_stmts)
                            stmts.append(f"{indent}}}")
                            pc = J
                            continue
                    else:
                        then_stmts = emit_range(pc + 1, T, loop_stack, indent + "  ")
                        stmts.append(f"{indent}if {cond} {{ }} else {{")
                        stmts.extend(then_stmts)
                        stmts.append(f"{indent}}}")
                        pc = T
                        continue

                # 10. Loads and Stores
                if op in ("LD", "LWU", "LBU"):
                    rd, rs1 = regs[0], regs[1]
                    if rs1 == 24:
                        slot = imm // 8
                        if rd != 0:
                            stmts.append(f"{indent}r{rd} = s{slot};")
                    elif rs1 == 25:
                        if imm == -24:
                            stmts.append(f"{indent}r{rd} = 2097152;")
                        elif imm == -136:
                            stmts.append(f"{indent}r{rd} = (lds 1 (@base + 4194168));")
                        else:
                            pass # -56(x25) is handler sp
                    else:
                        addr = rname(rs1) if imm == 0 else (f"{rname(rs1)} + {imm}" if imm > 0 else f"{rname(rs1)} - {-imm}")
                        if rd != 0:
                            if op == "LWU":
                                aligned = f"(({addr}) & (0 - 8))"
                                shift = f"((({addr}) & 7) << 3)"
                                stmts.append(f"{indent}r{rd} = (((lds 1 {aligned}) >>> {shift}) & 4294967295);")
                            else:
                                ld_op = "lds 1" if op == "LD" else "ld8"
                                stmts.append(f"{indent}r{rd} = {ld_op} ({addr});")
                    pc += 1
                    continue

                if op in ("SD", "SW", "SB"):
                    rs1, rs2 = regs[0], regs[1]
                    if rs1 == 24:
                        slot = imm // 8
                        stmts.append(f"{indent}s{slot} = {rname(rs2)};")
                    elif rs1 == 25:
                        if imm == -136:
                            stmts.append(f"{indent}st @base + 4194168, {rname(rs2)};")
                        else:
                            pass
                    else:
                        addr = rname(rs1) if imm == 0 else (f"{rname(rs1)} + {imm}" if imm > 0 else f"{rname(rs1)} - {-imm}")
                        st_op = "st" if op == "SD" else ("st32" if op == "SW" else "st8")
                        stmts.append(f"{indent}{st_op} {addr}, {rname(rs2)};")
                    pc += 1
                    continue

                # 11. ALU ops
                if op in ("ADD", "SUB", "AND", "OR", "XOR", "MUL"):
                    rd, rs1, rs2 = regs[0], regs[1], regs[2]
                    if rd != 0:
                        if op == "OR" and rs1 == rs2:
                            if rd != rs1:
                                stmts.append(f"{indent}r{rd} = {rname(rs1)};")
                        else:
                            sym = {"ADD": "+", "SUB": "-", "AND": "&", "OR": "|", "XOR": "^", "MUL": "*"}[op]
                            stmts.append(f"{indent}r{rd} = {rname(rs1)} {sym} {rname(rs2)};")
                    pc += 1
                    continue

                if op in ("ADDI", "ANDI", "ORI", "XORI", "SLLI", "SRLI", "SRAI"):
                    rd, rs1 = regs[0], regs[1]
                    uimm = imm & ((1 << 64) - 1)
                    if rd != 0:
                        if op == "ORI" and rs1 == 0:
                            stmts.append(f"{indent}r{rd} = {uimm};")
                        elif op == "ADDI" and rs1 == 0:
                            stmts.append(f"{indent}r{rd} = {uimm};")
                        elif op == "ADDI" and imm < 0:
                            stmts.append(f"{indent}r{rd} = {rname(rs1)} - {-imm};")
                        else:
                            sym = {"ADDI": "+", "ANDI": "&", "ORI": "|", "XORI": "^", "SLLI": "<<", "SRLI": ">>>", "SRAI": ">>"}[op]
                            stmts.append(f"{indent}r{rd} = {rname(rs1)} {sym} {uimm};")
                    pc += 1
                    continue

                raise RuntimeError(f"Unhandled instruction at {pc}: {op} {regs} {imm}")
            return stmts

        # Check if function ever writes to (@base + 4194168) (exception payload)
        # Or simpler: let's inspect if any function in the whole binary writes to -136(x25)
        body = emit_range(fs, fe, [])
        body_str = "\n".join(body)
        fname = fn_names[fs]
        used_vars = set(re.findall(r"\b([rs]\d+|res)\b", body_str))
        res_decl = ["  var {1, 1, 1} res = <0, 0, 0>;"] if "res" in used_vars else []
        if is_main:
            header = f"fun 1 main() {{"
            decls = res_decl + [f"  var 1 r{r} = 0;" for r in REGS if f"r{r}" in used_vars] + [f"  var 1 s{s} = 0;" for s in range(12) if f"s{s}" in used_vars]
            b_end = 2684354560 + 8 * num_bitmaps
            c_end = 2147549184 + 4 * n_ins
            if len(body) > 15:
                init_stmts = [
                    f"  st @base + 8, {b_end};",
                    f"  st @base + 16, {b_end};",
                    f"  st @base + 24, {c_end};",
                    f"  st @base + 32, {c_end};",
                ]
            else:
                init_stmts = []
        else:
            ret_shape = "1" if (not has_exn and not reads_r11) else "{1, 1, 1}"
            header = f"fun {ret_shape} {fname}(1 r10, 1 r11, 1 r12, 1 r13) {{"
            decls = res_decl + [f"  var 1 r{r} = 0;" for r in REGS if r not in (10, 11, 12, 13) and f"r{r}" in used_vars] + [f"  var 1 s{s} = 0;" for s in range(12) if f"s{s}" in used_vars]
            init_stmts = []
        fn_codes.append("\n".join([header] + decls + init_stmts + body + ["}"]))
    return "\n\n".join(fn_codes) + "\n"

if __name__ == "__main__":
    p = sys.argv[1]
    src = open(p.replace("image.fjimg", "source.pnk")).read()
    # extract ffi names from image.fjimg json
     
    ffi_names = [l[4:].strip() for l in open(p) if l.startswith("ffi ")]
    code = decompile_img(p, ffi_names)
    open("/tmp/opencode/test_out.pnk", "w").write(code)
    res = subprocess.run([".lake/build/bin/try-src", "check", "/tmp/opencode/test_out.pnk", p.replace("image.fjimg", "source.pnk"), p], capture_output=True, text=True)
    print(p, res.stdout.strip(), res.stderr.strip())
