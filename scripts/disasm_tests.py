import glob, sys

REG_NAMES = [f"x{i}" for i in range(32)]

def sext(val, bits):
    if val & (1 << (bits - 1)):
        return val - (1 << bits)
    return val

def disasm_word(w, pc):
    op = w & 0x7f
    rd = (w >> 7) & 0x1f
    funct3 = (w >> 12) & 0x7
    rs1 = (w >> 15) & 0x1f
    rs2 = (w >> 20) & 0x1f
    funct7 = (w >> 25) & 0x7f
    if op == 0x13:
        imm = sext(w >> 20, 12)
        shamt = (w >> 20) & 0x3f
        m = {0:"addi", 2:"slti", 3:"sltiu", 4:"xori", 6:"ori", 7:"andi"}
        if funct3 in m:
            return f"{m[funct3]} {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {imm}"
        elif funct3 == 1:
            return f"slli {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {shamt}"
        elif funct3 == 5:
            if (w >> 26) == 0:
                return f"srli {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {shamt}"
            elif (w >> 26) == 0x10:
                return f"srai {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {shamt}"
    elif op == 0x33:
        if funct7 == 1:
            m = {0:"mul", 1:"mulh", 2:"mulhsu", 3:"mulhu", 4:"div", 5:"divu", 6:"rem", 7:"remu"}
            return f"{m.get(funct3,'?')} {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {REG_NAMES[rs2]}"
        elif funct7 == 0x20:
            m = {0:"sub", 5:"sra"}
            return f"{m.get(funct3,'?')} {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {REG_NAMES[rs2]}"
        elif funct7 == 0:
            m = {0:"add", 1:"sll", 2:"slt", 3:"sltu", 4:"xor", 5:"srl", 6:"or", 7:"and"}
            return f"{m.get(funct3,'?')} {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {REG_NAMES[rs2]}"
    elif op == 0x03:
        imm = sext(w >> 20, 12)
        m = {0:"lb", 1:"lh", 2:"lw", 3:"ld", 4:"lbu", 5:"lhu", 6:"lwu"}
        return f"{m.get(funct3,'?')} {REG_NAMES[rd]}, {imm}({REG_NAMES[rs1]})"
    elif op == 0x23:
        imm = sext(((w >> 25) << 5) | ((w >> 7) & 0x1f), 12)
        m = {0:"sb", 1:"sh", 2:"sw", 3:"sd"}
        return f"{m.get(funct3,'?')} {REG_NAMES[rs2]}, {imm}({REG_NAMES[rs1]})"
    elif op == 0x63:
        b12 = (w >> 31) & 1
        b10_5 = (w >> 25) & 0x3f
        b4_1 = (w >> 8) & 0xf
        b11 = (w >> 7) & 1
        imm = sext((b12 << 12) | (b11 << 11) | (b10_5 << 5) | (b4_1 << 1), 13)
        m = {0:"beq", 1:"bne", 4:"blt", 5:"bge", 6:"bltu", 7:"bgeu"}
        return f"{m.get(funct3,'?')} {REG_NAMES[rs1]}, {REG_NAMES[rs2]}, {hex(pc + imm)} (idx {(pc + imm - 0x80010000)//4})"
    elif op == 0x6f:
        j20 = (w >> 31) & 1
        j10_1 = (w >> 21) & 0x3ff
        j11 = (w >> 20) & 1
        j19_12 = (w >> 12) & 0xff
        imm = sext((j20 << 20) | (j19_12 << 12) | (j11 << 11) | (j10_1 << 1), 21)
        return f"jal {REG_NAMES[rd]}, {hex(pc + imm)} (idx {(pc + imm - 0x80010000)//4})"
    elif op == 0x67:
        imm = sext(w >> 20, 12)
        return f"jalr {REG_NAMES[rd]}, {REG_NAMES[rs1]}, {imm}"
    elif op == 0x37:
        imm = (w >> 12) & 0xfffff
        return f"lui {REG_NAMES[rd]}, {hex(imm)}"
    elif op == 0x17:
        imm = (w >> 12) & 0xfffff
        return f"auipc {REG_NAMES[rd]}, {hex(imm)}"
    return f"unknown {hex(w)}"

def parse_img(path):
    code_hex = []
    ffi = []
    for line in open(path):
        line = line.strip()
        if line.startswith("ffi "):
            ffi.append(line[4:])
        elif line.startswith("code "):
            code_hex = line[5:].split()
    bs = [int(x, 16) for x in code_hex]
    words = [bs[i] | (bs[i+1]<<8) | (bs[i+2]<<16) | (bs[i+3]<<24) for i in range(0, len(bs), 4)]
    return ffi, words

for p in sys.argv[1:]:
    ffi, words = parse_img(p)
    print(f"=== {p} (len={len(words)}, ffi={ffi}) ===")
    for i in range(250, len(words)):
        pc = 0x80010000 + 4*i
        print(f"  {i:3d} ({hex(pc)}): {disasm_word(words[i], pc)}")
