// Lean compiler output
// Module: Rv2Pancake.Spec.PancakeSem
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem
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
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(uint8_t, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(uint8_t, uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_regVar(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_regVar___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_pcVar;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_haltVar;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_retVar;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_load_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_load_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_binOp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_binOp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp___boxed(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.PanExp.const"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__2_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Rv2Pancake.Spec.PanExp.var"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__5_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__7_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Rv2Pancake.Spec.PanExp.load"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__10_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.PanExp.binOp"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__11_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__13_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp___closed__0_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_skip_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_skip_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_assign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_assign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_store_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_store_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_seq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_seq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ifElse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ifElse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_whileLoop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_whileLoop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Rv2Pancake.Spec.PanProg.skip"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Rv2Pancake.Spec.PanProg.assign"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__4_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Rv2Pancake.Spec.PanProg.store"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__5_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__7_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Rv2Pancake.Spec.PanProg.seq"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__10_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Rv2Pancake.Spec.PanProg.ifElse"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__11_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__13_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Rv2Pancake.Spec.PanProg.whileLoop"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__16_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg___closed__0_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg___closed__0_value;
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_evalExp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalExp___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_setVar___lam__0(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setVar(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_setMem___lam__0(uint64_t, lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setMem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setMem(lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setMem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execStmt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalPan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_regVar(lean_object* v_r_1_){
_start:
{
lean_inc(v_r_1_);
return v_r_1_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_regVar___boxed(lean_object* v_r_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lp_rv2pancake_Rv2Pancake_Spec_regVar(v_r_2_);
lean_dec(v_r_2_);
return v_res_3_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_pcVar(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(0u);
return v___x_4_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_haltVar(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(32u);
return v___x_5_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_retVar(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(33u);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorIdx(lean_object* v_x_7_){
_start:
{
switch(lean_obj_tag(v_x_7_))
{
case 0:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(0u);
return v___x_8_;
}
case 1:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(1u);
return v___x_9_;
}
case 2:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(2u);
return v___x_10_;
}
default: 
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(3u);
return v___x_11_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorIdx___boxed(lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorIdx(v_x_12_);
lean_dec_ref(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(lean_object* v_t_14_, lean_object* v_k_15_){
_start:
{
switch(lean_obj_tag(v_t_14_))
{
case 0:
{
uint64_t v_w_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_w_16_ = lean_ctor_get_uint64(v_t_14_, 0);
lean_dec_ref_known(v_t_14_, 0);
v___x_17_ = lean_box_uint64(v_w_16_);
v___x_18_ = lean_apply_1(v_k_15_, v___x_17_);
return v___x_18_;
}
case 1:
{
lean_object* v_v_19_; lean_object* v___x_20_; 
v_v_19_ = lean_ctor_get(v_t_14_, 0);
lean_inc(v_v_19_);
lean_dec_ref_known(v_t_14_, 1);
v___x_20_ = lean_apply_1(v_k_15_, v_v_19_);
return v___x_20_;
}
case 2:
{
lean_object* v_addr_21_; lean_object* v___x_22_; 
v_addr_21_ = lean_ctor_get(v_t_14_, 0);
lean_inc_ref(v_addr_21_);
lean_dec_ref_known(v_t_14_, 1);
v___x_22_ = lean_apply_1(v_k_15_, v_addr_21_);
return v___x_22_;
}
default: 
{
uint8_t v_op_23_; lean_object* v_e1_24_; lean_object* v_e2_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_op_23_ = lean_ctor_get_uint8(v_t_14_, sizeof(void*)*2);
v_e1_24_ = lean_ctor_get(v_t_14_, 0);
lean_inc_ref(v_e1_24_);
v_e2_25_ = lean_ctor_get(v_t_14_, 1);
lean_inc_ref(v_e2_25_);
lean_dec_ref_known(v_t_14_, 2);
v___x_26_ = lean_box(v_op_23_);
v___x_27_ = lean_apply_3(v_k_15_, v___x_26_, v_e1_24_, v_e2_25_);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim(lean_object* v_motive_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_30_, v_k_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___boxed(lean_object* v_motive_34_, lean_object* v_ctorIdx_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_k_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim(v_motive_34_, v_ctorIdx_35_, v_t_36_, v_h_37_, v_k_38_);
lean_dec(v_ctorIdx_35_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_const_elim___redArg(lean_object* v_t_40_, lean_object* v_const_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_40_, v_const_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_const_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_const_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_44_, v_const_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_var_elim___redArg(lean_object* v_t_48_, lean_object* v_var_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_48_, v_var_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_var_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_var_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_52_, v_var_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_load_elim___redArg(lean_object* v_t_56_, lean_object* v_load_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_56_, v_load_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_load_elim(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_load_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_60_, v_load_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_binOp_elim___redArg(lean_object* v_t_64_, lean_object* v_binOp_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_64_, v_binOp_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanExp_binOp_elim(lean_object* v_motive_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_binOp_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lp_rv2pancake_Rv2Pancake_Spec_PanExp_ctorElim___redArg(v_t_68_, v_binOp_70_);
return v___x_71_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(lean_object* v_x_72_, lean_object* v_x_73_){
_start:
{
switch(lean_obj_tag(v_x_72_))
{
case 0:
{
if (lean_obj_tag(v_x_73_) == 0)
{
uint64_t v_w_74_; uint64_t v_w_75_; uint8_t v___x_76_; 
v_w_74_ = lean_ctor_get_uint64(v_x_72_, 0);
v_w_75_ = lean_ctor_get_uint64(v_x_73_, 0);
v___x_76_ = lean_uint64_dec_eq(v_w_74_, v_w_75_);
return v___x_76_;
}
else
{
uint8_t v___x_77_; 
v___x_77_ = 0;
return v___x_77_;
}
}
case 1:
{
if (lean_obj_tag(v_x_73_) == 1)
{
lean_object* v_v_78_; lean_object* v_v_79_; uint8_t v___x_80_; 
v_v_78_ = lean_ctor_get(v_x_72_, 0);
v_v_79_ = lean_ctor_get(v_x_73_, 0);
v___x_80_ = lean_nat_dec_eq(v_v_78_, v_v_79_);
return v___x_80_;
}
else
{
uint8_t v___x_81_; 
v___x_81_ = 0;
return v___x_81_;
}
}
case 2:
{
if (lean_obj_tag(v_x_73_) == 2)
{
lean_object* v_addr_82_; lean_object* v_addr_83_; 
v_addr_82_ = lean_ctor_get(v_x_72_, 0);
v_addr_83_ = lean_ctor_get(v_x_73_, 0);
v_x_72_ = v_addr_82_;
v_x_73_ = v_addr_83_;
goto _start;
}
else
{
uint8_t v___x_85_; 
v___x_85_ = 0;
return v___x_85_;
}
}
default: 
{
if (lean_obj_tag(v_x_73_) == 3)
{
uint8_t v_op_86_; lean_object* v_e1_87_; lean_object* v_e2_88_; uint8_t v_op_89_; lean_object* v_e1_90_; lean_object* v_e2_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v_op_86_ = lean_ctor_get_uint8(v_x_72_, sizeof(void*)*2);
v_e1_87_ = lean_ctor_get(v_x_72_, 0);
v_e2_88_ = lean_ctor_get(v_x_72_, 1);
v_op_89_ = lean_ctor_get_uint8(v_x_73_, sizeof(void*)*2);
v_e1_90_ = lean_ctor_get(v_x_73_, 0);
v_e2_91_ = lean_ctor_get(v_x_73_, 1);
v___x_92_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_86_);
v___x_93_ = lp_rv2pancake_Rv2Pancake_Spec_BinOp_ctorIdx(v_op_89_);
v___x_94_ = lean_nat_dec_eq(v___x_92_, v___x_93_);
lean_dec(v___x_93_);
lean_dec(v___x_92_);
if (v___x_94_ == 0)
{
return v___x_94_;
}
else
{
uint8_t v_inst_95_; 
v_inst_95_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_e1_87_, v_e1_90_);
if (v_inst_95_ == 0)
{
return v_inst_95_;
}
else
{
v_x_72_ = v_e2_88_;
v_x_73_ = v_e2_91_;
goto _start;
}
}
}
else
{
uint8_t v___x_97_; 
v___x_97_ = 0;
return v___x_97_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq___boxed(lean_object* v_x_98_, lean_object* v_x_99_){
_start:
{
uint8_t v_res_100_; lean_object* v_r_101_; 
v_res_100_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_x_98_, v_x_99_);
lean_dec_ref(v_x_99_);
lean_dec_ref(v_x_98_);
v_r_101_ = lean_box(v_res_100_);
return v_r_101_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp(lean_object* v_x_102_, lean_object* v_x_103_){
_start:
{
uint8_t v___x_104_; 
v___x_104_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_x_102_, v_x_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp___boxed(lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp(v_x_105_, v_x_106_);
lean_dec_ref(v_x_106_);
lean_dec_ref(v_x_105_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(2u);
v___x_116_ = lean_nat_to_int(v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(1u);
v___x_118_ = lean_nat_to_int(v___x_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(lean_object* v_x_137_, lean_object* v_prec_138_){
_start:
{
switch(lean_obj_tag(v_x_137_))
{
case 0:
{
uint64_t v_w_139_; lean_object* v___y_141_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_w_139_ = lean_ctor_get_uint64(v_x_137_, 0);
lean_dec_ref_known(v_x_137_, 0);
v___x_151_ = lean_unsigned_to_nat(1024u);
v___x_152_ = lean_nat_dec_le(v___x_151_, v_prec_138_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_141_ = v___x_153_;
goto v___jp_140_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_141_ = v___x_154_;
goto v___jp_140_;
}
v___jp_140_:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_142_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__2));
v___x_143_ = lean_uint64_to_nat(v_w_139_);
v___x_144_ = l_Nat_reprFast(v___x_143_);
v___x_145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
v___x_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_142_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
lean_inc(v___y_141_);
v___x_147_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_147_, 0, v___y_141_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = 0;
v___x_149_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set_uint8(v___x_149_, sizeof(void*)*1, v___x_148_);
v___x_150_ = l_Repr_addAppParen(v___x_149_, v_prec_138_);
return v___x_150_;
}
}
case 1:
{
lean_object* v_v_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_175_; 
v_v_155_ = lean_ctor_get(v_x_137_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_175_ == 0)
{
v___x_157_ = v_x_137_;
v_isShared_158_ = v_isSharedCheck_175_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_v_155_);
lean_dec(v_x_137_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_175_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___y_160_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(1024u);
v___x_172_ = lean_nat_dec_le(v___x_171_, v_prec_138_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_160_ = v___x_173_;
goto v___jp_159_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_160_ = v___x_174_;
goto v___jp_159_;
}
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_161_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__7));
v___x_162_ = l_Nat_reprFast(v_v_155_);
if (v_isShared_158_ == 0)
{
lean_ctor_set_tag(v___x_157_, 3);
lean_ctor_set(v___x_157_, 0, v___x_162_);
v___x_164_ = v___x_157_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_162_);
v___x_164_ = v_reuseFailAlloc_170_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_161_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
lean_inc(v___y_160_);
v___x_166_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_166_, 0, v___y_160_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = 0;
v___x_168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_168_, 0, v___x_166_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1, v___x_167_);
v___x_169_ = l_Repr_addAppParen(v___x_168_, v_prec_138_);
return v___x_169_;
}
}
}
}
case 2:
{
lean_object* v_addr_176_; lean_object* v___x_177_; lean_object* v___y_179_; uint8_t v___x_187_; 
v_addr_176_ = lean_ctor_get(v_x_137_, 0);
lean_inc_ref(v_addr_176_);
lean_dec_ref_known(v_x_137_, 1);
v___x_177_ = lean_unsigned_to_nat(1024u);
v___x_187_ = lean_nat_dec_le(v___x_177_, v_prec_138_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_179_ = v___x_188_;
goto v___jp_178_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_179_ = v___x_189_;
goto v___jp_178_;
}
v___jp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_180_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__10));
v___x_181_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_addr_176_, v___x_177_);
v___x_182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_180_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
lean_inc(v___y_179_);
v___x_183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_183_, 0, v___y_179_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = 0;
v___x_185_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*1, v___x_184_);
v___x_186_ = l_Repr_addAppParen(v___x_185_, v_prec_138_);
return v___x_186_;
}
}
default: 
{
uint8_t v_op_190_; lean_object* v_e1_191_; lean_object* v_e2_192_; lean_object* v___x_193_; lean_object* v___y_195_; uint8_t v___x_210_; 
v_op_190_ = lean_ctor_get_uint8(v_x_137_, sizeof(void*)*2);
v_e1_191_ = lean_ctor_get(v_x_137_, 0);
lean_inc_ref(v_e1_191_);
v_e2_192_ = lean_ctor_get(v_x_137_, 1);
lean_inc_ref(v_e2_192_);
lean_dec_ref_known(v_x_137_, 2);
v___x_193_ = lean_unsigned_to_nat(1024u);
v___x_210_ = lean_nat_dec_le(v___x_193_, v_prec_138_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
v___x_211_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_195_ = v___x_211_;
goto v___jp_194_;
}
else
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_195_ = v___x_212_;
goto v___jp_194_;
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_196_ = lean_box(1);
v___x_197_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__13));
v___x_198_ = lp_rv2pancake_Rv2Pancake_Spec_instReprBinOp_repr(v_op_190_, v___x_193_);
v___x_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_197_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
v___x_200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_196_);
v___x_201_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_e1_191_, v___x_193_);
v___x_202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_196_);
v___x_204_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_e2_192_, v___x_193_);
v___x_205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
lean_inc(v___y_195_);
v___x_206_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_206_, 0, v___y_195_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = 0;
v___x_208_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*1, v___x_207_);
v___x_209_ = l_Repr_addAppParen(v___x_208_, v_prec_138_);
return v___x_209_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___boxed(lean_object* v_x_213_, lean_object* v_prec_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_x_213_, v_prec_214_);
lean_dec(v_prec_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorIdx(lean_object* v_x_218_){
_start:
{
switch(lean_obj_tag(v_x_218_))
{
case 0:
{
lean_object* v___x_219_; 
v___x_219_ = lean_unsigned_to_nat(0u);
return v___x_219_;
}
case 1:
{
lean_object* v___x_220_; 
v___x_220_ = lean_unsigned_to_nat(1u);
return v___x_220_;
}
case 2:
{
lean_object* v___x_221_; 
v___x_221_ = lean_unsigned_to_nat(2u);
return v___x_221_;
}
case 3:
{
lean_object* v___x_222_; 
v___x_222_ = lean_unsigned_to_nat(3u);
return v___x_222_;
}
case 4:
{
lean_object* v___x_223_; 
v___x_223_ = lean_unsigned_to_nat(4u);
return v___x_223_;
}
default: 
{
lean_object* v___x_224_; 
v___x_224_ = lean_unsigned_to_nat(5u);
return v___x_224_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorIdx___boxed(lean_object* v_x_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorIdx(v_x_225_);
lean_dec(v_x_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(lean_object* v_t_227_, lean_object* v_k_228_){
_start:
{
switch(lean_obj_tag(v_t_227_))
{
case 0:
{
return v_k_228_;
}
case 1:
{
lean_object* v_v_229_; lean_object* v_e_230_; lean_object* v___x_231_; 
v_v_229_ = lean_ctor_get(v_t_227_, 0);
lean_inc(v_v_229_);
v_e_230_ = lean_ctor_get(v_t_227_, 1);
lean_inc_ref(v_e_230_);
lean_dec_ref_known(v_t_227_, 2);
v___x_231_ = lean_apply_2(v_k_228_, v_v_229_, v_e_230_);
return v___x_231_;
}
case 2:
{
lean_object* v_addr_232_; lean_object* v_val_233_; lean_object* v___x_234_; 
v_addr_232_ = lean_ctor_get(v_t_227_, 0);
lean_inc_ref(v_addr_232_);
v_val_233_ = lean_ctor_get(v_t_227_, 1);
lean_inc_ref(v_val_233_);
lean_dec_ref_known(v_t_227_, 2);
v___x_234_ = lean_apply_2(v_k_228_, v_addr_232_, v_val_233_);
return v___x_234_;
}
case 3:
{
lean_object* v_p1_235_; lean_object* v_p2_236_; lean_object* v___x_237_; 
v_p1_235_ = lean_ctor_get(v_t_227_, 0);
lean_inc(v_p1_235_);
v_p2_236_ = lean_ctor_get(v_t_227_, 1);
lean_inc(v_p2_236_);
lean_dec_ref_known(v_t_227_, 2);
v___x_237_ = lean_apply_2(v_k_228_, v_p1_235_, v_p2_236_);
return v___x_237_;
}
case 4:
{
lean_object* v_cond_238_; lean_object* v_thenBr_239_; lean_object* v_elseBr_240_; lean_object* v___x_241_; 
v_cond_238_ = lean_ctor_get(v_t_227_, 0);
lean_inc_ref(v_cond_238_);
v_thenBr_239_ = lean_ctor_get(v_t_227_, 1);
lean_inc(v_thenBr_239_);
v_elseBr_240_ = lean_ctor_get(v_t_227_, 2);
lean_inc(v_elseBr_240_);
lean_dec_ref_known(v_t_227_, 3);
v___x_241_ = lean_apply_3(v_k_228_, v_cond_238_, v_thenBr_239_, v_elseBr_240_);
return v___x_241_;
}
default: 
{
lean_object* v_cond_242_; lean_object* v_body_243_; lean_object* v___x_244_; 
v_cond_242_ = lean_ctor_get(v_t_227_, 0);
lean_inc_ref(v_cond_242_);
v_body_243_ = lean_ctor_get(v_t_227_, 1);
lean_inc(v_body_243_);
lean_dec_ref_known(v_t_227_, 2);
v___x_244_ = lean_apply_2(v_k_228_, v_cond_242_, v_body_243_);
return v___x_244_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim(lean_object* v_motive_245_, lean_object* v_ctorIdx_246_, lean_object* v_t_247_, lean_object* v_h_248_, lean_object* v_k_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_247_, v_k_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___boxed(lean_object* v_motive_251_, lean_object* v_ctorIdx_252_, lean_object* v_t_253_, lean_object* v_h_254_, lean_object* v_k_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim(v_motive_251_, v_ctorIdx_252_, v_t_253_, v_h_254_, v_k_255_);
lean_dec(v_ctorIdx_252_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_skip_elim___redArg(lean_object* v_t_257_, lean_object* v_skip_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_257_, v_skip_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_skip_elim(lean_object* v_motive_260_, lean_object* v_t_261_, lean_object* v_h_262_, lean_object* v_skip_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_261_, v_skip_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_assign_elim___redArg(lean_object* v_t_265_, lean_object* v_assign_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_265_, v_assign_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_assign_elim(lean_object* v_motive_268_, lean_object* v_t_269_, lean_object* v_h_270_, lean_object* v_assign_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_269_, v_assign_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_store_elim___redArg(lean_object* v_t_273_, lean_object* v_store_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_273_, v_store_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_store_elim(lean_object* v_motive_276_, lean_object* v_t_277_, lean_object* v_h_278_, lean_object* v_store_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_277_, v_store_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_seq_elim___redArg(lean_object* v_t_281_, lean_object* v_seq_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_281_, v_seq_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_seq_elim(lean_object* v_motive_284_, lean_object* v_t_285_, lean_object* v_h_286_, lean_object* v_seq_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_285_, v_seq_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ifElse_elim___redArg(lean_object* v_t_289_, lean_object* v_ifElse_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_289_, v_ifElse_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_ifElse_elim(lean_object* v_motive_292_, lean_object* v_t_293_, lean_object* v_h_294_, lean_object* v_ifElse_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_293_, v_ifElse_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_whileLoop_elim___redArg(lean_object* v_t_297_, lean_object* v_whileLoop_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_297_, v_whileLoop_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_PanProg_whileLoop_elim(lean_object* v_motive_300_, lean_object* v_t_301_, lean_object* v_h_302_, lean_object* v_whileLoop_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lp_rv2pancake_Rv2Pancake_Spec_PanProg_ctorElim___redArg(v_t_301_, v_whileLoop_303_);
return v___x_304_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object* v_x_305_, lean_object* v_x_306_){
_start:
{
switch(lean_obj_tag(v_x_305_))
{
case 0:
{
if (lean_obj_tag(v_x_306_) == 0)
{
uint8_t v___x_307_; 
v___x_307_ = 1;
return v___x_307_;
}
else
{
uint8_t v___x_308_; 
v___x_308_ = 0;
return v___x_308_;
}
}
case 1:
{
if (lean_obj_tag(v_x_306_) == 1)
{
lean_object* v_v_309_; lean_object* v_e_310_; lean_object* v_v_311_; lean_object* v_e_312_; uint8_t v___x_313_; 
v_v_309_ = lean_ctor_get(v_x_305_, 0);
v_e_310_ = lean_ctor_get(v_x_305_, 1);
v_v_311_ = lean_ctor_get(v_x_306_, 0);
v_e_312_ = lean_ctor_get(v_x_306_, 1);
v___x_313_ = lean_nat_dec_eq(v_v_309_, v_v_311_);
if (v___x_313_ == 0)
{
return v___x_313_;
}
else
{
uint8_t v___x_314_; 
v___x_314_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_e_310_, v_e_312_);
return v___x_314_;
}
}
else
{
uint8_t v___x_315_; 
v___x_315_ = 0;
return v___x_315_;
}
}
case 2:
{
if (lean_obj_tag(v_x_306_) == 2)
{
lean_object* v_addr_316_; lean_object* v_val_317_; lean_object* v_addr_318_; lean_object* v_val_319_; uint8_t v___x_320_; 
v_addr_316_ = lean_ctor_get(v_x_305_, 0);
v_val_317_ = lean_ctor_get(v_x_305_, 1);
v_addr_318_ = lean_ctor_get(v_x_306_, 0);
v_val_319_ = lean_ctor_get(v_x_306_, 1);
v___x_320_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_addr_316_, v_addr_318_);
if (v___x_320_ == 0)
{
return v___x_320_;
}
else
{
uint8_t v___x_321_; 
v___x_321_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_val_317_, v_val_319_);
return v___x_321_;
}
}
else
{
uint8_t v___x_322_; 
v___x_322_ = 0;
return v___x_322_;
}
}
case 3:
{
if (lean_obj_tag(v_x_306_) == 3)
{
lean_object* v_p1_323_; lean_object* v_p2_324_; lean_object* v_p1_325_; lean_object* v_p2_326_; uint8_t v_inst_327_; 
v_p1_323_ = lean_ctor_get(v_x_305_, 0);
v_p2_324_ = lean_ctor_get(v_x_305_, 1);
v_p1_325_ = lean_ctor_get(v_x_306_, 0);
v_p2_326_ = lean_ctor_get(v_x_306_, 1);
v_inst_327_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v_p1_323_, v_p1_325_);
if (v_inst_327_ == 0)
{
return v_inst_327_;
}
else
{
v_x_305_ = v_p2_324_;
v_x_306_ = v_p2_326_;
goto _start;
}
}
else
{
uint8_t v___x_329_; 
v___x_329_ = 0;
return v___x_329_;
}
}
case 4:
{
if (lean_obj_tag(v_x_306_) == 4)
{
lean_object* v_cond_330_; lean_object* v_thenBr_331_; lean_object* v_elseBr_332_; lean_object* v_cond_333_; lean_object* v_thenBr_334_; lean_object* v_elseBr_335_; uint8_t v___x_336_; 
v_cond_330_ = lean_ctor_get(v_x_305_, 0);
v_thenBr_331_ = lean_ctor_get(v_x_305_, 1);
v_elseBr_332_ = lean_ctor_get(v_x_305_, 2);
v_cond_333_ = lean_ctor_get(v_x_306_, 0);
v_thenBr_334_ = lean_ctor_get(v_x_306_, 1);
v_elseBr_335_ = lean_ctor_get(v_x_306_, 2);
v___x_336_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_cond_330_, v_cond_333_);
if (v___x_336_ == 0)
{
return v___x_336_;
}
else
{
uint8_t v_inst_337_; 
v_inst_337_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v_thenBr_331_, v_thenBr_334_);
if (v_inst_337_ == 0)
{
return v_inst_337_;
}
else
{
v_x_305_ = v_elseBr_332_;
v_x_306_ = v_elseBr_335_;
goto _start;
}
}
}
else
{
uint8_t v___x_339_; 
v___x_339_ = 0;
return v___x_339_;
}
}
default: 
{
if (lean_obj_tag(v_x_306_) == 5)
{
lean_object* v_cond_340_; lean_object* v_body_341_; lean_object* v_cond_342_; lean_object* v_body_343_; uint8_t v___x_344_; 
v_cond_340_ = lean_ctor_get(v_x_305_, 0);
v_body_341_ = lean_ctor_get(v_x_305_, 1);
v_cond_342_ = lean_ctor_get(v_x_306_, 0);
v_body_343_ = lean_ctor_get(v_x_306_, 1);
v___x_344_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_cond_340_, v_cond_342_);
if (v___x_344_ == 0)
{
return v___x_344_;
}
else
{
v_x_305_ = v_body_341_;
v_x_306_ = v_body_343_;
goto _start;
}
}
else
{
uint8_t v___x_346_; 
v___x_346_ = 0;
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq___boxed(lean_object* v_x_347_, lean_object* v_x_348_){
_start:
{
uint8_t v_res_349_; lean_object* v_r_350_; 
v_res_349_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v_x_347_, v_x_348_);
lean_dec(v_x_348_);
lean_dec(v_x_347_);
v_r_350_ = lean_box(v_res_349_);
return v_r_350_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg(lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
uint8_t v___x_353_; 
v___x_353_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v_x_351_, v_x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg___boxed(lean_object* v_x_354_, lean_object* v_x_355_){
_start:
{
uint8_t v_res_356_; lean_object* v_r_357_; 
v_res_356_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg(v_x_354_, v_x_355_);
lean_dec(v_x_355_);
lean_dec(v_x_354_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(lean_object* v_x_391_, lean_object* v_prec_392_){
_start:
{
lean_object* v___y_394_; 
switch(lean_obj_tag(v_x_391_))
{
case 0:
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(1024u);
v___x_401_ = lean_nat_dec_le(v___x_400_, v_prec_392_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_394_ = v___x_402_;
goto v___jp_393_;
}
else
{
lean_object* v___x_403_; 
v___x_403_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_394_ = v___x_403_;
goto v___jp_393_;
}
}
case 1:
{
lean_object* v_v_404_; lean_object* v_e_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_430_; 
v_v_404_ = lean_ctor_get(v_x_391_, 0);
v_e_405_ = lean_ctor_get(v_x_391_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_x_391_);
if (v_isSharedCheck_430_ == 0)
{
v___x_407_ = v_x_391_;
v_isShared_408_ = v_isSharedCheck_430_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_e_405_);
lean_inc(v_v_404_);
lean_dec(v_x_391_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_430_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___y_410_; lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_unsigned_to_nat(1024u);
v___x_427_ = lean_nat_dec_le(v___x_426_, v_prec_392_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_410_ = v___x_428_;
goto v___jp_409_;
}
else
{
lean_object* v___x_429_; 
v___x_429_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_410_ = v___x_429_;
goto v___jp_409_;
}
v___jp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_411_ = lean_box(1);
v___x_412_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__4));
v___x_413_ = l_Nat_reprFast(v_v_404_);
v___x_414_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 5);
lean_ctor_set(v___x_407_, 1, v___x_414_);
lean_ctor_set(v___x_407_, 0, v___x_412_);
v___x_416_ = v___x_407_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v___x_414_);
v___x_416_ = v_reuseFailAlloc_425_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_417_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
lean_ctor_set(v___x_417_, 1, v___x_411_);
v___x_418_ = lean_unsigned_to_nat(1024u);
v___x_419_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_e_405_, v___x_418_);
v___x_420_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_417_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
lean_inc(v___y_410_);
v___x_421_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_421_, 0, v___y_410_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = 0;
v___x_423_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_423_, 0, v___x_421_);
lean_ctor_set_uint8(v___x_423_, sizeof(void*)*1, v___x_422_);
v___x_424_ = l_Repr_addAppParen(v___x_423_, v_prec_392_);
return v___x_424_;
}
}
}
}
case 2:
{
lean_object* v_addr_431_; lean_object* v_val_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_456_; 
v_addr_431_ = lean_ctor_get(v_x_391_, 0);
v_val_432_ = lean_ctor_get(v_x_391_, 1);
v_isSharedCheck_456_ = !lean_is_exclusive(v_x_391_);
if (v_isSharedCheck_456_ == 0)
{
v___x_434_ = v_x_391_;
v_isShared_435_ = v_isSharedCheck_456_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_val_432_);
lean_inc(v_addr_431_);
lean_dec(v_x_391_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_456_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___y_437_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = lean_unsigned_to_nat(1024u);
v___x_453_ = lean_nat_dec_le(v___x_452_, v_prec_392_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
v___x_454_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_437_ = v___x_454_;
goto v___jp_436_;
}
else
{
lean_object* v___x_455_; 
v___x_455_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_437_ = v___x_455_;
goto v___jp_436_;
}
v___jp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_438_ = lean_box(1);
v___x_439_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__7));
v___x_440_ = lean_unsigned_to_nat(1024u);
v___x_441_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_addr_431_, v___x_440_);
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 5);
lean_ctor_set(v___x_434_, 1, v___x_441_);
lean_ctor_set(v___x_434_, 0, v___x_439_);
v___x_443_ = v___x_434_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v___x_441_);
v___x_443_ = v_reuseFailAlloc_451_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_444_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___x_438_);
v___x_445_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_val_432_, v___x_440_);
v___x_446_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
lean_inc(v___y_437_);
v___x_447_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_447_, 0, v___y_437_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = 0;
v___x_449_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_449_, 0, v___x_447_);
lean_ctor_set_uint8(v___x_449_, sizeof(void*)*1, v___x_448_);
v___x_450_ = l_Repr_addAppParen(v___x_449_, v_prec_392_);
return v___x_450_;
}
}
}
}
case 3:
{
lean_object* v_p1_457_; lean_object* v_p2_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_481_; 
v_p1_457_ = lean_ctor_get(v_x_391_, 0);
v_p2_458_ = lean_ctor_get(v_x_391_, 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v_x_391_);
if (v_isSharedCheck_481_ == 0)
{
v___x_460_ = v_x_391_;
v_isShared_461_ = v_isSharedCheck_481_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_p2_458_);
lean_inc(v_p1_457_);
lean_dec(v_x_391_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_481_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___y_464_; uint8_t v___x_478_; 
v___x_462_ = lean_unsigned_to_nat(1024u);
v___x_478_ = lean_nat_dec_le(v___x_462_, v_prec_392_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
v___x_479_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_464_ = v___x_479_;
goto v___jp_463_;
}
else
{
lean_object* v___x_480_; 
v___x_480_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_464_ = v___x_480_;
goto v___jp_463_;
}
v___jp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_465_ = lean_box(1);
v___x_466_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__10));
v___x_467_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(v_p1_457_, v___x_462_);
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 5);
lean_ctor_set(v___x_460_, 1, v___x_467_);
lean_ctor_set(v___x_460_, 0, v___x_466_);
v___x_469_ = v___x_460_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v___x_467_);
v___x_469_ = v_reuseFailAlloc_477_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_470_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v___x_465_);
v___x_471_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(v_p2_458_, v___x_462_);
v___x_472_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
lean_inc(v___y_464_);
v___x_473_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_473_, 0, v___y_464_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = 0;
v___x_475_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set_uint8(v___x_475_, sizeof(void*)*1, v___x_474_);
v___x_476_ = l_Repr_addAppParen(v___x_475_, v_prec_392_);
return v___x_476_;
}
}
}
}
case 4:
{
lean_object* v_cond_482_; lean_object* v_thenBr_483_; lean_object* v_elseBr_484_; lean_object* v___x_485_; lean_object* v___y_487_; uint8_t v___x_502_; 
v_cond_482_ = lean_ctor_get(v_x_391_, 0);
lean_inc_ref(v_cond_482_);
v_thenBr_483_ = lean_ctor_get(v_x_391_, 1);
lean_inc(v_thenBr_483_);
v_elseBr_484_ = lean_ctor_get(v_x_391_, 2);
lean_inc(v_elseBr_484_);
lean_dec_ref_known(v_x_391_, 3);
v___x_485_ = lean_unsigned_to_nat(1024u);
v___x_502_ = lean_nat_dec_le(v___x_485_, v_prec_392_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
v___x_503_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_487_ = v___x_503_;
goto v___jp_486_;
}
else
{
lean_object* v___x_504_; 
v___x_504_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_487_ = v___x_504_;
goto v___jp_486_;
}
v___jp_486_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_488_ = lean_box(1);
v___x_489_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__13));
v___x_490_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_cond_482_, v___x_485_);
v___x_491_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___x_488_);
v___x_493_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(v_thenBr_483_, v___x_485_);
v___x_494_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___x_488_);
v___x_496_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(v_elseBr_484_, v___x_485_);
v___x_497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_495_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
lean_inc(v___y_487_);
v___x_498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_498_, 0, v___y_487_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = l_Repr_addAppParen(v___x_500_, v_prec_392_);
return v___x_501_;
}
}
default: 
{
lean_object* v_cond_505_; lean_object* v_body_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_529_; 
v_cond_505_ = lean_ctor_get(v_x_391_, 0);
v_body_506_ = lean_ctor_get(v_x_391_, 1);
v_isSharedCheck_529_ = !lean_is_exclusive(v_x_391_);
if (v_isSharedCheck_529_ == 0)
{
v___x_508_ = v_x_391_;
v_isShared_509_ = v_isSharedCheck_529_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_body_506_);
lean_inc(v_cond_505_);
lean_dec(v_x_391_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_529_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v___y_512_; uint8_t v___x_526_; 
v___x_510_ = lean_unsigned_to_nat(1024u);
v___x_526_ = lean_nat_dec_le(v___x_510_, v_prec_392_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
v___x_527_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__3);
v___y_512_ = v___x_527_;
goto v___jp_511_;
}
else
{
lean_object* v___x_528_; 
v___x_528_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4, &lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr___closed__4);
v___y_512_ = v___x_528_;
goto v___jp_511_;
}
v___jp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_513_ = lean_box(1);
v___x_514_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__16));
v___x_515_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanExp_repr(v_cond_505_, v___x_510_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v___x_515_);
lean_ctor_set(v___x_508_, 0, v___x_514_);
v___x_517_ = v___x_508_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v___x_515_);
v___x_517_ = v_reuseFailAlloc_525_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_518_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
lean_ctor_set(v___x_518_, 1, v___x_513_);
v___x_519_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(v_body_506_, v___x_510_);
v___x_520_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_518_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
lean_inc(v___y_512_);
v___x_521_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_521_, 0, v___y_512_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = 0;
v___x_523_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set_uint8(v___x_523_, sizeof(void*)*1, v___x_522_);
v___x_524_ = l_Repr_addAppParen(v___x_523_, v_prec_392_);
return v___x_524_;
}
}
}
}
}
v___jp_393_:
{
lean_object* v___x_395_; lean_object* v___x_396_; uint8_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_395_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___closed__1));
lean_inc(v___y_394_);
v___x_396_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_396_, 0, v___y_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = 0;
v___x_398_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*1, v___x_397_);
v___x_399_ = l_Repr_addAppParen(v___x_398_, v_prec_392_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr___boxed(lean_object* v_x_530_, lean_object* v_prec_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = lp_rv2pancake_Rv2Pancake_Spec_instReprPanProg_repr(v_x_530_, v_prec_531_);
lean_dec(v_prec_531_);
return v_res_532_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_evalExp(lean_object* v_st_535_, lean_object* v_x_536_){
_start:
{
switch(lean_obj_tag(v_x_536_))
{
case 0:
{
uint64_t v_w_537_; 
lean_dec_ref(v_st_535_);
v_w_537_ = lean_ctor_get_uint64(v_x_536_, 0);
lean_dec_ref_known(v_x_536_, 0);
return v_w_537_;
}
case 1:
{
lean_object* v_v_538_; lean_object* v_vars_539_; lean_object* v___x_540_; uint64_t v___x_541_; 
v_v_538_ = lean_ctor_get(v_x_536_, 0);
lean_inc(v_v_538_);
lean_dec_ref_known(v_x_536_, 1);
v_vars_539_ = lean_ctor_get(v_st_535_, 0);
lean_inc_ref(v_vars_539_);
lean_dec_ref(v_st_535_);
v___x_540_ = lean_apply_1(v_vars_539_, v_v_538_);
v___x_541_ = lean_unbox_uint64(v___x_540_);
lean_dec_ref(v___x_540_);
return v___x_541_;
}
case 2:
{
lean_object* v_addr_542_; lean_object* v_mem_543_; uint64_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; uint64_t v___x_547_; 
v_addr_542_ = lean_ctor_get(v_x_536_, 0);
lean_inc_ref(v_addr_542_);
lean_dec_ref_known(v_x_536_, 1);
v_mem_543_ = lean_ctor_get(v_st_535_, 1);
lean_inc_ref(v_mem_543_);
v___x_544_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_535_, v_addr_542_);
v___x_545_ = lean_box_uint64(v___x_544_);
v___x_546_ = lean_apply_1(v_mem_543_, v___x_545_);
v___x_547_ = lean_unbox_uint64(v___x_546_);
lean_dec_ref(v___x_546_);
return v___x_547_;
}
default: 
{
uint8_t v_op_548_; lean_object* v_e1_549_; lean_object* v_e2_550_; uint64_t v___x_551_; uint64_t v___x_552_; uint64_t v___x_553_; 
v_op_548_ = lean_ctor_get_uint8(v_x_536_, sizeof(void*)*2);
v_e1_549_ = lean_ctor_get(v_x_536_, 0);
lean_inc_ref(v_e1_549_);
v_e2_550_ = lean_ctor_get(v_x_536_, 1);
lean_inc_ref(v_e2_550_);
lean_dec_ref_known(v_x_536_, 2);
lean_inc_ref(v_st_535_);
v___x_551_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_535_, v_e1_549_);
v___x_552_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_535_, v_e2_550_);
v___x_553_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_548_, v___x_551_, v___x_552_);
return v___x_553_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalExp___boxed(lean_object* v_st_554_, lean_object* v_x_555_){
_start:
{
uint64_t v_res_556_; lean_object* v_r_557_; 
v_res_556_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_554_, v_x_555_);
v_r_557_ = lean_box_uint64(v_res_556_);
return v_r_557_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_setVar___lam__0(lean_object* v_v_558_, lean_object* v_vars_559_, uint64_t v_w_560_, lean_object* v_x_561_){
_start:
{
uint8_t v___x_562_; 
v___x_562_ = lean_nat_dec_eq(v_x_561_, v_v_558_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; uint64_t v___x_564_; 
v___x_563_ = lean_apply_1(v_vars_559_, v_x_561_);
v___x_564_ = lean_unbox_uint64(v___x_563_);
lean_dec_ref(v___x_563_);
return v___x_564_;
}
else
{
lean_dec(v_x_561_);
lean_dec_ref(v_vars_559_);
return v_w_560_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setVar___lam__0___boxed(lean_object* v_v_565_, lean_object* v_vars_566_, lean_object* v_w_567_, lean_object* v_x_568_){
_start:
{
uint64_t v_w_boxed_569_; uint64_t v_res_570_; lean_object* v_r_571_; 
v_w_boxed_569_ = lean_unbox_uint64(v_w_567_);
lean_dec_ref(v_w_567_);
v_res_570_ = lp_rv2pancake_Rv2Pancake_Spec_setVar___lam__0(v_v_565_, v_vars_566_, v_w_boxed_569_, v_x_568_);
lean_dec(v_v_565_);
v_r_571_ = lean_box_uint64(v_res_570_);
return v_r_571_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setVar(lean_object* v_st_572_, lean_object* v_v_573_, uint64_t v_w_574_){
_start:
{
lean_object* v_vars_575_; lean_object* v_mem_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_585_; 
v_vars_575_ = lean_ctor_get(v_st_572_, 0);
v_mem_576_ = lean_ctor_get(v_st_572_, 1);
v_isSharedCheck_585_ = !lean_is_exclusive(v_st_572_);
if (v_isSharedCheck_585_ == 0)
{
v___x_578_ = v_st_572_;
v_isShared_579_ = v_isSharedCheck_585_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_mem_576_);
lean_inc(v_vars_575_);
lean_dec(v_st_572_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_585_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___f_581_; lean_object* v___x_583_; 
v___x_580_ = lean_box_uint64(v_w_574_);
v___f_581_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_setVar___lam__0___boxed), 4, 3);
lean_closure_set(v___f_581_, 0, v_v_573_);
lean_closure_set(v___f_581_, 1, v_vars_575_);
lean_closure_set(v___f_581_, 2, v___x_580_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___f_581_);
v___x_583_ = v___x_578_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___f_581_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_mem_576_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setVar___boxed(lean_object* v_st_586_, lean_object* v_v_587_, lean_object* v_w_588_){
_start:
{
uint64_t v_w_boxed_589_; lean_object* v_res_590_; 
v_w_boxed_589_ = lean_unbox_uint64(v_w_588_);
lean_dec_ref(v_w_588_);
v_res_590_ = lp_rv2pancake_Rv2Pancake_Spec_setVar(v_st_586_, v_v_587_, v_w_boxed_589_);
return v_res_590_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_setMem___lam__0(uint64_t v_addr_591_, lean_object* v_mem_592_, uint64_t v_val_593_, uint64_t v_a_594_){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = lean_uint64_dec_eq(v_a_594_, v_addr_591_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; uint64_t v___x_598_; 
v___x_596_ = lean_box_uint64(v_a_594_);
v___x_597_ = lean_apply_1(v_mem_592_, v___x_596_);
v___x_598_ = lean_unbox_uint64(v___x_597_);
lean_dec_ref(v___x_597_);
return v___x_598_;
}
else
{
lean_dec_ref(v_mem_592_);
return v_val_593_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setMem___lam__0___boxed(lean_object* v_addr_599_, lean_object* v_mem_600_, lean_object* v_val_601_, lean_object* v_a_602_){
_start:
{
uint64_t v_addr_boxed_603_; uint64_t v_val_boxed_604_; uint64_t v_a_boxed_605_; uint64_t v_res_606_; lean_object* v_r_607_; 
v_addr_boxed_603_ = lean_unbox_uint64(v_addr_599_);
lean_dec_ref(v_addr_599_);
v_val_boxed_604_ = lean_unbox_uint64(v_val_601_);
lean_dec_ref(v_val_601_);
v_a_boxed_605_ = lean_unbox_uint64(v_a_602_);
lean_dec_ref(v_a_602_);
v_res_606_ = lp_rv2pancake_Rv2Pancake_Spec_setMem___lam__0(v_addr_boxed_603_, v_mem_600_, v_val_boxed_604_, v_a_boxed_605_);
v_r_607_ = lean_box_uint64(v_res_606_);
return v_r_607_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setMem(lean_object* v_st_608_, uint64_t v_addr_609_, uint64_t v_val_610_){
_start:
{
lean_object* v_vars_611_; lean_object* v_mem_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_622_; 
v_vars_611_ = lean_ctor_get(v_st_608_, 0);
v_mem_612_ = lean_ctor_get(v_st_608_, 1);
v_isSharedCheck_622_ = !lean_is_exclusive(v_st_608_);
if (v_isSharedCheck_622_ == 0)
{
v___x_614_ = v_st_608_;
v_isShared_615_ = v_isSharedCheck_622_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_mem_612_);
lean_inc(v_vars_611_);
lean_dec(v_st_608_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_622_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___f_618_; lean_object* v___x_620_; 
v___x_616_ = lean_box_uint64(v_addr_609_);
v___x_617_ = lean_box_uint64(v_val_610_);
v___f_618_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_setMem___lam__0___boxed), 4, 3);
lean_closure_set(v___f_618_, 0, v___x_616_);
lean_closure_set(v___f_618_, 1, v_mem_612_);
lean_closure_set(v___f_618_, 2, v___x_617_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 1, v___f_618_);
v___x_620_ = v___x_614_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_vars_611_);
lean_ctor_set(v_reuseFailAlloc_621_, 1, v___f_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_setMem___boxed(lean_object* v_st_623_, lean_object* v_addr_624_, lean_object* v_val_625_){
_start:
{
uint64_t v_addr_boxed_626_; uint64_t v_val_boxed_627_; lean_object* v_res_628_; 
v_addr_boxed_626_ = lean_unbox_uint64(v_addr_624_);
lean_dec_ref(v_addr_624_);
v_val_boxed_627_ = lean_unbox_uint64(v_val_625_);
lean_dec_ref(v_val_625_);
v_res_628_ = lp_rv2pancake_Rv2Pancake_Spec_setMem(v_st_623_, v_addr_boxed_626_, v_val_boxed_627_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_execStmt(lean_object* v_st_629_, lean_object* v_x_630_){
_start:
{
switch(lean_obj_tag(v_x_630_))
{
case 1:
{
lean_object* v_v_631_; lean_object* v_e_632_; uint64_t v___x_633_; lean_object* v___x_634_; 
v_v_631_ = lean_ctor_get(v_x_630_, 0);
lean_inc(v_v_631_);
v_e_632_ = lean_ctor_get(v_x_630_, 1);
lean_inc_ref(v_e_632_);
lean_dec_ref_known(v_x_630_, 2);
lean_inc_ref(v_st_629_);
v___x_633_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_629_, v_e_632_);
v___x_634_ = lp_rv2pancake_Rv2Pancake_Spec_setVar(v_st_629_, v_v_631_, v___x_633_);
return v___x_634_;
}
case 2:
{
lean_object* v_addr_635_; lean_object* v_val_636_; uint64_t v___x_637_; uint64_t v___x_638_; lean_object* v___x_639_; 
v_addr_635_ = lean_ctor_get(v_x_630_, 0);
lean_inc_ref(v_addr_635_);
v_val_636_ = lean_ctor_get(v_x_630_, 1);
lean_inc_ref(v_val_636_);
lean_dec_ref_known(v_x_630_, 2);
lean_inc_ref_n(v_st_629_, 2);
v___x_637_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_629_, v_addr_635_);
v___x_638_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_629_, v_val_636_);
v___x_639_ = lp_rv2pancake_Rv2Pancake_Spec_setMem(v_st_629_, v___x_637_, v___x_638_);
return v___x_639_;
}
case 3:
{
lean_object* v_p1_640_; lean_object* v_p2_641_; lean_object* v___x_642_; 
v_p1_640_ = lean_ctor_get(v_x_630_, 0);
lean_inc(v_p1_640_);
v_p2_641_ = lean_ctor_get(v_x_630_, 1);
lean_inc(v_p2_641_);
lean_dec_ref_known(v_x_630_, 2);
v___x_642_ = lp_rv2pancake_Rv2Pancake_Spec_execStmt(v_st_629_, v_p1_640_);
v_st_629_ = v___x_642_;
v_x_630_ = v_p2_641_;
goto _start;
}
case 4:
{
lean_object* v_cond_644_; lean_object* v_thenBr_645_; lean_object* v_elseBr_646_; uint64_t v___x_647_; uint64_t v___x_648_; uint8_t v___x_649_; 
v_cond_644_ = lean_ctor_get(v_x_630_, 0);
lean_inc_ref(v_cond_644_);
v_thenBr_645_ = lean_ctor_get(v_x_630_, 1);
lean_inc(v_thenBr_645_);
v_elseBr_646_ = lean_ctor_get(v_x_630_, 2);
lean_inc(v_elseBr_646_);
lean_dec_ref_known(v_x_630_, 3);
lean_inc_ref(v_st_629_);
v___x_647_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_629_, v_cond_644_);
v___x_648_ = 0ULL;
v___x_649_ = lean_uint64_dec_eq(v___x_647_, v___x_648_);
if (v___x_649_ == 0)
{
lean_dec(v_elseBr_646_);
v_x_630_ = v_thenBr_645_;
goto _start;
}
else
{
lean_dec(v_thenBr_645_);
v_x_630_ = v_elseBr_646_;
goto _start;
}
}
default: 
{
lean_dec(v_x_630_);
return v_st_629_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalPan(lean_object* v_fuel_652_, lean_object* v_st_653_, lean_object* v_x_654_){
_start:
{
switch(lean_obj_tag(v_x_654_))
{
case 0:
{
lean_dec(v_fuel_652_);
return v_st_653_;
}
case 1:
{
lean_object* v_v_655_; lean_object* v_e_656_; uint64_t v___x_657_; lean_object* v___x_658_; 
lean_dec(v_fuel_652_);
v_v_655_ = lean_ctor_get(v_x_654_, 0);
lean_inc(v_v_655_);
v_e_656_ = lean_ctor_get(v_x_654_, 1);
lean_inc_ref(v_e_656_);
lean_dec_ref_known(v_x_654_, 2);
lean_inc_ref(v_st_653_);
v___x_657_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_653_, v_e_656_);
v___x_658_ = lp_rv2pancake_Rv2Pancake_Spec_setVar(v_st_653_, v_v_655_, v___x_657_);
return v___x_658_;
}
case 2:
{
lean_object* v_addr_659_; lean_object* v_val_660_; uint64_t v___x_661_; uint64_t v___x_662_; lean_object* v___x_663_; 
lean_dec(v_fuel_652_);
v_addr_659_ = lean_ctor_get(v_x_654_, 0);
lean_inc_ref(v_addr_659_);
v_val_660_ = lean_ctor_get(v_x_654_, 1);
lean_inc_ref(v_val_660_);
lean_dec_ref_known(v_x_654_, 2);
lean_inc_ref_n(v_st_653_, 2);
v___x_661_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_653_, v_addr_659_);
v___x_662_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_653_, v_val_660_);
v___x_663_ = lp_rv2pancake_Rv2Pancake_Spec_setMem(v_st_653_, v___x_661_, v___x_662_);
return v___x_663_;
}
case 3:
{
lean_object* v_p1_664_; lean_object* v_p2_665_; lean_object* v___x_666_; 
v_p1_664_ = lean_ctor_get(v_x_654_, 0);
lean_inc(v_p1_664_);
v_p2_665_ = lean_ctor_get(v_x_654_, 1);
lean_inc(v_p2_665_);
lean_dec_ref_known(v_x_654_, 2);
lean_inc(v_fuel_652_);
v___x_666_ = lp_rv2pancake_Rv2Pancake_Spec_evalPan(v_fuel_652_, v_st_653_, v_p1_664_);
v_st_653_ = v___x_666_;
v_x_654_ = v_p2_665_;
goto _start;
}
case 4:
{
lean_object* v_cond_668_; lean_object* v_thenBr_669_; lean_object* v_elseBr_670_; uint64_t v___x_671_; uint64_t v___x_672_; uint8_t v___x_673_; 
v_cond_668_ = lean_ctor_get(v_x_654_, 0);
lean_inc_ref(v_cond_668_);
v_thenBr_669_ = lean_ctor_get(v_x_654_, 1);
lean_inc(v_thenBr_669_);
v_elseBr_670_ = lean_ctor_get(v_x_654_, 2);
lean_inc(v_elseBr_670_);
lean_dec_ref_known(v_x_654_, 3);
lean_inc_ref(v_st_653_);
v___x_671_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_653_, v_cond_668_);
v___x_672_ = 0ULL;
v___x_673_ = lean_uint64_dec_eq(v___x_671_, v___x_672_);
if (v___x_673_ == 0)
{
lean_dec(v_elseBr_670_);
v_x_654_ = v_thenBr_669_;
goto _start;
}
else
{
lean_dec(v_thenBr_669_);
v_x_654_ = v_elseBr_670_;
goto _start;
}
}
default: 
{
lean_object* v_cond_676_; lean_object* v_body_677_; lean_object* v_zero_678_; uint8_t v_isZero_679_; 
v_cond_676_ = lean_ctor_get(v_x_654_, 0);
v_body_677_ = lean_ctor_get(v_x_654_, 1);
v_zero_678_ = lean_unsigned_to_nat(0u);
v_isZero_679_ = lean_nat_dec_eq(v_fuel_652_, v_zero_678_);
if (v_isZero_679_ == 1)
{
lean_dec_ref_known(v_x_654_, 2);
lean_dec(v_fuel_652_);
return v_st_653_;
}
else
{
uint64_t v___x_680_; uint64_t v___x_681_; uint8_t v___x_682_; 
lean_inc_ref(v_cond_676_);
lean_inc_ref(v_st_653_);
v___x_680_ = lp_rv2pancake_Rv2Pancake_Spec_evalExp(v_st_653_, v_cond_676_);
v___x_681_ = 0ULL;
v___x_682_ = lean_uint64_dec_eq(v___x_680_, v___x_681_);
if (v___x_682_ == 0)
{
lean_object* v_one_683_; lean_object* v_n_684_; lean_object* v___x_685_; 
v_one_683_ = lean_unsigned_to_nat(1u);
v_n_684_ = lean_nat_sub(v_fuel_652_, v_one_683_);
lean_dec(v_fuel_652_);
lean_inc(v_body_677_);
lean_inc(v_n_684_);
v___x_685_ = lp_rv2pancake_Rv2Pancake_Spec_evalPan(v_n_684_, v_st_653_, v_body_677_);
v_fuel_652_ = v_n_684_;
v_st_653_ = v___x_685_;
goto _start;
}
else
{
lean_dec_ref_known(v_x_654_, 2);
lean_dec(v_fuel_652_);
return v_st_653_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter___redArg(lean_object* v_x_687_, lean_object* v_h__1_688_, lean_object* v_h__2_689_, lean_object* v_h__3_690_, lean_object* v_h__4_691_, lean_object* v_h__5_692_, lean_object* v_h__6_693_){
_start:
{
switch(lean_obj_tag(v_x_687_))
{
case 0:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
lean_dec(v_h__6_693_);
lean_dec(v_h__5_692_);
lean_dec(v_h__4_691_);
lean_dec(v_h__3_690_);
lean_dec(v_h__2_689_);
v___x_694_ = lean_box(0);
v___x_695_ = lean_apply_1(v_h__1_688_, v___x_694_);
return v___x_695_;
}
case 1:
{
lean_object* v_v_696_; lean_object* v_e_697_; lean_object* v___x_698_; 
lean_dec(v_h__6_693_);
lean_dec(v_h__5_692_);
lean_dec(v_h__4_691_);
lean_dec(v_h__3_690_);
lean_dec(v_h__1_688_);
v_v_696_ = lean_ctor_get(v_x_687_, 0);
lean_inc(v_v_696_);
v_e_697_ = lean_ctor_get(v_x_687_, 1);
lean_inc_ref(v_e_697_);
lean_dec_ref_known(v_x_687_, 2);
v___x_698_ = lean_apply_2(v_h__2_689_, v_v_696_, v_e_697_);
return v___x_698_;
}
case 2:
{
lean_object* v_addr_699_; lean_object* v_val_700_; lean_object* v___x_701_; 
lean_dec(v_h__6_693_);
lean_dec(v_h__5_692_);
lean_dec(v_h__4_691_);
lean_dec(v_h__2_689_);
lean_dec(v_h__1_688_);
v_addr_699_ = lean_ctor_get(v_x_687_, 0);
lean_inc_ref(v_addr_699_);
v_val_700_ = lean_ctor_get(v_x_687_, 1);
lean_inc_ref(v_val_700_);
lean_dec_ref_known(v_x_687_, 2);
v___x_701_ = lean_apply_2(v_h__3_690_, v_addr_699_, v_val_700_);
return v___x_701_;
}
case 3:
{
lean_object* v_p1_702_; lean_object* v_p2_703_; lean_object* v___x_704_; 
lean_dec(v_h__6_693_);
lean_dec(v_h__5_692_);
lean_dec(v_h__3_690_);
lean_dec(v_h__2_689_);
lean_dec(v_h__1_688_);
v_p1_702_ = lean_ctor_get(v_x_687_, 0);
lean_inc(v_p1_702_);
v_p2_703_ = lean_ctor_get(v_x_687_, 1);
lean_inc(v_p2_703_);
lean_dec_ref_known(v_x_687_, 2);
v___x_704_ = lean_apply_2(v_h__4_691_, v_p1_702_, v_p2_703_);
return v___x_704_;
}
case 4:
{
lean_object* v_cond_705_; lean_object* v_thenBr_706_; lean_object* v_elseBr_707_; lean_object* v___x_708_; 
lean_dec(v_h__6_693_);
lean_dec(v_h__4_691_);
lean_dec(v_h__3_690_);
lean_dec(v_h__2_689_);
lean_dec(v_h__1_688_);
v_cond_705_ = lean_ctor_get(v_x_687_, 0);
lean_inc_ref(v_cond_705_);
v_thenBr_706_ = lean_ctor_get(v_x_687_, 1);
lean_inc(v_thenBr_706_);
v_elseBr_707_ = lean_ctor_get(v_x_687_, 2);
lean_inc(v_elseBr_707_);
lean_dec_ref_known(v_x_687_, 3);
v___x_708_ = lean_apply_3(v_h__5_692_, v_cond_705_, v_thenBr_706_, v_elseBr_707_);
return v___x_708_;
}
default: 
{
lean_object* v_cond_709_; lean_object* v_body_710_; lean_object* v___x_711_; 
lean_dec(v_h__5_692_);
lean_dec(v_h__4_691_);
lean_dec(v_h__3_690_);
lean_dec(v_h__2_689_);
lean_dec(v_h__1_688_);
v_cond_709_ = lean_ctor_get(v_x_687_, 0);
lean_inc_ref(v_cond_709_);
v_body_710_ = lean_ctor_get(v_x_687_, 1);
lean_inc(v_body_710_);
lean_dec_ref_known(v_x_687_, 2);
v___x_711_ = lean_apply_2(v_h__6_693_, v_cond_709_, v_body_710_);
return v___x_711_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter(lean_object* v_motive_712_, lean_object* v_x_713_, lean_object* v_h__1_714_, lean_object* v_h__2_715_, lean_object* v_h__3_716_, lean_object* v_h__4_717_, lean_object* v_h__5_718_, lean_object* v_h__6_719_){
_start:
{
switch(lean_obj_tag(v_x_713_))
{
case 0:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec(v_h__6_719_);
lean_dec(v_h__5_718_);
lean_dec(v_h__4_717_);
lean_dec(v_h__3_716_);
lean_dec(v_h__2_715_);
v___x_720_ = lean_box(0);
v___x_721_ = lean_apply_1(v_h__1_714_, v___x_720_);
return v___x_721_;
}
case 1:
{
lean_object* v_v_722_; lean_object* v_e_723_; lean_object* v___x_724_; 
lean_dec(v_h__6_719_);
lean_dec(v_h__5_718_);
lean_dec(v_h__4_717_);
lean_dec(v_h__3_716_);
lean_dec(v_h__1_714_);
v_v_722_ = lean_ctor_get(v_x_713_, 0);
lean_inc(v_v_722_);
v_e_723_ = lean_ctor_get(v_x_713_, 1);
lean_inc_ref(v_e_723_);
lean_dec_ref_known(v_x_713_, 2);
v___x_724_ = lean_apply_2(v_h__2_715_, v_v_722_, v_e_723_);
return v___x_724_;
}
case 2:
{
lean_object* v_addr_725_; lean_object* v_val_726_; lean_object* v___x_727_; 
lean_dec(v_h__6_719_);
lean_dec(v_h__5_718_);
lean_dec(v_h__4_717_);
lean_dec(v_h__2_715_);
lean_dec(v_h__1_714_);
v_addr_725_ = lean_ctor_get(v_x_713_, 0);
lean_inc_ref(v_addr_725_);
v_val_726_ = lean_ctor_get(v_x_713_, 1);
lean_inc_ref(v_val_726_);
lean_dec_ref_known(v_x_713_, 2);
v___x_727_ = lean_apply_2(v_h__3_716_, v_addr_725_, v_val_726_);
return v___x_727_;
}
case 3:
{
lean_object* v_p1_728_; lean_object* v_p2_729_; lean_object* v___x_730_; 
lean_dec(v_h__6_719_);
lean_dec(v_h__5_718_);
lean_dec(v_h__3_716_);
lean_dec(v_h__2_715_);
lean_dec(v_h__1_714_);
v_p1_728_ = lean_ctor_get(v_x_713_, 0);
lean_inc(v_p1_728_);
v_p2_729_ = lean_ctor_get(v_x_713_, 1);
lean_inc(v_p2_729_);
lean_dec_ref_known(v_x_713_, 2);
v___x_730_ = lean_apply_2(v_h__4_717_, v_p1_728_, v_p2_729_);
return v___x_730_;
}
case 4:
{
lean_object* v_cond_731_; lean_object* v_thenBr_732_; lean_object* v_elseBr_733_; lean_object* v___x_734_; 
lean_dec(v_h__6_719_);
lean_dec(v_h__4_717_);
lean_dec(v_h__3_716_);
lean_dec(v_h__2_715_);
lean_dec(v_h__1_714_);
v_cond_731_ = lean_ctor_get(v_x_713_, 0);
lean_inc_ref(v_cond_731_);
v_thenBr_732_ = lean_ctor_get(v_x_713_, 1);
lean_inc(v_thenBr_732_);
v_elseBr_733_ = lean_ctor_get(v_x_713_, 2);
lean_inc(v_elseBr_733_);
lean_dec_ref_known(v_x_713_, 3);
v___x_734_ = lean_apply_3(v_h__5_718_, v_cond_731_, v_thenBr_732_, v_elseBr_733_);
return v___x_734_;
}
default: 
{
lean_object* v_cond_735_; lean_object* v_body_736_; lean_object* v___x_737_; 
lean_dec(v_h__5_718_);
lean_dec(v_h__4_717_);
lean_dec(v_h__3_716_);
lean_dec(v_h__2_715_);
lean_dec(v_h__1_714_);
v_cond_735_ = lean_ctor_get(v_x_713_, 0);
lean_inc_ref(v_cond_735_);
v_body_736_ = lean_ctor_get(v_x_713_, 1);
lean_inc(v_body_736_);
lean_dec_ref_known(v_x_713_, 2);
v___x_737_ = lean_apply_2(v_h__6_719_, v_cond_735_, v_body_736_);
return v___x_737_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg(lean_object* v_fuel_738_, lean_object* v_h__1_739_, lean_object* v_h__2_740_){
_start:
{
lean_object* v_zero_741_; uint8_t v_isZero_742_; 
v_zero_741_ = lean_unsigned_to_nat(0u);
v_isZero_742_ = lean_nat_dec_eq(v_fuel_738_, v_zero_741_);
if (v_isZero_742_ == 1)
{
lean_object* v___x_743_; lean_object* v___x_744_; 
lean_dec(v_h__2_740_);
v___x_743_ = lean_box(0);
v___x_744_ = lean_apply_1(v_h__1_739_, v___x_743_);
return v___x_744_;
}
else
{
lean_object* v_one_745_; lean_object* v_n_746_; lean_object* v___x_747_; 
lean_dec(v_h__1_739_);
v_one_745_ = lean_unsigned_to_nat(1u);
v_n_746_ = lean_nat_sub(v_fuel_738_, v_one_745_);
v___x_747_ = lean_apply_1(v_h__2_740_, v_n_746_);
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg___boxed(lean_object* v_fuel_748_, lean_object* v_h__1_749_, lean_object* v_h__2_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg(v_fuel_748_, v_h__1_749_, v_h__2_750_);
lean_dec(v_fuel_748_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter(lean_object* v_motive_752_, lean_object* v_fuel_753_, lean_object* v_h__1_754_, lean_object* v_h__2_755_){
_start:
{
lean_object* v_zero_756_; uint8_t v_isZero_757_; 
v_zero_756_ = lean_unsigned_to_nat(0u);
v_isZero_757_ = lean_nat_dec_eq(v_fuel_753_, v_zero_756_);
if (v_isZero_757_ == 1)
{
lean_object* v___x_758_; lean_object* v___x_759_; 
lean_dec(v_h__2_755_);
v___x_758_ = lean_box(0);
v___x_759_ = lean_apply_1(v_h__1_754_, v___x_758_);
return v___x_759_;
}
else
{
lean_object* v_one_760_; lean_object* v_n_761_; lean_object* v___x_762_; 
lean_dec(v_h__1_754_);
v_one_760_ = lean_unsigned_to_nat(1u);
v_n_761_ = lean_nat_sub(v_fuel_753_, v_one_760_);
v___x_762_ = lean_apply_1(v_h__2_755_, v_n_761_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter___boxed(lean_object* v_motive_763_, lean_object* v_fuel_764_, lean_object* v_h__1_765_, lean_object* v_h__2_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = lp_rv2pancake___private_Rv2Pancake_Spec_PancakeSem_0__Rv2Pancake_Spec_evalPan_match__1_splitter(v_motive_763_, v_fuel_764_, v_h__1_765_, v_h__2_766_);
lean_dec(v_fuel_764_);
return v_res_767_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_rv2pancake_Rv2Pancake_Spec_pcVar = _init_lp_rv2pancake_Rv2Pancake_Spec_pcVar();
lean_mark_persistent(lp_rv2pancake_Rv2Pancake_Spec_pcVar);
lp_rv2pancake_Rv2Pancake_Spec_haltVar = _init_lp_rv2pancake_Rv2Pancake_Spec_haltVar();
lean_mark_persistent(lp_rv2pancake_Rv2Pancake_Spec_haltVar);
lp_rv2pancake_Rv2Pancake_Spec_retVar = _init_lp_rv2pancake_Rv2Pancake_Spec_retVar();
lean_mark_persistent(lp_rv2pancake_Rv2Pancake_Spec_retVar);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
