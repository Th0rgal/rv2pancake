// Lean compiler output
// Module: Rv2Pancake.Passes.DeadRegElim
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_, lean_object* v_h__3_4_, lean_object* v_h__4_5_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
uint64_t v_w_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
v_w_6_ = lean_ctor_get_uint64(v_x_1_, 0);
lean_dec_ref_known(v_x_1_, 0);
v___x_7_ = lean_box_uint64(v_w_6_);
v___x_8_ = lean_apply_1(v_h__1_2_, v___x_7_);
return v___x_8_;
}
case 1:
{
lean_object* v_v_9_; lean_object* v___x_10_; 
lean_dec(v_h__4_5_);
lean_dec(v_h__3_4_);
lean_dec(v_h__1_2_);
v_v_9_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_v_9_);
lean_dec_ref_known(v_x_1_, 1);
v___x_10_ = lean_apply_1(v_h__2_3_, v_v_9_);
return v___x_10_;
}
case 2:
{
lean_object* v_addr_11_; lean_object* v___x_12_; 
lean_dec(v_h__4_5_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_addr_11_ = lean_ctor_get(v_x_1_, 0);
lean_inc_ref(v_addr_11_);
lean_dec_ref_known(v_x_1_, 1);
v___x_12_ = lean_apply_1(v_h__3_4_, v_addr_11_);
return v___x_12_;
}
default: 
{
uint8_t v_op_13_; lean_object* v_e1_14_; lean_object* v_e2_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
lean_dec(v_h__3_4_);
lean_dec(v_h__2_3_);
lean_dec(v_h__1_2_);
v_op_13_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*2);
v_e1_14_ = lean_ctor_get(v_x_1_, 0);
lean_inc_ref(v_e1_14_);
v_e2_15_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_e2_15_);
lean_dec_ref_known(v_x_1_, 2);
v___x_16_ = lean_box(v_op_13_);
v___x_17_ = lean_apply_3(v_h__4_5_, v___x_16_, v_e1_14_, v_e2_15_);
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object* v_motive_18_, lean_object* v_x_19_, lean_object* v_h__1_20_, lean_object* v_h__2_21_, lean_object* v_h__3_22_, lean_object* v_h__4_23_){
_start:
{
switch(lean_obj_tag(v_x_19_))
{
case 0:
{
uint64_t v_w_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec(v_h__4_23_);
lean_dec(v_h__3_22_);
lean_dec(v_h__2_21_);
v_w_24_ = lean_ctor_get_uint64(v_x_19_, 0);
lean_dec_ref_known(v_x_19_, 0);
v___x_25_ = lean_box_uint64(v_w_24_);
v___x_26_ = lean_apply_1(v_h__1_20_, v___x_25_);
return v___x_26_;
}
case 1:
{
lean_object* v_v_27_; lean_object* v___x_28_; 
lean_dec(v_h__4_23_);
lean_dec(v_h__3_22_);
lean_dec(v_h__1_20_);
v_v_27_ = lean_ctor_get(v_x_19_, 0);
lean_inc(v_v_27_);
lean_dec_ref_known(v_x_19_, 1);
v___x_28_ = lean_apply_1(v_h__2_21_, v_v_27_);
return v___x_28_;
}
case 2:
{
lean_object* v_addr_29_; lean_object* v___x_30_; 
lean_dec(v_h__4_23_);
lean_dec(v_h__2_21_);
lean_dec(v_h__1_20_);
v_addr_29_ = lean_ctor_get(v_x_19_, 0);
lean_inc_ref(v_addr_29_);
lean_dec_ref_known(v_x_19_, 1);
v___x_30_ = lean_apply_1(v_h__3_22_, v_addr_29_);
return v___x_30_;
}
default: 
{
uint8_t v_op_31_; lean_object* v_e1_32_; lean_object* v_e2_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
lean_dec(v_h__3_22_);
lean_dec(v_h__2_21_);
lean_dec(v_h__1_20_);
v_op_31_ = lean_ctor_get_uint8(v_x_19_, sizeof(void*)*2);
v_e1_32_ = lean_ctor_get(v_x_19_, 0);
lean_inc_ref(v_e1_32_);
v_e2_33_ = lean_ctor_get(v_x_19_, 1);
lean_inc_ref(v_e2_33_);
lean_dec_ref_known(v_x_19_, 2);
v___x_34_ = lean_box(v_op_31_);
v___x_35_ = lean_apply_3(v_h__4_23_, v___x_34_, v_e1_32_, v_e2_33_);
return v___x_35_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(lean_object* v_x_36_){
_start:
{
switch(lean_obj_tag(v_x_36_))
{
case 1:
{
lean_object* v_e_37_; 
v_e_37_ = lean_ctor_get(v_x_36_, 1);
if (lean_obj_tag(v_e_37_) == 1)
{
lean_object* v_v_38_; lean_object* v_v_39_; uint8_t v___x_40_; 
v_v_38_ = lean_ctor_get(v_x_36_, 0);
v_v_39_ = lean_ctor_get(v_e_37_, 0);
v___x_40_ = lean_nat_dec_eq(v_v_38_, v_v_39_);
if (v___x_40_ == 0)
{
return v_x_36_;
}
else
{
lean_object* v___x_41_; 
lean_dec_ref_known(v_x_36_, 2);
v___x_41_ = lean_box(0);
return v___x_41_;
}
}
else
{
return v_x_36_;
}
}
case 3:
{
lean_object* v_p1_42_; lean_object* v_p2_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_53_; 
v_p1_42_ = lean_ctor_get(v_x_36_, 0);
v_p2_43_ = lean_ctor_get(v_x_36_, 1);
v_isSharedCheck_53_ = !lean_is_exclusive(v_x_36_);
if (v_isSharedCheck_53_ == 0)
{
v___x_45_ = v_x_36_;
v_isShared_46_ = v_isSharedCheck_53_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_p2_43_);
lean_inc(v_p1_42_);
lean_dec(v_x_36_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_53_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_47_; 
v___x_47_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p1_42_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_del_object(v___x_45_);
v_x_36_ = v_p2_43_;
goto _start;
}
else
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p2_43_);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 1, v___x_49_);
lean_ctor_set(v___x_45_, 0, v___x_47_);
v___x_51_ = v___x_45_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v___x_47_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v___x_49_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
}
case 4:
{
lean_object* v_cond_54_; lean_object* v_thenBr_55_; lean_object* v_elseBr_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_65_; 
v_cond_54_ = lean_ctor_get(v_x_36_, 0);
v_thenBr_55_ = lean_ctor_get(v_x_36_, 1);
v_elseBr_56_ = lean_ctor_get(v_x_36_, 2);
v_isSharedCheck_65_ = !lean_is_exclusive(v_x_36_);
if (v_isSharedCheck_65_ == 0)
{
v___x_58_ = v_x_36_;
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_elseBr_56_);
lean_inc(v_thenBr_55_);
lean_inc(v_cond_54_);
lean_dec(v_x_36_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_63_; 
v___x_60_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_thenBr_55_);
v___x_61_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_elseBr_56_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 2, v___x_61_);
lean_ctor_set(v___x_58_, 1, v___x_60_);
v___x_63_ = v___x_58_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_cond_54_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v___x_60_);
lean_ctor_set(v_reuseFailAlloc_64_, 2, v___x_61_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
case 5:
{
lean_object* v_cond_66_; lean_object* v_body_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_75_; 
v_cond_66_ = lean_ctor_get(v_x_36_, 0);
v_body_67_ = lean_ctor_get(v_x_36_, 1);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_36_);
if (v_isSharedCheck_75_ == 0)
{
v___x_69_ = v_x_36_;
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_body_67_);
lean_inc(v_cond_66_);
lean_dec(v_x_36_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_75_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_71_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_body_67_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 1, v___x_71_);
v___x_73_ = v___x_69_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_cond_66_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
default: 
{
return v_x_36_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter___redArg(lean_object* v_x_76_, lean_object* v_h__1_77_, lean_object* v_h__2_78_){
_start:
{
if (lean_obj_tag(v_x_76_) == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec(v_h__2_78_);
v___x_79_ = lean_box(0);
v___x_80_ = lean_apply_1(v_h__1_77_, v___x_79_);
return v___x_80_;
}
else
{
lean_object* v___x_81_; 
lean_dec(v_h__1_77_);
v___x_81_ = lean_apply_2(v_h__2_78_, v_x_76_, lean_box(0));
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__1_splitter(lean_object* v_motive_82_, lean_object* v_x_83_, lean_object* v_h__1_84_, lean_object* v_h__2_85_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec(v_h__2_85_);
v___x_86_ = lean_box(0);
v___x_87_ = lean_apply_1(v_h__1_84_, v___x_86_);
return v___x_87_;
}
else
{
lean_object* v___x_88_; 
lean_dec(v_h__1_84_);
v___x_88_ = lean_apply_2(v_h__2_85_, v_x_83_, lean_box(0));
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter___redArg(lean_object* v_x_89_, lean_object* v_h__1_90_, lean_object* v_h__2_91_, lean_object* v_h__3_92_, lean_object* v_h__4_93_, lean_object* v_h__5_94_, lean_object* v_h__6_95_, lean_object* v_h__7_96_){
_start:
{
switch(lean_obj_tag(v_x_89_))
{
case 0:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
lean_dec(v_h__7_96_);
lean_dec(v_h__6_95_);
lean_dec(v_h__5_94_);
lean_dec(v_h__4_93_);
lean_dec(v_h__3_92_);
lean_dec(v_h__2_91_);
v___x_97_ = lean_box(0);
v___x_98_ = lean_apply_1(v_h__1_90_, v___x_97_);
return v___x_98_;
}
case 1:
{
lean_object* v_e_99_; 
lean_dec(v_h__7_96_);
lean_dec(v_h__6_95_);
lean_dec(v_h__5_94_);
lean_dec(v_h__4_93_);
lean_dec(v_h__1_90_);
v_e_99_ = lean_ctor_get(v_x_89_, 1);
lean_inc_ref(v_e_99_);
if (lean_obj_tag(v_e_99_) == 1)
{
lean_object* v_v_100_; lean_object* v_v_101_; lean_object* v___x_102_; 
lean_dec(v_h__3_92_);
v_v_100_ = lean_ctor_get(v_x_89_, 0);
lean_inc(v_v_100_);
lean_dec_ref_known(v_x_89_, 2);
v_v_101_ = lean_ctor_get(v_e_99_, 0);
lean_inc(v_v_101_);
lean_dec_ref_known(v_e_99_, 1);
v___x_102_ = lean_apply_2(v_h__2_91_, v_v_100_, v_v_101_);
return v___x_102_;
}
else
{
lean_object* v_v_103_; lean_object* v___x_104_; 
lean_dec(v_h__2_91_);
v_v_103_ = lean_ctor_get(v_x_89_, 0);
lean_inc(v_v_103_);
lean_dec_ref_known(v_x_89_, 2);
v___x_104_ = lean_apply_3(v_h__3_92_, v_v_103_, v_e_99_, lean_box(0));
return v___x_104_;
}
}
case 2:
{
lean_object* v_addr_105_; lean_object* v_val_106_; lean_object* v___x_107_; 
lean_dec(v_h__7_96_);
lean_dec(v_h__6_95_);
lean_dec(v_h__5_94_);
lean_dec(v_h__3_92_);
lean_dec(v_h__2_91_);
lean_dec(v_h__1_90_);
v_addr_105_ = lean_ctor_get(v_x_89_, 0);
lean_inc_ref(v_addr_105_);
v_val_106_ = lean_ctor_get(v_x_89_, 1);
lean_inc_ref(v_val_106_);
lean_dec_ref_known(v_x_89_, 2);
v___x_107_ = lean_apply_2(v_h__4_93_, v_addr_105_, v_val_106_);
return v___x_107_;
}
case 3:
{
lean_object* v_p1_108_; lean_object* v_p2_109_; lean_object* v___x_110_; 
lean_dec(v_h__7_96_);
lean_dec(v_h__6_95_);
lean_dec(v_h__4_93_);
lean_dec(v_h__3_92_);
lean_dec(v_h__2_91_);
lean_dec(v_h__1_90_);
v_p1_108_ = lean_ctor_get(v_x_89_, 0);
lean_inc(v_p1_108_);
v_p2_109_ = lean_ctor_get(v_x_89_, 1);
lean_inc(v_p2_109_);
lean_dec_ref_known(v_x_89_, 2);
v___x_110_ = lean_apply_2(v_h__5_94_, v_p1_108_, v_p2_109_);
return v___x_110_;
}
case 4:
{
lean_object* v_cond_111_; lean_object* v_thenBr_112_; lean_object* v_elseBr_113_; lean_object* v___x_114_; 
lean_dec(v_h__7_96_);
lean_dec(v_h__5_94_);
lean_dec(v_h__4_93_);
lean_dec(v_h__3_92_);
lean_dec(v_h__2_91_);
lean_dec(v_h__1_90_);
v_cond_111_ = lean_ctor_get(v_x_89_, 0);
lean_inc_ref(v_cond_111_);
v_thenBr_112_ = lean_ctor_get(v_x_89_, 1);
lean_inc(v_thenBr_112_);
v_elseBr_113_ = lean_ctor_get(v_x_89_, 2);
lean_inc(v_elseBr_113_);
lean_dec_ref_known(v_x_89_, 3);
v___x_114_ = lean_apply_3(v_h__6_95_, v_cond_111_, v_thenBr_112_, v_elseBr_113_);
return v___x_114_;
}
default: 
{
lean_object* v_cond_115_; lean_object* v_body_116_; lean_object* v___x_117_; 
lean_dec(v_h__6_95_);
lean_dec(v_h__5_94_);
lean_dec(v_h__4_93_);
lean_dec(v_h__3_92_);
lean_dec(v_h__2_91_);
lean_dec(v_h__1_90_);
v_cond_115_ = lean_ctor_get(v_x_89_, 0);
lean_inc_ref(v_cond_115_);
v_body_116_ = lean_ctor_get(v_x_89_, 1);
lean_inc(v_body_116_);
lean_dec_ref_known(v_x_89_, 2);
v___x_117_ = lean_apply_2(v_h__7_96_, v_cond_115_, v_body_116_);
return v___x_117_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_DeadRegElim_0__Rv2Pancake_Passes_elimSelfAssign_match__4_splitter(lean_object* v_motive_118_, lean_object* v_x_119_, lean_object* v_h__1_120_, lean_object* v_h__2_121_, lean_object* v_h__3_122_, lean_object* v_h__4_123_, lean_object* v_h__5_124_, lean_object* v_h__6_125_, lean_object* v_h__7_126_){
_start:
{
switch(lean_obj_tag(v_x_119_))
{
case 0:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
lean_dec(v_h__7_126_);
lean_dec(v_h__6_125_);
lean_dec(v_h__5_124_);
lean_dec(v_h__4_123_);
lean_dec(v_h__3_122_);
lean_dec(v_h__2_121_);
v___x_127_ = lean_box(0);
v___x_128_ = lean_apply_1(v_h__1_120_, v___x_127_);
return v___x_128_;
}
case 1:
{
lean_object* v_e_129_; 
lean_dec(v_h__7_126_);
lean_dec(v_h__6_125_);
lean_dec(v_h__5_124_);
lean_dec(v_h__4_123_);
lean_dec(v_h__1_120_);
v_e_129_ = lean_ctor_get(v_x_119_, 1);
lean_inc_ref(v_e_129_);
if (lean_obj_tag(v_e_129_) == 1)
{
lean_object* v_v_130_; lean_object* v_v_131_; lean_object* v___x_132_; 
lean_dec(v_h__3_122_);
v_v_130_ = lean_ctor_get(v_x_119_, 0);
lean_inc(v_v_130_);
lean_dec_ref_known(v_x_119_, 2);
v_v_131_ = lean_ctor_get(v_e_129_, 0);
lean_inc(v_v_131_);
lean_dec_ref_known(v_e_129_, 1);
v___x_132_ = lean_apply_2(v_h__2_121_, v_v_130_, v_v_131_);
return v___x_132_;
}
else
{
lean_object* v_v_133_; lean_object* v___x_134_; 
lean_dec(v_h__2_121_);
v_v_133_ = lean_ctor_get(v_x_119_, 0);
lean_inc(v_v_133_);
lean_dec_ref_known(v_x_119_, 2);
v___x_134_ = lean_apply_3(v_h__3_122_, v_v_133_, v_e_129_, lean_box(0));
return v___x_134_;
}
}
case 2:
{
lean_object* v_addr_135_; lean_object* v_val_136_; lean_object* v___x_137_; 
lean_dec(v_h__7_126_);
lean_dec(v_h__6_125_);
lean_dec(v_h__5_124_);
lean_dec(v_h__3_122_);
lean_dec(v_h__2_121_);
lean_dec(v_h__1_120_);
v_addr_135_ = lean_ctor_get(v_x_119_, 0);
lean_inc_ref(v_addr_135_);
v_val_136_ = lean_ctor_get(v_x_119_, 1);
lean_inc_ref(v_val_136_);
lean_dec_ref_known(v_x_119_, 2);
v___x_137_ = lean_apply_2(v_h__4_123_, v_addr_135_, v_val_136_);
return v___x_137_;
}
case 3:
{
lean_object* v_p1_138_; lean_object* v_p2_139_; lean_object* v___x_140_; 
lean_dec(v_h__7_126_);
lean_dec(v_h__6_125_);
lean_dec(v_h__4_123_);
lean_dec(v_h__3_122_);
lean_dec(v_h__2_121_);
lean_dec(v_h__1_120_);
v_p1_138_ = lean_ctor_get(v_x_119_, 0);
lean_inc(v_p1_138_);
v_p2_139_ = lean_ctor_get(v_x_119_, 1);
lean_inc(v_p2_139_);
lean_dec_ref_known(v_x_119_, 2);
v___x_140_ = lean_apply_2(v_h__5_124_, v_p1_138_, v_p2_139_);
return v___x_140_;
}
case 4:
{
lean_object* v_cond_141_; lean_object* v_thenBr_142_; lean_object* v_elseBr_143_; lean_object* v___x_144_; 
lean_dec(v_h__7_126_);
lean_dec(v_h__5_124_);
lean_dec(v_h__4_123_);
lean_dec(v_h__3_122_);
lean_dec(v_h__2_121_);
lean_dec(v_h__1_120_);
v_cond_141_ = lean_ctor_get(v_x_119_, 0);
lean_inc_ref(v_cond_141_);
v_thenBr_142_ = lean_ctor_get(v_x_119_, 1);
lean_inc(v_thenBr_142_);
v_elseBr_143_ = lean_ctor_get(v_x_119_, 2);
lean_inc(v_elseBr_143_);
lean_dec_ref_known(v_x_119_, 3);
v___x_144_ = lean_apply_3(v_h__6_125_, v_cond_141_, v_thenBr_142_, v_elseBr_143_);
return v___x_144_;
}
default: 
{
lean_object* v_cond_145_; lean_object* v_body_146_; lean_object* v___x_147_; 
lean_dec(v_h__6_125_);
lean_dec(v_h__5_124_);
lean_dec(v_h__4_123_);
lean_dec(v_h__3_122_);
lean_dec(v_h__2_121_);
lean_dec(v_h__1_120_);
v_cond_145_ = lean_ctor_get(v_x_119_, 0);
lean_inc_ref(v_cond_145_);
v_body_146_ = lean_ctor_get(v_x_119_, 1);
lean_inc(v_body_146_);
lean_dec_ref_known(v_x_119_, 2);
v___x_147_ = lean_apply_2(v_h__7_126_, v_cond_145_, v_body_146_);
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeDeadRegElim(lean_object* v_a_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_a_148_);
return v___x_149_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim(lean_object* v_p_150_, lean_object* v_p_x27_151_){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_152_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p_150_);
lean_inc(v_p_x27_151_);
v___x_153_ = lp_rv2pancake_Rv2Pancake_Passes_elimSelfAssign(v_p_x27_151_);
v___x_154_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v___x_152_, v___x_153_);
lean_dec(v___x_153_);
lean_dec(v___x_152_);
if (v___x_154_ == 0)
{
lean_dec(v_p_x27_151_);
return v___x_154_;
}
else
{
uint8_t v___x_155_; 
v___x_155_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p_x27_151_);
lean_dec(v_p_x27_151_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim___boxed(lean_object* v_p_156_, lean_object* v_p_x27_157_){
_start:
{
uint8_t v_res_158_; lean_object* v_r_159_; 
v_res_158_ = lp_rv2pancake_Rv2Pancake_Passes_checkDeadRegElim(v_p_156_, v_p_x27_157_);
v_r_159_ = lean_box(v_res_158_);
return v_r_159_;
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
