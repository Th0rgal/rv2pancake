// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init public import Rv2Pancake public import Tests.RoundTripTest
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
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5;
lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource(lean_object*);
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic;
uint8_t lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Passes_seqRepeat(lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_superblockBody(lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_computeDQMetrics(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_astSize(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond;
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith;
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop;
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10;
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd;
lean_object* lp_rv2pancake_Rv2Pancake_emitSuperblockSource(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static const lean_string_object lp_rv2pancake_formatDQRow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "  | "};
static const lean_object* lp_rv2pancake_formatDQRow___closed__0 = (const lean_object*)&lp_rv2pancake_formatDQRow___closed__0_value;
static const lean_string_object lp_rv2pancake_formatDQRow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* lp_rv2pancake_formatDQRow___closed__1 = (const lean_object*)&lp_rv2pancake_formatDQRow___closed__1_value;
static const lean_string_object lp_rv2pancake_formatDQRow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -> "};
static const lean_object* lp_rv2pancake_formatDQRow___closed__2 = (const lean_object*)&lp_rv2pancake_formatDQRow___closed__2_value;
static const lean_string_object lp_rv2pancake_formatDQRow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "‰ |"};
static const lean_object* lp_rv2pancake_formatDQRow___closed__3 = (const lean_object*)&lp_rv2pancake_formatDQRow___closed__3_value;
static const lean_string_object lp_rv2pancake_formatDQRow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "FAIL"};
static const lean_object* lp_rv2pancake_formatDQRow___closed__4 = (const lean_object*)&lp_rv2pancake_formatDQRow___closed__4_value;
static const lean_string_object lp_rv2pancake_formatDQRow___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PASS"};
static const lean_object* lp_rv2pancake_formatDQRow___closed__5 = (const lean_object*)&lp_rv2pancake_formatDQRow___closed__5_value;
LEAN_EXPORT lean_object* lp_rv2pancake_formatDQRow(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* lp_rv2pancake_formatDQRow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_rv2pancake_runSelfTestSuite___closed__0;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_rv2pancake_runSelfTestSuite___closed__1;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_rv2pancake_runSelfTestSuite___closed__2;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_rv2pancake_runSelfTestSuite___closed__3;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_rv2pancake_runSelfTestSuite___closed__4;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_rv2pancake_runSelfTestSuite___closed__5;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_rv2pancake_runSelfTestSuite___closed__6;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "[rv2pancake v2.0] Maxwell Minimal-Spec + 4 Meta-Specs Verified Decompilation Suite:"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__7 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__7_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "  | Benchmark (Level) | MS1 Exec | Ret (a0) | AST Nodes (Raw->Opt) | PC Checks (Raw->Opt) | Zero-Adds (Raw->Opt) | DQ Score |"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__8 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__8_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "  |---|---|---|---|---|---|---|"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__9 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__9_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "N1a: alu_basic        "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__10 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__10_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__11;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "N1b: rv64im_mul_div_w "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__12 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__12_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__13;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "N2 : branch_diamond   "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__14 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__14_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__15;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "N3 : sum_loop_1_to_10 "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__16 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__16_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__17;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "N4 : fib_10_mem_ld_sd "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__18 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__18_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__19;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "N5 : call_stack_jalr  "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__20 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__20_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__21;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "SLV: silver_gcd_48_18 "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__22 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__22_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__23;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "\n--- Sample Superblock Decompiled Pancake Output (N1b: rv64im_mul_div_w, k=4) ---"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__24 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__24_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__25;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "--- Sample Decompiled Pancake Output (N5: call_stack_jalr) ---"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__26 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__26_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__27;
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite___boxed__const__1;
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite___boxed__const__2;
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite();
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite___boxed(lean_object*);
static const lean_string_object lp_rv2pancake_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Usage: rv2pancake [--self-test | <input.elf> [-o <output.pan>]]"};
static const lean_object* lp_rv2pancake_main___closed__0 = (const lean_object*)&lp_rv2pancake_main___closed__0_value;
static const lean_string_object lp_rv2pancake_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "[rv2pancake] Wrote verified Pancake program to "};
static const lean_object* lp_rv2pancake_main___closed__1 = (const lean_object*)&lp_rv2pancake_main___closed__1_value;
static const lean_string_object lp_rv2pancake_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* lp_rv2pancake_main___closed__2 = (const lean_object*)&lp_rv2pancake_main___closed__2_value;
static const lean_string_object lp_rv2pancake_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " instructions lifted)"};
static const lean_object* lp_rv2pancake_main___closed__3 = (const lean_object*)&lp_rv2pancake_main___closed__3_value;
static const lean_string_object lp_rv2pancake_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "--self-test"};
static const lean_object* lp_rv2pancake_main___closed__4 = (const lean_object*)&lp_rv2pancake_main___closed__4_value;
static const lean_string_object lp_rv2pancake_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* lp_rv2pancake_main___closed__5 = (const lean_object*)&lp_rv2pancake_main___closed__5_value;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_formatDQRow(lean_object* v_name_7_, lean_object* v_prog_8_, lean_object* v_k_9_, lean_object* v_fuel_10_, uint64_t v_expected_11_){
_start:
{
lean_object* v_code_12_; uint8_t v_ok_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v_rawProg_16_; lean_object* v_optProg_17_; lean_object* v_m_18_; lean_object* v_rawAstNodes_19_; lean_object* v_optAstNodes_20_; lean_object* v_optPcChecks_21_; lean_object* v_rawPcWrites_22_; lean_object* v_optPcWrites_23_; lean_object* v_rawZeroAdds_24_; lean_object* v_optZeroAdds_25_; lean_object* v___x_26_; lean_object* v_nBlocks_27_; lean_object* v___x_28_; lean_object* v_expandedRawChecks_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v_expandedRawAst_34_; lean_object* v___y_36_; lean_object* v___y_37_; lean_object* v___y_72_; lean_object* v___y_73_; lean_object* v___y_74_; lean_object* v___y_75_; lean_object* v___y_92_; lean_object* v___y_93_; lean_object* v___y_94_; lean_object* v___y_95_; lean_object* v___y_96_; lean_object* v___y_101_; lean_object* v___y_102_; lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_105_; lean_object* v___y_112_; lean_object* v___y_113_; lean_object* v___y_114_; lean_object* v___y_115_; lean_object* v___y_118_; lean_object* v___y_119_; lean_object* v___y_120_; lean_object* v___y_121_; lean_object* v___y_126_; uint8_t v___x_134_; 
v_code_12_ = lean_ctor_get(v_prog_8_, 0);
lean_inc_ref(v_prog_8_);
v_ok_13_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v_prog_8_, v_k_9_, v_fuel_10_, v_expected_11_);
v___x_14_ = l_List_lengthTR___redArg(v_code_12_);
lean_inc(v_code_12_);
v___x_15_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_code_12_);
lean_inc(v___x_15_);
v_rawProg_16_ = lp_rv2pancake_Rv2Pancake_Passes_seqRepeat(v_k_9_, v___x_15_);
v_optProg_17_ = lp_rv2pancake_Rv2Pancake_superblockBody(v_k_9_, v_prog_8_);
v_m_18_ = lp_rv2pancake_Rv2Pancake_Spec_computeDQMetrics(v_rawProg_16_, v_optProg_17_);
lean_dec(v_optProg_17_);
lean_dec(v_rawProg_16_);
v_rawAstNodes_19_ = lean_ctor_get(v_m_18_, 0);
lean_inc(v_rawAstNodes_19_);
v_optAstNodes_20_ = lean_ctor_get(v_m_18_, 1);
lean_inc(v_optAstNodes_20_);
v_optPcChecks_21_ = lean_ctor_get(v_m_18_, 3);
lean_inc(v_optPcChecks_21_);
v_rawPcWrites_22_ = lean_ctor_get(v_m_18_, 4);
lean_inc(v_rawPcWrites_22_);
v_optPcWrites_23_ = lean_ctor_get(v_m_18_, 5);
lean_inc(v_optPcWrites_23_);
v_rawZeroAdds_24_ = lean_ctor_get(v_m_18_, 6);
lean_inc(v_rawZeroAdds_24_);
v_optZeroAdds_25_ = lean_ctor_get(v_m_18_, 7);
lean_inc(v_optZeroAdds_25_);
lean_dec_ref(v_m_18_);
v___x_26_ = lean_unsigned_to_nat(1u);
v_nBlocks_27_ = lean_nat_add(v___x_14_, v___x_26_);
lean_dec(v___x_14_);
v___x_28_ = lean_nat_add(v_k_9_, v___x_26_);
v_expandedRawChecks_29_ = lean_nat_mul(v_nBlocks_27_, v___x_28_);
lean_dec(v___x_28_);
v___x_30_ = lean_nat_mul(v_nBlocks_27_, v_k_9_);
lean_dec(v_nBlocks_27_);
v___x_31_ = lp_rv2pancake_Rv2Pancake_Spec_astSize(v___x_15_);
lean_dec(v___x_15_);
v___x_32_ = lean_nat_mul(v___x_30_, v___x_31_);
lean_dec(v___x_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_nat_shiftr(v___x_32_, v___x_26_);
lean_dec(v___x_32_);
v_expandedRawAst_34_ = lean_nat_add(v_rawAstNodes_19_, v___x_33_);
lean_dec(v___x_33_);
lean_dec(v_rawAstNodes_19_);
v___x_134_ = lean_nat_dec_le(v_expandedRawChecks_29_, v_optPcChecks_21_);
if (v___x_134_ == 0)
{
lean_inc(v_optPcChecks_21_);
v___y_126_ = v_optPcChecks_21_;
goto v___jp_125_;
}
else
{
lean_inc(v_expandedRawChecks_29_);
v___y_126_ = v_expandedRawChecks_29_;
goto v___jp_125_;
}
v___jp_35_:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_38_ = ((lean_object*)(lp_rv2pancake_formatDQRow___closed__0));
v___x_39_ = lean_string_append(v___x_38_, v_name_7_);
v___x_40_ = ((lean_object*)(lp_rv2pancake_formatDQRow___closed__1));
v___x_41_ = lean_string_append(v___x_39_, v___x_40_);
v___x_42_ = lean_string_append(v___x_41_, v___y_37_);
v___x_43_ = lean_string_append(v___x_42_, v___x_40_);
v___x_44_ = lean_uint64_to_nat(v_expected_11_);
v___x_45_ = l_Nat_reprFast(v___x_44_);
v___x_46_ = lean_string_append(v___x_43_, v___x_45_);
lean_dec_ref(v___x_45_);
v___x_47_ = lean_string_append(v___x_46_, v___x_40_);
v___x_48_ = l_Nat_reprFast(v_expandedRawAst_34_);
v___x_49_ = lean_string_append(v___x_47_, v___x_48_);
lean_dec_ref(v___x_48_);
v___x_50_ = ((lean_object*)(lp_rv2pancake_formatDQRow___closed__2));
v___x_51_ = lean_string_append(v___x_49_, v___x_50_);
v___x_52_ = l_Nat_reprFast(v_optAstNodes_20_);
v___x_53_ = lean_string_append(v___x_51_, v___x_52_);
lean_dec_ref(v___x_52_);
v___x_54_ = lean_string_append(v___x_53_, v___x_40_);
v___x_55_ = l_Nat_reprFast(v_expandedRawChecks_29_);
v___x_56_ = lean_string_append(v___x_54_, v___x_55_);
lean_dec_ref(v___x_55_);
v___x_57_ = lean_string_append(v___x_56_, v___x_50_);
v___x_58_ = l_Nat_reprFast(v_optPcChecks_21_);
v___x_59_ = lean_string_append(v___x_57_, v___x_58_);
lean_dec_ref(v___x_58_);
v___x_60_ = lean_string_append(v___x_59_, v___x_40_);
v___x_61_ = l_Nat_reprFast(v_rawZeroAdds_24_);
v___x_62_ = lean_string_append(v___x_60_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = lean_string_append(v___x_62_, v___x_50_);
v___x_64_ = l_Nat_reprFast(v_optZeroAdds_25_);
v___x_65_ = lean_string_append(v___x_63_, v___x_64_);
lean_dec_ref(v___x_64_);
v___x_66_ = lean_string_append(v___x_65_, v___x_40_);
v___x_67_ = l_Nat_reprFast(v___y_36_);
v___x_68_ = lean_string_append(v___x_66_, v___x_67_);
lean_dec_ref(v___x_67_);
v___x_69_ = ((lean_object*)(lp_rv2pancake_formatDQRow___closed__3));
v___x_70_ = lean_string_append(v___x_68_, v___x_69_);
return v___x_70_;
}
v___jp_71_:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v_dqPermil_88_; 
v___x_76_ = lean_unsigned_to_nat(35u);
v___x_77_ = lean_nat_mul(v___x_76_, v___y_74_);
lean_dec(v___y_74_);
v___x_78_ = lean_unsigned_to_nat(30u);
v___x_79_ = lean_nat_mul(v___x_78_, v___y_73_);
lean_dec(v___y_73_);
v___x_80_ = lean_nat_add(v___x_77_, v___x_79_);
lean_dec(v___x_79_);
lean_dec(v___x_77_);
v___x_81_ = lean_unsigned_to_nat(20u);
v___x_82_ = lean_nat_mul(v___x_81_, v___y_75_);
lean_dec(v___y_75_);
v___x_83_ = lean_nat_add(v___x_80_, v___x_82_);
lean_dec(v___x_82_);
lean_dec(v___x_80_);
v___x_84_ = lean_unsigned_to_nat(15u);
v___x_85_ = lean_nat_mul(v___x_84_, v___y_72_);
lean_dec(v___y_72_);
v___x_86_ = lean_nat_add(v___x_83_, v___x_85_);
lean_dec(v___x_85_);
lean_dec(v___x_83_);
v___x_87_ = lean_unsigned_to_nat(100u);
v_dqPermil_88_ = lean_nat_div(v___x_86_, v___x_87_);
lean_dec(v___x_86_);
if (v_ok_13_ == 0)
{
lean_object* v___x_89_; 
v___x_89_ = ((lean_object*)(lp_rv2pancake_formatDQRow___closed__4));
v___y_36_ = v_dqPermil_88_;
v___y_37_ = v___x_89_;
goto v___jp_35_;
}
else
{
lean_object* v___x_90_; 
v___x_90_ = ((lean_object*)(lp_rv2pancake_formatDQRow___closed__5));
v___y_36_ = v_dqPermil_88_;
v___y_37_ = v___x_90_;
goto v___jp_35_;
}
}
v___jp_91_:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_nat_sub(v_rawPcWrites_22_, v___y_96_);
lean_dec(v___y_96_);
v___x_98_ = lean_nat_mul(v___x_97_, v___y_95_);
lean_dec(v___y_95_);
lean_dec(v___x_97_);
v___x_99_ = lean_nat_div(v___x_98_, v_rawPcWrites_22_);
lean_dec(v_rawPcWrites_22_);
lean_dec(v___x_98_);
v___y_72_ = v___y_92_;
v___y_73_ = v___y_93_;
v___y_74_ = v___y_94_;
v___y_75_ = v___x_99_;
goto v___jp_71_;
}
v___jp_100_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_astScore_108_; uint8_t v___x_109_; 
v___x_106_ = lean_nat_sub(v_expandedRawAst_34_, v___y_105_);
lean_dec(v___y_105_);
v___x_107_ = lean_nat_mul(v___x_106_, v___y_104_);
lean_dec(v___x_106_);
v_astScore_108_ = lean_nat_div(v___x_107_, v_expandedRawAst_34_);
lean_dec(v___x_107_);
v___x_109_ = lean_nat_dec_eq(v_rawPcWrites_22_, v___y_102_);
if (v___x_109_ == 0)
{
uint8_t v___x_110_; 
v___x_110_ = lean_nat_dec_le(v_rawPcWrites_22_, v_optPcWrites_23_);
if (v___x_110_ == 0)
{
v___y_92_ = v_astScore_108_;
v___y_93_ = v___y_101_;
v___y_94_ = v___y_103_;
v___y_95_ = v___y_104_;
v___y_96_ = v_optPcWrites_23_;
goto v___jp_91_;
}
else
{
lean_dec(v_optPcWrites_23_);
lean_inc(v_rawPcWrites_22_);
v___y_92_ = v_astScore_108_;
v___y_93_ = v___y_101_;
v___y_94_ = v___y_103_;
v___y_95_ = v___y_104_;
v___y_96_ = v_rawPcWrites_22_;
goto v___jp_91_;
}
}
else
{
lean_dec(v_optPcWrites_23_);
lean_dec(v_rawPcWrites_22_);
v___y_72_ = v_astScore_108_;
v___y_73_ = v___y_101_;
v___y_74_ = v___y_103_;
v___y_75_ = v___y_104_;
goto v___jp_71_;
}
}
v___jp_111_:
{
uint8_t v___x_116_; 
v___x_116_ = lean_nat_dec_le(v_expandedRawAst_34_, v_optAstNodes_20_);
if (v___x_116_ == 0)
{
lean_inc(v_optAstNodes_20_);
v___y_101_ = v___y_115_;
v___y_102_ = v___y_112_;
v___y_103_ = v___y_114_;
v___y_104_ = v___y_113_;
v___y_105_ = v_optAstNodes_20_;
goto v___jp_100_;
}
else
{
lean_inc(v_expandedRawAst_34_);
v___y_101_ = v___y_115_;
v___y_102_ = v___y_112_;
v___y_103_ = v___y_114_;
v___y_104_ = v___y_113_;
v___y_105_ = v_expandedRawAst_34_;
goto v___jp_100_;
}
}
v___jp_117_:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_122_ = lean_nat_sub(v_rawZeroAdds_24_, v___y_121_);
lean_dec(v___y_121_);
v___x_123_ = lean_nat_mul(v___x_122_, v___y_120_);
lean_dec(v___x_122_);
v___x_124_ = lean_nat_div(v___x_123_, v_rawZeroAdds_24_);
lean_dec(v___x_123_);
v___y_112_ = v___y_118_;
v___y_113_ = v___y_120_;
v___y_114_ = v___y_119_;
v___y_115_ = v___x_124_;
goto v___jp_111_;
}
v___jp_125_:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v_chkScore_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_127_ = lean_nat_sub(v_expandedRawChecks_29_, v___y_126_);
lean_dec(v___y_126_);
v___x_128_ = lean_unsigned_to_nat(1000u);
v___x_129_ = lean_nat_mul(v___x_127_, v___x_128_);
lean_dec(v___x_127_);
v_chkScore_130_ = lean_nat_div(v___x_129_, v_expandedRawChecks_29_);
lean_dec(v___x_129_);
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_nat_dec_eq(v_rawZeroAdds_24_, v___x_131_);
if (v___x_132_ == 0)
{
uint8_t v___x_133_; 
v___x_133_ = lean_nat_dec_le(v_rawZeroAdds_24_, v_optZeroAdds_25_);
if (v___x_133_ == 0)
{
lean_inc(v_optZeroAdds_25_);
v___y_118_ = v___x_131_;
v___y_119_ = v_chkScore_130_;
v___y_120_ = v___x_128_;
v___y_121_ = v_optZeroAdds_25_;
goto v___jp_117_;
}
else
{
lean_inc(v_rawZeroAdds_24_);
v___y_118_ = v___x_131_;
v___y_119_ = v_chkScore_130_;
v___y_120_ = v___x_128_;
v___y_121_ = v_rawZeroAdds_24_;
goto v___jp_117_;
}
}
else
{
v___y_112_ = v___x_131_;
v___y_113_ = v___x_128_;
v___y_114_ = v_chkScore_130_;
v___y_115_ = v___x_128_;
goto v___jp_111_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_formatDQRow___boxed(lean_object* v_name_135_, lean_object* v_prog_136_, lean_object* v_k_137_, lean_object* v_fuel_138_, lean_object* v_expected_139_){
_start:
{
uint64_t v_expected_boxed_140_; lean_object* v_res_141_; 
v_expected_boxed_140_ = lean_unbox_uint64(v_expected_139_);
lean_dec_ref(v_expected_139_);
v_res_141_ = lp_rv2pancake_formatDQRow(v_name_135_, v_prog_136_, v_k_137_, v_fuel_138_, v_expected_boxed_140_);
lean_dec(v_k_137_);
lean_dec_ref(v_name_135_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0(lean_object* v_s_142_){
_start:
{
lean_object* v___x_144_; lean_object* v_putStr_145_; lean_object* v___x_146_; 
v___x_144_ = lean_get_stdout();
v_putStr_145_ = lean_ctor_get(v___x_144_, 4);
lean_inc_ref(v_putStr_145_);
lean_dec_ref(v___x_144_);
v___x_146_ = lean_apply_2(v_putStr_145_, v_s_142_, lean_box(0));
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0___boxed(lean_object* v_s_147_, lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0(v_s_147_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(lean_object* v_s_150_){
_start:
{
uint32_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = 10;
v___x_153_ = lean_string_push(v_s_150_, v___x_152_);
v___x_154_ = lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0(v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0___boxed(lean_object* v_s_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v_s_155_);
return v_res_157_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__0(void){
_start:
{
uint64_t v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v_ok1_162_; 
v___x_158_ = 25ULL;
v___x_159_ = lean_unsigned_to_nat(10u);
v___x_160_ = lean_unsigned_to_nat(3u);
v___x_161_ = lp_rv2pancake_Rv2Pancake_Tests_progAluBasic;
v_ok1_162_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v___x_161_, v___x_160_, v___x_159_, v___x_158_);
return v_ok1_162_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__1(void){
_start:
{
uint64_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v_ok2_167_; 
v___x_163_ = 42ULL;
v___x_164_ = lean_unsigned_to_nat(15u);
v___x_165_ = lean_unsigned_to_nat(4u);
v___x_166_ = lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith;
v_ok2_167_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v___x_166_, v___x_165_, v___x_164_, v___x_163_);
return v_ok2_167_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__2(void){
_start:
{
uint64_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v_ok3_172_; 
v___x_168_ = 42ULL;
v___x_169_ = lean_unsigned_to_nat(15u);
v___x_170_ = lean_unsigned_to_nat(3u);
v___x_171_ = lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond;
v_ok3_172_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v___x_171_, v___x_170_, v___x_169_, v___x_168_);
return v_ok3_172_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__3(void){
_start:
{
uint64_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v_ok4_177_; 
v___x_173_ = 55ULL;
v___x_174_ = lean_unsigned_to_nat(80u);
v___x_175_ = lean_unsigned_to_nat(3u);
v___x_176_ = lp_rv2pancake_Rv2Pancake_Tests_progSumLoop;
v_ok4_177_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v___x_176_, v___x_175_, v___x_174_, v___x_173_);
return v_ok4_177_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__4(void){
_start:
{
uint64_t v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v_ok5_182_; 
v___x_178_ = 55ULL;
v___x_179_ = lean_unsigned_to_nat(100u);
v___x_180_ = lean_unsigned_to_nat(3u);
v___x_181_ = lp_rv2pancake_Rv2Pancake_Tests_progFib10;
v_ok5_182_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v___x_181_, v___x_180_, v___x_179_, v___x_178_);
return v_ok5_182_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__5(void){
_start:
{
uint64_t v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v_ok6_187_; 
v___x_183_ = 100ULL;
v___x_184_ = lean_unsigned_to_nat(30u);
v___x_185_ = lean_unsigned_to_nat(3u);
v___x_186_ = lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5;
v_ok6_187_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v___x_186_, v___x_185_, v___x_184_, v___x_183_);
return v_ok6_187_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__6(void){
_start:
{
uint64_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v_ok7_192_; 
v___x_188_ = 6ULL;
v___x_189_ = lean_unsigned_to_nat(40u);
v___x_190_ = lean_unsigned_to_nat(3u);
v___x_191_ = lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd;
v_ok7_192_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTripAndSuperblock(v___x_191_, v___x_190_, v___x_189_, v___x_188_);
return v_ok7_192_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__11(void){
_start:
{
uint64_t v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_197_ = 25ULL;
v___x_198_ = lean_unsigned_to_nat(10u);
v___x_199_ = lean_unsigned_to_nat(3u);
v___x_200_ = lp_rv2pancake_Rv2Pancake_Tests_progAluBasic;
v___x_201_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__10));
v___x_202_ = lp_rv2pancake_formatDQRow(v___x_201_, v___x_200_, v___x_199_, v___x_198_, v___x_197_);
return v___x_202_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__13(void){
_start:
{
uint64_t v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_204_ = 42ULL;
v___x_205_ = lean_unsigned_to_nat(15u);
v___x_206_ = lean_unsigned_to_nat(4u);
v___x_207_ = lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith;
v___x_208_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__12));
v___x_209_ = lp_rv2pancake_formatDQRow(v___x_208_, v___x_207_, v___x_206_, v___x_205_, v___x_204_);
return v___x_209_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__15(void){
_start:
{
uint64_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_211_ = 42ULL;
v___x_212_ = lean_unsigned_to_nat(15u);
v___x_213_ = lean_unsigned_to_nat(3u);
v___x_214_ = lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond;
v___x_215_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__14));
v___x_216_ = lp_rv2pancake_formatDQRow(v___x_215_, v___x_214_, v___x_213_, v___x_212_, v___x_211_);
return v___x_216_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__17(void){
_start:
{
uint64_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_218_ = 55ULL;
v___x_219_ = lean_unsigned_to_nat(80u);
v___x_220_ = lean_unsigned_to_nat(3u);
v___x_221_ = lp_rv2pancake_Rv2Pancake_Tests_progSumLoop;
v___x_222_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__16));
v___x_223_ = lp_rv2pancake_formatDQRow(v___x_222_, v___x_221_, v___x_220_, v___x_219_, v___x_218_);
return v___x_223_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__19(void){
_start:
{
uint64_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_225_ = 55ULL;
v___x_226_ = lean_unsigned_to_nat(100u);
v___x_227_ = lean_unsigned_to_nat(3u);
v___x_228_ = lp_rv2pancake_Rv2Pancake_Tests_progFib10;
v___x_229_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__18));
v___x_230_ = lp_rv2pancake_formatDQRow(v___x_229_, v___x_228_, v___x_227_, v___x_226_, v___x_225_);
return v___x_230_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__21(void){
_start:
{
uint64_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_232_ = 100ULL;
v___x_233_ = lean_unsigned_to_nat(30u);
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5;
v___x_236_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__20));
v___x_237_ = lp_rv2pancake_formatDQRow(v___x_236_, v___x_235_, v___x_234_, v___x_233_, v___x_232_);
return v___x_237_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__23(void){
_start:
{
uint64_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_239_ = 6ULL;
v___x_240_ = lean_unsigned_to_nat(40u);
v___x_241_ = lean_unsigned_to_nat(3u);
v___x_242_ = lp_rv2pancake_Rv2Pancake_Tests_progSilverGcd;
v___x_243_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__22));
v___x_244_ = lp_rv2pancake_formatDQRow(v___x_243_, v___x_242_, v___x_241_, v___x_240_, v___x_239_);
return v___x_244_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__25(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = lp_rv2pancake_Rv2Pancake_Tests_progRv64imArith;
v___x_247_ = lean_unsigned_to_nat(4u);
v___x_248_ = lp_rv2pancake_Rv2Pancake_emitSuperblockSource(v___x_247_, v___x_246_);
return v___x_248_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__27(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lp_rv2pancake_Rv2Pancake_Tests_progCallStackN5;
v___x_251_ = lp_rv2pancake_Rv2Pancake_emitPancakeSource(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___boxed__const__1(void){
_start:
{
uint32_t v___x_252_; lean_object* v___x_253_; 
v___x_252_ = 1;
v___x_253_ = lean_box_uint32(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___boxed__const__2(void){
_start:
{
uint32_t v___x_254_; lean_object* v___x_255_; 
v___x_254_ = 0;
v___x_255_ = lean_box_uint32(v___x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite(){
_start:
{
uint8_t v_ok1_257_; uint8_t v_ok2_258_; uint8_t v_ok3_259_; uint8_t v_ok4_260_; uint8_t v_ok5_261_; uint8_t v_ok6_262_; uint8_t v_ok7_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v_ok1_257_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__0, &lp_rv2pancake_runSelfTestSuite___closed__0_once, _init_lp_rv2pancake_runSelfTestSuite___closed__0);
v_ok2_258_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__1, &lp_rv2pancake_runSelfTestSuite___closed__1_once, _init_lp_rv2pancake_runSelfTestSuite___closed__1);
v_ok3_259_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__2, &lp_rv2pancake_runSelfTestSuite___closed__2_once, _init_lp_rv2pancake_runSelfTestSuite___closed__2);
v_ok4_260_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__3, &lp_rv2pancake_runSelfTestSuite___closed__3_once, _init_lp_rv2pancake_runSelfTestSuite___closed__3);
v_ok5_261_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__4, &lp_rv2pancake_runSelfTestSuite___closed__4_once, _init_lp_rv2pancake_runSelfTestSuite___closed__4);
v_ok6_262_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__5, &lp_rv2pancake_runSelfTestSuite___closed__5_once, _init_lp_rv2pancake_runSelfTestSuite___closed__5);
v_ok7_263_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__6, &lp_rv2pancake_runSelfTestSuite___closed__6_once, _init_lp_rv2pancake_runSelfTestSuite___closed__6);
v___x_264_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__7));
v___x_265_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_264_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; 
lean_dec_ref_known(v___x_265_, 1);
v___x_266_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__8));
v___x_267_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_266_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec_ref_known(v___x_267_, 1);
v___x_268_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__9));
v___x_269_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_268_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec_ref_known(v___x_269_, 1);
v___x_270_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__11, &lp_rv2pancake_runSelfTestSuite___closed__11_once, _init_lp_rv2pancake_runSelfTestSuite___closed__11);
v___x_271_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_270_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; 
lean_dec_ref_known(v___x_271_, 1);
v___x_272_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__13, &lp_rv2pancake_runSelfTestSuite___closed__13_once, _init_lp_rv2pancake_runSelfTestSuite___closed__13);
v___x_273_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_272_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v___x_274_; lean_object* v___x_275_; 
lean_dec_ref_known(v___x_273_, 1);
v___x_274_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__15, &lp_rv2pancake_runSelfTestSuite___closed__15_once, _init_lp_rv2pancake_runSelfTestSuite___closed__15);
v___x_275_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_274_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec_ref_known(v___x_275_, 1);
v___x_276_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__17, &lp_rv2pancake_runSelfTestSuite___closed__17_once, _init_lp_rv2pancake_runSelfTestSuite___closed__17);
v___x_277_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_276_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec_ref_known(v___x_277_, 1);
v___x_278_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__19, &lp_rv2pancake_runSelfTestSuite___closed__19_once, _init_lp_rv2pancake_runSelfTestSuite___closed__19);
v___x_279_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_278_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; 
lean_dec_ref_known(v___x_279_, 1);
v___x_280_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__21, &lp_rv2pancake_runSelfTestSuite___closed__21_once, _init_lp_rv2pancake_runSelfTestSuite___closed__21);
v___x_281_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_280_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec_ref_known(v___x_281_, 1);
v___x_282_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__23, &lp_rv2pancake_runSelfTestSuite___closed__23_once, _init_lp_rv2pancake_runSelfTestSuite___closed__23);
v___x_283_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_282_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_343_; 
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_343_ == 0)
{
lean_object* v_unused_344_; 
v_unused_344_ = lean_ctor_get(v___x_283_, 0);
lean_dec(v_unused_344_);
v___x_285_ = v___x_283_;
v_isShared_286_ = v_isSharedCheck_343_;
goto v_resetjp_284_;
}
else
{
lean_dec(v___x_283_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_343_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
uint8_t v___y_293_; 
if (v_ok1_257_ == 0)
{
v___y_293_ = v_ok1_257_;
goto v___jp_292_;
}
else
{
v___y_293_ = v_ok2_258_;
goto v___jp_292_;
}
v___jp_287_:
{
lean_object* v___x_288_; lean_object* v___x_290_; 
v___x_288_ = lp_rv2pancake_runSelfTestSuite___boxed__const__1;
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_288_);
v___x_290_ = v___x_285_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_288_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
v___jp_292_:
{
if (v___y_293_ == 0)
{
goto v___jp_287_;
}
else
{
if (v_ok3_259_ == 0)
{
goto v___jp_287_;
}
else
{
if (v_ok4_260_ == 0)
{
goto v___jp_287_;
}
else
{
if (v_ok5_261_ == 0)
{
goto v___jp_287_;
}
else
{
if (v_ok6_262_ == 0)
{
goto v___jp_287_;
}
else
{
if (v_ok7_263_ == 0)
{
goto v___jp_287_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; 
lean_del_object(v___x_285_);
v___x_294_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__24));
v___x_295_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec_ref_known(v___x_295_, 1);
v___x_296_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__25, &lp_rv2pancake_runSelfTestSuite___closed__25_once, _init_lp_rv2pancake_runSelfTestSuite___closed__25);
v___x_297_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_296_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; 
lean_dec_ref_known(v___x_297_, 1);
v___x_298_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__26));
v___x_299_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_298_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v___x_300_; lean_object* v___x_301_; 
lean_dec_ref_known(v___x_299_, 1);
v___x_300_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__27, &lp_rv2pancake_runSelfTestSuite___closed__27_once, _init_lp_rv2pancake_runSelfTestSuite___closed__27);
v___x_301_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_300_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_309_; 
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; 
v_unused_310_ = lean_ctor_get(v___x_301_, 0);
lean_dec(v_unused_310_);
v___x_303_ = v___x_301_;
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
else
{
lean_dec(v___x_301_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_305_ = lp_rv2pancake_runSelfTestSuite___boxed__const__2;
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_305_);
v___x_307_ = v___x_303_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
else
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
v_a_311_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_301_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_301_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
else
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
v_a_319_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_299_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_299_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
v_a_327_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_297_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_297_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
else
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
v_a_335_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_295_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_295_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
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
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_283_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_283_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
v_a_353_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_281_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_281_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
else
{
lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_368_; 
v_a_361_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_368_ == 0)
{
v___x_363_ = v___x_279_;
v_isShared_364_ = v_isSharedCheck_368_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_279_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_368_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_366_; 
if (v_isShared_364_ == 0)
{
v___x_366_ = v___x_363_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_a_361_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
else
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
v_a_369_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v___x_277_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_277_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_a_377_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_275_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_275_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
v_a_385_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_273_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_273_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
else
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_400_; 
v_a_393_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_400_ == 0)
{
v___x_395_ = v___x_271_;
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_271_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_396_ == 0)
{
v___x_398_ = v___x_395_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_a_393_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_a_401_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_269_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_269_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
v_a_409_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_267_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_267_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_265_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_265_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite___boxed(lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = lp_rv2pancake_runSelfTestSuite();
return v_res_426_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_433_){
_start:
{
lean_object* v_inPath_456_; lean_object* v_outPath_457_; 
if (lean_obj_tag(v_args_433_) == 0)
{
lean_object* v___x_507_; 
v___x_507_ = lp_rv2pancake_runSelfTestSuite();
return v___x_507_;
}
else
{
lean_object* v_head_508_; lean_object* v_tail_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v_head_508_ = lean_ctor_get(v_args_433_, 0);
lean_inc(v_head_508_);
v_tail_509_ = lean_ctor_get(v_args_433_, 1);
lean_inc(v_tail_509_);
lean_dec_ref_known(v_args_433_, 2);
v___x_510_ = ((lean_object*)(lp_rv2pancake_main___closed__4));
v___x_511_ = lean_string_dec_eq(v_head_508_, v___x_510_);
if (v___x_511_ == 0)
{
if (lean_obj_tag(v_tail_509_) == 0)
{
lean_object* v___x_512_; 
v___x_512_ = l_IO_FS_readBinFile(v_head_508_);
lean_dec(v_head_508_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___x_514_ = lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(v_a_513_);
lean_dec(v_a_513_);
v___x_515_ = lp_rv2pancake_Rv2Pancake_emitPancakeSource(v___x_514_);
v___x_516_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_524_; 
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_524_ == 0)
{
lean_object* v_unused_525_; 
v_unused_525_ = lean_ctor_get(v___x_516_, 0);
lean_dec(v_unused_525_);
v___x_518_ = v___x_516_;
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
else
{
lean_dec(v___x_516_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_520_ = lp_rv2pancake_runSelfTestSuite___boxed__const__2;
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_520_);
v___x_522_ = v___x_518_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_526_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_516_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_516_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
v_a_534_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_512_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_512_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
else
{
lean_object* v_head_542_; lean_object* v_tail_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v_head_542_ = lean_ctor_get(v_tail_509_, 0);
lean_inc(v_head_542_);
v_tail_543_ = lean_ctor_get(v_tail_509_, 1);
lean_inc(v_tail_543_);
lean_dec_ref_known(v_tail_509_, 2);
v___x_544_ = ((lean_object*)(lp_rv2pancake_main___closed__5));
v___x_545_ = lean_string_dec_eq(v_head_542_, v___x_544_);
lean_dec(v_head_542_);
if (v___x_545_ == 0)
{
lean_dec(v_tail_543_);
lean_dec(v_head_508_);
goto v___jp_435_;
}
else
{
if (lean_obj_tag(v_tail_543_) == 1)
{
lean_object* v_tail_546_; 
v_tail_546_ = lean_ctor_get(v_tail_543_, 1);
if (lean_obj_tag(v_tail_546_) == 0)
{
lean_object* v_head_547_; 
v_head_547_ = lean_ctor_get(v_tail_543_, 0);
lean_inc(v_head_547_);
lean_dec_ref_known(v_tail_543_, 2);
v_inPath_456_ = v_head_508_;
v_outPath_457_ = v_head_547_;
goto v___jp_455_;
}
else
{
lean_dec_ref_known(v_tail_543_, 2);
lean_dec(v_head_508_);
goto v___jp_435_;
}
}
else
{
lean_dec(v_tail_543_);
lean_dec(v_head_508_);
goto v___jp_435_;
}
}
}
}
else
{
lean_dec(v_head_508_);
if (lean_obj_tag(v_tail_509_) == 0)
{
lean_object* v___x_548_; 
v___x_548_ = lp_rv2pancake_runSelfTestSuite();
return v___x_548_;
}
else
{
lean_object* v_head_549_; lean_object* v_tail_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v_head_549_ = lean_ctor_get(v_tail_509_, 0);
lean_inc(v_head_549_);
v_tail_550_ = lean_ctor_get(v_tail_509_, 1);
lean_inc(v_tail_550_);
lean_dec_ref_known(v_tail_509_, 2);
v___x_551_ = ((lean_object*)(lp_rv2pancake_main___closed__5));
v___x_552_ = lean_string_dec_eq(v_head_549_, v___x_551_);
lean_dec(v_head_549_);
if (v___x_552_ == 0)
{
lean_dec(v_tail_550_);
goto v___jp_435_;
}
else
{
if (lean_obj_tag(v_tail_550_) == 1)
{
lean_object* v_tail_553_; 
v_tail_553_ = lean_ctor_get(v_tail_550_, 1);
if (lean_obj_tag(v_tail_553_) == 0)
{
lean_object* v_head_554_; 
v_head_554_ = lean_ctor_get(v_tail_550_, 0);
lean_inc(v_head_554_);
lean_dec_ref_known(v_tail_550_, 2);
v_inPath_456_ = v___x_510_;
v_outPath_457_ = v_head_554_;
goto v___jp_455_;
}
else
{
lean_dec_ref_known(v_tail_550_, 2);
goto v___jp_435_;
}
}
else
{
lean_dec(v_tail_550_);
goto v___jp_435_;
}
}
}
}
}
v___jp_435_:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = ((lean_object*)(lp_rv2pancake_main___closed__0));
v___x_437_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_436_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_445_; 
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_445_ == 0)
{
lean_object* v_unused_446_; 
v_unused_446_ = lean_ctor_get(v___x_437_, 0);
lean_dec(v_unused_446_);
v___x_439_ = v___x_437_;
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
else
{
lean_dec(v___x_437_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_441_ = lp_rv2pancake_runSelfTestSuite___boxed__const__1;
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_441_);
v___x_443_ = v___x_439_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
v_a_447_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_437_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_437_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
v___jp_455_:
{
lean_object* v___x_458_; 
v___x_458_ = l_IO_FS_readBinFile(v_inPath_456_);
lean_dec_ref(v_inPath_456_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(v_a_459_);
lean_dec(v_a_459_);
lean_inc_ref(v___x_460_);
v___x_461_ = lp_rv2pancake_Rv2Pancake_emitPancakeSource(v___x_460_);
v___x_462_ = l_IO_FS_writeFile(v_outPath_457_, v___x_461_);
lean_dec_ref(v___x_461_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_code_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec_ref_known(v___x_462_, 1);
v_code_463_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_code_463_);
lean_dec_ref(v___x_460_);
v___x_464_ = ((lean_object*)(lp_rv2pancake_main___closed__1));
v___x_465_ = lean_string_append(v___x_464_, v_outPath_457_);
lean_dec_ref(v_outPath_457_);
v___x_466_ = ((lean_object*)(lp_rv2pancake_main___closed__2));
v___x_467_ = lean_string_append(v___x_465_, v___x_466_);
v___x_468_ = l_List_lengthTR___redArg(v_code_463_);
lean_dec(v_code_463_);
v___x_469_ = l_Nat_reprFast(v___x_468_);
v___x_470_ = lean_string_append(v___x_467_, v___x_469_);
lean_dec_ref(v___x_469_);
v___x_471_ = ((lean_object*)(lp_rv2pancake_main___closed__3));
v___x_472_ = lean_string_append(v___x_470_, v___x_471_);
v___x_473_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_472_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_481_; 
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; 
v_unused_482_ = lean_ctor_get(v___x_473_, 0);
lean_dec(v_unused_482_);
v___x_475_ = v___x_473_;
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
else
{
lean_dec(v___x_473_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_477_ = lp_rv2pancake_runSelfTestSuite___boxed__const__2;
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_477_);
v___x_479_ = v___x_475_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
else
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
v_a_483_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_473_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_473_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec_ref(v___x_460_);
lean_dec_ref(v_outPath_457_);
v_a_491_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_462_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_462_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec_ref(v_outPath_457_);
v_a_499_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_458_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_458_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_main___boxed(lean_object* v_args_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = _lean_main(v_args_555_);
return v_res_557_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake(uint8_t builtin);
lean_object* initialize_rv2pancake_Tests_RoundTripTest(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Main(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Tests_RoundTripTest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_rv2pancake_runSelfTestSuite___boxed__const__1 = _init_lp_rv2pancake_runSelfTestSuite___boxed__const__1();
lean_mark_persistent(lp_rv2pancake_runSelfTestSuite___boxed__const__1);
lp_rv2pancake_runSelfTestSuite___boxed__const__2 = _init_lp_rv2pancake_runSelfTestSuite___boxed__const__2();
lean_mark_persistent(lp_rv2pancake_runSelfTestSuite___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_rv2pancake_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
