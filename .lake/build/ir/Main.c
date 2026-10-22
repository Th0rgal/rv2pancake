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
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond;
uint8_t lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(lean_object*, lean_object*, uint64_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_emitPancakeSource(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progAluBasic;
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progSumLoop;
extern lean_object* lp_rv2pancake_Rv2Pancake_Tests_progFib10;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
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
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "\n--- Sample Decompiled Pancake Output (fib_10_mem) ---"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__4 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__4_value;
static lean_once_cell_t lp_rv2pancake_runSelfTestSuite___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_runSelfTestSuite___closed__5;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "  4. fib_10_mem     (expected 55): "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__6 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__6_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "FAIL"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__7 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__7_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PASS"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__8 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__8_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "  3. sum_1_to_10    (expected 55): "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__9 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__9_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "[rv2pancake] Round-trip self-test suite:"};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__10 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__10_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "  1. alu_basic      (expected 25): "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__11 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__11_value;
static const lean_string_object lp_rv2pancake_runSelfTestSuite___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "  2. branch_diamond (expected 42): "};
static const lean_object* lp_rv2pancake_runSelfTestSuite___closed__12 = (const lean_object*)&lp_rv2pancake_runSelfTestSuite___closed__12_value;
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
LEAN_EXPORT lean_object* lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0(lean_object* v_s_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_putStr_4_; lean_object* v___x_5_; 
v___x_3_ = lean_get_stdout();
v_putStr_4_ = lean_ctor_get(v___x_3_, 4);
lean_inc_ref(v_putStr_4_);
lean_dec_ref(v___x_3_);
v___x_5_ = lean_apply_2(v_putStr_4_, v_s_1_, lean_box(0));
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0___boxed(lean_object* v_s_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0(v_s_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(lean_object* v_s_9_){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = 10;
v___x_12_ = lean_string_push(v_s_9_, v___x_11_);
v___x_13_ = lp_rv2pancake_IO_print___at___00IO_println___at___00runSelfTestSuite_spec__0_spec__0(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0___boxed(lean_object* v_s_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v_s_14_);
return v_res_16_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__0(void){
_start:
{
uint64_t v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v_ok1_20_; 
v___x_17_ = 25ULL;
v___x_18_ = lean_unsigned_to_nat(10u);
v___x_19_ = lp_rv2pancake_Rv2Pancake_Tests_progAluBasic;
v_ok1_20_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(v___x_19_, v___x_18_, v___x_17_);
return v_ok1_20_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__1(void){
_start:
{
uint64_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v_ok2_24_; 
v___x_21_ = 42ULL;
v___x_22_ = lean_unsigned_to_nat(15u);
v___x_23_ = lp_rv2pancake_Rv2Pancake_Tests_progBranchDiamond;
v_ok2_24_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(v___x_23_, v___x_22_, v___x_21_);
return v_ok2_24_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__2(void){
_start:
{
uint64_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; uint8_t v_ok3_28_; 
v___x_25_ = 55ULL;
v___x_26_ = lean_unsigned_to_nat(80u);
v___x_27_ = lp_rv2pancake_Rv2Pancake_Tests_progSumLoop;
v_ok3_28_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(v___x_27_, v___x_26_, v___x_25_);
return v_ok3_28_;
}
}
static uint8_t _init_lp_rv2pancake_runSelfTestSuite___closed__3(void){
_start:
{
uint64_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v_ok4_32_; 
v___x_29_ = 55ULL;
v___x_30_ = lean_unsigned_to_nat(100u);
v___x_31_ = lp_rv2pancake_Rv2Pancake_Tests_progFib10;
v_ok4_32_ = lp_rv2pancake_Rv2Pancake_Tests_checkRoundTrip(v___x_31_, v___x_30_, v___x_29_);
return v_ok4_32_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___closed__5(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lp_rv2pancake_Rv2Pancake_Tests_progFib10;
v___x_35_ = lp_rv2pancake_Rv2Pancake_emitPancakeSource(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___boxed__const__1(void){
_start:
{
uint32_t v___x_43_; lean_object* v___x_44_; 
v___x_43_ = 1;
v___x_44_ = lean_box_uint32(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_lp_rv2pancake_runSelfTestSuite___boxed__const__2(void){
_start:
{
uint32_t v___x_45_; lean_object* v___x_46_; 
v___x_45_ = 0;
v___x_46_ = lean_box_uint32(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite(){
_start:
{
uint8_t v_ok1_51_; uint8_t v_ok2_52_; uint8_t v_ok3_53_; uint8_t v_ok4_54_; uint8_t v___y_56_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v___y_100_; lean_object* v___y_101_; lean_object* v___y_116_; lean_object* v___y_117_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_ok1_51_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__0, &lp_rv2pancake_runSelfTestSuite___closed__0_once, _init_lp_rv2pancake_runSelfTestSuite___closed__0);
v_ok2_52_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__1, &lp_rv2pancake_runSelfTestSuite___closed__1_once, _init_lp_rv2pancake_runSelfTestSuite___closed__1);
v_ok3_53_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__2, &lp_rv2pancake_runSelfTestSuite___closed__2_once, _init_lp_rv2pancake_runSelfTestSuite___closed__2);
v_ok4_54_ = lean_uint8_once(&lp_rv2pancake_runSelfTestSuite___closed__3, &lp_rv2pancake_runSelfTestSuite___closed__3_once, _init_lp_rv2pancake_runSelfTestSuite___closed__3);
v___x_131_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__10));
v___x_132_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_131_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v___x_133_; lean_object* v___y_135_; 
lean_dec_ref_known(v___x_132_, 1);
v___x_133_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__11));
if (v_ok1_51_ == 0)
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__7));
v___y_135_ = v___x_149_;
goto v___jp_134_;
}
else
{
lean_object* v___x_150_; 
v___x_150_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__8));
v___y_135_ = v___x_150_;
goto v___jp_134_;
}
v___jp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_string_append(v___x_133_, v___y_135_);
v___x_137_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_136_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_138_; 
lean_dec_ref_known(v___x_137_, 1);
v___x_138_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__12));
if (v_ok2_52_ == 0)
{
lean_object* v___x_139_; 
v___x_139_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__7));
v___y_116_ = v___x_138_;
v___y_117_ = v___x_139_;
goto v___jp_115_;
}
else
{
lean_object* v___x_140_; 
v___x_140_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__8));
v___y_116_ = v___x_138_;
v___y_117_ = v___x_140_;
goto v___jp_115_;
}
}
else
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_148_; 
v_a_141_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_148_ == 0)
{
v___x_143_ = v___x_137_;
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_137_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
v_a_151_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_132_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_132_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
v___jp_48_:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lp_rv2pancake_runSelfTestSuite___boxed__const__1;
v___x_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
v___jp_55_:
{
if (v___y_56_ == 0)
{
goto v___jp_48_;
}
else
{
if (v_ok3_53_ == 0)
{
goto v___jp_48_;
}
else
{
if (v_ok4_54_ == 0)
{
goto v___jp_48_;
}
else
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__4));
v___x_58_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_57_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref_known(v___x_58_, 1);
v___x_59_ = lean_obj_once(&lp_rv2pancake_runSelfTestSuite___closed__5, &lp_rv2pancake_runSelfTestSuite___closed__5_once, _init_lp_rv2pancake_runSelfTestSuite___closed__5);
v___x_60_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_59_);
if (lean_obj_tag(v___x_60_) == 0)
{
lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_68_; 
v_isSharedCheck_68_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_68_ == 0)
{
lean_object* v_unused_69_; 
v_unused_69_ = lean_ctor_get(v___x_60_, 0);
lean_dec(v_unused_69_);
v___x_62_ = v___x_60_;
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
else
{
lean_dec(v___x_60_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_64_ = lp_rv2pancake_runSelfTestSuite___boxed__const__2;
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 0, v___x_64_);
v___x_66_ = v___x_62_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
else
{
lean_object* v_a_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_77_; 
v_a_70_ = lean_ctor_get(v___x_60_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_77_ == 0)
{
v___x_72_ = v___x_60_;
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_a_70_);
lean_dec(v___x_60_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_a_70_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
}
else
{
lean_object* v_a_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_a_78_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v___x_58_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_a_78_);
lean_dec(v___x_58_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_a_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
}
}
}
v___jp_86_:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
lean_inc_ref(v___y_87_);
v___x_89_ = lean_string_append(v___y_87_, v___y_88_);
v___x_90_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_89_);
if (lean_obj_tag(v___x_90_) == 0)
{
lean_dec_ref_known(v___x_90_, 1);
if (v_ok1_51_ == 0)
{
v___y_56_ = v_ok1_51_;
goto v___jp_55_;
}
else
{
v___y_56_ = v_ok2_52_;
goto v___jp_55_;
}
}
else
{
lean_object* v_a_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_98_; 
v_a_91_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_98_ == 0)
{
v___x_93_ = v___x_90_;
v_isShared_94_ = v_isSharedCheck_98_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_a_91_);
lean_dec(v___x_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_98_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_96_; 
if (v_isShared_94_ == 0)
{
v___x_96_ = v___x_93_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_a_91_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
v___jp_99_:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_inc_ref(v___y_100_);
v___x_102_ = lean_string_append(v___y_100_, v___y_101_);
v___x_103_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_102_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v___x_104_; 
lean_dec_ref_known(v___x_103_, 1);
v___x_104_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__6));
if (v_ok4_54_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__7));
v___y_87_ = v___x_104_;
v___y_88_ = v___x_105_;
goto v___jp_86_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__8));
v___y_87_ = v___x_104_;
v___y_88_ = v___x_106_;
goto v___jp_86_;
}
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_a_107_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_103_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_103_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
v___jp_115_:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
lean_inc_ref(v___y_116_);
v___x_118_ = lean_string_append(v___y_116_, v___y_117_);
v___x_119_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_118_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v___x_120_; 
lean_dec_ref_known(v___x_119_, 1);
v___x_120_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__9));
if (v_ok3_53_ == 0)
{
lean_object* v___x_121_; 
v___x_121_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__7));
v___y_100_ = v___x_120_;
v___y_101_ = v___x_121_;
goto v___jp_99_;
}
else
{
lean_object* v___x_122_; 
v___x_122_ = ((lean_object*)(lp_rv2pancake_runSelfTestSuite___closed__8));
v___y_100_ = v___x_120_;
v___y_101_ = v___x_122_;
goto v___jp_99_;
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
v_a_123_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_119_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_119_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_runSelfTestSuite___boxed(lean_object* v_a_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = lp_rv2pancake_runSelfTestSuite();
return v_res_160_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_167_){
_start:
{
lean_object* v_inPath_190_; lean_object* v_outPath_191_; 
if (lean_obj_tag(v_args_167_) == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lp_rv2pancake_runSelfTestSuite();
return v___x_241_;
}
else
{
lean_object* v_head_242_; lean_object* v_tail_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v_head_242_ = lean_ctor_get(v_args_167_, 0);
lean_inc(v_head_242_);
v_tail_243_ = lean_ctor_get(v_args_167_, 1);
lean_inc(v_tail_243_);
lean_dec_ref_known(v_args_167_, 2);
v___x_244_ = ((lean_object*)(lp_rv2pancake_main___closed__4));
v___x_245_ = lean_string_dec_eq(v_head_242_, v___x_244_);
if (v___x_245_ == 0)
{
if (lean_obj_tag(v_tail_243_) == 0)
{
lean_object* v___x_246_; 
v___x_246_ = l_IO_FS_readBinFile(v_head_242_);
lean_dec(v_head_242_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
lean_inc(v_a_247_);
lean_dec_ref_known(v___x_246_, 1);
v___x_248_ = lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(v_a_247_);
lean_dec(v_a_247_);
v___x_249_ = lp_rv2pancake_Rv2Pancake_emitPancakeSource(v___x_248_);
v___x_250_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_249_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_258_; 
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_258_ == 0)
{
lean_object* v_unused_259_; 
v_unused_259_ = lean_ctor_get(v___x_250_, 0);
lean_dec(v_unused_259_);
v___x_252_ = v___x_250_;
v_isShared_253_ = v_isSharedCheck_258_;
goto v_resetjp_251_;
}
else
{
lean_dec(v___x_250_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_258_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_254_ = lp_rv2pancake_runSelfTestSuite___boxed__const__2;
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v___x_254_);
v___x_256_ = v___x_252_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
else
{
lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_267_; 
v_a_260_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_267_ == 0)
{
v___x_262_ = v___x_250_;
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v___x_250_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_a_260_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_246_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_246_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
else
{
lean_object* v_head_276_; lean_object* v_tail_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
v_head_276_ = lean_ctor_get(v_tail_243_, 0);
lean_inc(v_head_276_);
v_tail_277_ = lean_ctor_get(v_tail_243_, 1);
lean_inc(v_tail_277_);
lean_dec_ref_known(v_tail_243_, 2);
v___x_278_ = ((lean_object*)(lp_rv2pancake_main___closed__5));
v___x_279_ = lean_string_dec_eq(v_head_276_, v___x_278_);
lean_dec(v_head_276_);
if (v___x_279_ == 0)
{
lean_dec(v_tail_277_);
lean_dec(v_head_242_);
goto v___jp_169_;
}
else
{
if (lean_obj_tag(v_tail_277_) == 1)
{
lean_object* v_tail_280_; 
v_tail_280_ = lean_ctor_get(v_tail_277_, 1);
if (lean_obj_tag(v_tail_280_) == 0)
{
lean_object* v_head_281_; 
v_head_281_ = lean_ctor_get(v_tail_277_, 0);
lean_inc(v_head_281_);
lean_dec_ref_known(v_tail_277_, 2);
v_inPath_190_ = v_head_242_;
v_outPath_191_ = v_head_281_;
goto v___jp_189_;
}
else
{
lean_dec_ref_known(v_tail_277_, 2);
lean_dec(v_head_242_);
goto v___jp_169_;
}
}
else
{
lean_dec(v_tail_277_);
lean_dec(v_head_242_);
goto v___jp_169_;
}
}
}
}
else
{
lean_dec(v_head_242_);
if (lean_obj_tag(v_tail_243_) == 0)
{
lean_object* v___x_282_; 
v___x_282_ = lp_rv2pancake_runSelfTestSuite();
return v___x_282_;
}
else
{
lean_object* v_head_283_; lean_object* v_tail_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v_head_283_ = lean_ctor_get(v_tail_243_, 0);
lean_inc(v_head_283_);
v_tail_284_ = lean_ctor_get(v_tail_243_, 1);
lean_inc(v_tail_284_);
lean_dec_ref_known(v_tail_243_, 2);
v___x_285_ = ((lean_object*)(lp_rv2pancake_main___closed__5));
v___x_286_ = lean_string_dec_eq(v_head_283_, v___x_285_);
lean_dec(v_head_283_);
if (v___x_286_ == 0)
{
lean_dec(v_tail_284_);
goto v___jp_169_;
}
else
{
if (lean_obj_tag(v_tail_284_) == 1)
{
lean_object* v_tail_287_; 
v_tail_287_ = lean_ctor_get(v_tail_284_, 1);
if (lean_obj_tag(v_tail_287_) == 0)
{
lean_object* v_head_288_; 
v_head_288_ = lean_ctor_get(v_tail_284_, 0);
lean_inc(v_head_288_);
lean_dec_ref_known(v_tail_284_, 2);
v_inPath_190_ = v___x_244_;
v_outPath_191_ = v_head_288_;
goto v___jp_189_;
}
else
{
lean_dec_ref_known(v_tail_284_, 2);
goto v___jp_169_;
}
}
else
{
lean_dec(v_tail_284_);
goto v___jp_169_;
}
}
}
}
}
v___jp_169_:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = ((lean_object*)(lp_rv2pancake_main___closed__0));
v___x_171_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_170_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_179_; 
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; 
v_unused_180_ = lean_ctor_get(v___x_171_, 0);
lean_dec(v_unused_180_);
v___x_173_ = v___x_171_;
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
else
{
lean_dec(v___x_171_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_179_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = lp_rv2pancake_runSelfTestSuite___boxed__const__1;
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_175_);
v___x_177_ = v___x_173_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
v_a_181_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_171_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_171_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
v___jp_189_:
{
lean_object* v___x_192_; 
v___x_192_ = l_IO_FS_readBinFile(v_inPath_190_);
lean_dec_ref(v_inPath_190_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
lean_dec_ref_known(v___x_192_, 1);
v___x_194_ = lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(v_a_193_);
lean_dec(v_a_193_);
lean_inc_ref(v___x_194_);
v___x_195_ = lp_rv2pancake_Rv2Pancake_emitPancakeSource(v___x_194_);
v___x_196_ = l_IO_FS_writeFile(v_outPath_191_, v___x_195_);
lean_dec_ref(v___x_195_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_code_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec_ref_known(v___x_196_, 1);
v_code_197_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_code_197_);
lean_dec_ref(v___x_194_);
v___x_198_ = ((lean_object*)(lp_rv2pancake_main___closed__1));
v___x_199_ = lean_string_append(v___x_198_, v_outPath_191_);
lean_dec_ref(v_outPath_191_);
v___x_200_ = ((lean_object*)(lp_rv2pancake_main___closed__2));
v___x_201_ = lean_string_append(v___x_199_, v___x_200_);
v___x_202_ = l_List_lengthTR___redArg(v_code_197_);
lean_dec(v_code_197_);
v___x_203_ = l_Nat_reprFast(v___x_202_);
v___x_204_ = lean_string_append(v___x_201_, v___x_203_);
lean_dec_ref(v___x_203_);
v___x_205_ = ((lean_object*)(lp_rv2pancake_main___closed__3));
v___x_206_ = lean_string_append(v___x_204_, v___x_205_);
v___x_207_ = lp_rv2pancake_IO_println___at___00runSelfTestSuite_spec__0(v___x_206_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_215_; 
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_215_ == 0)
{
lean_object* v_unused_216_; 
v_unused_216_ = lean_ctor_get(v___x_207_, 0);
lean_dec(v_unused_216_);
v___x_209_ = v___x_207_;
v_isShared_210_ = v_isSharedCheck_215_;
goto v_resetjp_208_;
}
else
{
lean_dec(v___x_207_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_215_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_211_ = lp_rv2pancake_runSelfTestSuite___boxed__const__2;
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 0, v___x_211_);
v___x_213_ = v___x_209_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v_a_217_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_207_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_207_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec_ref(v___x_194_);
lean_dec_ref(v_outPath_191_);
v_a_225_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_196_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_196_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
lean_dec_ref(v_outPath_191_);
v_a_233_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_192_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_192_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_main___boxed(lean_object* v_args_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = _lean_main(v_args_289_);
return v_res_291_;
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
