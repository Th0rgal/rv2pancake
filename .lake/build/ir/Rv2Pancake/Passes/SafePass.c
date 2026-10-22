// Lean compiler output
// Module: Rv2Pancake.Passes.SafePass
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem public import Rv2Pancake.Spec.Equiv
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_seq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_runPassPipeline(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_isLoopFree___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Passes_isLoopFree_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Passes_isLoopFree_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(lean_object* v_vp_1_, lean_object* v_p_2_){
_start:
{
lean_object* v_propose_3_; lean_object* v_check_4_; lean_object* v_p_x27_5_; lean_object* v___x_6_; uint8_t v___x_7_; 
v_propose_3_ = lean_ctor_get(v_vp_1_, 1);
lean_inc_ref(v_propose_3_);
v_check_4_ = lean_ctor_get(v_vp_1_, 2);
lean_inc_ref(v_check_4_);
lean_dec_ref(v_vp_1_);
lean_inc_n(v_p_2_, 2);
v_p_x27_5_ = lean_apply_1(v_propose_3_, v_p_2_);
lean_inc(v_p_x27_5_);
v___x_6_ = lean_apply_2(v_check_4_, v_p_2_, v_p_x27_5_);
v___x_7_ = lean_unbox(v___x_6_);
if (v___x_7_ == 0)
{
lean_dec(v_p_x27_5_);
return v_p_2_;
}
else
{
lean_dec(v_p_2_);
return v_p_x27_5_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_seq(lean_object* v_vp1_8_, lean_object* v_vp2_9_, lean_object* v_p_10_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v_vp1_8_, v_p_10_);
v___x_12_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v_vp2_9_, v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_runPassPipeline(lean_object* v_passes_13_, lean_object* v_p_14_){
_start:
{
if (lean_obj_tag(v_passes_13_) == 0)
{
return v_p_14_;
}
else
{
lean_object* v_head_15_; lean_object* v_tail_16_; lean_object* v___x_17_; 
v_head_15_ = lean_ctor_get(v_passes_13_, 0);
lean_inc(v_head_15_);
v_tail_16_ = lean_ctor_get(v_passes_13_, 1);
lean_inc(v_tail_16_);
lean_dec_ref_known(v_passes_13_, 2);
v___x_17_ = lp_rv2pancake_Rv2Pancake_Passes_VerifiedStmtPass_apply(v_head_15_, v_p_14_);
v_passes_13_ = v_tail_16_;
v_p_14_ = v___x_17_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object* v_x_19_){
_start:
{
switch(lean_obj_tag(v_x_19_))
{
case 0:
{
uint8_t v___x_20_; 
v___x_20_ = 1;
return v___x_20_;
}
case 3:
{
lean_object* v_p1_21_; lean_object* v_p2_22_; uint8_t v___x_23_; 
v_p1_21_ = lean_ctor_get(v_x_19_, 0);
v_p2_22_ = lean_ctor_get(v_x_19_, 1);
v___x_23_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p1_21_);
if (v___x_23_ == 0)
{
return v___x_23_;
}
else
{
v_x_19_ = v_p2_22_;
goto _start;
}
}
case 4:
{
lean_object* v_thenBr_25_; lean_object* v_elseBr_26_; uint8_t v___x_27_; 
v_thenBr_25_ = lean_ctor_get(v_x_19_, 1);
v_elseBr_26_ = lean_ctor_get(v_x_19_, 2);
v___x_27_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_thenBr_25_);
if (v___x_27_ == 0)
{
return v___x_27_;
}
else
{
v_x_19_ = v_elseBr_26_;
goto _start;
}
}
case 5:
{
uint8_t v___x_29_; 
v___x_29_ = 0;
return v___x_29_;
}
default: 
{
uint8_t v___x_30_; 
v___x_30_ = 1;
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_isLoopFree___boxed(lean_object* v_x_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_x_31_);
lean_dec(v_x_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter___redArg(lean_object* v_x_34_, lean_object* v_h__1_35_, lean_object* v_h__2_36_, lean_object* v_h__3_37_, lean_object* v_h__4_38_, lean_object* v_h__5_39_, lean_object* v_h__6_40_){
_start:
{
switch(lean_obj_tag(v_x_34_))
{
case 0:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec(v_h__6_40_);
lean_dec(v_h__5_39_);
lean_dec(v_h__4_38_);
lean_dec(v_h__3_37_);
lean_dec(v_h__2_36_);
v___x_41_ = lean_box(0);
v___x_42_ = lean_apply_1(v_h__1_35_, v___x_41_);
return v___x_42_;
}
case 1:
{
lean_object* v_v_43_; lean_object* v_e_44_; lean_object* v___x_45_; 
lean_dec(v_h__6_40_);
lean_dec(v_h__5_39_);
lean_dec(v_h__4_38_);
lean_dec(v_h__3_37_);
lean_dec(v_h__1_35_);
v_v_43_ = lean_ctor_get(v_x_34_, 0);
lean_inc(v_v_43_);
v_e_44_ = lean_ctor_get(v_x_34_, 1);
lean_inc_ref(v_e_44_);
lean_dec_ref_known(v_x_34_, 2);
v___x_45_ = lean_apply_2(v_h__2_36_, v_v_43_, v_e_44_);
return v___x_45_;
}
case 2:
{
lean_object* v_addr_46_; lean_object* v_val_47_; lean_object* v___x_48_; 
lean_dec(v_h__6_40_);
lean_dec(v_h__5_39_);
lean_dec(v_h__4_38_);
lean_dec(v_h__2_36_);
lean_dec(v_h__1_35_);
v_addr_46_ = lean_ctor_get(v_x_34_, 0);
lean_inc_ref(v_addr_46_);
v_val_47_ = lean_ctor_get(v_x_34_, 1);
lean_inc_ref(v_val_47_);
lean_dec_ref_known(v_x_34_, 2);
v___x_48_ = lean_apply_2(v_h__3_37_, v_addr_46_, v_val_47_);
return v___x_48_;
}
case 3:
{
lean_object* v_p1_49_; lean_object* v_p2_50_; lean_object* v___x_51_; 
lean_dec(v_h__6_40_);
lean_dec(v_h__5_39_);
lean_dec(v_h__3_37_);
lean_dec(v_h__2_36_);
lean_dec(v_h__1_35_);
v_p1_49_ = lean_ctor_get(v_x_34_, 0);
lean_inc(v_p1_49_);
v_p2_50_ = lean_ctor_get(v_x_34_, 1);
lean_inc(v_p2_50_);
lean_dec_ref_known(v_x_34_, 2);
v___x_51_ = lean_apply_2(v_h__4_38_, v_p1_49_, v_p2_50_);
return v___x_51_;
}
case 4:
{
lean_object* v_cond_52_; lean_object* v_thenBr_53_; lean_object* v_elseBr_54_; lean_object* v___x_55_; 
lean_dec(v_h__6_40_);
lean_dec(v_h__4_38_);
lean_dec(v_h__3_37_);
lean_dec(v_h__2_36_);
lean_dec(v_h__1_35_);
v_cond_52_ = lean_ctor_get(v_x_34_, 0);
lean_inc_ref(v_cond_52_);
v_thenBr_53_ = lean_ctor_get(v_x_34_, 1);
lean_inc(v_thenBr_53_);
v_elseBr_54_ = lean_ctor_get(v_x_34_, 2);
lean_inc(v_elseBr_54_);
lean_dec_ref_known(v_x_34_, 3);
v___x_55_ = lean_apply_3(v_h__5_39_, v_cond_52_, v_thenBr_53_, v_elseBr_54_);
return v___x_55_;
}
default: 
{
lean_object* v_cond_56_; lean_object* v_body_57_; lean_object* v___x_58_; 
lean_dec(v_h__5_39_);
lean_dec(v_h__4_38_);
lean_dec(v_h__3_37_);
lean_dec(v_h__2_36_);
lean_dec(v_h__1_35_);
v_cond_56_ = lean_ctor_get(v_x_34_, 0);
lean_inc_ref(v_cond_56_);
v_body_57_ = lean_ctor_get(v_x_34_, 1);
lean_inc(v_body_57_);
lean_dec_ref_known(v_x_34_, 2);
v___x_58_ = lean_apply_2(v_h__6_40_, v_cond_56_, v_body_57_);
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_instReprPanProg_repr_match__1_splitter(lean_object* v_motive_59_, lean_object* v_x_60_, lean_object* v_h__1_61_, lean_object* v_h__2_62_, lean_object* v_h__3_63_, lean_object* v_h__4_64_, lean_object* v_h__5_65_, lean_object* v_h__6_66_){
_start:
{
switch(lean_obj_tag(v_x_60_))
{
case 0:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
lean_dec(v_h__6_66_);
lean_dec(v_h__5_65_);
lean_dec(v_h__4_64_);
lean_dec(v_h__3_63_);
lean_dec(v_h__2_62_);
v___x_67_ = lean_box(0);
v___x_68_ = lean_apply_1(v_h__1_61_, v___x_67_);
return v___x_68_;
}
case 1:
{
lean_object* v_v_69_; lean_object* v_e_70_; lean_object* v___x_71_; 
lean_dec(v_h__6_66_);
lean_dec(v_h__5_65_);
lean_dec(v_h__4_64_);
lean_dec(v_h__3_63_);
lean_dec(v_h__1_61_);
v_v_69_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_v_69_);
v_e_70_ = lean_ctor_get(v_x_60_, 1);
lean_inc_ref(v_e_70_);
lean_dec_ref_known(v_x_60_, 2);
v___x_71_ = lean_apply_2(v_h__2_62_, v_v_69_, v_e_70_);
return v___x_71_;
}
case 2:
{
lean_object* v_addr_72_; lean_object* v_val_73_; lean_object* v___x_74_; 
lean_dec(v_h__6_66_);
lean_dec(v_h__5_65_);
lean_dec(v_h__4_64_);
lean_dec(v_h__2_62_);
lean_dec(v_h__1_61_);
v_addr_72_ = lean_ctor_get(v_x_60_, 0);
lean_inc_ref(v_addr_72_);
v_val_73_ = lean_ctor_get(v_x_60_, 1);
lean_inc_ref(v_val_73_);
lean_dec_ref_known(v_x_60_, 2);
v___x_74_ = lean_apply_2(v_h__3_63_, v_addr_72_, v_val_73_);
return v___x_74_;
}
case 3:
{
lean_object* v_p1_75_; lean_object* v_p2_76_; lean_object* v___x_77_; 
lean_dec(v_h__6_66_);
lean_dec(v_h__5_65_);
lean_dec(v_h__3_63_);
lean_dec(v_h__2_62_);
lean_dec(v_h__1_61_);
v_p1_75_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_p1_75_);
v_p2_76_ = lean_ctor_get(v_x_60_, 1);
lean_inc(v_p2_76_);
lean_dec_ref_known(v_x_60_, 2);
v___x_77_ = lean_apply_2(v_h__4_64_, v_p1_75_, v_p2_76_);
return v___x_77_;
}
case 4:
{
lean_object* v_cond_78_; lean_object* v_thenBr_79_; lean_object* v_elseBr_80_; lean_object* v___x_81_; 
lean_dec(v_h__6_66_);
lean_dec(v_h__4_64_);
lean_dec(v_h__3_63_);
lean_dec(v_h__2_62_);
lean_dec(v_h__1_61_);
v_cond_78_ = lean_ctor_get(v_x_60_, 0);
lean_inc_ref(v_cond_78_);
v_thenBr_79_ = lean_ctor_get(v_x_60_, 1);
lean_inc(v_thenBr_79_);
v_elseBr_80_ = lean_ctor_get(v_x_60_, 2);
lean_inc(v_elseBr_80_);
lean_dec_ref_known(v_x_60_, 3);
v___x_81_ = lean_apply_3(v_h__5_65_, v_cond_78_, v_thenBr_79_, v_elseBr_80_);
return v___x_81_;
}
default: 
{
lean_object* v_cond_82_; lean_object* v_body_83_; lean_object* v___x_84_; 
lean_dec(v_h__5_65_);
lean_dec(v_h__4_64_);
lean_dec(v_h__3_63_);
lean_dec(v_h__2_62_);
lean_dec(v_h__1_61_);
v_cond_82_ = lean_ctor_get(v_x_60_, 0);
lean_inc_ref(v_cond_82_);
v_body_83_ = lean_ctor_get(v_x_60_, 1);
lean_inc(v_body_83_);
lean_dec_ref_known(v_x_60_, 2);
v___x_84_ = lean_apply_2(v_h__6_66_, v_cond_82_, v_body_83_);
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg(lean_object* v_fuel_85_, lean_object* v_h__1_86_, lean_object* v_h__2_87_){
_start:
{
lean_object* v_zero_88_; uint8_t v_isZero_89_; 
v_zero_88_ = lean_unsigned_to_nat(0u);
v_isZero_89_ = lean_nat_dec_eq(v_fuel_85_, v_zero_88_);
if (v_isZero_89_ == 1)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec(v_h__2_87_);
v___x_90_ = lean_box(0);
v___x_91_ = lean_apply_1(v_h__1_86_, v___x_90_);
return v___x_91_;
}
else
{
lean_object* v_one_92_; lean_object* v_n_93_; lean_object* v___x_94_; 
lean_dec(v_h__1_86_);
v_one_92_ = lean_unsigned_to_nat(1u);
v_n_93_ = lean_nat_sub(v_fuel_85_, v_one_92_);
v___x_94_ = lean_apply_1(v_h__2_87_, v_n_93_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg___boxed(lean_object* v_fuel_95_, lean_object* v_h__1_96_, lean_object* v_h__2_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter___redArg(v_fuel_95_, v_h__1_96_, v_h__2_97_);
lean_dec(v_fuel_95_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter(lean_object* v_motive_99_, lean_object* v_fuel_100_, lean_object* v_h__1_101_, lean_object* v_h__2_102_){
_start:
{
lean_object* v_zero_103_; uint8_t v_isZero_104_; 
v_zero_103_ = lean_unsigned_to_nat(0u);
v_isZero_104_ = lean_nat_dec_eq(v_fuel_100_, v_zero_103_);
if (v_isZero_104_ == 1)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
lean_dec(v_h__2_102_);
v___x_105_ = lean_box(0);
v___x_106_ = lean_apply_1(v_h__1_101_, v___x_105_);
return v___x_106_;
}
else
{
lean_object* v_one_107_; lean_object* v_n_108_; lean_object* v___x_109_; 
lean_dec(v_h__1_101_);
v_one_107_ = lean_unsigned_to_nat(1u);
v_n_108_ = lean_nat_sub(v_fuel_100_, v_one_107_);
v___x_109_ = lean_apply_1(v_h__2_102_, v_n_108_);
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter___boxed(lean_object* v_motive_110_, lean_object* v_fuel_111_, lean_object* v_h__1_112_, lean_object* v_h__2_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Spec_evalPan_match__1_splitter(v_motive_110_, v_fuel_111_, v_h__1_112_, v_h__2_113_);
lean_dec(v_fuel_111_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Passes_isLoopFree_match__1_splitter___redArg(lean_object* v_x_115_, lean_object* v_h__1_116_, lean_object* v_h__2_117_, lean_object* v_h__3_118_, lean_object* v_h__4_119_, lean_object* v_h__5_120_, lean_object* v_h__6_121_){
_start:
{
switch(lean_obj_tag(v_x_115_))
{
case 0:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
lean_dec(v_h__6_121_);
lean_dec(v_h__5_120_);
lean_dec(v_h__4_119_);
lean_dec(v_h__3_118_);
lean_dec(v_h__2_117_);
v___x_122_ = lean_box(0);
v___x_123_ = lean_apply_1(v_h__1_116_, v___x_122_);
return v___x_123_;
}
case 1:
{
lean_object* v_v_124_; lean_object* v_e_125_; lean_object* v___x_126_; 
lean_dec(v_h__6_121_);
lean_dec(v_h__5_120_);
lean_dec(v_h__4_119_);
lean_dec(v_h__3_118_);
lean_dec(v_h__1_116_);
v_v_124_ = lean_ctor_get(v_x_115_, 0);
lean_inc(v_v_124_);
v_e_125_ = lean_ctor_get(v_x_115_, 1);
lean_inc_ref(v_e_125_);
lean_dec_ref_known(v_x_115_, 2);
v___x_126_ = lean_apply_2(v_h__2_117_, v_v_124_, v_e_125_);
return v___x_126_;
}
case 2:
{
lean_object* v_addr_127_; lean_object* v_val_128_; lean_object* v___x_129_; 
lean_dec(v_h__6_121_);
lean_dec(v_h__5_120_);
lean_dec(v_h__4_119_);
lean_dec(v_h__2_117_);
lean_dec(v_h__1_116_);
v_addr_127_ = lean_ctor_get(v_x_115_, 0);
lean_inc_ref(v_addr_127_);
v_val_128_ = lean_ctor_get(v_x_115_, 1);
lean_inc_ref(v_val_128_);
lean_dec_ref_known(v_x_115_, 2);
v___x_129_ = lean_apply_2(v_h__3_118_, v_addr_127_, v_val_128_);
return v___x_129_;
}
case 3:
{
lean_object* v_p1_130_; lean_object* v_p2_131_; lean_object* v___x_132_; 
lean_dec(v_h__6_121_);
lean_dec(v_h__5_120_);
lean_dec(v_h__3_118_);
lean_dec(v_h__2_117_);
lean_dec(v_h__1_116_);
v_p1_130_ = lean_ctor_get(v_x_115_, 0);
lean_inc(v_p1_130_);
v_p2_131_ = lean_ctor_get(v_x_115_, 1);
lean_inc(v_p2_131_);
lean_dec_ref_known(v_x_115_, 2);
v___x_132_ = lean_apply_2(v_h__4_119_, v_p1_130_, v_p2_131_);
return v___x_132_;
}
case 4:
{
lean_object* v_cond_133_; lean_object* v_thenBr_134_; lean_object* v_elseBr_135_; lean_object* v___x_136_; 
lean_dec(v_h__6_121_);
lean_dec(v_h__4_119_);
lean_dec(v_h__3_118_);
lean_dec(v_h__2_117_);
lean_dec(v_h__1_116_);
v_cond_133_ = lean_ctor_get(v_x_115_, 0);
lean_inc_ref(v_cond_133_);
v_thenBr_134_ = lean_ctor_get(v_x_115_, 1);
lean_inc(v_thenBr_134_);
v_elseBr_135_ = lean_ctor_get(v_x_115_, 2);
lean_inc(v_elseBr_135_);
lean_dec_ref_known(v_x_115_, 3);
v___x_136_ = lean_apply_3(v_h__5_120_, v_cond_133_, v_thenBr_134_, v_elseBr_135_);
return v___x_136_;
}
default: 
{
lean_object* v_cond_137_; lean_object* v_body_138_; lean_object* v___x_139_; 
lean_dec(v_h__5_120_);
lean_dec(v_h__4_119_);
lean_dec(v_h__3_118_);
lean_dec(v_h__2_117_);
lean_dec(v_h__1_116_);
v_cond_137_ = lean_ctor_get(v_x_115_, 0);
lean_inc_ref(v_cond_137_);
v_body_138_ = lean_ctor_get(v_x_115_, 1);
lean_inc(v_body_138_);
lean_dec_ref_known(v_x_115_, 2);
v___x_139_ = lean_apply_2(v_h__6_121_, v_cond_137_, v_body_138_);
return v___x_139_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SafePass_0__Rv2Pancake_Passes_isLoopFree_match__1_splitter(lean_object* v_motive_140_, lean_object* v_x_141_, lean_object* v_h__1_142_, lean_object* v_h__2_143_, lean_object* v_h__3_144_, lean_object* v_h__4_145_, lean_object* v_h__5_146_, lean_object* v_h__6_147_){
_start:
{
switch(lean_obj_tag(v_x_141_))
{
case 0:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec(v_h__6_147_);
lean_dec(v_h__5_146_);
lean_dec(v_h__4_145_);
lean_dec(v_h__3_144_);
lean_dec(v_h__2_143_);
v___x_148_ = lean_box(0);
v___x_149_ = lean_apply_1(v_h__1_142_, v___x_148_);
return v___x_149_;
}
case 1:
{
lean_object* v_v_150_; lean_object* v_e_151_; lean_object* v___x_152_; 
lean_dec(v_h__6_147_);
lean_dec(v_h__5_146_);
lean_dec(v_h__4_145_);
lean_dec(v_h__3_144_);
lean_dec(v_h__1_142_);
v_v_150_ = lean_ctor_get(v_x_141_, 0);
lean_inc(v_v_150_);
v_e_151_ = lean_ctor_get(v_x_141_, 1);
lean_inc_ref(v_e_151_);
lean_dec_ref_known(v_x_141_, 2);
v___x_152_ = lean_apply_2(v_h__2_143_, v_v_150_, v_e_151_);
return v___x_152_;
}
case 2:
{
lean_object* v_addr_153_; lean_object* v_val_154_; lean_object* v___x_155_; 
lean_dec(v_h__6_147_);
lean_dec(v_h__5_146_);
lean_dec(v_h__4_145_);
lean_dec(v_h__2_143_);
lean_dec(v_h__1_142_);
v_addr_153_ = lean_ctor_get(v_x_141_, 0);
lean_inc_ref(v_addr_153_);
v_val_154_ = lean_ctor_get(v_x_141_, 1);
lean_inc_ref(v_val_154_);
lean_dec_ref_known(v_x_141_, 2);
v___x_155_ = lean_apply_2(v_h__3_144_, v_addr_153_, v_val_154_);
return v___x_155_;
}
case 3:
{
lean_object* v_p1_156_; lean_object* v_p2_157_; lean_object* v___x_158_; 
lean_dec(v_h__6_147_);
lean_dec(v_h__5_146_);
lean_dec(v_h__3_144_);
lean_dec(v_h__2_143_);
lean_dec(v_h__1_142_);
v_p1_156_ = lean_ctor_get(v_x_141_, 0);
lean_inc(v_p1_156_);
v_p2_157_ = lean_ctor_get(v_x_141_, 1);
lean_inc(v_p2_157_);
lean_dec_ref_known(v_x_141_, 2);
v___x_158_ = lean_apply_2(v_h__4_145_, v_p1_156_, v_p2_157_);
return v___x_158_;
}
case 4:
{
lean_object* v_cond_159_; lean_object* v_thenBr_160_; lean_object* v_elseBr_161_; lean_object* v___x_162_; 
lean_dec(v_h__6_147_);
lean_dec(v_h__4_145_);
lean_dec(v_h__3_144_);
lean_dec(v_h__2_143_);
lean_dec(v_h__1_142_);
v_cond_159_ = lean_ctor_get(v_x_141_, 0);
lean_inc_ref(v_cond_159_);
v_thenBr_160_ = lean_ctor_get(v_x_141_, 1);
lean_inc(v_thenBr_160_);
v_elseBr_161_ = lean_ctor_get(v_x_141_, 2);
lean_inc(v_elseBr_161_);
lean_dec_ref_known(v_x_141_, 3);
v___x_162_ = lean_apply_3(v_h__5_146_, v_cond_159_, v_thenBr_160_, v_elseBr_161_);
return v___x_162_;
}
default: 
{
lean_object* v_cond_163_; lean_object* v_body_164_; lean_object* v___x_165_; 
lean_dec(v_h__5_146_);
lean_dec(v_h__4_145_);
lean_dec(v_h__3_144_);
lean_dec(v_h__2_143_);
lean_dec(v_h__1_142_);
v_cond_163_ = lean_ctor_get(v_x_141_, 0);
lean_inc_ref(v_cond_163_);
v_body_164_ = lean_ctor_get(v_x_141_, 1);
lean_inc(v_body_164_);
lean_dec_ref_known(v_x_141_, 2);
v___x_165_ = lean_apply_2(v_h__6_147_, v_cond_163_, v_body_164_);
return v___x_165_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_Equiv(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SafePass(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
