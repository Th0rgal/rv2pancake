// Lean compiler output
// Module: Rv2Pancake.Passes.IfElseRecon
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem public import Rv2Pancake.Spec.Equiv public import Rv2Pancake.Passes.SafePass public import Rv2Pancake.Passes.SymCheck
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
lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpExp(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeIfElseRecon(lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_reconIfElse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ifElseRecon"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__1_value;
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__3_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_ifElseReconPass___closed__3_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
return v_x_1_;
}
case 1:
{
lean_object* v_v_2_; lean_object* v_e_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_11_; 
v_v_2_ = lean_ctor_get(v_x_1_, 0);
v_e_3_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_11_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_11_ == 0)
{
v___x_5_ = v_x_1_;
v_isShared_6_ = v_isSharedCheck_11_;
goto v_resetjp_4_;
}
else
{
lean_inc(v_e_3_);
lean_inc(v_v_2_);
lean_dec(v_x_1_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_11_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
lean_object* v___x_7_; lean_object* v___x_9_; 
v___x_7_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_e_3_);
if (v_isShared_6_ == 0)
{
lean_ctor_set(v___x_5_, 1, v___x_7_);
v___x_9_ = v___x_5_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_10_; 
v_reuseFailAlloc_10_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_10_, 0, v_v_2_);
lean_ctor_set(v_reuseFailAlloc_10_, 1, v___x_7_);
v___x_9_ = v_reuseFailAlloc_10_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
return v___x_9_;
}
}
}
case 2:
{
lean_object* v_addr_12_; lean_object* v_val_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_22_; 
v_addr_12_ = lean_ctor_get(v_x_1_, 0);
v_val_13_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_22_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_22_ == 0)
{
v___x_15_ = v_x_1_;
v_isShared_16_ = v_isSharedCheck_22_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_val_13_);
lean_inc(v_addr_12_);
lean_dec(v_x_1_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_22_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_20_; 
v___x_17_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_addr_12_);
v___x_18_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_val_13_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 1, v___x_18_);
lean_ctor_set(v___x_15_, 0, v___x_17_);
v___x_20_ = v___x_15_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_17_);
lean_ctor_set(v_reuseFailAlloc_21_, 1, v___x_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
case 3:
{
lean_object* v_p1_23_; lean_object* v_p2_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_33_; 
v_p1_23_ = lean_ctor_get(v_x_1_, 0);
v_p2_24_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_33_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_33_ == 0)
{
v___x_26_ = v_x_1_;
v_isShared_27_ = v_isSharedCheck_33_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_p2_24_);
lean_inc(v_p1_23_);
lean_dec(v_x_1_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_33_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_31_; 
v___x_28_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p1_23_);
v___x_29_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p2_24_);
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 1, v___x_29_);
lean_ctor_set(v___x_26_, 0, v___x_28_);
v___x_31_ = v___x_26_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_28_);
lean_ctor_set(v_reuseFailAlloc_32_, 1, v___x_29_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
case 4:
{
lean_object* v_cond_34_; lean_object* v_thenBr_35_; lean_object* v_elseBr_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_50_; 
v_cond_34_ = lean_ctor_get(v_x_1_, 0);
v_thenBr_35_ = lean_ctor_get(v_x_1_, 1);
v_elseBr_36_ = lean_ctor_get(v_x_1_, 2);
v_isSharedCheck_50_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_50_ == 0)
{
v___x_38_ = v_x_1_;
v_isShared_39_ = v_isSharedCheck_50_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_elseBr_36_);
lean_inc(v_thenBr_35_);
lean_inc(v_cond_34_);
lean_dec(v_x_1_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_50_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v_c_x27_40_; lean_object* v_t_x27_41_; lean_object* v_f_x27_42_; 
v_c_x27_40_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_cond_34_);
v_t_x27_41_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_thenBr_35_);
v_f_x27_42_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_elseBr_36_);
if (lean_obj_tag(v_c_x27_40_) == 0)
{
uint64_t v_w_43_; uint64_t v___x_44_; uint8_t v___x_45_; 
lean_del_object(v___x_38_);
v_w_43_ = lean_ctor_get_uint64(v_c_x27_40_, 0);
lean_dec_ref_known(v_c_x27_40_, 0);
v___x_44_ = 0ULL;
v___x_45_ = lean_uint64_dec_eq(v_w_43_, v___x_44_);
if (v___x_45_ == 0)
{
lean_dec(v_f_x27_42_);
return v_t_x27_41_;
}
else
{
lean_dec(v_t_x27_41_);
return v_f_x27_42_;
}
}
else
{
uint8_t v___x_46_; 
v___x_46_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v_t_x27_41_, v_f_x27_42_);
if (v___x_46_ == 0)
{
lean_object* v___x_48_; 
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 2, v_f_x27_42_);
lean_ctor_set(v___x_38_, 1, v_t_x27_41_);
lean_ctor_set(v___x_38_, 0, v_c_x27_40_);
v___x_48_ = v___x_38_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_c_x27_40_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v_t_x27_41_);
lean_ctor_set(v_reuseFailAlloc_49_, 2, v_f_x27_42_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
else
{
lean_dec(v_f_x27_42_);
lean_dec_ref(v_c_x27_40_);
lean_del_object(v___x_38_);
return v_t_x27_41_;
}
}
}
}
default: 
{
lean_object* v_cond_51_; lean_object* v_body_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_61_; 
v_cond_51_ = lean_ctor_get(v_x_1_, 0);
v_body_52_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_61_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_61_ == 0)
{
v___x_54_ = v_x_1_;
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_body_52_);
lean_inc(v_cond_51_);
lean_dec(v_x_1_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_56_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_cond_51_);
v___x_57_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_body_52_);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 1, v___x_57_);
lean_ctor_set(v___x_54_, 0, v___x_56_);
v___x_59_ = v___x_54_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v___x_57_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__4_splitter___redArg(lean_object* v_x_62_, lean_object* v_h__1_63_, lean_object* v_h__2_64_, lean_object* v_h__3_65_, lean_object* v_h__4_66_, lean_object* v_h__5_67_, lean_object* v_h__6_68_){
_start:
{
switch(lean_obj_tag(v_x_62_))
{
case 0:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
v___x_69_ = lean_box(0);
v___x_70_ = lean_apply_1(v_h__1_63_, v___x_69_);
return v___x_70_;
}
case 1:
{
lean_object* v_v_71_; lean_object* v_e_72_; lean_object* v___x_73_; 
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__1_63_);
v_v_71_ = lean_ctor_get(v_x_62_, 0);
lean_inc(v_v_71_);
v_e_72_ = lean_ctor_get(v_x_62_, 1);
lean_inc_ref(v_e_72_);
lean_dec_ref_known(v_x_62_, 2);
v___x_73_ = lean_apply_2(v_h__2_64_, v_v_71_, v_e_72_);
return v___x_73_;
}
case 2:
{
lean_object* v_addr_74_; lean_object* v_val_75_; lean_object* v___x_76_; 
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_addr_74_ = lean_ctor_get(v_x_62_, 0);
lean_inc_ref(v_addr_74_);
v_val_75_ = lean_ctor_get(v_x_62_, 1);
lean_inc_ref(v_val_75_);
lean_dec_ref_known(v_x_62_, 2);
v___x_76_ = lean_apply_2(v_h__3_65_, v_addr_74_, v_val_75_);
return v___x_76_;
}
case 3:
{
lean_object* v_p1_77_; lean_object* v_p2_78_; lean_object* v___x_79_; 
lean_dec(v_h__6_68_);
lean_dec(v_h__5_67_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_p1_77_ = lean_ctor_get(v_x_62_, 0);
lean_inc(v_p1_77_);
v_p2_78_ = lean_ctor_get(v_x_62_, 1);
lean_inc(v_p2_78_);
lean_dec_ref_known(v_x_62_, 2);
v___x_79_ = lean_apply_2(v_h__4_66_, v_p1_77_, v_p2_78_);
return v___x_79_;
}
case 4:
{
lean_object* v_cond_80_; lean_object* v_thenBr_81_; lean_object* v_elseBr_82_; lean_object* v___x_83_; 
lean_dec(v_h__6_68_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_cond_80_ = lean_ctor_get(v_x_62_, 0);
lean_inc_ref(v_cond_80_);
v_thenBr_81_ = lean_ctor_get(v_x_62_, 1);
lean_inc(v_thenBr_81_);
v_elseBr_82_ = lean_ctor_get(v_x_62_, 2);
lean_inc(v_elseBr_82_);
lean_dec_ref_known(v_x_62_, 3);
v___x_83_ = lean_apply_3(v_h__5_67_, v_cond_80_, v_thenBr_81_, v_elseBr_82_);
return v___x_83_;
}
default: 
{
lean_object* v_cond_84_; lean_object* v_body_85_; lean_object* v___x_86_; 
lean_dec(v_h__5_67_);
lean_dec(v_h__4_66_);
lean_dec(v_h__3_65_);
lean_dec(v_h__2_64_);
lean_dec(v_h__1_63_);
v_cond_84_ = lean_ctor_get(v_x_62_, 0);
lean_inc_ref(v_cond_84_);
v_body_85_ = lean_ctor_get(v_x_62_, 1);
lean_inc(v_body_85_);
lean_dec_ref_known(v_x_62_, 2);
v___x_86_ = lean_apply_2(v_h__6_68_, v_cond_84_, v_body_85_);
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__4_splitter(lean_object* v_motive_87_, lean_object* v_x_88_, lean_object* v_h__1_89_, lean_object* v_h__2_90_, lean_object* v_h__3_91_, lean_object* v_h__4_92_, lean_object* v_h__5_93_, lean_object* v_h__6_94_){
_start:
{
switch(lean_obj_tag(v_x_88_))
{
case 0:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
lean_dec(v_h__6_94_);
lean_dec(v_h__5_93_);
lean_dec(v_h__4_92_);
lean_dec(v_h__3_91_);
lean_dec(v_h__2_90_);
v___x_95_ = lean_box(0);
v___x_96_ = lean_apply_1(v_h__1_89_, v___x_95_);
return v___x_96_;
}
case 1:
{
lean_object* v_v_97_; lean_object* v_e_98_; lean_object* v___x_99_; 
lean_dec(v_h__6_94_);
lean_dec(v_h__5_93_);
lean_dec(v_h__4_92_);
lean_dec(v_h__3_91_);
lean_dec(v_h__1_89_);
v_v_97_ = lean_ctor_get(v_x_88_, 0);
lean_inc(v_v_97_);
v_e_98_ = lean_ctor_get(v_x_88_, 1);
lean_inc_ref(v_e_98_);
lean_dec_ref_known(v_x_88_, 2);
v___x_99_ = lean_apply_2(v_h__2_90_, v_v_97_, v_e_98_);
return v___x_99_;
}
case 2:
{
lean_object* v_addr_100_; lean_object* v_val_101_; lean_object* v___x_102_; 
lean_dec(v_h__6_94_);
lean_dec(v_h__5_93_);
lean_dec(v_h__4_92_);
lean_dec(v_h__2_90_);
lean_dec(v_h__1_89_);
v_addr_100_ = lean_ctor_get(v_x_88_, 0);
lean_inc_ref(v_addr_100_);
v_val_101_ = lean_ctor_get(v_x_88_, 1);
lean_inc_ref(v_val_101_);
lean_dec_ref_known(v_x_88_, 2);
v___x_102_ = lean_apply_2(v_h__3_91_, v_addr_100_, v_val_101_);
return v___x_102_;
}
case 3:
{
lean_object* v_p1_103_; lean_object* v_p2_104_; lean_object* v___x_105_; 
lean_dec(v_h__6_94_);
lean_dec(v_h__5_93_);
lean_dec(v_h__3_91_);
lean_dec(v_h__2_90_);
lean_dec(v_h__1_89_);
v_p1_103_ = lean_ctor_get(v_x_88_, 0);
lean_inc(v_p1_103_);
v_p2_104_ = lean_ctor_get(v_x_88_, 1);
lean_inc(v_p2_104_);
lean_dec_ref_known(v_x_88_, 2);
v___x_105_ = lean_apply_2(v_h__4_92_, v_p1_103_, v_p2_104_);
return v___x_105_;
}
case 4:
{
lean_object* v_cond_106_; lean_object* v_thenBr_107_; lean_object* v_elseBr_108_; lean_object* v___x_109_; 
lean_dec(v_h__6_94_);
lean_dec(v_h__4_92_);
lean_dec(v_h__3_91_);
lean_dec(v_h__2_90_);
lean_dec(v_h__1_89_);
v_cond_106_ = lean_ctor_get(v_x_88_, 0);
lean_inc_ref(v_cond_106_);
v_thenBr_107_ = lean_ctor_get(v_x_88_, 1);
lean_inc(v_thenBr_107_);
v_elseBr_108_ = lean_ctor_get(v_x_88_, 2);
lean_inc(v_elseBr_108_);
lean_dec_ref_known(v_x_88_, 3);
v___x_109_ = lean_apply_3(v_h__5_93_, v_cond_106_, v_thenBr_107_, v_elseBr_108_);
return v___x_109_;
}
default: 
{
lean_object* v_cond_110_; lean_object* v_body_111_; lean_object* v___x_112_; 
lean_dec(v_h__5_93_);
lean_dec(v_h__4_92_);
lean_dec(v_h__3_91_);
lean_dec(v_h__2_90_);
lean_dec(v_h__1_89_);
v_cond_110_ = lean_ctor_get(v_x_88_, 0);
lean_inc_ref(v_cond_110_);
v_body_111_ = lean_ctor_get(v_x_88_, 1);
lean_inc(v_body_111_);
lean_dec_ref_known(v_x_88_, 2);
v___x_112_ = lean_apply_2(v_h__6_94_, v_cond_110_, v_body_111_);
return v___x_112_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter___redArg(lean_object* v_c_x27_113_, lean_object* v_h__1_114_, lean_object* v_h__2_115_){
_start:
{
if (lean_obj_tag(v_c_x27_113_) == 0)
{
uint64_t v_w_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec(v_h__2_115_);
v_w_116_ = lean_ctor_get_uint64(v_c_x27_113_, 0);
lean_dec_ref_known(v_c_x27_113_, 0);
v___x_117_ = lean_box_uint64(v_w_116_);
v___x_118_ = lean_apply_1(v_h__1_114_, v___x_117_);
return v___x_118_;
}
else
{
lean_object* v___x_119_; 
lean_dec(v_h__1_114_);
v___x_119_ = lean_apply_2(v_h__2_115_, v_c_x27_113_, lean_box(0));
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter(lean_object* v_motive_120_, lean_object* v_c_x27_121_, lean_object* v_h__1_122_, lean_object* v_h__2_123_){
_start:
{
if (lean_obj_tag(v_c_x27_121_) == 0)
{
uint64_t v_w_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v_h__2_123_);
v_w_124_ = lean_ctor_get_uint64(v_c_x27_121_, 0);
lean_dec_ref_known(v_c_x27_121_, 0);
v___x_125_ = lean_box_uint64(v_w_124_);
v___x_126_ = lean_apply_1(v_h__1_122_, v___x_125_);
return v___x_126_;
}
else
{
lean_object* v___x_127_; 
lean_dec(v_h__1_122_);
v___x_127_ = lean_apply_2(v_h__2_123_, v_c_x27_121_, lean_box(0));
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeIfElseRecon(lean_object* v_a_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_a_128_);
return v___x_129_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon(lean_object* v_p_130_, lean_object* v_p_x27_131_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_132_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p_130_);
lean_inc(v_p_x27_131_);
v___x_133_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p_x27_131_);
v___x_134_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v___x_132_, v___x_133_);
lean_dec(v___x_133_);
lean_dec(v___x_132_);
if (v___x_134_ == 0)
{
lean_dec(v_p_x27_131_);
return v___x_134_;
}
else
{
uint8_t v___x_135_; 
v___x_135_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p_x27_131_);
lean_dec(v_p_x27_131_);
return v___x_135_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon___boxed(lean_object* v_p_136_, lean_object* v_p_x27_137_){
_start:
{
uint8_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon(v_p_136_, v_p_x27_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_Equiv(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SafePass(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SymCheck(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Passes_IfElseRecon(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake_Passes_SymCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
