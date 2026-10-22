// Lean compiler output
// Module: Rv2Pancake.Pipeline
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem public import Rv2Pancake.Spec.Equiv public import Rv2Pancake.Spec.ElfLoader public import Rv2Pancake.Base.Lifter public import Rv2Pancake.Base.BaseSound public import Rv2Pancake.Passes.SafePass public import Rv2Pancake.Passes.BlockFusion public import Rv2Pancake.Passes.IfElseRecon public import Rv2Pancake.Passes.WhileRecon public import Rv2Pancake.Passes.DeadRegElim
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
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass;
lean_object* lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(lean_object*, lean_object*);
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass;
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_whileReconPass;
extern lean_object* lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass;
lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_optimizeDispatcherBody(lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_decompileProg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_decompileProg___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_decompileProg___closed__0_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_decompileProg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_decompileProg___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_decompileProg___closed__1_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_decompileProg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_decompileProg___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_decompileProg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(8, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_decompileProg___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_decompileProg___closed__2_value;
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
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " & "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__9 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__9_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__10 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__10_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ^ "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__11 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__11_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " << "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__12 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__12_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " >>> "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__13 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__13_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " == "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__14 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__14_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " != "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__15 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__15_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_renderExp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " <+ "};
static const lean_object* lp_rv2pancake_Rv2Pancake_renderExp___closed__16 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_renderExp___closed__16_value;
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_optimizeDispatcherBody(lean_object* v_body_1_){
_start:
{
lean_object* v___x_2_; lean_object* v_b1_3_; lean_object* v___x_4_; lean_object* v_b2_5_; lean_object* v___x_6_; lean_object* v_b3_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_2_ = lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass;
v_b1_3_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_2_, v_body_1_);
v___x_4_ = lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass;
v_b2_5_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_4_, v_b1_3_);
v___x_6_ = lp_rv2pancake_Rv2Pancake_Passes_whileReconPass;
v_b3_7_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_6_, v_b2_5_);
v___x_8_ = lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass;
v___x_9_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v___x_8_, v_b3_7_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_decompileProg(lean_object* v_prog_18_){
_start:
{
lean_object* v_code_19_; lean_object* v_loopCond_20_; lean_object* v_rawBody_21_; lean_object* v_optBody_22_; lean_object* v___x_23_; 
v_code_19_ = lean_ctor_get(v_prog_18_, 0);
lean_inc(v_code_19_);
lean_dec_ref(v_prog_18_);
v_loopCond_20_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_decompileProg___closed__2));
v_rawBody_21_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_code_19_);
v_optBody_22_ = lp_rv2pancake_Rv2Pancake_optimizeDispatcherBody(v_rawBody_21_);
v___x_23_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_23_, 0, v_loopCond_20_);
lean_ctor_set(v___x_23_, 1, v_optBody_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_renderExp(lean_object* v_x_41_){
_start:
{
switch(lean_obj_tag(v_x_41_))
{
case 0:
{
uint64_t v_w_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_w_42_ = lean_ctor_get_uint64(v_x_41_, 0);
lean_dec_ref_known(v_x_41_, 0);
v___x_43_ = lean_uint64_to_nat(v_w_42_);
v___x_44_ = l_Nat_reprFast(v___x_43_);
return v___x_44_;
}
case 1:
{
lean_object* v_v_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v_v_45_ = lean_ctor_get(v_x_41_, 0);
lean_inc(v_v_45_);
lean_dec_ref_known(v_x_41_, 1);
v___x_46_ = lean_unsigned_to_nat(0u);
v___x_47_ = lean_nat_dec_eq(v_v_45_, v___x_46_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_48_ = lean_unsigned_to_nat(32u);
v___x_49_ = lean_nat_dec_eq(v_v_45_, v___x_48_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = lean_unsigned_to_nat(33u);
v___x_51_ = lean_nat_dec_eq(v_v_45_, v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__0));
v___x_53_ = l_Nat_reprFast(v_v_45_);
v___x_54_ = lean_string_append(v___x_52_, v___x_53_);
lean_dec_ref(v___x_53_);
return v___x_54_;
}
else
{
lean_object* v___x_55_; 
lean_dec(v_v_45_);
v___x_55_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__1));
return v___x_55_;
}
}
else
{
lean_object* v___x_56_; 
lean_dec(v_v_45_);
v___x_56_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__2));
return v___x_56_;
}
}
else
{
lean_object* v___x_57_; 
lean_dec(v_v_45_);
v___x_57_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__3));
return v___x_57_;
}
}
case 2:
{
lean_object* v_addr_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_addr_58_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_addr_58_);
lean_dec_ref_known(v_x_41_, 1);
v___x_59_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__4));
v___x_60_ = lp_rv2pancake_Rv2Pancake_renderExp(v_addr_58_);
v___x_61_ = lean_string_append(v___x_59_, v___x_60_);
lean_dec_ref(v___x_60_);
v___x_62_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_63_ = lean_string_append(v___x_61_, v___x_62_);
return v___x_63_;
}
default: 
{
uint8_t v_op_64_; 
v_op_64_ = lean_ctor_get_uint8(v_x_41_, sizeof(void*)*2);
switch(v_op_64_)
{
case 0:
{
lean_object* v_e1_65_; lean_object* v_e2_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_e1_65_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_65_);
v_e2_66_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_66_);
lean_dec_ref_known(v_x_41_, 2);
v___x_67_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_68_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_65_);
v___x_69_ = lean_string_append(v___x_67_, v___x_68_);
lean_dec_ref(v___x_68_);
v___x_70_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__7));
v___x_71_ = lean_string_append(v___x_69_, v___x_70_);
v___x_72_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_66_);
v___x_73_ = lean_string_append(v___x_71_, v___x_72_);
lean_dec_ref(v___x_72_);
v___x_74_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_75_ = lean_string_append(v___x_73_, v___x_74_);
return v___x_75_;
}
case 1:
{
lean_object* v_e1_76_; lean_object* v_e2_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_e1_76_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_76_);
v_e2_77_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_77_);
lean_dec_ref_known(v_x_41_, 2);
v___x_78_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_79_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_76_);
v___x_80_ = lean_string_append(v___x_78_, v___x_79_);
lean_dec_ref(v___x_79_);
v___x_81_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__8));
v___x_82_ = lean_string_append(v___x_80_, v___x_81_);
v___x_83_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_77_);
v___x_84_ = lean_string_append(v___x_82_, v___x_83_);
lean_dec_ref(v___x_83_);
v___x_85_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_86_ = lean_string_append(v___x_84_, v___x_85_);
return v___x_86_;
}
case 2:
{
lean_object* v_e1_87_; lean_object* v_e2_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_e1_87_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_87_);
v_e2_88_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_88_);
lean_dec_ref_known(v_x_41_, 2);
v___x_89_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_90_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_87_);
v___x_91_ = lean_string_append(v___x_89_, v___x_90_);
lean_dec_ref(v___x_90_);
v___x_92_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__9));
v___x_93_ = lean_string_append(v___x_91_, v___x_92_);
v___x_94_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_88_);
v___x_95_ = lean_string_append(v___x_93_, v___x_94_);
lean_dec_ref(v___x_94_);
v___x_96_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_97_ = lean_string_append(v___x_95_, v___x_96_);
return v___x_97_;
}
case 3:
{
lean_object* v_e1_98_; lean_object* v_e2_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_e1_98_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_98_);
v_e2_99_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_99_);
lean_dec_ref_known(v_x_41_, 2);
v___x_100_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_101_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_98_);
v___x_102_ = lean_string_append(v___x_100_, v___x_101_);
lean_dec_ref(v___x_101_);
v___x_103_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__10));
v___x_104_ = lean_string_append(v___x_102_, v___x_103_);
v___x_105_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_99_);
v___x_106_ = lean_string_append(v___x_104_, v___x_105_);
lean_dec_ref(v___x_105_);
v___x_107_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_108_ = lean_string_append(v___x_106_, v___x_107_);
return v___x_108_;
}
case 4:
{
lean_object* v_e1_109_; lean_object* v_e2_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_e1_109_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_109_);
v_e2_110_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_110_);
lean_dec_ref_known(v_x_41_, 2);
v___x_111_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_112_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_109_);
v___x_113_ = lean_string_append(v___x_111_, v___x_112_);
lean_dec_ref(v___x_112_);
v___x_114_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__11));
v___x_115_ = lean_string_append(v___x_113_, v___x_114_);
v___x_116_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_110_);
v___x_117_ = lean_string_append(v___x_115_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_118_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_119_ = lean_string_append(v___x_117_, v___x_118_);
return v___x_119_;
}
case 5:
{
lean_object* v_e1_120_; lean_object* v_e2_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_e1_120_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_120_);
v_e2_121_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_121_);
lean_dec_ref_known(v_x_41_, 2);
v___x_122_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_123_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_120_);
v___x_124_ = lean_string_append(v___x_122_, v___x_123_);
lean_dec_ref(v___x_123_);
v___x_125_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__12));
v___x_126_ = lean_string_append(v___x_124_, v___x_125_);
v___x_127_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_121_);
v___x_128_ = lean_string_append(v___x_126_, v___x_127_);
lean_dec_ref(v___x_127_);
v___x_129_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_130_ = lean_string_append(v___x_128_, v___x_129_);
return v___x_130_;
}
case 6:
{
lean_object* v_e1_131_; lean_object* v_e2_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_e1_131_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_131_);
v_e2_132_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_132_);
lean_dec_ref_known(v_x_41_, 2);
v___x_133_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_134_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_131_);
v___x_135_ = lean_string_append(v___x_133_, v___x_134_);
lean_dec_ref(v___x_134_);
v___x_136_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__13));
v___x_137_ = lean_string_append(v___x_135_, v___x_136_);
v___x_138_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_132_);
v___x_139_ = lean_string_append(v___x_137_, v___x_138_);
lean_dec_ref(v___x_138_);
v___x_140_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
return v___x_141_;
}
case 7:
{
lean_object* v_e1_142_; lean_object* v_e2_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_e1_142_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_142_);
v_e2_143_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_143_);
lean_dec_ref_known(v_x_41_, 2);
v___x_144_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_145_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_142_);
v___x_146_ = lean_string_append(v___x_144_, v___x_145_);
lean_dec_ref(v___x_145_);
v___x_147_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__14));
v___x_148_ = lean_string_append(v___x_146_, v___x_147_);
v___x_149_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_143_);
v___x_150_ = lean_string_append(v___x_148_, v___x_149_);
lean_dec_ref(v___x_149_);
v___x_151_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_152_ = lean_string_append(v___x_150_, v___x_151_);
return v___x_152_;
}
case 8:
{
lean_object* v_e1_153_; lean_object* v_e2_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_e1_153_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_153_);
v_e2_154_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_154_);
lean_dec_ref_known(v_x_41_, 2);
v___x_155_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_156_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_153_);
v___x_157_ = lean_string_append(v___x_155_, v___x_156_);
lean_dec_ref(v___x_156_);
v___x_158_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__15));
v___x_159_ = lean_string_append(v___x_157_, v___x_158_);
v___x_160_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_154_);
v___x_161_ = lean_string_append(v___x_159_, v___x_160_);
lean_dec_ref(v___x_160_);
v___x_162_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_163_ = lean_string_append(v___x_161_, v___x_162_);
return v___x_163_;
}
default: 
{
lean_object* v_e1_164_; lean_object* v_e2_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v_e1_164_ = lean_ctor_get(v_x_41_, 0);
lean_inc_ref(v_e1_164_);
v_e2_165_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_e2_165_);
lean_dec_ref_known(v_x_41_, 2);
v___x_166_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__6));
v___x_167_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e1_164_);
v___x_168_ = lean_string_append(v___x_166_, v___x_167_);
lean_dec_ref(v___x_167_);
v___x_169_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__16));
v___x_170_ = lean_string_append(v___x_168_, v___x_169_);
v___x_171_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e2_165_);
v___x_172_ = lean_string_append(v___x_170_, v___x_171_);
lean_dec_ref(v___x_171_);
v___x_173_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderExp___closed__5));
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
return v___x_174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_renderProg(lean_object* v_indent_188_, lean_object* v_x_189_){
_start:
{
switch(lean_obj_tag(v_x_189_))
{
case 0:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__0));
v___x_191_ = lean_string_append(v_indent_188_, v___x_190_);
return v___x_191_;
}
case 1:
{
lean_object* v_v_192_; lean_object* v_e_193_; lean_object* v___x_194_; lean_object* v_lhs_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_v_192_ = lean_ctor_get(v_x_189_, 0);
lean_inc(v_v_192_);
v_e_193_ = lean_ctor_get(v_x_189_, 1);
lean_inc_ref(v_e_193_);
lean_dec_ref_known(v_x_189_, 2);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v_v_192_);
v_lhs_195_ = lp_rv2pancake_Rv2Pancake_renderExp(v___x_194_);
v___x_196_ = lean_string_append(v_indent_188_, v_lhs_195_);
lean_dec_ref(v_lhs_195_);
v___x_197_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__1));
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
v___x_199_ = lp_rv2pancake_Rv2Pancake_renderExp(v_e_193_);
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
lean_dec_ref(v___x_199_);
v___x_201_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__2));
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
return v___x_202_;
}
case 2:
{
lean_object* v_addr_203_; lean_object* v_val_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_addr_203_ = lean_ctor_get(v_x_189_, 0);
lean_inc_ref(v_addr_203_);
v_val_204_ = lean_ctor_get(v_x_189_, 1);
lean_inc_ref(v_val_204_);
lean_dec_ref_known(v_x_189_, 2);
v___x_205_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__3));
v___x_206_ = lean_string_append(v_indent_188_, v___x_205_);
v___x_207_ = lp_rv2pancake_Rv2Pancake_renderExp(v_addr_203_);
v___x_208_ = lean_string_append(v___x_206_, v___x_207_);
lean_dec_ref(v___x_207_);
v___x_209_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__4));
v___x_210_ = lean_string_append(v___x_208_, v___x_209_);
v___x_211_ = lp_rv2pancake_Rv2Pancake_renderExp(v_val_204_);
v___x_212_ = lean_string_append(v___x_210_, v___x_211_);
lean_dec_ref(v___x_211_);
v___x_213_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__2));
v___x_214_ = lean_string_append(v___x_212_, v___x_213_);
return v___x_214_;
}
case 3:
{
lean_object* v_p1_215_; lean_object* v_p2_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_p1_215_ = lean_ctor_get(v_x_189_, 0);
lean_inc(v_p1_215_);
v_p2_216_ = lean_ctor_get(v_x_189_, 1);
lean_inc(v_p2_216_);
lean_dec_ref_known(v_x_189_, 2);
lean_inc_ref(v_indent_188_);
v___x_217_ = lp_rv2pancake_Rv2Pancake_renderProg(v_indent_188_, v_p1_215_);
v___x_218_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_219_ = lean_string_append(v___x_217_, v___x_218_);
v___x_220_ = lp_rv2pancake_Rv2Pancake_renderProg(v_indent_188_, v_p2_216_);
v___x_221_ = lean_string_append(v___x_219_, v___x_220_);
lean_dec_ref(v___x_220_);
return v___x_221_;
}
case 4:
{
lean_object* v_cond_222_; lean_object* v_thenBr_223_; lean_object* v_elseBr_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_cond_222_ = lean_ctor_get(v_x_189_, 0);
lean_inc_ref(v_cond_222_);
v_thenBr_223_ = lean_ctor_get(v_x_189_, 1);
lean_inc(v_thenBr_223_);
v_elseBr_224_ = lean_ctor_get(v_x_189_, 2);
lean_inc(v_elseBr_224_);
lean_dec_ref_known(v_x_189_, 3);
v___x_225_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__6));
lean_inc_ref_n(v_indent_188_, 2);
v___x_226_ = lean_string_append(v_indent_188_, v___x_225_);
v___x_227_ = lp_rv2pancake_Rv2Pancake_renderExp(v_cond_222_);
v___x_228_ = lean_string_append(v___x_226_, v___x_227_);
lean_dec_ref(v___x_227_);
v___x_229_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__7));
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
v___x_231_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__8));
v___x_232_ = lean_string_append(v_indent_188_, v___x_231_);
lean_inc_ref(v___x_232_);
v___x_233_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_232_, v_thenBr_223_);
v___x_234_ = lean_string_append(v___x_230_, v___x_233_);
lean_dec_ref(v___x_233_);
v___x_235_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_236_ = lean_string_append(v___x_234_, v___x_235_);
v___x_237_ = lean_string_append(v___x_236_, v_indent_188_);
v___x_238_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__9));
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
v___x_240_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_232_, v_elseBr_224_);
v___x_241_ = lean_string_append(v___x_239_, v___x_240_);
lean_dec_ref(v___x_240_);
v___x_242_ = lean_string_append(v___x_241_, v___x_235_);
v___x_243_ = lean_string_append(v___x_242_, v_indent_188_);
lean_dec_ref(v_indent_188_);
v___x_244_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__10));
v___x_245_ = lean_string_append(v___x_243_, v___x_244_);
return v___x_245_;
}
default: 
{
lean_object* v_cond_246_; lean_object* v_body_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v_cond_246_ = lean_ctor_get(v_x_189_, 0);
lean_inc_ref(v_cond_246_);
v_body_247_ = lean_ctor_get(v_x_189_, 1);
lean_inc(v_body_247_);
lean_dec_ref_known(v_x_189_, 2);
v___x_248_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__11));
lean_inc_ref_n(v_indent_188_, 2);
v___x_249_ = lean_string_append(v_indent_188_, v___x_248_);
v___x_250_ = lp_rv2pancake_Rv2Pancake_renderExp(v_cond_246_);
v___x_251_ = lean_string_append(v___x_249_, v___x_250_);
lean_dec_ref(v___x_250_);
v___x_252_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__12));
v___x_253_ = lean_string_append(v___x_251_, v___x_252_);
v___x_254_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__8));
v___x_255_ = lean_string_append(v_indent_188_, v___x_254_);
v___x_256_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_255_, v_body_247_);
v___x_257_ = lean_string_append(v___x_253_, v___x_256_);
lean_dec_ref(v___x_256_);
v___x_258_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_259_ = lean_string_append(v___x_257_, v___x_258_);
v___x_260_ = lean_string_append(v___x_259_, v_indent_188_);
lean_dec_ref(v_indent_188_);
v___x_261_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__10));
v___x_262_ = lean_string_append(v___x_260_, v___x_261_);
return v___x_262_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource(lean_object* v_prog_270_){
_start:
{
uint64_t v_entryPc_271_; lean_object* v_panAst_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_entryPc_271_ = lean_ctor_get_uint64(v_prog_270_, sizeof(void*)*1);
v_panAst_272_ = lp_rv2pancake_Rv2Pancake_decompileProg(v_prog_270_);
v___x_273_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__0));
v___x_274_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__1));
v___x_275_ = lean_uint64_to_nat(v_entryPc_271_);
v___x_276_ = l_Nat_reprFast(v___x_275_);
v___x_277_ = lean_string_append(v___x_274_, v___x_276_);
lean_dec_ref(v___x_276_);
v___x_278_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__2));
v___x_279_ = lean_string_append(v___x_277_, v___x_278_);
v___x_280_ = lean_string_append(v___x_273_, v___x_279_);
lean_dec_ref(v___x_279_);
v___x_281_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__3));
v___x_282_ = lean_string_append(v___x_280_, v___x_281_);
v___x_283_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__4));
v___x_284_ = lean_string_append(v___x_282_, v___x_283_);
v___x_285_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__8));
v___x_286_ = lp_rv2pancake_Rv2Pancake_renderProg(v___x_285_, v_panAst_272_);
v___x_287_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_renderProg___closed__5));
v___x_288_ = lean_string_append(v___x_286_, v___x_287_);
v___x_289_ = lean_string_append(v___x_284_, v___x_288_);
lean_dec_ref(v___x_288_);
v___x_290_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__5));
v___x_291_ = lean_string_append(v___x_289_, v___x_290_);
v___x_292_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_emitPancakeSource___closed__6));
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
return v___x_293_;
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
