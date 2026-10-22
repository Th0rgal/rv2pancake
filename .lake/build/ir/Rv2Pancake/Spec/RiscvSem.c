// Lean compiler output
// Module: Rv2Pancake.Spec.RiscvSem
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_instDecidableEqUInt64___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_joinSep___at___00Lean_Syntax_formatStxAux_spec__2(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint64_t lean_uint64_sub(uint64_t, uint64_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint64_t lean_uint64_mod(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_readReg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readReg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_writeReg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp___boxed(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.add"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.sub"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__3_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.BinOp.bitAnd"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Rv2Pancake.Spec.BinOp.bitOr"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.BinOp.bitXor"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.shl"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.shr"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.eqOp"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.neOp"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.ltU"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp___closed__0_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp___closed__0_value;
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(uint8_t, uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalBinOp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond___boxed(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Rv2Pancake.Spec.BranchCond.beq"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Rv2Pancake.Spec.BranchCond.bne"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__3_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Rv2Pancake.Spec.BranchCond.bltu"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__5_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Rv2Pancake.Spec.BranchCond.bgeu"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__7_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond___closed__0_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond___closed__0_value;
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond(uint8_t, uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opImm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opImm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opReg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opReg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_lui_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_lui_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_auipc_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_auipc_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ld_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ld_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_sd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_sd_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_branch_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_branch_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jalr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jalr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ecall_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ecall_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr___boxed(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Rv2Pancake.Spec.RVInstr.ecall"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Rv2Pancake.Spec.RVInstr.opImm"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__4_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Rv2Pancake.Spec.RVInstr.opReg"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__5_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__7_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Rv2Pancake.Spec.RVInstr.lui"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__10_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Rv2Pancake.Spec.RVInstr.auipc"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__11_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__13_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.RVInstr.ld"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__16_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.RVInstr.sd"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__17_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__19_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Rv2Pancake.Spec.RVInstr.branch"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__20_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__21_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__22_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Rv2Pancake.Spec.RVInstr.jal"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__23 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__23_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__23_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__24 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__24_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__24_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__25 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__25_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.RVInstr.jalr"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__26 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__26_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__26_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__27 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__27_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__27_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__28 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__28_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr___closed__0_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr___closed__0_value;
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___closed__0_value;
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5;
static lean_once_cell_t lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6;
static const lean_ctor_object lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__8 = (const lean_object*)&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__2_value;
static const lean_string_object lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__3_value;
static lean_once_cell_t lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4;
static lean_once_cell_t lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5;
static const lean_ctor_object lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__6 = (const lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__6_value;
static const lean_ctor_object lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entryPc"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__1_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__3_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__5_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__6_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__9_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__11_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__11_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__15_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg___closed__0_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_fetchInstr(lean_object*, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_fetchInstr___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0(uint64_t, lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execRVInstr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_stepRV(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_stepRV___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_readReg(lean_object* v_regs_1_, lean_object* v_r_2_){
_start:
{
lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(0u);
v___x_4_ = lean_nat_dec_eq(v_r_2_, v___x_3_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; uint64_t v___x_6_; 
v___x_5_ = lean_apply_1(v_regs_1_, v_r_2_);
v___x_6_ = lean_unbox_uint64(v___x_5_);
lean_dec_ref(v___x_5_);
return v___x_6_;
}
else
{
uint64_t v___x_7_; 
lean_dec(v_r_2_);
lean_dec_ref(v_regs_1_);
v___x_7_ = 0ULL;
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readReg___boxed(lean_object* v_regs_8_, lean_object* v_r_9_){
_start:
{
uint64_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_8_, v_r_9_);
v_r_11_ = lean_box_uint64(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_writeReg(lean_object* v_regs_12_, lean_object* v_r_13_, uint64_t v_v_14_, lean_object* v_a_15_){
_start:
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(0u);
v___x_17_ = lean_nat_dec_eq(v_r_13_, v___x_16_);
if (v___x_17_ == 0)
{
uint8_t v___x_18_; 
v___x_18_ = lean_nat_dec_eq(v_a_15_, v_r_13_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; uint64_t v___x_20_; 
v___x_19_ = lean_apply_1(v_regs_12_, v_a_15_);
v___x_20_ = lean_unbox_uint64(v___x_19_);
lean_dec_ref(v___x_19_);
return v___x_20_;
}
else
{
lean_dec(v_a_15_);
lean_dec_ref(v_regs_12_);
return v_v_14_;
}
}
else
{
lean_object* v___x_21_; uint64_t v___x_22_; 
v___x_21_ = lean_apply_1(v_regs_12_, v_a_15_);
v___x_22_ = lean_unbox_uint64(v___x_21_);
lean_dec_ref(v___x_21_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed(lean_object* v_regs_23_, lean_object* v_r_24_, lean_object* v_v_25_, lean_object* v_a_26_){
_start:
{
uint64_t v_v_boxed_27_; uint64_t v_res_28_; lean_object* v_r_29_; 
v_v_boxed_27_ = lean_unbox_uint64(v_v_25_);
lean_dec_ref(v_v_25_);
v_res_28_ = lp_rv2pancake_Rv2Pancake_Spec_writeReg(v_regs_23_, v_r_24_, v_v_boxed_27_, v_a_26_);
lean_dec(v_r_24_);
v_r_29_ = lean_box_uint64(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(uint8_t v_x_30_){
_start:
{
switch(v_x_30_)
{
case 0:
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(0u);
return v___x_31_;
}
case 1:
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(1u);
return v___x_32_;
}
case 2:
{
lean_object* v___x_33_; 
v___x_33_ = lean_unsigned_to_nat(2u);
return v___x_33_;
}
case 3:
{
lean_object* v___x_34_; 
v___x_34_ = lean_unsigned_to_nat(3u);
return v___x_34_;
}
case 4:
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(4u);
return v___x_35_;
}
case 5:
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(5u);
return v___x_36_;
}
case 6:
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(6u);
return v___x_37_;
}
case 7:
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(7u);
return v___x_38_;
}
case 8:
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(8u);
return v___x_39_;
}
default: 
{
lean_object* v___x_40_; 
v___x_40_ = lean_unsigned_to_nat(9u);
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx___boxed(lean_object* v_x_41_){
_start:
{
uint8_t v_x_boxed_42_; lean_object* v_res_43_; 
v_x_boxed_42_ = lean_unbox(v_x_41_);
v_res_43_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_x_boxed_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg(lean_object* v_k_44_){
_start:
{
lean_inc(v_k_44_);
return v_k_44_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg___boxed(lean_object* v_k_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg(v_k_45_);
lean_dec(v_k_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim(lean_object* v_motive_47_, lean_object* v_ctorIdx_48_, uint8_t v_t_49_, lean_object* v_h_50_, lean_object* v_k_51_){
_start:
{
lean_inc(v_k_51_);
return v_k_51_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___boxed(lean_object* v_motive_52_, lean_object* v_ctorIdx_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_k_56_){
_start:
{
uint8_t v_t_boxed_57_; lean_object* v_res_58_; 
v_t_boxed_57_ = lean_unbox(v_t_54_);
v_res_58_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim(v_motive_52_, v_ctorIdx_53_, v_t_boxed_57_, v_h_55_, v_k_56_);
lean_dec(v_k_56_);
lean_dec(v_ctorIdx_53_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg(lean_object* v_add_59_){
_start:
{
lean_inc(v_add_59_);
return v_add_59_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg___boxed(lean_object* v_add_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg(v_add_60_);
lean_dec(v_add_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim(lean_object* v_motive_62_, uint8_t v_t_63_, lean_object* v_h_64_, lean_object* v_add_65_){
_start:
{
lean_inc(v_add_65_);
return v_add_65_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___boxed(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_add_69_){
_start:
{
uint8_t v_t_boxed_70_; lean_object* v_res_71_; 
v_t_boxed_70_ = lean_unbox(v_t_67_);
v_res_71_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim(v_motive_66_, v_t_boxed_70_, v_h_68_, v_add_69_);
lean_dec(v_add_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg(lean_object* v_sub_72_){
_start:
{
lean_inc(v_sub_72_);
return v_sub_72_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg___boxed(lean_object* v_sub_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg(v_sub_73_);
lean_dec(v_sub_73_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim(lean_object* v_motive_75_, uint8_t v_t_76_, lean_object* v_h_77_, lean_object* v_sub_78_){
_start:
{
lean_inc(v_sub_78_);
return v_sub_78_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___boxed(lean_object* v_motive_79_, lean_object* v_t_80_, lean_object* v_h_81_, lean_object* v_sub_82_){
_start:
{
uint8_t v_t_boxed_83_; lean_object* v_res_84_; 
v_t_boxed_83_ = lean_unbox(v_t_80_);
v_res_84_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim(v_motive_79_, v_t_boxed_83_, v_h_81_, v_sub_82_);
lean_dec(v_sub_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg(lean_object* v_bitAnd_85_){
_start:
{
lean_inc(v_bitAnd_85_);
return v_bitAnd_85_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg___boxed(lean_object* v_bitAnd_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg(v_bitAnd_86_);
lean_dec(v_bitAnd_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim(lean_object* v_motive_88_, uint8_t v_t_89_, lean_object* v_h_90_, lean_object* v_bitAnd_91_){
_start:
{
lean_inc(v_bitAnd_91_);
return v_bitAnd_91_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___boxed(lean_object* v_motive_92_, lean_object* v_t_93_, lean_object* v_h_94_, lean_object* v_bitAnd_95_){
_start:
{
uint8_t v_t_boxed_96_; lean_object* v_res_97_; 
v_t_boxed_96_ = lean_unbox(v_t_93_);
v_res_97_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim(v_motive_92_, v_t_boxed_96_, v_h_94_, v_bitAnd_95_);
lean_dec(v_bitAnd_95_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg(lean_object* v_bitOr_98_){
_start:
{
lean_inc(v_bitOr_98_);
return v_bitOr_98_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg___boxed(lean_object* v_bitOr_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg(v_bitOr_99_);
lean_dec(v_bitOr_99_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim(lean_object* v_motive_101_, uint8_t v_t_102_, lean_object* v_h_103_, lean_object* v_bitOr_104_){
_start:
{
lean_inc(v_bitOr_104_);
return v_bitOr_104_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___boxed(lean_object* v_motive_105_, lean_object* v_t_106_, lean_object* v_h_107_, lean_object* v_bitOr_108_){
_start:
{
uint8_t v_t_boxed_109_; lean_object* v_res_110_; 
v_t_boxed_109_ = lean_unbox(v_t_106_);
v_res_110_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim(v_motive_105_, v_t_boxed_109_, v_h_107_, v_bitOr_108_);
lean_dec(v_bitOr_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg(lean_object* v_bitXor_111_){
_start:
{
lean_inc(v_bitXor_111_);
return v_bitXor_111_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg___boxed(lean_object* v_bitXor_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg(v_bitXor_112_);
lean_dec(v_bitXor_112_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim(lean_object* v_motive_114_, uint8_t v_t_115_, lean_object* v_h_116_, lean_object* v_bitXor_117_){
_start:
{
lean_inc(v_bitXor_117_);
return v_bitXor_117_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___boxed(lean_object* v_motive_118_, lean_object* v_t_119_, lean_object* v_h_120_, lean_object* v_bitXor_121_){
_start:
{
uint8_t v_t_boxed_122_; lean_object* v_res_123_; 
v_t_boxed_122_ = lean_unbox(v_t_119_);
v_res_123_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim(v_motive_118_, v_t_boxed_122_, v_h_120_, v_bitXor_121_);
lean_dec(v_bitXor_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg(lean_object* v_shl_124_){
_start:
{
lean_inc(v_shl_124_);
return v_shl_124_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg___boxed(lean_object* v_shl_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg(v_shl_125_);
lean_dec(v_shl_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim(lean_object* v_motive_127_, uint8_t v_t_128_, lean_object* v_h_129_, lean_object* v_shl_130_){
_start:
{
lean_inc(v_shl_130_);
return v_shl_130_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___boxed(lean_object* v_motive_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_shl_134_){
_start:
{
uint8_t v_t_boxed_135_; lean_object* v_res_136_; 
v_t_boxed_135_ = lean_unbox(v_t_132_);
v_res_136_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim(v_motive_131_, v_t_boxed_135_, v_h_133_, v_shl_134_);
lean_dec(v_shl_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg(lean_object* v_shr_137_){
_start:
{
lean_inc(v_shr_137_);
return v_shr_137_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg___boxed(lean_object* v_shr_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg(v_shr_138_);
lean_dec(v_shr_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim(lean_object* v_motive_140_, uint8_t v_t_141_, lean_object* v_h_142_, lean_object* v_shr_143_){
_start:
{
lean_inc(v_shr_143_);
return v_shr_143_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___boxed(lean_object* v_motive_144_, lean_object* v_t_145_, lean_object* v_h_146_, lean_object* v_shr_147_){
_start:
{
uint8_t v_t_boxed_148_; lean_object* v_res_149_; 
v_t_boxed_148_ = lean_unbox(v_t_145_);
v_res_149_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim(v_motive_144_, v_t_boxed_148_, v_h_146_, v_shr_147_);
lean_dec(v_shr_147_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg(lean_object* v_eqOp_150_){
_start:
{
lean_inc(v_eqOp_150_);
return v_eqOp_150_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg___boxed(lean_object* v_eqOp_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg(v_eqOp_151_);
lean_dec(v_eqOp_151_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim(lean_object* v_motive_153_, uint8_t v_t_154_, lean_object* v_h_155_, lean_object* v_eqOp_156_){
_start:
{
lean_inc(v_eqOp_156_);
return v_eqOp_156_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___boxed(lean_object* v_motive_157_, lean_object* v_t_158_, lean_object* v_h_159_, lean_object* v_eqOp_160_){
_start:
{
uint8_t v_t_boxed_161_; lean_object* v_res_162_; 
v_t_boxed_161_ = lean_unbox(v_t_158_);
v_res_162_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim(v_motive_157_, v_t_boxed_161_, v_h_159_, v_eqOp_160_);
lean_dec(v_eqOp_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg(lean_object* v_neOp_163_){
_start:
{
lean_inc(v_neOp_163_);
return v_neOp_163_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg___boxed(lean_object* v_neOp_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg(v_neOp_164_);
lean_dec(v_neOp_164_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim(lean_object* v_motive_166_, uint8_t v_t_167_, lean_object* v_h_168_, lean_object* v_neOp_169_){
_start:
{
lean_inc(v_neOp_169_);
return v_neOp_169_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___boxed(lean_object* v_motive_170_, lean_object* v_t_171_, lean_object* v_h_172_, lean_object* v_neOp_173_){
_start:
{
uint8_t v_t_boxed_174_; lean_object* v_res_175_; 
v_t_boxed_174_ = lean_unbox(v_t_171_);
v_res_175_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim(v_motive_170_, v_t_boxed_174_, v_h_172_, v_neOp_173_);
lean_dec(v_neOp_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg(lean_object* v_ltU_176_){
_start:
{
lean_inc(v_ltU_176_);
return v_ltU_176_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg___boxed(lean_object* v_ltU_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg(v_ltU_177_);
lean_dec(v_ltU_177_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim(lean_object* v_motive_179_, uint8_t v_t_180_, lean_object* v_h_181_, lean_object* v_ltU_182_){
_start:
{
lean_inc(v_ltU_182_);
return v_ltU_182_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___boxed(lean_object* v_motive_183_, lean_object* v_t_184_, lean_object* v_h_185_, lean_object* v_ltU_186_){
_start:
{
uint8_t v_t_boxed_187_; lean_object* v_res_188_; 
v_t_boxed_187_ = lean_unbox(v_t_184_);
v_res_188_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim(v_motive_183_, v_t_boxed_187_, v_h_185_, v_ltU_186_);
lean_dec(v_ltU_186_);
return v_res_188_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat(lean_object* v_n_189_){
_start:
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = lean_unsigned_to_nat(4u);
v___x_191_ = lean_nat_dec_le(v_n_189_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = lean_unsigned_to_nat(6u);
v___x_193_ = lean_nat_dec_le(v_n_189_, v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = lean_unsigned_to_nat(7u);
v___x_195_ = lean_nat_dec_le(v_n_189_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(8u);
v___x_197_ = lean_nat_dec_le(v_n_189_, v___x_196_);
if (v___x_197_ == 0)
{
uint8_t v___x_198_; 
v___x_198_ = 9;
return v___x_198_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = 8;
return v___x_199_;
}
}
else
{
uint8_t v___x_200_; 
v___x_200_ = 7;
return v___x_200_;
}
}
else
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = lean_unsigned_to_nat(5u);
v___x_202_ = lean_nat_dec_le(v_n_189_, v___x_201_);
if (v___x_202_ == 0)
{
uint8_t v___x_203_; 
v___x_203_ = 6;
return v___x_203_;
}
else
{
uint8_t v___x_204_; 
v___x_204_ = 5;
return v___x_204_;
}
}
}
else
{
lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_205_ = lean_unsigned_to_nat(1u);
v___x_206_ = lean_nat_dec_le(v_n_189_, v___x_205_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(2u);
v___x_208_ = lean_nat_dec_le(v_n_189_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_unsigned_to_nat(3u);
v___x_210_ = lean_nat_dec_le(v_n_189_, v___x_209_);
if (v___x_210_ == 0)
{
uint8_t v___x_211_; 
v___x_211_ = 4;
return v___x_211_;
}
else
{
uint8_t v___x_212_; 
v___x_212_ = 3;
return v___x_212_;
}
}
else
{
uint8_t v___x_213_; 
v___x_213_ = 2;
return v___x_213_;
}
}
else
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_nat_dec_le(v_n_189_, v___x_214_);
if (v___x_215_ == 0)
{
uint8_t v___x_216_; 
v___x_216_ = 1;
return v___x_216_;
}
else
{
uint8_t v___x_217_; 
v___x_217_ = 0;
return v___x_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat___boxed(lean_object* v_n_218_){
_start:
{
uint8_t v_res_219_; lean_object* v_r_220_; 
v_res_219_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat(v_n_218_);
lean_dec(v_n_218_);
v_r_220_ = lean_box(v_res_219_);
return v_r_220_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp(uint8_t v_x_221_, uint8_t v_y_222_){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_223_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_x_221_);
v___x_224_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_y_222_);
v___x_225_ = lean_nat_dec_eq(v___x_223_, v___x_224_);
lean_dec(v___x_224_);
lean_dec(v___x_223_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp___boxed(lean_object* v_x_226_, lean_object* v_y_227_){
_start:
{
uint8_t v_x_20__boxed_228_; uint8_t v_y_21__boxed_229_; uint8_t v_res_230_; lean_object* v_r_231_; 
v_x_20__boxed_228_ = lean_unbox(v_x_226_);
v_y_21__boxed_229_ = lean_unbox(v_y_227_);
v_res_230_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp(v_x_20__boxed_228_, v_y_21__boxed_229_);
v_r_231_ = lean_box(v_res_230_);
return v_r_231_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(2u);
v___x_263_ = lean_nat_to_int(v___x_262_);
return v___x_263_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_unsigned_to_nat(1u);
v___x_265_ = lean_nat_to_int(v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(uint8_t v_x_266_, lean_object* v_prec_267_){
_start:
{
lean_object* v___y_269_; lean_object* v___y_276_; lean_object* v___y_283_; lean_object* v___y_290_; lean_object* v___y_297_; lean_object* v___y_304_; lean_object* v___y_311_; lean_object* v___y_318_; lean_object* v___y_325_; lean_object* v___y_332_; 
switch(v_x_266_)
{
case 0:
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = lean_unsigned_to_nat(1024u);
v___x_339_ = lean_nat_dec_le(v___x_338_, v_prec_267_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_269_ = v___x_340_;
goto v___jp_268_;
}
else
{
lean_object* v___x_341_; 
v___x_341_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_269_ = v___x_341_;
goto v___jp_268_;
}
}
case 1:
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(1024u);
v___x_343_ = lean_nat_dec_le(v___x_342_, v_prec_267_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_276_ = v___x_344_;
goto v___jp_275_;
}
else
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_276_ = v___x_345_;
goto v___jp_275_;
}
}
case 2:
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(1024u);
v___x_347_ = lean_nat_dec_le(v___x_346_, v_prec_267_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_283_ = v___x_348_;
goto v___jp_282_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_283_ = v___x_349_;
goto v___jp_282_;
}
}
case 3:
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(1024u);
v___x_351_ = lean_nat_dec_le(v___x_350_, v_prec_267_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
v___x_352_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_290_ = v___x_352_;
goto v___jp_289_;
}
else
{
lean_object* v___x_353_; 
v___x_353_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_290_ = v___x_353_;
goto v___jp_289_;
}
}
case 4:
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(1024u);
v___x_355_ = lean_nat_dec_le(v___x_354_, v_prec_267_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; 
v___x_356_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_297_ = v___x_356_;
goto v___jp_296_;
}
else
{
lean_object* v___x_357_; 
v___x_357_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_297_ = v___x_357_;
goto v___jp_296_;
}
}
case 5:
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(1024u);
v___x_359_ = lean_nat_dec_le(v___x_358_, v_prec_267_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
v___x_360_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_304_ = v___x_360_;
goto v___jp_303_;
}
else
{
lean_object* v___x_361_; 
v___x_361_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_304_ = v___x_361_;
goto v___jp_303_;
}
}
case 6:
{
lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_362_ = lean_unsigned_to_nat(1024u);
v___x_363_ = lean_nat_dec_le(v___x_362_, v_prec_267_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
v___x_364_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_311_ = v___x_364_;
goto v___jp_310_;
}
else
{
lean_object* v___x_365_; 
v___x_365_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_311_ = v___x_365_;
goto v___jp_310_;
}
}
case 7:
{
lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_366_ = lean_unsigned_to_nat(1024u);
v___x_367_ = lean_nat_dec_le(v___x_366_, v_prec_267_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
v___x_368_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_318_ = v___x_368_;
goto v___jp_317_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_318_ = v___x_369_;
goto v___jp_317_;
}
}
case 8:
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_unsigned_to_nat(1024u);
v___x_371_ = lean_nat_dec_le(v___x_370_, v_prec_267_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; 
v___x_372_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_325_ = v___x_372_;
goto v___jp_324_;
}
else
{
lean_object* v___x_373_; 
v___x_373_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_325_ = v___x_373_;
goto v___jp_324_;
}
}
default: 
{
lean_object* v___x_374_; uint8_t v___x_375_; 
v___x_374_ = lean_unsigned_to_nat(1024u);
v___x_375_ = lean_nat_dec_le(v___x_374_, v_prec_267_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; 
v___x_376_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_332_ = v___x_376_;
goto v___jp_331_;
}
else
{
lean_object* v___x_377_; 
v___x_377_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_332_ = v___x_377_;
goto v___jp_331_;
}
}
}
v___jp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_270_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__1));
lean_inc(v___y_269_);
v___x_271_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_271_, 0, v___y_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = 0;
v___x_273_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_273_, 0, v___x_271_);
lean_ctor_set_uint8(v___x_273_, sizeof(void*)*1, v___x_272_);
v___x_274_ = l_Repr_addAppParen(v___x_273_, v_prec_267_);
return v___x_274_;
}
v___jp_275_:
{
lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_277_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__3));
lean_inc(v___y_276_);
v___x_278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_278_, 0, v___y_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = 0;
v___x_280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set_uint8(v___x_280_, sizeof(void*)*1, v___x_279_);
v___x_281_ = l_Repr_addAppParen(v___x_280_, v_prec_267_);
return v___x_281_;
}
v___jp_282_:
{
lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_284_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5));
lean_inc(v___y_283_);
v___x_285_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_285_, 0, v___y_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = 0;
v___x_287_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_287_, 0, v___x_285_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*1, v___x_286_);
v___x_288_ = l_Repr_addAppParen(v___x_287_, v_prec_267_);
return v___x_288_;
}
v___jp_289_:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_291_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7));
lean_inc(v___y_290_);
v___x_292_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_292_, 0, v___y_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = 0;
v___x_294_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_294_, 0, v___x_292_);
lean_ctor_set_uint8(v___x_294_, sizeof(void*)*1, v___x_293_);
v___x_295_ = l_Repr_addAppParen(v___x_294_, v_prec_267_);
return v___x_295_;
}
v___jp_296_:
{
lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_298_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9));
lean_inc(v___y_297_);
v___x_299_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_299_, 0, v___y_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = 0;
v___x_301_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set_uint8(v___x_301_, sizeof(void*)*1, v___x_300_);
v___x_302_ = l_Repr_addAppParen(v___x_301_, v_prec_267_);
return v___x_302_;
}
v___jp_303_:
{
lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_305_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11));
lean_inc(v___y_304_);
v___x_306_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_306_, 0, v___y_304_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
v___x_307_ = 0;
v___x_308_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_308_, 0, v___x_306_);
lean_ctor_set_uint8(v___x_308_, sizeof(void*)*1, v___x_307_);
v___x_309_ = l_Repr_addAppParen(v___x_308_, v_prec_267_);
return v___x_309_;
}
v___jp_310_:
{
lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_312_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13));
lean_inc(v___y_311_);
v___x_313_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_313_, 0, v___y_311_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = 0;
v___x_315_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_315_, 0, v___x_313_);
lean_ctor_set_uint8(v___x_315_, sizeof(void*)*1, v___x_314_);
v___x_316_ = l_Repr_addAppParen(v___x_315_, v_prec_267_);
return v___x_316_;
}
v___jp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_319_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15));
lean_inc(v___y_318_);
v___x_320_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_320_, 0, v___y_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = 0;
v___x_322_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*1, v___x_321_);
v___x_323_ = l_Repr_addAppParen(v___x_322_, v_prec_267_);
return v___x_323_;
}
v___jp_324_:
{
lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_326_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17));
lean_inc(v___y_325_);
v___x_327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_327_, 0, v___y_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = 0;
v___x_329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_329_, 0, v___x_327_);
lean_ctor_set_uint8(v___x_329_, sizeof(void*)*1, v___x_328_);
v___x_330_ = l_Repr_addAppParen(v___x_329_, v_prec_267_);
return v___x_330_;
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_333_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19));
lean_inc(v___y_332_);
v___x_334_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_334_, 0, v___y_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = 0;
v___x_336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*1, v___x_335_);
v___x_337_ = l_Repr_addAppParen(v___x_336_, v_prec_267_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___boxed(lean_object* v_x_378_, lean_object* v_prec_379_){
_start:
{
uint8_t v_x_549__boxed_380_; lean_object* v_res_381_; 
v_x_549__boxed_380_ = lean_unbox(v_x_378_);
v_res_381_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(v_x_549__boxed_380_, v_prec_379_);
lean_dec(v_prec_379_);
return v_res_381_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(uint8_t v_op_384_, uint64_t v_a_385_, uint64_t v_b_386_){
_start:
{
switch(v_op_384_)
{
case 0:
{
uint64_t v___x_387_; 
v___x_387_ = lean_uint64_add(v_a_385_, v_b_386_);
return v___x_387_;
}
case 1:
{
uint64_t v___x_388_; 
v___x_388_ = lean_uint64_sub(v_a_385_, v_b_386_);
return v___x_388_;
}
case 2:
{
uint64_t v___x_389_; 
v___x_389_ = lean_uint64_land(v_a_385_, v_b_386_);
return v___x_389_;
}
case 3:
{
uint64_t v___x_390_; 
v___x_390_ = lean_uint64_lor(v_a_385_, v_b_386_);
return v___x_390_;
}
case 4:
{
uint64_t v___x_391_; 
v___x_391_ = lean_uint64_xor(v_a_385_, v_b_386_);
return v___x_391_;
}
case 5:
{
uint64_t v___x_392_; uint64_t v___x_393_; uint64_t v___x_394_; 
v___x_392_ = 64ULL;
v___x_393_ = lean_uint64_mod(v_b_386_, v___x_392_);
v___x_394_ = lean_uint64_shift_left(v_a_385_, v___x_393_);
return v___x_394_;
}
case 6:
{
uint64_t v___x_395_; uint64_t v___x_396_; uint64_t v___x_397_; 
v___x_395_ = 64ULL;
v___x_396_ = lean_uint64_mod(v_b_386_, v___x_395_);
v___x_397_ = lean_uint64_shift_right(v_a_385_, v___x_396_);
return v___x_397_;
}
case 7:
{
uint8_t v___x_398_; 
v___x_398_ = lean_uint64_dec_eq(v_a_385_, v_b_386_);
if (v___x_398_ == 0)
{
uint64_t v___x_399_; 
v___x_399_ = 0ULL;
return v___x_399_;
}
else
{
uint64_t v___x_400_; 
v___x_400_ = 1ULL;
return v___x_400_;
}
}
case 8:
{
uint8_t v___x_401_; 
v___x_401_ = lean_uint64_dec_eq(v_a_385_, v_b_386_);
if (v___x_401_ == 0)
{
uint64_t v___x_402_; 
v___x_402_ = 1ULL;
return v___x_402_;
}
else
{
uint64_t v___x_403_; 
v___x_403_ = 0ULL;
return v___x_403_;
}
}
default: 
{
uint8_t v___x_404_; 
v___x_404_ = lean_uint64_dec_lt(v_a_385_, v_b_386_);
if (v___x_404_ == 0)
{
uint64_t v___x_405_; 
v___x_405_ = 0ULL;
return v___x_405_;
}
else
{
uint64_t v___x_406_; 
v___x_406_ = 1ULL;
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalBinOp___boxed(lean_object* v_op_407_, lean_object* v_a_408_, lean_object* v_b_409_){
_start:
{
uint8_t v_op_boxed_410_; uint64_t v_a_boxed_411_; uint64_t v_b_boxed_412_; uint64_t v_res_413_; lean_object* v_r_414_; 
v_op_boxed_410_ = lean_unbox(v_op_407_);
v_a_boxed_411_ = lean_unbox_uint64(v_a_408_);
lean_dec_ref(v_a_408_);
v_b_boxed_412_ = lean_unbox_uint64(v_b_409_);
lean_dec_ref(v_b_409_);
v_res_413_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_boxed_410_, v_a_boxed_411_, v_b_boxed_412_);
v_r_414_ = lean_box_uint64(v_res_413_);
return v_r_414_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(uint8_t v_x_415_){
_start:
{
switch(v_x_415_)
{
case 0:
{
lean_object* v___x_416_; 
v___x_416_ = lean_unsigned_to_nat(0u);
return v___x_416_;
}
case 1:
{
lean_object* v___x_417_; 
v___x_417_ = lean_unsigned_to_nat(1u);
return v___x_417_;
}
case 2:
{
lean_object* v___x_418_; 
v___x_418_ = lean_unsigned_to_nat(2u);
return v___x_418_;
}
default: 
{
lean_object* v___x_419_; 
v___x_419_ = lean_unsigned_to_nat(3u);
return v___x_419_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx___boxed(lean_object* v_x_420_){
_start:
{
uint8_t v_x_boxed_421_; lean_object* v_res_422_; 
v_x_boxed_421_ = lean_unbox(v_x_420_);
v_res_422_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_x_boxed_421_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg(lean_object* v_k_423_){
_start:
{
lean_inc(v_k_423_);
return v_k_423_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg___boxed(lean_object* v_k_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg(v_k_424_);
lean_dec(v_k_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim(lean_object* v_motive_426_, lean_object* v_ctorIdx_427_, uint8_t v_t_428_, lean_object* v_h_429_, lean_object* v_k_430_){
_start:
{
lean_inc(v_k_430_);
return v_k_430_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___boxed(lean_object* v_motive_431_, lean_object* v_ctorIdx_432_, lean_object* v_t_433_, lean_object* v_h_434_, lean_object* v_k_435_){
_start:
{
uint8_t v_t_boxed_436_; lean_object* v_res_437_; 
v_t_boxed_436_ = lean_unbox(v_t_433_);
v_res_437_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim(v_motive_431_, v_ctorIdx_432_, v_t_boxed_436_, v_h_434_, v_k_435_);
lean_dec(v_k_435_);
lean_dec(v_ctorIdx_432_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg(lean_object* v_beq_438_){
_start:
{
lean_inc(v_beq_438_);
return v_beq_438_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg___boxed(lean_object* v_beq_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg(v_beq_439_);
lean_dec(v_beq_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim(lean_object* v_motive_441_, uint8_t v_t_442_, lean_object* v_h_443_, lean_object* v_beq_444_){
_start:
{
lean_inc(v_beq_444_);
return v_beq_444_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___boxed(lean_object* v_motive_445_, lean_object* v_t_446_, lean_object* v_h_447_, lean_object* v_beq_448_){
_start:
{
uint8_t v_t_boxed_449_; lean_object* v_res_450_; 
v_t_boxed_449_ = lean_unbox(v_t_446_);
v_res_450_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim(v_motive_445_, v_t_boxed_449_, v_h_447_, v_beq_448_);
lean_dec(v_beq_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg(lean_object* v_bne_451_){
_start:
{
lean_inc(v_bne_451_);
return v_bne_451_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg___boxed(lean_object* v_bne_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg(v_bne_452_);
lean_dec(v_bne_452_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim(lean_object* v_motive_454_, uint8_t v_t_455_, lean_object* v_h_456_, lean_object* v_bne_457_){
_start:
{
lean_inc(v_bne_457_);
return v_bne_457_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___boxed(lean_object* v_motive_458_, lean_object* v_t_459_, lean_object* v_h_460_, lean_object* v_bne_461_){
_start:
{
uint8_t v_t_boxed_462_; lean_object* v_res_463_; 
v_t_boxed_462_ = lean_unbox(v_t_459_);
v_res_463_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim(v_motive_458_, v_t_boxed_462_, v_h_460_, v_bne_461_);
lean_dec(v_bne_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg(lean_object* v_bltu_464_){
_start:
{
lean_inc(v_bltu_464_);
return v_bltu_464_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg___boxed(lean_object* v_bltu_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg(v_bltu_465_);
lean_dec(v_bltu_465_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim(lean_object* v_motive_467_, uint8_t v_t_468_, lean_object* v_h_469_, lean_object* v_bltu_470_){
_start:
{
lean_inc(v_bltu_470_);
return v_bltu_470_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___boxed(lean_object* v_motive_471_, lean_object* v_t_472_, lean_object* v_h_473_, lean_object* v_bltu_474_){
_start:
{
uint8_t v_t_boxed_475_; lean_object* v_res_476_; 
v_t_boxed_475_ = lean_unbox(v_t_472_);
v_res_476_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim(v_motive_471_, v_t_boxed_475_, v_h_473_, v_bltu_474_);
lean_dec(v_bltu_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg(lean_object* v_bgeu_477_){
_start:
{
lean_inc(v_bgeu_477_);
return v_bgeu_477_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg___boxed(lean_object* v_bgeu_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg(v_bgeu_478_);
lean_dec(v_bgeu_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim(lean_object* v_motive_480_, uint8_t v_t_481_, lean_object* v_h_482_, lean_object* v_bgeu_483_){
_start:
{
lean_inc(v_bgeu_483_);
return v_bgeu_483_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___boxed(lean_object* v_motive_484_, lean_object* v_t_485_, lean_object* v_h_486_, lean_object* v_bgeu_487_){
_start:
{
uint8_t v_t_boxed_488_; lean_object* v_res_489_; 
v_t_boxed_488_ = lean_unbox(v_t_485_);
v_res_489_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim(v_motive_484_, v_t_boxed_488_, v_h_486_, v_bgeu_487_);
lean_dec(v_bgeu_487_);
return v_res_489_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat(lean_object* v_n_490_){
_start:
{
lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_491_ = lean_unsigned_to_nat(1u);
v___x_492_ = lean_nat_dec_le(v_n_490_, v___x_491_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; uint8_t v___x_494_; 
v___x_493_ = lean_unsigned_to_nat(2u);
v___x_494_ = lean_nat_dec_le(v_n_490_, v___x_493_);
if (v___x_494_ == 0)
{
uint8_t v___x_495_; 
v___x_495_ = 3;
return v___x_495_;
}
else
{
uint8_t v___x_496_; 
v___x_496_ = 2;
return v___x_496_;
}
}
else
{
lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_497_ = lean_unsigned_to_nat(0u);
v___x_498_ = lean_nat_dec_le(v_n_490_, v___x_497_);
if (v___x_498_ == 0)
{
uint8_t v___x_499_; 
v___x_499_ = 1;
return v___x_499_;
}
else
{
uint8_t v___x_500_; 
v___x_500_ = 0;
return v___x_500_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat___boxed(lean_object* v_n_501_){
_start:
{
uint8_t v_res_502_; lean_object* v_r_503_; 
v_res_502_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat(v_n_501_);
lean_dec(v_n_501_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond(uint8_t v_x_504_, uint8_t v_y_505_){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_506_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_x_504_);
v___x_507_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_y_505_);
v___x_508_ = lean_nat_dec_eq(v___x_506_, v___x_507_);
lean_dec(v___x_507_);
lean_dec(v___x_506_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond___boxed(lean_object* v_x_509_, lean_object* v_y_510_){
_start:
{
uint8_t v_x_20__boxed_511_; uint8_t v_y_21__boxed_512_; uint8_t v_res_513_; lean_object* v_r_514_; 
v_x_20__boxed_511_ = lean_unbox(v_x_509_);
v_y_21__boxed_512_ = lean_unbox(v_y_510_);
v_res_513_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond(v_x_20__boxed_511_, v_y_21__boxed_512_);
v_r_514_ = lean_box(v_res_513_);
return v_r_514_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr(uint8_t v_x_527_, lean_object* v_prec_528_){
_start:
{
lean_object* v___y_530_; lean_object* v___y_537_; lean_object* v___y_544_; lean_object* v___y_551_; 
switch(v_x_527_)
{
case 0:
{
lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_557_ = lean_unsigned_to_nat(1024u);
v___x_558_ = lean_nat_dec_le(v___x_557_, v_prec_528_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_530_ = v___x_559_;
goto v___jp_529_;
}
else
{
lean_object* v___x_560_; 
v___x_560_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_530_ = v___x_560_;
goto v___jp_529_;
}
}
case 1:
{
lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_561_ = lean_unsigned_to_nat(1024u);
v___x_562_ = lean_nat_dec_le(v___x_561_, v_prec_528_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_537_ = v___x_563_;
goto v___jp_536_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_537_ = v___x_564_;
goto v___jp_536_;
}
}
case 2:
{
lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_565_ = lean_unsigned_to_nat(1024u);
v___x_566_ = lean_nat_dec_le(v___x_565_, v_prec_528_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; 
v___x_567_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_544_ = v___x_567_;
goto v___jp_543_;
}
else
{
lean_object* v___x_568_; 
v___x_568_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_544_ = v___x_568_;
goto v___jp_543_;
}
}
default: 
{
lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_569_ = lean_unsigned_to_nat(1024u);
v___x_570_ = lean_nat_dec_le(v___x_569_, v_prec_528_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_551_ = v___x_571_;
goto v___jp_550_;
}
else
{
lean_object* v___x_572_; 
v___x_572_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_551_ = v___x_572_;
goto v___jp_550_;
}
}
}
v___jp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_531_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__1));
lean_inc(v___y_530_);
v___x_532_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_532_, 0, v___y_530_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = 0;
v___x_534_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set_uint8(v___x_534_, sizeof(void*)*1, v___x_533_);
v___x_535_ = l_Repr_addAppParen(v___x_534_, v_prec_528_);
return v___x_535_;
}
v___jp_536_:
{
lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_538_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__3));
lean_inc(v___y_537_);
v___x_539_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_539_, 0, v___y_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = 0;
v___x_541_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_541_, 0, v___x_539_);
lean_ctor_set_uint8(v___x_541_, sizeof(void*)*1, v___x_540_);
v___x_542_ = l_Repr_addAppParen(v___x_541_, v_prec_528_);
return v___x_542_;
}
v___jp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; uint8_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_545_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__5));
lean_inc(v___y_544_);
v___x_546_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_546_, 0, v___y_544_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
v___x_547_ = 0;
v___x_548_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_548_, 0, v___x_546_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*1, v___x_547_);
v___x_549_ = l_Repr_addAppParen(v___x_548_, v_prec_528_);
return v___x_549_;
}
v___jp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_552_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__7));
lean_inc(v___y_551_);
v___x_553_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_553_, 0, v___y_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = 0;
v___x_555_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_555_, 0, v___x_553_);
lean_ctor_set_uint8(v___x_555_, sizeof(void*)*1, v___x_554_);
v___x_556_ = l_Repr_addAppParen(v___x_555_, v_prec_528_);
return v___x_556_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___boxed(lean_object* v_x_573_, lean_object* v_prec_574_){
_start:
{
uint8_t v_x_221__boxed_575_; lean_object* v_res_576_; 
v_x_221__boxed_575_ = lean_unbox(v_x_573_);
v_res_576_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr(v_x_221__boxed_575_, v_prec_574_);
lean_dec(v_prec_574_);
return v_res_576_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond(uint8_t v_c_579_, uint64_t v_a_580_, uint64_t v_b_581_){
_start:
{
switch(v_c_579_)
{
case 0:
{
uint8_t v___x_582_; 
v___x_582_ = lean_uint64_dec_eq(v_a_580_, v_b_581_);
return v___x_582_;
}
case 1:
{
uint8_t v___x_583_; 
v___x_583_ = lean_uint64_dec_eq(v_a_580_, v_b_581_);
if (v___x_583_ == 0)
{
uint8_t v___x_584_; 
v___x_584_ = 1;
return v___x_584_;
}
else
{
uint8_t v___x_585_; 
v___x_585_ = 0;
return v___x_585_;
}
}
case 2:
{
uint8_t v___x_586_; 
v___x_586_ = lean_uint64_dec_lt(v_a_580_, v_b_581_);
return v___x_586_;
}
default: 
{
uint8_t v___x_587_; 
v___x_587_ = lean_uint64_dec_lt(v_a_580_, v_b_581_);
if (v___x_587_ == 0)
{
uint8_t v___x_588_; 
v___x_588_ = 1;
return v___x_588_;
}
else
{
uint8_t v___x_589_; 
v___x_589_ = 0;
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond___boxed(lean_object* v_c_590_, lean_object* v_a_591_, lean_object* v_b_592_){
_start:
{
uint8_t v_c_boxed_593_; uint64_t v_a_boxed_594_; uint64_t v_b_boxed_595_; uint8_t v_res_596_; lean_object* v_r_597_; 
v_c_boxed_593_ = lean_unbox(v_c_590_);
v_a_boxed_594_ = lean_unbox_uint64(v_a_591_);
lean_dec_ref(v_a_591_);
v_b_boxed_595_ = lean_unbox_uint64(v_b_592_);
lean_dec_ref(v_b_592_);
v_res_596_ = lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond(v_c_boxed_593_, v_a_boxed_594_, v_b_boxed_595_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(lean_object* v_x_598_){
_start:
{
switch(lean_obj_tag(v_x_598_))
{
case 0:
{
lean_object* v___x_599_; 
v___x_599_ = lean_unsigned_to_nat(0u);
return v___x_599_;
}
case 1:
{
lean_object* v___x_600_; 
v___x_600_ = lean_unsigned_to_nat(1u);
return v___x_600_;
}
case 2:
{
lean_object* v___x_601_; 
v___x_601_ = lean_unsigned_to_nat(2u);
return v___x_601_;
}
case 3:
{
lean_object* v___x_602_; 
v___x_602_ = lean_unsigned_to_nat(3u);
return v___x_602_;
}
case 4:
{
lean_object* v___x_603_; 
v___x_603_ = lean_unsigned_to_nat(4u);
return v___x_603_;
}
case 5:
{
lean_object* v___x_604_; 
v___x_604_ = lean_unsigned_to_nat(5u);
return v___x_604_;
}
case 6:
{
lean_object* v___x_605_; 
v___x_605_ = lean_unsigned_to_nat(6u);
return v___x_605_;
}
case 7:
{
lean_object* v___x_606_; 
v___x_606_ = lean_unsigned_to_nat(7u);
return v___x_606_;
}
case 8:
{
lean_object* v___x_607_; 
v___x_607_ = lean_unsigned_to_nat(8u);
return v___x_607_;
}
default: 
{
lean_object* v___x_608_; 
v___x_608_ = lean_unsigned_to_nat(9u);
return v___x_608_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx___boxed(lean_object* v_x_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(v_x_609_);
lean_dec(v_x_609_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(lean_object* v_t_611_, lean_object* v_k_612_){
_start:
{
switch(lean_obj_tag(v_t_611_))
{
case 0:
{
uint8_t v_op_613_; lean_object* v_rd_614_; lean_object* v_rs1_615_; uint64_t v_imm_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_op_613_ = lean_ctor_get_uint8(v_t_611_, sizeof(void*)*2 + 8);
v_rd_614_ = lean_ctor_get(v_t_611_, 0);
lean_inc(v_rd_614_);
v_rs1_615_ = lean_ctor_get(v_t_611_, 1);
lean_inc(v_rs1_615_);
v_imm_616_ = lean_ctor_get_uint64(v_t_611_, sizeof(void*)*2);
lean_dec_ref_known(v_t_611_, 2);
v___x_617_ = lean_box(v_op_613_);
v___x_618_ = lean_box_uint64(v_imm_616_);
v___x_619_ = lean_apply_4(v_k_612_, v___x_617_, v_rd_614_, v_rs1_615_, v___x_618_);
return v___x_619_;
}
case 1:
{
uint8_t v_op_620_; lean_object* v_rd_621_; lean_object* v_rs1_622_; lean_object* v_rs2_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v_op_620_ = lean_ctor_get_uint8(v_t_611_, sizeof(void*)*3);
v_rd_621_ = lean_ctor_get(v_t_611_, 0);
lean_inc(v_rd_621_);
v_rs1_622_ = lean_ctor_get(v_t_611_, 1);
lean_inc(v_rs1_622_);
v_rs2_623_ = lean_ctor_get(v_t_611_, 2);
lean_inc(v_rs2_623_);
lean_dec_ref_known(v_t_611_, 3);
v___x_624_ = lean_box(v_op_620_);
v___x_625_ = lean_apply_4(v_k_612_, v___x_624_, v_rd_621_, v_rs1_622_, v_rs2_623_);
return v___x_625_;
}
case 4:
{
lean_object* v_rd_626_; lean_object* v_rs1_627_; uint64_t v_offset_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v_rd_626_ = lean_ctor_get(v_t_611_, 0);
lean_inc(v_rd_626_);
v_rs1_627_ = lean_ctor_get(v_t_611_, 1);
lean_inc(v_rs1_627_);
v_offset_628_ = lean_ctor_get_uint64(v_t_611_, sizeof(void*)*2);
lean_dec_ref_known(v_t_611_, 2);
v___x_629_ = lean_box_uint64(v_offset_628_);
v___x_630_ = lean_apply_3(v_k_612_, v_rd_626_, v_rs1_627_, v___x_629_);
return v___x_630_;
}
case 5:
{
lean_object* v_rs1_631_; lean_object* v_rs2_632_; uint64_t v_offset_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_rs1_631_ = lean_ctor_get(v_t_611_, 0);
lean_inc(v_rs1_631_);
v_rs2_632_ = lean_ctor_get(v_t_611_, 1);
lean_inc(v_rs2_632_);
v_offset_633_ = lean_ctor_get_uint64(v_t_611_, sizeof(void*)*2);
lean_dec_ref_known(v_t_611_, 2);
v___x_634_ = lean_box_uint64(v_offset_633_);
v___x_635_ = lean_apply_3(v_k_612_, v_rs1_631_, v_rs2_632_, v___x_634_);
return v___x_635_;
}
case 6:
{
uint8_t v_cond_636_; lean_object* v_rs1_637_; lean_object* v_rs2_638_; uint64_t v_targetPc_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v_cond_636_ = lean_ctor_get_uint8(v_t_611_, sizeof(void*)*2 + 8);
v_rs1_637_ = lean_ctor_get(v_t_611_, 0);
lean_inc(v_rs1_637_);
v_rs2_638_ = lean_ctor_get(v_t_611_, 1);
lean_inc(v_rs2_638_);
v_targetPc_639_ = lean_ctor_get_uint64(v_t_611_, sizeof(void*)*2);
lean_dec_ref_known(v_t_611_, 2);
v___x_640_ = lean_box(v_cond_636_);
v___x_641_ = lean_box_uint64(v_targetPc_639_);
v___x_642_ = lean_apply_4(v_k_612_, v___x_640_, v_rs1_637_, v_rs2_638_, v___x_641_);
return v___x_642_;
}
case 8:
{
lean_object* v_rd_643_; lean_object* v_rs1_644_; uint64_t v_offset_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_rd_643_ = lean_ctor_get(v_t_611_, 0);
lean_inc(v_rd_643_);
v_rs1_644_ = lean_ctor_get(v_t_611_, 1);
lean_inc(v_rs1_644_);
v_offset_645_ = lean_ctor_get_uint64(v_t_611_, sizeof(void*)*2);
lean_dec_ref_known(v_t_611_, 2);
v___x_646_ = lean_box_uint64(v_offset_645_);
v___x_647_ = lean_apply_3(v_k_612_, v_rd_643_, v_rs1_644_, v___x_646_);
return v___x_647_;
}
case 9:
{
return v_k_612_;
}
default: 
{
lean_object* v_rd_648_; uint64_t v_imm20_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_rd_648_ = lean_ctor_get(v_t_611_, 0);
lean_inc(v_rd_648_);
v_imm20_649_ = lean_ctor_get_uint64(v_t_611_, sizeof(void*)*1);
lean_dec(v_t_611_);
v___x_650_ = lean_box_uint64(v_imm20_649_);
v___x_651_ = lean_apply_2(v_k_612_, v_rd_648_, v___x_650_);
return v___x_651_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim(lean_object* v_motive_652_, lean_object* v_ctorIdx_653_, lean_object* v_t_654_, lean_object* v_h_655_, lean_object* v_k_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_654_, v_k_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___boxed(lean_object* v_motive_658_, lean_object* v_ctorIdx_659_, lean_object* v_t_660_, lean_object* v_h_661_, lean_object* v_k_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim(v_motive_658_, v_ctorIdx_659_, v_t_660_, v_h_661_, v_k_662_);
lean_dec(v_ctorIdx_659_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opImm_elim___redArg(lean_object* v_t_664_, lean_object* v_opImm_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_664_, v_opImm_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opImm_elim(lean_object* v_motive_667_, lean_object* v_t_668_, lean_object* v_h_669_, lean_object* v_opImm_670_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_668_, v_opImm_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opReg_elim___redArg(lean_object* v_t_672_, lean_object* v_opReg_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_672_, v_opReg_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opReg_elim(lean_object* v_motive_675_, lean_object* v_t_676_, lean_object* v_h_677_, lean_object* v_opReg_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_676_, v_opReg_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_lui_elim___redArg(lean_object* v_t_680_, lean_object* v_lui_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_680_, v_lui_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_lui_elim(lean_object* v_motive_683_, lean_object* v_t_684_, lean_object* v_h_685_, lean_object* v_lui_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_684_, v_lui_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_auipc_elim___redArg(lean_object* v_t_688_, lean_object* v_auipc_689_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_688_, v_auipc_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_auipc_elim(lean_object* v_motive_691_, lean_object* v_t_692_, lean_object* v_h_693_, lean_object* v_auipc_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_692_, v_auipc_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ld_elim___redArg(lean_object* v_t_696_, lean_object* v_ld_697_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_696_, v_ld_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ld_elim(lean_object* v_motive_699_, lean_object* v_t_700_, lean_object* v_h_701_, lean_object* v_ld_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_700_, v_ld_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_sd_elim___redArg(lean_object* v_t_704_, lean_object* v_sd_705_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_704_, v_sd_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_sd_elim(lean_object* v_motive_707_, lean_object* v_t_708_, lean_object* v_h_709_, lean_object* v_sd_710_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_708_, v_sd_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_branch_elim___redArg(lean_object* v_t_712_, lean_object* v_branch_713_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_712_, v_branch_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_branch_elim(lean_object* v_motive_715_, lean_object* v_t_716_, lean_object* v_h_717_, lean_object* v_branch_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_716_, v_branch_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jal_elim___redArg(lean_object* v_t_720_, lean_object* v_jal_721_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_720_, v_jal_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jal_elim(lean_object* v_motive_723_, lean_object* v_t_724_, lean_object* v_h_725_, lean_object* v_jal_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_724_, v_jal_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jalr_elim___redArg(lean_object* v_t_728_, lean_object* v_jalr_729_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_728_, v_jalr_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jalr_elim(lean_object* v_motive_731_, lean_object* v_t_732_, lean_object* v_h_733_, lean_object* v_jalr_734_){
_start:
{
lean_object* v___x_735_; 
v___x_735_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_732_, v_jalr_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ecall_elim___redArg(lean_object* v_t_736_, lean_object* v_ecall_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_736_, v_ecall_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ecall_elim(lean_object* v_motive_739_, lean_object* v_t_740_, lean_object* v_h_741_, lean_object* v_ecall_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_740_, v_ecall_742_);
return v___x_743_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq(lean_object* v_x_744_, lean_object* v_x_745_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v_decide_748_; 
v___x_746_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(v_x_744_);
v___x_747_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(v_x_745_);
v_decide_748_ = lean_nat_dec_eq(v___x_746_, v___x_747_);
lean_dec(v___x_747_);
lean_dec(v___x_746_);
if (v_decide_748_ == 0)
{
return v_decide_748_;
}
else
{
switch(lean_obj_tag(v_x_744_))
{
case 0:
{
uint8_t v_op_749_; lean_object* v_rd_750_; lean_object* v_rs1_751_; uint64_t v_imm_752_; uint8_t v_op_753_; lean_object* v_rd_754_; lean_object* v_rs1_755_; uint64_t v_imm_756_; lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v_op_749_ = lean_ctor_get_uint8(v_x_744_, sizeof(void*)*2 + 8);
v_rd_750_ = lean_ctor_get(v_x_744_, 0);
v_rs1_751_ = lean_ctor_get(v_x_744_, 1);
v_imm_752_ = lean_ctor_get_uint64(v_x_744_, sizeof(void*)*2);
v_op_753_ = lean_ctor_get_uint8(v_x_745_, sizeof(void*)*2 + 8);
v_rd_754_ = lean_ctor_get(v_x_745_, 0);
v_rs1_755_ = lean_ctor_get(v_x_745_, 1);
v_imm_756_ = lean_ctor_get_uint64(v_x_745_, sizeof(void*)*2);
v___x_757_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_749_);
v___x_758_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_753_);
v___x_759_ = lean_nat_dec_eq(v___x_757_, v___x_758_);
lean_dec(v___x_758_);
lean_dec(v___x_757_);
if (v___x_759_ == 0)
{
return v___x_759_;
}
else
{
uint8_t v___x_760_; 
v___x_760_ = lean_nat_dec_eq(v_rd_750_, v_rd_754_);
if (v___x_760_ == 0)
{
return v___x_760_;
}
else
{
uint8_t v___x_761_; 
v___x_761_ = lean_nat_dec_eq(v_rs1_751_, v_rs1_755_);
if (v___x_761_ == 0)
{
return v___x_761_;
}
else
{
uint8_t v___x_762_; 
v___x_762_ = lean_uint64_dec_eq(v_imm_752_, v_imm_756_);
return v___x_762_;
}
}
}
}
case 1:
{
uint8_t v_op_763_; lean_object* v_rd_764_; lean_object* v_rs1_765_; lean_object* v_rs2_766_; uint8_t v_op_767_; lean_object* v_rd_768_; lean_object* v_rs1_769_; lean_object* v_rs2_770_; lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; 
v_op_763_ = lean_ctor_get_uint8(v_x_744_, sizeof(void*)*3);
v_rd_764_ = lean_ctor_get(v_x_744_, 0);
v_rs1_765_ = lean_ctor_get(v_x_744_, 1);
v_rs2_766_ = lean_ctor_get(v_x_744_, 2);
v_op_767_ = lean_ctor_get_uint8(v_x_745_, sizeof(void*)*3);
v_rd_768_ = lean_ctor_get(v_x_745_, 0);
v_rs1_769_ = lean_ctor_get(v_x_745_, 1);
v_rs2_770_ = lean_ctor_get(v_x_745_, 2);
v___x_771_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_763_);
v___x_772_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_767_);
v___x_773_ = lean_nat_dec_eq(v___x_771_, v___x_772_);
lean_dec(v___x_772_);
lean_dec(v___x_771_);
if (v___x_773_ == 0)
{
return v___x_773_;
}
else
{
uint8_t v___x_774_; 
v___x_774_ = lean_nat_dec_eq(v_rd_764_, v_rd_768_);
if (v___x_774_ == 0)
{
return v___x_774_;
}
else
{
uint8_t v___x_775_; 
v___x_775_ = lean_nat_dec_eq(v_rs1_765_, v_rs1_769_);
if (v___x_775_ == 0)
{
return v___x_775_;
}
else
{
uint8_t v___x_776_; 
v___x_776_ = lean_nat_dec_eq(v_rs2_766_, v_rs2_770_);
return v___x_776_;
}
}
}
}
case 4:
{
lean_object* v_rd_777_; lean_object* v_rs1_778_; uint64_t v_offset_779_; lean_object* v_rd_780_; lean_object* v_rs1_781_; uint64_t v_offset_782_; uint8_t v___x_783_; 
v_rd_777_ = lean_ctor_get(v_x_744_, 0);
v_rs1_778_ = lean_ctor_get(v_x_744_, 1);
v_offset_779_ = lean_ctor_get_uint64(v_x_744_, sizeof(void*)*2);
v_rd_780_ = lean_ctor_get(v_x_745_, 0);
v_rs1_781_ = lean_ctor_get(v_x_745_, 1);
v_offset_782_ = lean_ctor_get_uint64(v_x_745_, sizeof(void*)*2);
v___x_783_ = lean_nat_dec_eq(v_rd_777_, v_rd_780_);
if (v___x_783_ == 0)
{
return v___x_783_;
}
else
{
uint8_t v___x_784_; 
v___x_784_ = lean_nat_dec_eq(v_rs1_778_, v_rs1_781_);
if (v___x_784_ == 0)
{
return v___x_784_;
}
else
{
uint8_t v___x_785_; 
v___x_785_ = lean_uint64_dec_eq(v_offset_779_, v_offset_782_);
return v___x_785_;
}
}
}
case 5:
{
lean_object* v_rs1_786_; lean_object* v_rs2_787_; uint64_t v_offset_788_; lean_object* v_rs1_789_; lean_object* v_rs2_790_; uint64_t v_offset_791_; uint8_t v___x_792_; 
v_rs1_786_ = lean_ctor_get(v_x_744_, 0);
v_rs2_787_ = lean_ctor_get(v_x_744_, 1);
v_offset_788_ = lean_ctor_get_uint64(v_x_744_, sizeof(void*)*2);
v_rs1_789_ = lean_ctor_get(v_x_745_, 0);
v_rs2_790_ = lean_ctor_get(v_x_745_, 1);
v_offset_791_ = lean_ctor_get_uint64(v_x_745_, sizeof(void*)*2);
v___x_792_ = lean_nat_dec_eq(v_rs1_786_, v_rs1_789_);
if (v___x_792_ == 0)
{
return v___x_792_;
}
else
{
uint8_t v___x_793_; 
v___x_793_ = lean_nat_dec_eq(v_rs2_787_, v_rs2_790_);
if (v___x_793_ == 0)
{
return v___x_793_;
}
else
{
uint8_t v___x_794_; 
v___x_794_ = lean_uint64_dec_eq(v_offset_788_, v_offset_791_);
return v___x_794_;
}
}
}
case 6:
{
uint8_t v_cond_795_; lean_object* v_rs1_796_; lean_object* v_rs2_797_; uint64_t v_targetPc_798_; uint8_t v_cond_799_; lean_object* v_rs1_800_; lean_object* v_rs2_801_; uint64_t v_targetPc_802_; lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v_cond_795_ = lean_ctor_get_uint8(v_x_744_, sizeof(void*)*2 + 8);
v_rs1_796_ = lean_ctor_get(v_x_744_, 0);
v_rs2_797_ = lean_ctor_get(v_x_744_, 1);
v_targetPc_798_ = lean_ctor_get_uint64(v_x_744_, sizeof(void*)*2);
v_cond_799_ = lean_ctor_get_uint8(v_x_745_, sizeof(void*)*2 + 8);
v_rs1_800_ = lean_ctor_get(v_x_745_, 0);
v_rs2_801_ = lean_ctor_get(v_x_745_, 1);
v_targetPc_802_ = lean_ctor_get_uint64(v_x_745_, sizeof(void*)*2);
v___x_803_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_cond_795_);
v___x_804_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_cond_799_);
v___x_805_ = lean_nat_dec_eq(v___x_803_, v___x_804_);
lean_dec(v___x_804_);
lean_dec(v___x_803_);
if (v___x_805_ == 0)
{
return v___x_805_;
}
else
{
uint8_t v___x_806_; 
v___x_806_ = lean_nat_dec_eq(v_rs1_796_, v_rs1_800_);
if (v___x_806_ == 0)
{
return v___x_806_;
}
else
{
uint8_t v___x_807_; 
v___x_807_ = lean_nat_dec_eq(v_rs2_797_, v_rs2_801_);
if (v___x_807_ == 0)
{
return v___x_807_;
}
else
{
uint8_t v___x_808_; 
v___x_808_ = lean_uint64_dec_eq(v_targetPc_798_, v_targetPc_802_);
return v___x_808_;
}
}
}
}
case 8:
{
lean_object* v_rd_809_; lean_object* v_rs1_810_; uint64_t v_offset_811_; lean_object* v_rd_812_; lean_object* v_rs1_813_; uint64_t v_offset_814_; uint8_t v___x_815_; 
v_rd_809_ = lean_ctor_get(v_x_744_, 0);
v_rs1_810_ = lean_ctor_get(v_x_744_, 1);
v_offset_811_ = lean_ctor_get_uint64(v_x_744_, sizeof(void*)*2);
v_rd_812_ = lean_ctor_get(v_x_745_, 0);
v_rs1_813_ = lean_ctor_get(v_x_745_, 1);
v_offset_814_ = lean_ctor_get_uint64(v_x_745_, sizeof(void*)*2);
v___x_815_ = lean_nat_dec_eq(v_rd_809_, v_rd_812_);
if (v___x_815_ == 0)
{
return v___x_815_;
}
else
{
uint8_t v___x_816_; 
v___x_816_ = lean_nat_dec_eq(v_rs1_810_, v_rs1_813_);
if (v___x_816_ == 0)
{
return v___x_816_;
}
else
{
uint8_t v___x_817_; 
v___x_817_ = lean_uint64_dec_eq(v_offset_811_, v_offset_814_);
return v___x_817_;
}
}
}
case 9:
{
return v_decide_748_;
}
default: 
{
lean_object* v_rd_818_; uint64_t v_imm20_819_; lean_object* v_rd_820_; uint64_t v_imm20_821_; uint8_t v___x_822_; 
v_rd_818_ = lean_ctor_get(v_x_744_, 0);
v_imm20_819_ = lean_ctor_get_uint64(v_x_744_, sizeof(void*)*1);
v_rd_820_ = lean_ctor_get(v_x_745_, 0);
v_imm20_821_ = lean_ctor_get_uint64(v_x_745_, sizeof(void*)*1);
v___x_822_ = lean_nat_dec_eq(v_rd_818_, v_rd_820_);
if (v___x_822_ == 0)
{
return v___x_822_;
}
else
{
uint8_t v___x_823_; 
v___x_823_ = lean_uint64_dec_eq(v_imm20_819_, v_imm20_821_);
return v___x_823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq___boxed(lean_object* v_x_824_, lean_object* v_x_825_){
_start:
{
uint8_t v_res_826_; lean_object* v_r_827_; 
v_res_826_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq(v_x_824_, v_x_825_);
lean_dec(v_x_825_);
lean_dec(v_x_824_);
v_r_827_ = lean_box(v_res_826_);
return v_r_827_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr(lean_object* v_x_828_, lean_object* v_x_829_){
_start:
{
uint8_t v___x_830_; 
v___x_830_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq(v_x_828_, v_x_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr___boxed(lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
uint8_t v_res_833_; lean_object* v_r_834_; 
v_res_833_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr(v_x_831_, v_x_832_);
lean_dec(v_x_832_);
lean_dec(v_x_831_);
v_r_834_ = lean_box(v_res_833_);
return v_r_834_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr(lean_object* v_x_892_, lean_object* v_prec_893_){
_start:
{
lean_object* v___y_895_; 
switch(lean_obj_tag(v_x_892_))
{
case 0:
{
uint8_t v_op_901_; lean_object* v_rd_902_; lean_object* v_rs1_903_; uint64_t v_imm_904_; lean_object* v___y_906_; lean_object* v___x_929_; uint8_t v___x_930_; 
v_op_901_ = lean_ctor_get_uint8(v_x_892_, sizeof(void*)*2 + 8);
v_rd_902_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rd_902_);
v_rs1_903_ = lean_ctor_get(v_x_892_, 1);
lean_inc(v_rs1_903_);
v_imm_904_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*2);
lean_dec_ref_known(v_x_892_, 2);
v___x_929_ = lean_unsigned_to_nat(1024u);
v___x_930_ = lean_nat_dec_le(v___x_929_, v_prec_893_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; 
v___x_931_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_906_ = v___x_931_;
goto v___jp_905_;
}
else
{
lean_object* v___x_932_; 
v___x_932_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_906_ = v___x_932_;
goto v___jp_905_;
}
v___jp_905_:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_907_ = lean_box(1);
v___x_908_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__4));
v___x_909_ = lean_unsigned_to_nat(1024u);
v___x_910_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(v_op_901_, v___x_909_);
v___x_911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_908_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___x_907_);
v___x_913_ = l_Nat_reprFast(v_rd_902_);
v___x_914_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
v___x_915_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_912_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
lean_ctor_set(v___x_916_, 1, v___x_907_);
v___x_917_ = l_Nat_reprFast(v_rs1_903_);
v___x_918_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
v___x_919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_916_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
lean_ctor_set(v___x_920_, 1, v___x_907_);
v___x_921_ = lean_uint64_to_nat(v_imm_904_);
v___x_922_ = l_Nat_reprFast(v___x_921_);
v___x_923_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
v___x_924_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_920_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
lean_inc(v___y_906_);
v___x_925_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_925_, 0, v___y_906_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = 0;
v___x_927_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set_uint8(v___x_927_, sizeof(void*)*1, v___x_926_);
v___x_928_ = l_Repr_addAppParen(v___x_927_, v_prec_893_);
return v___x_928_;
}
}
case 1:
{
uint8_t v_op_933_; lean_object* v_rd_934_; lean_object* v_rs1_935_; lean_object* v_rs2_936_; lean_object* v___y_938_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_op_933_ = lean_ctor_get_uint8(v_x_892_, sizeof(void*)*3);
v_rd_934_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rd_934_);
v_rs1_935_ = lean_ctor_get(v_x_892_, 1);
lean_inc(v_rs1_935_);
v_rs2_936_ = lean_ctor_get(v_x_892_, 2);
lean_inc(v_rs2_936_);
lean_dec_ref_known(v_x_892_, 3);
v___x_960_ = lean_unsigned_to_nat(1024u);
v___x_961_ = lean_nat_dec_le(v___x_960_, v_prec_893_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; 
v___x_962_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_938_ = v___x_962_;
goto v___jp_937_;
}
else
{
lean_object* v___x_963_; 
v___x_963_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_938_ = v___x_963_;
goto v___jp_937_;
}
v___jp_937_:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_939_ = lean_box(1);
v___x_940_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__7));
v___x_941_ = lean_unsigned_to_nat(1024u);
v___x_942_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(v_op_933_, v___x_941_);
v___x_943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_940_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
v___x_944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v___x_939_);
v___x_945_ = l_Nat_reprFast(v_rd_934_);
v___x_946_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
v___x_947_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_944_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
lean_ctor_set(v___x_948_, 1, v___x_939_);
v___x_949_ = l_Nat_reprFast(v_rs1_935_);
v___x_950_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
v___x_951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_948_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
lean_ctor_set(v___x_952_, 1, v___x_939_);
v___x_953_ = l_Nat_reprFast(v_rs2_936_);
v___x_954_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
v___x_955_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_952_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
lean_inc(v___y_938_);
v___x_956_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_956_, 0, v___y_938_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = 0;
v___x_958_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set_uint8(v___x_958_, sizeof(void*)*1, v___x_957_);
v___x_959_ = l_Repr_addAppParen(v___x_958_, v_prec_893_);
return v___x_959_;
}
}
case 2:
{
lean_object* v_rd_964_; uint64_t v_imm20_965_; lean_object* v___y_967_; lean_object* v___x_982_; uint8_t v___x_983_; 
v_rd_964_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rd_964_);
v_imm20_965_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*1);
lean_dec_ref_known(v_x_892_, 1);
v___x_982_ = lean_unsigned_to_nat(1024u);
v___x_983_ = lean_nat_dec_le(v___x_982_, v_prec_893_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; 
v___x_984_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_967_ = v___x_984_;
goto v___jp_966_;
}
else
{
lean_object* v___x_985_; 
v___x_985_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_967_ = v___x_985_;
goto v___jp_966_;
}
v___jp_966_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_968_ = lean_box(1);
v___x_969_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__10));
v___x_970_ = l_Nat_reprFast(v_rd_964_);
v___x_971_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
v___x_972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_969_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
lean_ctor_set(v___x_973_, 1, v___x_968_);
v___x_974_ = lean_uint64_to_nat(v_imm20_965_);
v___x_975_ = l_Nat_reprFast(v___x_974_);
v___x_976_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_973_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
lean_inc(v___y_967_);
v___x_978_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_978_, 0, v___y_967_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = 0;
v___x_980_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*1, v___x_979_);
v___x_981_ = l_Repr_addAppParen(v___x_980_, v_prec_893_);
return v___x_981_;
}
}
case 3:
{
lean_object* v_rd_986_; uint64_t v_imm20_987_; lean_object* v___y_989_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v_rd_986_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rd_986_);
v_imm20_987_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*1);
lean_dec_ref_known(v_x_892_, 1);
v___x_1004_ = lean_unsigned_to_nat(1024u);
v___x_1005_ = lean_nat_dec_le(v___x_1004_, v_prec_893_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_989_ = v___x_1006_;
goto v___jp_988_;
}
else
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_989_ = v___x_1007_;
goto v___jp_988_;
}
v___jp_988_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; uint8_t v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_990_ = lean_box(1);
v___x_991_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__13));
v___x_992_ = l_Nat_reprFast(v_rd_986_);
v___x_993_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_991_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
lean_ctor_set(v___x_995_, 1, v___x_990_);
v___x_996_ = lean_uint64_to_nat(v_imm20_987_);
v___x_997_ = l_Nat_reprFast(v___x_996_);
v___x_998_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
v___x_999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_995_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
lean_inc(v___y_989_);
v___x_1000_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___y_989_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = 0;
v___x_1002_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set_uint8(v___x_1002_, sizeof(void*)*1, v___x_1001_);
v___x_1003_ = l_Repr_addAppParen(v___x_1002_, v_prec_893_);
return v___x_1003_;
}
}
case 4:
{
lean_object* v_rd_1008_; lean_object* v_rs1_1009_; uint64_t v_offset_1010_; lean_object* v___y_1012_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v_rd_1008_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rd_1008_);
v_rs1_1009_ = lean_ctor_get(v_x_892_, 1);
lean_inc(v_rs1_1009_);
v_offset_1010_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*2);
lean_dec_ref_known(v_x_892_, 2);
v___x_1031_ = lean_unsigned_to_nat(1024u);
v___x_1032_ = lean_nat_dec_le(v___x_1031_, v_prec_893_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_1012_ = v___x_1033_;
goto v___jp_1011_;
}
else
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_1012_ = v___x_1034_;
goto v___jp_1011_;
}
v___jp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1013_ = lean_box(1);
v___x_1014_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__16));
v___x_1015_ = l_Nat_reprFast(v_rd_1008_);
v___x_1016_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
v___x_1017_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1014_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
v___x_1018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
lean_ctor_set(v___x_1018_, 1, v___x_1013_);
v___x_1019_ = l_Nat_reprFast(v_rs1_1009_);
v___x_1020_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
v___x_1021_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1018_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
lean_ctor_set(v___x_1022_, 1, v___x_1013_);
v___x_1023_ = lean_uint64_to_nat(v_offset_1010_);
v___x_1024_ = l_Nat_reprFast(v___x_1023_);
v___x_1025_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
v___x_1026_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1022_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
lean_inc(v___y_1012_);
v___x_1027_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___y_1012_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v___x_1028_ = 0;
v___x_1029_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set_uint8(v___x_1029_, sizeof(void*)*1, v___x_1028_);
v___x_1030_ = l_Repr_addAppParen(v___x_1029_, v_prec_893_);
return v___x_1030_;
}
}
case 5:
{
lean_object* v_rs1_1035_; lean_object* v_rs2_1036_; uint64_t v_offset_1037_; lean_object* v___y_1039_; lean_object* v___x_1058_; uint8_t v___x_1059_; 
v_rs1_1035_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rs1_1035_);
v_rs2_1036_ = lean_ctor_get(v_x_892_, 1);
lean_inc(v_rs2_1036_);
v_offset_1037_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*2);
lean_dec_ref_known(v_x_892_, 2);
v___x_1058_ = lean_unsigned_to_nat(1024u);
v___x_1059_ = lean_nat_dec_le(v___x_1058_, v_prec_893_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_1039_ = v___x_1060_;
goto v___jp_1038_;
}
else
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_1039_ = v___x_1061_;
goto v___jp_1038_;
}
v___jp_1038_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1040_ = lean_box(1);
v___x_1041_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__19));
v___x_1042_ = l_Nat_reprFast(v_rs1_1035_);
v___x_1043_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
v___x_1044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1041_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v___x_1040_);
v___x_1046_ = l_Nat_reprFast(v_rs2_1036_);
v___x_1047_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
v___x_1048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1045_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_ctor_set(v___x_1049_, 1, v___x_1040_);
v___x_1050_ = lean_uint64_to_nat(v_offset_1037_);
v___x_1051_ = l_Nat_reprFast(v___x_1050_);
v___x_1052_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1049_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
lean_inc(v___y_1039_);
v___x_1054_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___y_1039_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = 0;
v___x_1056_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*1, v___x_1055_);
v___x_1057_ = l_Repr_addAppParen(v___x_1056_, v_prec_893_);
return v___x_1057_;
}
}
case 6:
{
uint8_t v_cond_1062_; lean_object* v_rs1_1063_; lean_object* v_rs2_1064_; uint64_t v_targetPc_1065_; lean_object* v___y_1067_; lean_object* v___x_1090_; uint8_t v___x_1091_; 
v_cond_1062_ = lean_ctor_get_uint8(v_x_892_, sizeof(void*)*2 + 8);
v_rs1_1063_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rs1_1063_);
v_rs2_1064_ = lean_ctor_get(v_x_892_, 1);
lean_inc(v_rs2_1064_);
v_targetPc_1065_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*2);
lean_dec_ref_known(v_x_892_, 2);
v___x_1090_ = lean_unsigned_to_nat(1024u);
v___x_1091_ = lean_nat_dec_le(v___x_1090_, v_prec_893_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; 
v___x_1092_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_1067_ = v___x_1092_;
goto v___jp_1066_;
}
else
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_1067_ = v___x_1093_;
goto v___jp_1066_;
}
v___jp_1066_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1068_ = lean_box(1);
v___x_1069_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__22));
v___x_1070_ = lean_unsigned_to_nat(1024u);
v___x_1071_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr(v_cond_1062_, v___x_1070_);
v___x_1072_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1069_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
lean_ctor_set(v___x_1073_, 1, v___x_1068_);
v___x_1074_ = l_Nat_reprFast(v_rs1_1063_);
v___x_1075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1073_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
lean_ctor_set(v___x_1077_, 1, v___x_1068_);
v___x_1078_ = l_Nat_reprFast(v_rs2_1064_);
v___x_1079_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
v___x_1080_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1077_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v___x_1068_);
v___x_1082_ = lean_uint64_to_nat(v_targetPc_1065_);
v___x_1083_ = l_Nat_reprFast(v___x_1082_);
v___x_1084_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
v___x_1085_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1081_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
lean_inc(v___y_1067_);
v___x_1086_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___y_1067_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
v___x_1087_ = 0;
v___x_1088_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set_uint8(v___x_1088_, sizeof(void*)*1, v___x_1087_);
v___x_1089_ = l_Repr_addAppParen(v___x_1088_, v_prec_893_);
return v___x_1089_;
}
}
case 7:
{
lean_object* v_rd_1094_; uint64_t v_targetPc_1095_; lean_object* v___y_1097_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v_rd_1094_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rd_1094_);
v_targetPc_1095_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*1);
lean_dec_ref_known(v_x_892_, 1);
v___x_1112_ = lean_unsigned_to_nat(1024u);
v___x_1113_ = lean_nat_dec_le(v___x_1112_, v_prec_893_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; 
v___x_1114_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_1097_ = v___x_1114_;
goto v___jp_1096_;
}
else
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_1097_ = v___x_1115_;
goto v___jp_1096_;
}
v___jp_1096_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1098_ = lean_box(1);
v___x_1099_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__25));
v___x_1100_ = l_Nat_reprFast(v_rd_1094_);
v___x_1101_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1099_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
lean_ctor_set(v___x_1103_, 1, v___x_1098_);
v___x_1104_ = lean_uint64_to_nat(v_targetPc_1095_);
v___x_1105_ = l_Nat_reprFast(v___x_1104_);
v___x_1106_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
v___x_1107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1103_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
lean_inc(v___y_1097_);
v___x_1108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___y_1097_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = 0;
v___x_1110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1110_, 0, v___x_1108_);
lean_ctor_set_uint8(v___x_1110_, sizeof(void*)*1, v___x_1109_);
v___x_1111_ = l_Repr_addAppParen(v___x_1110_, v_prec_893_);
return v___x_1111_;
}
}
case 8:
{
lean_object* v_rd_1116_; lean_object* v_rs1_1117_; uint64_t v_offset_1118_; lean_object* v___y_1120_; lean_object* v___x_1139_; uint8_t v___x_1140_; 
v_rd_1116_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_rd_1116_);
v_rs1_1117_ = lean_ctor_get(v_x_892_, 1);
lean_inc(v_rs1_1117_);
v_offset_1118_ = lean_ctor_get_uint64(v_x_892_, sizeof(void*)*2);
lean_dec_ref_known(v_x_892_, 2);
v___x_1139_ = lean_unsigned_to_nat(1024u);
v___x_1140_ = lean_nat_dec_le(v___x_1139_, v_prec_893_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_1120_ = v___x_1141_;
goto v___jp_1119_;
}
else
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_1120_ = v___x_1142_;
goto v___jp_1119_;
}
v___jp_1119_:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; uint8_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1121_ = lean_box(1);
v___x_1122_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__28));
v___x_1123_ = l_Nat_reprFast(v_rd_1116_);
v___x_1124_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
v___x_1125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1122_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v___x_1121_);
v___x_1127_ = l_Nat_reprFast(v_rs1_1117_);
v___x_1128_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1126_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v___x_1121_);
v___x_1131_ = lean_uint64_to_nat(v_offset_1118_);
v___x_1132_ = l_Nat_reprFast(v___x_1131_);
v___x_1133_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
v___x_1134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1130_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
lean_inc(v___y_1120_);
v___x_1135_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___y_1120_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = 0;
v___x_1137_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set_uint8(v___x_1137_, sizeof(void*)*1, v___x_1136_);
v___x_1138_ = l_Repr_addAppParen(v___x_1137_, v_prec_893_);
return v___x_1138_;
}
}
default: 
{
lean_object* v___x_1143_; uint8_t v___x_1144_; 
v___x_1143_ = lean_unsigned_to_nat(1024u);
v___x_1144_ = lean_nat_dec_le(v___x_1143_, v_prec_893_);
if (v___x_1144_ == 0)
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20);
v___y_895_ = v___x_1145_;
goto v___jp_894_;
}
else
{
lean_object* v___x_1146_; 
v___x_1146_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21);
v___y_895_ = v___x_1146_;
goto v___jp_894_;
}
}
}
v___jp_894_:
{
lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_896_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__1));
lean_inc(v___y_895_);
v___x_897_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_897_, 0, v___y_895_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v___x_898_ = 0;
v___x_899_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1, v___x_898_);
v___x_900_ = l_Repr_addAppParen(v___x_899_, v_prec_893_);
return v___x_900_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___boxed(lean_object* v_x_1147_, lean_object* v_prec_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr(v_x_1147_, v_prec_1148_);
lean_dec(v_prec_1148_);
return v_res_1149_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0(lean_object* v_a_1152_, lean_object* v_b_1153_){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1154_ = lean_alloc_closure((void*)(l_instDecidableEqUInt64___boxed), 2, 0);
v___x_1155_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr___boxed), 2, 0);
v___x_1156_ = l_instDecidableEqProd___redArg(v___x_1154_, v___x_1155_, v_a_1152_, v_b_1153_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0___boxed(lean_object* v_a_1157_, lean_object* v_b_1158_){
_start:
{
uint8_t v_res_1159_; lean_object* v_r_1160_; 
v_res_1159_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0(v_a_1157_, v_b_1158_);
v_r_1160_ = lean_box(v_res_1159_);
return v_r_1160_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq(lean_object* v_x_1162_, lean_object* v_x_1163_){
_start:
{
uint64_t v_entryPc_1164_; lean_object* v_code_1165_; uint64_t v_entryPc_1166_; lean_object* v_code_1167_; uint8_t v___x_1168_; 
v_entryPc_1164_ = lean_ctor_get_uint64(v_x_1162_, sizeof(void*)*1);
v_code_1165_ = lean_ctor_get(v_x_1162_, 0);
lean_inc(v_code_1165_);
lean_dec_ref(v_x_1162_);
v_entryPc_1166_ = lean_ctor_get_uint64(v_x_1163_, sizeof(void*)*1);
v_code_1167_ = lean_ctor_get(v_x_1163_, 0);
lean_inc(v_code_1167_);
lean_dec_ref(v_x_1163_);
v___x_1168_ = lean_uint64_dec_eq(v_entryPc_1164_, v_entryPc_1166_);
if (v___x_1168_ == 0)
{
lean_dec(v_code_1167_);
lean_dec(v_code_1165_);
return v___x_1168_;
}
else
{
lean_object* v___f_1169_; uint8_t v___x_1170_; 
v___f_1169_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___closed__0));
v___x_1170_ = l_instDecidableEqList___redArg(v___f_1169_, v_code_1165_, v_code_1167_);
return v___x_1170_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___boxed(lean_object* v_x_1171_, lean_object* v_x_1172_){
_start:
{
uint8_t v_res_1173_; lean_object* v_r_1174_; 
v_res_1173_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq(v_x_1171_, v_x_1172_);
v_r_1174_ = lean_box(v_res_1173_);
return v_r_1174_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg(lean_object* v_x_1175_, lean_object* v_x_1176_){
_start:
{
uint8_t v___x_1177_; 
v___x_1177_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq(v_x_1175_, v_x_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg___boxed(lean_object* v_x_1178_, lean_object* v_x_1179_){
_start:
{
uint8_t v_res_1180_; lean_object* v_r_1181_; 
v_res_1180_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg(v_x_1178_, v_x_1179_);
v_r_1181_ = lean_box(v_res_1180_);
return v_r_1181_;
}
}
static lean_object* _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__0));
v___x_1191_ = lean_string_length(v___x_1190_);
return v___x_1191_;
}
}
static lean_object* _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_obj_once(&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5, &lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5_once, _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5);
v___x_1193_ = lean_nat_to_int(v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(lean_object* v_x_1198_){
_start:
{
lean_object* v_fst_1199_; lean_object* v_snd_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1226_; 
v_fst_1199_ = lean_ctor_get(v_x_1198_, 0);
v_snd_1200_ = lean_ctor_get(v_x_1198_, 1);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_x_1198_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1202_ = v_x_1198_;
v_isShared_1203_ = v_isSharedCheck_1226_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_snd_1200_);
lean_inc(v_fst_1199_);
lean_dec(v_x_1198_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1226_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
uint64_t v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1204_ = lean_unbox_uint64(v_fst_1199_);
lean_dec(v_fst_1199_);
v___x_1205_ = lean_uint64_to_nat(v___x_1204_);
v___x_1206_ = l_Nat_reprFast(v___x_1205_);
v___x_1207_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
v___x_1208_ = lean_box(0);
if (v_isShared_1203_ == 0)
{
lean_ctor_set_tag(v___x_1202_, 1);
lean_ctor_set(v___x_1202_, 1, v___x_1208_);
lean_ctor_set(v___x_1202_, 0, v___x_1207_);
v___x_1210_ = v___x_1202_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; lean_object* v___x_1224_; 
v___x_1211_ = lean_unsigned_to_nat(0u);
v___x_1212_ = lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr(v_snd_1200_, v___x_1211_);
v___x_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___x_1210_);
v___x_1214_ = l_List_reverse___redArg(v___x_1213_);
v___x_1215_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__3));
v___x_1216_ = l_Std_Format_joinSep___at___00Lean_Syntax_formatStxAux_spec__2(v___x_1214_, v___x_1215_);
v___x_1217_ = lean_obj_once(&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6, &lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6_once, _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6);
v___x_1218_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__7));
v___x_1219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
lean_ctor_set(v___x_1219_, 1, v___x_1216_);
v___x_1220_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__8));
v___x_1221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1219_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1217_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
v___x_1223_ = 0;
v___x_1224_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1224_, 0, v___x_1222_);
lean_ctor_set_uint8(v___x_1224_, sizeof(void*)*1, v___x_1223_);
return v___x_1224_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_1227_, lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
if (lean_obj_tag(v_x_1229_) == 0)
{
lean_dec(v_x_1227_);
return v_x_1228_;
}
else
{
lean_object* v_head_1230_; lean_object* v_tail_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1241_; 
v_head_1230_ = lean_ctor_get(v_x_1229_, 0);
v_tail_1231_ = lean_ctor_get(v_x_1229_, 1);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_x_1229_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1233_ = v_x_1229_;
v_isShared_1234_ = v_isSharedCheck_1241_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_tail_1231_);
lean_inc(v_head_1230_);
lean_dec(v_x_1229_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1241_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
lean_inc(v_x_1227_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set_tag(v___x_1233_, 5);
lean_ctor_set(v___x_1233_, 1, v_x_1227_);
lean_ctor_set(v___x_1233_, 0, v_x_1228_);
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_x_1228_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_x_1227_);
v___x_1236_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1230_);
v___x_1238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v_x_1228_ = v___x_1238_;
v_x_1229_ = v_tail_1231_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2(lean_object* v_x_1242_, lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
lean_dec(v_x_1242_);
return v_x_1243_;
}
else
{
lean_object* v_head_1245_; lean_object* v_tail_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1256_; 
v_head_1245_ = lean_ctor_get(v_x_1244_, 0);
v_tail_1246_ = lean_ctor_get(v_x_1244_, 1);
v_isSharedCheck_1256_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1248_ = v_x_1244_;
v_isShared_1249_ = v_isSharedCheck_1256_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_tail_1246_);
lean_inc(v_head_1245_);
lean_dec(v_x_1244_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1256_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
lean_inc(v_x_1242_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set_tag(v___x_1248_, 5);
lean_ctor_set(v___x_1248_, 1, v_x_1242_);
lean_ctor_set(v___x_1248_, 0, v_x_1243_);
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_x_1243_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_x_1242_);
v___x_1251_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1252_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1245_);
v___x_1253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lp_rv2pancake_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2_spec__3(v_x_1242_, v___x_1253_, v_tail_1246_);
return v___x_1254_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1(lean_object* v_x_1257_, lean_object* v_x_1258_){
_start:
{
if (lean_obj_tag(v_x_1257_) == 0)
{
lean_object* v___x_1259_; 
lean_dec(v_x_1258_);
v___x_1259_ = lean_box(0);
return v___x_1259_;
}
else
{
lean_object* v_tail_1260_; 
v_tail_1260_ = lean_ctor_get(v_x_1257_, 1);
if (lean_obj_tag(v_tail_1260_) == 0)
{
lean_object* v_head_1261_; lean_object* v___x_1262_; 
lean_dec(v_x_1258_);
v_head_1261_ = lean_ctor_get(v_x_1257_, 0);
lean_inc(v_head_1261_);
lean_dec_ref_known(v_x_1257_, 2);
v___x_1262_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1261_);
return v___x_1262_;
}
else
{
lean_object* v_head_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
lean_inc(v_tail_1260_);
v_head_1263_ = lean_ctor_get(v_x_1257_, 0);
lean_inc(v_head_1263_);
lean_dec_ref_known(v_x_1257_, 2);
v___x_1264_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1263_);
v___x_1265_ = lp_rv2pancake_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2(v_x_1258_, v___x_1264_, v_tail_1260_);
return v___x_1265_;
}
}
}
}
static lean_object* _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__2));
v___x_1272_ = lean_string_length(v___x_1271_);
return v___x_1272_;
}
}
static lean_object* _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = lean_obj_once(&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4, &lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4_once, _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4);
v___x_1274_ = lean_nat_to_int(v___x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg(lean_object* v_a_1279_){
_start:
{
if (lean_obj_tag(v_a_1279_) == 0)
{
lean_object* v___x_1280_; 
v___x_1280_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__1));
return v___x_1280_;
}
else
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; lean_object* v___x_1290_; 
v___x_1281_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__3));
v___x_1282_ = lp_rv2pancake_Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1(v_a_1279_, v___x_1281_);
v___x_1283_ = lean_obj_once(&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5, &lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5_once, _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5);
v___x_1284_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__6));
v___x_1285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
lean_ctor_set(v___x_1285_, 1, v___x_1282_);
v___x_1286_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__7));
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1285_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1283_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = 0;
v___x_1290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set_uint8(v___x_1290_, sizeof(void*)*1, v___x_1289_);
return v___x_1290_;
}
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = lean_unsigned_to_nat(11u);
v___x_1305_ = lean_nat_to_int(v___x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = lean_unsigned_to_nat(8u);
v___x_1310_ = lean_nat_to_int(v___x_1309_);
return v___x_1310_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__0));
v___x_1313_ = lean_string_length(v___x_1312_);
return v___x_1313_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12);
v___x_1315_ = lean_nat_to_int(v___x_1314_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg(lean_object* v_x_1320_){
_start:
{
uint64_t v_entryPc_1321_; lean_object* v_code_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_entryPc_1321_ = lean_ctor_get_uint64(v_x_1320_, sizeof(void*)*1);
v_code_1322_ = lean_ctor_get(v_x_1320_, 0);
lean_inc(v_code_1322_);
lean_dec_ref(v_x_1320_);
v___x_1323_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__5));
v___x_1324_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__6));
v___x_1325_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7);
v___x_1326_ = lean_uint64_to_nat(v_entryPc_1321_);
v___x_1327_ = l_Nat_reprFast(v___x_1326_);
v___x_1328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1325_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = 0;
v___x_1331_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1331_, 0, v___x_1329_);
lean_ctor_set_uint8(v___x_1331_, sizeof(void*)*1, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1324_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__2));
v___x_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = lean_box(1);
v___x_1336_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__9));
v___x_1338_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
lean_ctor_set(v___x_1339_, 1, v___x_1323_);
v___x_1340_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10);
v___x_1341_ = lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg(v_code_1322_);
v___x_1342_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1340_);
lean_ctor_set(v___x_1342_, 1, v___x_1341_);
v___x_1343_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
lean_ctor_set_uint8(v___x_1343_, sizeof(void*)*1, v___x_1330_);
v___x_1344_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1339_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13);
v___x_1346_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__14));
v___x_1347_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set(v___x_1347_, 1, v___x_1344_);
v___x_1348_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__15));
v___x_1349_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1345_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
v___x_1351_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1351_, 0, v___x_1350_);
lean_ctor_set_uint8(v___x_1351_, sizeof(void*)*1, v___x_1330_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr(lean_object* v_x_1352_, lean_object* v_prec_1353_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg(v_x_1352_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___boxed(lean_object* v_x_1355_, lean_object* v_prec_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr(v_x_1355_, v_prec_1356_);
lean_dec(v_prec_1356_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0(lean_object* v_a_1358_, lean_object* v_n_1359_){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg(v_a_1358_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___boxed(lean_object* v_a_1361_, lean_object* v_n_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0(v_a_1361_, v_n_1362_);
lean_dec(v_n_1362_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0(lean_object* v_x_1364_, lean_object* v_x_1365_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_x_1364_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___boxed(lean_object* v_x_1367_, lean_object* v_x_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0(v_x_1367_, v_x_1368_);
lean_dec(v_x_1368_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_fetchInstr(lean_object* v_code_1372_, uint64_t v_pc_1373_){
_start:
{
if (lean_obj_tag(v_code_1372_) == 0)
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_box(0);
return v___x_1374_;
}
else
{
lean_object* v_head_1375_; lean_object* v_tail_1376_; lean_object* v_fst_1377_; lean_object* v_snd_1378_; uint64_t v___x_1379_; uint8_t v___x_1380_; 
v_head_1375_ = lean_ctor_get(v_code_1372_, 0);
v_tail_1376_ = lean_ctor_get(v_code_1372_, 1);
v_fst_1377_ = lean_ctor_get(v_head_1375_, 0);
v_snd_1378_ = lean_ctor_get(v_head_1375_, 1);
v___x_1379_ = lean_unbox_uint64(v_fst_1377_);
v___x_1380_ = lean_uint64_dec_eq(v_pc_1373_, v___x_1379_);
if (v___x_1380_ == 0)
{
v_code_1372_ = v_tail_1376_;
goto _start;
}
else
{
lean_object* v___x_1382_; 
lean_inc(v_snd_1378_);
v___x_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1382_, 0, v_snd_1378_);
return v___x_1382_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_fetchInstr___boxed(lean_object* v_code_1383_, lean_object* v_pc_1384_){
_start:
{
uint64_t v_pc_boxed_1385_; lean_object* v_res_1386_; 
v_pc_boxed_1385_ = lean_unbox_uint64(v_pc_1384_);
lean_dec_ref(v_pc_1384_);
v_res_1386_ = lp_rv2pancake_Rv2Pancake_Spec_fetchInstr(v_code_1383_, v_pc_boxed_1385_);
lean_dec(v_code_1383_);
return v_res_1386_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0(uint64_t v_addr_1387_, lean_object* v_mem_1388_, uint64_t v_v_1389_, uint64_t v_a_1390_){
_start:
{
uint8_t v___x_1391_; 
v___x_1391_ = lean_uint64_dec_eq(v_a_1390_, v_addr_1387_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v___x_1393_; uint64_t v___x_1394_; 
v___x_1392_ = lean_box_uint64(v_a_1390_);
v___x_1393_ = lean_apply_1(v_mem_1388_, v___x_1392_);
v___x_1394_ = lean_unbox_uint64(v___x_1393_);
lean_dec_ref(v___x_1393_);
return v___x_1394_;
}
else
{
lean_dec_ref(v_mem_1388_);
return v_v_1389_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0___boxed(lean_object* v_addr_1395_, lean_object* v_mem_1396_, lean_object* v_v_1397_, lean_object* v_a_1398_){
_start:
{
uint64_t v_addr_boxed_1399_; uint64_t v_v_boxed_1400_; uint64_t v_a_boxed_1401_; uint64_t v_res_1402_; lean_object* v_r_1403_; 
v_addr_boxed_1399_ = lean_unbox_uint64(v_addr_1395_);
lean_dec_ref(v_addr_1395_);
v_v_boxed_1400_ = lean_unbox_uint64(v_v_1397_);
lean_dec_ref(v_v_1397_);
v_a_boxed_1401_ = lean_unbox_uint64(v_a_1398_);
lean_dec_ref(v_a_1398_);
v_res_1402_ = lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0(v_addr_boxed_1399_, v_mem_1396_, v_v_boxed_1400_, v_a_boxed_1401_);
v_r_1403_ = lean_box_uint64(v_res_1402_);
return v_r_1403_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execRVInstr(lean_object* v_ins_1404_, lean_object* v_st_1405_){
_start:
{
switch(lean_obj_tag(v_ins_1404_))
{
case 0:
{
uint8_t v_op_1406_; lean_object* v_rd_1407_; lean_object* v_rs1_1408_; uint64_t v_imm_1409_; uint64_t v_pc_1410_; lean_object* v_regs_1411_; lean_object* v_mem_1412_; uint8_t v_halted_1413_; uint64_t v_retVal_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1427_; 
v_op_1406_ = lean_ctor_get_uint8(v_ins_1404_, sizeof(void*)*2 + 8);
v_rd_1407_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rd_1407_);
v_rs1_1408_ = lean_ctor_get(v_ins_1404_, 1);
lean_inc(v_rs1_1408_);
v_imm_1409_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1404_, 2);
v_pc_1410_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1411_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1412_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1413_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1414_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1427_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1416_ = v_st_1405_;
v_isShared_1417_ = v_isSharedCheck_1427_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_mem_1412_);
lean_inc(v_regs_1411_);
lean_dec(v_st_1405_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1427_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
uint64_t v___x_1418_; uint64_t v_v_1419_; uint64_t v___x_1420_; uint64_t v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1425_; 
lean_inc_ref(v_regs_1411_);
v___x_1418_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1411_, v_rs1_1408_);
v_v_1419_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_1406_, v___x_1418_, v_imm_1409_);
v___x_1420_ = 4ULL;
v___x_1421_ = lean_uint64_add(v_pc_1410_, v___x_1420_);
v___x_1422_ = lean_box_uint64(v_v_1419_);
v___x_1423_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1423_, 0, v_regs_1411_);
lean_closure_set(v___x_1423_, 1, v_rd_1407_);
lean_closure_set(v___x_1423_, 2, v___x_1422_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1423_);
v___x_1425_ = v___x_1416_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v_mem_1412_);
lean_ctor_set_uint8(v_reuseFailAlloc_1426_, sizeof(void*)*2 + 16, v_halted_1413_);
lean_ctor_set_uint64(v_reuseFailAlloc_1426_, sizeof(void*)*2 + 8, v_retVal_1414_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
lean_ctor_set_uint64(v___x_1425_, sizeof(void*)*2, v___x_1421_);
return v___x_1425_;
}
}
}
case 1:
{
uint8_t v_op_1428_; lean_object* v_rd_1429_; lean_object* v_rs1_1430_; lean_object* v_rs2_1431_; uint64_t v_pc_1432_; lean_object* v_regs_1433_; lean_object* v_mem_1434_; uint8_t v_halted_1435_; uint64_t v_retVal_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1450_; 
v_op_1428_ = lean_ctor_get_uint8(v_ins_1404_, sizeof(void*)*3);
v_rd_1429_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rd_1429_);
v_rs1_1430_ = lean_ctor_get(v_ins_1404_, 1);
lean_inc(v_rs1_1430_);
v_rs2_1431_ = lean_ctor_get(v_ins_1404_, 2);
lean_inc(v_rs2_1431_);
lean_dec_ref_known(v_ins_1404_, 3);
v_pc_1432_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1433_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1434_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1435_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1436_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1438_ = v_st_1405_;
v_isShared_1439_ = v_isSharedCheck_1450_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_mem_1434_);
lean_inc(v_regs_1433_);
lean_dec(v_st_1405_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1450_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
uint64_t v___x_1440_; uint64_t v___x_1441_; uint64_t v_v_1442_; uint64_t v___x_1443_; uint64_t v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1448_; 
lean_inc_ref_n(v_regs_1433_, 2);
v___x_1440_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1433_, v_rs1_1430_);
v___x_1441_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1433_, v_rs2_1431_);
v_v_1442_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_1428_, v___x_1440_, v___x_1441_);
v___x_1443_ = 4ULL;
v___x_1444_ = lean_uint64_add(v_pc_1432_, v___x_1443_);
v___x_1445_ = lean_box_uint64(v_v_1442_);
v___x_1446_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1446_, 0, v_regs_1433_);
lean_closure_set(v___x_1446_, 1, v_rd_1429_);
lean_closure_set(v___x_1446_, 2, v___x_1445_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v___x_1446_);
v___x_1448_ = v___x_1438_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1446_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_mem_1434_);
lean_ctor_set_uint8(v_reuseFailAlloc_1449_, sizeof(void*)*2 + 16, v_halted_1435_);
lean_ctor_set_uint64(v_reuseFailAlloc_1449_, sizeof(void*)*2 + 8, v_retVal_1436_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
lean_ctor_set_uint64(v___x_1448_, sizeof(void*)*2, v___x_1444_);
return v___x_1448_;
}
}
}
case 2:
{
lean_object* v_rd_1451_; uint64_t v_imm20_1452_; uint64_t v_pc_1453_; lean_object* v_regs_1454_; lean_object* v_mem_1455_; uint8_t v_halted_1456_; uint64_t v_retVal_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1468_; 
v_rd_1451_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rd_1451_);
v_imm20_1452_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1404_, 1);
v_pc_1453_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1454_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1455_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1456_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1457_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1459_ = v_st_1405_;
v_isShared_1460_ = v_isSharedCheck_1468_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_mem_1455_);
lean_inc(v_regs_1454_);
lean_dec(v_st_1405_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1468_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
uint64_t v___x_1461_; uint64_t v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1466_; 
v___x_1461_ = 4ULL;
v___x_1462_ = lean_uint64_add(v_pc_1453_, v___x_1461_);
v___x_1463_ = lean_box_uint64(v_imm20_1452_);
v___x_1464_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1464_, 0, v_regs_1454_);
lean_closure_set(v___x_1464_, 1, v_rd_1451_);
lean_closure_set(v___x_1464_, 2, v___x_1463_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v___x_1464_);
v___x_1466_ = v___x_1459_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_mem_1455_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*2 + 16, v_halted_1456_);
lean_ctor_set_uint64(v_reuseFailAlloc_1467_, sizeof(void*)*2 + 8, v_retVal_1457_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_ctor_set_uint64(v___x_1466_, sizeof(void*)*2, v___x_1462_);
return v___x_1466_;
}
}
}
case 3:
{
lean_object* v_rd_1469_; uint64_t v_imm20_1470_; uint64_t v_pc_1471_; lean_object* v_regs_1472_; lean_object* v_mem_1473_; uint8_t v_halted_1474_; uint64_t v_retVal_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1487_; 
v_rd_1469_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rd_1469_);
v_imm20_1470_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1404_, 1);
v_pc_1471_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1472_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1473_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1474_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1475_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1477_ = v_st_1405_;
v_isShared_1478_ = v_isSharedCheck_1487_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_mem_1473_);
lean_inc(v_regs_1472_);
lean_dec(v_st_1405_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1487_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
uint64_t v___x_1479_; uint64_t v___x_1480_; uint64_t v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1485_; 
v___x_1479_ = 4ULL;
v___x_1480_ = lean_uint64_add(v_pc_1471_, v___x_1479_);
v___x_1481_ = lean_uint64_add(v_pc_1471_, v_imm20_1470_);
v___x_1482_ = lean_box_uint64(v___x_1481_);
v___x_1483_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1483_, 0, v_regs_1472_);
lean_closure_set(v___x_1483_, 1, v_rd_1469_);
lean_closure_set(v___x_1483_, 2, v___x_1482_);
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v___x_1483_);
v___x_1485_ = v___x_1477_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_mem_1473_);
lean_ctor_set_uint8(v_reuseFailAlloc_1486_, sizeof(void*)*2 + 16, v_halted_1474_);
lean_ctor_set_uint64(v_reuseFailAlloc_1486_, sizeof(void*)*2 + 8, v_retVal_1475_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_ctor_set_uint64(v___x_1485_, sizeof(void*)*2, v___x_1480_);
return v___x_1485_;
}
}
}
case 4:
{
lean_object* v_rd_1488_; lean_object* v_rs1_1489_; uint64_t v_offset_1490_; uint64_t v_pc_1491_; lean_object* v_regs_1492_; lean_object* v_mem_1493_; uint8_t v_halted_1494_; uint64_t v_retVal_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1509_; 
v_rd_1488_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rd_1488_);
v_rs1_1489_ = lean_ctor_get(v_ins_1404_, 1);
lean_inc(v_rs1_1489_);
v_offset_1490_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1404_, 2);
v_pc_1491_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1492_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1493_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1494_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1495_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1497_ = v_st_1405_;
v_isShared_1498_ = v_isSharedCheck_1509_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_mem_1493_);
lean_inc(v_regs_1492_);
lean_dec(v_st_1405_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1509_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
uint64_t v___x_1499_; uint64_t v_addr_1500_; lean_object* v___x_1501_; lean_object* v_v_1502_; uint64_t v___x_1503_; uint64_t v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1507_; 
lean_inc_ref(v_regs_1492_);
v___x_1499_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1492_, v_rs1_1489_);
v_addr_1500_ = lean_uint64_add(v___x_1499_, v_offset_1490_);
v___x_1501_ = lean_box_uint64(v_addr_1500_);
lean_inc_ref(v_mem_1493_);
v_v_1502_ = lean_apply_1(v_mem_1493_, v___x_1501_);
v___x_1503_ = 4ULL;
v___x_1504_ = lean_uint64_add(v_pc_1491_, v___x_1503_);
v___x_1505_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1505_, 0, v_regs_1492_);
lean_closure_set(v___x_1505_, 1, v_rd_1488_);
lean_closure_set(v___x_1505_, 2, v_v_1502_);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v___x_1505_);
v___x_1507_ = v___x_1497_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v_mem_1493_);
lean_ctor_set_uint8(v_reuseFailAlloc_1508_, sizeof(void*)*2 + 16, v_halted_1494_);
lean_ctor_set_uint64(v_reuseFailAlloc_1508_, sizeof(void*)*2 + 8, v_retVal_1495_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
lean_ctor_set_uint64(v___x_1507_, sizeof(void*)*2, v___x_1504_);
return v___x_1507_;
}
}
}
case 5:
{
lean_object* v_rs1_1510_; lean_object* v_rs2_1511_; uint64_t v_offset_1512_; uint64_t v_pc_1513_; lean_object* v_regs_1514_; lean_object* v_mem_1515_; uint8_t v_halted_1516_; uint64_t v_retVal_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1532_; 
v_rs1_1510_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rs1_1510_);
v_rs2_1511_ = lean_ctor_get(v_ins_1404_, 1);
lean_inc(v_rs2_1511_);
v_offset_1512_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1404_, 2);
v_pc_1513_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1514_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1515_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1516_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1517_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1519_ = v_st_1405_;
v_isShared_1520_ = v_isSharedCheck_1532_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_mem_1515_);
lean_inc(v_regs_1514_);
lean_dec(v_st_1405_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1532_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
uint64_t v___x_1521_; uint64_t v_addr_1522_; uint64_t v_v_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___f_1526_; uint64_t v___x_1527_; uint64_t v___x_1528_; lean_object* v___x_1530_; 
lean_inc_ref_n(v_regs_1514_, 2);
v___x_1521_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1514_, v_rs1_1510_);
v_addr_1522_ = lean_uint64_add(v___x_1521_, v_offset_1512_);
v_v_1523_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1514_, v_rs2_1511_);
v___x_1524_ = lean_box_uint64(v_addr_1522_);
v___x_1525_ = lean_box_uint64(v_v_1523_);
v___f_1526_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1526_, 0, v___x_1524_);
lean_closure_set(v___f_1526_, 1, v_mem_1515_);
lean_closure_set(v___f_1526_, 2, v___x_1525_);
v___x_1527_ = 4ULL;
v___x_1528_ = lean_uint64_add(v_pc_1513_, v___x_1527_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 1, v___f_1526_);
v___x_1530_ = v___x_1519_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_regs_1514_);
lean_ctor_set(v_reuseFailAlloc_1531_, 1, v___f_1526_);
lean_ctor_set_uint8(v_reuseFailAlloc_1531_, sizeof(void*)*2 + 16, v_halted_1516_);
lean_ctor_set_uint64(v_reuseFailAlloc_1531_, sizeof(void*)*2 + 8, v_retVal_1517_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
lean_ctor_set_uint64(v___x_1530_, sizeof(void*)*2, v___x_1528_);
return v___x_1530_;
}
}
}
case 6:
{
uint8_t v_cond_1533_; lean_object* v_rs1_1534_; lean_object* v_rs2_1535_; uint64_t v_targetPc_1536_; uint64_t v_pc_1537_; lean_object* v_regs_1538_; lean_object* v_mem_1539_; uint8_t v_halted_1540_; uint64_t v_retVal_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1556_; 
v_cond_1533_ = lean_ctor_get_uint8(v_ins_1404_, sizeof(void*)*2 + 8);
v_rs1_1534_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rs1_1534_);
v_rs2_1535_ = lean_ctor_get(v_ins_1404_, 1);
lean_inc(v_rs2_1535_);
v_targetPc_1536_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1404_, 2);
v_pc_1537_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1538_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1539_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1540_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1541_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1543_ = v_st_1405_;
v_isShared_1544_ = v_isSharedCheck_1556_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_mem_1539_);
lean_inc(v_regs_1538_);
lean_dec(v_st_1405_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1556_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
uint64_t v___x_1545_; uint64_t v___x_1546_; uint8_t v_taken_1547_; 
lean_inc_ref_n(v_regs_1538_, 2);
v___x_1545_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1538_, v_rs1_1534_);
v___x_1546_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1538_, v_rs2_1535_);
v_taken_1547_ = lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond(v_cond_1533_, v___x_1545_, v___x_1546_);
if (v_taken_1547_ == 0)
{
uint64_t v___x_1548_; uint64_t v___x_1549_; lean_object* v___x_1551_; 
v___x_1548_ = 4ULL;
v___x_1549_ = lean_uint64_add(v_pc_1537_, v___x_1548_);
if (v_isShared_1544_ == 0)
{
v___x_1551_ = v___x_1543_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_regs_1538_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v_mem_1539_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, sizeof(void*)*2 + 16, v_halted_1540_);
lean_ctor_set_uint64(v_reuseFailAlloc_1552_, sizeof(void*)*2 + 8, v_retVal_1541_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
lean_ctor_set_uint64(v___x_1551_, sizeof(void*)*2, v___x_1549_);
return v___x_1551_;
}
}
else
{
lean_object* v___x_1554_; 
if (v_isShared_1544_ == 0)
{
v___x_1554_ = v___x_1543_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_regs_1538_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_mem_1539_);
lean_ctor_set_uint8(v_reuseFailAlloc_1555_, sizeof(void*)*2 + 16, v_halted_1540_);
lean_ctor_set_uint64(v_reuseFailAlloc_1555_, sizeof(void*)*2 + 8, v_retVal_1541_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
lean_ctor_set_uint64(v___x_1554_, sizeof(void*)*2, v_targetPc_1536_);
return v___x_1554_;
}
}
}
}
case 7:
{
lean_object* v_rd_1557_; uint64_t v_targetPc_1558_; uint64_t v_pc_1559_; lean_object* v_regs_1560_; lean_object* v_mem_1561_; uint8_t v_halted_1562_; uint64_t v_retVal_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1574_; 
v_rd_1557_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rd_1557_);
v_targetPc_1558_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1404_, 1);
v_pc_1559_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1560_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1561_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1562_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1563_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1565_ = v_st_1405_;
v_isShared_1566_ = v_isSharedCheck_1574_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_mem_1561_);
lean_inc(v_regs_1560_);
lean_dec(v_st_1405_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1574_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
uint64_t v___x_1567_; uint64_t v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1572_; 
v___x_1567_ = 4ULL;
v___x_1568_ = lean_uint64_add(v_pc_1559_, v___x_1567_);
v___x_1569_ = lean_box_uint64(v___x_1568_);
v___x_1570_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1570_, 0, v_regs_1560_);
lean_closure_set(v___x_1570_, 1, v_rd_1557_);
lean_closure_set(v___x_1570_, 2, v___x_1569_);
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 0, v___x_1570_);
v___x_1572_ = v___x_1565_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v_mem_1561_);
lean_ctor_set_uint8(v_reuseFailAlloc_1573_, sizeof(void*)*2 + 16, v_halted_1562_);
lean_ctor_set_uint64(v_reuseFailAlloc_1573_, sizeof(void*)*2 + 8, v_retVal_1563_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
lean_ctor_set_uint64(v___x_1572_, sizeof(void*)*2, v_targetPc_1558_);
return v___x_1572_;
}
}
}
case 8:
{
lean_object* v_rd_1575_; lean_object* v_rs1_1576_; uint64_t v_offset_1577_; uint64_t v_pc_1578_; lean_object* v_regs_1579_; lean_object* v_mem_1580_; uint8_t v_halted_1581_; uint64_t v_retVal_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1595_; 
v_rd_1575_ = lean_ctor_get(v_ins_1404_, 0);
lean_inc(v_rd_1575_);
v_rs1_1576_ = lean_ctor_get(v_ins_1404_, 1);
lean_inc(v_rs1_1576_);
v_offset_1577_ = lean_ctor_get_uint64(v_ins_1404_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1404_, 2);
v_pc_1578_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2);
v_regs_1579_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1580_ = lean_ctor_get(v_st_1405_, 1);
v_halted_1581_ = lean_ctor_get_uint8(v_st_1405_, sizeof(void*)*2 + 16);
v_retVal_1582_ = lean_ctor_get_uint64(v_st_1405_, sizeof(void*)*2 + 8);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1584_ = v_st_1405_;
v_isShared_1585_ = v_isSharedCheck_1595_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_mem_1580_);
lean_inc(v_regs_1579_);
lean_dec(v_st_1405_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1595_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
uint64_t v___x_1586_; uint64_t v_nextPc_1587_; uint64_t v___x_1588_; uint64_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
lean_inc_ref(v_regs_1579_);
v___x_1586_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1579_, v_rs1_1576_);
v_nextPc_1587_ = lean_uint64_add(v___x_1586_, v_offset_1577_);
v___x_1588_ = 4ULL;
v___x_1589_ = lean_uint64_add(v_pc_1578_, v___x_1588_);
v___x_1590_ = lean_box_uint64(v___x_1589_);
v___x_1591_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1591_, 0, v_regs_1579_);
lean_closure_set(v___x_1591_, 1, v_rd_1575_);
lean_closure_set(v___x_1591_, 2, v___x_1590_);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v___x_1591_);
v___x_1593_ = v___x_1584_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v_mem_1580_);
lean_ctor_set_uint8(v_reuseFailAlloc_1594_, sizeof(void*)*2 + 16, v_halted_1581_);
lean_ctor_set_uint64(v_reuseFailAlloc_1594_, sizeof(void*)*2 + 8, v_retVal_1582_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_ctor_set_uint64(v___x_1593_, sizeof(void*)*2, v_nextPc_1587_);
return v___x_1593_;
}
}
}
default: 
{
lean_object* v_regs_1596_; lean_object* v_mem_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1608_; 
v_regs_1596_ = lean_ctor_get(v_st_1405_, 0);
v_mem_1597_ = lean_ctor_get(v_st_1405_, 1);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_st_1405_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1599_ = v_st_1405_;
v_isShared_1600_ = v_isSharedCheck_1608_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_mem_1597_);
lean_inc(v_regs_1596_);
lean_dec(v_st_1405_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1608_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
uint64_t v___x_1601_; uint8_t v___x_1602_; lean_object* v___x_1603_; uint64_t v___x_1604_; lean_object* v___x_1606_; 
v___x_1601_ = 0ULL;
v___x_1602_ = 1;
v___x_1603_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_1596_);
v___x_1604_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1596_, v___x_1603_);
if (v_isShared_1600_ == 0)
{
v___x_1606_ = v___x_1599_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v_regs_1596_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v_mem_1597_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
lean_ctor_set_uint64(v___x_1606_, sizeof(void*)*2, v___x_1601_);
lean_ctor_set_uint8(v___x_1606_, sizeof(void*)*2 + 16, v___x_1602_);
lean_ctor_set_uint64(v___x_1606_, sizeof(void*)*2 + 8, v___x_1604_);
return v___x_1606_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_stepRV(lean_object* v_prog_1609_, lean_object* v_st_1610_){
_start:
{
uint64_t v_pc_1611_; lean_object* v_regs_1612_; lean_object* v_mem_1613_; uint8_t v_halted_1614_; 
v_pc_1611_ = lean_ctor_get_uint64(v_st_1610_, sizeof(void*)*2);
v_regs_1612_ = lean_ctor_get(v_st_1610_, 0);
v_mem_1613_ = lean_ctor_get(v_st_1610_, 1);
v_halted_1614_ = lean_ctor_get_uint8(v_st_1610_, sizeof(void*)*2 + 16);
if (v_halted_1614_ == 0)
{
uint64_t v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = 0ULL;
v___x_1621_ = lean_uint64_dec_eq(v_pc_1611_, v___x_1620_);
if (v___x_1621_ == 0)
{
lean_object* v_code_1622_; lean_object* v___x_1623_; 
v_code_1622_ = lean_ctor_get(v_prog_1609_, 0);
v___x_1623_ = lp_rv2pancake_Rv2Pancake_Spec_fetchInstr(v_code_1622_, v_pc_1611_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1633_; 
lean_inc_ref(v_mem_1613_);
lean_inc_ref(v_regs_1612_);
v_isSharedCheck_1633_ = !lean_is_exclusive(v_st_1610_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; lean_object* v_unused_1635_; 
v_unused_1634_ = lean_ctor_get(v_st_1610_, 1);
lean_dec(v_unused_1634_);
v_unused_1635_ = lean_ctor_get(v_st_1610_, 0);
lean_dec(v_unused_1635_);
v___x_1625_ = v_st_1610_;
v_isShared_1626_ = v_isSharedCheck_1633_;
goto v_resetjp_1624_;
}
else
{
lean_dec(v_st_1610_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1633_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
uint8_t v___x_1627_; lean_object* v___x_1628_; uint64_t v___x_1629_; lean_object* v___x_1631_; 
v___x_1627_ = 1;
v___x_1628_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_1612_);
v___x_1629_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1612_, v___x_1628_);
if (v_isShared_1626_ == 0)
{
v___x_1631_ = v___x_1625_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_regs_1612_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v_mem_1613_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
lean_ctor_set_uint64(v___x_1631_, sizeof(void*)*2, v___x_1620_);
lean_ctor_set_uint8(v___x_1631_, sizeof(void*)*2 + 16, v___x_1627_);
lean_ctor_set_uint64(v___x_1631_, sizeof(void*)*2 + 8, v___x_1629_);
return v___x_1631_;
}
}
}
else
{
lean_object* v_val_1636_; lean_object* v___x_1637_; 
v_val_1636_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_val_1636_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1637_ = lp_rv2pancake_Rv2Pancake_Spec_execRVInstr(v_val_1636_, v_st_1610_);
return v___x_1637_;
}
}
else
{
lean_inc_ref(v_mem_1613_);
lean_inc_ref(v_regs_1612_);
lean_dec_ref(v_st_1610_);
goto v___jp_1615_;
}
}
else
{
lean_inc_ref(v_mem_1613_);
lean_inc_ref(v_regs_1612_);
lean_dec_ref(v_st_1610_);
goto v___jp_1615_;
}
v___jp_1615_:
{
uint8_t v___x_1616_; lean_object* v___x_1617_; uint64_t v___x_1618_; lean_object* v___x_1619_; 
v___x_1616_ = 1;
v___x_1617_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_1612_);
v___x_1618_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1612_, v___x_1617_);
v___x_1619_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v___x_1619_, 0, v_regs_1612_);
lean_ctor_set(v___x_1619_, 1, v_mem_1613_);
lean_ctor_set_uint64(v___x_1619_, sizeof(void*)*2, v_pc_1611_);
lean_ctor_set_uint8(v___x_1619_, sizeof(void*)*2 + 16, v___x_1616_);
lean_ctor_set_uint64(v___x_1619_, sizeof(void*)*2 + 8, v___x_1618_);
return v___x_1619_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_stepRV___boxed(lean_object* v_prog_1638_, lean_object* v_st_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = lp_rv2pancake_Rv2Pancake_Spec_stepRV(v_prog_1638_, v_st_1639_);
lean_dec_ref(v_prog_1638_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV(lean_object* v_prog_1641_, lean_object* v_fuel_1642_, lean_object* v_st_1643_){
_start:
{
lean_object* v_zero_1644_; uint8_t v_isZero_1645_; 
v_zero_1644_ = lean_unsigned_to_nat(0u);
v_isZero_1645_ = lean_nat_dec_eq(v_fuel_1642_, v_zero_1644_);
if (v_isZero_1645_ == 1)
{
lean_dec(v_fuel_1642_);
return v_st_1643_;
}
else
{
uint64_t v_pc_1646_; lean_object* v_regs_1647_; lean_object* v_mem_1648_; uint8_t v_halted_1649_; 
v_pc_1646_ = lean_ctor_get_uint64(v_st_1643_, sizeof(void*)*2);
v_regs_1647_ = lean_ctor_get(v_st_1643_, 0);
v_mem_1648_ = lean_ctor_get(v_st_1643_, 1);
v_halted_1649_ = lean_ctor_get_uint8(v_st_1643_, sizeof(void*)*2 + 16);
if (v_halted_1649_ == 0)
{
uint64_t v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = 0ULL;
v___x_1656_ = lean_uint64_dec_eq(v_pc_1646_, v___x_1655_);
if (v___x_1656_ == 0)
{
lean_object* v_one_1657_; lean_object* v_n_1658_; lean_object* v___x_1659_; 
v_one_1657_ = lean_unsigned_to_nat(1u);
v_n_1658_ = lean_nat_sub(v_fuel_1642_, v_one_1657_);
lean_dec(v_fuel_1642_);
v___x_1659_ = lp_rv2pancake_Rv2Pancake_Spec_stepRV(v_prog_1641_, v_st_1643_);
v_fuel_1642_ = v_n_1658_;
v_st_1643_ = v___x_1659_;
goto _start;
}
else
{
lean_inc_ref(v_mem_1648_);
lean_inc_ref(v_regs_1647_);
lean_dec_ref(v_st_1643_);
lean_dec(v_fuel_1642_);
goto v___jp_1650_;
}
}
else
{
lean_inc_ref(v_mem_1648_);
lean_inc_ref(v_regs_1647_);
lean_dec_ref(v_st_1643_);
lean_dec(v_fuel_1642_);
goto v___jp_1650_;
}
v___jp_1650_:
{
uint8_t v___x_1651_; lean_object* v___x_1652_; uint64_t v___x_1653_; lean_object* v___x_1654_; 
v___x_1651_ = 1;
v___x_1652_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_1647_);
v___x_1653_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1647_, v___x_1652_);
v___x_1654_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v___x_1654_, 0, v_regs_1647_);
lean_ctor_set(v___x_1654_, 1, v_mem_1648_);
lean_ctor_set_uint64(v___x_1654_, sizeof(void*)*2, v_pc_1646_);
lean_ctor_set_uint8(v___x_1654_, sizeof(void*)*2 + 16, v___x_1651_);
lean_ctor_set_uint64(v___x_1654_, sizeof(void*)*2 + 8, v___x_1653_);
return v___x_1654_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV___boxed(lean_object* v_prog_1661_, lean_object* v_fuel_1662_, lean_object* v_st_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = lp_rv2pancake_Rv2Pancake_Spec_runRV(v_prog_1661_, v_fuel_1662_, v_st_1663_);
lean_dec_ref(v_prog_1661_);
return v_res_1664_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
