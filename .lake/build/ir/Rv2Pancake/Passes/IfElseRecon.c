// Lean compiler output
// Module: Rv2Pancake.Passes.IfElseRecon
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
uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Passes_reconIfElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_reconIfElse___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_reconIfElse___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_, lean_object* v_h__3_4_, lean_object* v_h__4_5_){
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
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object* v_motive_18_, lean_object* v_x_19_, lean_object* v_h__1_20_, lean_object* v_h__2_21_, lean_object* v_h__3_22_, lean_object* v_h__4_23_){
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(lean_object* v_x_38_){
_start:
{
switch(lean_obj_tag(v_x_38_))
{
case 0:
{
return v_x_38_;
}
case 3:
{
lean_object* v_p1_39_; lean_object* v_p2_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_49_; 
v_p1_39_ = lean_ctor_get(v_x_38_, 0);
v_p2_40_ = lean_ctor_get(v_x_38_, 1);
v_isSharedCheck_49_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_49_ == 0)
{
v___x_42_ = v_x_38_;
v_isShared_43_ = v_isSharedCheck_49_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_p2_40_);
lean_inc(v_p1_39_);
lean_dec(v_x_38_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_49_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_47_; 
v___x_44_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p1_39_);
v___x_45_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p2_40_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 1, v___x_45_);
lean_ctor_set(v___x_42_, 0, v___x_44_);
v___x_47_ = v___x_42_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v___x_44_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v___x_45_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
case 4:
{
lean_object* v_cond_50_; lean_object* v_thenBr_51_; lean_object* v_elseBr_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_64_; 
v_cond_50_ = lean_ctor_get(v_x_38_, 0);
v_thenBr_51_ = lean_ctor_get(v_x_38_, 1);
v_elseBr_52_ = lean_ctor_get(v_x_38_, 2);
v_isSharedCheck_64_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_64_ == 0)
{
v___x_54_ = v_x_38_;
v_isShared_55_ = v_isSharedCheck_64_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_elseBr_52_);
lean_inc(v_thenBr_51_);
lean_inc(v_cond_50_);
lean_dec(v_x_38_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_64_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v_f_x27_56_; lean_object* v___x_57_; uint8_t v___x_58_; 
v_f_x27_56_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_elseBr_52_);
v___x_57_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Passes_reconIfElse___closed__0));
v___x_58_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanExp_decEq(v_cond_50_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v_t_x27_59_; uint8_t v___x_60_; 
v_t_x27_59_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_thenBr_51_);
v___x_60_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v_t_x27_59_, v_f_x27_56_);
if (v___x_60_ == 0)
{
lean_object* v___x_62_; 
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 2, v_f_x27_56_);
lean_ctor_set(v___x_54_, 1, v_t_x27_59_);
v___x_62_ = v___x_54_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_cond_50_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_t_x27_59_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_f_x27_56_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
else
{
lean_dec(v_f_x27_56_);
lean_del_object(v___x_54_);
lean_dec_ref(v_cond_50_);
return v_t_x27_59_;
}
}
else
{
lean_del_object(v___x_54_);
lean_dec(v_thenBr_51_);
lean_dec_ref(v_cond_50_);
return v_f_x27_56_;
}
}
}
case 5:
{
lean_object* v_cond_65_; lean_object* v_body_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_74_; 
v_cond_65_ = lean_ctor_get(v_x_38_, 0);
v_body_66_ = lean_ctor_get(v_x_38_, 1);
v_isSharedCheck_74_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_74_ == 0)
{
v___x_68_ = v_x_38_;
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_body_66_);
lean_inc(v_cond_65_);
lean_dec(v_x_38_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_70_; lean_object* v___x_72_; 
v___x_70_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_body_66_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 1, v___x_70_);
v___x_72_ = v___x_68_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_cond_65_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v___x_70_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
default: 
{
return v_x_38_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter___redArg(lean_object* v_x_75_, lean_object* v_h__1_76_, lean_object* v_h__2_77_, lean_object* v_h__3_78_, lean_object* v_h__4_79_, lean_object* v_h__5_80_, lean_object* v_h__6_81_){
_start:
{
switch(lean_obj_tag(v_x_75_))
{
case 0:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
lean_dec(v_h__6_81_);
lean_dec(v_h__5_80_);
lean_dec(v_h__4_79_);
lean_dec(v_h__3_78_);
lean_dec(v_h__2_77_);
v___x_82_ = lean_box(0);
v___x_83_ = lean_apply_1(v_h__1_76_, v___x_82_);
return v___x_83_;
}
case 1:
{
lean_object* v_v_84_; lean_object* v_e_85_; lean_object* v___x_86_; 
lean_dec(v_h__6_81_);
lean_dec(v_h__5_80_);
lean_dec(v_h__4_79_);
lean_dec(v_h__3_78_);
lean_dec(v_h__1_76_);
v_v_84_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_v_84_);
v_e_85_ = lean_ctor_get(v_x_75_, 1);
lean_inc_ref(v_e_85_);
lean_dec_ref_known(v_x_75_, 2);
v___x_86_ = lean_apply_2(v_h__2_77_, v_v_84_, v_e_85_);
return v___x_86_;
}
case 2:
{
lean_object* v_addr_87_; lean_object* v_val_88_; lean_object* v___x_89_; 
lean_dec(v_h__6_81_);
lean_dec(v_h__5_80_);
lean_dec(v_h__4_79_);
lean_dec(v_h__2_77_);
lean_dec(v_h__1_76_);
v_addr_87_ = lean_ctor_get(v_x_75_, 0);
lean_inc_ref(v_addr_87_);
v_val_88_ = lean_ctor_get(v_x_75_, 1);
lean_inc_ref(v_val_88_);
lean_dec_ref_known(v_x_75_, 2);
v___x_89_ = lean_apply_2(v_h__3_78_, v_addr_87_, v_val_88_);
return v___x_89_;
}
case 3:
{
lean_object* v_p1_90_; lean_object* v_p2_91_; lean_object* v___x_92_; 
lean_dec(v_h__6_81_);
lean_dec(v_h__5_80_);
lean_dec(v_h__3_78_);
lean_dec(v_h__2_77_);
lean_dec(v_h__1_76_);
v_p1_90_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_p1_90_);
v_p2_91_ = lean_ctor_get(v_x_75_, 1);
lean_inc(v_p2_91_);
lean_dec_ref_known(v_x_75_, 2);
v___x_92_ = lean_apply_2(v_h__4_79_, v_p1_90_, v_p2_91_);
return v___x_92_;
}
case 4:
{
lean_object* v_cond_93_; lean_object* v_thenBr_94_; lean_object* v_elseBr_95_; lean_object* v___x_96_; 
lean_dec(v_h__6_81_);
lean_dec(v_h__4_79_);
lean_dec(v_h__3_78_);
lean_dec(v_h__2_77_);
lean_dec(v_h__1_76_);
v_cond_93_ = lean_ctor_get(v_x_75_, 0);
lean_inc_ref(v_cond_93_);
v_thenBr_94_ = lean_ctor_get(v_x_75_, 1);
lean_inc(v_thenBr_94_);
v_elseBr_95_ = lean_ctor_get(v_x_75_, 2);
lean_inc(v_elseBr_95_);
lean_dec_ref_known(v_x_75_, 3);
v___x_96_ = lean_apply_3(v_h__5_80_, v_cond_93_, v_thenBr_94_, v_elseBr_95_);
return v___x_96_;
}
default: 
{
lean_object* v_cond_97_; lean_object* v_body_98_; lean_object* v___x_99_; 
lean_dec(v_h__5_80_);
lean_dec(v_h__4_79_);
lean_dec(v_h__3_78_);
lean_dec(v_h__2_77_);
lean_dec(v_h__1_76_);
v_cond_97_ = lean_ctor_get(v_x_75_, 0);
lean_inc_ref(v_cond_97_);
v_body_98_ = lean_ctor_get(v_x_75_, 1);
lean_inc(v_body_98_);
lean_dec_ref_known(v_x_75_, 2);
v___x_99_ = lean_apply_2(v_h__6_81_, v_cond_97_, v_body_98_);
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_IfElseRecon_0__Rv2Pancake_Passes_reconIfElse_match__1_splitter(lean_object* v_motive_100_, lean_object* v_x_101_, lean_object* v_h__1_102_, lean_object* v_h__2_103_, lean_object* v_h__3_104_, lean_object* v_h__4_105_, lean_object* v_h__5_106_, lean_object* v_h__6_107_){
_start:
{
switch(lean_obj_tag(v_x_101_))
{
case 0:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
lean_dec(v_h__6_107_);
lean_dec(v_h__5_106_);
lean_dec(v_h__4_105_);
lean_dec(v_h__3_104_);
lean_dec(v_h__2_103_);
v___x_108_ = lean_box(0);
v___x_109_ = lean_apply_1(v_h__1_102_, v___x_108_);
return v___x_109_;
}
case 1:
{
lean_object* v_v_110_; lean_object* v_e_111_; lean_object* v___x_112_; 
lean_dec(v_h__6_107_);
lean_dec(v_h__5_106_);
lean_dec(v_h__4_105_);
lean_dec(v_h__3_104_);
lean_dec(v_h__1_102_);
v_v_110_ = lean_ctor_get(v_x_101_, 0);
lean_inc(v_v_110_);
v_e_111_ = lean_ctor_get(v_x_101_, 1);
lean_inc_ref(v_e_111_);
lean_dec_ref_known(v_x_101_, 2);
v___x_112_ = lean_apply_2(v_h__2_103_, v_v_110_, v_e_111_);
return v___x_112_;
}
case 2:
{
lean_object* v_addr_113_; lean_object* v_val_114_; lean_object* v___x_115_; 
lean_dec(v_h__6_107_);
lean_dec(v_h__5_106_);
lean_dec(v_h__4_105_);
lean_dec(v_h__2_103_);
lean_dec(v_h__1_102_);
v_addr_113_ = lean_ctor_get(v_x_101_, 0);
lean_inc_ref(v_addr_113_);
v_val_114_ = lean_ctor_get(v_x_101_, 1);
lean_inc_ref(v_val_114_);
lean_dec_ref_known(v_x_101_, 2);
v___x_115_ = lean_apply_2(v_h__3_104_, v_addr_113_, v_val_114_);
return v___x_115_;
}
case 3:
{
lean_object* v_p1_116_; lean_object* v_p2_117_; lean_object* v___x_118_; 
lean_dec(v_h__6_107_);
lean_dec(v_h__5_106_);
lean_dec(v_h__3_104_);
lean_dec(v_h__2_103_);
lean_dec(v_h__1_102_);
v_p1_116_ = lean_ctor_get(v_x_101_, 0);
lean_inc(v_p1_116_);
v_p2_117_ = lean_ctor_get(v_x_101_, 1);
lean_inc(v_p2_117_);
lean_dec_ref_known(v_x_101_, 2);
v___x_118_ = lean_apply_2(v_h__4_105_, v_p1_116_, v_p2_117_);
return v___x_118_;
}
case 4:
{
lean_object* v_cond_119_; lean_object* v_thenBr_120_; lean_object* v_elseBr_121_; lean_object* v___x_122_; 
lean_dec(v_h__6_107_);
lean_dec(v_h__4_105_);
lean_dec(v_h__3_104_);
lean_dec(v_h__2_103_);
lean_dec(v_h__1_102_);
v_cond_119_ = lean_ctor_get(v_x_101_, 0);
lean_inc_ref(v_cond_119_);
v_thenBr_120_ = lean_ctor_get(v_x_101_, 1);
lean_inc(v_thenBr_120_);
v_elseBr_121_ = lean_ctor_get(v_x_101_, 2);
lean_inc(v_elseBr_121_);
lean_dec_ref_known(v_x_101_, 3);
v___x_122_ = lean_apply_3(v_h__5_106_, v_cond_119_, v_thenBr_120_, v_elseBr_121_);
return v___x_122_;
}
default: 
{
lean_object* v_cond_123_; lean_object* v_body_124_; lean_object* v___x_125_; 
lean_dec(v_h__5_106_);
lean_dec(v_h__4_105_);
lean_dec(v_h__3_104_);
lean_dec(v_h__2_103_);
lean_dec(v_h__1_102_);
v_cond_123_ = lean_ctor_get(v_x_101_, 0);
lean_inc_ref(v_cond_123_);
v_body_124_ = lean_ctor_get(v_x_101_, 1);
lean_inc(v_body_124_);
lean_dec_ref_known(v_x_101_, 2);
v___x_125_ = lean_apply_2(v_h__6_107_, v_cond_123_, v_body_124_);
return v___x_125_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeIfElseRecon(lean_object* v_a_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_a_126_);
return v___x_127_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon(lean_object* v_p_128_, lean_object* v_p_x27_129_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_130_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p_128_);
lean_inc(v_p_x27_129_);
v___x_131_ = lp_rv2pancake_Rv2Pancake_Passes_reconIfElse(v_p_x27_129_);
v___x_132_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v___x_130_, v___x_131_);
lean_dec(v___x_131_);
lean_dec(v___x_130_);
if (v___x_132_ == 0)
{
lean_dec(v_p_x27_129_);
return v___x_132_;
}
else
{
uint8_t v___x_133_; 
v___x_133_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p_x27_129_);
lean_dec(v_p_x27_129_);
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon___boxed(lean_object* v_p_134_, lean_object* v_p_x27_135_){
_start:
{
uint8_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = lp_rv2pancake_Rv2Pancake_Passes_checkIfElseRecon(v_p_134_, v_p_x27_135_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
