// Lean compiler output
// Module: Tests.RoundTripTest
// Imports: public import Init public meta import Init public import Rv2Pancake.Pipeline
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
lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lp_rv2pancake_Rv2Pancake_Base_baseLift(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalPan(lean_object*, lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_decompileProg(lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__0___boxed(lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__1(uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__1___boxed(lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__0_value;
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__1_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___boxed(lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(10, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(15, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(4, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(8, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(12, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__7_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__9_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__10_value),LEAN_SCALAR_PTR_LITERAL(0, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__11_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(7, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(9, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 6}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(20, 16, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(42, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(24, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(16, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(100, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(20, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(24, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12___boxed__const__1_value),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__13_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__7_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__15_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__5_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__16_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__17_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__18_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__19_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__19_value),LEAN_SCALAR_PTR_LITERAL(0, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__20_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(11, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 6}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(28, 16, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(12, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(28, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14___boxed__const__1_value),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__13_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__15_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__11_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__16_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__17_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__9_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__7_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__18_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__19_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__5_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__19_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__20_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__21_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__21_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__22_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__23 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__23_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__23_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(10, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 6}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(36, 16, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(32, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 32, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__17_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(36, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 32, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__19_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(40, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__19_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(44, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21___boxed__const__1_value),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__22_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__22_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__23 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__23_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__23_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__24 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__24_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__24_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__25 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__25_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__15_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__25_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__26 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__26_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__13_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__26_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__27 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__27_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__11_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__27_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__28 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__28_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__9_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__28_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__29 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__29_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__7_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__29_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__30 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__30_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__5_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__30_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__31 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__31_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__31_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__32 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__32_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__32_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__33 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__33_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__33_value),LEAN_SCALAR_PTR_LITERAL(0, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__34 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__34_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__34_value;
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__0(lean_object* v_x_1_){
_start:
{
uint64_t v___x_2_; 
v___x_2_ = 0ULL;
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__0___boxed(lean_object* v_x_3_){
_start:
{
uint64_t v_res_4_; lean_object* v_r_5_; 
v_res_4_ = lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__0(v_x_3_);
lean_dec(v_x_3_);
v_r_5_ = lean_box_uint64(v_res_4_);
return v_r_5_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__1(uint64_t v_x_6_){
_start:
{
uint64_t v___x_7_; 
v___x_7_ = 0ULL;
return v___x_7_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__1___boxed(lean_object* v_x_8_){
_start:
{
uint64_t v_x_33__boxed_9_; uint64_t v_res_10_; lean_object* v_r_11_; 
v_x_33__boxed_9_ = lean_unbox_uint64(v_x_8_);
lean_dec_ref(v_x_8_);
v_res_10_ = lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___lam__1(v_x_33__boxed_9_);
v_r_11_ = lean_box_uint64(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState(lean_object* v_prog_14_){
_start:
{
uint64_t v_entryPc_15_; lean_object* v___f_16_; lean_object* v___f_17_; uint8_t v___x_18_; uint64_t v___x_19_; lean_object* v___x_20_; 
v_entryPc_15_ = lean_ctor_get_uint64(v_prog_14_, sizeof(void*)*1);
v___f_16_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__0));
v___f_17_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___closed__1));
v___x_18_ = 0;
v___x_19_ = 0ULL;
v___x_20_ = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(v___x_20_, 0, v___f_16_);
lean_ctor_set(v___x_20_, 1, v___f_17_);
lean_ctor_set_uint64(v___x_20_, sizeof(void*)*2, v_entryPc_15_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2 + 16, v___x_18_);
lean_ctor_set_uint64(v___x_20_, sizeof(void*)*2 + 8, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState___boxed(lean_object* v_prog_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState(v_prog_21_);
lean_dec_ref(v_prog_21_);
return v_res_22_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(lean_object* v_prog_370_, lean_object* v_fuel_371_, uint64_t v_expected_372_){
_start:
{
lean_object* v_rvInit_373_; lean_object* v_panInit_374_; lean_object* v_rvFinal_375_; uint64_t v_retVal_376_; uint8_t v___x_377_; 
v_rvInit_373_ = lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState(v_prog_370_);
lean_inc_ref(v_rvInit_373_);
v_panInit_374_ = lp_rv2pancake_Rv2Pancake_Spec_initPanState(v_rvInit_373_);
lean_inc(v_fuel_371_);
v_rvFinal_375_ = lp_rv2pancake_Rv2Pancake_Spec_runRV(v_prog_370_, v_fuel_371_, v_rvInit_373_);
v_retVal_376_ = lean_ctor_get_uint64(v_rvFinal_375_, sizeof(void*)*2 + 8);
lean_dec_ref(v_rvFinal_375_);
v___x_377_ = lean_uint64_dec_eq(v_retVal_376_, v_expected_372_);
if (v___x_377_ == 0)
{
lean_dec_ref(v_panInit_374_);
lean_dec(v_fuel_371_);
lean_dec_ref(v_prog_370_);
return v___x_377_;
}
else
{
lean_object* v___x_378_; lean_object* v_panBase_379_; lean_object* v_vars_380_; lean_object* v___x_381_; lean_object* v___x_382_; uint64_t v___x_383_; uint8_t v___x_384_; 
lean_inc_ref(v_prog_370_);
v___x_378_ = lp_rv2pancake_Rv2Pancake_Base_baseLift(v_prog_370_);
lean_inc_ref(v_panInit_374_);
lean_inc(v_fuel_371_);
v_panBase_379_ = lp_rv2pancake_Rv2Pancake_Spec_evalPan(v_fuel_371_, v_panInit_374_, v___x_378_);
v_vars_380_ = lean_ctor_get(v_panBase_379_, 0);
lean_inc_ref(v_vars_380_);
lean_dec_ref(v_panBase_379_);
v___x_381_ = lean_unsigned_to_nat(10u);
v___x_382_ = lean_apply_1(v_vars_380_, v___x_381_);
v___x_383_ = lean_unbox_uint64(v___x_382_);
lean_dec_ref(v___x_382_);
v___x_384_ = lean_uint64_dec_eq(v___x_383_, v_expected_372_);
if (v___x_384_ == 0)
{
lean_dec_ref(v_panInit_374_);
lean_dec(v_fuel_371_);
lean_dec_ref(v_prog_370_);
return v___x_384_;
}
else
{
lean_object* v___x_385_; lean_object* v_panOpt_386_; lean_object* v_vars_387_; lean_object* v___x_388_; uint64_t v___x_389_; uint8_t v___x_390_; 
v___x_385_ = lp_rv2pancake_Rv2Pancake_decompileProg(v_prog_370_);
v_panOpt_386_ = lp_rv2pancake_Rv2Pancake_Spec_evalPan(v_fuel_371_, v_panInit_374_, v___x_385_);
v_vars_387_ = lean_ctor_get(v_panOpt_386_, 0);
lean_inc_ref_n(v_vars_387_, 2);
lean_dec_ref(v_panOpt_386_);
v___x_388_ = lean_apply_1(v_vars_387_, v___x_381_);
v___x_389_ = lean_unbox_uint64(v___x_388_);
lean_dec_ref(v___x_388_);
v___x_390_ = lean_uint64_dec_eq(v___x_389_, v_expected_372_);
if (v___x_390_ == 0)
{
lean_dec_ref(v_vars_387_);
return v___x_390_;
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; uint64_t v___x_393_; uint8_t v___x_394_; 
v___x_391_ = lean_unsigned_to_nat(33u);
v___x_392_ = lean_apply_1(v_vars_387_, v___x_391_);
v___x_393_ = lean_unbox_uint64(v___x_392_);
lean_dec_ref(v___x_392_);
v___x_394_ = lean_uint64_dec_eq(v___x_393_, v_expected_372_);
return v___x_394_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip___boxed(lean_object* v_prog_395_, lean_object* v_fuel_396_, lean_object* v_expected_397_){
_start:
{
uint64_t v_expected_boxed_398_; uint8_t v_res_399_; lean_object* v_r_400_; 
v_expected_boxed_398_ = lean_unbox_uint64(v_expected_397_);
lean_dec_ref(v_expected_397_);
v_res_399_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(v_prog_395_, v_fuel_396_, v_expected_boxed_398_);
v_r_400_ = lean_box(v_res_399_);
return v_r_400_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Pipeline(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Tests_RoundTripTest(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake_Pipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
