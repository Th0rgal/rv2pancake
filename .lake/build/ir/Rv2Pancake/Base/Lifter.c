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
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__3_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__4_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5_value;
static lean_once_cell_t lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Base_baseLift___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Base_regExp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(8, 0, 0, 0, 0, 0, 0, 0)}};
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
v___x_19_ = 7;
v___x_20_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_20_, 0, v_e1_17_);
lean_ctor_set(v___x_20_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
case 1:
{
uint8_t v___x_21_; lean_object* v___x_22_; 
v___x_21_ = 8;
v___x_22_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_22_, 0, v_e1_17_);
lean_ctor_set(v___x_22_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_22_, sizeof(void*)*2, v___x_21_);
return v___x_22_;
}
case 2:
{
uint8_t v___x_23_; lean_object* v___x_24_; 
v___x_23_ = 9;
v___x_24_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_24_, 0, v_e1_17_);
lean_ctor_set(v___x_24_, 1, v_e2_18_);
lean_ctor_set_uint8(v___x_24_, sizeof(void*)*2, v___x_23_);
return v___x_24_;
}
default: 
{
uint8_t v___x_25_; uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_25_ = 7;
v___x_26_ = 9;
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
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_branchCondExp___boxed(lean_object* v_c_30_, lean_object* v_rs1_31_, lean_object* v_rs2_32_){
_start:
{
uint8_t v_c_boxed_33_; lean_object* v_res_34_; 
v_c_boxed_33_ = lean_unbox(v_c_30_);
v_res_34_ = lp_rv2pancake_Rv2Pancake_Base_branchCondExp(v_c_boxed_33_, v_rs1_31_, v_rs2_32_);
return v_res_34_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(10u);
v___x_36_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__0);
v___x_38_ = lean_unsigned_to_nat(33u);
v___x_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__5));
v___x_52_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__1);
v___x_53_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr(uint64_t v_addr_54_, lean_object* v_ins_55_){
_start:
{
switch(lean_obj_tag(v_ins_55_))
{
case 0:
{
uint8_t v_op_56_; lean_object* v_rd_57_; lean_object* v_rs1_58_; uint64_t v_imm_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v_valExp_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_op_56_ = lean_ctor_get_uint8(v_ins_55_, sizeof(void*)*2 + 8);
v_rd_57_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rd_57_);
v_rs1_58_ = lean_ctor_get(v_ins_55_, 1);
lean_inc(v_rs1_58_);
v_imm_59_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_55_, 2);
v___x_60_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_58_);
v___x_61_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_61_, 0, v_imm_59_);
v_valExp_62_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_valExp_62_, 0, v___x_60_);
lean_ctor_set(v_valExp_62_, 1, v___x_61_);
lean_ctor_set_uint8(v_valExp_62_, sizeof(void*)*2, v_op_56_);
v___x_63_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_57_, v_valExp_62_);
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = 4ULL;
v___x_66_ = lean_uint64_add(v_addr_54_, v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_67_, 0, v___x_66_);
v___x_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_64_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_63_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
return v___x_69_;
}
case 1:
{
uint8_t v_op_70_; lean_object* v_rd_71_; lean_object* v_rs1_72_; lean_object* v_rs2_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v_valExp_76_; lean_object* v___x_77_; lean_object* v___x_78_; uint64_t v___x_79_; uint64_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_op_70_ = lean_ctor_get_uint8(v_ins_55_, sizeof(void*)*3);
v_rd_71_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rd_71_);
v_rs1_72_ = lean_ctor_get(v_ins_55_, 1);
lean_inc(v_rs1_72_);
v_rs2_73_ = lean_ctor_get(v_ins_55_, 2);
lean_inc(v_rs2_73_);
lean_dec_ref_known(v_ins_55_, 3);
v___x_74_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_72_);
v___x_75_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs2_73_);
v_valExp_76_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_valExp_76_, 0, v___x_74_);
lean_ctor_set(v_valExp_76_, 1, v___x_75_);
lean_ctor_set_uint8(v_valExp_76_, sizeof(void*)*2, v_op_70_);
v___x_77_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_71_, v_valExp_76_);
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = 4ULL;
v___x_80_ = lean_uint64_add(v_addr_54_, v___x_79_);
v___x_81_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_81_, 0, v___x_80_);
v___x_82_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_78_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_77_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
return v___x_83_;
}
case 2:
{
lean_object* v_rd_84_; uint64_t v_imm20_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; uint64_t v___x_89_; uint64_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v_rd_84_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rd_84_);
v_imm20_85_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_55_, 1);
v___x_86_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_86_, 0, v_imm20_85_);
v___x_87_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_84_, v___x_86_);
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = 4ULL;
v___x_90_ = lean_uint64_add(v_addr_54_, v___x_89_);
v___x_91_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_91_, 0, v___x_90_);
v___x_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_88_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_87_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
return v___x_93_;
}
case 3:
{
lean_object* v_rd_94_; uint64_t v_imm20_95_; uint64_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; uint64_t v___x_100_; uint64_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_rd_94_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rd_94_);
v_imm20_95_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_55_, 1);
v___x_96_ = lean_uint64_add(v_addr_54_, v_imm20_95_);
v___x_97_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_97_, 0, v___x_96_);
v___x_98_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_94_, v___x_97_);
v___x_99_ = lean_unsigned_to_nat(0u);
v___x_100_ = 4ULL;
v___x_101_ = lean_uint64_add(v_addr_54_, v___x_100_);
v___x_102_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_102_, 0, v___x_101_);
v___x_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_99_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_98_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
return v___x_104_;
}
case 4:
{
lean_object* v_rd_105_; lean_object* v_rs1_106_; uint64_t v_offset_107_; uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v_addrExp_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint64_t v___x_115_; uint64_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_rd_105_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rd_105_);
v_rs1_106_ = lean_ctor_get(v_ins_55_, 1);
lean_inc(v_rs1_106_);
v_offset_107_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_55_, 2);
v___x_108_ = 0;
v___x_109_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_106_);
v___x_110_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_110_, 0, v_offset_107_);
v_addrExp_111_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_addrExp_111_, 0, v___x_109_);
lean_ctor_set(v_addrExp_111_, 1, v___x_110_);
lean_ctor_set_uint8(v_addrExp_111_, sizeof(void*)*2, v___x_108_);
v___x_112_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_112_, 0, v_addrExp_111_);
v___x_113_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_105_, v___x_112_);
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = 4ULL;
v___x_116_ = lean_uint64_add(v_addr_54_, v___x_115_);
v___x_117_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_117_, 0, v___x_116_);
v___x_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_114_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_113_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
return v___x_119_;
}
case 5:
{
lean_object* v_rs1_120_; lean_object* v_rs2_121_; uint64_t v_offset_122_; uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v_addrExp_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint64_t v___x_130_; uint64_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_rs1_120_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rs1_120_);
v_rs2_121_ = lean_ctor_get(v_ins_55_, 1);
lean_inc(v_rs2_121_);
v_offset_122_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_55_, 2);
v___x_123_ = 0;
v___x_124_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_120_);
v___x_125_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_125_, 0, v_offset_122_);
v_addrExp_126_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_addrExp_126_, 0, v___x_124_);
lean_ctor_set(v_addrExp_126_, 1, v___x_125_);
lean_ctor_set_uint8(v_addrExp_126_, sizeof(void*)*2, v___x_123_);
v___x_127_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs2_121_);
v___x_128_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_128_, 0, v_addrExp_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = 4ULL;
v___x_131_ = lean_uint64_add(v_addr_54_, v___x_130_);
v___x_132_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_132_, 0, v___x_131_);
v___x_133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_129_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_128_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
return v___x_134_;
}
case 6:
{
uint8_t v_cond_135_; lean_object* v_rs1_136_; lean_object* v_rs2_137_; uint64_t v_targetPc_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint64_t v___x_143_; uint64_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_cond_135_ = lean_ctor_get_uint8(v_ins_55_, sizeof(void*)*2 + 8);
v_rs1_136_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rs1_136_);
v_rs2_137_ = lean_ctor_get(v_ins_55_, 1);
lean_inc(v_rs2_137_);
v_targetPc_138_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_55_, 2);
v___x_139_ = lp_rv2pancake_Rv2Pancake_Base_branchCondExp(v_cond_135_, v_rs1_136_, v_rs2_137_);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_141_, 0, v_targetPc_138_);
v___x_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = 4ULL;
v___x_144_ = lean_uint64_add(v_addr_54_, v___x_143_);
v___x_145_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_145_, 0, v___x_144_);
v___x_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_140_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_147_, 0, v___x_139_);
lean_ctor_set(v___x_147_, 1, v___x_142_);
lean_ctor_set(v___x_147_, 2, v___x_146_);
return v___x_147_;
}
case 7:
{
lean_object* v_rd_148_; uint64_t v_targetPc_149_; uint64_t v___x_150_; uint64_t v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_rd_148_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rd_148_);
v_targetPc_149_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_55_, 1);
v___x_150_ = 4ULL;
v___x_151_ = lean_uint64_add(v_addr_54_, v___x_150_);
v___x_152_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_152_, 0, v___x_151_);
v___x_153_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_148_, v___x_152_);
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_155_, 0, v_targetPc_149_);
v___x_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_154_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v___x_157_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_153_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
return v___x_157_;
}
case 8:
{
lean_object* v_rd_158_; lean_object* v_rs1_159_; uint64_t v_offset_160_; uint8_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v_nextPcExp_164_; lean_object* v___x_165_; lean_object* v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_rd_158_ = lean_ctor_get(v_ins_55_, 0);
lean_inc(v_rd_158_);
v_rs1_159_ = lean_ctor_get(v_ins_55_, 1);
lean_inc(v_rs1_159_);
v_offset_160_ = lean_ctor_get_uint64(v_ins_55_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_55_, 2);
v___x_161_ = 0;
v___x_162_ = lp_rv2pancake_Rv2Pancake_Base_regExp(v_rs1_159_);
v___x_163_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_163_, 0, v_offset_160_);
v_nextPcExp_164_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_nextPcExp_164_, 0, v___x_162_);
lean_ctor_set(v_nextPcExp_164_, 1, v___x_163_);
lean_ctor_set_uint8(v_nextPcExp_164_, sizeof(void*)*2, v___x_161_);
v___x_165_ = lean_unsigned_to_nat(0u);
v___x_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v_nextPcExp_164_);
v___x_167_ = 4ULL;
v___x_168_ = lean_uint64_add(v_addr_54_, v___x_167_);
v___x_169_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_169_, 0, v___x_168_);
v___x_170_ = lp_rv2pancake_Rv2Pancake_Base_assignReg(v_rd_158_, v___x_169_);
v___x_171_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_166_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
return v___x_171_;
}
default: 
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6);
return v___x_172_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftInstr___boxed(lean_object* v_addr_173_, lean_object* v_ins_174_){
_start:
{
uint64_t v_addr_boxed_175_; lean_object* v_res_176_; 
v_addr_boxed_175_ = lean_unbox_uint64(v_addr_173_);
lean_dec_ref(v_addr_173_);
v_res_176_ = lp_rv2pancake_Rv2Pancake_Base_liftInstr(v_addr_boxed_175_, v_ins_174_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(lean_object* v_code_179_){
_start:
{
if (lean_obj_tag(v_code_179_) == 0)
{
lean_object* v___x_180_; 
v___x_180_ = lean_obj_once(&lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6, &lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6_once, _init_lp_rv2pancake_Rv2Pancake_Base_liftInstr___closed__6);
return v___x_180_;
}
else
{
lean_object* v_head_181_; lean_object* v_tail_182_; lean_object* v_fst_183_; lean_object* v_snd_184_; uint8_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; uint64_t v___x_188_; lean_object* v_cond_189_; uint64_t v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_head_181_ = lean_ctor_get(v_code_179_, 0);
lean_inc(v_head_181_);
v_tail_182_ = lean_ctor_get(v_code_179_, 1);
lean_inc(v_tail_182_);
lean_dec_ref_known(v_code_179_, 2);
v_fst_183_ = lean_ctor_get(v_head_181_, 0);
lean_inc(v_fst_183_);
v_snd_184_ = lean_ctor_get(v_head_181_, 1);
lean_inc(v_snd_184_);
lean_dec(v_head_181_);
v___x_185_ = 7;
v___x_186_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_liftCodeTable___closed__0));
v___x_187_ = lean_alloc_ctor(0, 0, 8);
v___x_188_ = lean_unbox_uint64(v_fst_183_);
lean_ctor_set_uint64(v___x_187_, 0, v___x_188_);
v_cond_189_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_cond_189_, 0, v___x_186_);
lean_ctor_set(v_cond_189_, 1, v___x_187_);
lean_ctor_set_uint8(v_cond_189_, sizeof(void*)*2, v___x_185_);
v___x_190_ = lean_unbox_uint64(v_fst_183_);
lean_dec(v_fst_183_);
v___x_191_ = lp_rv2pancake_Rv2Pancake_Base_liftInstr(v___x_190_, v_snd_184_);
v___x_192_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_tail_182_);
v___x_193_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_193_, 0, v_cond_189_);
lean_ctor_set(v___x_193_, 1, v___x_191_);
lean_ctor_set(v___x_193_, 2, v___x_192_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Base_baseLift(lean_object* v_prog_198_){
_start:
{
lean_object* v_code_199_; lean_object* v_loopCond_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_code_199_ = lean_ctor_get(v_prog_198_, 0);
lean_inc(v_code_199_);
lean_dec_ref(v_prog_198_);
v_loopCond_200_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Base_baseLift___closed__0));
v___x_201_ = lp_rv2pancake_Rv2Pancake_Base_liftCodeTable(v_code_199_);
v___x_202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_202_, 0, v_loopCond_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
return v___x_202_;
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
