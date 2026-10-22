// Lean compiler output
// Module: Rv2Pancake.Passes.WhileRecon
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_WhileRecon_0__Rv2Pancake_Passes_normLoopBody_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_WhileRecon_0__Rv2Pancake_Passes_normLoopBody_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeWhileRecon(lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkWhileRecon(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkWhileRecon___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_normLoopBody, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "whileRecon"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__1_value;
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_checkWhileRecon___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__3_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Passes_whileReconPass = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_whileReconPass___closed__3_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
return v_x_1_;
}
case 3:
{
lean_object* v_p1_2_; lean_object* v_p2_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_14_; 
v_p1_2_ = lean_ctor_get(v_x_1_, 0);
v_p2_3_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_14_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_14_ == 0)
{
v___x_5_ = v_x_1_;
v_isShared_6_ = v_isSharedCheck_14_;
goto v_resetjp_4_;
}
else
{
lean_inc(v_p2_3_);
lean_inc(v_p1_2_);
lean_dec(v_x_1_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_14_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
lean_object* v_p1_x27_7_; lean_object* v_p2_x27_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v_p1_x27_7_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_p1_2_);
v_p2_x27_8_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_p2_3_);
v___x_9_ = lean_box(0);
v___x_10_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v_p2_x27_8_, v___x_9_);
if (v___x_10_ == 0)
{
lean_object* v___x_12_; 
if (v_isShared_6_ == 0)
{
lean_ctor_set(v___x_5_, 1, v_p2_x27_8_);
lean_ctor_set(v___x_5_, 0, v_p1_x27_7_);
v___x_12_ = v___x_5_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v_p1_x27_7_);
lean_ctor_set(v_reuseFailAlloc_13_, 1, v_p2_x27_8_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
return v___x_12_;
}
}
else
{
lean_dec(v_p2_x27_8_);
lean_del_object(v___x_5_);
return v_p1_x27_7_;
}
}
}
case 4:
{
lean_object* v_cond_15_; lean_object* v_thenBr_16_; lean_object* v_elseBr_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_26_; 
v_cond_15_ = lean_ctor_get(v_x_1_, 0);
v_thenBr_16_ = lean_ctor_get(v_x_1_, 1);
v_elseBr_17_ = lean_ctor_get(v_x_1_, 2);
v_isSharedCheck_26_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_26_ == 0)
{
v___x_19_ = v_x_1_;
v_isShared_20_ = v_isSharedCheck_26_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_elseBr_17_);
lean_inc(v_thenBr_16_);
lean_inc(v_cond_15_);
lean_dec(v_x_1_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_26_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_24_; 
v___x_21_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_thenBr_16_);
v___x_22_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_elseBr_17_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 2, v___x_22_);
lean_ctor_set(v___x_19_, 1, v___x_21_);
v___x_24_ = v___x_19_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_cond_15_);
lean_ctor_set(v_reuseFailAlloc_25_, 1, v___x_21_);
lean_ctor_set(v_reuseFailAlloc_25_, 2, v___x_22_);
v___x_24_ = v_reuseFailAlloc_25_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
return v___x_24_;
}
}
}
case 5:
{
lean_object* v_cond_27_; lean_object* v_body_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_36_; 
v_cond_27_ = lean_ctor_get(v_x_1_, 0);
v_body_28_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_36_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_36_ == 0)
{
v___x_30_ = v_x_1_;
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_body_28_);
lean_inc(v_cond_27_);
lean_dec(v_x_1_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_32_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_body_28_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 1, v___x_32_);
v___x_34_ = v___x_30_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_cond_27_);
lean_ctor_set(v_reuseFailAlloc_35_, 1, v___x_32_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
default: 
{
return v_x_1_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_WhileRecon_0__Rv2Pancake_Passes_normLoopBody_match__1_splitter___redArg(lean_object* v_x_37_, lean_object* v_h__1_38_, lean_object* v_h__2_39_, lean_object* v_h__3_40_, lean_object* v_h__4_41_, lean_object* v_h__5_42_, lean_object* v_h__6_43_){
_start:
{
switch(lean_obj_tag(v_x_37_))
{
case 0:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
lean_dec(v_h__6_43_);
lean_dec(v_h__5_42_);
lean_dec(v_h__4_41_);
lean_dec(v_h__3_40_);
lean_dec(v_h__2_39_);
v___x_44_ = lean_box(0);
v___x_45_ = lean_apply_1(v_h__1_38_, v___x_44_);
return v___x_45_;
}
case 1:
{
lean_object* v_v_46_; lean_object* v_e_47_; lean_object* v___x_48_; 
lean_dec(v_h__6_43_);
lean_dec(v_h__5_42_);
lean_dec(v_h__4_41_);
lean_dec(v_h__3_40_);
lean_dec(v_h__1_38_);
v_v_46_ = lean_ctor_get(v_x_37_, 0);
lean_inc(v_v_46_);
v_e_47_ = lean_ctor_get(v_x_37_, 1);
lean_inc_ref(v_e_47_);
lean_dec_ref_known(v_x_37_, 2);
v___x_48_ = lean_apply_2(v_h__2_39_, v_v_46_, v_e_47_);
return v___x_48_;
}
case 2:
{
lean_object* v_addr_49_; lean_object* v_val_50_; lean_object* v___x_51_; 
lean_dec(v_h__6_43_);
lean_dec(v_h__5_42_);
lean_dec(v_h__4_41_);
lean_dec(v_h__2_39_);
lean_dec(v_h__1_38_);
v_addr_49_ = lean_ctor_get(v_x_37_, 0);
lean_inc_ref(v_addr_49_);
v_val_50_ = lean_ctor_get(v_x_37_, 1);
lean_inc_ref(v_val_50_);
lean_dec_ref_known(v_x_37_, 2);
v___x_51_ = lean_apply_2(v_h__3_40_, v_addr_49_, v_val_50_);
return v___x_51_;
}
case 3:
{
lean_object* v_p1_52_; lean_object* v_p2_53_; lean_object* v___x_54_; 
lean_dec(v_h__6_43_);
lean_dec(v_h__5_42_);
lean_dec(v_h__3_40_);
lean_dec(v_h__2_39_);
lean_dec(v_h__1_38_);
v_p1_52_ = lean_ctor_get(v_x_37_, 0);
lean_inc(v_p1_52_);
v_p2_53_ = lean_ctor_get(v_x_37_, 1);
lean_inc(v_p2_53_);
lean_dec_ref_known(v_x_37_, 2);
v___x_54_ = lean_apply_2(v_h__4_41_, v_p1_52_, v_p2_53_);
return v___x_54_;
}
case 4:
{
lean_object* v_cond_55_; lean_object* v_thenBr_56_; lean_object* v_elseBr_57_; lean_object* v___x_58_; 
lean_dec(v_h__6_43_);
lean_dec(v_h__4_41_);
lean_dec(v_h__3_40_);
lean_dec(v_h__2_39_);
lean_dec(v_h__1_38_);
v_cond_55_ = lean_ctor_get(v_x_37_, 0);
lean_inc_ref(v_cond_55_);
v_thenBr_56_ = lean_ctor_get(v_x_37_, 1);
lean_inc(v_thenBr_56_);
v_elseBr_57_ = lean_ctor_get(v_x_37_, 2);
lean_inc(v_elseBr_57_);
lean_dec_ref_known(v_x_37_, 3);
v___x_58_ = lean_apply_3(v_h__5_42_, v_cond_55_, v_thenBr_56_, v_elseBr_57_);
return v___x_58_;
}
default: 
{
lean_object* v_cond_59_; lean_object* v_body_60_; lean_object* v___x_61_; 
lean_dec(v_h__5_42_);
lean_dec(v_h__4_41_);
lean_dec(v_h__3_40_);
lean_dec(v_h__2_39_);
lean_dec(v_h__1_38_);
v_cond_59_ = lean_ctor_get(v_x_37_, 0);
lean_inc_ref(v_cond_59_);
v_body_60_ = lean_ctor_get(v_x_37_, 1);
lean_inc(v_body_60_);
lean_dec_ref_known(v_x_37_, 2);
v___x_61_ = lean_apply_2(v_h__6_43_, v_cond_59_, v_body_60_);
return v___x_61_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_WhileRecon_0__Rv2Pancake_Passes_normLoopBody_match__1_splitter(lean_object* v_motive_62_, lean_object* v_x_63_, lean_object* v_h__1_64_, lean_object* v_h__2_65_, lean_object* v_h__3_66_, lean_object* v_h__4_67_, lean_object* v_h__5_68_, lean_object* v_h__6_69_){
_start:
{
switch(lean_obj_tag(v_x_63_))
{
case 0:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
lean_dec(v_h__6_69_);
lean_dec(v_h__5_68_);
lean_dec(v_h__4_67_);
lean_dec(v_h__3_66_);
lean_dec(v_h__2_65_);
v___x_70_ = lean_box(0);
v___x_71_ = lean_apply_1(v_h__1_64_, v___x_70_);
return v___x_71_;
}
case 1:
{
lean_object* v_v_72_; lean_object* v_e_73_; lean_object* v___x_74_; 
lean_dec(v_h__6_69_);
lean_dec(v_h__5_68_);
lean_dec(v_h__4_67_);
lean_dec(v_h__3_66_);
lean_dec(v_h__1_64_);
v_v_72_ = lean_ctor_get(v_x_63_, 0);
lean_inc(v_v_72_);
v_e_73_ = lean_ctor_get(v_x_63_, 1);
lean_inc_ref(v_e_73_);
lean_dec_ref_known(v_x_63_, 2);
v___x_74_ = lean_apply_2(v_h__2_65_, v_v_72_, v_e_73_);
return v___x_74_;
}
case 2:
{
lean_object* v_addr_75_; lean_object* v_val_76_; lean_object* v___x_77_; 
lean_dec(v_h__6_69_);
lean_dec(v_h__5_68_);
lean_dec(v_h__4_67_);
lean_dec(v_h__2_65_);
lean_dec(v_h__1_64_);
v_addr_75_ = lean_ctor_get(v_x_63_, 0);
lean_inc_ref(v_addr_75_);
v_val_76_ = lean_ctor_get(v_x_63_, 1);
lean_inc_ref(v_val_76_);
lean_dec_ref_known(v_x_63_, 2);
v___x_77_ = lean_apply_2(v_h__3_66_, v_addr_75_, v_val_76_);
return v___x_77_;
}
case 3:
{
lean_object* v_p1_78_; lean_object* v_p2_79_; lean_object* v___x_80_; 
lean_dec(v_h__6_69_);
lean_dec(v_h__5_68_);
lean_dec(v_h__3_66_);
lean_dec(v_h__2_65_);
lean_dec(v_h__1_64_);
v_p1_78_ = lean_ctor_get(v_x_63_, 0);
lean_inc(v_p1_78_);
v_p2_79_ = lean_ctor_get(v_x_63_, 1);
lean_inc(v_p2_79_);
lean_dec_ref_known(v_x_63_, 2);
v___x_80_ = lean_apply_2(v_h__4_67_, v_p1_78_, v_p2_79_);
return v___x_80_;
}
case 4:
{
lean_object* v_cond_81_; lean_object* v_thenBr_82_; lean_object* v_elseBr_83_; lean_object* v___x_84_; 
lean_dec(v_h__6_69_);
lean_dec(v_h__4_67_);
lean_dec(v_h__3_66_);
lean_dec(v_h__2_65_);
lean_dec(v_h__1_64_);
v_cond_81_ = lean_ctor_get(v_x_63_, 0);
lean_inc_ref(v_cond_81_);
v_thenBr_82_ = lean_ctor_get(v_x_63_, 1);
lean_inc(v_thenBr_82_);
v_elseBr_83_ = lean_ctor_get(v_x_63_, 2);
lean_inc(v_elseBr_83_);
lean_dec_ref_known(v_x_63_, 3);
v___x_84_ = lean_apply_3(v_h__5_68_, v_cond_81_, v_thenBr_82_, v_elseBr_83_);
return v___x_84_;
}
default: 
{
lean_object* v_cond_85_; lean_object* v_body_86_; lean_object* v___x_87_; 
lean_dec(v_h__5_68_);
lean_dec(v_h__4_67_);
lean_dec(v_h__3_66_);
lean_dec(v_h__2_65_);
lean_dec(v_h__1_64_);
v_cond_85_ = lean_ctor_get(v_x_63_, 0);
lean_inc_ref(v_cond_85_);
v_body_86_ = lean_ctor_get(v_x_63_, 1);
lean_inc(v_body_86_);
lean_dec_ref_known(v_x_63_, 2);
v___x_87_ = lean_apply_2(v_h__6_69_, v_cond_85_, v_body_86_);
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeWhileRecon(lean_object* v_a_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_a_88_);
return v___x_89_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkWhileRecon(lean_object* v_p_90_, lean_object* v_p_x27_91_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_92_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_p_90_);
lean_inc(v_p_x27_91_);
v___x_93_ = lp_rv2pancake_Rv2Pancake_Passes_normLoopBody(v_p_x27_91_);
v___x_94_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v___x_92_, v___x_93_);
lean_dec(v___x_93_);
lean_dec(v___x_92_);
if (v___x_94_ == 0)
{
lean_dec(v_p_x27_91_);
return v___x_94_;
}
else
{
uint8_t v___x_95_; 
v___x_95_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p_x27_91_);
lean_dec(v_p_x27_91_);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkWhileRecon___boxed(lean_object* v_p_96_, lean_object* v_p_x27_97_){
_start:
{
uint8_t v_res_98_; lean_object* v_r_99_; 
v_res_98_ = lp_rv2pancake_Rv2Pancake_Passes_checkWhileRecon(v_p_96_, v_p_x27_97_);
v_r_99_ = lean_box(v_res_98_);
return v_r_99_;
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
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Passes_WhileRecon(uint8_t builtin) {
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
