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
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___boxed(lean_object**);
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
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(uint8_t v_x_178_, lean_object* v_h__1_179_, lean_object* v_h__2_180_, lean_object* v_h__3_181_, lean_object* v_h__4_182_, lean_object* v_h__5_183_, lean_object* v_h__6_184_, lean_object* v_h__7_185_, lean_object* v_h__8_186_, lean_object* v_h__9_187_, lean_object* v_h__10_188_, lean_object* v_h__11_189_, lean_object* v_h__12_190_, lean_object* v_h__13_191_, lean_object* v_h__14_192_, lean_object* v_h__15_193_, lean_object* v_h__16_194_, lean_object* v_h__17_195_, lean_object* v_h__18_196_, lean_object* v_h__19_197_, lean_object* v_h__20_198_, lean_object* v_h__21_199_){
_start:
{
switch(v_x_178_)
{
case 0:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
v___x_200_ = lean_box(0);
v___x_201_ = lean_apply_1(v_h__1_179_, v___x_200_);
return v___x_201_;
}
case 1:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__1_179_);
v___x_202_ = lean_box(0);
v___x_203_ = lean_apply_1(v_h__2_180_, v___x_202_);
return v___x_203_;
}
case 2:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_204_ = lean_box(0);
v___x_205_ = lean_apply_1(v_h__3_181_, v___x_204_);
return v___x_205_;
}
case 3:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_206_ = lean_box(0);
v___x_207_ = lean_apply_1(v_h__4_182_, v___x_206_);
return v___x_207_;
}
case 4:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_208_ = lean_box(0);
v___x_209_ = lean_apply_1(v_h__5_183_, v___x_208_);
return v___x_209_;
}
case 5:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_210_ = lean_box(0);
v___x_211_ = lean_apply_1(v_h__6_184_, v___x_210_);
return v___x_211_;
}
case 6:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_apply_1(v_h__7_185_, v___x_212_);
return v___x_213_;
}
case 7:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_214_ = lean_box(0);
v___x_215_ = lean_apply_1(v_h__8_186_, v___x_214_);
return v___x_215_;
}
case 8:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_216_ = lean_box(0);
v___x_217_ = lean_apply_1(v_h__9_187_, v___x_216_);
return v___x_217_;
}
case 9:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_218_ = lean_box(0);
v___x_219_ = lean_apply_1(v_h__10_188_, v___x_218_);
return v___x_219_;
}
case 10:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_220_ = lean_box(0);
v___x_221_ = lean_apply_1(v_h__11_189_, v___x_220_);
return v___x_221_;
}
case 11:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_222_ = lean_box(0);
v___x_223_ = lean_apply_1(v_h__12_190_, v___x_222_);
return v___x_223_;
}
case 12:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_224_ = lean_box(0);
v___x_225_ = lean_apply_1(v_h__13_191_, v___x_224_);
return v___x_225_;
}
case 13:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_226_ = lean_box(0);
v___x_227_ = lean_apply_1(v_h__14_192_, v___x_226_);
return v___x_227_;
}
case 14:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_228_ = lean_box(0);
v___x_229_ = lean_apply_1(v_h__15_193_, v___x_228_);
return v___x_229_;
}
case 15:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_230_ = lean_box(0);
v___x_231_ = lean_apply_1(v_h__16_194_, v___x_230_);
return v___x_231_;
}
case 16:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_232_ = lean_box(0);
v___x_233_ = lean_apply_1(v_h__17_195_, v___x_232_);
return v___x_233_;
}
case 17:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_234_ = lean_box(0);
v___x_235_ = lean_apply_1(v_h__18_196_, v___x_234_);
return v___x_235_;
}
case 18:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__20_198_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_236_ = lean_box(0);
v___x_237_ = lean_apply_1(v_h__19_197_, v___x_236_);
return v___x_237_;
}
case 19:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v_h__21_199_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_apply_1(v_h__20_198_, v___x_238_);
return v___x_239_;
}
default: 
{
lean_object* v___x_240_; lean_object* v___x_241_; 
lean_dec(v_h__20_198_);
lean_dec(v_h__19_197_);
lean_dec(v_h__18_196_);
lean_dec(v_h__17_195_);
lean_dec(v_h__16_194_);
lean_dec(v_h__15_193_);
lean_dec(v_h__14_192_);
lean_dec(v_h__13_191_);
lean_dec(v_h__12_190_);
lean_dec(v_h__11_189_);
lean_dec(v_h__10_188_);
lean_dec(v_h__9_187_);
lean_dec(v_h__8_186_);
lean_dec(v_h__7_185_);
lean_dec(v_h__6_184_);
lean_dec(v_h__5_183_);
lean_dec(v_h__4_182_);
lean_dec(v_h__3_181_);
lean_dec(v_h__2_180_);
lean_dec(v_h__1_179_);
v___x_240_ = lean_box(0);
v___x_241_ = lean_apply_1(v_h__21_199_, v___x_240_);
return v___x_241_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg___boxed(lean_object** _args){
lean_object* v_x_242_ = _args[0];
lean_object* v_h__1_243_ = _args[1];
lean_object* v_h__2_244_ = _args[2];
lean_object* v_h__3_245_ = _args[3];
lean_object* v_h__4_246_ = _args[4];
lean_object* v_h__5_247_ = _args[5];
lean_object* v_h__6_248_ = _args[6];
lean_object* v_h__7_249_ = _args[7];
lean_object* v_h__8_250_ = _args[8];
lean_object* v_h__9_251_ = _args[9];
lean_object* v_h__10_252_ = _args[10];
lean_object* v_h__11_253_ = _args[11];
lean_object* v_h__12_254_ = _args[12];
lean_object* v_h__13_255_ = _args[13];
lean_object* v_h__14_256_ = _args[14];
lean_object* v_h__15_257_ = _args[15];
lean_object* v_h__16_258_ = _args[16];
lean_object* v_h__17_259_ = _args[17];
lean_object* v_h__18_260_ = _args[18];
lean_object* v_h__19_261_ = _args[19];
lean_object* v_h__20_262_ = _args[20];
lean_object* v_h__21_263_ = _args[21];
_start:
{
uint8_t v_x_195__boxed_264_; lean_object* v_res_265_; 
v_x_195__boxed_264_ = lean_unbox(v_x_242_);
v_res_265_ = lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(v_x_195__boxed_264_, v_h__1_243_, v_h__2_244_, v_h__3_245_, v_h__4_246_, v_h__5_247_, v_h__6_248_, v_h__7_249_, v_h__8_250_, v_h__9_251_, v_h__10_252_, v_h__11_253_, v_h__12_254_, v_h__13_255_, v_h__14_256_, v_h__15_257_, v_h__16_258_, v_h__17_259_, v_h__18_260_, v_h__19_261_, v_h__20_262_, v_h__21_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(lean_object* v_motive_266_, uint8_t v_x_267_, lean_object* v_h__1_268_, lean_object* v_h__2_269_, lean_object* v_h__3_270_, lean_object* v_h__4_271_, lean_object* v_h__5_272_, lean_object* v_h__6_273_, lean_object* v_h__7_274_, lean_object* v_h__8_275_, lean_object* v_h__9_276_, lean_object* v_h__10_277_, lean_object* v_h__11_278_, lean_object* v_h__12_279_, lean_object* v_h__13_280_, lean_object* v_h__14_281_, lean_object* v_h__15_282_, lean_object* v_h__16_283_, lean_object* v_h__17_284_, lean_object* v_h__18_285_, lean_object* v_h__19_286_, lean_object* v_h__20_287_, lean_object* v_h__21_288_){
_start:
{
switch(v_x_267_)
{
case 0:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_apply_1(v_h__1_268_, v___x_289_);
return v___x_290_;
}
case 1:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__1_268_);
v___x_291_ = lean_box(0);
v___x_292_ = lean_apply_1(v_h__2_269_, v___x_291_);
return v___x_292_;
}
case 2:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_293_ = lean_box(0);
v___x_294_ = lean_apply_1(v_h__3_270_, v___x_293_);
return v___x_294_;
}
case 3:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_295_ = lean_box(0);
v___x_296_ = lean_apply_1(v_h__4_271_, v___x_295_);
return v___x_296_;
}
case 4:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_297_ = lean_box(0);
v___x_298_ = lean_apply_1(v_h__5_272_, v___x_297_);
return v___x_298_;
}
case 5:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_299_ = lean_box(0);
v___x_300_ = lean_apply_1(v_h__6_273_, v___x_299_);
return v___x_300_;
}
case 6:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_301_ = lean_box(0);
v___x_302_ = lean_apply_1(v_h__7_274_, v___x_301_);
return v___x_302_;
}
case 7:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_303_ = lean_box(0);
v___x_304_ = lean_apply_1(v_h__8_275_, v___x_303_);
return v___x_304_;
}
case 8:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_305_ = lean_box(0);
v___x_306_ = lean_apply_1(v_h__9_276_, v___x_305_);
return v___x_306_;
}
case 9:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_307_ = lean_box(0);
v___x_308_ = lean_apply_1(v_h__10_277_, v___x_307_);
return v___x_308_;
}
case 10:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_309_ = lean_box(0);
v___x_310_ = lean_apply_1(v_h__11_278_, v___x_309_);
return v___x_310_;
}
case 11:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_311_ = lean_box(0);
v___x_312_ = lean_apply_1(v_h__12_279_, v___x_311_);
return v___x_312_;
}
case 12:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_313_ = lean_box(0);
v___x_314_ = lean_apply_1(v_h__13_280_, v___x_313_);
return v___x_314_;
}
case 13:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_315_ = lean_box(0);
v___x_316_ = lean_apply_1(v_h__14_281_, v___x_315_);
return v___x_316_;
}
case 14:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_317_ = lean_box(0);
v___x_318_ = lean_apply_1(v_h__15_282_, v___x_317_);
return v___x_318_;
}
case 15:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_319_ = lean_box(0);
v___x_320_ = lean_apply_1(v_h__16_283_, v___x_319_);
return v___x_320_;
}
case 16:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_321_ = lean_box(0);
v___x_322_ = lean_apply_1(v_h__17_284_, v___x_321_);
return v___x_322_;
}
case 17:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_323_ = lean_box(0);
v___x_324_ = lean_apply_1(v_h__18_285_, v___x_323_);
return v___x_324_;
}
case 18:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__20_287_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_325_ = lean_box(0);
v___x_326_ = lean_apply_1(v_h__19_286_, v___x_325_);
return v___x_326_;
}
case 19:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
lean_dec(v_h__21_288_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_327_ = lean_box(0);
v___x_328_ = lean_apply_1(v_h__20_287_, v___x_327_);
return v___x_328_;
}
default: 
{
lean_object* v___x_329_; lean_object* v___x_330_; 
lean_dec(v_h__20_287_);
lean_dec(v_h__19_286_);
lean_dec(v_h__18_285_);
lean_dec(v_h__17_284_);
lean_dec(v_h__16_283_);
lean_dec(v_h__15_282_);
lean_dec(v_h__14_281_);
lean_dec(v_h__13_280_);
lean_dec(v_h__12_279_);
lean_dec(v_h__11_278_);
lean_dec(v_h__10_277_);
lean_dec(v_h__9_276_);
lean_dec(v_h__8_275_);
lean_dec(v_h__7_274_);
lean_dec(v_h__6_273_);
lean_dec(v_h__5_272_);
lean_dec(v_h__4_271_);
lean_dec(v_h__3_270_);
lean_dec(v_h__2_269_);
lean_dec(v_h__1_268_);
v___x_329_ = lean_box(0);
v___x_330_ = lean_apply_1(v_h__21_288_, v___x_329_);
return v___x_330_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___boxed(lean_object** _args){
lean_object* v_motive_331_ = _args[0];
lean_object* v_x_332_ = _args[1];
lean_object* v_h__1_333_ = _args[2];
lean_object* v_h__2_334_ = _args[3];
lean_object* v_h__3_335_ = _args[4];
lean_object* v_h__4_336_ = _args[5];
lean_object* v_h__5_337_ = _args[6];
lean_object* v_h__6_338_ = _args[7];
lean_object* v_h__7_339_ = _args[8];
lean_object* v_h__8_340_ = _args[9];
lean_object* v_h__9_341_ = _args[10];
lean_object* v_h__10_342_ = _args[11];
lean_object* v_h__11_343_ = _args[12];
lean_object* v_h__12_344_ = _args[13];
lean_object* v_h__13_345_ = _args[14];
lean_object* v_h__14_346_ = _args[15];
lean_object* v_h__15_347_ = _args[16];
lean_object* v_h__16_348_ = _args[17];
lean_object* v_h__17_349_ = _args[18];
lean_object* v_h__18_350_ = _args[19];
lean_object* v_h__19_351_ = _args[20];
lean_object* v_h__20_352_ = _args[21];
lean_object* v_h__21_353_ = _args[22];
_start:
{
uint8_t v_x_282__boxed_354_; lean_object* v_res_355_; 
v_x_282__boxed_354_ = lean_unbox(v_x_332_);
v_res_355_ = lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(v_motive_331_, v_x_282__boxed_354_, v_h__1_333_, v_h__2_334_, v_h__3_335_, v_h__4_336_, v_h__5_337_, v_h__6_338_, v_h__7_339_, v_h__8_340_, v_h__9_341_, v_h__10_342_, v_h__11_343_, v_h__12_344_, v_h__13_345_, v_h__14_346_, v_h__15_347_, v_h__16_348_, v_h__17_349_, v_h__18_350_, v_h__19_351_, v_h__20_352_, v_h__21_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprRVInstr_repr_match__1_splitter___redArg(lean_object* v_x_356_, lean_object* v_h__1_357_, lean_object* v_h__2_358_, lean_object* v_h__3_359_, lean_object* v_h__4_360_, lean_object* v_h__5_361_, lean_object* v_h__6_362_, lean_object* v_h__7_363_, lean_object* v_h__8_364_, lean_object* v_h__9_365_, lean_object* v_h__10_366_){
_start:
{
switch(lean_obj_tag(v_x_356_))
{
case 0:
{
uint8_t v_op_367_; lean_object* v_rd_368_; lean_object* v_rs1_369_; uint64_t v_imm_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
v_op_367_ = lean_ctor_get_uint8(v_x_356_, sizeof(void*)*2 + 8);
v_rd_368_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rd_368_);
v_rs1_369_ = lean_ctor_get(v_x_356_, 1);
lean_inc(v_rs1_369_);
v_imm_370_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*2);
lean_dec_ref_known(v_x_356_, 2);
v___x_371_ = lean_box(v_op_367_);
v___x_372_ = lean_box_uint64(v_imm_370_);
v___x_373_ = lean_apply_4(v_h__1_357_, v___x_371_, v_rd_368_, v_rs1_369_, v___x_372_);
return v___x_373_;
}
case 1:
{
uint8_t v_op_374_; lean_object* v_rd_375_; lean_object* v_rs1_376_; lean_object* v_rs2_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__1_357_);
v_op_374_ = lean_ctor_get_uint8(v_x_356_, sizeof(void*)*3);
v_rd_375_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rd_375_);
v_rs1_376_ = lean_ctor_get(v_x_356_, 1);
lean_inc(v_rs1_376_);
v_rs2_377_ = lean_ctor_get(v_x_356_, 2);
lean_inc(v_rs2_377_);
lean_dec_ref_known(v_x_356_, 3);
v___x_378_ = lean_box(v_op_374_);
v___x_379_ = lean_apply_4(v_h__2_358_, v___x_378_, v_rd_375_, v_rs1_376_, v_rs2_377_);
return v___x_379_;
}
case 2:
{
lean_object* v_rd_380_; uint64_t v_imm20_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v_rd_380_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rd_380_);
v_imm20_381_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*1);
lean_dec_ref_known(v_x_356_, 1);
v___x_382_ = lean_box_uint64(v_imm20_381_);
v___x_383_ = lean_apply_2(v_h__3_359_, v_rd_380_, v___x_382_);
return v___x_383_;
}
case 3:
{
lean_object* v_rd_384_; uint64_t v_imm20_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v_rd_384_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rd_384_);
v_imm20_385_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*1);
lean_dec_ref_known(v_x_356_, 1);
v___x_386_ = lean_box_uint64(v_imm20_385_);
v___x_387_ = lean_apply_2(v_h__4_360_, v_rd_384_, v___x_386_);
return v___x_387_;
}
case 4:
{
lean_object* v_rd_388_; lean_object* v_rs1_389_; uint64_t v_offset_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v_rd_388_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rd_388_);
v_rs1_389_ = lean_ctor_get(v_x_356_, 1);
lean_inc(v_rs1_389_);
v_offset_390_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*2);
lean_dec_ref_known(v_x_356_, 2);
v___x_391_ = lean_box_uint64(v_offset_390_);
v___x_392_ = lean_apply_3(v_h__5_361_, v_rd_388_, v_rs1_389_, v___x_391_);
return v___x_392_;
}
case 5:
{
lean_object* v_rs1_393_; lean_object* v_rs2_394_; uint64_t v_offset_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v_rs1_393_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rs1_393_);
v_rs2_394_ = lean_ctor_get(v_x_356_, 1);
lean_inc(v_rs2_394_);
v_offset_395_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*2);
lean_dec_ref_known(v_x_356_, 2);
v___x_396_ = lean_box_uint64(v_offset_395_);
v___x_397_ = lean_apply_3(v_h__6_362_, v_rs1_393_, v_rs2_394_, v___x_396_);
return v___x_397_;
}
case 6:
{
uint8_t v_cond_398_; lean_object* v_rs1_399_; lean_object* v_rs2_400_; uint64_t v_targetPc_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v_cond_398_ = lean_ctor_get_uint8(v_x_356_, sizeof(void*)*2 + 8);
v_rs1_399_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rs1_399_);
v_rs2_400_ = lean_ctor_get(v_x_356_, 1);
lean_inc(v_rs2_400_);
v_targetPc_401_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*2);
lean_dec_ref_known(v_x_356_, 2);
v___x_402_ = lean_box(v_cond_398_);
v___x_403_ = lean_box_uint64(v_targetPc_401_);
v___x_404_ = lean_apply_4(v_h__7_363_, v___x_402_, v_rs1_399_, v_rs2_400_, v___x_403_);
return v___x_404_;
}
case 7:
{
lean_object* v_rd_405_; uint64_t v_targetPc_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__9_365_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v_rd_405_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rd_405_);
v_targetPc_406_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*1);
lean_dec_ref_known(v_x_356_, 1);
v___x_407_ = lean_box_uint64(v_targetPc_406_);
v___x_408_ = lean_apply_2(v_h__8_364_, v_rd_405_, v___x_407_);
return v___x_408_;
}
case 8:
{
lean_object* v_rd_409_; lean_object* v_rs1_410_; uint64_t v_offset_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec(v_h__10_366_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v_rd_409_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_rd_409_);
v_rs1_410_ = lean_ctor_get(v_x_356_, 1);
lean_inc(v_rs1_410_);
v_offset_411_ = lean_ctor_get_uint64(v_x_356_, sizeof(void*)*2);
lean_dec_ref_known(v_x_356_, 2);
v___x_412_ = lean_box_uint64(v_offset_411_);
v___x_413_ = lean_apply_3(v_h__9_365_, v_rd_409_, v_rs1_410_, v___x_412_);
return v___x_413_;
}
default: 
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec(v_h__9_365_);
lean_dec(v_h__8_364_);
lean_dec(v_h__7_363_);
lean_dec(v_h__6_362_);
lean_dec(v_h__5_361_);
lean_dec(v_h__4_360_);
lean_dec(v_h__3_359_);
lean_dec(v_h__2_358_);
lean_dec(v_h__1_357_);
v___x_414_ = lean_box(0);
v___x_415_ = lean_apply_1(v_h__10_366_, v___x_414_);
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Base_BaseSound_0__Rv2Pancake_Spec_instReprRVInstr_repr_match__1_splitter(lean_object* v_motive_416_, lean_object* v_x_417_, lean_object* v_h__1_418_, lean_object* v_h__2_419_, lean_object* v_h__3_420_, lean_object* v_h__4_421_, lean_object* v_h__5_422_, lean_object* v_h__6_423_, lean_object* v_h__7_424_, lean_object* v_h__8_425_, lean_object* v_h__9_426_, lean_object* v_h__10_427_){
_start:
{
switch(lean_obj_tag(v_x_417_))
{
case 0:
{
uint8_t v_op_428_; lean_object* v_rd_429_; lean_object* v_rs1_430_; uint64_t v_imm_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
v_op_428_ = lean_ctor_get_uint8(v_x_417_, sizeof(void*)*2 + 8);
v_rd_429_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rd_429_);
v_rs1_430_ = lean_ctor_get(v_x_417_, 1);
lean_inc(v_rs1_430_);
v_imm_431_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*2);
lean_dec_ref_known(v_x_417_, 2);
v___x_432_ = lean_box(v_op_428_);
v___x_433_ = lean_box_uint64(v_imm_431_);
v___x_434_ = lean_apply_4(v_h__1_418_, v___x_432_, v_rd_429_, v_rs1_430_, v___x_433_);
return v___x_434_;
}
case 1:
{
uint8_t v_op_435_; lean_object* v_rd_436_; lean_object* v_rs1_437_; lean_object* v_rs2_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__1_418_);
v_op_435_ = lean_ctor_get_uint8(v_x_417_, sizeof(void*)*3);
v_rd_436_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rd_436_);
v_rs1_437_ = lean_ctor_get(v_x_417_, 1);
lean_inc(v_rs1_437_);
v_rs2_438_ = lean_ctor_get(v_x_417_, 2);
lean_inc(v_rs2_438_);
lean_dec_ref_known(v_x_417_, 3);
v___x_439_ = lean_box(v_op_435_);
v___x_440_ = lean_apply_4(v_h__2_419_, v___x_439_, v_rd_436_, v_rs1_437_, v_rs2_438_);
return v___x_440_;
}
case 2:
{
lean_object* v_rd_441_; uint64_t v_imm20_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v_rd_441_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rd_441_);
v_imm20_442_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*1);
lean_dec_ref_known(v_x_417_, 1);
v___x_443_ = lean_box_uint64(v_imm20_442_);
v___x_444_ = lean_apply_2(v_h__3_420_, v_rd_441_, v___x_443_);
return v___x_444_;
}
case 3:
{
lean_object* v_rd_445_; uint64_t v_imm20_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v_rd_445_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rd_445_);
v_imm20_446_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*1);
lean_dec_ref_known(v_x_417_, 1);
v___x_447_ = lean_box_uint64(v_imm20_446_);
v___x_448_ = lean_apply_2(v_h__4_421_, v_rd_445_, v___x_447_);
return v___x_448_;
}
case 4:
{
lean_object* v_rd_449_; lean_object* v_rs1_450_; uint64_t v_offset_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v_rd_449_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rd_449_);
v_rs1_450_ = lean_ctor_get(v_x_417_, 1);
lean_inc(v_rs1_450_);
v_offset_451_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*2);
lean_dec_ref_known(v_x_417_, 2);
v___x_452_ = lean_box_uint64(v_offset_451_);
v___x_453_ = lean_apply_3(v_h__5_422_, v_rd_449_, v_rs1_450_, v___x_452_);
return v___x_453_;
}
case 5:
{
lean_object* v_rs1_454_; lean_object* v_rs2_455_; uint64_t v_offset_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v_rs1_454_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rs1_454_);
v_rs2_455_ = lean_ctor_get(v_x_417_, 1);
lean_inc(v_rs2_455_);
v_offset_456_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*2);
lean_dec_ref_known(v_x_417_, 2);
v___x_457_ = lean_box_uint64(v_offset_456_);
v___x_458_ = lean_apply_3(v_h__6_423_, v_rs1_454_, v_rs2_455_, v___x_457_);
return v___x_458_;
}
case 6:
{
uint8_t v_cond_459_; lean_object* v_rs1_460_; lean_object* v_rs2_461_; uint64_t v_targetPc_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v_cond_459_ = lean_ctor_get_uint8(v_x_417_, sizeof(void*)*2 + 8);
v_rs1_460_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rs1_460_);
v_rs2_461_ = lean_ctor_get(v_x_417_, 1);
lean_inc(v_rs2_461_);
v_targetPc_462_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*2);
lean_dec_ref_known(v_x_417_, 2);
v___x_463_ = lean_box(v_cond_459_);
v___x_464_ = lean_box_uint64(v_targetPc_462_);
v___x_465_ = lean_apply_4(v_h__7_424_, v___x_463_, v_rs1_460_, v_rs2_461_, v___x_464_);
return v___x_465_;
}
case 7:
{
lean_object* v_rd_466_; uint64_t v_targetPc_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__9_426_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v_rd_466_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rd_466_);
v_targetPc_467_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*1);
lean_dec_ref_known(v_x_417_, 1);
v___x_468_ = lean_box_uint64(v_targetPc_467_);
v___x_469_ = lean_apply_2(v_h__8_425_, v_rd_466_, v___x_468_);
return v___x_469_;
}
case 8:
{
lean_object* v_rd_470_; lean_object* v_rs1_471_; uint64_t v_offset_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec(v_h__10_427_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v_rd_470_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_rd_470_);
v_rs1_471_ = lean_ctor_get(v_x_417_, 1);
lean_inc(v_rs1_471_);
v_offset_472_ = lean_ctor_get_uint64(v_x_417_, sizeof(void*)*2);
lean_dec_ref_known(v_x_417_, 2);
v___x_473_ = lean_box_uint64(v_offset_472_);
v___x_474_ = lean_apply_3(v_h__9_426_, v_rd_470_, v_rs1_471_, v___x_473_);
return v___x_474_;
}
default: 
{
lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec(v_h__9_426_);
lean_dec(v_h__8_425_);
lean_dec(v_h__7_424_);
lean_dec(v_h__6_423_);
lean_dec(v_h__5_422_);
lean_dec(v_h__4_421_);
lean_dec(v_h__3_420_);
lean_dec(v_h__2_419_);
lean_dec(v_h__1_418_);
v___x_475_ = lean_box(0);
v___x_476_ = lean_apply_1(v_h__10_427_, v___x_475_);
return v___x_476_;
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
