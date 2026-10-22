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
uint64_t lean_uint64_mod(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
uint64_t lean_uint64_sub(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_instDecidableEqUInt64___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
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
uint64_t lean_uint64_mul(uint64_t, uint64_t);
uint64_t lean_uint64_div(uint64_t, uint64_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_readReg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readReg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_writeReg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_sltWord(uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_sltWord___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_sraWord(uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_sraWord___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_sext32Word(uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_sext32Word___boxed(lean_object*);
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.mul"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.divU"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.remU"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.BinOp.bitAnd"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Rv2Pancake.Spec.BinOp.bitOr"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.BinOp.bitXor"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.shl"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__16_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.shr"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__18_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.sar"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__20_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.eqOp"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__22_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__22_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__23 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__23_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.neOp"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__24 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__24_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__24_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__25 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__25_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.ltU"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__26 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__26_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__26_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__27 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__27_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Rv2Pancake.Spec.BinOp.ltS"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__28 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__28_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__28_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__29 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__29_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.addw"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__30 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__30_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__30_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__31 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__31_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.subw"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__32 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__32_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__32_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__33 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__33_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.mulw"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__34 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__34_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__34_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__35 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__35_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.sllw"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__36 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__36_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__36_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__37 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__37_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.srlw"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__38 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__38_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__38_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__39 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__39_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.BinOp.sraw"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__40 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__40_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__40_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__41 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__41_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43;
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Rv2Pancake.Spec.BranchCond.blt"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__9_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Rv2Pancake.Spec.BranchCond.bge"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__11_value;
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
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_jalrMask;
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
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_sltWord(uint64_t v_a_30_, uint64_t v_b_31_){
_start:
{
uint64_t v___x_32_; uint64_t v___x_33_; uint64_t v___x_34_; uint8_t v___x_35_; 
v___x_32_ = 9223372036854775808ULL;
v___x_33_ = lean_uint64_xor(v_a_30_, v___x_32_);
v___x_34_ = lean_uint64_xor(v_b_31_, v___x_32_);
v___x_35_ = lean_uint64_dec_lt(v___x_33_, v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_sltWord___boxed(lean_object* v_a_36_, lean_object* v_b_37_){
_start:
{
uint64_t v_a_boxed_38_; uint64_t v_b_boxed_39_; uint8_t v_res_40_; lean_object* v_r_41_; 
v_a_boxed_38_ = lean_unbox_uint64(v_a_36_);
lean_dec_ref(v_a_36_);
v_b_boxed_39_ = lean_unbox_uint64(v_b_37_);
lean_dec_ref(v_b_37_);
v_res_40_ = lp_rv2pancake_Rv2Pancake_Spec_sltWord(v_a_boxed_38_, v_b_boxed_39_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_sraWord(uint64_t v_a_42_, uint64_t v_b_43_){
_start:
{
uint64_t v___x_44_; uint64_t v_sh_45_; uint64_t v___x_46_; uint8_t v___x_47_; 
v___x_44_ = 64ULL;
v_sh_45_ = lean_uint64_mod(v_b_43_, v___x_44_);
v___x_46_ = 0ULL;
v___x_47_ = lean_uint64_dec_eq(v_sh_45_, v___x_46_);
if (v___x_47_ == 0)
{
uint64_t v_shifted_48_; uint64_t v___x_49_; uint64_t v___x_50_; uint8_t v___x_51_; 
v_shifted_48_ = lean_uint64_shift_right(v_a_42_, v_sh_45_);
v___x_49_ = 9223372036854775808ULL;
v___x_50_ = lean_uint64_land(v_a_42_, v___x_49_);
v___x_51_ = lean_uint64_dec_eq(v___x_50_, v___x_46_);
if (v___x_51_ == 0)
{
uint64_t v___x_52_; uint64_t v___x_53_; uint64_t v___x_54_; uint64_t v___x_55_; 
v___x_52_ = 18446744073709551615ULL;
v___x_53_ = lean_uint64_sub(v___x_44_, v_sh_45_);
v___x_54_ = lean_uint64_shift_left(v___x_52_, v___x_53_);
v___x_55_ = lean_uint64_lor(v_shifted_48_, v___x_54_);
return v___x_55_;
}
else
{
return v_shifted_48_;
}
}
else
{
return v_a_42_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_sraWord___boxed(lean_object* v_a_56_, lean_object* v_b_57_){
_start:
{
uint64_t v_a_boxed_58_; uint64_t v_b_boxed_59_; uint64_t v_res_60_; lean_object* v_r_61_; 
v_a_boxed_58_ = lean_unbox_uint64(v_a_56_);
lean_dec_ref(v_a_56_);
v_b_boxed_59_ = lean_unbox_uint64(v_b_57_);
lean_dec_ref(v_b_57_);
v_res_60_ = lp_rv2pancake_Rv2Pancake_Spec_sraWord(v_a_boxed_58_, v_b_boxed_59_);
v_r_61_ = lean_box_uint64(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_sext32Word(uint64_t v_w_62_){
_start:
{
uint64_t v___x_63_; uint64_t v_low32_64_; uint64_t v___x_65_; uint64_t v___x_66_; uint64_t v___x_67_; uint8_t v___x_68_; 
v___x_63_ = 4294967295ULL;
v_low32_64_ = lean_uint64_land(v_w_62_, v___x_63_);
v___x_65_ = 2147483648ULL;
v___x_66_ = lean_uint64_land(v_low32_64_, v___x_65_);
v___x_67_ = 0ULL;
v___x_68_ = lean_uint64_dec_eq(v___x_66_, v___x_67_);
if (v___x_68_ == 0)
{
uint64_t v___x_69_; uint64_t v___x_70_; 
v___x_69_ = 18446744069414584320ULL;
v___x_70_ = lean_uint64_lor(v_low32_64_, v___x_69_);
return v___x_70_;
}
else
{
return v_low32_64_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_sext32Word___boxed(lean_object* v_w_71_){
_start:
{
uint64_t v_w_boxed_72_; uint64_t v_res_73_; lean_object* v_r_74_; 
v_w_boxed_72_ = lean_unbox_uint64(v_w_71_);
lean_dec_ref(v_w_71_);
v_res_73_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v_w_boxed_72_);
v_r_74_ = lean_box_uint64(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(uint8_t v_x_75_){
_start:
{
switch(v_x_75_)
{
case 0:
{
lean_object* v___x_76_; 
v___x_76_ = lean_unsigned_to_nat(0u);
return v___x_76_;
}
case 1:
{
lean_object* v___x_77_; 
v___x_77_ = lean_unsigned_to_nat(1u);
return v___x_77_;
}
case 2:
{
lean_object* v___x_78_; 
v___x_78_ = lean_unsigned_to_nat(2u);
return v___x_78_;
}
case 3:
{
lean_object* v___x_79_; 
v___x_79_ = lean_unsigned_to_nat(3u);
return v___x_79_;
}
case 4:
{
lean_object* v___x_80_; 
v___x_80_ = lean_unsigned_to_nat(4u);
return v___x_80_;
}
case 5:
{
lean_object* v___x_81_; 
v___x_81_ = lean_unsigned_to_nat(5u);
return v___x_81_;
}
case 6:
{
lean_object* v___x_82_; 
v___x_82_ = lean_unsigned_to_nat(6u);
return v___x_82_;
}
case 7:
{
lean_object* v___x_83_; 
v___x_83_ = lean_unsigned_to_nat(7u);
return v___x_83_;
}
case 8:
{
lean_object* v___x_84_; 
v___x_84_ = lean_unsigned_to_nat(8u);
return v___x_84_;
}
case 9:
{
lean_object* v___x_85_; 
v___x_85_ = lean_unsigned_to_nat(9u);
return v___x_85_;
}
case 10:
{
lean_object* v___x_86_; 
v___x_86_ = lean_unsigned_to_nat(10u);
return v___x_86_;
}
case 11:
{
lean_object* v___x_87_; 
v___x_87_ = lean_unsigned_to_nat(11u);
return v___x_87_;
}
case 12:
{
lean_object* v___x_88_; 
v___x_88_ = lean_unsigned_to_nat(12u);
return v___x_88_;
}
case 13:
{
lean_object* v___x_89_; 
v___x_89_ = lean_unsigned_to_nat(13u);
return v___x_89_;
}
case 14:
{
lean_object* v___x_90_; 
v___x_90_ = lean_unsigned_to_nat(14u);
return v___x_90_;
}
case 15:
{
lean_object* v___x_91_; 
v___x_91_ = lean_unsigned_to_nat(15u);
return v___x_91_;
}
case 16:
{
lean_object* v___x_92_; 
v___x_92_ = lean_unsigned_to_nat(16u);
return v___x_92_;
}
case 17:
{
lean_object* v___x_93_; 
v___x_93_ = lean_unsigned_to_nat(17u);
return v___x_93_;
}
case 18:
{
lean_object* v___x_94_; 
v___x_94_ = lean_unsigned_to_nat(18u);
return v___x_94_;
}
case 19:
{
lean_object* v___x_95_; 
v___x_95_ = lean_unsigned_to_nat(19u);
return v___x_95_;
}
default: 
{
lean_object* v___x_96_; 
v___x_96_ = lean_unsigned_to_nat(20u);
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx___boxed(lean_object* v_x_97_){
_start:
{
uint8_t v_x_boxed_98_; lean_object* v_res_99_; 
v_x_boxed_98_ = lean_unbox(v_x_97_);
v_res_99_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_x_boxed_98_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg(lean_object* v_k_100_){
_start:
{
lean_inc(v_k_100_);
return v_k_100_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg___boxed(lean_object* v_k_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___redArg(v_k_101_);
lean_dec(v_k_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim(lean_object* v_motive_103_, lean_object* v_ctorIdx_104_, uint8_t v_t_105_, lean_object* v_h_106_, lean_object* v_k_107_){
_start:
{
lean_inc(v_k_107_);
return v_k_107_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim___boxed(lean_object* v_motive_108_, lean_object* v_ctorIdx_109_, lean_object* v_t_110_, lean_object* v_h_111_, lean_object* v_k_112_){
_start:
{
uint8_t v_t_boxed_113_; lean_object* v_res_114_; 
v_t_boxed_113_ = lean_unbox(v_t_110_);
v_res_114_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorElim(v_motive_108_, v_ctorIdx_109_, v_t_boxed_113_, v_h_111_, v_k_112_);
lean_dec(v_k_112_);
lean_dec(v_ctorIdx_109_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg(lean_object* v_add_115_){
_start:
{
lean_inc(v_add_115_);
return v_add_115_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg___boxed(lean_object* v_add_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___redArg(v_add_116_);
lean_dec(v_add_116_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim(lean_object* v_motive_118_, uint8_t v_t_119_, lean_object* v_h_120_, lean_object* v_add_121_){
_start:
{
lean_inc(v_add_121_);
return v_add_121_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim___boxed(lean_object* v_motive_122_, lean_object* v_t_123_, lean_object* v_h_124_, lean_object* v_add_125_){
_start:
{
uint8_t v_t_boxed_126_; lean_object* v_res_127_; 
v_t_boxed_126_ = lean_unbox(v_t_123_);
v_res_127_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_add_elim(v_motive_122_, v_t_boxed_126_, v_h_124_, v_add_125_);
lean_dec(v_add_125_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg(lean_object* v_sub_128_){
_start:
{
lean_inc(v_sub_128_);
return v_sub_128_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg___boxed(lean_object* v_sub_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___redArg(v_sub_129_);
lean_dec(v_sub_129_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim(lean_object* v_motive_131_, uint8_t v_t_132_, lean_object* v_h_133_, lean_object* v_sub_134_){
_start:
{
lean_inc(v_sub_134_);
return v_sub_134_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim___boxed(lean_object* v_motive_135_, lean_object* v_t_136_, lean_object* v_h_137_, lean_object* v_sub_138_){
_start:
{
uint8_t v_t_boxed_139_; lean_object* v_res_140_; 
v_t_boxed_139_ = lean_unbox(v_t_136_);
v_res_140_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sub_elim(v_motive_135_, v_t_boxed_139_, v_h_137_, v_sub_138_);
lean_dec(v_sub_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim___redArg(lean_object* v_mul_141_){
_start:
{
lean_inc(v_mul_141_);
return v_mul_141_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim___redArg___boxed(lean_object* v_mul_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim___redArg(v_mul_142_);
lean_dec(v_mul_142_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim(lean_object* v_motive_144_, uint8_t v_t_145_, lean_object* v_h_146_, lean_object* v_mul_147_){
_start:
{
lean_inc(v_mul_147_);
return v_mul_147_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim___boxed(lean_object* v_motive_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_mul_151_){
_start:
{
uint8_t v_t_boxed_152_; lean_object* v_res_153_; 
v_t_boxed_152_ = lean_unbox(v_t_149_);
v_res_153_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_mul_elim(v_motive_148_, v_t_boxed_152_, v_h_150_, v_mul_151_);
lean_dec(v_mul_151_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim___redArg(lean_object* v_divU_154_){
_start:
{
lean_inc(v_divU_154_);
return v_divU_154_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim___redArg___boxed(lean_object* v_divU_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim___redArg(v_divU_155_);
lean_dec(v_divU_155_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim(lean_object* v_motive_157_, uint8_t v_t_158_, lean_object* v_h_159_, lean_object* v_divU_160_){
_start:
{
lean_inc(v_divU_160_);
return v_divU_160_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim___boxed(lean_object* v_motive_161_, lean_object* v_t_162_, lean_object* v_h_163_, lean_object* v_divU_164_){
_start:
{
uint8_t v_t_boxed_165_; lean_object* v_res_166_; 
v_t_boxed_165_ = lean_unbox(v_t_162_);
v_res_166_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_divU_elim(v_motive_161_, v_t_boxed_165_, v_h_163_, v_divU_164_);
lean_dec(v_divU_164_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim___redArg(lean_object* v_remU_167_){
_start:
{
lean_inc(v_remU_167_);
return v_remU_167_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim___redArg___boxed(lean_object* v_remU_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim___redArg(v_remU_168_);
lean_dec(v_remU_168_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim(lean_object* v_motive_170_, uint8_t v_t_171_, lean_object* v_h_172_, lean_object* v_remU_173_){
_start:
{
lean_inc(v_remU_173_);
return v_remU_173_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim___boxed(lean_object* v_motive_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_remU_177_){
_start:
{
uint8_t v_t_boxed_178_; lean_object* v_res_179_; 
v_t_boxed_178_ = lean_unbox(v_t_175_);
v_res_179_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_remU_elim(v_motive_174_, v_t_boxed_178_, v_h_176_, v_remU_177_);
lean_dec(v_remU_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg(lean_object* v_bitAnd_180_){
_start:
{
lean_inc(v_bitAnd_180_);
return v_bitAnd_180_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg___boxed(lean_object* v_bitAnd_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___redArg(v_bitAnd_181_);
lean_dec(v_bitAnd_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim(lean_object* v_motive_183_, uint8_t v_t_184_, lean_object* v_h_185_, lean_object* v_bitAnd_186_){
_start:
{
lean_inc(v_bitAnd_186_);
return v_bitAnd_186_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim___boxed(lean_object* v_motive_187_, lean_object* v_t_188_, lean_object* v_h_189_, lean_object* v_bitAnd_190_){
_start:
{
uint8_t v_t_boxed_191_; lean_object* v_res_192_; 
v_t_boxed_191_ = lean_unbox(v_t_188_);
v_res_192_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitAnd_elim(v_motive_187_, v_t_boxed_191_, v_h_189_, v_bitAnd_190_);
lean_dec(v_bitAnd_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg(lean_object* v_bitOr_193_){
_start:
{
lean_inc(v_bitOr_193_);
return v_bitOr_193_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg___boxed(lean_object* v_bitOr_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___redArg(v_bitOr_194_);
lean_dec(v_bitOr_194_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim(lean_object* v_motive_196_, uint8_t v_t_197_, lean_object* v_h_198_, lean_object* v_bitOr_199_){
_start:
{
lean_inc(v_bitOr_199_);
return v_bitOr_199_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim___boxed(lean_object* v_motive_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_bitOr_203_){
_start:
{
uint8_t v_t_boxed_204_; lean_object* v_res_205_; 
v_t_boxed_204_ = lean_unbox(v_t_201_);
v_res_205_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitOr_elim(v_motive_200_, v_t_boxed_204_, v_h_202_, v_bitOr_203_);
lean_dec(v_bitOr_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg(lean_object* v_bitXor_206_){
_start:
{
lean_inc(v_bitXor_206_);
return v_bitXor_206_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg___boxed(lean_object* v_bitXor_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___redArg(v_bitXor_207_);
lean_dec(v_bitXor_207_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim(lean_object* v_motive_209_, uint8_t v_t_210_, lean_object* v_h_211_, lean_object* v_bitXor_212_){
_start:
{
lean_inc(v_bitXor_212_);
return v_bitXor_212_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim___boxed(lean_object* v_motive_213_, lean_object* v_t_214_, lean_object* v_h_215_, lean_object* v_bitXor_216_){
_start:
{
uint8_t v_t_boxed_217_; lean_object* v_res_218_; 
v_t_boxed_217_ = lean_unbox(v_t_214_);
v_res_218_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_bitXor_elim(v_motive_213_, v_t_boxed_217_, v_h_215_, v_bitXor_216_);
lean_dec(v_bitXor_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg(lean_object* v_shl_219_){
_start:
{
lean_inc(v_shl_219_);
return v_shl_219_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg___boxed(lean_object* v_shl_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___redArg(v_shl_220_);
lean_dec(v_shl_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim(lean_object* v_motive_222_, uint8_t v_t_223_, lean_object* v_h_224_, lean_object* v_shl_225_){
_start:
{
lean_inc(v_shl_225_);
return v_shl_225_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim___boxed(lean_object* v_motive_226_, lean_object* v_t_227_, lean_object* v_h_228_, lean_object* v_shl_229_){
_start:
{
uint8_t v_t_boxed_230_; lean_object* v_res_231_; 
v_t_boxed_230_ = lean_unbox(v_t_227_);
v_res_231_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shl_elim(v_motive_226_, v_t_boxed_230_, v_h_228_, v_shl_229_);
lean_dec(v_shl_229_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg(lean_object* v_shr_232_){
_start:
{
lean_inc(v_shr_232_);
return v_shr_232_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg___boxed(lean_object* v_shr_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___redArg(v_shr_233_);
lean_dec(v_shr_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim(lean_object* v_motive_235_, uint8_t v_t_236_, lean_object* v_h_237_, lean_object* v_shr_238_){
_start:
{
lean_inc(v_shr_238_);
return v_shr_238_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim___boxed(lean_object* v_motive_239_, lean_object* v_t_240_, lean_object* v_h_241_, lean_object* v_shr_242_){
_start:
{
uint8_t v_t_boxed_243_; lean_object* v_res_244_; 
v_t_boxed_243_ = lean_unbox(v_t_240_);
v_res_244_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_shr_elim(v_motive_239_, v_t_boxed_243_, v_h_241_, v_shr_242_);
lean_dec(v_shr_242_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim___redArg(lean_object* v_sar_245_){
_start:
{
lean_inc(v_sar_245_);
return v_sar_245_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim___redArg___boxed(lean_object* v_sar_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim___redArg(v_sar_246_);
lean_dec(v_sar_246_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim(lean_object* v_motive_248_, uint8_t v_t_249_, lean_object* v_h_250_, lean_object* v_sar_251_){
_start:
{
lean_inc(v_sar_251_);
return v_sar_251_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim___boxed(lean_object* v_motive_252_, lean_object* v_t_253_, lean_object* v_h_254_, lean_object* v_sar_255_){
_start:
{
uint8_t v_t_boxed_256_; lean_object* v_res_257_; 
v_t_boxed_256_ = lean_unbox(v_t_253_);
v_res_257_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sar_elim(v_motive_252_, v_t_boxed_256_, v_h_254_, v_sar_255_);
lean_dec(v_sar_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg(lean_object* v_eqOp_258_){
_start:
{
lean_inc(v_eqOp_258_);
return v_eqOp_258_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg___boxed(lean_object* v_eqOp_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___redArg(v_eqOp_259_);
lean_dec(v_eqOp_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim(lean_object* v_motive_261_, uint8_t v_t_262_, lean_object* v_h_263_, lean_object* v_eqOp_264_){
_start:
{
lean_inc(v_eqOp_264_);
return v_eqOp_264_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim___boxed(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_eqOp_268_){
_start:
{
uint8_t v_t_boxed_269_; lean_object* v_res_270_; 
v_t_boxed_269_ = lean_unbox(v_t_266_);
v_res_270_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_eqOp_elim(v_motive_265_, v_t_boxed_269_, v_h_267_, v_eqOp_268_);
lean_dec(v_eqOp_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg(lean_object* v_neOp_271_){
_start:
{
lean_inc(v_neOp_271_);
return v_neOp_271_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg___boxed(lean_object* v_neOp_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___redArg(v_neOp_272_);
lean_dec(v_neOp_272_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim(lean_object* v_motive_274_, uint8_t v_t_275_, lean_object* v_h_276_, lean_object* v_neOp_277_){
_start:
{
lean_inc(v_neOp_277_);
return v_neOp_277_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim___boxed(lean_object* v_motive_278_, lean_object* v_t_279_, lean_object* v_h_280_, lean_object* v_neOp_281_){
_start:
{
uint8_t v_t_boxed_282_; lean_object* v_res_283_; 
v_t_boxed_282_ = lean_unbox(v_t_279_);
v_res_283_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_neOp_elim(v_motive_278_, v_t_boxed_282_, v_h_280_, v_neOp_281_);
lean_dec(v_neOp_281_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg(lean_object* v_ltU_284_){
_start:
{
lean_inc(v_ltU_284_);
return v_ltU_284_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg___boxed(lean_object* v_ltU_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___redArg(v_ltU_285_);
lean_dec(v_ltU_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim(lean_object* v_motive_287_, uint8_t v_t_288_, lean_object* v_h_289_, lean_object* v_ltU_290_){
_start:
{
lean_inc(v_ltU_290_);
return v_ltU_290_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim___boxed(lean_object* v_motive_291_, lean_object* v_t_292_, lean_object* v_h_293_, lean_object* v_ltU_294_){
_start:
{
uint8_t v_t_boxed_295_; lean_object* v_res_296_; 
v_t_boxed_295_ = lean_unbox(v_t_292_);
v_res_296_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltU_elim(v_motive_291_, v_t_boxed_295_, v_h_293_, v_ltU_294_);
lean_dec(v_ltU_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim___redArg(lean_object* v_ltS_297_){
_start:
{
lean_inc(v_ltS_297_);
return v_ltS_297_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim___redArg___boxed(lean_object* v_ltS_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim___redArg(v_ltS_298_);
lean_dec(v_ltS_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim(lean_object* v_motive_300_, uint8_t v_t_301_, lean_object* v_h_302_, lean_object* v_ltS_303_){
_start:
{
lean_inc(v_ltS_303_);
return v_ltS_303_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim___boxed(lean_object* v_motive_304_, lean_object* v_t_305_, lean_object* v_h_306_, lean_object* v_ltS_307_){
_start:
{
uint8_t v_t_boxed_308_; lean_object* v_res_309_; 
v_t_boxed_308_ = lean_unbox(v_t_305_);
v_res_309_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ltS_elim(v_motive_304_, v_t_boxed_308_, v_h_306_, v_ltS_307_);
lean_dec(v_ltS_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim___redArg(lean_object* v_addw_310_){
_start:
{
lean_inc(v_addw_310_);
return v_addw_310_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim___redArg___boxed(lean_object* v_addw_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim___redArg(v_addw_311_);
lean_dec(v_addw_311_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim(lean_object* v_motive_313_, uint8_t v_t_314_, lean_object* v_h_315_, lean_object* v_addw_316_){
_start:
{
lean_inc(v_addw_316_);
return v_addw_316_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim___boxed(lean_object* v_motive_317_, lean_object* v_t_318_, lean_object* v_h_319_, lean_object* v_addw_320_){
_start:
{
uint8_t v_t_boxed_321_; lean_object* v_res_322_; 
v_t_boxed_321_ = lean_unbox(v_t_318_);
v_res_322_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_addw_elim(v_motive_317_, v_t_boxed_321_, v_h_319_, v_addw_320_);
lean_dec(v_addw_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim___redArg(lean_object* v_subw_323_){
_start:
{
lean_inc(v_subw_323_);
return v_subw_323_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim___redArg___boxed(lean_object* v_subw_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim___redArg(v_subw_324_);
lean_dec(v_subw_324_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim(lean_object* v_motive_326_, uint8_t v_t_327_, lean_object* v_h_328_, lean_object* v_subw_329_){
_start:
{
lean_inc(v_subw_329_);
return v_subw_329_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim___boxed(lean_object* v_motive_330_, lean_object* v_t_331_, lean_object* v_h_332_, lean_object* v_subw_333_){
_start:
{
uint8_t v_t_boxed_334_; lean_object* v_res_335_; 
v_t_boxed_334_ = lean_unbox(v_t_331_);
v_res_335_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_subw_elim(v_motive_330_, v_t_boxed_334_, v_h_332_, v_subw_333_);
lean_dec(v_subw_333_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim___redArg(lean_object* v_mulw_336_){
_start:
{
lean_inc(v_mulw_336_);
return v_mulw_336_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim___redArg___boxed(lean_object* v_mulw_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim___redArg(v_mulw_337_);
lean_dec(v_mulw_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim(lean_object* v_motive_339_, uint8_t v_t_340_, lean_object* v_h_341_, lean_object* v_mulw_342_){
_start:
{
lean_inc(v_mulw_342_);
return v_mulw_342_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim___boxed(lean_object* v_motive_343_, lean_object* v_t_344_, lean_object* v_h_345_, lean_object* v_mulw_346_){
_start:
{
uint8_t v_t_boxed_347_; lean_object* v_res_348_; 
v_t_boxed_347_ = lean_unbox(v_t_344_);
v_res_348_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_mulw_elim(v_motive_343_, v_t_boxed_347_, v_h_345_, v_mulw_346_);
lean_dec(v_mulw_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim___redArg(lean_object* v_sllw_349_){
_start:
{
lean_inc(v_sllw_349_);
return v_sllw_349_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim___redArg___boxed(lean_object* v_sllw_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim___redArg(v_sllw_350_);
lean_dec(v_sllw_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim(lean_object* v_motive_352_, uint8_t v_t_353_, lean_object* v_h_354_, lean_object* v_sllw_355_){
_start:
{
lean_inc(v_sllw_355_);
return v_sllw_355_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim___boxed(lean_object* v_motive_356_, lean_object* v_t_357_, lean_object* v_h_358_, lean_object* v_sllw_359_){
_start:
{
uint8_t v_t_boxed_360_; lean_object* v_res_361_; 
v_t_boxed_360_ = lean_unbox(v_t_357_);
v_res_361_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sllw_elim(v_motive_356_, v_t_boxed_360_, v_h_358_, v_sllw_359_);
lean_dec(v_sllw_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim___redArg(lean_object* v_srlw_362_){
_start:
{
lean_inc(v_srlw_362_);
return v_srlw_362_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim___redArg___boxed(lean_object* v_srlw_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim___redArg(v_srlw_363_);
lean_dec(v_srlw_363_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim(lean_object* v_motive_365_, uint8_t v_t_366_, lean_object* v_h_367_, lean_object* v_srlw_368_){
_start:
{
lean_inc(v_srlw_368_);
return v_srlw_368_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim___boxed(lean_object* v_motive_369_, lean_object* v_t_370_, lean_object* v_h_371_, lean_object* v_srlw_372_){
_start:
{
uint8_t v_t_boxed_373_; lean_object* v_res_374_; 
v_t_boxed_373_ = lean_unbox(v_t_370_);
v_res_374_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_srlw_elim(v_motive_369_, v_t_boxed_373_, v_h_371_, v_srlw_372_);
lean_dec(v_srlw_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim___redArg(lean_object* v_sraw_375_){
_start:
{
lean_inc(v_sraw_375_);
return v_sraw_375_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim___redArg___boxed(lean_object* v_sraw_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim___redArg(v_sraw_376_);
lean_dec(v_sraw_376_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim(lean_object* v_motive_378_, uint8_t v_t_379_, lean_object* v_h_380_, lean_object* v_sraw_381_){
_start:
{
lean_inc(v_sraw_381_);
return v_sraw_381_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim___boxed(lean_object* v_motive_382_, lean_object* v_t_383_, lean_object* v_h_384_, lean_object* v_sraw_385_){
_start:
{
uint8_t v_t_boxed_386_; lean_object* v_res_387_; 
v_t_boxed_386_ = lean_unbox(v_t_383_);
v_res_387_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_sraw_elim(v_motive_382_, v_t_boxed_386_, v_h_384_, v_sraw_385_);
lean_dec(v_sraw_385_);
return v_res_387_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat(lean_object* v_n_388_){
_start:
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = lean_unsigned_to_nat(9u);
v___x_390_ = lean_nat_dec_le(v_n_388_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = lean_unsigned_to_nat(14u);
v___x_392_ = lean_nat_dec_le(v_n_388_, v___x_391_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_393_ = lean_unsigned_to_nat(17u);
v___x_394_ = lean_nat_dec_le(v_n_388_, v___x_393_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = lean_unsigned_to_nat(18u);
v___x_396_ = lean_nat_dec_le(v_n_388_, v___x_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = lean_unsigned_to_nat(19u);
v___x_398_ = lean_nat_dec_le(v_n_388_, v___x_397_);
if (v___x_398_ == 0)
{
uint8_t v___x_399_; 
v___x_399_ = 20;
return v___x_399_;
}
else
{
uint8_t v___x_400_; 
v___x_400_ = 19;
return v___x_400_;
}
}
else
{
uint8_t v___x_401_; 
v___x_401_ = 18;
return v___x_401_;
}
}
else
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = lean_unsigned_to_nat(15u);
v___x_403_ = lean_nat_dec_le(v_n_388_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_404_ = lean_unsigned_to_nat(16u);
v___x_405_ = lean_nat_dec_le(v_n_388_, v___x_404_);
if (v___x_405_ == 0)
{
uint8_t v___x_406_; 
v___x_406_ = 17;
return v___x_406_;
}
else
{
uint8_t v___x_407_; 
v___x_407_ = 16;
return v___x_407_;
}
}
else
{
uint8_t v___x_408_; 
v___x_408_ = 15;
return v___x_408_;
}
}
}
else
{
lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_409_ = lean_unsigned_to_nat(11u);
v___x_410_ = lean_nat_dec_le(v_n_388_, v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(12u);
v___x_412_ = lean_nat_dec_le(v_n_388_, v___x_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; uint8_t v___x_414_; 
v___x_413_ = lean_unsigned_to_nat(13u);
v___x_414_ = lean_nat_dec_le(v_n_388_, v___x_413_);
if (v___x_414_ == 0)
{
uint8_t v___x_415_; 
v___x_415_ = 14;
return v___x_415_;
}
else
{
uint8_t v___x_416_; 
v___x_416_ = 13;
return v___x_416_;
}
}
else
{
uint8_t v___x_417_; 
v___x_417_ = 12;
return v___x_417_;
}
}
else
{
lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_418_ = lean_unsigned_to_nat(10u);
v___x_419_ = lean_nat_dec_le(v_n_388_, v___x_418_);
if (v___x_419_ == 0)
{
uint8_t v___x_420_; 
v___x_420_ = 11;
return v___x_420_;
}
else
{
uint8_t v___x_421_; 
v___x_421_ = 10;
return v___x_421_;
}
}
}
}
else
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = lean_unsigned_to_nat(4u);
v___x_423_ = lean_nat_dec_le(v_n_388_, v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = lean_unsigned_to_nat(6u);
v___x_425_ = lean_nat_dec_le(v_n_388_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_unsigned_to_nat(7u);
v___x_427_ = lean_nat_dec_le(v_n_388_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_428_ = lean_unsigned_to_nat(8u);
v___x_429_ = lean_nat_dec_le(v_n_388_, v___x_428_);
if (v___x_429_ == 0)
{
uint8_t v___x_430_; 
v___x_430_ = 9;
return v___x_430_;
}
else
{
uint8_t v___x_431_; 
v___x_431_ = 8;
return v___x_431_;
}
}
else
{
uint8_t v___x_432_; 
v___x_432_ = 7;
return v___x_432_;
}
}
else
{
lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_433_ = lean_unsigned_to_nat(5u);
v___x_434_ = lean_nat_dec_le(v_n_388_, v___x_433_);
if (v___x_434_ == 0)
{
uint8_t v___x_435_; 
v___x_435_ = 6;
return v___x_435_;
}
else
{
uint8_t v___x_436_; 
v___x_436_ = 5;
return v___x_436_;
}
}
}
else
{
lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_437_ = lean_unsigned_to_nat(1u);
v___x_438_ = lean_nat_dec_le(v_n_388_, v___x_437_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; uint8_t v___x_440_; 
v___x_439_ = lean_unsigned_to_nat(2u);
v___x_440_ = lean_nat_dec_le(v_n_388_, v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_441_ = lean_unsigned_to_nat(3u);
v___x_442_ = lean_nat_dec_le(v_n_388_, v___x_441_);
if (v___x_442_ == 0)
{
uint8_t v___x_443_; 
v___x_443_ = 4;
return v___x_443_;
}
else
{
uint8_t v___x_444_; 
v___x_444_ = 3;
return v___x_444_;
}
}
else
{
uint8_t v___x_445_; 
v___x_445_ = 2;
return v___x_445_;
}
}
else
{
lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = lean_nat_dec_le(v_n_388_, v___x_446_);
if (v___x_447_ == 0)
{
uint8_t v___x_448_; 
v___x_448_ = 1;
return v___x_448_;
}
else
{
uint8_t v___x_449_; 
v___x_449_ = 0;
return v___x_449_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat___boxed(lean_object* v_n_450_){
_start:
{
uint8_t v_res_451_; lean_object* v_r_452_; 
v_res_451_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ofNat(v_n_450_);
lean_dec(v_n_450_);
v_r_452_ = lean_box(v_res_451_);
return v_r_452_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp(uint8_t v_x_453_, uint8_t v_y_454_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_455_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_x_453_);
v___x_456_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_y_454_);
v___x_457_ = lean_nat_dec_eq(v___x_455_, v___x_456_);
lean_dec(v___x_456_);
lean_dec(v___x_455_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp___boxed(lean_object* v_x_458_, lean_object* v_y_459_){
_start:
{
uint8_t v_x_20__boxed_460_; uint8_t v_y_21__boxed_461_; uint8_t v_res_462_; lean_object* v_r_463_; 
v_x_20__boxed_460_ = lean_unbox(v_x_458_);
v_y_21__boxed_461_ = lean_unbox(v_y_459_);
v_res_462_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBinOp(v_x_20__boxed_460_, v_y_21__boxed_461_);
v_r_463_ = lean_box(v_res_462_);
return v_r_463_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = lean_unsigned_to_nat(2u);
v___x_528_ = lean_nat_to_int(v___x_527_);
return v___x_528_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_nat_to_int(v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(uint8_t v_x_531_, lean_object* v_prec_532_){
_start:
{
lean_object* v___y_534_; lean_object* v___y_541_; lean_object* v___y_548_; lean_object* v___y_555_; lean_object* v___y_562_; lean_object* v___y_569_; lean_object* v___y_576_; lean_object* v___y_583_; lean_object* v___y_590_; lean_object* v___y_597_; lean_object* v___y_604_; lean_object* v___y_611_; lean_object* v___y_618_; lean_object* v___y_625_; lean_object* v___y_632_; lean_object* v___y_639_; lean_object* v___y_646_; lean_object* v___y_653_; lean_object* v___y_660_; lean_object* v___y_667_; lean_object* v___y_674_; 
switch(v_x_531_)
{
case 0:
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(1024u);
v___x_681_ = lean_nat_dec_le(v___x_680_, v_prec_532_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; 
v___x_682_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_534_ = v___x_682_;
goto v___jp_533_;
}
else
{
lean_object* v___x_683_; 
v___x_683_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_534_ = v___x_683_;
goto v___jp_533_;
}
}
case 1:
{
lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_684_ = lean_unsigned_to_nat(1024u);
v___x_685_ = lean_nat_dec_le(v___x_684_, v_prec_532_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; 
v___x_686_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_541_ = v___x_686_;
goto v___jp_540_;
}
else
{
lean_object* v___x_687_; 
v___x_687_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_541_ = v___x_687_;
goto v___jp_540_;
}
}
case 2:
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = lean_unsigned_to_nat(1024u);
v___x_689_ = lean_nat_dec_le(v___x_688_, v_prec_532_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; 
v___x_690_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_548_ = v___x_690_;
goto v___jp_547_;
}
else
{
lean_object* v___x_691_; 
v___x_691_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_548_ = v___x_691_;
goto v___jp_547_;
}
}
case 3:
{
lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_692_ = lean_unsigned_to_nat(1024u);
v___x_693_ = lean_nat_dec_le(v___x_692_, v_prec_532_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; 
v___x_694_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_555_ = v___x_694_;
goto v___jp_554_;
}
else
{
lean_object* v___x_695_; 
v___x_695_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_555_ = v___x_695_;
goto v___jp_554_;
}
}
case 4:
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = lean_unsigned_to_nat(1024u);
v___x_697_ = lean_nat_dec_le(v___x_696_, v_prec_532_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; 
v___x_698_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_562_ = v___x_698_;
goto v___jp_561_;
}
else
{
lean_object* v___x_699_; 
v___x_699_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_562_ = v___x_699_;
goto v___jp_561_;
}
}
case 5:
{
lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_700_ = lean_unsigned_to_nat(1024u);
v___x_701_ = lean_nat_dec_le(v___x_700_, v_prec_532_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
v___x_702_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_569_ = v___x_702_;
goto v___jp_568_;
}
else
{
lean_object* v___x_703_; 
v___x_703_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_569_ = v___x_703_;
goto v___jp_568_;
}
}
case 6:
{
lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_704_ = lean_unsigned_to_nat(1024u);
v___x_705_ = lean_nat_dec_le(v___x_704_, v_prec_532_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; 
v___x_706_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_576_ = v___x_706_;
goto v___jp_575_;
}
else
{
lean_object* v___x_707_; 
v___x_707_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_576_ = v___x_707_;
goto v___jp_575_;
}
}
case 7:
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = lean_unsigned_to_nat(1024u);
v___x_709_ = lean_nat_dec_le(v___x_708_, v_prec_532_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
v___x_710_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_583_ = v___x_710_;
goto v___jp_582_;
}
else
{
lean_object* v___x_711_; 
v___x_711_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_583_ = v___x_711_;
goto v___jp_582_;
}
}
case 8:
{
lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = lean_unsigned_to_nat(1024u);
v___x_713_ = lean_nat_dec_le(v___x_712_, v_prec_532_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; 
v___x_714_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_590_ = v___x_714_;
goto v___jp_589_;
}
else
{
lean_object* v___x_715_; 
v___x_715_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_590_ = v___x_715_;
goto v___jp_589_;
}
}
case 9:
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = lean_unsigned_to_nat(1024u);
v___x_717_ = lean_nat_dec_le(v___x_716_, v_prec_532_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
v___x_718_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_597_ = v___x_718_;
goto v___jp_596_;
}
else
{
lean_object* v___x_719_; 
v___x_719_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_597_ = v___x_719_;
goto v___jp_596_;
}
}
case 10:
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = lean_unsigned_to_nat(1024u);
v___x_721_ = lean_nat_dec_le(v___x_720_, v_prec_532_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
v___x_722_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_604_ = v___x_722_;
goto v___jp_603_;
}
else
{
lean_object* v___x_723_; 
v___x_723_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_604_ = v___x_723_;
goto v___jp_603_;
}
}
case 11:
{
lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_724_ = lean_unsigned_to_nat(1024u);
v___x_725_ = lean_nat_dec_le(v___x_724_, v_prec_532_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; 
v___x_726_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_611_ = v___x_726_;
goto v___jp_610_;
}
else
{
lean_object* v___x_727_; 
v___x_727_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_611_ = v___x_727_;
goto v___jp_610_;
}
}
case 12:
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = lean_unsigned_to_nat(1024u);
v___x_729_ = lean_nat_dec_le(v___x_728_, v_prec_532_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_618_ = v___x_730_;
goto v___jp_617_;
}
else
{
lean_object* v___x_731_; 
v___x_731_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_618_ = v___x_731_;
goto v___jp_617_;
}
}
case 13:
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = lean_unsigned_to_nat(1024u);
v___x_733_ = lean_nat_dec_le(v___x_732_, v_prec_532_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; 
v___x_734_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_625_ = v___x_734_;
goto v___jp_624_;
}
else
{
lean_object* v___x_735_; 
v___x_735_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_625_ = v___x_735_;
goto v___jp_624_;
}
}
case 14:
{
lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_736_ = lean_unsigned_to_nat(1024u);
v___x_737_ = lean_nat_dec_le(v___x_736_, v_prec_532_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; 
v___x_738_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_632_ = v___x_738_;
goto v___jp_631_;
}
else
{
lean_object* v___x_739_; 
v___x_739_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_632_ = v___x_739_;
goto v___jp_631_;
}
}
case 15:
{
lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_740_ = lean_unsigned_to_nat(1024u);
v___x_741_ = lean_nat_dec_le(v___x_740_, v_prec_532_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
v___x_742_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_639_ = v___x_742_;
goto v___jp_638_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_639_ = v___x_743_;
goto v___jp_638_;
}
}
case 16:
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = lean_unsigned_to_nat(1024u);
v___x_745_ = lean_nat_dec_le(v___x_744_, v_prec_532_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_646_ = v___x_746_;
goto v___jp_645_;
}
else
{
lean_object* v___x_747_; 
v___x_747_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_646_ = v___x_747_;
goto v___jp_645_;
}
}
case 17:
{
lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = lean_unsigned_to_nat(1024u);
v___x_749_ = lean_nat_dec_le(v___x_748_, v_prec_532_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; 
v___x_750_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_653_ = v___x_750_;
goto v___jp_652_;
}
else
{
lean_object* v___x_751_; 
v___x_751_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_653_ = v___x_751_;
goto v___jp_652_;
}
}
case 18:
{
lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_752_ = lean_unsigned_to_nat(1024u);
v___x_753_ = lean_nat_dec_le(v___x_752_, v_prec_532_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; 
v___x_754_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_660_ = v___x_754_;
goto v___jp_659_;
}
else
{
lean_object* v___x_755_; 
v___x_755_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_660_ = v___x_755_;
goto v___jp_659_;
}
}
case 19:
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_unsigned_to_nat(1024u);
v___x_757_ = lean_nat_dec_le(v___x_756_, v_prec_532_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; 
v___x_758_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_667_ = v___x_758_;
goto v___jp_666_;
}
else
{
lean_object* v___x_759_; 
v___x_759_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_667_ = v___x_759_;
goto v___jp_666_;
}
}
default: 
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = lean_unsigned_to_nat(1024u);
v___x_761_ = lean_nat_dec_le(v___x_760_, v_prec_532_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; 
v___x_762_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_674_ = v___x_762_;
goto v___jp_673_;
}
else
{
lean_object* v___x_763_; 
v___x_763_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_674_ = v___x_763_;
goto v___jp_673_;
}
}
}
v___jp_533_:
{
lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_535_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__1));
lean_inc(v___y_534_);
v___x_536_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_536_, 0, v___y_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = 0;
v___x_538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set_uint8(v___x_538_, sizeof(void*)*1, v___x_537_);
v___x_539_ = l_Repr_addAppParen(v___x_538_, v_prec_532_);
return v___x_539_;
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_542_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__3));
lean_inc(v___y_541_);
v___x_543_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_543_, 0, v___y_541_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v___x_544_ = 0;
v___x_545_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set_uint8(v___x_545_, sizeof(void*)*1, v___x_544_);
v___x_546_ = l_Repr_addAppParen(v___x_545_, v_prec_532_);
return v___x_546_;
}
v___jp_547_:
{
lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_549_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__5));
lean_inc(v___y_548_);
v___x_550_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_550_, 0, v___y_548_);
lean_ctor_set(v___x_550_, 1, v___x_549_);
v___x_551_ = 0;
v___x_552_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_552_, 0, v___x_550_);
lean_ctor_set_uint8(v___x_552_, sizeof(void*)*1, v___x_551_);
v___x_553_ = l_Repr_addAppParen(v___x_552_, v_prec_532_);
return v___x_553_;
}
v___jp_554_:
{
lean_object* v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_556_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__7));
lean_inc(v___y_555_);
v___x_557_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_557_, 0, v___y_555_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = 0;
v___x_559_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_559_, 0, v___x_557_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*1, v___x_558_);
v___x_560_ = l_Repr_addAppParen(v___x_559_, v_prec_532_);
return v___x_560_;
}
v___jp_561_:
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_563_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__9));
lean_inc(v___y_562_);
v___x_564_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_564_, 0, v___y_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = 0;
v___x_566_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_566_, 0, v___x_564_);
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*1, v___x_565_);
v___x_567_ = l_Repr_addAppParen(v___x_566_, v_prec_532_);
return v___x_567_;
}
v___jp_568_:
{
lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_570_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__11));
lean_inc(v___y_569_);
v___x_571_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_571_, 0, v___y_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = 0;
v___x_573_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_573_, 0, v___x_571_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*1, v___x_572_);
v___x_574_ = l_Repr_addAppParen(v___x_573_, v_prec_532_);
return v___x_574_;
}
v___jp_575_:
{
lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_577_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__13));
lean_inc(v___y_576_);
v___x_578_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_578_, 0, v___y_576_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = 0;
v___x_580_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set_uint8(v___x_580_, sizeof(void*)*1, v___x_579_);
v___x_581_ = l_Repr_addAppParen(v___x_580_, v_prec_532_);
return v___x_581_;
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_585_; uint8_t v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_584_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__15));
lean_inc(v___y_583_);
v___x_585_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_585_, 0, v___y_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = 0;
v___x_587_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set_uint8(v___x_587_, sizeof(void*)*1, v___x_586_);
v___x_588_ = l_Repr_addAppParen(v___x_587_, v_prec_532_);
return v___x_588_;
}
v___jp_589_:
{
lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_591_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__17));
lean_inc(v___y_590_);
v___x_592_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_592_, 0, v___y_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = 0;
v___x_594_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_594_, 0, v___x_592_);
lean_ctor_set_uint8(v___x_594_, sizeof(void*)*1, v___x_593_);
v___x_595_ = l_Repr_addAppParen(v___x_594_, v_prec_532_);
return v___x_595_;
}
v___jp_596_:
{
lean_object* v___x_598_; lean_object* v___x_599_; uint8_t v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_598_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__19));
lean_inc(v___y_597_);
v___x_599_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_599_, 0, v___y_597_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = 0;
v___x_601_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set_uint8(v___x_601_, sizeof(void*)*1, v___x_600_);
v___x_602_ = l_Repr_addAppParen(v___x_601_, v_prec_532_);
return v___x_602_;
}
v___jp_603_:
{
lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_605_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__21));
lean_inc(v___y_604_);
v___x_606_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_606_, 0, v___y_604_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
v___x_607_ = 0;
v___x_608_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set_uint8(v___x_608_, sizeof(void*)*1, v___x_607_);
v___x_609_ = l_Repr_addAppParen(v___x_608_, v_prec_532_);
return v___x_609_;
}
v___jp_610_:
{
lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_612_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__23));
lean_inc(v___y_611_);
v___x_613_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_613_, 0, v___y_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = 0;
v___x_615_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_615_, 0, v___x_613_);
lean_ctor_set_uint8(v___x_615_, sizeof(void*)*1, v___x_614_);
v___x_616_ = l_Repr_addAppParen(v___x_615_, v_prec_532_);
return v___x_616_;
}
v___jp_617_:
{
lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_619_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__25));
lean_inc(v___y_618_);
v___x_620_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_620_, 0, v___y_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = 0;
v___x_622_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set_uint8(v___x_622_, sizeof(void*)*1, v___x_621_);
v___x_623_ = l_Repr_addAppParen(v___x_622_, v_prec_532_);
return v___x_623_;
}
v___jp_624_:
{
lean_object* v___x_626_; lean_object* v___x_627_; uint8_t v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_626_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__27));
lean_inc(v___y_625_);
v___x_627_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_627_, 0, v___y_625_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
v___x_628_ = 0;
v___x_629_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_629_, 0, v___x_627_);
lean_ctor_set_uint8(v___x_629_, sizeof(void*)*1, v___x_628_);
v___x_630_ = l_Repr_addAppParen(v___x_629_, v_prec_532_);
return v___x_630_;
}
v___jp_631_:
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_633_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__29));
lean_inc(v___y_632_);
v___x_634_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_634_, 0, v___y_632_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = 0;
v___x_636_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_636_, 0, v___x_634_);
lean_ctor_set_uint8(v___x_636_, sizeof(void*)*1, v___x_635_);
v___x_637_ = l_Repr_addAppParen(v___x_636_, v_prec_532_);
return v___x_637_;
}
v___jp_638_:
{
lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_640_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__31));
lean_inc(v___y_639_);
v___x_641_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_641_, 0, v___y_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = 0;
v___x_643_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set_uint8(v___x_643_, sizeof(void*)*1, v___x_642_);
v___x_644_ = l_Repr_addAppParen(v___x_643_, v_prec_532_);
return v___x_644_;
}
v___jp_645_:
{
lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_647_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__33));
lean_inc(v___y_646_);
v___x_648_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_648_, 0, v___y_646_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = 0;
v___x_650_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set_uint8(v___x_650_, sizeof(void*)*1, v___x_649_);
v___x_651_ = l_Repr_addAppParen(v___x_650_, v_prec_532_);
return v___x_651_;
}
v___jp_652_:
{
lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_654_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__35));
lean_inc(v___y_653_);
v___x_655_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_655_, 0, v___y_653_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = 0;
v___x_657_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set_uint8(v___x_657_, sizeof(void*)*1, v___x_656_);
v___x_658_ = l_Repr_addAppParen(v___x_657_, v_prec_532_);
return v___x_658_;
}
v___jp_659_:
{
lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_661_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__37));
lean_inc(v___y_660_);
v___x_662_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_662_, 0, v___y_660_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = 0;
v___x_664_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set_uint8(v___x_664_, sizeof(void*)*1, v___x_663_);
v___x_665_ = l_Repr_addAppParen(v___x_664_, v_prec_532_);
return v___x_665_;
}
v___jp_666_:
{
lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_668_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__39));
lean_inc(v___y_667_);
v___x_669_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_669_, 0, v___y_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = 0;
v___x_671_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_671_, 0, v___x_669_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*1, v___x_670_);
v___x_672_ = l_Repr_addAppParen(v___x_671_, v_prec_532_);
return v___x_672_;
}
v___jp_673_:
{
lean_object* v___x_675_; lean_object* v___x_676_; uint8_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_675_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__41));
lean_inc(v___y_674_);
v___x_676_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_676_, 0, v___y_674_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = 0;
v___x_678_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_678_, 0, v___x_676_);
lean_ctor_set_uint8(v___x_678_, sizeof(void*)*1, v___x_677_);
v___x_679_ = l_Repr_addAppParen(v___x_678_, v_prec_532_);
return v___x_679_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___boxed(lean_object* v_x_764_, lean_object* v_prec_765_){
_start:
{
uint8_t v_x_1143__boxed_766_; lean_object* v_res_767_; 
v_x_1143__boxed_766_ = lean_unbox(v_x_764_);
v_res_767_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(v_x_1143__boxed_766_, v_prec_765_);
lean_dec(v_prec_765_);
return v_res_767_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(uint8_t v_op_770_, uint64_t v_a_771_, uint64_t v_b_772_){
_start:
{
switch(v_op_770_)
{
case 0:
{
uint64_t v___x_773_; 
v___x_773_ = lean_uint64_add(v_a_771_, v_b_772_);
return v___x_773_;
}
case 1:
{
uint64_t v___x_774_; 
v___x_774_ = lean_uint64_sub(v_a_771_, v_b_772_);
return v___x_774_;
}
case 2:
{
uint64_t v___x_775_; 
v___x_775_ = lean_uint64_mul(v_a_771_, v_b_772_);
return v___x_775_;
}
case 3:
{
uint64_t v___x_776_; uint8_t v___x_777_; 
v___x_776_ = 0ULL;
v___x_777_ = lean_uint64_dec_eq(v_b_772_, v___x_776_);
if (v___x_777_ == 0)
{
uint64_t v___x_778_; 
v___x_778_ = lean_uint64_div(v_a_771_, v_b_772_);
return v___x_778_;
}
else
{
uint64_t v___x_779_; 
v___x_779_ = 18446744073709551615ULL;
return v___x_779_;
}
}
case 4:
{
uint64_t v___x_780_; uint8_t v___x_781_; 
v___x_780_ = 0ULL;
v___x_781_ = lean_uint64_dec_eq(v_b_772_, v___x_780_);
if (v___x_781_ == 0)
{
uint64_t v___x_782_; 
v___x_782_ = lean_uint64_mod(v_a_771_, v_b_772_);
return v___x_782_;
}
else
{
return v_a_771_;
}
}
case 5:
{
uint64_t v___x_783_; 
v___x_783_ = lean_uint64_land(v_a_771_, v_b_772_);
return v___x_783_;
}
case 6:
{
uint64_t v___x_784_; 
v___x_784_ = lean_uint64_lor(v_a_771_, v_b_772_);
return v___x_784_;
}
case 7:
{
uint64_t v___x_785_; 
v___x_785_ = lean_uint64_xor(v_a_771_, v_b_772_);
return v___x_785_;
}
case 8:
{
uint64_t v___x_786_; uint64_t v___x_787_; uint64_t v___x_788_; 
v___x_786_ = 64ULL;
v___x_787_ = lean_uint64_mod(v_b_772_, v___x_786_);
v___x_788_ = lean_uint64_shift_left(v_a_771_, v___x_787_);
return v___x_788_;
}
case 9:
{
uint64_t v___x_789_; uint64_t v___x_790_; uint64_t v___x_791_; 
v___x_789_ = 64ULL;
v___x_790_ = lean_uint64_mod(v_b_772_, v___x_789_);
v___x_791_ = lean_uint64_shift_right(v_a_771_, v___x_790_);
return v___x_791_;
}
case 10:
{
uint64_t v___x_792_; 
v___x_792_ = lp_rv2pancake_Rv2Pancake_Spec_sraWord(v_a_771_, v_b_772_);
return v___x_792_;
}
case 11:
{
uint8_t v___x_793_; 
v___x_793_ = lean_uint64_dec_eq(v_a_771_, v_b_772_);
if (v___x_793_ == 0)
{
uint64_t v___x_794_; 
v___x_794_ = 0ULL;
return v___x_794_;
}
else
{
uint64_t v___x_795_; 
v___x_795_ = 1ULL;
return v___x_795_;
}
}
case 12:
{
uint8_t v___x_796_; 
v___x_796_ = lean_uint64_dec_eq(v_a_771_, v_b_772_);
if (v___x_796_ == 0)
{
uint64_t v___x_797_; 
v___x_797_ = 1ULL;
return v___x_797_;
}
else
{
uint64_t v___x_798_; 
v___x_798_ = 0ULL;
return v___x_798_;
}
}
case 13:
{
uint8_t v___x_799_; 
v___x_799_ = lean_uint64_dec_lt(v_a_771_, v_b_772_);
if (v___x_799_ == 0)
{
uint64_t v___x_800_; 
v___x_800_ = 0ULL;
return v___x_800_;
}
else
{
uint64_t v___x_801_; 
v___x_801_ = 1ULL;
return v___x_801_;
}
}
case 14:
{
uint8_t v___x_802_; 
v___x_802_ = lp_rv2pancake_Rv2Pancake_Spec_sltWord(v_a_771_, v_b_772_);
if (v___x_802_ == 0)
{
uint64_t v___x_803_; 
v___x_803_ = 0ULL;
return v___x_803_;
}
else
{
uint64_t v___x_804_; 
v___x_804_ = 1ULL;
return v___x_804_;
}
}
case 15:
{
uint64_t v___x_805_; uint64_t v___x_806_; uint64_t v___x_807_; uint64_t v___x_808_; uint64_t v___x_809_; 
v___x_805_ = 4294967295ULL;
v___x_806_ = lean_uint64_land(v_a_771_, v___x_805_);
v___x_807_ = lean_uint64_land(v_b_772_, v___x_805_);
v___x_808_ = lean_uint64_add(v___x_806_, v___x_807_);
v___x_809_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v___x_808_);
return v___x_809_;
}
case 16:
{
uint64_t v___x_810_; uint64_t v___x_811_; uint64_t v___x_812_; uint64_t v___x_813_; uint64_t v___x_814_; 
v___x_810_ = 4294967295ULL;
v___x_811_ = lean_uint64_land(v_a_771_, v___x_810_);
v___x_812_ = lean_uint64_land(v_b_772_, v___x_810_);
v___x_813_ = lean_uint64_sub(v___x_811_, v___x_812_);
v___x_814_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v___x_813_);
return v___x_814_;
}
case 17:
{
uint64_t v___x_815_; uint64_t v___x_816_; uint64_t v___x_817_; uint64_t v___x_818_; uint64_t v___x_819_; 
v___x_815_ = 4294967295ULL;
v___x_816_ = lean_uint64_land(v_a_771_, v___x_815_);
v___x_817_ = lean_uint64_land(v_b_772_, v___x_815_);
v___x_818_ = lean_uint64_mul(v___x_816_, v___x_817_);
v___x_819_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v___x_818_);
return v___x_819_;
}
case 18:
{
uint64_t v___x_820_; uint64_t v___x_821_; uint64_t v___x_822_; uint64_t v___x_823_; uint64_t v___x_824_; uint64_t v___x_825_; 
v___x_820_ = 4294967295ULL;
v___x_821_ = lean_uint64_land(v_a_771_, v___x_820_);
v___x_822_ = 32ULL;
v___x_823_ = lean_uint64_mod(v_b_772_, v___x_822_);
v___x_824_ = lean_uint64_shift_left(v___x_821_, v___x_823_);
v___x_825_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v___x_824_);
return v___x_825_;
}
case 19:
{
uint64_t v___x_826_; uint64_t v___x_827_; uint64_t v___x_828_; uint64_t v___x_829_; uint64_t v___x_830_; uint64_t v___x_831_; 
v___x_826_ = 4294967295ULL;
v___x_827_ = lean_uint64_land(v_a_771_, v___x_826_);
v___x_828_ = 32ULL;
v___x_829_ = lean_uint64_mod(v_b_772_, v___x_828_);
v___x_830_ = lean_uint64_shift_right(v___x_827_, v___x_829_);
v___x_831_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v___x_830_);
return v___x_831_;
}
default: 
{
uint64_t v___x_832_; uint64_t v_sh_833_; uint64_t v___x_834_; uint64_t v_low_835_; uint64_t v___x_836_; uint8_t v___x_837_; 
v___x_832_ = 32ULL;
v_sh_833_ = lean_uint64_mod(v_b_772_, v___x_832_);
v___x_834_ = 4294967295ULL;
v_low_835_ = lean_uint64_land(v_a_771_, v___x_834_);
v___x_836_ = 0ULL;
v___x_837_ = lean_uint64_dec_eq(v_sh_833_, v___x_836_);
if (v___x_837_ == 0)
{
uint64_t v___x_838_; uint64_t v___x_839_; uint8_t v___x_840_; 
v___x_838_ = 2147483648ULL;
v___x_839_ = lean_uint64_land(v_low_835_, v___x_838_);
v___x_840_ = lean_uint64_dec_eq(v___x_839_, v___x_836_);
if (v___x_840_ == 0)
{
uint64_t v___x_841_; uint64_t v___x_842_; uint64_t v___x_843_; uint64_t v___x_844_; uint64_t v___x_845_; 
v___x_841_ = lean_uint64_shift_right(v_low_835_, v_sh_833_);
v___x_842_ = lean_uint64_sub(v___x_832_, v_sh_833_);
v___x_843_ = lean_uint64_shift_left(v___x_834_, v___x_842_);
v___x_844_ = lean_uint64_lor(v___x_841_, v___x_843_);
v___x_845_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v___x_844_);
return v___x_845_;
}
else
{
uint64_t v___x_846_; uint64_t v___x_847_; 
v___x_846_ = lean_uint64_shift_right(v_low_835_, v_sh_833_);
v___x_847_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v___x_846_);
return v___x_847_;
}
}
else
{
uint64_t v___x_848_; 
v___x_848_ = lp_rv2pancake_Rv2Pancake_Spec_sext32Word(v_low_835_);
return v___x_848_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalBinOp___boxed(lean_object* v_op_849_, lean_object* v_a_850_, lean_object* v_b_851_){
_start:
{
uint8_t v_op_boxed_852_; uint64_t v_a_boxed_853_; uint64_t v_b_boxed_854_; uint64_t v_res_855_; lean_object* v_r_856_; 
v_op_boxed_852_ = lean_unbox(v_op_849_);
v_a_boxed_853_ = lean_unbox_uint64(v_a_850_);
lean_dec_ref(v_a_850_);
v_b_boxed_854_ = lean_unbox_uint64(v_b_851_);
lean_dec_ref(v_b_851_);
v_res_855_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_boxed_852_, v_a_boxed_853_, v_b_boxed_854_);
v_r_856_ = lean_box_uint64(v_res_855_);
return v_r_856_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(uint8_t v_x_857_){
_start:
{
switch(v_x_857_)
{
case 0:
{
lean_object* v___x_858_; 
v___x_858_ = lean_unsigned_to_nat(0u);
return v___x_858_;
}
case 1:
{
lean_object* v___x_859_; 
v___x_859_ = lean_unsigned_to_nat(1u);
return v___x_859_;
}
case 2:
{
lean_object* v___x_860_; 
v___x_860_ = lean_unsigned_to_nat(2u);
return v___x_860_;
}
case 3:
{
lean_object* v___x_861_; 
v___x_861_ = lean_unsigned_to_nat(3u);
return v___x_861_;
}
case 4:
{
lean_object* v___x_862_; 
v___x_862_ = lean_unsigned_to_nat(4u);
return v___x_862_;
}
default: 
{
lean_object* v___x_863_; 
v___x_863_ = lean_unsigned_to_nat(5u);
return v___x_863_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx___boxed(lean_object* v_x_864_){
_start:
{
uint8_t v_x_boxed_865_; lean_object* v_res_866_; 
v_x_boxed_865_ = lean_unbox(v_x_864_);
v_res_866_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_x_boxed_865_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg(lean_object* v_k_867_){
_start:
{
lean_inc(v_k_867_);
return v_k_867_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg___boxed(lean_object* v_k_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___redArg(v_k_868_);
lean_dec(v_k_868_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim(lean_object* v_motive_870_, lean_object* v_ctorIdx_871_, uint8_t v_t_872_, lean_object* v_h_873_, lean_object* v_k_874_){
_start:
{
lean_inc(v_k_874_);
return v_k_874_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim___boxed(lean_object* v_motive_875_, lean_object* v_ctorIdx_876_, lean_object* v_t_877_, lean_object* v_h_878_, lean_object* v_k_879_){
_start:
{
uint8_t v_t_boxed_880_; lean_object* v_res_881_; 
v_t_boxed_880_ = lean_unbox(v_t_877_);
v_res_881_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorElim(v_motive_875_, v_ctorIdx_876_, v_t_boxed_880_, v_h_878_, v_k_879_);
lean_dec(v_k_879_);
lean_dec(v_ctorIdx_876_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg(lean_object* v_beq_882_){
_start:
{
lean_inc(v_beq_882_);
return v_beq_882_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg___boxed(lean_object* v_beq_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___redArg(v_beq_883_);
lean_dec(v_beq_883_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim(lean_object* v_motive_885_, uint8_t v_t_886_, lean_object* v_h_887_, lean_object* v_beq_888_){
_start:
{
lean_inc(v_beq_888_);
return v_beq_888_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim___boxed(lean_object* v_motive_889_, lean_object* v_t_890_, lean_object* v_h_891_, lean_object* v_beq_892_){
_start:
{
uint8_t v_t_boxed_893_; lean_object* v_res_894_; 
v_t_boxed_893_ = lean_unbox(v_t_890_);
v_res_894_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_beq_elim(v_motive_889_, v_t_boxed_893_, v_h_891_, v_beq_892_);
lean_dec(v_beq_892_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg(lean_object* v_bne_895_){
_start:
{
lean_inc(v_bne_895_);
return v_bne_895_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg___boxed(lean_object* v_bne_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___redArg(v_bne_896_);
lean_dec(v_bne_896_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim(lean_object* v_motive_898_, uint8_t v_t_899_, lean_object* v_h_900_, lean_object* v_bne_901_){
_start:
{
lean_inc(v_bne_901_);
return v_bne_901_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim___boxed(lean_object* v_motive_902_, lean_object* v_t_903_, lean_object* v_h_904_, lean_object* v_bne_905_){
_start:
{
uint8_t v_t_boxed_906_; lean_object* v_res_907_; 
v_t_boxed_906_ = lean_unbox(v_t_903_);
v_res_907_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bne_elim(v_motive_902_, v_t_boxed_906_, v_h_904_, v_bne_905_);
lean_dec(v_bne_905_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg(lean_object* v_bltu_908_){
_start:
{
lean_inc(v_bltu_908_);
return v_bltu_908_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg___boxed(lean_object* v_bltu_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___redArg(v_bltu_909_);
lean_dec(v_bltu_909_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim(lean_object* v_motive_911_, uint8_t v_t_912_, lean_object* v_h_913_, lean_object* v_bltu_914_){
_start:
{
lean_inc(v_bltu_914_);
return v_bltu_914_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim___boxed(lean_object* v_motive_915_, lean_object* v_t_916_, lean_object* v_h_917_, lean_object* v_bltu_918_){
_start:
{
uint8_t v_t_boxed_919_; lean_object* v_res_920_; 
v_t_boxed_919_ = lean_unbox(v_t_916_);
v_res_920_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bltu_elim(v_motive_915_, v_t_boxed_919_, v_h_917_, v_bltu_918_);
lean_dec(v_bltu_918_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg(lean_object* v_bgeu_921_){
_start:
{
lean_inc(v_bgeu_921_);
return v_bgeu_921_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg___boxed(lean_object* v_bgeu_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___redArg(v_bgeu_922_);
lean_dec(v_bgeu_922_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim(lean_object* v_motive_924_, uint8_t v_t_925_, lean_object* v_h_926_, lean_object* v_bgeu_927_){
_start:
{
lean_inc(v_bgeu_927_);
return v_bgeu_927_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim___boxed(lean_object* v_motive_928_, lean_object* v_t_929_, lean_object* v_h_930_, lean_object* v_bgeu_931_){
_start:
{
uint8_t v_t_boxed_932_; lean_object* v_res_933_; 
v_t_boxed_932_ = lean_unbox(v_t_929_);
v_res_933_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bgeu_elim(v_motive_928_, v_t_boxed_932_, v_h_930_, v_bgeu_931_);
lean_dec(v_bgeu_931_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim___redArg(lean_object* v_blt_934_){
_start:
{
lean_inc(v_blt_934_);
return v_blt_934_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim___redArg___boxed(lean_object* v_blt_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim___redArg(v_blt_935_);
lean_dec(v_blt_935_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim(lean_object* v_motive_937_, uint8_t v_t_938_, lean_object* v_h_939_, lean_object* v_blt_940_){
_start:
{
lean_inc(v_blt_940_);
return v_blt_940_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim___boxed(lean_object* v_motive_941_, lean_object* v_t_942_, lean_object* v_h_943_, lean_object* v_blt_944_){
_start:
{
uint8_t v_t_boxed_945_; lean_object* v_res_946_; 
v_t_boxed_945_ = lean_unbox(v_t_942_);
v_res_946_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_blt_elim(v_motive_941_, v_t_boxed_945_, v_h_943_, v_blt_944_);
lean_dec(v_blt_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim___redArg(lean_object* v_bge_947_){
_start:
{
lean_inc(v_bge_947_);
return v_bge_947_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim___redArg___boxed(lean_object* v_bge_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim___redArg(v_bge_948_);
lean_dec(v_bge_948_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim(lean_object* v_motive_950_, uint8_t v_t_951_, lean_object* v_h_952_, lean_object* v_bge_953_){
_start:
{
lean_inc(v_bge_953_);
return v_bge_953_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim___boxed(lean_object* v_motive_954_, lean_object* v_t_955_, lean_object* v_h_956_, lean_object* v_bge_957_){
_start:
{
uint8_t v_t_boxed_958_; lean_object* v_res_959_; 
v_t_boxed_958_ = lean_unbox(v_t_955_);
v_res_959_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_bge_elim(v_motive_954_, v_t_boxed_958_, v_h_956_, v_bge_957_);
lean_dec(v_bge_957_);
return v_res_959_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat(lean_object* v_n_960_){
_start:
{
lean_object* v___x_961_; uint8_t v___x_962_; 
v___x_961_ = lean_unsigned_to_nat(2u);
v___x_962_ = lean_nat_dec_le(v_n_960_, v___x_961_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_963_ = lean_unsigned_to_nat(3u);
v___x_964_ = lean_nat_dec_le(v_n_960_, v___x_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = lean_unsigned_to_nat(4u);
v___x_966_ = lean_nat_dec_le(v_n_960_, v___x_965_);
if (v___x_966_ == 0)
{
uint8_t v___x_967_; 
v___x_967_ = 5;
return v___x_967_;
}
else
{
uint8_t v___x_968_; 
v___x_968_ = 4;
return v___x_968_;
}
}
else
{
uint8_t v___x_969_; 
v___x_969_ = 3;
return v___x_969_;
}
}
else
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = lean_nat_dec_le(v_n_960_, v___x_970_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_nat_dec_le(v_n_960_, v___x_972_);
if (v___x_973_ == 0)
{
uint8_t v___x_974_; 
v___x_974_ = 2;
return v___x_974_;
}
else
{
uint8_t v___x_975_; 
v___x_975_ = 1;
return v___x_975_;
}
}
else
{
uint8_t v___x_976_; 
v___x_976_ = 0;
return v___x_976_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat___boxed(lean_object* v_n_977_){
_start:
{
uint8_t v_res_978_; lean_object* v_r_979_; 
v_res_978_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ofNat(v_n_977_);
lean_dec(v_n_977_);
v_r_979_ = lean_box(v_res_978_);
return v_r_979_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond(uint8_t v_x_980_, uint8_t v_y_981_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_982_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_x_980_);
v___x_983_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_y_981_);
v___x_984_ = lean_nat_dec_eq(v___x_982_, v___x_983_);
lean_dec(v___x_983_);
lean_dec(v___x_982_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond___boxed(lean_object* v_x_985_, lean_object* v_y_986_){
_start:
{
uint8_t v_x_20__boxed_987_; uint8_t v_y_21__boxed_988_; uint8_t v_res_989_; lean_object* v_r_990_; 
v_x_20__boxed_987_ = lean_unbox(v_x_985_);
v_y_21__boxed_988_ = lean_unbox(v_y_986_);
v_res_989_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqBranchCond(v_x_20__boxed_987_, v_y_21__boxed_988_);
v_r_990_ = lean_box(v_res_989_);
return v_r_990_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr(uint8_t v_x_1009_, lean_object* v_prec_1010_){
_start:
{
lean_object* v___y_1012_; lean_object* v___y_1019_; lean_object* v___y_1026_; lean_object* v___y_1033_; lean_object* v___y_1040_; lean_object* v___y_1047_; 
switch(v_x_1009_)
{
case 0:
{
lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1053_ = lean_unsigned_to_nat(1024u);
v___x_1054_ = lean_nat_dec_le(v___x_1053_, v_prec_1010_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1012_ = v___x_1055_;
goto v___jp_1011_;
}
else
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1012_ = v___x_1056_;
goto v___jp_1011_;
}
}
case 1:
{
lean_object* v___x_1057_; uint8_t v___x_1058_; 
v___x_1057_ = lean_unsigned_to_nat(1024u);
v___x_1058_ = lean_nat_dec_le(v___x_1057_, v_prec_1010_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1019_ = v___x_1059_;
goto v___jp_1018_;
}
else
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1019_ = v___x_1060_;
goto v___jp_1018_;
}
}
case 2:
{
lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1061_ = lean_unsigned_to_nat(1024u);
v___x_1062_ = lean_nat_dec_le(v___x_1061_, v_prec_1010_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1026_ = v___x_1063_;
goto v___jp_1025_;
}
else
{
lean_object* v___x_1064_; 
v___x_1064_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1026_ = v___x_1064_;
goto v___jp_1025_;
}
}
case 3:
{
lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___x_1065_ = lean_unsigned_to_nat(1024u);
v___x_1066_ = lean_nat_dec_le(v___x_1065_, v_prec_1010_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1033_ = v___x_1067_;
goto v___jp_1032_;
}
else
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1033_ = v___x_1068_;
goto v___jp_1032_;
}
}
case 4:
{
lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1069_ = lean_unsigned_to_nat(1024u);
v___x_1070_ = lean_nat_dec_le(v___x_1069_, v_prec_1010_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1040_ = v___x_1071_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1072_; 
v___x_1072_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1040_ = v___x_1072_;
goto v___jp_1039_;
}
}
default: 
{
lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1073_ = lean_unsigned_to_nat(1024u);
v___x_1074_ = lean_nat_dec_le(v___x_1073_, v_prec_1010_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1047_ = v___x_1075_;
goto v___jp_1046_;
}
else
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1047_ = v___x_1076_;
goto v___jp_1046_;
}
}
}
v___jp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1013_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__1));
lean_inc(v___y_1012_);
v___x_1014_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___y_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = 0;
v___x_1016_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set_uint8(v___x_1016_, sizeof(void*)*1, v___x_1015_);
v___x_1017_ = l_Repr_addAppParen(v___x_1016_, v_prec_1010_);
return v___x_1017_;
}
v___jp_1018_:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1020_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__3));
lean_inc(v___y_1019_);
v___x_1021_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___y_1019_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = 0;
v___x_1023_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1023_, 0, v___x_1021_);
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*1, v___x_1022_);
v___x_1024_ = l_Repr_addAppParen(v___x_1023_, v_prec_1010_);
return v___x_1024_;
}
v___jp_1025_:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1027_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__5));
lean_inc(v___y_1026_);
v___x_1028_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___y_1026_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = 0;
v___x_1030_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1030_, 0, v___x_1028_);
lean_ctor_set_uint8(v___x_1030_, sizeof(void*)*1, v___x_1029_);
v___x_1031_ = l_Repr_addAppParen(v___x_1030_, v_prec_1010_);
return v___x_1031_;
}
v___jp_1032_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1034_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__7));
lean_inc(v___y_1033_);
v___x_1035_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___y_1033_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = 0;
v___x_1037_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*1, v___x_1036_);
v___x_1038_ = l_Repr_addAppParen(v___x_1037_, v_prec_1010_);
return v___x_1038_;
}
v___jp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1041_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__9));
lean_inc(v___y_1040_);
v___x_1042_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___y_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = 0;
v___x_1044_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set_uint8(v___x_1044_, sizeof(void*)*1, v___x_1043_);
v___x_1045_ = l_Repr_addAppParen(v___x_1044_, v_prec_1010_);
return v___x_1045_;
}
v___jp_1046_:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; uint8_t v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1048_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___closed__11));
lean_inc(v___y_1047_);
v___x_1049_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___y_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = 0;
v___x_1051_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set_uint8(v___x_1051_, sizeof(void*)*1, v___x_1050_);
v___x_1052_ = l_Repr_addAppParen(v___x_1051_, v_prec_1010_);
return v___x_1052_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr___boxed(lean_object* v_x_1077_, lean_object* v_prec_1078_){
_start:
{
uint8_t v_x_329__boxed_1079_; lean_object* v_res_1080_; 
v_x_329__boxed_1079_ = lean_unbox(v_x_1077_);
v_res_1080_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr(v_x_329__boxed_1079_, v_prec_1078_);
lean_dec(v_prec_1078_);
return v_res_1080_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond(uint8_t v_c_1083_, uint64_t v_a_1084_, uint64_t v_b_1085_){
_start:
{
switch(v_c_1083_)
{
case 0:
{
uint8_t v___x_1086_; 
v___x_1086_ = lean_uint64_dec_eq(v_a_1084_, v_b_1085_);
return v___x_1086_;
}
case 1:
{
uint8_t v___x_1087_; 
v___x_1087_ = lean_uint64_dec_eq(v_a_1084_, v_b_1085_);
if (v___x_1087_ == 0)
{
uint8_t v___x_1088_; 
v___x_1088_ = 1;
return v___x_1088_;
}
else
{
uint8_t v___x_1089_; 
v___x_1089_ = 0;
return v___x_1089_;
}
}
case 2:
{
uint8_t v___x_1090_; 
v___x_1090_ = lean_uint64_dec_lt(v_a_1084_, v_b_1085_);
return v___x_1090_;
}
case 3:
{
uint8_t v___x_1091_; 
v___x_1091_ = lean_uint64_dec_lt(v_a_1084_, v_b_1085_);
if (v___x_1091_ == 0)
{
uint8_t v___x_1092_; 
v___x_1092_ = 1;
return v___x_1092_;
}
else
{
uint8_t v___x_1093_; 
v___x_1093_ = 0;
return v___x_1093_;
}
}
case 4:
{
uint8_t v___x_1094_; 
v___x_1094_ = lp_rv2pancake_Rv2Pancake_Spec_sltWord(v_a_1084_, v_b_1085_);
return v___x_1094_;
}
default: 
{
uint8_t v___x_1095_; 
v___x_1095_ = lp_rv2pancake_Rv2Pancake_Spec_sltWord(v_a_1084_, v_b_1085_);
if (v___x_1095_ == 0)
{
uint8_t v___x_1096_; 
v___x_1096_ = 1;
return v___x_1096_;
}
else
{
uint8_t v___x_1097_; 
v___x_1097_ = 0;
return v___x_1097_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond___boxed(lean_object* v_c_1098_, lean_object* v_a_1099_, lean_object* v_b_1100_){
_start:
{
uint8_t v_c_boxed_1101_; uint64_t v_a_boxed_1102_; uint64_t v_b_boxed_1103_; uint8_t v_res_1104_; lean_object* v_r_1105_; 
v_c_boxed_1101_ = lean_unbox(v_c_1098_);
v_a_boxed_1102_ = lean_unbox_uint64(v_a_1099_);
lean_dec_ref(v_a_1099_);
v_b_boxed_1103_ = lean_unbox_uint64(v_b_1100_);
lean_dec_ref(v_b_1100_);
v_res_1104_ = lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond(v_c_boxed_1101_, v_a_boxed_1102_, v_b_boxed_1103_);
v_r_1105_ = lean_box(v_res_1104_);
return v_r_1105_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(lean_object* v_x_1106_){
_start:
{
switch(lean_obj_tag(v_x_1106_))
{
case 0:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_unsigned_to_nat(0u);
return v___x_1107_;
}
case 1:
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_unsigned_to_nat(1u);
return v___x_1108_;
}
case 2:
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_unsigned_to_nat(2u);
return v___x_1109_;
}
case 3:
{
lean_object* v___x_1110_; 
v___x_1110_ = lean_unsigned_to_nat(3u);
return v___x_1110_;
}
case 4:
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_unsigned_to_nat(4u);
return v___x_1111_;
}
case 5:
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_unsigned_to_nat(5u);
return v___x_1112_;
}
case 6:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_unsigned_to_nat(6u);
return v___x_1113_;
}
case 7:
{
lean_object* v___x_1114_; 
v___x_1114_ = lean_unsigned_to_nat(7u);
return v___x_1114_;
}
case 8:
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_unsigned_to_nat(8u);
return v___x_1115_;
}
default: 
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_unsigned_to_nat(9u);
return v___x_1116_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx___boxed(lean_object* v_x_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(v_x_1117_);
lean_dec(v_x_1117_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(lean_object* v_t_1119_, lean_object* v_k_1120_){
_start:
{
switch(lean_obj_tag(v_t_1119_))
{
case 0:
{
uint8_t v_op_1121_; lean_object* v_rd_1122_; lean_object* v_rs1_1123_; uint64_t v_imm_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v_op_1121_ = lean_ctor_get_uint8(v_t_1119_, sizeof(void*)*2 + 8);
v_rd_1122_ = lean_ctor_get(v_t_1119_, 0);
lean_inc(v_rd_1122_);
v_rs1_1123_ = lean_ctor_get(v_t_1119_, 1);
lean_inc(v_rs1_1123_);
v_imm_1124_ = lean_ctor_get_uint64(v_t_1119_, sizeof(void*)*2);
lean_dec_ref_known(v_t_1119_, 2);
v___x_1125_ = lean_box(v_op_1121_);
v___x_1126_ = lean_box_uint64(v_imm_1124_);
v___x_1127_ = lean_apply_4(v_k_1120_, v___x_1125_, v_rd_1122_, v_rs1_1123_, v___x_1126_);
return v___x_1127_;
}
case 1:
{
uint8_t v_op_1128_; lean_object* v_rd_1129_; lean_object* v_rs1_1130_; lean_object* v_rs2_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_op_1128_ = lean_ctor_get_uint8(v_t_1119_, sizeof(void*)*3);
v_rd_1129_ = lean_ctor_get(v_t_1119_, 0);
lean_inc(v_rd_1129_);
v_rs1_1130_ = lean_ctor_get(v_t_1119_, 1);
lean_inc(v_rs1_1130_);
v_rs2_1131_ = lean_ctor_get(v_t_1119_, 2);
lean_inc(v_rs2_1131_);
lean_dec_ref_known(v_t_1119_, 3);
v___x_1132_ = lean_box(v_op_1128_);
v___x_1133_ = lean_apply_4(v_k_1120_, v___x_1132_, v_rd_1129_, v_rs1_1130_, v_rs2_1131_);
return v___x_1133_;
}
case 4:
{
lean_object* v_rd_1134_; lean_object* v_rs1_1135_; uint64_t v_offset_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v_rd_1134_ = lean_ctor_get(v_t_1119_, 0);
lean_inc(v_rd_1134_);
v_rs1_1135_ = lean_ctor_get(v_t_1119_, 1);
lean_inc(v_rs1_1135_);
v_offset_1136_ = lean_ctor_get_uint64(v_t_1119_, sizeof(void*)*2);
lean_dec_ref_known(v_t_1119_, 2);
v___x_1137_ = lean_box_uint64(v_offset_1136_);
v___x_1138_ = lean_apply_3(v_k_1120_, v_rd_1134_, v_rs1_1135_, v___x_1137_);
return v___x_1138_;
}
case 5:
{
lean_object* v_rs1_1139_; lean_object* v_rs2_1140_; uint64_t v_offset_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v_rs1_1139_ = lean_ctor_get(v_t_1119_, 0);
lean_inc(v_rs1_1139_);
v_rs2_1140_ = lean_ctor_get(v_t_1119_, 1);
lean_inc(v_rs2_1140_);
v_offset_1141_ = lean_ctor_get_uint64(v_t_1119_, sizeof(void*)*2);
lean_dec_ref_known(v_t_1119_, 2);
v___x_1142_ = lean_box_uint64(v_offset_1141_);
v___x_1143_ = lean_apply_3(v_k_1120_, v_rs1_1139_, v_rs2_1140_, v___x_1142_);
return v___x_1143_;
}
case 6:
{
uint8_t v_cond_1144_; lean_object* v_rs1_1145_; lean_object* v_rs2_1146_; uint64_t v_targetPc_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_cond_1144_ = lean_ctor_get_uint8(v_t_1119_, sizeof(void*)*2 + 8);
v_rs1_1145_ = lean_ctor_get(v_t_1119_, 0);
lean_inc(v_rs1_1145_);
v_rs2_1146_ = lean_ctor_get(v_t_1119_, 1);
lean_inc(v_rs2_1146_);
v_targetPc_1147_ = lean_ctor_get_uint64(v_t_1119_, sizeof(void*)*2);
lean_dec_ref_known(v_t_1119_, 2);
v___x_1148_ = lean_box(v_cond_1144_);
v___x_1149_ = lean_box_uint64(v_targetPc_1147_);
v___x_1150_ = lean_apply_4(v_k_1120_, v___x_1148_, v_rs1_1145_, v_rs2_1146_, v___x_1149_);
return v___x_1150_;
}
case 8:
{
lean_object* v_rd_1151_; lean_object* v_rs1_1152_; uint64_t v_offset_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v_rd_1151_ = lean_ctor_get(v_t_1119_, 0);
lean_inc(v_rd_1151_);
v_rs1_1152_ = lean_ctor_get(v_t_1119_, 1);
lean_inc(v_rs1_1152_);
v_offset_1153_ = lean_ctor_get_uint64(v_t_1119_, sizeof(void*)*2);
lean_dec_ref_known(v_t_1119_, 2);
v___x_1154_ = lean_box_uint64(v_offset_1153_);
v___x_1155_ = lean_apply_3(v_k_1120_, v_rd_1151_, v_rs1_1152_, v___x_1154_);
return v___x_1155_;
}
case 9:
{
return v_k_1120_;
}
default: 
{
lean_object* v_rd_1156_; uint64_t v_imm20_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v_rd_1156_ = lean_ctor_get(v_t_1119_, 0);
lean_inc(v_rd_1156_);
v_imm20_1157_ = lean_ctor_get_uint64(v_t_1119_, sizeof(void*)*1);
lean_dec(v_t_1119_);
v___x_1158_ = lean_box_uint64(v_imm20_1157_);
v___x_1159_ = lean_apply_2(v_k_1120_, v_rd_1156_, v___x_1158_);
return v___x_1159_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim(lean_object* v_motive_1160_, lean_object* v_ctorIdx_1161_, lean_object* v_t_1162_, lean_object* v_h_1163_, lean_object* v_k_1164_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1162_, v_k_1164_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___boxed(lean_object* v_motive_1166_, lean_object* v_ctorIdx_1167_, lean_object* v_t_1168_, lean_object* v_h_1169_, lean_object* v_k_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim(v_motive_1166_, v_ctorIdx_1167_, v_t_1168_, v_h_1169_, v_k_1170_);
lean_dec(v_ctorIdx_1167_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opImm_elim___redArg(lean_object* v_t_1172_, lean_object* v_opImm_1173_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1172_, v_opImm_1173_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opImm_elim(lean_object* v_motive_1175_, lean_object* v_t_1176_, lean_object* v_h_1177_, lean_object* v_opImm_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1176_, v_opImm_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opReg_elim___redArg(lean_object* v_t_1180_, lean_object* v_opReg_1181_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1180_, v_opReg_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_opReg_elim(lean_object* v_motive_1183_, lean_object* v_t_1184_, lean_object* v_h_1185_, lean_object* v_opReg_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1184_, v_opReg_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_lui_elim___redArg(lean_object* v_t_1188_, lean_object* v_lui_1189_){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1188_, v_lui_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_lui_elim(lean_object* v_motive_1191_, lean_object* v_t_1192_, lean_object* v_h_1193_, lean_object* v_lui_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1192_, v_lui_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_auipc_elim___redArg(lean_object* v_t_1196_, lean_object* v_auipc_1197_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1196_, v_auipc_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_auipc_elim(lean_object* v_motive_1199_, lean_object* v_t_1200_, lean_object* v_h_1201_, lean_object* v_auipc_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1200_, v_auipc_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ld_elim___redArg(lean_object* v_t_1204_, lean_object* v_ld_1205_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1204_, v_ld_1205_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ld_elim(lean_object* v_motive_1207_, lean_object* v_t_1208_, lean_object* v_h_1209_, lean_object* v_ld_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1208_, v_ld_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_sd_elim___redArg(lean_object* v_t_1212_, lean_object* v_sd_1213_){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1212_, v_sd_1213_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_sd_elim(lean_object* v_motive_1215_, lean_object* v_t_1216_, lean_object* v_h_1217_, lean_object* v_sd_1218_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1216_, v_sd_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_branch_elim___redArg(lean_object* v_t_1220_, lean_object* v_branch_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1220_, v_branch_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_branch_elim(lean_object* v_motive_1223_, lean_object* v_t_1224_, lean_object* v_h_1225_, lean_object* v_branch_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1224_, v_branch_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jal_elim___redArg(lean_object* v_t_1228_, lean_object* v_jal_1229_){
_start:
{
lean_object* v___x_1230_; 
v___x_1230_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1228_, v_jal_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jal_elim(lean_object* v_motive_1231_, lean_object* v_t_1232_, lean_object* v_h_1233_, lean_object* v_jal_1234_){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1232_, v_jal_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jalr_elim___redArg(lean_object* v_t_1236_, lean_object* v_jalr_1237_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1236_, v_jalr_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_jalr_elim(lean_object* v_motive_1239_, lean_object* v_t_1240_, lean_object* v_h_1241_, lean_object* v_jalr_1242_){
_start:
{
lean_object* v___x_1243_; 
v___x_1243_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1240_, v_jalr_1242_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ecall_elim___redArg(lean_object* v_t_1244_, lean_object* v_ecall_1245_){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1244_, v_ecall_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ecall_elim(lean_object* v_motive_1247_, lean_object* v_t_1248_, lean_object* v_h_1249_, lean_object* v_ecall_1250_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorElim___redArg(v_t_1248_, v_ecall_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq(lean_object* v_x_1252_, lean_object* v_x_1253_){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v_decide_1256_; 
v___x_1254_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(v_x_1252_);
v___x_1255_ = lp_rv2pancake_Rv2Pancake_Spec_RVInstr_ctorIdx(v_x_1253_);
v_decide_1256_ = lean_nat_dec_eq(v___x_1254_, v___x_1255_);
lean_dec(v___x_1255_);
lean_dec(v___x_1254_);
if (v_decide_1256_ == 0)
{
return v_decide_1256_;
}
else
{
switch(lean_obj_tag(v_x_1252_))
{
case 0:
{
uint8_t v_op_1257_; lean_object* v_rd_1258_; lean_object* v_rs1_1259_; uint64_t v_imm_1260_; uint8_t v_op_1261_; lean_object* v_rd_1262_; lean_object* v_rs1_1263_; uint64_t v_imm_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v_op_1257_ = lean_ctor_get_uint8(v_x_1252_, sizeof(void*)*2 + 8);
v_rd_1258_ = lean_ctor_get(v_x_1252_, 0);
v_rs1_1259_ = lean_ctor_get(v_x_1252_, 1);
v_imm_1260_ = lean_ctor_get_uint64(v_x_1252_, sizeof(void*)*2);
v_op_1261_ = lean_ctor_get_uint8(v_x_1253_, sizeof(void*)*2 + 8);
v_rd_1262_ = lean_ctor_get(v_x_1253_, 0);
v_rs1_1263_ = lean_ctor_get(v_x_1253_, 1);
v_imm_1264_ = lean_ctor_get_uint64(v_x_1253_, sizeof(void*)*2);
v___x_1265_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_1257_);
v___x_1266_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_1261_);
v___x_1267_ = lean_nat_dec_eq(v___x_1265_, v___x_1266_);
lean_dec(v___x_1266_);
lean_dec(v___x_1265_);
if (v___x_1267_ == 0)
{
return v___x_1267_;
}
else
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_nat_dec_eq(v_rd_1258_, v_rd_1262_);
if (v___x_1268_ == 0)
{
return v___x_1268_;
}
else
{
uint8_t v___x_1269_; 
v___x_1269_ = lean_nat_dec_eq(v_rs1_1259_, v_rs1_1263_);
if (v___x_1269_ == 0)
{
return v___x_1269_;
}
else
{
uint8_t v___x_1270_; 
v___x_1270_ = lean_uint64_dec_eq(v_imm_1260_, v_imm_1264_);
return v___x_1270_;
}
}
}
}
case 1:
{
uint8_t v_op_1271_; lean_object* v_rd_1272_; lean_object* v_rs1_1273_; lean_object* v_rs2_1274_; uint8_t v_op_1275_; lean_object* v_rd_1276_; lean_object* v_rs1_1277_; lean_object* v_rs2_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; 
v_op_1271_ = lean_ctor_get_uint8(v_x_1252_, sizeof(void*)*3);
v_rd_1272_ = lean_ctor_get(v_x_1252_, 0);
v_rs1_1273_ = lean_ctor_get(v_x_1252_, 1);
v_rs2_1274_ = lean_ctor_get(v_x_1252_, 2);
v_op_1275_ = lean_ctor_get_uint8(v_x_1253_, sizeof(void*)*3);
v_rd_1276_ = lean_ctor_get(v_x_1253_, 0);
v_rs1_1277_ = lean_ctor_get(v_x_1253_, 1);
v_rs2_1278_ = lean_ctor_get(v_x_1253_, 2);
v___x_1279_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_1271_);
v___x_1280_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_1275_);
v___x_1281_ = lean_nat_dec_eq(v___x_1279_, v___x_1280_);
lean_dec(v___x_1280_);
lean_dec(v___x_1279_);
if (v___x_1281_ == 0)
{
return v___x_1281_;
}
else
{
uint8_t v___x_1282_; 
v___x_1282_ = lean_nat_dec_eq(v_rd_1272_, v_rd_1276_);
if (v___x_1282_ == 0)
{
return v___x_1282_;
}
else
{
uint8_t v___x_1283_; 
v___x_1283_ = lean_nat_dec_eq(v_rs1_1273_, v_rs1_1277_);
if (v___x_1283_ == 0)
{
return v___x_1283_;
}
else
{
uint8_t v___x_1284_; 
v___x_1284_ = lean_nat_dec_eq(v_rs2_1274_, v_rs2_1278_);
return v___x_1284_;
}
}
}
}
case 4:
{
lean_object* v_rd_1285_; lean_object* v_rs1_1286_; uint64_t v_offset_1287_; lean_object* v_rd_1288_; lean_object* v_rs1_1289_; uint64_t v_offset_1290_; uint8_t v___x_1291_; 
v_rd_1285_ = lean_ctor_get(v_x_1252_, 0);
v_rs1_1286_ = lean_ctor_get(v_x_1252_, 1);
v_offset_1287_ = lean_ctor_get_uint64(v_x_1252_, sizeof(void*)*2);
v_rd_1288_ = lean_ctor_get(v_x_1253_, 0);
v_rs1_1289_ = lean_ctor_get(v_x_1253_, 1);
v_offset_1290_ = lean_ctor_get_uint64(v_x_1253_, sizeof(void*)*2);
v___x_1291_ = lean_nat_dec_eq(v_rd_1285_, v_rd_1288_);
if (v___x_1291_ == 0)
{
return v___x_1291_;
}
else
{
uint8_t v___x_1292_; 
v___x_1292_ = lean_nat_dec_eq(v_rs1_1286_, v_rs1_1289_);
if (v___x_1292_ == 0)
{
return v___x_1292_;
}
else
{
uint8_t v___x_1293_; 
v___x_1293_ = lean_uint64_dec_eq(v_offset_1287_, v_offset_1290_);
return v___x_1293_;
}
}
}
case 5:
{
lean_object* v_rs1_1294_; lean_object* v_rs2_1295_; uint64_t v_offset_1296_; lean_object* v_rs1_1297_; lean_object* v_rs2_1298_; uint64_t v_offset_1299_; uint8_t v___x_1300_; 
v_rs1_1294_ = lean_ctor_get(v_x_1252_, 0);
v_rs2_1295_ = lean_ctor_get(v_x_1252_, 1);
v_offset_1296_ = lean_ctor_get_uint64(v_x_1252_, sizeof(void*)*2);
v_rs1_1297_ = lean_ctor_get(v_x_1253_, 0);
v_rs2_1298_ = lean_ctor_get(v_x_1253_, 1);
v_offset_1299_ = lean_ctor_get_uint64(v_x_1253_, sizeof(void*)*2);
v___x_1300_ = lean_nat_dec_eq(v_rs1_1294_, v_rs1_1297_);
if (v___x_1300_ == 0)
{
return v___x_1300_;
}
else
{
uint8_t v___x_1301_; 
v___x_1301_ = lean_nat_dec_eq(v_rs2_1295_, v_rs2_1298_);
if (v___x_1301_ == 0)
{
return v___x_1301_;
}
else
{
uint8_t v___x_1302_; 
v___x_1302_ = lean_uint64_dec_eq(v_offset_1296_, v_offset_1299_);
return v___x_1302_;
}
}
}
case 6:
{
uint8_t v_cond_1303_; lean_object* v_rs1_1304_; lean_object* v_rs2_1305_; uint64_t v_targetPc_1306_; uint8_t v_cond_1307_; lean_object* v_rs1_1308_; lean_object* v_rs2_1309_; uint64_t v_targetPc_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v_cond_1303_ = lean_ctor_get_uint8(v_x_1252_, sizeof(void*)*2 + 8);
v_rs1_1304_ = lean_ctor_get(v_x_1252_, 0);
v_rs2_1305_ = lean_ctor_get(v_x_1252_, 1);
v_targetPc_1306_ = lean_ctor_get_uint64(v_x_1252_, sizeof(void*)*2);
v_cond_1307_ = lean_ctor_get_uint8(v_x_1253_, sizeof(void*)*2 + 8);
v_rs1_1308_ = lean_ctor_get(v_x_1253_, 0);
v_rs2_1309_ = lean_ctor_get(v_x_1253_, 1);
v_targetPc_1310_ = lean_ctor_get_uint64(v_x_1253_, sizeof(void*)*2);
v___x_1311_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_cond_1303_);
v___x_1312_ = lp_rv2pancake_Rv2Pancake_Spec_BranchCond_ctorIdx(v_cond_1307_);
v___x_1313_ = lean_nat_dec_eq(v___x_1311_, v___x_1312_);
lean_dec(v___x_1312_);
lean_dec(v___x_1311_);
if (v___x_1313_ == 0)
{
return v___x_1313_;
}
else
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_nat_dec_eq(v_rs1_1304_, v_rs1_1308_);
if (v___x_1314_ == 0)
{
return v___x_1314_;
}
else
{
uint8_t v___x_1315_; 
v___x_1315_ = lean_nat_dec_eq(v_rs2_1305_, v_rs2_1309_);
if (v___x_1315_ == 0)
{
return v___x_1315_;
}
else
{
uint8_t v___x_1316_; 
v___x_1316_ = lean_uint64_dec_eq(v_targetPc_1306_, v_targetPc_1310_);
return v___x_1316_;
}
}
}
}
case 8:
{
lean_object* v_rd_1317_; lean_object* v_rs1_1318_; uint64_t v_offset_1319_; lean_object* v_rd_1320_; lean_object* v_rs1_1321_; uint64_t v_offset_1322_; uint8_t v___x_1323_; 
v_rd_1317_ = lean_ctor_get(v_x_1252_, 0);
v_rs1_1318_ = lean_ctor_get(v_x_1252_, 1);
v_offset_1319_ = lean_ctor_get_uint64(v_x_1252_, sizeof(void*)*2);
v_rd_1320_ = lean_ctor_get(v_x_1253_, 0);
v_rs1_1321_ = lean_ctor_get(v_x_1253_, 1);
v_offset_1322_ = lean_ctor_get_uint64(v_x_1253_, sizeof(void*)*2);
v___x_1323_ = lean_nat_dec_eq(v_rd_1317_, v_rd_1320_);
if (v___x_1323_ == 0)
{
return v___x_1323_;
}
else
{
uint8_t v___x_1324_; 
v___x_1324_ = lean_nat_dec_eq(v_rs1_1318_, v_rs1_1321_);
if (v___x_1324_ == 0)
{
return v___x_1324_;
}
else
{
uint8_t v___x_1325_; 
v___x_1325_ = lean_uint64_dec_eq(v_offset_1319_, v_offset_1322_);
return v___x_1325_;
}
}
}
case 9:
{
return v_decide_1256_;
}
default: 
{
lean_object* v_rd_1326_; uint64_t v_imm20_1327_; lean_object* v_rd_1328_; uint64_t v_imm20_1329_; uint8_t v___x_1330_; 
v_rd_1326_ = lean_ctor_get(v_x_1252_, 0);
v_imm20_1327_ = lean_ctor_get_uint64(v_x_1252_, sizeof(void*)*1);
v_rd_1328_ = lean_ctor_get(v_x_1253_, 0);
v_imm20_1329_ = lean_ctor_get_uint64(v_x_1253_, sizeof(void*)*1);
v___x_1330_ = lean_nat_dec_eq(v_rd_1326_, v_rd_1328_);
if (v___x_1330_ == 0)
{
return v___x_1330_;
}
else
{
uint8_t v___x_1331_; 
v___x_1331_ = lean_uint64_dec_eq(v_imm20_1327_, v_imm20_1329_);
return v___x_1331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq___boxed(lean_object* v_x_1332_, lean_object* v_x_1333_){
_start:
{
uint8_t v_res_1334_; lean_object* v_r_1335_; 
v_res_1334_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq(v_x_1332_, v_x_1333_);
lean_dec(v_x_1333_);
lean_dec(v_x_1332_);
v_r_1335_ = lean_box(v_res_1334_);
return v_r_1335_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr(lean_object* v_x_1336_, lean_object* v_x_1337_){
_start:
{
uint8_t v___x_1338_; 
v___x_1338_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr_decEq(v_x_1336_, v_x_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr___boxed(lean_object* v_x_1339_, lean_object* v_x_1340_){
_start:
{
uint8_t v_res_1341_; lean_object* v_r_1342_; 
v_res_1341_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr(v_x_1339_, v_x_1340_);
lean_dec(v_x_1340_);
lean_dec(v_x_1339_);
v_r_1342_ = lean_box(v_res_1341_);
return v_r_1342_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr(lean_object* v_x_1400_, lean_object* v_prec_1401_){
_start:
{
lean_object* v___y_1403_; 
switch(lean_obj_tag(v_x_1400_))
{
case 0:
{
uint8_t v_op_1409_; lean_object* v_rd_1410_; lean_object* v_rs1_1411_; uint64_t v_imm_1412_; lean_object* v___y_1414_; lean_object* v___x_1437_; uint8_t v___x_1438_; 
v_op_1409_ = lean_ctor_get_uint8(v_x_1400_, sizeof(void*)*2 + 8);
v_rd_1410_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rd_1410_);
v_rs1_1411_ = lean_ctor_get(v_x_1400_, 1);
lean_inc(v_rs1_1411_);
v_imm_1412_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1400_, 2);
v___x_1437_ = lean_unsigned_to_nat(1024u);
v___x_1438_ = lean_nat_dec_le(v___x_1437_, v_prec_1401_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1414_ = v___x_1439_;
goto v___jp_1413_;
}
else
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1414_ = v___x_1440_;
goto v___jp_1413_;
}
v___jp_1413_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1415_ = lean_box(1);
v___x_1416_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__4));
v___x_1417_ = lean_unsigned_to_nat(1024u);
v___x_1418_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(v_op_1409_, v___x_1417_);
v___x_1419_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1416_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set(v___x_1420_, 1, v___x_1415_);
v___x_1421_ = l_Nat_reprFast(v_rd_1410_);
v___x_1422_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
v___x_1423_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1420_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
v___x_1424_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
lean_ctor_set(v___x_1424_, 1, v___x_1415_);
v___x_1425_ = l_Nat_reprFast(v_rs1_1411_);
v___x_1426_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
v___x_1427_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1424_);
lean_ctor_set(v___x_1427_, 1, v___x_1426_);
v___x_1428_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
lean_ctor_set(v___x_1428_, 1, v___x_1415_);
v___x_1429_ = lean_uint64_to_nat(v_imm_1412_);
v___x_1430_ = l_Nat_reprFast(v___x_1429_);
v___x_1431_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
v___x_1432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1428_);
lean_ctor_set(v___x_1432_, 1, v___x_1431_);
lean_inc(v___y_1414_);
v___x_1433_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___y_1414_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = 0;
v___x_1435_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*1, v___x_1434_);
v___x_1436_ = l_Repr_addAppParen(v___x_1435_, v_prec_1401_);
return v___x_1436_;
}
}
case 1:
{
uint8_t v_op_1441_; lean_object* v_rd_1442_; lean_object* v_rs1_1443_; lean_object* v_rs2_1444_; lean_object* v___y_1446_; lean_object* v___x_1468_; uint8_t v___x_1469_; 
v_op_1441_ = lean_ctor_get_uint8(v_x_1400_, sizeof(void*)*3);
v_rd_1442_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rd_1442_);
v_rs1_1443_ = lean_ctor_get(v_x_1400_, 1);
lean_inc(v_rs1_1443_);
v_rs2_1444_ = lean_ctor_get(v_x_1400_, 2);
lean_inc(v_rs2_1444_);
lean_dec_ref_known(v_x_1400_, 3);
v___x_1468_ = lean_unsigned_to_nat(1024u);
v___x_1469_ = lean_nat_dec_le(v___x_1468_, v_prec_1401_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1446_ = v___x_1470_;
goto v___jp_1445_;
}
else
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1446_ = v___x_1471_;
goto v___jp_1445_;
}
v___jp_1445_:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; uint8_t v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1447_ = lean_box(1);
v___x_1448_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__7));
v___x_1449_ = lean_unsigned_to_nat(1024u);
v___x_1450_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(v_op_1441_, v___x_1449_);
v___x_1451_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1448_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
lean_ctor_set(v___x_1452_, 1, v___x_1447_);
v___x_1453_ = l_Nat_reprFast(v_rd_1442_);
v___x_1454_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
v___x_1455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1452_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
lean_ctor_set(v___x_1456_, 1, v___x_1447_);
v___x_1457_ = l_Nat_reprFast(v_rs1_1443_);
v___x_1458_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
v___x_1459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1456_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1459_);
lean_ctor_set(v___x_1460_, 1, v___x_1447_);
v___x_1461_ = l_Nat_reprFast(v_rs2_1444_);
v___x_1462_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
v___x_1463_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1460_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
lean_inc(v___y_1446_);
v___x_1464_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1464_, 0, v___y_1446_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
v___x_1465_ = 0;
v___x_1466_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1466_, 0, v___x_1464_);
lean_ctor_set_uint8(v___x_1466_, sizeof(void*)*1, v___x_1465_);
v___x_1467_ = l_Repr_addAppParen(v___x_1466_, v_prec_1401_);
return v___x_1467_;
}
}
case 2:
{
lean_object* v_rd_1472_; uint64_t v_imm20_1473_; lean_object* v___y_1475_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
v_rd_1472_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rd_1472_);
v_imm20_1473_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*1);
lean_dec_ref_known(v_x_1400_, 1);
v___x_1490_ = lean_unsigned_to_nat(1024u);
v___x_1491_ = lean_nat_dec_le(v___x_1490_, v_prec_1401_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1475_ = v___x_1492_;
goto v___jp_1474_;
}
else
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1475_ = v___x_1493_;
goto v___jp_1474_;
}
v___jp_1474_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1476_ = lean_box(1);
v___x_1477_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__10));
v___x_1478_ = l_Nat_reprFast(v_rd_1472_);
v___x_1479_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
v___x_1480_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1477_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
v___x_1481_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
lean_ctor_set(v___x_1481_, 1, v___x_1476_);
v___x_1482_ = lean_uint64_to_nat(v_imm20_1473_);
v___x_1483_ = l_Nat_reprFast(v___x_1482_);
v___x_1484_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
v___x_1485_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1481_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
lean_inc(v___y_1475_);
v___x_1486_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___y_1475_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = 0;
v___x_1488_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1488_, 0, v___x_1486_);
lean_ctor_set_uint8(v___x_1488_, sizeof(void*)*1, v___x_1487_);
v___x_1489_ = l_Repr_addAppParen(v___x_1488_, v_prec_1401_);
return v___x_1489_;
}
}
case 3:
{
lean_object* v_rd_1494_; uint64_t v_imm20_1495_; lean_object* v___y_1497_; lean_object* v___x_1512_; uint8_t v___x_1513_; 
v_rd_1494_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rd_1494_);
v_imm20_1495_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*1);
lean_dec_ref_known(v_x_1400_, 1);
v___x_1512_ = lean_unsigned_to_nat(1024u);
v___x_1513_ = lean_nat_dec_le(v___x_1512_, v_prec_1401_);
if (v___x_1513_ == 0)
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1497_ = v___x_1514_;
goto v___jp_1496_;
}
else
{
lean_object* v___x_1515_; 
v___x_1515_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1497_ = v___x_1515_;
goto v___jp_1496_;
}
v___jp_1496_:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; uint8_t v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1498_ = lean_box(1);
v___x_1499_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__13));
v___x_1500_ = l_Nat_reprFast(v_rd_1494_);
v___x_1501_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
v___x_1502_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1499_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
v___x_1503_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
lean_ctor_set(v___x_1503_, 1, v___x_1498_);
v___x_1504_ = lean_uint64_to_nat(v_imm20_1495_);
v___x_1505_ = l_Nat_reprFast(v___x_1504_);
v___x_1506_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
v___x_1507_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1503_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
lean_inc(v___y_1497_);
v___x_1508_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___y_1497_);
lean_ctor_set(v___x_1508_, 1, v___x_1507_);
v___x_1509_ = 0;
v___x_1510_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1510_, 0, v___x_1508_);
lean_ctor_set_uint8(v___x_1510_, sizeof(void*)*1, v___x_1509_);
v___x_1511_ = l_Repr_addAppParen(v___x_1510_, v_prec_1401_);
return v___x_1511_;
}
}
case 4:
{
lean_object* v_rd_1516_; lean_object* v_rs1_1517_; uint64_t v_offset_1518_; lean_object* v___y_1520_; lean_object* v___x_1539_; uint8_t v___x_1540_; 
v_rd_1516_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rd_1516_);
v_rs1_1517_ = lean_ctor_get(v_x_1400_, 1);
lean_inc(v_rs1_1517_);
v_offset_1518_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1400_, 2);
v___x_1539_ = lean_unsigned_to_nat(1024u);
v___x_1540_ = lean_nat_dec_le(v___x_1539_, v_prec_1401_);
if (v___x_1540_ == 0)
{
lean_object* v___x_1541_; 
v___x_1541_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1520_ = v___x_1541_;
goto v___jp_1519_;
}
else
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1520_ = v___x_1542_;
goto v___jp_1519_;
}
v___jp_1519_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; uint8_t v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1521_ = lean_box(1);
v___x_1522_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__16));
v___x_1523_ = l_Nat_reprFast(v_rd_1516_);
v___x_1524_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
v___x_1525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1522_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1525_);
lean_ctor_set(v___x_1526_, 1, v___x_1521_);
v___x_1527_ = l_Nat_reprFast(v_rs1_1517_);
v___x_1528_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
v___x_1529_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1526_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
lean_ctor_set(v___x_1530_, 1, v___x_1521_);
v___x_1531_ = lean_uint64_to_nat(v_offset_1518_);
v___x_1532_ = l_Nat_reprFast(v___x_1531_);
v___x_1533_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
v___x_1534_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1530_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
lean_inc(v___y_1520_);
v___x_1535_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___y_1520_);
lean_ctor_set(v___x_1535_, 1, v___x_1534_);
v___x_1536_ = 0;
v___x_1537_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1537_, 0, v___x_1535_);
lean_ctor_set_uint8(v___x_1537_, sizeof(void*)*1, v___x_1536_);
v___x_1538_ = l_Repr_addAppParen(v___x_1537_, v_prec_1401_);
return v___x_1538_;
}
}
case 5:
{
lean_object* v_rs1_1543_; lean_object* v_rs2_1544_; uint64_t v_offset_1545_; lean_object* v___y_1547_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v_rs1_1543_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rs1_1543_);
v_rs2_1544_ = lean_ctor_get(v_x_1400_, 1);
lean_inc(v_rs2_1544_);
v_offset_1545_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1400_, 2);
v___x_1566_ = lean_unsigned_to_nat(1024u);
v___x_1567_ = lean_nat_dec_le(v___x_1566_, v_prec_1401_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1547_ = v___x_1568_;
goto v___jp_1546_;
}
else
{
lean_object* v___x_1569_; 
v___x_1569_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1547_ = v___x_1569_;
goto v___jp_1546_;
}
v___jp_1546_:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; uint8_t v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1548_ = lean_box(1);
v___x_1549_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__19));
v___x_1550_ = l_Nat_reprFast(v_rs1_1543_);
v___x_1551_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
v___x_1552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1549_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v___x_1548_);
v___x_1554_ = l_Nat_reprFast(v_rs2_1544_);
v___x_1555_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
v___x_1556_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1553_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
lean_ctor_set(v___x_1557_, 1, v___x_1548_);
v___x_1558_ = lean_uint64_to_nat(v_offset_1545_);
v___x_1559_ = l_Nat_reprFast(v___x_1558_);
v___x_1560_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
v___x_1561_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1557_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
lean_inc(v___y_1547_);
v___x_1562_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___y_1547_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = 0;
v___x_1564_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1564_, 0, v___x_1562_);
lean_ctor_set_uint8(v___x_1564_, sizeof(void*)*1, v___x_1563_);
v___x_1565_ = l_Repr_addAppParen(v___x_1564_, v_prec_1401_);
return v___x_1565_;
}
}
case 6:
{
uint8_t v_cond_1570_; lean_object* v_rs1_1571_; lean_object* v_rs2_1572_; uint64_t v_targetPc_1573_; lean_object* v___y_1575_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v_cond_1570_ = lean_ctor_get_uint8(v_x_1400_, sizeof(void*)*2 + 8);
v_rs1_1571_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rs1_1571_);
v_rs2_1572_ = lean_ctor_get(v_x_1400_, 1);
lean_inc(v_rs2_1572_);
v_targetPc_1573_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1400_, 2);
v___x_1598_ = lean_unsigned_to_nat(1024u);
v___x_1599_ = lean_nat_dec_le(v___x_1598_, v_prec_1401_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1575_ = v___x_1600_;
goto v___jp_1574_;
}
else
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1575_ = v___x_1601_;
goto v___jp_1574_;
}
v___jp_1574_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1576_ = lean_box(1);
v___x_1577_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__22));
v___x_1578_ = lean_unsigned_to_nat(1024u);
v___x_1579_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBranchCond_repr(v_cond_1570_, v___x_1578_);
v___x_1580_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1577_);
lean_ctor_set(v___x_1580_, 1, v___x_1579_);
v___x_1581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
lean_ctor_set(v___x_1581_, 1, v___x_1576_);
v___x_1582_ = l_Nat_reprFast(v_rs1_1571_);
v___x_1583_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
v___x_1584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1581_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
v___x_1585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v___x_1576_);
v___x_1586_ = l_Nat_reprFast(v_rs2_1572_);
v___x_1587_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1586_);
v___x_1588_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1585_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
lean_ctor_set(v___x_1589_, 1, v___x_1576_);
v___x_1590_ = lean_uint64_to_nat(v_targetPc_1573_);
v___x_1591_ = l_Nat_reprFast(v___x_1590_);
v___x_1592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
v___x_1593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1589_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
lean_inc(v___y_1575_);
v___x_1594_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___y_1575_);
lean_ctor_set(v___x_1594_, 1, v___x_1593_);
v___x_1595_ = 0;
v___x_1596_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set_uint8(v___x_1596_, sizeof(void*)*1, v___x_1595_);
v___x_1597_ = l_Repr_addAppParen(v___x_1596_, v_prec_1401_);
return v___x_1597_;
}
}
case 7:
{
lean_object* v_rd_1602_; uint64_t v_targetPc_1603_; lean_object* v___y_1605_; lean_object* v___x_1620_; uint8_t v___x_1621_; 
v_rd_1602_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rd_1602_);
v_targetPc_1603_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*1);
lean_dec_ref_known(v_x_1400_, 1);
v___x_1620_ = lean_unsigned_to_nat(1024u);
v___x_1621_ = lean_nat_dec_le(v___x_1620_, v_prec_1401_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1605_ = v___x_1622_;
goto v___jp_1604_;
}
else
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1605_ = v___x_1623_;
goto v___jp_1604_;
}
v___jp_1604_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1606_ = lean_box(1);
v___x_1607_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__25));
v___x_1608_ = l_Nat_reprFast(v_rd_1602_);
v___x_1609_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
v___x_1610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1607_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
v___x_1611_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
lean_ctor_set(v___x_1611_, 1, v___x_1606_);
v___x_1612_ = lean_uint64_to_nat(v_targetPc_1603_);
v___x_1613_ = l_Nat_reprFast(v___x_1612_);
v___x_1614_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
v___x_1615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1611_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
lean_inc(v___y_1605_);
v___x_1616_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___y_1605_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = 0;
v___x_1618_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1618_, 0, v___x_1616_);
lean_ctor_set_uint8(v___x_1618_, sizeof(void*)*1, v___x_1617_);
v___x_1619_ = l_Repr_addAppParen(v___x_1618_, v_prec_1401_);
return v___x_1619_;
}
}
case 8:
{
lean_object* v_rd_1624_; lean_object* v_rs1_1625_; uint64_t v_offset_1626_; lean_object* v___y_1628_; lean_object* v___x_1647_; uint8_t v___x_1648_; 
v_rd_1624_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_rd_1624_);
v_rs1_1625_ = lean_ctor_get(v_x_1400_, 1);
lean_inc(v_rs1_1625_);
v_offset_1626_ = lean_ctor_get_uint64(v_x_1400_, sizeof(void*)*2);
lean_dec_ref_known(v_x_1400_, 2);
v___x_1647_ = lean_unsigned_to_nat(1024u);
v___x_1648_ = lean_nat_dec_le(v___x_1647_, v_prec_1401_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1628_ = v___x_1649_;
goto v___jp_1627_;
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1628_ = v___x_1650_;
goto v___jp_1627_;
}
v___jp_1627_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; uint8_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1629_ = lean_box(1);
v___x_1630_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__28));
v___x_1631_ = l_Nat_reprFast(v_rd_1624_);
v___x_1632_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
v___x_1633_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1630_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
lean_ctor_set(v___x_1634_, 1, v___x_1629_);
v___x_1635_ = l_Nat_reprFast(v_rs1_1625_);
v___x_1636_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
v___x_1637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1634_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1637_);
lean_ctor_set(v___x_1638_, 1, v___x_1629_);
v___x_1639_ = lean_uint64_to_nat(v_offset_1626_);
v___x_1640_ = l_Nat_reprFast(v___x_1639_);
v___x_1641_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
v___x_1642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1638_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
lean_inc(v___y_1628_);
v___x_1643_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___y_1628_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
v___x_1644_ = 0;
v___x_1645_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1645_, 0, v___x_1643_);
lean_ctor_set_uint8(v___x_1645_, sizeof(void*)*1, v___x_1644_);
v___x_1646_ = l_Repr_addAppParen(v___x_1645_, v_prec_1401_);
return v___x_1646_;
}
}
default: 
{
lean_object* v___x_1651_; uint8_t v___x_1652_; 
v___x_1651_ = lean_unsigned_to_nat(1024u);
v___x_1652_ = lean_nat_dec_le(v___x_1651_, v_prec_1401_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; 
v___x_1653_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__42);
v___y_1403_ = v___x_1653_;
goto v___jp_1402_;
}
else
{
lean_object* v___x_1654_; 
v___x_1654_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43, &lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr___closed__43);
v___y_1403_ = v___x_1654_;
goto v___jp_1402_;
}
}
}
v___jp_1402_:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1404_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___closed__1));
lean_inc(v___y_1403_);
v___x_1405_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___y_1403_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
v___x_1406_ = 0;
v___x_1407_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1407_, 0, v___x_1405_);
lean_ctor_set_uint8(v___x_1407_, sizeof(void*)*1, v___x_1406_);
v___x_1408_ = l_Repr_addAppParen(v___x_1407_, v_prec_1401_);
return v___x_1408_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr___boxed(lean_object* v_x_1655_, lean_object* v_prec_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr(v_x_1655_, v_prec_1656_);
lean_dec(v_prec_1656_);
return v_res_1657_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0(lean_object* v_a_1660_, lean_object* v_b_1661_){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1662_ = lean_alloc_closure((void*)(l_instDecidableEqUInt64___boxed), 2, 0);
v___x_1663_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqRVInstr___boxed), 2, 0);
v___x_1664_ = l_instDecidableEqProd___redArg(v___x_1662_, v___x_1663_, v_a_1660_, v_b_1661_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0___boxed(lean_object* v_a_1665_, lean_object* v_b_1666_){
_start:
{
uint8_t v_res_1667_; lean_object* v_r_1668_; 
v_res_1667_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___lam__0(v_a_1665_, v_b_1666_);
v_r_1668_ = lean_box(v_res_1667_);
return v_r_1668_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq(lean_object* v_x_1670_, lean_object* v_x_1671_){
_start:
{
uint64_t v_entryPc_1672_; lean_object* v_code_1673_; uint64_t v_entryPc_1674_; lean_object* v_code_1675_; uint8_t v___x_1676_; 
v_entryPc_1672_ = lean_ctor_get_uint64(v_x_1670_, sizeof(void*)*1);
v_code_1673_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_code_1673_);
lean_dec_ref(v_x_1670_);
v_entryPc_1674_ = lean_ctor_get_uint64(v_x_1671_, sizeof(void*)*1);
v_code_1675_ = lean_ctor_get(v_x_1671_, 0);
lean_inc(v_code_1675_);
lean_dec_ref(v_x_1671_);
v___x_1676_ = lean_uint64_dec_eq(v_entryPc_1672_, v_entryPc_1674_);
if (v___x_1676_ == 0)
{
lean_dec(v_code_1675_);
lean_dec(v_code_1673_);
return v___x_1676_;
}
else
{
lean_object* v___f_1677_; uint8_t v___x_1678_; 
v___f_1677_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___closed__0));
v___x_1678_ = l_instDecidableEqList___redArg(v___f_1677_, v_code_1673_, v_code_1675_);
return v___x_1678_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq___boxed(lean_object* v_x_1679_, lean_object* v_x_1680_){
_start:
{
uint8_t v_res_1681_; lean_object* v_r_1682_; 
v_res_1681_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq(v_x_1679_, v_x_1680_);
v_r_1682_ = lean_box(v_res_1681_);
return v_r_1682_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg(lean_object* v_x_1683_, lean_object* v_x_1684_){
_start:
{
uint8_t v___x_1685_; 
v___x_1685_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg_decEq(v_x_1683_, v_x_1684_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg___boxed(lean_object* v_x_1686_, lean_object* v_x_1687_){
_start:
{
uint8_t v_res_1688_; lean_object* v_r_1689_; 
v_res_1688_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqElfProg(v_x_1686_, v_x_1687_);
v_r_1689_ = lean_box(v_res_1688_);
return v_r_1689_;
}
}
static lean_object* _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1698_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__0));
v___x_1699_ = lean_string_length(v___x_1698_);
return v___x_1699_;
}
}
static lean_object* _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_obj_once(&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5, &lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5_once, _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__5);
v___x_1701_ = lean_nat_to_int(v___x_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(lean_object* v_x_1706_){
_start:
{
lean_object* v_fst_1707_; lean_object* v_snd_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1734_; 
v_fst_1707_ = lean_ctor_get(v_x_1706_, 0);
v_snd_1708_ = lean_ctor_get(v_x_1706_, 1);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_x_1706_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1710_ = v_x_1706_;
v_isShared_1711_ = v_isSharedCheck_1734_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_snd_1708_);
lean_inc(v_fst_1707_);
lean_dec(v_x_1706_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1734_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
uint64_t v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1718_; 
v___x_1712_ = lean_unbox_uint64(v_fst_1707_);
lean_dec(v_fst_1707_);
v___x_1713_ = lean_uint64_to_nat(v___x_1712_);
v___x_1714_ = l_Nat_reprFast(v___x_1713_);
v___x_1715_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1714_);
v___x_1716_ = lean_box(0);
if (v_isShared_1711_ == 0)
{
lean_ctor_set_tag(v___x_1710_, 1);
lean_ctor_set(v___x_1710_, 1, v___x_1716_);
lean_ctor_set(v___x_1710_, 0, v___x_1715_);
v___x_1718_ = v___x_1710_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v___x_1715_);
lean_ctor_set(v_reuseFailAlloc_1733_, 1, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; uint8_t v___x_1731_; lean_object* v___x_1732_; 
v___x_1719_ = lean_unsigned_to_nat(0u);
v___x_1720_ = lp_rv2pancake_Rv2Pancake_Spec_instReprRVInstr_repr(v_snd_1708_, v___x_1719_);
v___x_1721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
lean_ctor_set(v___x_1721_, 1, v___x_1718_);
v___x_1722_ = l_List_reverse___redArg(v___x_1721_);
v___x_1723_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__3));
v___x_1724_ = l_Std_Format_joinSep___at___00Lean_Syntax_formatStxAux_spec__2(v___x_1722_, v___x_1723_);
v___x_1725_ = lean_obj_once(&lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6, &lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6_once, _init_lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__6);
v___x_1726_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__7));
v___x_1727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
lean_ctor_set(v___x_1727_, 1, v___x_1724_);
v___x_1728_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__8));
v___x_1729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1727_);
lean_ctor_set(v___x_1729_, 1, v___x_1728_);
v___x_1730_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1725_);
lean_ctor_set(v___x_1730_, 1, v___x_1729_);
v___x_1731_ = 0;
v___x_1732_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set_uint8(v___x_1732_, sizeof(void*)*1, v___x_1731_);
return v___x_1732_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_1735_, lean_object* v_x_1736_, lean_object* v_x_1737_){
_start:
{
if (lean_obj_tag(v_x_1737_) == 0)
{
lean_dec(v_x_1735_);
return v_x_1736_;
}
else
{
lean_object* v_head_1738_; lean_object* v_tail_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1749_; 
v_head_1738_ = lean_ctor_get(v_x_1737_, 0);
v_tail_1739_ = lean_ctor_get(v_x_1737_, 1);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_x_1737_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1741_ = v_x_1737_;
v_isShared_1742_ = v_isSharedCheck_1749_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_tail_1739_);
lean_inc(v_head_1738_);
lean_dec(v_x_1737_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1749_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
lean_inc(v_x_1735_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set_tag(v___x_1741_, 5);
lean_ctor_set(v___x_1741_, 1, v_x_1735_);
lean_ctor_set(v___x_1741_, 0, v_x_1736_);
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_x_1736_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_x_1735_);
v___x_1744_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1738_);
v___x_1746_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1744_);
lean_ctor_set(v___x_1746_, 1, v___x_1745_);
v_x_1736_ = v___x_1746_;
v_x_1737_ = v_tail_1739_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2(lean_object* v_x_1750_, lean_object* v_x_1751_, lean_object* v_x_1752_){
_start:
{
if (lean_obj_tag(v_x_1752_) == 0)
{
lean_dec(v_x_1750_);
return v_x_1751_;
}
else
{
lean_object* v_head_1753_; lean_object* v_tail_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1764_; 
v_head_1753_ = lean_ctor_get(v_x_1752_, 0);
v_tail_1754_ = lean_ctor_get(v_x_1752_, 1);
v_isSharedCheck_1764_ = !lean_is_exclusive(v_x_1752_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1756_ = v_x_1752_;
v_isShared_1757_ = v_isSharedCheck_1764_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_tail_1754_);
lean_inc(v_head_1753_);
lean_dec(v_x_1752_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1764_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
lean_inc(v_x_1750_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set_tag(v___x_1756_, 5);
lean_ctor_set(v___x_1756_, 1, v_x_1750_);
lean_ctor_set(v___x_1756_, 0, v_x_1751_);
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_x_1751_);
lean_ctor_set(v_reuseFailAlloc_1763_, 1, v_x_1750_);
v___x_1759_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1760_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1753_);
v___x_1761_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1759_);
lean_ctor_set(v___x_1761_, 1, v___x_1760_);
v___x_1762_ = lp_rv2pancake_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2_spec__3(v_x_1750_, v___x_1761_, v_tail_1754_);
return v___x_1762_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1(lean_object* v_x_1765_, lean_object* v_x_1766_){
_start:
{
if (lean_obj_tag(v_x_1765_) == 0)
{
lean_object* v___x_1767_; 
lean_dec(v_x_1766_);
v___x_1767_ = lean_box(0);
return v___x_1767_;
}
else
{
lean_object* v_tail_1768_; 
v_tail_1768_ = lean_ctor_get(v_x_1765_, 1);
if (lean_obj_tag(v_tail_1768_) == 0)
{
lean_object* v_head_1769_; lean_object* v___x_1770_; 
lean_dec(v_x_1766_);
v_head_1769_ = lean_ctor_get(v_x_1765_, 0);
lean_inc(v_head_1769_);
lean_dec_ref_known(v_x_1765_, 2);
v___x_1770_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1769_);
return v___x_1770_;
}
else
{
lean_object* v_head_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
lean_inc(v_tail_1768_);
v_head_1771_ = lean_ctor_get(v_x_1765_, 0);
lean_inc(v_head_1771_);
lean_dec_ref_known(v_x_1765_, 2);
v___x_1772_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_head_1771_);
v___x_1773_ = lp_rv2pancake_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1_spec__2(v_x_1766_, v___x_1772_, v_tail_1768_);
return v___x_1773_;
}
}
}
}
static lean_object* _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__2));
v___x_1780_ = lean_string_length(v___x_1779_);
return v___x_1780_;
}
}
static lean_object* _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = lean_obj_once(&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4, &lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4_once, _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__4);
v___x_1782_ = lean_nat_to_int(v___x_1781_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg(lean_object* v_a_1787_){
_start:
{
if (lean_obj_tag(v_a_1787_) == 0)
{
lean_object* v___x_1788_; 
v___x_1788_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__1));
return v___x_1788_;
}
else
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; uint8_t v___x_1797_; lean_object* v___x_1798_; 
v___x_1789_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__3));
v___x_1790_ = lp_rv2pancake_Std_Format_joinSep___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__1(v_a_1787_, v___x_1789_);
v___x_1791_ = lean_obj_once(&lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5, &lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5_once, _init_lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__5);
v___x_1792_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__6));
v___x_1793_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1792_);
lean_ctor_set(v___x_1793_, 1, v___x_1790_);
v___x_1794_ = ((lean_object*)(lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg___closed__7));
v___x_1795_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1793_);
lean_ctor_set(v___x_1795_, 1, v___x_1794_);
v___x_1796_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1791_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = 0;
v___x_1798_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1798_, 0, v___x_1796_);
lean_ctor_set_uint8(v___x_1798_, sizeof(void*)*1, v___x_1797_);
return v___x_1798_;
}
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = lean_unsigned_to_nat(11u);
v___x_1813_ = lean_nat_to_int(v___x_1812_);
return v___x_1813_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1817_ = lean_unsigned_to_nat(8u);
v___x_1818_ = lean_nat_to_int(v___x_1817_);
return v___x_1818_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__0));
v___x_1821_ = lean_string_length(v___x_1820_);
return v___x_1821_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1822_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__12);
v___x_1823_ = lean_nat_to_int(v___x_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg(lean_object* v_x_1828_){
_start:
{
uint64_t v_entryPc_1829_; lean_object* v_code_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v_entryPc_1829_ = lean_ctor_get_uint64(v_x_1828_, sizeof(void*)*1);
v_code_1830_ = lean_ctor_get(v_x_1828_, 0);
lean_inc(v_code_1830_);
lean_dec_ref(v_x_1828_);
v___x_1831_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__5));
v___x_1832_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__6));
v___x_1833_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__7);
v___x_1834_ = lean_uint64_to_nat(v_entryPc_1829_);
v___x_1835_ = l_Nat_reprFast(v___x_1834_);
v___x_1836_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
v___x_1837_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1833_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
v___x_1838_ = 0;
v___x_1839_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1839_, 0, v___x_1837_);
lean_ctor_set_uint8(v___x_1839_, sizeof(void*)*1, v___x_1838_);
v___x_1840_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1832_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = ((lean_object*)(lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg___closed__2));
v___x_1842_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1840_);
lean_ctor_set(v___x_1842_, 1, v___x_1841_);
v___x_1843_ = lean_box(1);
v___x_1844_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1842_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__9));
v___x_1846_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1844_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
v___x_1847_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
lean_ctor_set(v___x_1847_, 1, v___x_1831_);
v___x_1848_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__10);
v___x_1849_ = lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg(v_code_1830_);
v___x_1850_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
lean_ctor_set_uint8(v___x_1851_, sizeof(void*)*1, v___x_1838_);
v___x_1852_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1847_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
v___x_1853_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13, &lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__13);
v___x_1854_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__14));
v___x_1855_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
lean_ctor_set(v___x_1855_, 1, v___x_1852_);
v___x_1856_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg___closed__15));
v___x_1857_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1855_);
lean_ctor_set(v___x_1857_, 1, v___x_1856_);
v___x_1858_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1853_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
v___x_1859_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
lean_ctor_set_uint8(v___x_1859_, sizeof(void*)*1, v___x_1838_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr(lean_object* v_x_1860_, lean_object* v_prec_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___redArg(v_x_1860_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr___boxed(lean_object* v_x_1863_, lean_object* v_prec_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = lp_rv2pancake_Rv2Pancake_Spec_instReprElfProg_repr(v_x_1863_, v_prec_1864_);
lean_dec(v_prec_1864_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0(lean_object* v_a_1866_, lean_object* v_n_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___redArg(v_a_1866_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0___boxed(lean_object* v_a_1869_, lean_object* v_n_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = lp_rv2pancake_List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0(v_a_1869_, v_n_1870_);
lean_dec(v_n_1870_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0(lean_object* v_x_1872_, lean_object* v_x_1873_){
_start:
{
lean_object* v___x_1874_; 
v___x_1874_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___redArg(v_x_1872_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0___boxed(lean_object* v_x_1875_, lean_object* v_x_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = lp_rv2pancake_Prod_repr___at___00List_repr___at___00Rv2Pancake_Spec_instReprElfProg_repr_spec__0_spec__0(v_x_1875_, v_x_1876_);
lean_dec(v_x_1876_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_fetchInstr(lean_object* v_code_1880_, uint64_t v_pc_1881_){
_start:
{
if (lean_obj_tag(v_code_1880_) == 0)
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_box(0);
return v___x_1882_;
}
else
{
lean_object* v_head_1883_; lean_object* v_tail_1884_; lean_object* v_fst_1885_; lean_object* v_snd_1886_; uint64_t v___x_1887_; uint8_t v___x_1888_; 
v_head_1883_ = lean_ctor_get(v_code_1880_, 0);
v_tail_1884_ = lean_ctor_get(v_code_1880_, 1);
v_fst_1885_ = lean_ctor_get(v_head_1883_, 0);
v_snd_1886_ = lean_ctor_get(v_head_1883_, 1);
v___x_1887_ = lean_unbox_uint64(v_fst_1885_);
v___x_1888_ = lean_uint64_dec_eq(v_pc_1881_, v___x_1887_);
if (v___x_1888_ == 0)
{
v_code_1880_ = v_tail_1884_;
goto _start;
}
else
{
lean_object* v___x_1890_; 
lean_inc(v_snd_1886_);
v___x_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_snd_1886_);
return v___x_1890_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_fetchInstr___boxed(lean_object* v_code_1891_, lean_object* v_pc_1892_){
_start:
{
uint64_t v_pc_boxed_1893_; lean_object* v_res_1894_; 
v_pc_boxed_1893_ = lean_unbox_uint64(v_pc_1892_);
lean_dec_ref(v_pc_1892_);
v_res_1894_ = lp_rv2pancake_Rv2Pancake_Spec_fetchInstr(v_code_1891_, v_pc_boxed_1893_);
lean_dec(v_code_1891_);
return v_res_1894_;
}
}
static uint64_t _init_lp_rv2pancake_Rv2Pancake_Spec_jalrMask(void){
_start:
{
uint64_t v___x_1895_; 
v___x_1895_ = 18446744073709551614ULL;
return v___x_1895_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0(uint64_t v_addr_1896_, lean_object* v_mem_1897_, uint64_t v_v_1898_, uint64_t v_a_1899_){
_start:
{
uint8_t v___x_1900_; 
v___x_1900_ = lean_uint64_dec_eq(v_a_1899_, v_addr_1896_);
if (v___x_1900_ == 0)
{
lean_object* v___x_1901_; lean_object* v___x_1902_; uint64_t v___x_1903_; 
v___x_1901_ = lean_box_uint64(v_a_1899_);
v___x_1902_ = lean_apply_1(v_mem_1897_, v___x_1901_);
v___x_1903_ = lean_unbox_uint64(v___x_1902_);
lean_dec_ref(v___x_1902_);
return v___x_1903_;
}
else
{
lean_dec_ref(v_mem_1897_);
return v_v_1898_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0___boxed(lean_object* v_addr_1904_, lean_object* v_mem_1905_, lean_object* v_v_1906_, lean_object* v_a_1907_){
_start:
{
uint64_t v_addr_boxed_1908_; uint64_t v_v_boxed_1909_; uint64_t v_a_boxed_1910_; uint64_t v_res_1911_; lean_object* v_r_1912_; 
v_addr_boxed_1908_ = lean_unbox_uint64(v_addr_1904_);
lean_dec_ref(v_addr_1904_);
v_v_boxed_1909_ = lean_unbox_uint64(v_v_1906_);
lean_dec_ref(v_v_1906_);
v_a_boxed_1910_ = lean_unbox_uint64(v_a_1907_);
lean_dec_ref(v_a_1907_);
v_res_1911_ = lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0(v_addr_boxed_1908_, v_mem_1905_, v_v_boxed_1909_, v_a_boxed_1910_);
v_r_1912_ = lean_box_uint64(v_res_1911_);
return v_r_1912_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execRVInstr(lean_object* v_ins_1913_, lean_object* v_st_1914_){
_start:
{
switch(lean_obj_tag(v_ins_1913_))
{
case 0:
{
uint8_t v_op_1915_; lean_object* v_rd_1916_; lean_object* v_rs1_1917_; uint64_t v_imm_1918_; uint64_t v_pc_1919_; lean_object* v_regs_1920_; lean_object* v_mem_1921_; uint8_t v_halted_1922_; uint64_t v_retVal_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1936_; 
v_op_1915_ = lean_ctor_get_uint8(v_ins_1913_, sizeof(void*)*2 + 8);
v_rd_1916_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rd_1916_);
v_rs1_1917_ = lean_ctor_get(v_ins_1913_, 1);
lean_inc(v_rs1_1917_);
v_imm_1918_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1913_, 2);
v_pc_1919_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_1920_ = lean_ctor_get(v_st_1914_, 0);
v_mem_1921_ = lean_ctor_get(v_st_1914_, 1);
v_halted_1922_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_1923_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_1936_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1925_ = v_st_1914_;
v_isShared_1926_ = v_isSharedCheck_1936_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_mem_1921_);
lean_inc(v_regs_1920_);
lean_dec(v_st_1914_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1936_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
uint64_t v___x_1927_; uint64_t v_v_1928_; uint64_t v___x_1929_; uint64_t v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1934_; 
lean_inc_ref(v_regs_1920_);
v___x_1927_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1920_, v_rs1_1917_);
v_v_1928_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_1915_, v___x_1927_, v_imm_1918_);
v___x_1929_ = 4ULL;
v___x_1930_ = lean_uint64_add(v_pc_1919_, v___x_1929_);
v___x_1931_ = lean_box_uint64(v_v_1928_);
v___x_1932_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1932_, 0, v_regs_1920_);
lean_closure_set(v___x_1932_, 1, v_rd_1916_);
lean_closure_set(v___x_1932_, 2, v___x_1931_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set(v___x_1925_, 0, v___x_1932_);
v___x_1934_ = v___x_1925_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v_mem_1921_);
lean_ctor_set_uint8(v_reuseFailAlloc_1935_, sizeof(void*)*2 + 16, v_halted_1922_);
lean_ctor_set_uint64(v_reuseFailAlloc_1935_, sizeof(void*)*2 + 8, v_retVal_1923_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
lean_ctor_set_uint64(v___x_1934_, sizeof(void*)*2, v___x_1930_);
return v___x_1934_;
}
}
}
case 1:
{
uint8_t v_op_1937_; lean_object* v_rd_1938_; lean_object* v_rs1_1939_; lean_object* v_rs2_1940_; uint64_t v_pc_1941_; lean_object* v_regs_1942_; lean_object* v_mem_1943_; uint8_t v_halted_1944_; uint64_t v_retVal_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1959_; 
v_op_1937_ = lean_ctor_get_uint8(v_ins_1913_, sizeof(void*)*3);
v_rd_1938_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rd_1938_);
v_rs1_1939_ = lean_ctor_get(v_ins_1913_, 1);
lean_inc(v_rs1_1939_);
v_rs2_1940_ = lean_ctor_get(v_ins_1913_, 2);
lean_inc(v_rs2_1940_);
lean_dec_ref_known(v_ins_1913_, 3);
v_pc_1941_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_1942_ = lean_ctor_get(v_st_1914_, 0);
v_mem_1943_ = lean_ctor_get(v_st_1914_, 1);
v_halted_1944_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_1945_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_1959_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1947_ = v_st_1914_;
v_isShared_1948_ = v_isSharedCheck_1959_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_mem_1943_);
lean_inc(v_regs_1942_);
lean_dec(v_st_1914_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1959_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
uint64_t v___x_1949_; uint64_t v___x_1950_; uint64_t v_v_1951_; uint64_t v___x_1952_; uint64_t v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1957_; 
lean_inc_ref_n(v_regs_1942_, 2);
v___x_1949_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1942_, v_rs1_1939_);
v___x_1950_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1942_, v_rs2_1940_);
v_v_1951_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_1937_, v___x_1949_, v___x_1950_);
v___x_1952_ = 4ULL;
v___x_1953_ = lean_uint64_add(v_pc_1941_, v___x_1952_);
v___x_1954_ = lean_box_uint64(v_v_1951_);
v___x_1955_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1955_, 0, v_regs_1942_);
lean_closure_set(v___x_1955_, 1, v_rd_1938_);
lean_closure_set(v___x_1955_, 2, v___x_1954_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v___x_1955_);
v___x_1957_ = v___x_1947_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1955_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v_mem_1943_);
lean_ctor_set_uint8(v_reuseFailAlloc_1958_, sizeof(void*)*2 + 16, v_halted_1944_);
lean_ctor_set_uint64(v_reuseFailAlloc_1958_, sizeof(void*)*2 + 8, v_retVal_1945_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
lean_ctor_set_uint64(v___x_1957_, sizeof(void*)*2, v___x_1953_);
return v___x_1957_;
}
}
}
case 2:
{
lean_object* v_rd_1960_; uint64_t v_imm20_1961_; uint64_t v_pc_1962_; lean_object* v_regs_1963_; lean_object* v_mem_1964_; uint8_t v_halted_1965_; uint64_t v_retVal_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1977_; 
v_rd_1960_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rd_1960_);
v_imm20_1961_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1913_, 1);
v_pc_1962_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_1963_ = lean_ctor_get(v_st_1914_, 0);
v_mem_1964_ = lean_ctor_get(v_st_1914_, 1);
v_halted_1965_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_1966_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_1977_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1968_ = v_st_1914_;
v_isShared_1969_ = v_isSharedCheck_1977_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_mem_1964_);
lean_inc(v_regs_1963_);
lean_dec(v_st_1914_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1977_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
uint64_t v___x_1970_; uint64_t v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1975_; 
v___x_1970_ = 4ULL;
v___x_1971_ = lean_uint64_add(v_pc_1962_, v___x_1970_);
v___x_1972_ = lean_box_uint64(v_imm20_1961_);
v___x_1973_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1973_, 0, v_regs_1963_);
lean_closure_set(v___x_1973_, 1, v_rd_1960_);
lean_closure_set(v___x_1973_, 2, v___x_1972_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v___x_1973_);
v___x_1975_ = v___x_1968_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v___x_1973_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v_mem_1964_);
lean_ctor_set_uint8(v_reuseFailAlloc_1976_, sizeof(void*)*2 + 16, v_halted_1965_);
lean_ctor_set_uint64(v_reuseFailAlloc_1976_, sizeof(void*)*2 + 8, v_retVal_1966_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
lean_ctor_set_uint64(v___x_1975_, sizeof(void*)*2, v___x_1971_);
return v___x_1975_;
}
}
}
case 3:
{
lean_object* v_rd_1978_; uint64_t v_imm20_1979_; uint64_t v_pc_1980_; lean_object* v_regs_1981_; lean_object* v_mem_1982_; uint8_t v_halted_1983_; uint64_t v_retVal_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1996_; 
v_rd_1978_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rd_1978_);
v_imm20_1979_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1913_, 1);
v_pc_1980_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_1981_ = lean_ctor_get(v_st_1914_, 0);
v_mem_1982_ = lean_ctor_get(v_st_1914_, 1);
v_halted_1983_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_1984_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1986_ = v_st_1914_;
v_isShared_1987_ = v_isSharedCheck_1996_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_mem_1982_);
lean_inc(v_regs_1981_);
lean_dec(v_st_1914_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1996_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
uint64_t v___x_1988_; uint64_t v___x_1989_; uint64_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1988_ = 4ULL;
v___x_1989_ = lean_uint64_add(v_pc_1980_, v___x_1988_);
v___x_1990_ = lean_uint64_add(v_pc_1980_, v_imm20_1979_);
v___x_1991_ = lean_box_uint64(v___x_1990_);
v___x_1992_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_1992_, 0, v_regs_1981_);
lean_closure_set(v___x_1992_, 1, v_rd_1978_);
lean_closure_set(v___x_1992_, 2, v___x_1991_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_1992_);
v___x_1994_ = v___x_1986_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1992_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v_mem_1982_);
lean_ctor_set_uint8(v_reuseFailAlloc_1995_, sizeof(void*)*2 + 16, v_halted_1983_);
lean_ctor_set_uint64(v_reuseFailAlloc_1995_, sizeof(void*)*2 + 8, v_retVal_1984_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_ctor_set_uint64(v___x_1994_, sizeof(void*)*2, v___x_1989_);
return v___x_1994_;
}
}
}
case 4:
{
lean_object* v_rd_1997_; lean_object* v_rs1_1998_; uint64_t v_offset_1999_; uint64_t v_pc_2000_; lean_object* v_regs_2001_; lean_object* v_mem_2002_; uint8_t v_halted_2003_; uint64_t v_retVal_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2018_; 
v_rd_1997_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rd_1997_);
v_rs1_1998_ = lean_ctor_get(v_ins_1913_, 1);
lean_inc(v_rs1_1998_);
v_offset_1999_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1913_, 2);
v_pc_2000_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_2001_ = lean_ctor_get(v_st_1914_, 0);
v_mem_2002_ = lean_ctor_get(v_st_1914_, 1);
v_halted_2003_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_2004_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_2018_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2006_ = v_st_1914_;
v_isShared_2007_ = v_isSharedCheck_2018_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_mem_2002_);
lean_inc(v_regs_2001_);
lean_dec(v_st_1914_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2018_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
uint64_t v___x_2008_; uint64_t v_addr_2009_; lean_object* v___x_2010_; lean_object* v_v_2011_; uint64_t v___x_2012_; uint64_t v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2016_; 
lean_inc_ref(v_regs_2001_);
v___x_2008_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2001_, v_rs1_1998_);
v_addr_2009_ = lean_uint64_add(v___x_2008_, v_offset_1999_);
v___x_2010_ = lean_box_uint64(v_addr_2009_);
lean_inc_ref(v_mem_2002_);
v_v_2011_ = lean_apply_1(v_mem_2002_, v___x_2010_);
v___x_2012_ = 4ULL;
v___x_2013_ = lean_uint64_add(v_pc_2000_, v___x_2012_);
v___x_2014_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_2014_, 0, v_regs_2001_);
lean_closure_set(v___x_2014_, 1, v_rd_1997_);
lean_closure_set(v___x_2014_, 2, v_v_2011_);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v___x_2014_);
v___x_2016_ = v___x_2006_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2014_);
lean_ctor_set(v_reuseFailAlloc_2017_, 1, v_mem_2002_);
lean_ctor_set_uint8(v_reuseFailAlloc_2017_, sizeof(void*)*2 + 16, v_halted_2003_);
lean_ctor_set_uint64(v_reuseFailAlloc_2017_, sizeof(void*)*2 + 8, v_retVal_2004_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_ctor_set_uint64(v___x_2016_, sizeof(void*)*2, v___x_2013_);
return v___x_2016_;
}
}
}
case 5:
{
lean_object* v_rs1_2019_; lean_object* v_rs2_2020_; uint64_t v_offset_2021_; uint64_t v_pc_2022_; lean_object* v_regs_2023_; lean_object* v_mem_2024_; uint8_t v_halted_2025_; uint64_t v_retVal_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2041_; 
v_rs1_2019_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rs1_2019_);
v_rs2_2020_ = lean_ctor_get(v_ins_1913_, 1);
lean_inc(v_rs2_2020_);
v_offset_2021_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1913_, 2);
v_pc_2022_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_2023_ = lean_ctor_get(v_st_1914_, 0);
v_mem_2024_ = lean_ctor_get(v_st_1914_, 1);
v_halted_2025_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_2026_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2028_ = v_st_1914_;
v_isShared_2029_ = v_isSharedCheck_2041_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_mem_2024_);
lean_inc(v_regs_2023_);
lean_dec(v_st_1914_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2041_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
uint64_t v___x_2030_; uint64_t v_addr_2031_; uint64_t v_v_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___f_2035_; uint64_t v___x_2036_; uint64_t v___x_2037_; lean_object* v___x_2039_; 
lean_inc_ref_n(v_regs_2023_, 2);
v___x_2030_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2023_, v_rs1_2019_);
v_addr_2031_ = lean_uint64_add(v___x_2030_, v_offset_2021_);
v_v_2032_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2023_, v_rs2_2020_);
v___x_2033_ = lean_box_uint64(v_addr_2031_);
v___x_2034_ = lean_box_uint64(v_v_2032_);
v___f_2035_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_execRVInstr___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2035_, 0, v___x_2033_);
lean_closure_set(v___f_2035_, 1, v_mem_2024_);
lean_closure_set(v___f_2035_, 2, v___x_2034_);
v___x_2036_ = 4ULL;
v___x_2037_ = lean_uint64_add(v_pc_2022_, v___x_2036_);
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 1, v___f_2035_);
v___x_2039_ = v___x_2028_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_regs_2023_);
lean_ctor_set(v_reuseFailAlloc_2040_, 1, v___f_2035_);
lean_ctor_set_uint8(v_reuseFailAlloc_2040_, sizeof(void*)*2 + 16, v_halted_2025_);
lean_ctor_set_uint64(v_reuseFailAlloc_2040_, sizeof(void*)*2 + 8, v_retVal_2026_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
lean_ctor_set_uint64(v___x_2039_, sizeof(void*)*2, v___x_2037_);
return v___x_2039_;
}
}
}
case 6:
{
uint8_t v_cond_2042_; lean_object* v_rs1_2043_; lean_object* v_rs2_2044_; uint64_t v_targetPc_2045_; uint64_t v_pc_2046_; lean_object* v_regs_2047_; lean_object* v_mem_2048_; uint8_t v_halted_2049_; uint64_t v_retVal_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2065_; 
v_cond_2042_ = lean_ctor_get_uint8(v_ins_1913_, sizeof(void*)*2 + 8);
v_rs1_2043_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rs1_2043_);
v_rs2_2044_ = lean_ctor_get(v_ins_1913_, 1);
lean_inc(v_rs2_2044_);
v_targetPc_2045_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1913_, 2);
v_pc_2046_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_2047_ = lean_ctor_get(v_st_1914_, 0);
v_mem_2048_ = lean_ctor_get(v_st_1914_, 1);
v_halted_2049_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_2050_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_2065_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2052_ = v_st_1914_;
v_isShared_2053_ = v_isSharedCheck_2065_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_mem_2048_);
lean_inc(v_regs_2047_);
lean_dec(v_st_1914_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2065_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
uint64_t v___x_2054_; uint64_t v___x_2055_; uint8_t v_taken_2056_; 
lean_inc_ref_n(v_regs_2047_, 2);
v___x_2054_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2047_, v_rs1_2043_);
v___x_2055_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2047_, v_rs2_2044_);
v_taken_2056_ = lp_rv2pancake_Rv2Pancake_Spec_evalBranchCond(v_cond_2042_, v___x_2054_, v___x_2055_);
if (v_taken_2056_ == 0)
{
uint64_t v___x_2057_; uint64_t v___x_2058_; lean_object* v___x_2060_; 
v___x_2057_ = 4ULL;
v___x_2058_ = lean_uint64_add(v_pc_2046_, v___x_2057_);
if (v_isShared_2053_ == 0)
{
v___x_2060_ = v___x_2052_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_regs_2047_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v_mem_2048_);
lean_ctor_set_uint8(v_reuseFailAlloc_2061_, sizeof(void*)*2 + 16, v_halted_2049_);
lean_ctor_set_uint64(v_reuseFailAlloc_2061_, sizeof(void*)*2 + 8, v_retVal_2050_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_ctor_set_uint64(v___x_2060_, sizeof(void*)*2, v___x_2058_);
return v___x_2060_;
}
}
else
{
lean_object* v___x_2063_; 
if (v_isShared_2053_ == 0)
{
v___x_2063_ = v___x_2052_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_regs_2047_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v_mem_2048_);
lean_ctor_set_uint8(v_reuseFailAlloc_2064_, sizeof(void*)*2 + 16, v_halted_2049_);
lean_ctor_set_uint64(v_reuseFailAlloc_2064_, sizeof(void*)*2 + 8, v_retVal_2050_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
lean_ctor_set_uint64(v___x_2063_, sizeof(void*)*2, v_targetPc_2045_);
return v___x_2063_;
}
}
}
}
case 7:
{
lean_object* v_rd_2066_; uint64_t v_targetPc_2067_; uint64_t v_pc_2068_; lean_object* v_regs_2069_; lean_object* v_mem_2070_; uint8_t v_halted_2071_; uint64_t v_retVal_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2083_; 
v_rd_2066_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rd_2066_);
v_targetPc_2067_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1913_, 1);
v_pc_2068_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_2069_ = lean_ctor_get(v_st_1914_, 0);
v_mem_2070_ = lean_ctor_get(v_st_1914_, 1);
v_halted_2071_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_2072_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_2083_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2074_ = v_st_1914_;
v_isShared_2075_ = v_isSharedCheck_2083_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_mem_2070_);
lean_inc(v_regs_2069_);
lean_dec(v_st_1914_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2083_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
uint64_t v___x_2076_; uint64_t v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2081_; 
v___x_2076_ = 4ULL;
v___x_2077_ = lean_uint64_add(v_pc_2068_, v___x_2076_);
v___x_2078_ = lean_box_uint64(v___x_2077_);
v___x_2079_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_2079_, 0, v_regs_2069_);
lean_closure_set(v___x_2079_, 1, v_rd_2066_);
lean_closure_set(v___x_2079_, 2, v___x_2078_);
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 0, v___x_2079_);
v___x_2081_ = v___x_2074_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2079_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v_mem_2070_);
lean_ctor_set_uint8(v_reuseFailAlloc_2082_, sizeof(void*)*2 + 16, v_halted_2071_);
lean_ctor_set_uint64(v_reuseFailAlloc_2082_, sizeof(void*)*2 + 8, v_retVal_2072_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
lean_ctor_set_uint64(v___x_2081_, sizeof(void*)*2, v_targetPc_2067_);
return v___x_2081_;
}
}
}
case 8:
{
lean_object* v_rd_2084_; lean_object* v_rs1_2085_; uint64_t v_offset_2086_; uint64_t v_pc_2087_; lean_object* v_regs_2088_; lean_object* v_mem_2089_; uint8_t v_halted_2090_; uint64_t v_retVal_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2106_; 
v_rd_2084_ = lean_ctor_get(v_ins_1913_, 0);
lean_inc(v_rd_2084_);
v_rs1_2085_ = lean_ctor_get(v_ins_1913_, 1);
lean_inc(v_rs1_2085_);
v_offset_2086_ = lean_ctor_get_uint64(v_ins_1913_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1913_, 2);
v_pc_2087_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2);
v_regs_2088_ = lean_ctor_get(v_st_1914_, 0);
v_mem_2089_ = lean_ctor_get(v_st_1914_, 1);
v_halted_2090_ = lean_ctor_get_uint8(v_st_1914_, sizeof(void*)*2 + 16);
v_retVal_2091_ = lean_ctor_get_uint64(v_st_1914_, sizeof(void*)*2 + 8);
v_isSharedCheck_2106_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2093_ = v_st_1914_;
v_isShared_2094_ = v_isSharedCheck_2106_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_mem_2089_);
lean_inc(v_regs_2088_);
lean_dec(v_st_1914_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2106_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
uint64_t v___x_2095_; uint64_t v___x_2096_; uint64_t v___x_2097_; uint64_t v_nextPc_2098_; uint64_t v___x_2099_; uint64_t v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2104_; 
lean_inc_ref(v_regs_2088_);
v___x_2095_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2088_, v_rs1_2085_);
v___x_2096_ = lean_uint64_add(v___x_2095_, v_offset_2086_);
v___x_2097_ = 18446744073709551614ULL;
v_nextPc_2098_ = lean_uint64_land(v___x_2096_, v___x_2097_);
v___x_2099_ = 4ULL;
v___x_2100_ = lean_uint64_add(v_pc_2087_, v___x_2099_);
v___x_2101_ = lean_box_uint64(v___x_2100_);
v___x_2102_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_writeReg___boxed), 4, 3);
lean_closure_set(v___x_2102_, 0, v_regs_2088_);
lean_closure_set(v___x_2102_, 1, v_rd_2084_);
lean_closure_set(v___x_2102_, 2, v___x_2101_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2102_);
v___x_2104_ = v___x_2093_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v___x_2102_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v_mem_2089_);
lean_ctor_set_uint8(v_reuseFailAlloc_2105_, sizeof(void*)*2 + 16, v_halted_2090_);
lean_ctor_set_uint64(v_reuseFailAlloc_2105_, sizeof(void*)*2 + 8, v_retVal_2091_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
lean_ctor_set_uint64(v___x_2104_, sizeof(void*)*2, v_nextPc_2098_);
return v___x_2104_;
}
}
}
default: 
{
lean_object* v_regs_2107_; lean_object* v_mem_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2119_; 
v_regs_2107_ = lean_ctor_get(v_st_1914_, 0);
v_mem_2108_ = lean_ctor_get(v_st_1914_, 1);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_st_1914_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2110_ = v_st_1914_;
v_isShared_2111_ = v_isSharedCheck_2119_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_mem_2108_);
lean_inc(v_regs_2107_);
lean_dec(v_st_1914_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2119_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
uint64_t v___x_2112_; uint8_t v___x_2113_; lean_object* v___x_2114_; uint64_t v___x_2115_; lean_object* v___x_2117_; 
v___x_2112_ = 0ULL;
v___x_2113_ = 1;
v___x_2114_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_2107_);
v___x_2115_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2107_, v___x_2114_);
if (v_isShared_2111_ == 0)
{
v___x_2117_ = v___x_2110_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_regs_2107_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_mem_2108_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
lean_ctor_set_uint64(v___x_2117_, sizeof(void*)*2, v___x_2112_);
lean_ctor_set_uint8(v___x_2117_, sizeof(void*)*2 + 16, v___x_2113_);
lean_ctor_set_uint64(v___x_2117_, sizeof(void*)*2 + 8, v___x_2115_);
return v___x_2117_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_stepRV(lean_object* v_prog_2120_, lean_object* v_st_2121_){
_start:
{
uint64_t v_pc_2122_; lean_object* v_regs_2123_; lean_object* v_mem_2124_; uint8_t v_halted_2125_; 
v_pc_2122_ = lean_ctor_get_uint64(v_st_2121_, sizeof(void*)*2);
v_regs_2123_ = lean_ctor_get(v_st_2121_, 0);
v_mem_2124_ = lean_ctor_get(v_st_2121_, 1);
v_halted_2125_ = lean_ctor_get_uint8(v_st_2121_, sizeof(void*)*2 + 16);
if (v_halted_2125_ == 0)
{
uint64_t v___x_2132_; uint8_t v___x_2133_; 
v___x_2132_ = 0ULL;
v___x_2133_ = lean_uint64_dec_eq(v_pc_2122_, v___x_2132_);
if (v___x_2133_ == 0)
{
lean_object* v_code_2134_; lean_object* v___x_2135_; 
v_code_2134_ = lean_ctor_get(v_prog_2120_, 0);
v___x_2135_ = lp_rv2pancake_Rv2Pancake_Spec_fetchInstr(v_code_2134_, v_pc_2122_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2145_; 
lean_inc_ref(v_mem_2124_);
lean_inc_ref(v_regs_2123_);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_st_2121_);
if (v_isSharedCheck_2145_ == 0)
{
lean_object* v_unused_2146_; lean_object* v_unused_2147_; 
v_unused_2146_ = lean_ctor_get(v_st_2121_, 1);
lean_dec(v_unused_2146_);
v_unused_2147_ = lean_ctor_get(v_st_2121_, 0);
lean_dec(v_unused_2147_);
v___x_2137_ = v_st_2121_;
v_isShared_2138_ = v_isSharedCheck_2145_;
goto v_resetjp_2136_;
}
else
{
lean_dec(v_st_2121_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2145_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
uint8_t v___x_2139_; lean_object* v___x_2140_; uint64_t v___x_2141_; lean_object* v___x_2143_; 
v___x_2139_ = 1;
v___x_2140_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_2123_);
v___x_2141_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2123_, v___x_2140_);
if (v_isShared_2138_ == 0)
{
v___x_2143_ = v___x_2137_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_regs_2123_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v_mem_2124_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_ctor_set_uint64(v___x_2143_, sizeof(void*)*2, v___x_2132_);
lean_ctor_set_uint8(v___x_2143_, sizeof(void*)*2 + 16, v___x_2139_);
lean_ctor_set_uint64(v___x_2143_, sizeof(void*)*2 + 8, v___x_2141_);
return v___x_2143_;
}
}
}
else
{
lean_object* v_val_2148_; lean_object* v___x_2149_; 
v_val_2148_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_val_2148_);
lean_dec_ref_known(v___x_2135_, 1);
v___x_2149_ = lp_rv2pancake_Rv2Pancake_Spec_execRVInstr(v_val_2148_, v_st_2121_);
return v___x_2149_;
}
}
else
{
lean_inc_ref(v_mem_2124_);
lean_inc_ref(v_regs_2123_);
lean_dec_ref(v_st_2121_);
goto v___jp_2126_;
}
}
else
{
lean_inc_ref(v_mem_2124_);
lean_inc_ref(v_regs_2123_);
lean_dec_ref(v_st_2121_);
goto v___jp_2126_;
}
v___jp_2126_:
{
uint8_t v___x_2127_; uint64_t v___x_2128_; lean_object* v___x_2129_; uint64_t v___x_2130_; lean_object* v___x_2131_; 
v___x_2127_ = 1;
v___x_2128_ = 0ULL;
v___x_2129_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_2123_);
v___x_2130_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2123_, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v___x_2131_, 0, v_regs_2123_);
lean_ctor_set(v___x_2131_, 1, v_mem_2124_);
lean_ctor_set_uint64(v___x_2131_, sizeof(void*)*2, v___x_2128_);
lean_ctor_set_uint8(v___x_2131_, sizeof(void*)*2 + 16, v___x_2127_);
lean_ctor_set_uint64(v___x_2131_, sizeof(void*)*2 + 8, v___x_2130_);
return v___x_2131_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_stepRV___boxed(lean_object* v_prog_2150_, lean_object* v_st_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = lp_rv2pancake_Rv2Pancake_Spec_stepRV(v_prog_2150_, v_st_2151_);
lean_dec_ref(v_prog_2150_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV(lean_object* v_prog_2153_, lean_object* v_fuel_2154_, lean_object* v_st_2155_){
_start:
{
lean_object* v_zero_2156_; uint8_t v_isZero_2157_; 
v_zero_2156_ = lean_unsigned_to_nat(0u);
v_isZero_2157_ = lean_nat_dec_eq(v_fuel_2154_, v_zero_2156_);
if (v_isZero_2157_ == 1)
{
lean_dec(v_fuel_2154_);
return v_st_2155_;
}
else
{
uint64_t v_pc_2158_; lean_object* v_regs_2159_; lean_object* v_mem_2160_; uint8_t v_halted_2161_; 
v_pc_2158_ = lean_ctor_get_uint64(v_st_2155_, sizeof(void*)*2);
v_regs_2159_ = lean_ctor_get(v_st_2155_, 0);
v_mem_2160_ = lean_ctor_get(v_st_2155_, 1);
v_halted_2161_ = lean_ctor_get_uint8(v_st_2155_, sizeof(void*)*2 + 16);
if (v_halted_2161_ == 0)
{
uint64_t v___x_2168_; uint8_t v___x_2169_; 
v___x_2168_ = 0ULL;
v___x_2169_ = lean_uint64_dec_eq(v_pc_2158_, v___x_2168_);
if (v___x_2169_ == 0)
{
lean_object* v_one_2170_; lean_object* v_n_2171_; lean_object* v___x_2172_; 
v_one_2170_ = lean_unsigned_to_nat(1u);
v_n_2171_ = lean_nat_sub(v_fuel_2154_, v_one_2170_);
lean_dec(v_fuel_2154_);
v___x_2172_ = lp_rv2pancake_Rv2Pancake_Spec_stepRV(v_prog_2153_, v_st_2155_);
v_fuel_2154_ = v_n_2171_;
v_st_2155_ = v___x_2172_;
goto _start;
}
else
{
lean_inc_ref(v_mem_2160_);
lean_inc_ref(v_regs_2159_);
lean_dec_ref(v_st_2155_);
lean_dec(v_fuel_2154_);
goto v___jp_2162_;
}
}
else
{
lean_inc_ref(v_mem_2160_);
lean_inc_ref(v_regs_2159_);
lean_dec_ref(v_st_2155_);
lean_dec(v_fuel_2154_);
goto v___jp_2162_;
}
v___jp_2162_:
{
uint8_t v___x_2163_; uint64_t v___x_2164_; lean_object* v___x_2165_; uint64_t v___x_2166_; lean_object* v___x_2167_; 
v___x_2163_ = 1;
v___x_2164_ = 0ULL;
v___x_2165_ = lean_unsigned_to_nat(10u);
lean_inc_ref(v_regs_2159_);
v___x_2166_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_2159_, v___x_2165_);
v___x_2167_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v___x_2167_, 0, v_regs_2159_);
lean_ctor_set(v___x_2167_, 1, v_mem_2160_);
lean_ctor_set_uint64(v___x_2167_, sizeof(void*)*2, v___x_2164_);
lean_ctor_set_uint8(v___x_2167_, sizeof(void*)*2 + 16, v___x_2163_);
lean_ctor_set_uint64(v___x_2167_, sizeof(void*)*2 + 8, v___x_2166_);
return v___x_2167_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV___boxed(lean_object* v_prog_2174_, lean_object* v_fuel_2175_, lean_object* v_st_2176_){
_start:
{
lean_object* v_res_2177_; 
v_res_2177_ = lp_rv2pancake_Rv2Pancake_Spec_runRV(v_prog_2174_, v_fuel_2175_, v_st_2176_);
lean_dec_ref(v_prog_2174_);
return v_res_2177_;
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
lp_rv2pancake_Rv2Pancake_Spec_jalrMask = _init_lp_rv2pancake_Rv2Pancake_Spec_jalrMask();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
