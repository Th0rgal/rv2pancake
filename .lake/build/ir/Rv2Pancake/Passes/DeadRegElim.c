// Lean compiler output
// Module: Rv2Pancake.Passes.DeadRegElim
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpExp(lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeDeadRegElim(lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "deadRegElim"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__1_value;
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__3_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_deadRegElimPass___closed__3_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(lean_object* v_x_1_){
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
lean_object* v_e_2_; 
v_e_2_ = lean_ctor_get(v_x_1_, 1);
if (lean_obj_tag(v_e_2_) == 1)
{
lean_object* v_v_3_; lean_object* v_v_4_; uint8_t v___x_5_; 
v_v_3_ = lean_ctor_get(v_x_1_, 0);
v_v_4_ = lean_ctor_get(v_e_2_, 0);
v___x_5_ = lean_nat_dec_eq(v_v_3_, v_v_4_);
if (v___x_5_ == 0)
{
return v_x_1_;
}
else
{
lean_object* v___x_6_; 
lean_dec_ref_known(v_x_1_, 2);
v___x_6_ = lean_box(0);
return v___x_6_;
}
}
else
{
lean_object* v_v_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_15_; 
lean_inc_ref(v_e_2_);
v_v_7_ = lean_ctor_get(v_x_1_, 0);
v_isSharedCheck_15_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_15_ == 0)
{
lean_object* v_unused_16_; 
v_unused_16_ = lean_ctor_get(v_x_1_, 1);
lean_dec(v_unused_16_);
v___x_9_ = v_x_1_;
v_isShared_10_ = v_isSharedCheck_15_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_v_7_);
lean_dec(v_x_1_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_15_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_11_; lean_object* v___x_13_; 
v___x_11_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_e_2_);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 1, v___x_11_);
v___x_13_ = v___x_9_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_14_, 0, v_v_7_);
lean_ctor_set(v_reuseFailAlloc_14_, 1, v___x_11_);
v___x_13_ = v_reuseFailAlloc_14_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
return v___x_13_;
}
}
}
}
case 2:
{
lean_object* v_addr_17_; lean_object* v_val_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_27_; 
v_addr_17_ = lean_ctor_get(v_x_1_, 0);
v_val_18_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_27_ == 0)
{
v___x_20_ = v_x_1_;
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_val_18_);
lean_inc(v_addr_17_);
lean_dec(v_x_1_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_22_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_addr_17_);
v___x_23_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_val_18_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 1, v___x_23_);
lean_ctor_set(v___x_20_, 0, v___x_22_);
v___x_25_ = v___x_20_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___x_22_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v___x_23_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
case 3:
{
lean_object* v_p1_28_; lean_object* v_p2_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_39_; 
v_p1_28_ = lean_ctor_get(v_x_1_, 0);
v_p2_29_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_39_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_39_ == 0)
{
v___x_31_ = v_x_1_;
v_isShared_32_ = v_isSharedCheck_39_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_p2_29_);
lean_inc(v_p1_28_);
lean_dec(v_x_1_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_39_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; 
v___x_33_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p1_28_);
if (lean_obj_tag(v___x_33_) == 0)
{
lean_del_object(v___x_31_);
v_x_1_ = v_p2_29_;
goto _start;
}
else
{
lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_35_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p2_29_);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 1, v___x_35_);
lean_ctor_set(v___x_31_, 0, v___x_33_);
v___x_37_ = v___x_31_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_33_);
lean_ctor_set(v_reuseFailAlloc_38_, 1, v___x_35_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
case 4:
{
lean_object* v_cond_40_; lean_object* v_thenBr_41_; lean_object* v_elseBr_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_52_; 
v_cond_40_ = lean_ctor_get(v_x_1_, 0);
v_thenBr_41_ = lean_ctor_get(v_x_1_, 1);
v_elseBr_42_ = lean_ctor_get(v_x_1_, 2);
v_isSharedCheck_52_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_52_ == 0)
{
v___x_44_ = v_x_1_;
v_isShared_45_ = v_isSharedCheck_52_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_elseBr_42_);
lean_inc(v_thenBr_41_);
lean_inc(v_cond_40_);
lean_dec(v_x_1_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_52_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_46_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_cond_40_);
v___x_47_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_thenBr_41_);
v___x_48_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_elseBr_42_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 2, v___x_48_);
lean_ctor_set(v___x_44_, 1, v___x_47_);
lean_ctor_set(v___x_44_, 0, v___x_46_);
v___x_50_ = v___x_44_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_46_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v___x_47_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v___x_48_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
default: 
{
lean_object* v_cond_53_; lean_object* v_body_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_63_; 
v_cond_53_ = lean_ctor_get(v_x_1_, 0);
v_body_54_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_63_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_63_ == 0)
{
v___x_56_ = v_x_1_;
v_isShared_57_ = v_isSharedCheck_63_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_body_54_);
lean_inc(v_cond_53_);
lean_dec(v_x_1_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_63_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_61_; 
v___x_58_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_cond_53_);
v___x_59_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_body_54_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 1, v___x_59_);
lean_ctor_set(v___x_56_, 0, v___x_58_);
v___x_61_ = v___x_56_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v___x_58_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v___x_59_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter___redArg(lean_object* v_x_64_, lean_object* v_h__1_65_, lean_object* v_h__2_66_, lean_object* v_h__3_67_, lean_object* v_h__4_68_, lean_object* v_h__5_69_, lean_object* v_h__6_70_, lean_object* v_h__7_71_){
_start:
{
switch(lean_obj_tag(v_x_64_))
{
case 0:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v_h__7_71_);
lean_dec(v_h__6_70_);
lean_dec(v_h__5_69_);
lean_dec(v_h__4_68_);
lean_dec(v_h__3_67_);
lean_dec(v_h__2_66_);
v___x_72_ = lean_box(0);
v___x_73_ = lean_apply_1(v_h__1_65_, v___x_72_);
return v___x_73_;
}
case 1:
{
lean_object* v_e_74_; 
lean_dec(v_h__7_71_);
lean_dec(v_h__6_70_);
lean_dec(v_h__5_69_);
lean_dec(v_h__4_68_);
lean_dec(v_h__1_65_);
v_e_74_ = lean_ctor_get(v_x_64_, 1);
lean_inc_ref(v_e_74_);
if (lean_obj_tag(v_e_74_) == 1)
{
lean_object* v_v_75_; lean_object* v_v_76_; lean_object* v___x_77_; 
lean_dec(v_h__3_67_);
v_v_75_ = lean_ctor_get(v_x_64_, 0);
lean_inc(v_v_75_);
lean_dec_ref_known(v_x_64_, 2);
v_v_76_ = lean_ctor_get(v_e_74_, 0);
lean_inc(v_v_76_);
lean_dec_ref_known(v_e_74_, 1);
v___x_77_ = lean_apply_2(v_h__2_66_, v_v_75_, v_v_76_);
return v___x_77_;
}
else
{
lean_object* v_v_78_; lean_object* v___x_79_; 
lean_dec(v_h__2_66_);
v_v_78_ = lean_ctor_get(v_x_64_, 0);
lean_inc(v_v_78_);
lean_dec_ref_known(v_x_64_, 2);
v___x_79_ = lean_apply_3(v_h__3_67_, v_v_78_, v_e_74_, lean_box(0));
return v___x_79_;
}
}
case 2:
{
lean_object* v_addr_80_; lean_object* v_val_81_; lean_object* v___x_82_; 
lean_dec(v_h__7_71_);
lean_dec(v_h__6_70_);
lean_dec(v_h__5_69_);
lean_dec(v_h__3_67_);
lean_dec(v_h__2_66_);
lean_dec(v_h__1_65_);
v_addr_80_ = lean_ctor_get(v_x_64_, 0);
lean_inc_ref(v_addr_80_);
v_val_81_ = lean_ctor_get(v_x_64_, 1);
lean_inc_ref(v_val_81_);
lean_dec_ref_known(v_x_64_, 2);
v___x_82_ = lean_apply_2(v_h__4_68_, v_addr_80_, v_val_81_);
return v___x_82_;
}
case 3:
{
lean_object* v_p1_83_; lean_object* v_p2_84_; lean_object* v___x_85_; 
lean_dec(v_h__7_71_);
lean_dec(v_h__6_70_);
lean_dec(v_h__4_68_);
lean_dec(v_h__3_67_);
lean_dec(v_h__2_66_);
lean_dec(v_h__1_65_);
v_p1_83_ = lean_ctor_get(v_x_64_, 0);
lean_inc(v_p1_83_);
v_p2_84_ = lean_ctor_get(v_x_64_, 1);
lean_inc(v_p2_84_);
lean_dec_ref_known(v_x_64_, 2);
v___x_85_ = lean_apply_2(v_h__5_69_, v_p1_83_, v_p2_84_);
return v___x_85_;
}
case 4:
{
lean_object* v_cond_86_; lean_object* v_thenBr_87_; lean_object* v_elseBr_88_; lean_object* v___x_89_; 
lean_dec(v_h__7_71_);
lean_dec(v_h__5_69_);
lean_dec(v_h__4_68_);
lean_dec(v_h__3_67_);
lean_dec(v_h__2_66_);
lean_dec(v_h__1_65_);
v_cond_86_ = lean_ctor_get(v_x_64_, 0);
lean_inc_ref(v_cond_86_);
v_thenBr_87_ = lean_ctor_get(v_x_64_, 1);
lean_inc(v_thenBr_87_);
v_elseBr_88_ = lean_ctor_get(v_x_64_, 2);
lean_inc(v_elseBr_88_);
lean_dec_ref_known(v_x_64_, 3);
v___x_89_ = lean_apply_3(v_h__6_70_, v_cond_86_, v_thenBr_87_, v_elseBr_88_);
return v___x_89_;
}
default: 
{
lean_object* v_cond_90_; lean_object* v_body_91_; lean_object* v___x_92_; 
lean_dec(v_h__6_70_);
lean_dec(v_h__5_69_);
lean_dec(v_h__4_68_);
lean_dec(v_h__3_67_);
lean_dec(v_h__2_66_);
lean_dec(v_h__1_65_);
v_cond_90_ = lean_ctor_get(v_x_64_, 0);
lean_inc_ref(v_cond_90_);
v_body_91_ = lean_ctor_get(v_x_64_, 1);
lean_inc(v_body_91_);
lean_dec_ref_known(v_x_64_, 2);
v___x_92_ = lean_apply_2(v_h__7_71_, v_cond_90_, v_body_91_);
return v___x_92_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter(lean_object* v_motive_93_, lean_object* v_x_94_, lean_object* v_h__1_95_, lean_object* v_h__2_96_, lean_object* v_h__3_97_, lean_object* v_h__4_98_, lean_object* v_h__5_99_, lean_object* v_h__6_100_, lean_object* v_h__7_101_){
_start:
{
switch(lean_obj_tag(v_x_94_))
{
case 0:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec(v_h__7_101_);
lean_dec(v_h__6_100_);
lean_dec(v_h__5_99_);
lean_dec(v_h__4_98_);
lean_dec(v_h__3_97_);
lean_dec(v_h__2_96_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_apply_1(v_h__1_95_, v___x_102_);
return v___x_103_;
}
case 1:
{
lean_object* v_e_104_; 
lean_dec(v_h__7_101_);
lean_dec(v_h__6_100_);
lean_dec(v_h__5_99_);
lean_dec(v_h__4_98_);
lean_dec(v_h__1_95_);
v_e_104_ = lean_ctor_get(v_x_94_, 1);
lean_inc_ref(v_e_104_);
if (lean_obj_tag(v_e_104_) == 1)
{
lean_object* v_v_105_; lean_object* v_v_106_; lean_object* v___x_107_; 
lean_dec(v_h__3_97_);
v_v_105_ = lean_ctor_get(v_x_94_, 0);
lean_inc(v_v_105_);
lean_dec_ref_known(v_x_94_, 2);
v_v_106_ = lean_ctor_get(v_e_104_, 0);
lean_inc(v_v_106_);
lean_dec_ref_known(v_e_104_, 1);
v___x_107_ = lean_apply_2(v_h__2_96_, v_v_105_, v_v_106_);
return v___x_107_;
}
else
{
lean_object* v_v_108_; lean_object* v___x_109_; 
lean_dec(v_h__2_96_);
v_v_108_ = lean_ctor_get(v_x_94_, 0);
lean_inc(v_v_108_);
lean_dec_ref_known(v_x_94_, 2);
v___x_109_ = lean_apply_3(v_h__3_97_, v_v_108_, v_e_104_, lean_box(0));
return v___x_109_;
}
}
case 2:
{
lean_object* v_addr_110_; lean_object* v_val_111_; lean_object* v___x_112_; 
lean_dec(v_h__7_101_);
lean_dec(v_h__6_100_);
lean_dec(v_h__5_99_);
lean_dec(v_h__3_97_);
lean_dec(v_h__2_96_);
lean_dec(v_h__1_95_);
v_addr_110_ = lean_ctor_get(v_x_94_, 0);
lean_inc_ref(v_addr_110_);
v_val_111_ = lean_ctor_get(v_x_94_, 1);
lean_inc_ref(v_val_111_);
lean_dec_ref_known(v_x_94_, 2);
v___x_112_ = lean_apply_2(v_h__4_98_, v_addr_110_, v_val_111_);
return v___x_112_;
}
case 3:
{
lean_object* v_p1_113_; lean_object* v_p2_114_; lean_object* v___x_115_; 
lean_dec(v_h__7_101_);
lean_dec(v_h__6_100_);
lean_dec(v_h__4_98_);
lean_dec(v_h__3_97_);
lean_dec(v_h__2_96_);
lean_dec(v_h__1_95_);
v_p1_113_ = lean_ctor_get(v_x_94_, 0);
lean_inc(v_p1_113_);
v_p2_114_ = lean_ctor_get(v_x_94_, 1);
lean_inc(v_p2_114_);
lean_dec_ref_known(v_x_94_, 2);
v___x_115_ = lean_apply_2(v_h__5_99_, v_p1_113_, v_p2_114_);
return v___x_115_;
}
case 4:
{
lean_object* v_cond_116_; lean_object* v_thenBr_117_; lean_object* v_elseBr_118_; lean_object* v___x_119_; 
lean_dec(v_h__7_101_);
lean_dec(v_h__5_99_);
lean_dec(v_h__4_98_);
lean_dec(v_h__3_97_);
lean_dec(v_h__2_96_);
lean_dec(v_h__1_95_);
v_cond_116_ = lean_ctor_get(v_x_94_, 0);
lean_inc_ref(v_cond_116_);
v_thenBr_117_ = lean_ctor_get(v_x_94_, 1);
lean_inc(v_thenBr_117_);
v_elseBr_118_ = lean_ctor_get(v_x_94_, 2);
lean_inc(v_elseBr_118_);
lean_dec_ref_known(v_x_94_, 3);
v___x_119_ = lean_apply_3(v_h__6_100_, v_cond_116_, v_thenBr_117_, v_elseBr_118_);
return v___x_119_;
}
default: 
{
lean_object* v_cond_120_; lean_object* v_body_121_; lean_object* v___x_122_; 
lean_dec(v_h__6_100_);
lean_dec(v_h__5_99_);
lean_dec(v_h__4_98_);
lean_dec(v_h__3_97_);
lean_dec(v_h__2_96_);
lean_dec(v_h__1_95_);
v_cond_120_ = lean_ctor_get(v_x_94_, 0);
lean_inc_ref(v_cond_120_);
v_body_121_ = lean_ctor_get(v_x_94_, 1);
lean_inc(v_body_121_);
lean_dec_ref_known(v_x_94_, 2);
v___x_122_ = lean_apply_2(v_h__7_101_, v_cond_120_, v_body_121_);
return v___x_122_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter___redArg(lean_object* v_x_123_, lean_object* v_h__1_124_, lean_object* v_h__2_125_){
_start:
{
if (lean_obj_tag(v_x_123_) == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
lean_dec(v_h__2_125_);
v___x_126_ = lean_box(0);
v___x_127_ = lean_apply_1(v_h__1_124_, v___x_126_);
return v___x_127_;
}
else
{
lean_object* v___x_128_; 
lean_dec(v_h__1_124_);
v___x_128_ = lean_apply_2(v_h__2_125_, v_x_123_, lean_box(0));
return v___x_128_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter(lean_object* v_motive_129_, lean_object* v_x_130_, lean_object* v_h__1_131_, lean_object* v_h__2_132_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
lean_object* v___x_133_; lean_object* v___x_134_; 
lean_dec(v_h__2_132_);
v___x_133_ = lean_box(0);
v___x_134_ = lean_apply_1(v_h__1_131_, v___x_133_);
return v___x_134_;
}
else
{
lean_object* v___x_135_; 
lean_dec(v_h__1_131_);
v___x_135_ = lean_apply_2(v_h__2_132_, v_x_130_, lean_box(0));
return v___x_135_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeDeadRegElim(lean_object* v_a_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_a_136_);
return v___x_137_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim(lean_object* v_p_138_, lean_object* v_p_x27_139_){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_140_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p_138_);
lean_inc(v_p_x27_139_);
v___x_141_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p_x27_139_);
v___x_142_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v___x_140_, v___x_141_);
lean_dec(v___x_141_);
lean_dec(v___x_140_);
if (v___x_142_ == 0)
{
lean_dec(v_p_x27_139_);
return v___x_142_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p_x27_139_);
lean_dec(v_p_x27_139_);
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim___boxed(lean_object* v_p_144_, lean_object* v_p_x27_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim(v_p_144_, v_p_x27_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
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
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Passes_DeadRegElim(uint8_t builtin) {
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
