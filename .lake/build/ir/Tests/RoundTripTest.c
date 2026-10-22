// Lean compiler output
// Module: Tests.RoundTripTest
// Imports: public import Init public meta import Init public import Rv2Pancake.Pipeline public import Rv2Pancake.Spec.MetaSpecs
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
uint64_t lean_uint64_neg(uint64_t);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_runRV(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lp_rv2pancake_Rv2Pancake_Base_baseLift(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_evalPan(lean_object*, lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_decompileProg(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock(lean_object*, lean_object*);
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
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(6, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(7, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(5, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(16, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(4, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(20, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(24, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(15, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(28, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(32, 16, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16___boxed__const__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16___boxed__const__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16___boxed__const__1_value),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__17_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__18_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__19_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__19_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__20_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__21_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__7_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__21_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__22_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__5_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__22_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__23 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__23_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__23_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__24 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__24_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__24_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__25 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__25_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__25_value),LEAN_SCALAR_PTR_LITERAL(0, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__26 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__26_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__26_value;
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
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(100, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value),((lean_object*)(((size_t)(9) << 1) | 1))}};
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
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(12, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15___boxed__const__1_value),((lean_object*)(((size_t)(9) << 1) | 1))}};
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
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__8_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__12_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__14_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__16___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__12_value)}};
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
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 64, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(18, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__3_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__5;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__6;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(9, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__7_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(36, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__9_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__10_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__11;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__12;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__13_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__18___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__15_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__17_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__20___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 8}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__19_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__21___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__19_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__21_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__18_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__21_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__22_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__16_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__22_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__23 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__23_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSumLoop___closed__14_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__23_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__24 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__24_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__14_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__24_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__25 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__25_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__26;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__27;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__28;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__29;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__30;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__31;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__32;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(48, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__1___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(18, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__3___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 6}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(28, 16, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(4, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__6_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__6___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__6_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__7_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__9___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progFib10___closed__10_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__8_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__9_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__9_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__10_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(8, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__11_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__13___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__11_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__12_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 16, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__13_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__15___boxed__const__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__13_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__14_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__14_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__15_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__12_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__15_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__16_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__10_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__16_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__17_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__8_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__17_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__18_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__7_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__18_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__19_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__5_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__19_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__20_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__20_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__21_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__21_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__22_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 16, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__23 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__23_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd___closed__23_value;
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static uint64_t _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4(void){
_start:
{
uint64_t v___x_484_; uint64_t v___x_485_; 
v___x_484_ = 8ULL;
v___x_485_ = lean_uint64_neg(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__5(void){
_start:
{
uint64_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_486_ = lean_uint64_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4);
v___x_487_ = lean_unsigned_to_nat(5u);
v___x_488_ = lean_unsigned_to_nat(2u);
v___x_489_ = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(v___x_489_, 0, v___x_488_);
lean_ctor_set(v___x_489_, 1, v___x_487_);
lean_ctor_set_uint64(v___x_489_, sizeof(void*)*2, v___x_486_);
return v___x_489_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__6(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__5, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__5_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__5);
v___x_491_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_progAluBasic___closed__5___boxed__const__1));
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___x_490_);
return v___x_492_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__11(void){
_start:
{
uint64_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_507_ = lean_uint64_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__4);
v___x_508_ = lean_unsigned_to_nat(2u);
v___x_509_ = lean_unsigned_to_nat(6u);
v___x_510_ = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(v___x_510_, 0, v___x_509_);
lean_ctor_set(v___x_510_, 1, v___x_508_);
lean_ctor_set_uint64(v___x_510_, sizeof(void*)*2, v___x_507_);
return v___x_510_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__12(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_511_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__11, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__11_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__11);
v___x_512_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith___closed__11___boxed__const__1));
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
lean_ctor_set(v___x_513_, 1, v___x_511_);
return v___x_513_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__26(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__25));
v___x_557_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__12, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__12_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__12);
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___x_556_);
return v___x_558_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__27(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_559_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__26, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__26_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__26);
v___x_560_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__10));
v___x_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v___x_559_);
return v___x_561_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__28(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_562_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__27, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__27_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__27);
v___x_563_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__8));
v___x_564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
lean_ctor_set(v___x_564_, 1, v___x_562_);
return v___x_564_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__29(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_565_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__28, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__28_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__28);
v___x_566_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__6, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__6_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__6);
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v___x_565_);
return v___x_567_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__30(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_568_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__29, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__29_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__29);
v___x_569_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__3));
v___x_570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set(v___x_570_, 1, v___x_568_);
return v___x_570_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__31(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_571_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__30, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__30_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__30);
v___x_572_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__1));
v___x_573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_571_);
return v___x_573_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__32(void){
_start:
{
lean_object* v___x_574_; uint64_t v___x_575_; lean_object* v___x_576_; 
v___x_574_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__31, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__31_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__31);
v___x_575_ = 4096ULL;
v___x_576_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_576_, 0, v___x_574_);
lean_ctor_set_uint64(v___x_576_, sizeof(void*)*1, v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5(void){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__32, &lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__32_once, _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5___closed__32);
return v___x_577_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(lean_object* v_prog_663_, lean_object* v_k_664_, lean_object* v_fuel_665_, uint64_t v_expected_666_){
_start:
{
lean_object* v_rvInit_667_; lean_object* v_panInit_668_; lean_object* v_rvFinal_669_; uint8_t v_halted_670_; 
v_rvInit_667_ = lp_rv2pancake_Rv2Pancake_Tests_mkInitRVState(v_prog_663_);
lean_inc_ref(v_rvInit_667_);
v_panInit_668_ = lp_rv2pancake_Rv2Pancake_Spec_initPanState(v_rvInit_667_);
lean_inc(v_fuel_665_);
v_rvFinal_669_ = lp_rv2pancake_Rv2Pancake_Spec_runRV(v_prog_663_, v_fuel_665_, v_rvInit_667_);
v_halted_670_ = lean_ctor_get_uint8(v_rvFinal_669_, sizeof(void*)*2 + 16);
if (v_halted_670_ == 0)
{
lean_dec_ref(v_rvFinal_669_);
lean_dec_ref(v_panInit_668_);
lean_dec(v_fuel_665_);
lean_dec_ref(v_prog_663_);
return v_halted_670_;
}
else
{
uint64_t v_retVal_671_; uint8_t v___x_672_; 
v_retVal_671_ = lean_ctor_get_uint64(v_rvFinal_669_, sizeof(void*)*2 + 8);
lean_dec_ref(v_rvFinal_669_);
v___x_672_ = lean_uint64_dec_eq(v_retVal_671_, v_expected_666_);
if (v___x_672_ == 0)
{
lean_dec_ref(v_panInit_668_);
lean_dec(v_fuel_665_);
lean_dec_ref(v_prog_663_);
return v___x_672_;
}
else
{
lean_object* v___x_673_; lean_object* v_panBase_674_; lean_object* v_vars_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint64_t v___x_678_; uint64_t v___x_679_; uint8_t v___x_680_; 
lean_inc_ref(v_prog_663_);
v___x_673_ = lp_rv2pancake_Rv2Pancake_Base_baseLift(v_prog_663_);
lean_inc_ref(v_panInit_668_);
lean_inc(v_fuel_665_);
v_panBase_674_ = lp_rv2pancake_Rv2Pancake_Spec_evalPan(v_fuel_665_, v_panInit_668_, v___x_673_);
v_vars_675_ = lean_ctor_get(v_panBase_674_, 0);
lean_inc_ref_n(v_vars_675_, 2);
lean_dec_ref(v_panBase_674_);
v___x_676_ = lean_unsigned_to_nat(0u);
v___x_677_ = lean_apply_1(v_vars_675_, v___x_676_);
v___x_678_ = 0ULL;
v___x_679_ = lean_unbox_uint64(v___x_677_);
lean_dec_ref(v___x_677_);
v___x_680_ = lean_uint64_dec_eq(v___x_679_, v___x_678_);
if (v___x_680_ == 0)
{
lean_dec_ref(v_vars_675_);
lean_dec_ref(v_panInit_668_);
lean_dec(v_fuel_665_);
lean_dec_ref(v_prog_663_);
return v___x_680_;
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; uint64_t v___x_683_; uint8_t v___x_684_; 
v___x_681_ = lean_unsigned_to_nat(10u);
v___x_682_ = lean_apply_1(v_vars_675_, v___x_681_);
v___x_683_ = lean_unbox_uint64(v___x_682_);
lean_dec_ref(v___x_682_);
v___x_684_ = lean_uint64_dec_eq(v___x_683_, v_expected_666_);
if (v___x_684_ == 0)
{
lean_dec_ref(v_panInit_668_);
lean_dec(v_fuel_665_);
lean_dec_ref(v_prog_663_);
return v___x_684_;
}
else
{
lean_object* v___x_685_; lean_object* v_panOpt_686_; lean_object* v_vars_687_; lean_object* v___x_688_; uint64_t v___x_689_; uint8_t v___x_690_; 
lean_inc_ref(v_prog_663_);
v___x_685_ = lp_rv2pancake_Rv2Pancake_decompileProg(v_prog_663_);
lean_inc_ref(v_panInit_668_);
lean_inc(v_fuel_665_);
v_panOpt_686_ = lp_rv2pancake_Rv2Pancake_Spec_evalPan(v_fuel_665_, v_panInit_668_, v___x_685_);
v_vars_687_ = lean_ctor_get(v_panOpt_686_, 0);
lean_inc_ref_n(v_vars_687_, 2);
lean_dec_ref(v_panOpt_686_);
v___x_688_ = lean_apply_1(v_vars_687_, v___x_676_);
v___x_689_ = lean_unbox_uint64(v___x_688_);
lean_dec_ref(v___x_688_);
v___x_690_ = lean_uint64_dec_eq(v___x_689_, v___x_678_);
if (v___x_690_ == 0)
{
lean_dec_ref(v_vars_687_);
lean_dec_ref(v_panInit_668_);
lean_dec(v_fuel_665_);
lean_dec_ref(v_prog_663_);
return v___x_690_;
}
else
{
lean_object* v___x_691_; uint64_t v___x_692_; uint8_t v___x_693_; 
lean_inc_ref(v_vars_687_);
v___x_691_ = lean_apply_1(v_vars_687_, v___x_681_);
v___x_692_ = lean_unbox_uint64(v___x_691_);
lean_dec_ref(v___x_691_);
v___x_693_ = lean_uint64_dec_eq(v___x_692_, v_expected_666_);
if (v___x_693_ == 0)
{
lean_dec_ref(v_vars_687_);
lean_dec_ref(v_panInit_668_);
lean_dec(v_fuel_665_);
lean_dec_ref(v_prog_663_);
return v___x_693_;
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; uint64_t v___x_696_; uint8_t v___x_697_; 
v___x_694_ = lean_unsigned_to_nat(33u);
v___x_695_ = lean_apply_1(v_vars_687_, v___x_694_);
v___x_696_ = lean_unbox_uint64(v___x_695_);
lean_dec_ref(v___x_695_);
v___x_697_ = lean_uint64_dec_eq(v___x_696_, v_expected_666_);
if (v___x_697_ == 0)
{
lean_dec_ref(v_panInit_668_);
lean_dec(v_fuel_665_);
lean_dec_ref(v_prog_663_);
return v___x_697_;
}
else
{
lean_object* v___x_698_; lean_object* v_panSup_699_; lean_object* v_vars_700_; lean_object* v___x_701_; uint64_t v___x_702_; uint8_t v___x_703_; 
v___x_698_ = lp_rv2pancake_Rv2Pancake_decompileSuperblock(v_k_664_, v_prog_663_);
v_panSup_699_ = lp_rv2pancake_Rv2Pancake_Spec_evalPan(v_fuel_665_, v_panInit_668_, v___x_698_);
v_vars_700_ = lean_ctor_get(v_panSup_699_, 0);
lean_inc_ref_n(v_vars_700_, 2);
lean_dec_ref(v_panSup_699_);
v___x_701_ = lean_apply_1(v_vars_700_, v___x_676_);
v___x_702_ = lean_unbox_uint64(v___x_701_);
lean_dec_ref(v___x_701_);
v___x_703_ = lean_uint64_dec_eq(v___x_702_, v___x_678_);
if (v___x_703_ == 0)
{
lean_dec_ref(v_vars_700_);
return v___x_703_;
}
else
{
lean_object* v___x_704_; uint64_t v___x_705_; uint8_t v___x_706_; 
lean_inc_ref(v_vars_700_);
v___x_704_ = lean_apply_1(v_vars_700_, v___x_681_);
v___x_705_ = lean_unbox_uint64(v___x_704_);
lean_dec_ref(v___x_704_);
v___x_706_ = lean_uint64_dec_eq(v___x_705_, v_expected_666_);
if (v___x_706_ == 0)
{
lean_dec_ref(v_vars_700_);
return v___x_706_;
}
else
{
lean_object* v___x_707_; uint64_t v___x_708_; uint8_t v___x_709_; 
v___x_707_ = lean_apply_1(v_vars_700_, v___x_694_);
v___x_708_ = lean_unbox_uint64(v___x_707_);
lean_dec_ref(v___x_707_);
v___x_709_ = lean_uint64_dec_eq(v___x_708_, v_expected_666_);
return v___x_709_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock___boxed(lean_object* v_prog_710_, lean_object* v_k_711_, lean_object* v_fuel_712_, lean_object* v_expected_713_){
_start:
{
uint64_t v_expected_boxed_714_; uint8_t v_res_715_; lean_object* v_r_716_; 
v_expected_boxed_714_ = lean_unbox_uint64(v_expected_713_);
lean_dec_ref(v_expected_713_);
v_res_715_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v_prog_710_, v_k_711_, v_fuel_712_, v_expected_boxed_714_);
lean_dec(v_k_711_);
v_r_716_ = lean_box(v_res_715_);
return v_r_716_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(lean_object* v_prog_717_, lean_object* v_fuel_718_, uint64_t v_expected_719_){
_start:
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = lean_unsigned_to_nat(3u);
v___x_721_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v_prog_717_, v___x_720_, v_fuel_718_, v_expected_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip___boxed(lean_object* v_prog_722_, lean_object* v_fuel_723_, lean_object* v_expected_724_){
_start:
{
uint64_t v_expected_boxed_725_; uint8_t v_res_726_; lean_object* v_r_727_; 
v_expected_boxed_725_ = lean_unbox_uint64(v_expected_724_);
lean_dec_ref(v_expected_724_);
v_res_726_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(v_prog_722_, v_fuel_723_, v_expected_boxed_725_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Pipeline(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_MetaSpecs(uint8_t builtin);
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
res = initialize_rv2pancake_Rv2Pancake_Spec_MetaSpecs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5 = _init_lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5();
lean_mark_persistent(lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
