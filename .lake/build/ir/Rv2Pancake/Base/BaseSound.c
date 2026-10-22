// Lean compiler output
// Module: Rv2Pancake.Base.BaseSound
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem public import Rv2Pancake.Spec.Equiv public import Rv2Pancake.Base.Lifter public import Rv2Pancake.Passes.SafePass
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
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftInstr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftInstr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftCodeTable_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftCodeTable_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprRVInstr_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprRVInstr_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftInstr_match__1_splitter___redArg(lean_object* v_ins_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_, lean_object* v_h__3_4_, lean_object* v_h__4_5_, lean_object* v_h__5_6_, lean_object* v_h__6_7_, lean_object* v_h__7_8_, lean_object* v_h__8_9_, lean_object* v_h__9_10_, lean_object* v_h__10_11_){
_start:
{
switch(lean_obj_tag(v_ins_1_))
{
case 0:
{
uint8_t v_op_12_; lean_object* v_rd_13_; lean_object* v_rs1_14_; uint64_t v_imm_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
v_op_12_ = lean_ctor_get_uint8(v_ins_1_, sizeof(void*)*2 + 8);
v_rd_13_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rd_13_);
v_rs1_14_ = lean_ctor_get(v_ins_1_, 1);
lean_inc(v_rs1_14_);
v_imm_15_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1_, 2);
v___x_16_ = lean_box(v_op_12_);
v___x_17_ = lean_box_uint64(v_imm_15_);
v___x_18_ = lean_apply_4(v_h__1_2_, v___x_16_, v_rd_13_, v_rs1_14_, v___x_17_);
return v___x_18_;
}
case 1:
{
uint8_t v_op_19_; lean_object* v_rd_20_; lean_object* v_rs1_21_; lean_object* v_rs2_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__1_2_);
v_op_19_ = lean_ctor_get_uint8(v_ins_1_, sizeof(void*)*3);
v_rd_20_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rd_20_);
v_rs1_21_ = lean_ctor_get(v_ins_1_, 1);
lean_inc(v_rs1_21_);
v_rs2_22_ = lean_ctor_get(v_ins_1_, 2);
lean_inc(v_rs2_22_);
lean_dec_ref_known(v_ins_1_, 3);
v___x_23_ = lean_box(v_op_19_);
v___x_24_ = lean_apply_4(v_h__2_3_, v___x_23_, v_rd_20_, v_rs1_21_, v_rs2_22_);
return v___x_24_;
}
case 2:
{
lean_object* v_rd_25_; uint64_t v_imm20_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_rd_25_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rd_25_);
v_imm20_26_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1_, 1);
v___x_27_ = lean_box_uint64(v_imm20_26_);
v___x_28_ = lean_apply_2(v_h__3_4_, v_rd_25_, v___x_27_);
return v___x_28_;
}
case 3:
{
lean_object* v_rd_29_; uint64_t v_imm20_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_rd_29_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rd_29_);
v_imm20_30_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1_, 1);
v___x_31_ = lean_box_uint64(v_imm20_30_);
v___x_32_ = lean_apply_2(v_h__4_5_, v_rd_29_, v___x_31_);
return v___x_32_;
}
case 4:
{
lean_object* v_rd_33_; lean_object* v_rs1_34_; uint64_t v_offset_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_rd_33_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rd_33_);
v_rs1_34_ = lean_ctor_get(v_ins_1_, 1);
lean_inc(v_rs1_34_);
v_offset_35_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1_, 2);
v___x_36_ = lean_box_uint64(v_offset_35_);
v___x_37_ = lean_apply_3(v_h__5_6_, v_rd_33_, v_rs1_34_, v___x_36_);
return v___x_37_;
}
case 5:
{
lean_object* v_rs1_38_; lean_object* v_rs2_39_; uint64_t v_offset_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_rs1_38_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rs1_38_);
v_rs2_39_ = lean_ctor_get(v_ins_1_, 1);
lean_inc(v_rs2_39_);
v_offset_40_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1_, 2);
v___x_41_ = lean_box_uint64(v_offset_40_);
v___x_42_ = lean_apply_3(v_h__6_7_, v_rs1_38_, v_rs2_39_, v___x_41_);
return v___x_42_;
}
case 6:
{
uint8_t v_cond_43_; lean_object* v_rs1_44_; lean_object* v_rs2_45_; uint64_t v_targetPc_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_cond_43_ = lean_ctor_get_uint8(v_ins_1_, sizeof(void*)*2 + 8);
v_rs1_44_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rs1_44_);
v_rs2_45_ = lean_ctor_get(v_ins_1_, 1);
lean_inc(v_rs2_45_);
v_targetPc_46_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1_, 2);
v___x_47_ = lean_box(v_cond_43_);
v___x_48_ = lean_box_uint64(v_targetPc_46_);
v___x_49_ = lean_apply_4(v_h__7_8_, v___x_47_, v_rs1_44_, v_rs2_45_, v___x_48_);
return v___x_49_;
}
case 7:
{
lean_object* v_rd_50_; uint64_t v_targetPc_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__9_10_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_rd_50_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rd_50_);
v_targetPc_51_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_1_, 1);
v___x_52_ = lean_box_uint64(v_targetPc_51_);
v___x_53_ = lean_apply_2(v_h__8_9_, v_rd_50_, v___x_52_);
return v___x_53_;
}
case 8:
{
lean_object* v_rd_54_; lean_object* v_rs1_55_; uint64_t v_offset_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec(v_h__10_11_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_rd_54_ = lean_ctor_get(v_ins_1_, 0);
lean_inc(v_rd_54_);
v_rs1_55_ = lean_ctor_get(v_ins_1_, 1);
lean_inc(v_rs1_55_);
v_offset_56_ = lean_ctor_get_uint64(v_ins_1_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_1_, 2);
v___x_57_ = lean_box_uint64(v_offset_56_);
v___x_58_ = lean_apply_3(v_h__9_10_, v_rd_54_, v_rs1_55_, v___x_57_);
return v___x_58_;
}
default: 
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_h__9_10_);
lean_dec(v_h__8_9_);
lean_dec(v_h__7_8_);
lean_dec(v_h__6_7_);
lean_dec(v_h__5_6_);
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v___x_59_ = lean_box(0);
v___x_60_ = lean_apply_1(v_h__10_11_, v___x_59_);
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftInstr_match__1_splitter(lean_object* v_motive_61_, lean_object* v_ins_62_, lean_object* v_h__1_63_, lean_object* v_h__2_64_, lean_object* v_h__3_65_, lean_object* v_h__4_66_, lean_object* v_h__5_67_, lean_object* v_h__6_68_, lean_object* v_h__7_69_, lean_object* v_h__8_70_, lean_object* v_h__9_71_, lean_object* v_h__10_72_){
_start:
{
switch(lean_obj_tag(v_ins_62_))
{
case 0:
{
uint8_t v_op_73_; lean_object* v_rd_74_; lean_object* v_rs1_75_; uint64_t v_imm_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
v_op_73_ = lean_ctor_get_uint8(v_ins_62_, sizeof(void*)*2 + 8);
v_rd_74_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rd_74_);
v_rs1_75_ = lean_ctor_get(v_ins_62_, 1);
lean_inc(v_rs1_75_);
v_imm_76_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_62_, 2);
v___x_77_ = lean_box(v_op_73_);
v___x_78_ = lean_box_uint64(v_imm_76_);
v___x_79_ = lean_apply_4(v_h__1_63_, v___x_77_, v_rd_74_, v_rs1_75_, v___x_78_);
return v___x_79_;
}
case 1:
{
uint8_t v_op_80_; lean_object* v_rd_81_; lean_object* v_rs1_82_; lean_object* v_rs2_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__1_63_);
v_op_80_ = lean_ctor_get_uint8(v_ins_62_, sizeof(void*)*3);
v_rd_81_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rd_81_);
v_rs1_82_ = lean_ctor_get(v_ins_62_, 1);
lean_inc(v_rs1_82_);
v_rs2_83_ = lean_ctor_get(v_ins_62_, 2);
lean_inc(v_rs2_83_);
lean_dec_ref_known(v_ins_62_, 3);
v___x_84_ = lean_box(v_op_80_);
v___x_85_ = lean_apply_4(v_h__2_64_, v___x_84_, v_rd_81_, v_rs1_82_, v_rs2_83_);
return v___x_85_;
}
case 2:
{
lean_object* v_rd_86_; uint64_t v_imm20_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_rd_86_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rd_86_);
v_imm20_87_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_62_, 1);
v___x_88_ = lean_box_uint64(v_imm20_87_);
v___x_89_ = lean_apply_2(v_h__3_65_, v_rd_86_, v___x_88_);
return v___x_89_;
}
case 3:
{
lean_object* v_rd_90_; uint64_t v_imm20_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_rd_90_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rd_90_);
v_imm20_91_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_62_, 1);
v___x_92_ = lean_box_uint64(v_imm20_91_);
v___x_93_ = lean_apply_2(v_h__4_66_, v_rd_90_, v___x_92_);
return v___x_93_;
}
case 4:
{
lean_object* v_rd_94_; lean_object* v_rs1_95_; uint64_t v_offset_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_rd_94_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rd_94_);
v_rs1_95_ = lean_ctor_get(v_ins_62_, 1);
lean_inc(v_rs1_95_);
v_offset_96_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_62_, 2);
v___x_97_ = lean_box_uint64(v_offset_96_);
v___x_98_ = lean_apply_3(v_h__5_67_, v_rd_94_, v_rs1_95_, v___x_97_);
return v___x_98_;
}
case 5:
{
lean_object* v_rs1_99_; lean_object* v_rs2_100_; uint64_t v_offset_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_rs1_99_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rs1_99_);
v_rs2_100_ = lean_ctor_get(v_ins_62_, 1);
lean_inc(v_rs2_100_);
v_offset_101_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_62_, 2);
v___x_102_ = lean_box_uint64(v_offset_101_);
v___x_103_ = lean_apply_3(v_h__6_68_, v_rs1_99_, v_rs2_100_, v___x_102_);
return v___x_103_;
}
case 6:
{
uint8_t v_cond_104_; lean_object* v_rs1_105_; lean_object* v_rs2_106_; uint64_t v_targetPc_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_cond_104_ = lean_ctor_get_uint8(v_ins_62_, sizeof(void*)*2 + 8);
v_rs1_105_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rs1_105_);
v_rs2_106_ = lean_ctor_get(v_ins_62_, 1);
lean_inc(v_rs2_106_);
v_targetPc_107_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_62_, 2);
v___x_108_ = lean_box(v_cond_104_);
v___x_109_ = lean_box_uint64(v_targetPc_107_);
v___x_110_ = lean_apply_4(v_h__7_69_, v___x_108_, v_rs1_105_, v_rs2_106_, v___x_109_);
return v___x_110_;
}
case 7:
{
lean_object* v_rd_111_; uint64_t v_targetPc_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__9_71_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_rd_111_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rd_111_);
v_targetPc_112_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*1);
lean_dec_ref_known(v_ins_62_, 1);
v___x_113_ = lean_box_uint64(v_targetPc_112_);
v___x_114_ = lean_apply_2(v_h__8_70_, v_rd_111_, v___x_113_);
return v___x_114_;
}
case 8:
{
lean_object* v_rd_115_; lean_object* v_rs1_116_; uint64_t v_offset_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
lean_dec(v_h__10_72_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_rd_115_ = lean_ctor_get(v_ins_62_, 0);
lean_inc(v_rd_115_);
v_rs1_116_ = lean_ctor_get(v_ins_62_, 1);
lean_inc(v_rs1_116_);
v_offset_117_ = lean_ctor_get_uint64(v_ins_62_, sizeof(void*)*2);
lean_dec_ref_known(v_ins_62_, 2);
v___x_118_ = lean_box_uint64(v_offset_117_);
v___x_119_ = lean_apply_3(v_h__9_71_, v_rd_115_, v_rs1_116_, v___x_118_);
return v___x_119_;
}
default: 
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v_h__9_71_);
lean_dec(v_h__8_70_);
lean_dec(v_h__7_69_);
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v___x_120_ = lean_box(0);
v___x_121_ = lean_apply_1(v_h__10_72_, v___x_120_);
return v___x_121_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftCodeTable_match__1_splitter___redArg(lean_object* v_code_122_, lean_object* v_h__1_123_, lean_object* v_h__2_124_){
_start:
{
if (lean_obj_tag(v_code_122_) == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v_h__2_124_);
v___x_125_ = lean_box(0);
v___x_126_ = lean_apply_1(v_h__1_123_, v___x_125_);
return v___x_126_;
}
else
{
lean_object* v_head_127_; lean_object* v_tail_128_; lean_object* v_fst_129_; lean_object* v_snd_130_; lean_object* v___x_131_; 
lean_dec(v_h__1_123_);
v_head_127_ = lean_ctor_get(v_code_122_, 0);
lean_inc(v_head_127_);
v_tail_128_ = lean_ctor_get(v_code_122_, 1);
lean_inc(v_tail_128_);
lean_dec_ref_known(v_code_122_, 2);
v_fst_129_ = lean_ctor_get(v_head_127_, 0);
lean_inc(v_fst_129_);
v_snd_130_ = lean_ctor_get(v_head_127_, 1);
lean_inc(v_snd_130_);
lean_dec(v_head_127_);
v___x_131_ = lean_apply_3(v_h__2_124_, v_fst_129_, v_snd_130_, v_tail_128_);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Base_liftCodeTable_match__1_splitter(lean_object* v_motive_132_, lean_object* v_code_133_, lean_object* v_h__1_134_, lean_object* v_h__2_135_){
_start:
{
if (lean_obj_tag(v_code_133_) == 0)
{
lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec(v_h__2_135_);
v___x_136_ = lean_box(0);
v___x_137_ = lean_apply_1(v_h__1_134_, v___x_136_);
return v___x_137_;
}
else
{
lean_object* v_head_138_; lean_object* v_tail_139_; lean_object* v_fst_140_; lean_object* v_snd_141_; lean_object* v___x_142_; 
lean_dec(v_h__1_134_);
v_head_138_ = lean_ctor_get(v_code_133_, 0);
lean_inc(v_head_138_);
v_tail_139_ = lean_ctor_get(v_code_133_, 1);
lean_inc(v_tail_139_);
lean_dec_ref_known(v_code_133_, 2);
v_fst_140_ = lean_ctor_get(v_head_138_, 0);
lean_inc(v_fst_140_);
v_snd_141_ = lean_ctor_get(v_head_138_, 1);
lean_inc(v_snd_141_);
lean_dec(v_head_138_);
v___x_142_ = lean_apply_3(v_h__2_135_, v_fst_140_, v_snd_141_, v_tail_139_);
return v___x_142_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object* v_x_143_, lean_object* v_h__1_144_, lean_object* v_h__2_145_, lean_object* v_h__3_146_, lean_object* v_h__4_147_){
_start:
{
switch(lean_obj_tag(v_x_143_))
{
case 0:
{
uint64_t v_w_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
lean_dec(v_h__4_147_);
lean_dec(v_h__3_146_);
lean_dec(v_h__2_145_);
v_w_148_ = lean_ctor_get_uint64(v_x_143_, 0);
lean_dec_ref_known(v_x_143_, 0);
v___x_149_ = lean_box_uint64(v_w_148_);
v___x_150_ = lean_apply_1(v_h__1_144_, v___x_149_);
return v___x_150_;
}
case 1:
{
lean_object* v_v_151_; lean_object* v___x_152_; 
lean_dec(v_h__4_147_);
lean_dec(v_h__3_146_);
lean_dec(v_h__1_144_);
v_v_151_ = lean_ctor_get(v_x_143_, 0);
lean_inc(v_v_151_);
lean_dec_ref_known(v_x_143_, 1);
v___x_152_ = lean_apply_1(v_h__2_145_, v_v_151_);
return v___x_152_;
}
case 2:
{
lean_object* v_addr_153_; lean_object* v___x_154_; 
lean_dec(v_h__4_147_);
lean_dec(v_h__2_145_);
lean_dec(v_h__1_144_);
v_addr_153_ = lean_ctor_get(v_x_143_, 0);
lean_inc_ref(v_addr_153_);
lean_dec_ref_known(v_x_143_, 1);
v___x_154_ = lean_apply_1(v_h__3_146_, v_addr_153_);
return v___x_154_;
}
default: 
{
uint8_t v_op_155_; lean_object* v_e1_156_; lean_object* v_e2_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
lean_dec(v_h__3_146_);
lean_dec(v_h__2_145_);
lean_dec(v_h__1_144_);
v_op_155_ = lean_ctor_get_uint8(v_x_143_, sizeof(void*)*2);
v_e1_156_ = lean_ctor_get(v_x_143_, 0);
lean_inc_ref(v_e1_156_);
v_e2_157_ = lean_ctor_get(v_x_143_, 1);
lean_inc_ref(v_e2_157_);
lean_dec_ref_known(v_x_143_, 2);
v___x_158_ = lean_box(v_op_155_);
v___x_159_ = lean_apply_3(v_h__4_147_, v___x_158_, v_e1_156_, v_e2_157_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object* v_motive_160_, lean_object* v_x_161_, lean_object* v_h__1_162_, lean_object* v_h__2_163_, lean_object* v_h__3_164_, lean_object* v_h__4_165_){
_start:
{
switch(lean_obj_tag(v_x_161_))
{
case 0:
{
uint64_t v_w_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_dec(v_h__4_165_);
lean_dec(v_h__3_164_);
lean_dec(v_h__2_163_);
v_w_166_ = lean_ctor_get_uint64(v_x_161_, 0);
lean_dec_ref_known(v_x_161_, 0);
v___x_167_ = lean_box_uint64(v_w_166_);
v___x_168_ = lean_apply_1(v_h__1_162_, v___x_167_);
return v___x_168_;
}
case 1:
{
lean_object* v_v_169_; lean_object* v___x_170_; 
lean_dec(v_h__4_165_);
lean_dec(v_h__3_164_);
lean_dec(v_h__1_162_);
v_v_169_ = lean_ctor_get(v_x_161_, 0);
lean_inc(v_v_169_);
lean_dec_ref_known(v_x_161_, 1);
v___x_170_ = lean_apply_1(v_h__2_163_, v_v_169_);
return v___x_170_;
}
case 2:
{
lean_object* v_addr_171_; lean_object* v___x_172_; 
lean_dec(v_h__4_165_);
lean_dec(v_h__2_163_);
lean_dec(v_h__1_162_);
v_addr_171_ = lean_ctor_get(v_x_161_, 0);
lean_inc_ref(v_addr_171_);
lean_dec_ref_known(v_x_161_, 1);
v___x_172_ = lean_apply_1(v_h__3_164_, v_addr_171_);
return v___x_172_;
}
default: 
{
uint8_t v_op_173_; lean_object* v_e1_174_; lean_object* v_e2_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
lean_dec(v_h__3_164_);
lean_dec(v_h__2_163_);
lean_dec(v_h__1_162_);
v_op_173_ = lean_ctor_get_uint8(v_x_161_, sizeof(void*)*2);
v_e1_174_ = lean_ctor_get(v_x_161_, 0);
lean_inc_ref(v_e1_174_);
v_e2_175_ = lean_ctor_get(v_x_161_, 1);
lean_inc_ref(v_e2_175_);
lean_dec_ref_known(v_x_161_, 2);
v___x_176_ = lean_box(v_op_173_);
v___x_177_ = lean_apply_3(v_h__4_165_, v___x_176_, v_e1_174_, v_e2_175_);
return v___x_177_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(uint8_t v_x_178_, lean_object* v_h__1_179_, lean_object* v_h__2_180_, lean_object* v_h__3_181_, lean_object* v_h__4_182_, lean_object* v_h__5_183_, lean_object* v_h__6_184_, lean_object* v_h__7_185_, lean_object* v_h__8_186_, lean_object* v_h__9_187_, lean_object* v_h__10_188_){
_start:
{
switch(v_x_178_)
{
case 0:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
v___x_189_ = lean_box(0);
v___x_190_ = lean_apply_1(v_h__1_179_, v___x_189_);
return v___x_190_;
}
case 1:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__1_179_);
v___x_191_ = lean_box(0);
v___x_192_ = lean_apply_1(v_h__2_180_, v___x_191_);
return v___x_192_;
}
case 2:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_193_ = lean_box(0);
v___x_194_ = lean_apply_1(v_h__3_181_, v___x_193_);
return v___x_194_;
}
case 3:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_195_ = lean_box(0);
v___x_196_ = lean_apply_1(v_h__4_182_, v___x_195_);
return v___x_196_;
}
case 4:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_197_ = lean_box(0);
v___x_198_ = lean_apply_1(v_h__5_183_, v___x_197_);
return v___x_198_;
}
case 5:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_199_ = lean_box(0);
v___x_200_ = lean_apply_1(v_h__6_184_, v___x_199_);
return v___x_200_;
}
case 6:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_201_ = lean_box(0);
v___x_202_ = lean_apply_1(v_h__7_185_, v___x_201_);
return v___x_202_;
}
case 7:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_203_ = lean_box(0);
v___x_204_ = lean_apply_1(v_h__8_186_, v___x_203_);
return v___x_204_;
}
case 8:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
lean_dec(v_h__10_188_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_205_ = lean_box(0);
v___x_206_ = lean_apply_1(v_h__9_187_, v___x_205_);
return v___x_206_;
}
default: 
{
lean_object* v___x_207_; lean_object* v___x_208_; 
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_207_ = lean_box(0);
v___x_208_ = lean_apply_1(v_h__10_188_, v___x_207_);
return v___x_208_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg___boxed(lean_object* v_x_209_, lean_object* v_h__1_210_, lean_object* v_h__2_211_, lean_object* v_h__3_212_, lean_object* v_h__4_213_, lean_object* v_h__5_214_, lean_object* v_h__6_215_, lean_object* v_h__7_216_, lean_object* v_h__8_217_, lean_object* v_h__9_218_, lean_object* v_h__10_219_){
_start:
{
uint8_t v_x_96__boxed_220_; lean_object* v_res_221_; 
v_x_96__boxed_220_ = lean_unbox(v_x_209_);
v_res_221_ = lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(v_x_96__boxed_220_, v_h__1_210_, v_h__2_211_, v_h__3_212_, v_h__4_213_, v_h__5_214_, v_h__6_215_, v_h__7_216_, v_h__8_217_, v_h__9_218_, v_h__10_219_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(lean_object* v_motive_222_, uint8_t v_x_223_, lean_object* v_h__1_224_, lean_object* v_h__2_225_, lean_object* v_h__3_226_, lean_object* v_h__4_227_, lean_object* v_h__5_228_, lean_object* v_h__6_229_, lean_object* v_h__7_230_, lean_object* v_h__8_231_, lean_object* v_h__9_232_, lean_object* v_h__10_233_){
_start:
{
switch(v_x_223_)
{
case 0:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
v___x_234_ = lean_box(0);
v___x_235_ = lean_apply_1(v_h__1_224_, v___x_234_);
return v___x_235_;
}
case 1:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__1_224_);
v___x_236_ = lean_box(0);
v___x_237_ = lean_apply_1(v_h__2_225_, v___x_236_);
return v___x_237_;
}
case 2:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_apply_1(v_h__3_226_, v___x_238_);
return v___x_239_;
}
case 3:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_240_ = lean_box(0);
v___x_241_ = lean_apply_1(v_h__4_227_, v___x_240_);
return v___x_241_;
}
case 4:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_242_ = lean_box(0);
v___x_243_ = lean_apply_1(v_h__5_228_, v___x_242_);
return v___x_243_;
}
case 5:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_244_ = lean_box(0);
v___x_245_ = lean_apply_1(v_h__6_229_, v___x_244_);
return v___x_245_;
}
case 6:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_246_ = lean_box(0);
v___x_247_ = lean_apply_1(v_h__7_230_, v___x_246_);
return v___x_247_;
}
case 7:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__9_232_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_248_ = lean_box(0);
v___x_249_ = lean_apply_1(v_h__8_231_, v___x_248_);
return v___x_249_;
}
case 8:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v_h__10_233_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_250_ = lean_box(0);
v___x_251_ = lean_apply_1(v_h__9_232_, v___x_250_);
return v___x_251_;
}
default: 
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec(v_h__9_232_);
lean_dec(v_h__8_231_);
lean_dec(v_h__7_230_);
lean_dec(v_h__6_229_);
lean_dec(v_h__5_228_);
lean_dec(v_h__4_227_);
lean_dec(v_h__3_226_);
lean_dec(v_h__2_225_);
lean_dec(v_h__1_224_);
v___x_252_ = lean_box(0);
v___x_253_ = lean_apply_1(v_h__10_233_, v___x_252_);
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___boxed(lean_object* v_motive_254_, lean_object* v_x_255_, lean_object* v_h__1_256_, lean_object* v_h__2_257_, lean_object* v_h__3_258_, lean_object* v_h__4_259_, lean_object* v_h__5_260_, lean_object* v_h__6_261_, lean_object* v_h__7_262_, lean_object* v_h__8_263_, lean_object* v_h__9_264_, lean_object* v_h__10_265_){
_start:
{
uint8_t v_x_139__boxed_266_; lean_object* v_res_267_; 
v_x_139__boxed_266_ = lean_unbox(v_x_255_);
v_res_267_ = lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(v_motive_254_, v_x_139__boxed_266_, v_h__1_256_, v_h__2_257_, v_h__3_258_, v_h__4_259_, v_h__5_260_, v_h__6_261_, v_h__7_262_, v_h__8_263_, v_h__9_264_, v_h__10_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprRVInstr_repr_match__1_splitter___redArg(lean_object* v_x_268_, lean_object* v_h__1_269_, lean_object* v_h__2_270_, lean_object* v_h__3_271_, lean_object* v_h__4_272_, lean_object* v_h__5_273_, lean_object* v_h__6_274_, lean_object* v_h__7_275_, lean_object* v_h__8_276_, lean_object* v_h__9_277_, lean_object* v_h__10_278_){
_start:
{
switch(lean_obj_tag(v_x_268_))
{
case 0:
{
uint8_t v_op_279_; lean_object* v_rd_280_; lean_object* v_rs1_281_; uint64_t v_imm_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
v_op_279_ = lean_ctor_get_uint8(v_x_268_, sizeof(void*)*2 + 8);
v_rd_280_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rd_280_);
v_rs1_281_ = lean_ctor_get(v_x_268_, 1);
lean_inc(v_rs1_281_);
v_imm_282_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*2);
lean_dec_ref_known(v_x_268_, 2);
v___x_283_ = lean_box(v_op_279_);
v___x_284_ = lean_box_uint64(v_imm_282_);
v___x_285_ = lean_apply_4(v_h__1_269_, v___x_283_, v_rd_280_, v_rs1_281_, v___x_284_);
return v___x_285_;
}
case 1:
{
uint8_t v_op_286_; lean_object* v_rd_287_; lean_object* v_rs1_288_; lean_object* v_rs2_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__1_269_);
v_op_286_ = lean_ctor_get_uint8(v_x_268_, sizeof(void*)*3);
v_rd_287_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rd_287_);
v_rs1_288_ = lean_ctor_get(v_x_268_, 1);
lean_inc(v_rs1_288_);
v_rs2_289_ = lean_ctor_get(v_x_268_, 2);
lean_inc(v_rs2_289_);
lean_dec_ref_known(v_x_268_, 3);
v___x_290_ = lean_box(v_op_286_);
v___x_291_ = lean_apply_4(v_h__2_270_, v___x_290_, v_rd_287_, v_rs1_288_, v_rs2_289_);
return v___x_291_;
}
case 2:
{
lean_object* v_rd_292_; uint64_t v_imm20_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v_rd_292_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rd_292_);
v_imm20_293_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*1);
lean_dec_ref_known(v_x_268_, 1);
v___x_294_ = lean_box_uint64(v_imm20_293_);
v___x_295_ = lean_apply_2(v_h__3_271_, v_rd_292_, v___x_294_);
return v___x_295_;
}
case 3:
{
lean_object* v_rd_296_; uint64_t v_imm20_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v_rd_296_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rd_296_);
v_imm20_297_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*1);
lean_dec_ref_known(v_x_268_, 1);
v___x_298_ = lean_box_uint64(v_imm20_297_);
v___x_299_ = lean_apply_2(v_h__4_272_, v_rd_296_, v___x_298_);
return v___x_299_;
}
case 4:
{
lean_object* v_rd_300_; lean_object* v_rs1_301_; uint64_t v_offset_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v_rd_300_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rd_300_);
v_rs1_301_ = lean_ctor_get(v_x_268_, 1);
lean_inc(v_rs1_301_);
v_offset_302_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*2);
lean_dec_ref_known(v_x_268_, 2);
v___x_303_ = lean_box_uint64(v_offset_302_);
v___x_304_ = lean_apply_3(v_h__5_273_, v_rd_300_, v_rs1_301_, v___x_303_);
return v___x_304_;
}
case 5:
{
lean_object* v_rs1_305_; lean_object* v_rs2_306_; uint64_t v_offset_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v_rs1_305_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rs1_305_);
v_rs2_306_ = lean_ctor_get(v_x_268_, 1);
lean_inc(v_rs2_306_);
v_offset_307_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*2);
lean_dec_ref_known(v_x_268_, 2);
v___x_308_ = lean_box_uint64(v_offset_307_);
v___x_309_ = lean_apply_3(v_h__6_274_, v_rs1_305_, v_rs2_306_, v___x_308_);
return v___x_309_;
}
case 6:
{
uint8_t v_cond_310_; lean_object* v_rs1_311_; lean_object* v_rs2_312_; uint64_t v_targetPc_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v_cond_310_ = lean_ctor_get_uint8(v_x_268_, sizeof(void*)*2 + 8);
v_rs1_311_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rs1_311_);
v_rs2_312_ = lean_ctor_get(v_x_268_, 1);
lean_inc(v_rs2_312_);
v_targetPc_313_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*2);
lean_dec_ref_known(v_x_268_, 2);
v___x_314_ = lean_box(v_cond_310_);
v___x_315_ = lean_box_uint64(v_targetPc_313_);
v___x_316_ = lean_apply_4(v_h__7_275_, v___x_314_, v_rs1_311_, v_rs2_312_, v___x_315_);
return v___x_316_;
}
case 7:
{
lean_object* v_rd_317_; uint64_t v_targetPc_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__9_277_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v_rd_317_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rd_317_);
v_targetPc_318_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*1);
lean_dec_ref_known(v_x_268_, 1);
v___x_319_ = lean_box_uint64(v_targetPc_318_);
v___x_320_ = lean_apply_2(v_h__8_276_, v_rd_317_, v___x_319_);
return v___x_320_;
}
case 8:
{
lean_object* v_rd_321_; lean_object* v_rs1_322_; uint64_t v_offset_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec(v_h__10_278_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v_rd_321_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_rd_321_);
v_rs1_322_ = lean_ctor_get(v_x_268_, 1);
lean_inc(v_rs1_322_);
v_offset_323_ = lean_ctor_get_uint64(v_x_268_, sizeof(void*)*2);
lean_dec_ref_known(v_x_268_, 2);
v___x_324_ = lean_box_uint64(v_offset_323_);
v___x_325_ = lean_apply_3(v_h__9_277_, v_rd_321_, v_rs1_322_, v___x_324_);
return v___x_325_;
}
default: 
{
lean_object* v___x_326_; lean_object* v___x_327_; 
lean_dec(v_h__9_277_);
lean_dec(v_h__8_276_);
lean_dec(v_h__7_275_);
lean_dec(v_h__6_274_);
lean_dec(v_h__5_273_);
lean_dec(v_h__4_272_);
lean_dec(v_h__3_271_);
lean_dec(v_h__2_270_);
lean_dec(v_h__1_269_);
v___x_326_ = lean_box(0);
v___x_327_ = lean_apply_1(v_h__10_278_, v___x_326_);
return v___x_327_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprRVInstr_repr_match__1_splitter(lean_object* v_motive_328_, lean_object* v_x_329_, lean_object* v_h__1_330_, lean_object* v_h__2_331_, lean_object* v_h__3_332_, lean_object* v_h__4_333_, lean_object* v_h__5_334_, lean_object* v_h__6_335_, lean_object* v_h__7_336_, lean_object* v_h__8_337_, lean_object* v_h__9_338_, lean_object* v_h__10_339_){
_start:
{
switch(lean_obj_tag(v_x_329_))
{
case 0:
{
uint8_t v_op_340_; lean_object* v_rd_341_; lean_object* v_rs1_342_; uint64_t v_imm_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
v_op_340_ = lean_ctor_get_uint8(v_x_329_, sizeof(void*)*2 + 8);
v_rd_341_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rd_341_);
v_rs1_342_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_rs1_342_);
v_imm_343_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*2);
lean_dec_ref_known(v_x_329_, 2);
v___x_344_ = lean_box(v_op_340_);
v___x_345_ = lean_box_uint64(v_imm_343_);
v___x_346_ = lean_apply_4(v_h__1_330_, v___x_344_, v_rd_341_, v_rs1_342_, v___x_345_);
return v___x_346_;
}
case 1:
{
uint8_t v_op_347_; lean_object* v_rd_348_; lean_object* v_rs1_349_; lean_object* v_rs2_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__1_330_);
v_op_347_ = lean_ctor_get_uint8(v_x_329_, sizeof(void*)*3);
v_rd_348_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rd_348_);
v_rs1_349_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_rs1_349_);
v_rs2_350_ = lean_ctor_get(v_x_329_, 2);
lean_inc(v_rs2_350_);
lean_dec_ref_known(v_x_329_, 3);
v___x_351_ = lean_box(v_op_347_);
v___x_352_ = lean_apply_4(v_h__2_331_, v___x_351_, v_rd_348_, v_rs1_349_, v_rs2_350_);
return v___x_352_;
}
case 2:
{
lean_object* v_rd_353_; uint64_t v_imm20_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v_rd_353_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rd_353_);
v_imm20_354_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*1);
lean_dec_ref_known(v_x_329_, 1);
v___x_355_ = lean_box_uint64(v_imm20_354_);
v___x_356_ = lean_apply_2(v_h__3_332_, v_rd_353_, v___x_355_);
return v___x_356_;
}
case 3:
{
lean_object* v_rd_357_; uint64_t v_imm20_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v_rd_357_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rd_357_);
v_imm20_358_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*1);
lean_dec_ref_known(v_x_329_, 1);
v___x_359_ = lean_box_uint64(v_imm20_358_);
v___x_360_ = lean_apply_2(v_h__4_333_, v_rd_357_, v___x_359_);
return v___x_360_;
}
case 4:
{
lean_object* v_rd_361_; lean_object* v_rs1_362_; uint64_t v_offset_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v_rd_361_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rd_361_);
v_rs1_362_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_rs1_362_);
v_offset_363_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*2);
lean_dec_ref_known(v_x_329_, 2);
v___x_364_ = lean_box_uint64(v_offset_363_);
v___x_365_ = lean_apply_3(v_h__5_334_, v_rd_361_, v_rs1_362_, v___x_364_);
return v___x_365_;
}
case 5:
{
lean_object* v_rs1_366_; lean_object* v_rs2_367_; uint64_t v_offset_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v_rs1_366_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rs1_366_);
v_rs2_367_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_rs2_367_);
v_offset_368_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*2);
lean_dec_ref_known(v_x_329_, 2);
v___x_369_ = lean_box_uint64(v_offset_368_);
v___x_370_ = lean_apply_3(v_h__6_335_, v_rs1_366_, v_rs2_367_, v___x_369_);
return v___x_370_;
}
case 6:
{
uint8_t v_cond_371_; lean_object* v_rs1_372_; lean_object* v_rs2_373_; uint64_t v_targetPc_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v_cond_371_ = lean_ctor_get_uint8(v_x_329_, sizeof(void*)*2 + 8);
v_rs1_372_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rs1_372_);
v_rs2_373_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_rs2_373_);
v_targetPc_374_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*2);
lean_dec_ref_known(v_x_329_, 2);
v___x_375_ = lean_box(v_cond_371_);
v___x_376_ = lean_box_uint64(v_targetPc_374_);
v___x_377_ = lean_apply_4(v_h__7_336_, v___x_375_, v_rs1_372_, v_rs2_373_, v___x_376_);
return v___x_377_;
}
case 7:
{
lean_object* v_rd_378_; uint64_t v_targetPc_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__9_338_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v_rd_378_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rd_378_);
v_targetPc_379_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*1);
lean_dec_ref_known(v_x_329_, 1);
v___x_380_ = lean_box_uint64(v_targetPc_379_);
v___x_381_ = lean_apply_2(v_h__8_337_, v_rd_378_, v___x_380_);
return v___x_381_;
}
case 8:
{
lean_object* v_rd_382_; lean_object* v_rs1_383_; uint64_t v_offset_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
lean_dec(v_h__10_339_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v_rd_382_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_rd_382_);
v_rs1_383_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_rs1_383_);
v_offset_384_ = lean_ctor_get_uint64(v_x_329_, sizeof(void*)*2);
lean_dec_ref_known(v_x_329_, 2);
v___x_385_ = lean_box_uint64(v_offset_384_);
v___x_386_ = lean_apply_3(v_h__9_338_, v_rd_382_, v_rs1_383_, v___x_385_);
return v___x_386_;
}
default: 
{
lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec(v_h__9_338_);
lean_dec(v_h__8_337_);
lean_dec(v_h__7_336_);
lean_dec(v_h__6_335_);
lean_dec(v_h__5_334_);
lean_dec(v_h__4_333_);
lean_dec(v_h__3_332_);
lean_dec(v_h__2_331_);
lean_dec(v_h__1_330_);
v___x_387_ = lean_box(0);
v___x_388_ = lean_apply_1(v_h__10_339_, v___x_387_);
return v___x_388_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_Equiv(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Base_Lifter(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SafePass(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Base_BaseSound(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake_Base_Lifter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_SafePass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
