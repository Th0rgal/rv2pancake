// Lean compiler output
// Module: Rv2Pancake.Passes.BlockFusion
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem public import Rv2Pancake.Spec.Equiv public import Rv2Pancake.Passes.SafePass
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
uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_appendSeq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_appendSeq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_appendSeq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_fuseSeqs_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_fuseSeqs_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeBlockFusion(lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkBlockFusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkBlockFusion___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "blockFusion"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__1_value;
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_checkBlockFusion___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__3_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_blockFusionPass___closed__3_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_appendSeq(lean_object* v_p1_1_, lean_object* v_p2_2_){
_start:
{
switch(lean_obj_tag(v_p1_1_))
{
case 0:
{
return v_p2_2_;
}
case 3:
{
if (lean_obj_tag(v_p2_2_) == 0)
{
return v_p1_1_;
}
else
{
lean_object* v_p1_3_; lean_object* v_p2_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_12_; 
v_p1_3_ = lean_ctor_get(v_p1_1_, 0);
v_p2_4_ = lean_ctor_get(v_p1_1_, 1);
v_isSharedCheck_12_ = !lean_is_exclusive(v_p1_1_);
if (v_isSharedCheck_12_ == 0)
{
v___x_6_ = v_p1_1_;
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_p2_4_);
lean_inc(v_p1_3_);
lean_dec(v_p1_1_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_8_; lean_object* v___x_10_; 
v___x_8_ = lp_rv2pancake_Rv2Pancake_Passes_appendSeq(v_p2_4_, v_p2_2_);
if (v_isShared_7_ == 0)
{
lean_ctor_set(v___x_6_, 1, v___x_8_);
v___x_10_ = v___x_6_;
goto v_reusejp_9_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_11_, 0, v_p1_3_);
lean_ctor_set(v_reuseFailAlloc_11_, 1, v___x_8_);
v___x_10_ = v_reuseFailAlloc_11_;
goto v_reusejp_9_;
}
v_reusejp_9_:
{
return v___x_10_;
}
}
}
}
default: 
{
if (lean_obj_tag(v_p2_2_) == 0)
{
return v_p1_1_;
}
else
{
lean_object* v___x_13_; 
v___x_13_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_13_, 0, v_p1_1_);
lean_ctor_set(v___x_13_, 1, v_p2_2_);
return v___x_13_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_appendSeq_match__1_splitter___redArg(lean_object* v_p1_14_, lean_object* v_p2_15_, lean_object* v_h__1_16_, lean_object* v_h__2_17_, lean_object* v_h__3_18_, lean_object* v_h__4_19_){
_start:
{
switch(lean_obj_tag(v_p1_14_))
{
case 0:
{
lean_object* v___x_20_; 
lean_dec(v_h__4_19_);
lean_dec(v_h__3_18_);
lean_dec(v_h__2_17_);
v___x_20_ = lean_apply_1(v_h__1_16_, v_p2_15_);
return v___x_20_;
}
case 3:
{
lean_dec(v_h__4_19_);
lean_dec(v_h__1_16_);
if (lean_obj_tag(v_p2_15_) == 0)
{
lean_object* v___x_21_; 
lean_dec(v_h__3_18_);
v___x_21_ = lean_apply_2(v_h__2_17_, v_p1_14_, lean_box(0));
return v___x_21_;
}
else
{
lean_object* v_p1_22_; lean_object* v_p2_23_; lean_object* v___x_24_; 
lean_dec(v_h__2_17_);
v_p1_22_ = lean_ctor_get(v_p1_14_, 0);
lean_inc(v_p1_22_);
v_p2_23_ = lean_ctor_get(v_p1_14_, 1);
lean_inc(v_p2_23_);
lean_dec_ref_known(v_p1_14_, 2);
v___x_24_ = lean_apply_4(v_h__3_18_, v_p1_22_, v_p2_23_, v_p2_15_, lean_box(0));
return v___x_24_;
}
}
default: 
{
lean_dec(v_h__3_18_);
lean_dec(v_h__1_16_);
if (lean_obj_tag(v_p2_15_) == 0)
{
lean_object* v___x_25_; 
lean_dec(v_h__4_19_);
v___x_25_ = lean_apply_2(v_h__2_17_, v_p1_14_, lean_box(0));
return v___x_25_;
}
else
{
lean_object* v___x_26_; 
lean_dec(v_h__2_17_);
v___x_26_ = lean_apply_5(v_h__4_19_, v_p1_14_, v_p2_15_, lean_box(0), lean_box(0), lean_box(0));
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_appendSeq_match__1_splitter(lean_object* v_motive_27_, lean_object* v_p1_28_, lean_object* v_p2_29_, lean_object* v_h__1_30_, lean_object* v_h__2_31_, lean_object* v_h__3_32_, lean_object* v_h__4_33_){
_start:
{
switch(lean_obj_tag(v_p1_28_))
{
case 0:
{
lean_object* v___x_34_; 
lean_dec(v_h__4_33_);
lean_dec(v_h__3_32_);
lean_dec(v_h__2_31_);
v___x_34_ = lean_apply_1(v_h__1_30_, v_p2_29_);
return v___x_34_;
}
case 3:
{
lean_dec(v_h__4_33_);
lean_dec(v_h__1_30_);
if (lean_obj_tag(v_p2_29_) == 0)
{
lean_object* v___x_35_; 
lean_dec(v_h__3_32_);
v___x_35_ = lean_apply_2(v_h__2_31_, v_p1_28_, lean_box(0));
return v___x_35_;
}
else
{
lean_object* v_p1_36_; lean_object* v_p2_37_; lean_object* v___x_38_; 
lean_dec(v_h__2_31_);
v_p1_36_ = lean_ctor_get(v_p1_28_, 0);
lean_inc(v_p1_36_);
v_p2_37_ = lean_ctor_get(v_p1_28_, 1);
lean_inc(v_p2_37_);
lean_dec_ref_known(v_p1_28_, 2);
v___x_38_ = lean_apply_4(v_h__3_32_, v_p1_36_, v_p2_37_, v_p2_29_, lean_box(0));
return v___x_38_;
}
}
default: 
{
lean_dec(v_h__3_32_);
lean_dec(v_h__1_30_);
if (lean_obj_tag(v_p2_29_) == 0)
{
lean_object* v___x_39_; 
lean_dec(v_h__4_33_);
v___x_39_ = lean_apply_2(v_h__2_31_, v_p1_28_, lean_box(0));
return v___x_39_;
}
else
{
lean_object* v___x_40_; 
lean_dec(v_h__2_31_);
v___x_40_ = lean_apply_5(v_h__4_33_, v_p1_28_, v_p2_29_, lean_box(0), lean_box(0), lean_box(0));
return v___x_40_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(lean_object* v_x_41_){
_start:
{
switch(lean_obj_tag(v_x_41_))
{
case 0:
{
return v_x_41_;
}
case 3:
{
lean_object* v_p1_42_; lean_object* v_p2_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v_p1_42_ = lean_ctor_get(v_x_41_, 0);
lean_inc(v_p1_42_);
v_p2_43_ = lean_ctor_get(v_x_41_, 1);
lean_inc(v_p2_43_);
lean_dec_ref_known(v_x_41_, 2);
v___x_44_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_p1_42_);
v___x_45_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_p2_43_);
v___x_46_ = lp_rv2pancake_Rv2Pancake_Passes_appendSeq(v___x_44_, v___x_45_);
return v___x_46_;
}
case 4:
{
lean_object* v_cond_47_; lean_object* v_thenBr_48_; lean_object* v_elseBr_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_58_; 
v_cond_47_ = lean_ctor_get(v_x_41_, 0);
v_thenBr_48_ = lean_ctor_get(v_x_41_, 1);
v_elseBr_49_ = lean_ctor_get(v_x_41_, 2);
v_isSharedCheck_58_ = !lean_is_exclusive(v_x_41_);
if (v_isSharedCheck_58_ == 0)
{
v___x_51_ = v_x_41_;
v_isShared_52_ = v_isSharedCheck_58_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_elseBr_49_);
lean_inc(v_thenBr_48_);
lean_inc(v_cond_47_);
lean_dec(v_x_41_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_58_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
v___x_53_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_thenBr_48_);
v___x_54_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_elseBr_49_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 2, v___x_54_);
lean_ctor_set(v___x_51_, 1, v___x_53_);
v___x_56_ = v___x_51_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_cond_47_);
lean_ctor_set(v_reuseFailAlloc_57_, 1, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_57_, 2, v___x_54_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
case 5:
{
lean_object* v_cond_59_; lean_object* v_body_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_68_; 
v_cond_59_ = lean_ctor_get(v_x_41_, 0);
v_body_60_ = lean_ctor_get(v_x_41_, 1);
v_isSharedCheck_68_ = !lean_is_exclusive(v_x_41_);
if (v_isSharedCheck_68_ == 0)
{
v___x_62_ = v_x_41_;
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_body_60_);
lean_inc(v_cond_59_);
lean_dec(v_x_41_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_68_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_64_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_body_60_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 1, v___x_64_);
v___x_66_ = v___x_62_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_cond_59_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
default: 
{
return v_x_41_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_fuseSeqs_match__1_splitter___redArg(lean_object* v_x_69_, lean_object* v_h__1_70_, lean_object* v_h__2_71_, lean_object* v_h__3_72_, lean_object* v_h__4_73_, lean_object* v_h__5_74_, lean_object* v_h__6_75_){
_start:
{
switch(lean_obj_tag(v_x_69_))
{
case 0:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
lean_dec(v_h__6_75_);
lean_dec(v_h__5_74_);
lean_dec(v_h__4_73_);
lean_dec(v_h__3_72_);
lean_dec(v_h__2_71_);
v___x_76_ = lean_box(0);
v___x_77_ = lean_apply_1(v_h__1_70_, v___x_76_);
return v___x_77_;
}
case 1:
{
lean_object* v_v_78_; lean_object* v_e_79_; lean_object* v___x_80_; 
lean_dec(v_h__6_75_);
lean_dec(v_h__5_74_);
lean_dec(v_h__4_73_);
lean_dec(v_h__3_72_);
lean_dec(v_h__1_70_);
v_v_78_ = lean_ctor_get(v_x_69_, 0);
lean_inc(v_v_78_);
v_e_79_ = lean_ctor_get(v_x_69_, 1);
lean_inc_ref(v_e_79_);
lean_dec_ref_known(v_x_69_, 2);
v___x_80_ = lean_apply_2(v_h__2_71_, v_v_78_, v_e_79_);
return v___x_80_;
}
case 2:
{
lean_object* v_addr_81_; lean_object* v_val_82_; lean_object* v___x_83_; 
lean_dec(v_h__6_75_);
lean_dec(v_h__5_74_);
lean_dec(v_h__4_73_);
lean_dec(v_h__2_71_);
lean_dec(v_h__1_70_);
v_addr_81_ = lean_ctor_get(v_x_69_, 0);
lean_inc_ref(v_addr_81_);
v_val_82_ = lean_ctor_get(v_x_69_, 1);
lean_inc_ref(v_val_82_);
lean_dec_ref_known(v_x_69_, 2);
v___x_83_ = lean_apply_2(v_h__3_72_, v_addr_81_, v_val_82_);
return v___x_83_;
}
case 3:
{
lean_object* v_p1_84_; lean_object* v_p2_85_; lean_object* v___x_86_; 
lean_dec(v_h__6_75_);
lean_dec(v_h__5_74_);
lean_dec(v_h__3_72_);
lean_dec(v_h__2_71_);
lean_dec(v_h__1_70_);
v_p1_84_ = lean_ctor_get(v_x_69_, 0);
lean_inc(v_p1_84_);
v_p2_85_ = lean_ctor_get(v_x_69_, 1);
lean_inc(v_p2_85_);
lean_dec_ref_known(v_x_69_, 2);
v___x_86_ = lean_apply_2(v_h__4_73_, v_p1_84_, v_p2_85_);
return v___x_86_;
}
case 4:
{
lean_object* v_cond_87_; lean_object* v_thenBr_88_; lean_object* v_elseBr_89_; lean_object* v___x_90_; 
lean_dec(v_h__6_75_);
lean_dec(v_h__4_73_);
lean_dec(v_h__3_72_);
lean_dec(v_h__2_71_);
lean_dec(v_h__1_70_);
v_cond_87_ = lean_ctor_get(v_x_69_, 0);
lean_inc_ref(v_cond_87_);
v_thenBr_88_ = lean_ctor_get(v_x_69_, 1);
lean_inc(v_thenBr_88_);
v_elseBr_89_ = lean_ctor_get(v_x_69_, 2);
lean_inc(v_elseBr_89_);
lean_dec_ref_known(v_x_69_, 3);
v___x_90_ = lean_apply_3(v_h__5_74_, v_cond_87_, v_thenBr_88_, v_elseBr_89_);
return v___x_90_;
}
default: 
{
lean_object* v_cond_91_; lean_object* v_body_92_; lean_object* v___x_93_; 
lean_dec(v_h__5_74_);
lean_dec(v_h__4_73_);
lean_dec(v_h__3_72_);
lean_dec(v_h__2_71_);
lean_dec(v_h__1_70_);
v_cond_91_ = lean_ctor_get(v_x_69_, 0);
lean_inc_ref(v_cond_91_);
v_body_92_ = lean_ctor_get(v_x_69_, 1);
lean_inc(v_body_92_);
lean_dec_ref_known(v_x_69_, 2);
v___x_93_ = lean_apply_2(v_h__6_75_, v_cond_91_, v_body_92_);
return v___x_93_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_BlockFusion_0__Rv2Pancake_Passes_fuseSeqs_match__1_splitter(lean_object* v_motive_94_, lean_object* v_x_95_, lean_object* v_h__1_96_, lean_object* v_h__2_97_, lean_object* v_h__3_98_, lean_object* v_h__4_99_, lean_object* v_h__5_100_, lean_object* v_h__6_101_){
_start:
{
switch(lean_obj_tag(v_x_95_))
{
case 0:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec(v_h__6_101_);
lean_dec(v_h__5_100_);
lean_dec(v_h__4_99_);
lean_dec(v_h__3_98_);
lean_dec(v_h__2_97_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_apply_1(v_h__1_96_, v___x_102_);
return v___x_103_;
}
case 1:
{
lean_object* v_v_104_; lean_object* v_e_105_; lean_object* v___x_106_; 
lean_dec(v_h__6_101_);
lean_dec(v_h__5_100_);
lean_dec(v_h__4_99_);
lean_dec(v_h__3_98_);
lean_dec(v_h__1_96_);
v_v_104_ = lean_ctor_get(v_x_95_, 0);
lean_inc(v_v_104_);
v_e_105_ = lean_ctor_get(v_x_95_, 1);
lean_inc_ref(v_e_105_);
lean_dec_ref_known(v_x_95_, 2);
v___x_106_ = lean_apply_2(v_h__2_97_, v_v_104_, v_e_105_);
return v___x_106_;
}
case 2:
{
lean_object* v_addr_107_; lean_object* v_val_108_; lean_object* v___x_109_; 
lean_dec(v_h__6_101_);
lean_dec(v_h__5_100_);
lean_dec(v_h__4_99_);
lean_dec(v_h__2_97_);
lean_dec(v_h__1_96_);
v_addr_107_ = lean_ctor_get(v_x_95_, 0);
lean_inc_ref(v_addr_107_);
v_val_108_ = lean_ctor_get(v_x_95_, 1);
lean_inc_ref(v_val_108_);
lean_dec_ref_known(v_x_95_, 2);
v___x_109_ = lean_apply_2(v_h__3_98_, v_addr_107_, v_val_108_);
return v___x_109_;
}
case 3:
{
lean_object* v_p1_110_; lean_object* v_p2_111_; lean_object* v___x_112_; 
lean_dec(v_h__6_101_);
lean_dec(v_h__5_100_);
lean_dec(v_h__3_98_);
lean_dec(v_h__2_97_);
lean_dec(v_h__1_96_);
v_p1_110_ = lean_ctor_get(v_x_95_, 0);
lean_inc(v_p1_110_);
v_p2_111_ = lean_ctor_get(v_x_95_, 1);
lean_inc(v_p2_111_);
lean_dec_ref_known(v_x_95_, 2);
v___x_112_ = lean_apply_2(v_h__4_99_, v_p1_110_, v_p2_111_);
return v___x_112_;
}
case 4:
{
lean_object* v_cond_113_; lean_object* v_thenBr_114_; lean_object* v_elseBr_115_; lean_object* v___x_116_; 
lean_dec(v_h__6_101_);
lean_dec(v_h__4_99_);
lean_dec(v_h__3_98_);
lean_dec(v_h__2_97_);
lean_dec(v_h__1_96_);
v_cond_113_ = lean_ctor_get(v_x_95_, 0);
lean_inc_ref(v_cond_113_);
v_thenBr_114_ = lean_ctor_get(v_x_95_, 1);
lean_inc(v_thenBr_114_);
v_elseBr_115_ = lean_ctor_get(v_x_95_, 2);
lean_inc(v_elseBr_115_);
lean_dec_ref_known(v_x_95_, 3);
v___x_116_ = lean_apply_3(v_h__5_100_, v_cond_113_, v_thenBr_114_, v_elseBr_115_);
return v___x_116_;
}
default: 
{
lean_object* v_cond_117_; lean_object* v_body_118_; lean_object* v___x_119_; 
lean_dec(v_h__5_100_);
lean_dec(v_h__4_99_);
lean_dec(v_h__3_98_);
lean_dec(v_h__2_97_);
lean_dec(v_h__1_96_);
v_cond_117_ = lean_ctor_get(v_x_95_, 0);
lean_inc_ref(v_cond_117_);
v_body_118_ = lean_ctor_get(v_x_95_, 1);
lean_inc(v_body_118_);
lean_dec_ref_known(v_x_95_, 2);
v___x_119_ = lean_apply_2(v_h__6_101_, v_cond_117_, v_body_118_);
return v___x_119_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeBlockFusion(lean_object* v_a_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_a_120_);
return v___x_121_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkBlockFusion(lean_object* v_p_122_, lean_object* v_p_x27_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_124_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_p_122_);
lean_inc(v_p_x27_123_);
v___x_125_ = lp_rv2pancake_Rv2Pancake_Passes_fuseSeqs(v_p_x27_123_);
v___x_126_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v___x_124_, v___x_125_);
lean_dec(v___x_125_);
lean_dec(v___x_124_);
if (v___x_126_ == 0)
{
lean_dec(v_p_x27_123_);
return v___x_126_;
}
else
{
uint8_t v___x_127_; 
v___x_127_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p_x27_123_);
lean_dec(v_p_x27_123_);
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkBlockFusion___boxed(lean_object* v_p_128_, lean_object* v_p_x27_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = lp_rv2pancake_Rv2Pancake_Passes_checkBlockFusion(v_p_128_, v_p_x27_129_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_Equiv(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SafePass(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Passes_BlockFusion(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake_Passes_SafePass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
