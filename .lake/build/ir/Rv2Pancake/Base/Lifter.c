// Lean compiler output
// Module: Rv2Pancake.Base.Lifter
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_regExp(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_assignReg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_branchCondExp(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_branchCondExp___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(254, 255, 255, 255, 255, 255, 255, 255)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_baseLift___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_baseLift___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_baseLift___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_baseLift(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_regExp(lean_object* v_r_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_unsigned_to_nat(0u);
v___x_5_ = lean_nat_dec_eq(v_r_3_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v_r_3_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; 
lean_dec(v_r_3_);
v___x_7_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0));
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_assignReg(lean_object* v_r_8_, lean_object* v_e_9_){
_start:
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_nat_dec_eq(v_r_8_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; 
v___x_12_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_12_, 0, v_r_8_);
lean_ctor_set(v___x_12_, 1, v_e_9_);
return v___x_12_;
}
else
{
lean_object* v___x_13_; 
lean_dec_ref(v_e_9_);
lean_dec(v_r_8_);
v___x_13_ = lean_box(0);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_branchCondExp(uint8_t v_c_14_, lean_object* v_rs1_15_, lean_object* v_rs2_16_){
_start:
{
lean_object* v_e1_17_; lean_object* v_e2_18_; 
v_e1_17_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_15_);
v_e2_18_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs2_16_);
switch(v_c_14_)
{
case 0:
{
uint8_t v___x_19_; lean_object* v___x_20_; 
v___x_19_ = 11;
v___x_20_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_20_, 0, v_e1_17_);
lean_ctor_set(v___x_20_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
case 1:
{
uint8_t v___x_21_; lean_object* v___x_22_; 
v___x_21_ = 12;
v___x_22_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_22_, 0, v_e1_17_);
lean_ctor_set(v___x_22_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_22_, sizeof(void*)*2, v___x_21_);
return v___x_22_;
}
case 2:
{
uint8_t v___x_23_; lean_object* v___x_24_; 
v___x_23_ = 13;
v___x_24_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_24_, 0, v_e1_17_);
lean_ctor_set(v___x_24_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_24_, sizeof(void*)*2, v___x_23_);
return v___x_24_;
}
case 3:
{
uint8_t v___x_25_; uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_25_ = 11;
v___x_26_ = 13;
v___x_27_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_27_, 0, v_e1_17_);
lean_ctor_set(v___x_27_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_27_, sizeof(void*)*2, v___x_26_);
v___x_28_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0));
v___x_29_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_29_, 0, v___x_27_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*2, v___x_25_);
return v___x_29_;
}
case 4:
{
uint8_t v___x_30_; lean_object* v___x_31_; 
v___x_30_ = 14;
v___x_31_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_31_, 0, v_e1_17_);
lean_ctor_set(v___x_31_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_31_, sizeof(void*)*2, v___x_30_);
return v___x_31_;
}
default: 
{
uint8_t v___x_32_; uint8_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_32_ = 11;
v___x_33_ = 14;
v___x_34_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_34_, 0, v_e1_17_);
lean_ctor_set(v___x_34_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_34_, sizeof(void*)*2, v___x_33_);
v___x_35_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0));
v___x_36_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_34_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_32_);
return v___x_36_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_branchCondExp___boxed(lean_object* v_c_37_, lean_object* v_rs1_38_, lean_object* v_rs2_39_){
_start:
{
uint8_t v_c_boxed_40_; lean_object* v_res_41_; 
v_c_boxed_40_ = lean_unbox(v_c_37_);
v_res_41_ = lp_rv2pancake_Rv2Pancake_Base_branchCondExp(v_c_boxed_40_, v_rs1_38_, v_rs2_39_);
return v_res_41_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_unsigned_to_nat(10u);
v___x_45_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1);
v___x_47_ = lean_unsigned_to_nat(33u);
v___x_48_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6));
v___x_61_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2);
v___x_62_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr(uint64_t v_addr_63_, lean_object* v_ins_64_){
_start:
{
switch(lean_obj_tag(v_ins_64_))
{
case 0:
{
uint8_t v_op_65_; lean_object* v_rd_66_; lean_object* v_rs1_67_; uint64_t v_imm_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v_valExp_71_; lean_object* v___x_72_; lean_object* v___x_73_; uint64_t v___x_74_; uint64_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_op_65_ = lean_ctor_get_uint8(v_ins_64_, sizeof(void*)*2 + 8);
v_rd_66_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rd_66_);
v_rs1_67_ = lean_ctor_get(v_ins_64_, 1);
lean_inc(v_rs1_67_);
v_imm_68_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_64_, 2);
v___x_69_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_67_);
v___x_70_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_70_, 0, v_imm_68_);
v_valExp_71_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_valExp_71_, 0, v___x_69_);
lean_ctor_set(v_valExp_71_, 1, v___x_70_);
lean_ctor_set_uint8(v_valExp_71_, sizeof(void*)*2, v_op_65_);
v___x_72_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_66_, v_valExp_71_);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = 4ULL;
v___x_75_ = lean_uint64_add(v_addr_63_, v___x_74_);
v___x_76_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_76_, 0, v___x_75_);
v___x_77_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_73_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_72_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
return v___x_78_;
}
case 1:
{
uint8_t v_op_79_; lean_object* v_rd_80_; lean_object* v_rs1_81_; lean_object* v_rs2_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_valExp_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint64_t v___x_88_; uint64_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v_op_79_ = lean_ctor_get_uint8(v_ins_64_, sizeof(void*)*3);
v_rd_80_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rd_80_);
v_rs1_81_ = lean_ctor_get(v_ins_64_, 1);
lean_inc(v_rs1_81_);
v_rs2_82_ = lean_ctor_get(v_ins_64_, 2);
lean_inc(v_rs2_82_);
lean_dec_ref_known(v_ins_64_, 3);
v___x_83_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_81_);
v___x_84_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs2_82_);
v_valExp_85_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_valExp_85_, 0, v___x_83_);
lean_ctor_set(v_valExp_85_, 1, v___x_84_);
lean_ctor_set_uint8(v_valExp_85_, sizeof(void*)*2, v_op_79_);
v___x_86_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_80_, v_valExp_85_);
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = 4ULL;
v___x_89_ = lean_uint64_add(v_addr_63_, v___x_88_);
v___x_90_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_90_, 0, v___x_89_);
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_87_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_86_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
return v___x_92_;
}
case 2:
{
lean_object* v_rd_93_; uint64_t v_imm20_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint64_t v___x_98_; uint64_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_rd_93_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rd_93_);
v_imm20_94_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_64_, 1);
v___x_95_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_95_, 0, v_imm20_94_);
v___x_96_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_93_, v___x_95_);
v___x_97_ = lean_unsigned_to_nat(0u);
v___x_98_ = 4ULL;
v___x_99_ = lean_uint64_add(v_addr_63_, v___x_98_);
v___x_100_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_100_, 0, v___x_99_);
v___x_101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_97_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v___x_102_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_96_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
return v___x_102_;
}
case 3:
{
lean_object* v_rd_103_; uint64_t v_imm20_104_; uint64_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint64_t v___x_109_; uint64_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_rd_103_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rd_103_);
v_imm20_104_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_64_, 1);
v___x_105_ = lean_uint64_add(v_addr_63_, v_imm20_104_);
v___x_106_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_106_, 0, v___x_105_);
v___x_107_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_103_, v___x_106_);
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = 4ULL;
v___x_110_ = lean_uint64_add(v_addr_63_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_111_, 0, v___x_110_);
v___x_112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_108_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_107_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
return v___x_113_;
}
case 4:
{
lean_object* v_rd_114_; lean_object* v_rs1_115_; uint64_t v_offset_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v_addrExp_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint64_t v___x_124_; uint64_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v_rd_114_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rd_114_);
v_rs1_115_ = lean_ctor_get(v_ins_64_, 1);
lean_inc(v_rs1_115_);
v_offset_116_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_64_, 2);
v___x_117_ = 0;
v___x_118_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_115_);
v___x_119_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_119_, 0, v_offset_116_);
v_addrExp_120_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_addrExp_120_, 0, v___x_118_);
lean_ctor_set(v_addrExp_120_, 1, v___x_119_);
lean_ctor_set_uint8(v_addrExp_120_, sizeof(void*)*2, v___x_117_);
v___x_121_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_121_, 0, v_addrExp_120_);
v___x_122_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_114_, v___x_121_);
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = 4ULL;
v___x_125_ = lean_uint64_add(v_addr_63_, v___x_124_);
v___x_126_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_126_, 0, v___x_125_);
v___x_127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_123_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_122_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
return v___x_128_;
}
case 5:
{
lean_object* v_rs1_129_; lean_object* v_rs2_130_; uint64_t v_offset_131_; uint8_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v_addrExp_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint64_t v___x_139_; uint64_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_rs1_129_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rs1_129_);
v_rs2_130_ = lean_ctor_get(v_ins_64_, 1);
lean_inc(v_rs2_130_);
v_offset_131_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_64_, 2);
v___x_132_ = 0;
v___x_133_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_129_);
v___x_134_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_134_, 0, v_offset_131_);
v_addrExp_135_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_addrExp_135_, 0, v___x_133_);
lean_ctor_set(v_addrExp_135_, 1, v___x_134_);
lean_ctor_set_uint8(v_addrExp_135_, sizeof(void*)*2, v___x_132_);
v___x_136_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs2_130_);
v___x_137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_137_, 0, v_addrExp_135_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = 4ULL;
v___x_140_ = lean_uint64_add(v_addr_63_, v___x_139_);
v___x_141_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_141_, 0, v___x_140_);
v___x_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_138_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_137_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
return v___x_143_;
}
case 6:
{
uint8_t v_cond_144_; lean_object* v_rs1_145_; lean_object* v_rs2_146_; uint64_t v_targetPc_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; uint64_t v___x_152_; uint64_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v_cond_144_ = lean_ctor_get_uint8(v_ins_64_, sizeof(void*)*2 + 8);
v_rs1_145_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rs1_145_);
v_rs2_146_ = lean_ctor_get(v_ins_64_, 1);
lean_inc(v_rs2_146_);
v_targetPc_147_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_64_, 2);
v___x_148_ = lp_rv2pancake_Rv2Pancake_Base_branchCondExp(v_cond_144_, v_rs1_145_, v_rs2_146_);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_150_, 0, v_targetPc_147_);
v___x_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = 4ULL;
v___x_153_ = lean_uint64_add(v_addr_63_, v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_154_, 0, v___x_153_);
v___x_155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_149_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_156_, 0, v___x_148_);
lean_ctor_set(v___x_156_, 1, v___x_151_);
lean_ctor_set(v___x_156_, 2, v___x_155_);
return v___x_156_;
}
case 7:
{
lean_object* v_rd_157_; uint64_t v_targetPc_158_; uint64_t v___x_159_; uint64_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v_rd_157_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rd_157_);
v_targetPc_158_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_64_, 1);
v___x_159_ = 4ULL;
v___x_160_ = lean_uint64_add(v_addr_63_, v___x_159_);
v___x_161_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_161_, 0, v___x_160_);
v___x_162_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_157_, v___x_161_);
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_164_, 0, v_targetPc_158_);
v___x_165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_163_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_162_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
return v___x_166_;
}
case 8:
{
lean_object* v_rd_167_; lean_object* v_rs1_168_; uint64_t v_offset_169_; uint8_t v___x_170_; uint8_t v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v_nextPcExp_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint64_t v___x_179_; uint64_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_rd_167_ = lean_ctor_get(v_ins_64_, 0);
lean_inc(v_rd_167_);
v_rs1_168_ = lean_ctor_get(v_ins_64_, 1);
lean_inc(v_rs1_168_);
v_offset_169_ = lean_ctor_get_uint64(v_ins_64_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_64_, 2);
v___x_170_ = 5;
v___x_171_ = 0;
v___x_172_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_168_);
v___x_173_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_173_, 0, v_offset_169_);
v___x_174_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
lean_ctor_set_uint8(v___x_174_, sizeof(void*)*2, v___x_171_);
v___x_175_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0));
v_nextPcExp_176_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_nextPcExp_176_, 0, v___x_174_);
lean_ctor_set(v_nextPcExp_176_, 1, v___x_175_);
lean_ctor_set_uint8(v_nextPcExp_176_, sizeof(void*)*2, v___x_170_);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v_nextPcExp_176_);
v___x_179_ = 4ULL;
v___x_180_ = lean_uint64_add(v_addr_63_, v___x_179_);
v___x_181_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_181_, 0, v___x_180_);
v___x_182_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_167_, v___x_181_);
v___x_183_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_178_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
return v___x_183_;
}
default: 
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7);
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___boxed(lean_object* v_addr_185_, lean_object* v_ins_186_){
_start:
{
uint64_t v_addr_boxed_187_; lean_object* v_res_188_; 
v_addr_boxed_187_ = lean_unbox_uint64(v_addr_185_);
lean_dec_ref(v_addr_185_);
v_res_188_ = lp_rv2pancake_Rv2Pancake_Base_liftInstr(v_addr_boxed_187_, v_ins_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(lean_object* v_code_191_){
_start:
{
if (lean_obj_tag(v_code_191_) == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__7);
return v___x_192_;
}
else
{
lean_object* v_head_193_; lean_object* v_tail_194_; lean_object* v_fst_195_; lean_object* v_snd_196_; uint8_t v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint64_t v___x_200_; lean_object* v_cond_201_; uint64_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v_head_193_ = lean_ctor_get(v_code_191_, 0);
lean_inc(v_head_193_);
v_tail_194_ = lean_ctor_get(v_code_191_, 1);
lean_inc(v_tail_194_);
lean_dec_ref_known(v_code_191_, 2);
v_fst_195_ = lean_ctor_get(v_head_193_, 0);
lean_inc(v_fst_195_);
v_snd_196_ = lean_ctor_get(v_head_193_, 1);
lean_inc(v_snd_196_);
lean_dec(v_head_193_);
v___x_197_ = 11;
v___x_198_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0));
v___x_199_ = lean_alloc_ctor(0, 0, 8);
v___x_200_ = lean_unbox_uint64(v_fst_195_);
lean_ctor_set_uint64(v___x_199_, 0, v___x_200_);
v_cond_201_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_cond_201_, 0, v___x_198_);
lean_ctor_set(v_cond_201_, 1, v___x_199_);
lean_ctor_set_uint8(v_cond_201_, sizeof(void*)*2, v___x_197_);
v___x_202_ = lean_unbox_uint64(v_fst_195_);
lean_dec(v_fst_195_);
v___x_203_ = lp_rv2pancake_Rv2Pancake_Base_liftInstr(v___x_202_, v_snd_196_);
v___x_204_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_tail_194_);
v___x_205_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_205_, 0, v_cond_201_);
lean_ctor_set(v___x_205_, 1, v___x_203_);
lean_ctor_set(v___x_205_, 2, v___x_204_);
return v___x_205_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_baseLift(lean_object* v_prog_210_){
_start:
{
lean_object* v_code_211_; lean_object* v_loopCond_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_code_211_ = lean_ctor_get(v_prog_210_, 0);
lean_inc(v_code_211_);
lean_dec_ref(v_prog_210_);
v_loopCond_212_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_baseLift___closed__0));
v___x_213_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_code_211_);
v___x_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_214_, 0, v_loopCond_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
return v___x_214_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Base_Lifter(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
