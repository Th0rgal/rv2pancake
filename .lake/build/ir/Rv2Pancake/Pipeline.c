// Lean compiler output
// Module: Rv2Pancake.Pipeline
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem public import Rv2Pancake.Spec.Equiv public import Rv2Pancake.Spec.ElfLoader public import Rv2Pancake.Base.Lifter public import Rv2Pancake.Base.BaseSound public import Rv2Pancake.Passes.SafePass public import Rv2Pancake.Passes.SymCheck public import Rv2Pancake.Passes.BlockFusion public import Rv2Pancake.Passes.IfElseRecon public import Rv2Pancake.Passes.WhileRecon public import Rv2Pancake.Passes.DeadRegElim
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
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_symCheckPass;
lean_object* lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(lean_object*, lean_object*);
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass;
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass;
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_whileReconPass;
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass;
lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_optimizeDispatcherBody(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_superblockBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_superblockBody___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__1_value),LEAN_SCALAR_PTR_LITERAL(12, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__2_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_decompileProg(lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ret_val"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "halted"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__2_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pc"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__3_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "lds 1 ("};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__4_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__5_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__6_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__7_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " - "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__8_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " * "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__9_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " / "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__10_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " % "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__11_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " & "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__12_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__13_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ^ "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__14_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " << "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__15_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " >>> "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__16_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " >> "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__17 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__17_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " == "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__18 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__18_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " != "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__19 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__19_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " <+ "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__20 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__20_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " < "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__21 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__21_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sext32("};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__22 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__22_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_renderExp(lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "skip;"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " = "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__2_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "st "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__3_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__4_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__5_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "if "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__6_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " {\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__7 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__7_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__8 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__8_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "} else {\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__9_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__10_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "while ("};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__11_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderProg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ") {\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderProg___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderProg___closed__12_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_renderProg(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "// Generated by rv2pancake (Lean 4 v4.35.0 - Verified Propose+Check Pipeline)\nfun entry() {\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "  var pc = "};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ";\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__2_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "  var halted = 0;\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__3_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "  var ret_val = 0;\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__4_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "  return ret_val;\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__5_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "}\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__6_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource(lean_object*);
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "// Generated by rv2pancake (Lean 4 v4.35.0 - Verified Superblock k="};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " + SymCheck)\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__1_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "fun entry() {\n"};
static const lean_object* lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__2_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_emitSuperblockSource(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_optimizeDispatcherBody(lean_object* v_body_1_){
_start:
{
lean_object* v___x_2_; lean_object* v_b0_3_; lean_object* v___x_4_; lean_object* v_b1_5_; lean_object* v___x_6_; lean_object* v_b2_7_; lean_object* v___x_8_; lean_object* v_b3_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_2_ = lp_rv2pancake_Rv2Pancake_Passes_symCheckPass;
v_b0_3_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_2_, v_body_1_);
v___x_4_ = lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass;
v_b1_5_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_4_, v_b0_3_);
v___x_6_ = lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass;
v_b2_7_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_6_, v_b1_5_);
v___x_8_ = lp_rv2pancake_Rv2Pancake_Passes_whileReconPass;
v_b3_9_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_8_, v_b2_7_);
v___x_10_ = lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass;
v___x_11_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_10_, v_b3_9_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_superblockBody(lean_object* v_k_12_, lean_object* v_prog_13_){
_start:
{
lean_object* v_code_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_code_14_ = lean_ctor_get(v_prog_13_, 0);
lean_inc(v_code_14_);
lean_dec_ref(v_prog_13_);
v___x_15_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_code_14_);
v___x_16_ = lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody(v_k_12_, v___x_15_);
v___x_17_ = lp_rv2pancake_Rv2Pancake_optimizeDispatcherBody(v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_superblockBody___boxed(lean_object* v_k_18_, lean_object* v_prog_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_rv2pancake_Rv2Pancake_superblockBody(v_k_18_, v_prog_19_);
lean_dec(v_k_18_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock(lean_object* v_k_29_, lean_object* v_prog_30_){
_start:
{
lean_object* v_loopCond_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v_loopCond_31_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__2));
v___x_32_ = lp_rv2pancake_Rv2Pancake_superblockBody(v_k_29_, v_prog_30_);
v___x_33_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_33_, 0, v_loopCond_31_);
lean_ctor_set(v___x_33_, 1, v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_decompileSuperblock___boxed(lean_object* v_k_34_, lean_object* v_prog_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = lp_rv2pancake_Rv2Pancake_decompileSuperblock(v_k_34_, v_prog_35_);
lean_dec(v_k_34_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_decompileProg(lean_object* v_prog_37_){
_start:
{
lean_object* v_code_38_; lean_object* v_loopCond_39_; lean_object* v_rawBody_40_; lean_object* v_optBody_41_; lean_object* v___x_42_; 
v_code_38_ = lean_ctor_get(v_prog_37_, 0);
lean_inc(v_code_38_);
lean_dec_ref(v_prog_37_);
v_loopCond_39_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_decompileSuperblock___closed__2));
v_rawBody_40_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_code_38_);
v_optBody_41_ = lp_rv2pancake_Rv2Pancake_optimizeDispatcherBody(v_rawBody_40_);
v___x_42_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_42_, 0, v_loopCond_39_);
lean_ctor_set(v___x_42_, 1, v_optBody_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_renderExp(lean_object* v_x_66_){
_start:
{
switch(lean_obj_tag(v_x_66_))
{
case 0:
{
uint64_t v_w_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_w_67_ = lean_ctor_get_uint64(v_x_66_, 0);
lean_dec_ref_known(v_x_66_, 0);
v___x_68_ = lean_uint64_to_nat(v_w_67_);
v___x_69_ = l_Nat_reprFast(v___x_68_);
return v___x_69_;
}
case 1:
{
lean_object* v_v_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v_v_70_ = lean_ctor_get(v_x_66_, 0);
lean_inc(v_v_70_);
lean_dec_ref_known(v_x_66_, 1);
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lean_nat_dec_eq(v_v_70_, v___x_71_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; uint8_t v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(32u);
v___x_74_ = lean_nat_dec_eq(v_v_70_, v___x_73_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_75_ = lean_unsigned_to_nat(33u);
v___x_76_ = lean_nat_dec_eq(v_v_70_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__0));
v___x_78_ = l_Nat_reprFast(v_v_70_);
v___x_79_ = lean_string_append(v___x_77_, v___x_78_);
lean_dec_ref(v___x_78_);
return v___x_79_;
}
else
{
lean_object* v___x_80_; 
lean_dec(v_v_70_);
v___x_80_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__1));
return v___x_80_;
}
}
else
{
lean_object* v___x_81_; 
lean_dec(v_v_70_);
v___x_81_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__2));
return v___x_81_;
}
}
else
{
lean_object* v___x_82_; 
lean_dec(v_v_70_);
v___x_82_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__3));
return v___x_82_;
}
}
case 2:
{
lean_object* v_addr_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_addr_83_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_addr_83_);
lean_dec_ref_known(v_x_66_, 1);
v___x_84_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__4));
v___x_85_ = lp_rv2pancake_Rv2Pancake_renderExp(v_addr_83_);
v___x_86_ = lean_string_append(v___x_84_, v___x_85_);
lean_dec_ref(v___x_85_);
v___x_87_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_88_ = lean_string_append(v___x_86_, v___x_87_);
return v___x_88_;
}
default: 
{
uint8_t v_op_89_; 
v_op_89_ = lean_ctor_get_uint8(v_x_66_, sizeof(void*)*2);
switch(v_op_89_)
{
case 0:
{
lean_object* v_e1_90_; lean_object* v_e2_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_e1_90_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_90_);
v_e2_91_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_91_);
lean_dec_ref_known(v_x_66_, 2);
v___x_92_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_93_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_90_);
v___x_94_ = lean_string_append(v___x_92_, v___x_93_);
lean_dec_ref(v___x_93_);
v___x_95_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__7));
v___x_96_ = lean_string_append(v___x_94_, v___x_95_);
v___x_97_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_91_);
v___x_98_ = lean_string_append(v___x_96_, v___x_97_);
lean_dec_ref(v___x_97_);
v___x_99_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_100_ = lean_string_append(v___x_98_, v___x_99_);
return v___x_100_;
}
case 1:
{
lean_object* v_e1_101_; lean_object* v_e2_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_e1_101_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_101_);
v_e2_102_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_102_);
lean_dec_ref_known(v_x_66_, 2);
v___x_103_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_104_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_101_);
v___x_105_ = lean_string_append(v___x_103_, v___x_104_);
lean_dec_ref(v___x_104_);
v___x_106_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__8));
v___x_107_ = lean_string_append(v___x_105_, v___x_106_);
v___x_108_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_102_);
v___x_109_ = lean_string_append(v___x_107_, v___x_108_);
lean_dec_ref(v___x_108_);
v___x_110_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_111_ = lean_string_append(v___x_109_, v___x_110_);
return v___x_111_;
}
case 2:
{
lean_object* v_e1_112_; lean_object* v_e2_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_e1_112_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_112_);
v_e2_113_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_113_);
lean_dec_ref_known(v_x_66_, 2);
v___x_114_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_115_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_112_);
v___x_116_ = lean_string_append(v___x_114_, v___x_115_);
lean_dec_ref(v___x_115_);
v___x_117_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__9));
v___x_118_ = lean_string_append(v___x_116_, v___x_117_);
v___x_119_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_113_);
v___x_120_ = lean_string_append(v___x_118_, v___x_119_);
lean_dec_ref(v___x_119_);
v___x_121_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_122_ = lean_string_append(v___x_120_, v___x_121_);
return v___x_122_;
}
case 3:
{
lean_object* v_e1_123_; lean_object* v_e2_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_e1_123_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_123_);
v_e2_124_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_124_);
lean_dec_ref_known(v_x_66_, 2);
v___x_125_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_126_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_123_);
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
lean_dec_ref(v___x_126_);
v___x_128_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__10));
v___x_129_ = lean_string_append(v___x_127_, v___x_128_);
v___x_130_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_124_);
v___x_131_ = lean_string_append(v___x_129_, v___x_130_);
lean_dec_ref(v___x_130_);
v___x_132_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_133_ = lean_string_append(v___x_131_, v___x_132_);
return v___x_133_;
}
case 4:
{
lean_object* v_e1_134_; lean_object* v_e2_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v_e1_134_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_134_);
v_e2_135_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_135_);
lean_dec_ref_known(v_x_66_, 2);
v___x_136_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_137_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_134_);
v___x_138_ = lean_string_append(v___x_136_, v___x_137_);
lean_dec_ref(v___x_137_);
v___x_139_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__11));
v___x_140_ = lean_string_append(v___x_138_, v___x_139_);
v___x_141_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_135_);
v___x_142_ = lean_string_append(v___x_140_, v___x_141_);
lean_dec_ref(v___x_141_);
v___x_143_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_144_ = lean_string_append(v___x_142_, v___x_143_);
return v___x_144_;
}
case 5:
{
lean_object* v_e1_145_; lean_object* v_e2_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_e1_145_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_145_);
v_e2_146_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_146_);
lean_dec_ref_known(v_x_66_, 2);
v___x_147_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_148_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_145_);
v___x_149_ = lean_string_append(v___x_147_, v___x_148_);
lean_dec_ref(v___x_148_);
v___x_150_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__12));
v___x_151_ = lean_string_append(v___x_149_, v___x_150_);
v___x_152_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_146_);
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
lean_dec_ref(v___x_152_);
v___x_154_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_155_ = lean_string_append(v___x_153_, v___x_154_);
return v___x_155_;
}
case 6:
{
lean_object* v_e1_156_; lean_object* v_e2_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v_e1_156_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_156_);
v_e2_157_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_157_);
lean_dec_ref_known(v_x_66_, 2);
v___x_158_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_159_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_156_);
v___x_160_ = lean_string_append(v___x_158_, v___x_159_);
lean_dec_ref(v___x_159_);
v___x_161_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__13));
v___x_162_ = lean_string_append(v___x_160_, v___x_161_);
v___x_163_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_157_);
v___x_164_ = lean_string_append(v___x_162_, v___x_163_);
lean_dec_ref(v___x_163_);
v___x_165_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_166_ = lean_string_append(v___x_164_, v___x_165_);
return v___x_166_;
}
case 7:
{
lean_object* v_e1_167_; lean_object* v_e2_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_e1_167_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_167_);
v_e2_168_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_168_);
lean_dec_ref_known(v_x_66_, 2);
v___x_169_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_170_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_167_);
v___x_171_ = lean_string_append(v___x_169_, v___x_170_);
lean_dec_ref(v___x_170_);
v___x_172_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__14));
v___x_173_ = lean_string_append(v___x_171_, v___x_172_);
v___x_174_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_168_);
v___x_175_ = lean_string_append(v___x_173_, v___x_174_);
lean_dec_ref(v___x_174_);
v___x_176_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_177_ = lean_string_append(v___x_175_, v___x_176_);
return v___x_177_;
}
case 8:
{
lean_object* v_e1_178_; lean_object* v_e2_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_e1_178_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_178_);
v_e2_179_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_179_);
lean_dec_ref_known(v_x_66_, 2);
v___x_180_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_181_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_178_);
v___x_182_ = lean_string_append(v___x_180_, v___x_181_);
lean_dec_ref(v___x_181_);
v___x_183_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__15));
v___x_184_ = lean_string_append(v___x_182_, v___x_183_);
v___x_185_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_179_);
v___x_186_ = lean_string_append(v___x_184_, v___x_185_);
lean_dec_ref(v___x_185_);
v___x_187_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
return v___x_188_;
}
case 9:
{
lean_object* v_e1_189_; lean_object* v_e2_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_e1_189_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_189_);
v_e2_190_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_190_);
lean_dec_ref_known(v_x_66_, 2);
v___x_191_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_192_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_189_);
v___x_193_ = lean_string_append(v___x_191_, v___x_192_);
lean_dec_ref(v___x_192_);
v___x_194_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__16));
v___x_195_ = lean_string_append(v___x_193_, v___x_194_);
v___x_196_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_190_);
v___x_197_ = lean_string_append(v___x_195_, v___x_196_);
lean_dec_ref(v___x_196_);
v___x_198_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_199_ = lean_string_append(v___x_197_, v___x_198_);
return v___x_199_;
}
case 10:
{
lean_object* v_e1_200_; lean_object* v_e2_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v_e1_200_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_200_);
v_e2_201_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_201_);
lean_dec_ref_known(v_x_66_, 2);
v___x_202_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_203_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_200_);
v___x_204_ = lean_string_append(v___x_202_, v___x_203_);
lean_dec_ref(v___x_203_);
v___x_205_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__17));
v___x_206_ = lean_string_append(v___x_204_, v___x_205_);
v___x_207_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_201_);
v___x_208_ = lean_string_append(v___x_206_, v___x_207_);
lean_dec_ref(v___x_207_);
v___x_209_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_210_ = lean_string_append(v___x_208_, v___x_209_);
return v___x_210_;
}
case 11:
{
lean_object* v_e1_211_; lean_object* v_e2_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_e1_211_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_211_);
v_e2_212_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_212_);
lean_dec_ref_known(v_x_66_, 2);
v___x_213_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_214_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_211_);
v___x_215_ = lean_string_append(v___x_213_, v___x_214_);
lean_dec_ref(v___x_214_);
v___x_216_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__18));
v___x_217_ = lean_string_append(v___x_215_, v___x_216_);
v___x_218_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_212_);
v___x_219_ = lean_string_append(v___x_217_, v___x_218_);
lean_dec_ref(v___x_218_);
v___x_220_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_221_ = lean_string_append(v___x_219_, v___x_220_);
return v___x_221_;
}
case 12:
{
lean_object* v_e1_222_; lean_object* v_e2_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_e1_222_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_222_);
v_e2_223_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_223_);
lean_dec_ref_known(v_x_66_, 2);
v___x_224_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_225_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_222_);
v___x_226_ = lean_string_append(v___x_224_, v___x_225_);
lean_dec_ref(v___x_225_);
v___x_227_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__19));
v___x_228_ = lean_string_append(v___x_226_, v___x_227_);
v___x_229_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_223_);
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
lean_dec_ref(v___x_229_);
v___x_231_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
return v___x_232_;
}
case 13:
{
lean_object* v_e1_233_; lean_object* v_e2_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_e1_233_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_233_);
v_e2_234_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_234_);
lean_dec_ref_known(v_x_66_, 2);
v___x_235_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_236_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_233_);
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
lean_dec_ref(v___x_236_);
v___x_238_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__20));
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
v___x_240_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_234_);
v___x_241_ = lean_string_append(v___x_239_, v___x_240_);
lean_dec_ref(v___x_240_);
v___x_242_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_243_ = lean_string_append(v___x_241_, v___x_242_);
return v___x_243_;
}
case 14:
{
lean_object* v_e1_244_; lean_object* v_e2_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_e1_244_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_244_);
v_e2_245_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_245_);
lean_dec_ref_known(v_x_66_, 2);
v___x_246_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_247_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_244_);
v___x_248_ = lean_string_append(v___x_246_, v___x_247_);
lean_dec_ref(v___x_247_);
v___x_249_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__21));
v___x_250_ = lean_string_append(v___x_248_, v___x_249_);
v___x_251_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_245_);
v___x_252_ = lean_string_append(v___x_250_, v___x_251_);
lean_dec_ref(v___x_251_);
v___x_253_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_254_ = lean_string_append(v___x_252_, v___x_253_);
return v___x_254_;
}
case 15:
{
lean_object* v_e1_255_; lean_object* v_e2_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v_e1_255_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_255_);
v_e2_256_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_256_);
lean_dec_ref_known(v_x_66_, 2);
v___x_257_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__22));
v___x_258_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_255_);
v___x_259_ = lean_string_append(v___x_257_, v___x_258_);
lean_dec_ref(v___x_258_);
v___x_260_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__7));
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
v___x_262_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_256_);
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
lean_dec_ref(v___x_262_);
v___x_264_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
return v___x_265_;
}
case 16:
{
lean_object* v_e1_266_; lean_object* v_e2_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_e1_266_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_266_);
v_e2_267_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_267_);
lean_dec_ref_known(v_x_66_, 2);
v___x_268_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__22));
v___x_269_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_266_);
v___x_270_ = lean_string_append(v___x_268_, v___x_269_);
lean_dec_ref(v___x_269_);
v___x_271_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__8));
v___x_272_ = lean_string_append(v___x_270_, v___x_271_);
v___x_273_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_267_);
v___x_274_ = lean_string_append(v___x_272_, v___x_273_);
lean_dec_ref(v___x_273_);
v___x_275_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_276_ = lean_string_append(v___x_274_, v___x_275_);
return v___x_276_;
}
case 17:
{
lean_object* v_e1_277_; lean_object* v_e2_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v_e1_277_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_277_);
v_e2_278_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_278_);
lean_dec_ref_known(v_x_66_, 2);
v___x_279_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__22));
v___x_280_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_277_);
v___x_281_ = lean_string_append(v___x_279_, v___x_280_);
lean_dec_ref(v___x_280_);
v___x_282_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__9));
v___x_283_ = lean_string_append(v___x_281_, v___x_282_);
v___x_284_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_278_);
v___x_285_ = lean_string_append(v___x_283_, v___x_284_);
lean_dec_ref(v___x_284_);
v___x_286_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_287_ = lean_string_append(v___x_285_, v___x_286_);
return v___x_287_;
}
case 18:
{
lean_object* v_e1_288_; lean_object* v_e2_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_e1_288_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_288_);
v_e2_289_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_289_);
lean_dec_ref_known(v_x_66_, 2);
v___x_290_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__22));
v___x_291_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_288_);
v___x_292_ = lean_string_append(v___x_290_, v___x_291_);
lean_dec_ref(v___x_291_);
v___x_293_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__15));
v___x_294_ = lean_string_append(v___x_292_, v___x_293_);
v___x_295_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_289_);
v___x_296_ = lean_string_append(v___x_294_, v___x_295_);
lean_dec_ref(v___x_295_);
v___x_297_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_298_ = lean_string_append(v___x_296_, v___x_297_);
return v___x_298_;
}
case 19:
{
lean_object* v_e1_299_; lean_object* v_e2_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v_e1_299_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_299_);
v_e2_300_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_300_);
lean_dec_ref_known(v_x_66_, 2);
v___x_301_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__22));
v___x_302_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_299_);
v___x_303_ = lean_string_append(v___x_301_, v___x_302_);
lean_dec_ref(v___x_302_);
v___x_304_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__16));
v___x_305_ = lean_string_append(v___x_303_, v___x_304_);
v___x_306_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_300_);
v___x_307_ = lean_string_append(v___x_305_, v___x_306_);
lean_dec_ref(v___x_306_);
v___x_308_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_309_ = lean_string_append(v___x_307_, v___x_308_);
return v___x_309_;
}
default: 
{
lean_object* v_e1_310_; lean_object* v_e2_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_e1_310_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_e1_310_);
v_e2_311_ = lean_ctor_get(v_x_66_, 1);
lean_inc_ref(v_e2_311_);
lean_dec_ref_known(v_x_66_, 2);
v___x_312_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__22));
v___x_313_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_310_);
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
lean_dec_ref(v___x_313_);
v___x_315_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__17));
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
v___x_317_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_311_);
v___x_318_ = lean_string_append(v___x_316_, v___x_317_);
lean_dec_ref(v___x_317_);
v___x_319_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_320_ = lean_string_append(v___x_318_, v___x_319_);
return v___x_320_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_renderProg(lean_object* v_indent_334_, lean_object* v_x_335_){
_start:
{
switch(lean_obj_tag(v_x_335_))
{
case 0:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__0));
v___x_337_ = lean_string_append(v_indent_334_, v___x_336_);
return v___x_337_;
}
case 1:
{
lean_object* v_v_338_; lean_object* v_e_339_; lean_object* v___x_340_; lean_object* v_lhs_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v_v_338_ = lean_ctor_get(v_x_335_, 0);
lean_inc(v_v_338_);
v_e_339_ = lean_ctor_get(v_x_335_, 1);
lean_inc_ref(v_e_339_);
lean_dec_ref_known(v_x_335_, 2);
v___x_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_340_, 0, v_v_338_);
v_lhs_341_ = lp_rv2pancake_Rv2Pancake_renderExp(v___x_340_);
v___x_342_ = lean_string_append(v_indent_334_, v_lhs_341_);
lean_dec_ref(v_lhs_341_);
v___x_343_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__1));
v___x_344_ = lean_string_append(v___x_342_, v___x_343_);
v___x_345_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e_339_);
v___x_346_ = lean_string_append(v___x_344_, v___x_345_);
lean_dec_ref(v___x_345_);
v___x_347_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__2));
v___x_348_ = lean_string_append(v___x_346_, v___x_347_);
return v___x_348_;
}
case 2:
{
lean_object* v_addr_349_; lean_object* v_val_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_addr_349_ = lean_ctor_get(v_x_335_, 0);
lean_inc_ref(v_addr_349_);
v_val_350_ = lean_ctor_get(v_x_335_, 1);
lean_inc_ref(v_val_350_);
lean_dec_ref_known(v_x_335_, 2);
v___x_351_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__3));
v___x_352_ = lean_string_append(v_indent_334_, v___x_351_);
v___x_353_ = lp_rv2pancake_Rv2Pancake_renderExp(v_addr_349_);
v___x_354_ = lean_string_append(v___x_352_, v___x_353_);
lean_dec_ref(v___x_353_);
v___x_355_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__4));
v___x_356_ = lean_string_append(v___x_354_, v___x_355_);
v___x_357_ = lp_rv2pancake_Rv2Pancake_renderExp(v_val_350_);
v___x_358_ = lean_string_append(v___x_356_, v___x_357_);
lean_dec_ref(v___x_357_);
v___x_359_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__2));
v___x_360_ = lean_string_append(v___x_358_, v___x_359_);
return v___x_360_;
}
case 3:
{
lean_object* v_p1_361_; lean_object* v_p2_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_p1_361_ = lean_ctor_get(v_x_335_, 0);
lean_inc(v_p1_361_);
v_p2_362_ = lean_ctor_get(v_x_335_, 1);
lean_inc(v_p2_362_);
lean_dec_ref_known(v_x_335_, 2);
lean_inc_ref(v_indent_334_);
v___x_363_ = lp_rv2pancake_Rv2Pancake_renderProg(v_indent_334_, v_p1_361_);
v___x_364_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_365_ = lean_string_append(v___x_363_, v___x_364_);
v___x_366_ = lp_rv2pancake_Rv2Pancake_renderProg(v_indent_334_, v_p2_362_);
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
lean_dec_ref(v___x_366_);
return v___x_367_;
}
case 4:
{
lean_object* v_cond_368_; lean_object* v_thenBr_369_; lean_object* v_elseBr_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_cond_368_ = lean_ctor_get(v_x_335_, 0);
lean_inc_ref(v_cond_368_);
v_thenBr_369_ = lean_ctor_get(v_x_335_, 1);
lean_inc(v_thenBr_369_);
v_elseBr_370_ = lean_ctor_get(v_x_335_, 2);
lean_inc(v_elseBr_370_);
lean_dec_ref_known(v_x_335_, 3);
v___x_371_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__6));
lean_inc_ref_n(v_indent_334_, 2);
v___x_372_ = lean_string_append(v_indent_334_, v___x_371_);
v___x_373_ = lp_rv2pancake_Rv2Pancake_renderExp(v_cond_368_);
v___x_374_ = lean_string_append(v___x_372_, v___x_373_);
lean_dec_ref(v___x_373_);
v___x_375_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__7));
v___x_376_ = lean_string_append(v___x_374_, v___x_375_);
v___x_377_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__8));
v___x_378_ = lean_string_append(v_indent_334_, v___x_377_);
lean_inc_ref(v___x_378_);
v___x_379_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_378_, v_thenBr_369_);
v___x_380_ = lean_string_append(v___x_376_, v___x_379_);
lean_dec_ref(v___x_379_);
v___x_381_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_382_ = lean_string_append(v___x_380_, v___x_381_);
v___x_383_ = lean_string_append(v___x_382_, v_indent_334_);
v___x_384_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__9));
v___x_385_ = lean_string_append(v___x_383_, v___x_384_);
v___x_386_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_378_, v_elseBr_370_);
v___x_387_ = lean_string_append(v___x_385_, v___x_386_);
lean_dec_ref(v___x_386_);
v___x_388_ = lean_string_append(v___x_387_, v___x_381_);
v___x_389_ = lean_string_append(v___x_388_, v_indent_334_);
lean_dec_ref(v_indent_334_);
v___x_390_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__10));
v___x_391_ = lean_string_append(v___x_389_, v___x_390_);
return v___x_391_;
}
default: 
{
lean_object* v_cond_392_; lean_object* v_body_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_cond_392_ = lean_ctor_get(v_x_335_, 0);
lean_inc_ref(v_cond_392_);
v_body_393_ = lean_ctor_get(v_x_335_, 1);
lean_inc(v_body_393_);
lean_dec_ref_known(v_x_335_, 2);
v___x_394_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__11));
lean_inc_ref_n(v_indent_334_, 2);
v___x_395_ = lean_string_append(v_indent_334_, v___x_394_);
v___x_396_ = lp_rv2pancake_Rv2Pancake_renderExp(v_cond_392_);
v___x_397_ = lean_string_append(v___x_395_, v___x_396_);
lean_dec_ref(v___x_396_);
v___x_398_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__12));
v___x_399_ = lean_string_append(v___x_397_, v___x_398_);
v___x_400_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__8));
v___x_401_ = lean_string_append(v_indent_334_, v___x_400_);
v___x_402_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_401_, v_body_393_);
v___x_403_ = lean_string_append(v___x_399_, v___x_402_);
lean_dec_ref(v___x_402_);
v___x_404_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_405_ = lean_string_append(v___x_403_, v___x_404_);
v___x_406_ = lean_string_append(v___x_405_, v_indent_334_);
lean_dec_ref(v_indent_334_);
v___x_407_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__10));
v___x_408_ = lean_string_append(v___x_406_, v___x_407_);
return v___x_408_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource(lean_object* v_prog_416_){
_start:
{
uint64_t v_entryPc_417_; lean_object* v_panAst_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v_entryPc_417_ = lean_ctor_get_uint64(v_prog_416_, sizeof(void*)*1);
v_panAst_418_ = lp_rv2pancake_Rv2Pancake_decompileProg(v_prog_416_);
v___x_419_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__0));
v___x_420_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__1));
v___x_421_ = lean_uint64_to_nat(v_entryPc_417_);
v___x_422_ = l_Nat_reprFast(v___x_421_);
v___x_423_ = lean_string_append(v___x_420_, v___x_422_);
lean_dec_ref(v___x_422_);
v___x_424_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__2));
v___x_425_ = lean_string_append(v___x_423_, v___x_424_);
v___x_426_ = lean_string_append(v___x_419_, v___x_425_);
lean_dec_ref(v___x_425_);
v___x_427_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__3));
v___x_428_ = lean_string_append(v___x_426_, v___x_427_);
v___x_429_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__4));
v___x_430_ = lean_string_append(v___x_428_, v___x_429_);
v___x_431_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__8));
v___x_432_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_431_, v_panAst_418_);
v___x_433_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_434_ = lean_string_append(v___x_432_, v___x_433_);
v___x_435_ = lean_string_append(v___x_430_, v___x_434_);
lean_dec_ref(v___x_434_);
v___x_436_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__5));
v___x_437_ = lean_string_append(v___x_435_, v___x_436_);
v___x_438_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__6));
v___x_439_ = lean_string_append(v___x_437_, v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_emitSuperblockSource(lean_object* v_k_443_, lean_object* v_prog_444_){
_start:
{
uint64_t v_entryPc_445_; lean_object* v_panAst_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_entryPc_445_ = lean_ctor_get_uint64(v_prog_444_, sizeof(void*)*1);
v_panAst_446_ = lp_rv2pancake_Rv2Pancake_decompileSuperblock(v_k_443_, v_prog_444_);
v___x_447_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__0));
v___x_448_ = l_Nat_reprFast(v_k_443_);
v___x_449_ = lean_string_append(v___x_447_, v___x_448_);
lean_dec_ref(v___x_448_);
v___x_450_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__1));
v___x_451_ = lean_string_append(v___x_449_, v___x_450_);
v___x_452_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitSuperblockSource___closed__2));
v___x_453_ = lean_string_append(v___x_451_, v___x_452_);
v___x_454_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__1));
v___x_455_ = lean_uint64_to_nat(v_entryPc_445_);
v___x_456_ = l_Nat_reprFast(v___x_455_);
v___x_457_ = lean_string_append(v___x_454_, v___x_456_);
lean_dec_ref(v___x_456_);
v___x_458_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__2));
v___x_459_ = lean_string_append(v___x_457_, v___x_458_);
v___x_460_ = lean_string_append(v___x_453_, v___x_459_);
lean_dec_ref(v___x_459_);
v___x_461_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__3));
v___x_462_ = lean_string_append(v___x_460_, v___x_461_);
v___x_463_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__4));
v___x_464_ = lean_string_append(v___x_462_, v___x_463_);
v___x_465_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__8));
v___x_466_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_465_, v_panAst_446_);
v___x_467_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_468_ = lean_string_append(v___x_466_, v___x_467_);
v___x_469_ = lean_string_append(v___x_464_, v___x_468_);
lean_dec_ref(v___x_468_);
v___x_470_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__5));
v___x_471_ = lean_string_append(v___x_469_, v___x_470_);
v___x_472_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__6));
v___x_473_ = lean_string_append(v___x_471_, v___x_472_);
return v___x_473_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_Equiv(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_ElfLoader(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Base_Lifter(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Base_BaseSound(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SafePass(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SymCheck(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_BlockFusion(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_IfElseRecon(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_WhileRecon(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_DeadRegElim(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Pipeline(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Spec_Equiv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Spec_ElfLoader(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Base_Lifter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Base_BaseSound(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_SafePass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_SymCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_BlockFusion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_IfElseRecon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_WhileRecon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_DeadRegElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
