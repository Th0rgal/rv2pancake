// Lean compiler output
// Module: Rv2Pancake.Passes.SymCheck
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
uint64_t lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(uint8_t, uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(lean_object*, lean_object*);
uint8_t lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Passes_simpBinOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpBinOp___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_simpBinOp___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpBinOp(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpBinOp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpExp(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpExp_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpExp_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_substVarExp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_substVarExp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_seqSkipElim(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_seqSkipElim_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_seqSkipElim_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_extractAnyTrailingConst(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractAnyTrailingConst_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractAnyTrailingConst_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushLeafTrailingPc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushBranchTrailingPc_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushBranchTrailingPc_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_seqRepeat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_seqRepeat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeSymCheck(lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkSymCheck(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkSymCheck___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_propConstSeq, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__0_value;
static const lean_string_object lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "symCheck"};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__1 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__1_value;
static const lean_closure_object lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_rv2pancake_Rv2Pancake_Passes_checkSymCheck___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__2 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__2_value;
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__1_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__0_value),((lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__2_value)}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__3 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__3_value;
LEAN_EXPORT const lean_object* lp_rv2pancake_Rv2Pancake_Passes_symCheckPass = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Passes_symCheckPass___closed__3_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpBinOp(uint8_t v_op_3_, lean_object* v_e1_4_, lean_object* v_e2_5_){
_start:
{
if (lean_obj_tag(v_e1_4_) == 0)
{
if (lean_obj_tag(v_e2_5_) == 0)
{
uint64_t v_w_6_; uint64_t v_w_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_15_; 
v_w_6_ = lean_ctor_get_uint64(v_e1_4_, 0);
lean_dec_ref_known(v_e1_4_, 0);
v_w_7_ = lean_ctor_get_uint64(v_e2_5_, 0);
v_isSharedCheck_15_ = !lean_is_exclusive(v_e2_5_);
if (v_isSharedCheck_15_ == 0)
{
v___x_9_ = v_e2_5_;
v_isShared_10_ = v_isSharedCheck_15_;
goto v_resetjp_8_;
}
else
{
lean_dec(v_e2_5_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_15_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
uint64_t v___x_11_; lean_object* v___x_13_; 
v___x_11_ = lp_rv2pancake_Rv2Pancake_Spec_evalBinOp(v_op_3_, v_w_6_, v_w_7_);
if (v_isShared_10_ == 0)
{
v___x_13_ = v___x_9_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(0, 0, 8);
v___x_13_ = v_reuseFailAlloc_14_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
lean_ctor_set_uint64(v___x_13_, 0, v___x_11_);
return v___x_13_;
}
}
}
else
{
uint64_t v_w_16_; uint64_t v___x_17_; uint8_t v___x_18_; 
v_w_16_ = lean_ctor_get_uint64(v_e1_4_, 0);
v___x_17_ = 0ULL;
v___x_18_ = lean_uint64_dec_eq(v_w_16_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_19_, 0, v_e1_4_);
lean_ctor_set(v___x_19_, 1, v_e2_5_);
lean_ctor_set_uint8(v___x_19_, sizeof(void*)*2, v_op_3_);
return v___x_19_;
}
else
{
lean_dec_ref_known(v_e1_4_, 0);
switch(v_op_3_)
{
case 0:
{
return v_e2_5_;
}
case 6:
{
return v_e2_5_;
}
case 7:
{
return v_e2_5_;
}
default: 
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Passes_simpBinOp___closed__0));
v___x_21_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_21_, 0, v___x_20_);
lean_ctor_set(v___x_21_, 1, v_e2_5_);
lean_ctor_set_uint8(v___x_21_, sizeof(void*)*2, v_op_3_);
return v___x_21_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_e2_5_) == 0)
{
uint64_t v_w_22_; uint64_t v___x_23_; uint8_t v___x_24_; 
v_w_22_ = lean_ctor_get_uint64(v_e2_5_, 0);
v___x_23_ = 0ULL;
v___x_24_ = lean_uint64_dec_eq(v_w_22_, v___x_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_25_, 0, v_e1_4_);
lean_ctor_set(v___x_25_, 1, v_e2_5_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v_op_3_);
return v___x_25_;
}
else
{
lean_dec_ref_known(v_e2_5_, 0);
switch(v_op_3_)
{
case 0:
{
return v_e1_4_;
}
case 1:
{
return v_e1_4_;
}
case 6:
{
return v_e1_4_;
}
case 7:
{
return v_e1_4_;
}
case 8:
{
return v_e1_4_;
}
case 9:
{
return v_e1_4_;
}
default: 
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Passes_simpBinOp___closed__0));
v___x_27_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_27_, 0, v_e1_4_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
lean_ctor_set_uint8(v___x_27_, sizeof(void*)*2, v_op_3_);
return v___x_27_;
}
}
}
}
else
{
lean_object* v___x_28_; 
v___x_28_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v___x_28_, 0, v_e1_4_);
lean_ctor_set(v___x_28_, 1, v_e2_5_);
lean_ctor_set_uint8(v___x_28_, sizeof(void*)*2, v_op_3_);
return v___x_28_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpBinOp___boxed(lean_object* v_op_29_, lean_object* v_e1_30_, lean_object* v_e2_31_){
_start:
{
uint8_t v_op_boxed_32_; lean_object* v_res_33_; 
v_op_boxed_32_ = lean_unbox(v_op_29_);
v_res_33_ = lp_rv2pancake_Rv2Pancake_Passes_simpBinOp(v_op_boxed_32_, v_e1_30_, v_e2_31_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__7_splitter___redArg(lean_object* v_e1_34_, lean_object* v_e2_35_, lean_object* v_h__1_36_, lean_object* v_h__2_37_, lean_object* v_h__3_38_, lean_object* v_h__4_39_){
_start:
{
if (lean_obj_tag(v_e1_34_) == 0)
{
lean_dec(v_h__3_38_);
if (lean_obj_tag(v_e2_35_) == 0)
{
uint64_t v_w_40_; uint64_t v_w_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec(v_h__4_39_);
lean_dec(v_h__2_37_);
v_w_40_ = lean_ctor_get_uint64(v_e1_34_, 0);
lean_dec_ref_known(v_e1_34_, 0);
v_w_41_ = lean_ctor_get_uint64(v_e2_35_, 0);
lean_dec_ref_known(v_e2_35_, 0);
v___x_42_ = lean_box_uint64(v_w_40_);
v___x_43_ = lean_box_uint64(v_w_41_);
v___x_44_ = lean_apply_2(v_h__1_36_, v___x_42_, v___x_43_);
return v___x_44_;
}
else
{
uint64_t v_w_45_; uint64_t v___x_46_; uint8_t v___x_47_; 
lean_dec(v_h__1_36_);
v_w_45_ = lean_ctor_get_uint64(v_e1_34_, 0);
v___x_46_ = 0ULL;
v___x_47_ = lean_uint64_dec_eq(v_w_45_, v___x_46_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; 
lean_dec(v_h__2_37_);
v___x_48_ = lean_apply_5(v_h__4_39_, v_e1_34_, v_e2_35_, lean_box(0), lean_box(0), lean_box(0));
return v___x_48_;
}
else
{
lean_object* v___x_49_; 
lean_dec_ref_known(v_e1_34_, 0);
lean_dec(v_h__4_39_);
v___x_49_ = lean_apply_2(v_h__2_37_, v_e2_35_, lean_box(0));
return v___x_49_;
}
}
}
else
{
lean_dec(v_h__2_37_);
lean_dec(v_h__1_36_);
if (lean_obj_tag(v_e2_35_) == 0)
{
uint64_t v_w_50_; uint64_t v___x_51_; uint8_t v___x_52_; 
v_w_50_ = lean_ctor_get_uint64(v_e2_35_, 0);
v___x_51_ = 0ULL;
v___x_52_ = lean_uint64_dec_eq(v_w_50_, v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; 
lean_dec(v_h__3_38_);
v___x_53_ = lean_apply_5(v_h__4_39_, v_e1_34_, v_e2_35_, lean_box(0), lean_box(0), lean_box(0));
return v___x_53_;
}
else
{
lean_object* v___x_54_; 
lean_dec_ref_known(v_e2_35_, 0);
lean_dec(v_h__4_39_);
v___x_54_ = lean_apply_2(v_h__3_38_, v_e1_34_, lean_box(0));
return v___x_54_;
}
}
else
{
lean_object* v___x_55_; 
lean_dec(v_h__3_38_);
v___x_55_ = lean_apply_5(v_h__4_39_, v_e1_34_, v_e2_35_, lean_box(0), lean_box(0), lean_box(0));
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__7_splitter(lean_object* v_motive_56_, lean_object* v_e1_57_, lean_object* v_e2_58_, lean_object* v_h__1_59_, lean_object* v_h__2_60_, lean_object* v_h__3_61_, lean_object* v_h__4_62_){
_start:
{
if (lean_obj_tag(v_e1_57_) == 0)
{
lean_dec(v_h__3_61_);
if (lean_obj_tag(v_e2_58_) == 0)
{
uint64_t v_w_63_; uint64_t v_w_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
lean_dec(v_h__4_62_);
lean_dec(v_h__2_60_);
v_w_63_ = lean_ctor_get_uint64(v_e1_57_, 0);
lean_dec_ref_known(v_e1_57_, 0);
v_w_64_ = lean_ctor_get_uint64(v_e2_58_, 0);
lean_dec_ref_known(v_e2_58_, 0);
v___x_65_ = lean_box_uint64(v_w_63_);
v___x_66_ = lean_box_uint64(v_w_64_);
v___x_67_ = lean_apply_2(v_h__1_59_, v___x_65_, v___x_66_);
return v___x_67_;
}
else
{
uint64_t v_w_68_; uint64_t v___x_69_; uint8_t v___x_70_; 
lean_dec(v_h__1_59_);
v_w_68_ = lean_ctor_get_uint64(v_e1_57_, 0);
v___x_69_ = 0ULL;
v___x_70_ = lean_uint64_dec_eq(v_w_68_, v___x_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
lean_dec(v_h__2_60_);
v___x_71_ = lean_apply_5(v_h__4_62_, v_e1_57_, v_e2_58_, lean_box(0), lean_box(0), lean_box(0));
return v___x_71_;
}
else
{
lean_object* v___x_72_; 
lean_dec_ref_known(v_e1_57_, 0);
lean_dec(v_h__4_62_);
v___x_72_ = lean_apply_2(v_h__2_60_, v_e2_58_, lean_box(0));
return v___x_72_;
}
}
}
else
{
lean_dec(v_h__2_60_);
lean_dec(v_h__1_59_);
if (lean_obj_tag(v_e2_58_) == 0)
{
uint64_t v_w_73_; uint64_t v___x_74_; uint8_t v___x_75_; 
v_w_73_ = lean_ctor_get_uint64(v_e2_58_, 0);
v___x_74_ = 0ULL;
v___x_75_ = lean_uint64_dec_eq(v_w_73_, v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec(v_h__3_61_);
v___x_76_ = lean_apply_5(v_h__4_62_, v_e1_57_, v_e2_58_, lean_box(0), lean_box(0), lean_box(0));
return v___x_76_;
}
else
{
lean_object* v___x_77_; 
lean_dec_ref_known(v_e2_58_, 0);
lean_dec(v_h__4_62_);
v___x_77_ = lean_apply_2(v_h__3_61_, v_e1_57_, lean_box(0));
return v___x_77_;
}
}
else
{
lean_object* v___x_78_; 
lean_dec(v_h__3_61_);
v___x_78_ = lean_apply_5(v_h__4_62_, v_e1_57_, v_e2_58_, lean_box(0), lean_box(0), lean_box(0));
return v___x_78_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter___redArg(uint8_t v_op_79_, lean_object* v_h__1_80_, lean_object* v_h__2_81_, lean_object* v_h__3_82_, lean_object* v_h__4_83_){
_start:
{
switch(v_op_79_)
{
case 0:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
lean_dec(v_h__4_83_);
lean_dec(v_h__3_82_);
lean_dec(v_h__2_81_);
v___x_84_ = lean_box(0);
v___x_85_ = lean_apply_1(v_h__1_80_, v___x_84_);
return v___x_85_;
}
case 6:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec(v_h__4_83_);
lean_dec(v_h__3_82_);
lean_dec(v_h__1_80_);
v___x_86_ = lean_box(0);
v___x_87_ = lean_apply_1(v_h__2_81_, v___x_86_);
return v___x_87_;
}
case 7:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
lean_dec(v_h__4_83_);
lean_dec(v_h__2_81_);
lean_dec(v_h__1_80_);
v___x_88_ = lean_box(0);
v___x_89_ = lean_apply_1(v_h__3_82_, v___x_88_);
return v___x_89_;
}
default: 
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec(v_h__3_82_);
lean_dec(v_h__2_81_);
lean_dec(v_h__1_80_);
v___x_90_ = lean_box(v_op_79_);
v___x_91_ = lean_apply_4(v_h__4_83_, v___x_90_, lean_box(0), lean_box(0), lean_box(0));
return v___x_91_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter___redArg___boxed(lean_object* v_op_92_, lean_object* v_h__1_93_, lean_object* v_h__2_94_, lean_object* v_h__3_95_, lean_object* v_h__4_96_){
_start:
{
uint8_t v_op_23__boxed_97_; lean_object* v_res_98_; 
v_op_23__boxed_97_ = lean_unbox(v_op_92_);
v_res_98_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter___redArg(v_op_23__boxed_97_, v_h__1_93_, v_h__2_94_, v_h__3_95_, v_h__4_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter(lean_object* v_motive_99_, uint8_t v_op_100_, lean_object* v_h__1_101_, lean_object* v_h__2_102_, lean_object* v_h__3_103_, lean_object* v_h__4_104_){
_start:
{
switch(v_op_100_)
{
case 0:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
lean_dec(v_h__4_104_);
lean_dec(v_h__3_103_);
lean_dec(v_h__2_102_);
v___x_105_ = lean_box(0);
v___x_106_ = lean_apply_1(v_h__1_101_, v___x_105_);
return v___x_106_;
}
case 6:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
lean_dec(v_h__4_104_);
lean_dec(v_h__3_103_);
lean_dec(v_h__1_101_);
v___x_107_ = lean_box(0);
v___x_108_ = lean_apply_1(v_h__2_102_, v___x_107_);
return v___x_108_;
}
case 7:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec(v_h__4_104_);
lean_dec(v_h__2_102_);
lean_dec(v_h__1_101_);
v___x_109_ = lean_box(0);
v___x_110_ = lean_apply_1(v_h__3_103_, v___x_109_);
return v___x_110_;
}
default: 
{
lean_object* v___x_111_; lean_object* v___x_112_; 
lean_dec(v_h__3_103_);
lean_dec(v_h__2_102_);
lean_dec(v_h__1_101_);
v___x_111_ = lean_box(v_op_100_);
v___x_112_ = lean_apply_4(v_h__4_104_, v___x_111_, lean_box(0), lean_box(0), lean_box(0));
return v___x_112_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter___boxed(lean_object* v_motive_113_, lean_object* v_op_114_, lean_object* v_h__1_115_, lean_object* v_h__2_116_, lean_object* v_h__3_117_, lean_object* v_h__4_118_){
_start:
{
uint8_t v_op_42__boxed_119_; lean_object* v_res_120_; 
v_op_42__boxed_119_ = lean_unbox(v_op_114_);
v_res_120_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__1_splitter(v_motive_113_, v_op_42__boxed_119_, v_h__1_115_, v_h__2_116_, v_h__3_117_, v_h__4_118_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter___redArg(uint8_t v_op_121_, lean_object* v_h__1_122_, lean_object* v_h__2_123_, lean_object* v_h__3_124_, lean_object* v_h__4_125_, lean_object* v_h__5_126_, lean_object* v_h__6_127_, lean_object* v_h__7_128_){
_start:
{
switch(v_op_121_)
{
case 0:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec(v_h__7_128_);
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
v___x_129_ = lean_box(0);
v___x_130_ = lean_apply_1(v_h__1_122_, v___x_129_);
return v___x_130_;
}
case 1:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
lean_dec(v_h__7_128_);
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__1_122_);
v___x_131_ = lean_box(0);
v___x_132_ = lean_apply_1(v_h__2_123_, v___x_131_);
return v___x_132_;
}
case 6:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
lean_dec(v_h__7_128_);
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
v___x_133_ = lean_box(0);
v___x_134_ = lean_apply_1(v_h__3_124_, v___x_133_);
return v___x_134_;
}
case 7:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
lean_dec(v_h__7_128_);
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
v___x_135_ = lean_box(0);
v___x_136_ = lean_apply_1(v_h__4_125_, v___x_135_);
return v___x_136_;
}
case 8:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
lean_dec(v_h__7_128_);
lean_dec(v_h__6_127_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
v___x_137_ = lean_box(0);
v___x_138_ = lean_apply_1(v_h__5_126_, v___x_137_);
return v___x_138_;
}
case 9:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
lean_dec(v_h__7_128_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
v___x_139_ = lean_box(0);
v___x_140_ = lean_apply_1(v_h__6_127_, v___x_139_);
return v___x_140_;
}
default: 
{
lean_object* v___x_141_; lean_object* v___x_142_; 
lean_dec(v_h__6_127_);
lean_dec(v_h__5_126_);
lean_dec(v_h__4_125_);
lean_dec(v_h__3_124_);
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
v___x_141_ = lean_box(v_op_121_);
v___x_142_ = lean_apply_7(v_h__7_128_, v___x_141_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_142_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter___redArg___boxed(lean_object* v_op_143_, lean_object* v_h__1_144_, lean_object* v_h__2_145_, lean_object* v_h__3_146_, lean_object* v_h__4_147_, lean_object* v_h__5_148_, lean_object* v_h__6_149_, lean_object* v_h__7_150_){
_start:
{
uint8_t v_op_38__boxed_151_; lean_object* v_res_152_; 
v_op_38__boxed_151_ = lean_unbox(v_op_143_);
v_res_152_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter___redArg(v_op_38__boxed_151_, v_h__1_144_, v_h__2_145_, v_h__3_146_, v_h__4_147_, v_h__5_148_, v_h__6_149_, v_h__7_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter(lean_object* v_motive_153_, uint8_t v_op_154_, lean_object* v_h__1_155_, lean_object* v_h__2_156_, lean_object* v_h__3_157_, lean_object* v_h__4_158_, lean_object* v_h__5_159_, lean_object* v_h__6_160_, lean_object* v_h__7_161_){
_start:
{
switch(v_op_154_)
{
case 0:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec(v_h__7_161_);
lean_dec(v_h__6_160_);
lean_dec(v_h__5_159_);
lean_dec(v_h__4_158_);
lean_dec(v_h__3_157_);
lean_dec(v_h__2_156_);
v___x_162_ = lean_box(0);
v___x_163_ = lean_apply_1(v_h__1_155_, v___x_162_);
return v___x_163_;
}
case 1:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec(v_h__7_161_);
lean_dec(v_h__6_160_);
lean_dec(v_h__5_159_);
lean_dec(v_h__4_158_);
lean_dec(v_h__3_157_);
lean_dec(v_h__1_155_);
v___x_164_ = lean_box(0);
v___x_165_ = lean_apply_1(v_h__2_156_, v___x_164_);
return v___x_165_;
}
case 6:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec(v_h__7_161_);
lean_dec(v_h__6_160_);
lean_dec(v_h__5_159_);
lean_dec(v_h__4_158_);
lean_dec(v_h__2_156_);
lean_dec(v_h__1_155_);
v___x_166_ = lean_box(0);
v___x_167_ = lean_apply_1(v_h__3_157_, v___x_166_);
return v___x_167_;
}
case 7:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec(v_h__7_161_);
lean_dec(v_h__6_160_);
lean_dec(v_h__5_159_);
lean_dec(v_h__3_157_);
lean_dec(v_h__2_156_);
lean_dec(v_h__1_155_);
v___x_168_ = lean_box(0);
v___x_169_ = lean_apply_1(v_h__4_158_, v___x_168_);
return v___x_169_;
}
case 8:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
lean_dec(v_h__7_161_);
lean_dec(v_h__6_160_);
lean_dec(v_h__4_158_);
lean_dec(v_h__3_157_);
lean_dec(v_h__2_156_);
lean_dec(v_h__1_155_);
v___x_170_ = lean_box(0);
v___x_171_ = lean_apply_1(v_h__5_159_, v___x_170_);
return v___x_171_;
}
case 9:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
lean_dec(v_h__7_161_);
lean_dec(v_h__5_159_);
lean_dec(v_h__4_158_);
lean_dec(v_h__3_157_);
lean_dec(v_h__2_156_);
lean_dec(v_h__1_155_);
v___x_172_ = lean_box(0);
v___x_173_ = lean_apply_1(v_h__6_160_, v___x_172_);
return v___x_173_;
}
default: 
{
lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec(v_h__6_160_);
lean_dec(v_h__5_159_);
lean_dec(v_h__4_158_);
lean_dec(v_h__3_157_);
lean_dec(v_h__2_156_);
lean_dec(v_h__1_155_);
v___x_174_ = lean_box(v_op_154_);
v___x_175_ = lean_apply_7(v_h__7_161_, v___x_174_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_175_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter___boxed(lean_object* v_motive_176_, lean_object* v_op_177_, lean_object* v_h__1_178_, lean_object* v_h__2_179_, lean_object* v_h__3_180_, lean_object* v_h__4_181_, lean_object* v_h__5_182_, lean_object* v_h__6_183_, lean_object* v_h__7_184_){
_start:
{
uint8_t v_op_69__boxed_185_; lean_object* v_res_186_; 
v_op_69__boxed_185_ = lean_unbox(v_op_177_);
v_res_186_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpBinOp_match__4_splitter(v_motive_176_, v_op_69__boxed_185_, v_h__1_178_, v_h__2_179_, v_h__3_180_, v_h__4_181_, v_h__5_182_, v_h__6_183_, v_h__7_184_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter___redArg(lean_object* v_x_187_, lean_object* v_h__1_188_, lean_object* v_h__2_189_, lean_object* v_h__3_190_, lean_object* v_h__4_191_){
_start:
{
switch(lean_obj_tag(v_x_187_))
{
case 0:
{
uint64_t v_w_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec(v_h__4_191_);
lean_dec(v_h__3_190_);
lean_dec(v_h__2_189_);
v_w_192_ = lean_ctor_get_uint64(v_x_187_, 0);
lean_dec_ref_known(v_x_187_, 0);
v___x_193_ = lean_box_uint64(v_w_192_);
v___x_194_ = lean_apply_1(v_h__1_188_, v___x_193_);
return v___x_194_;
}
case 1:
{
lean_object* v_v_195_; lean_object* v___x_196_; 
lean_dec(v_h__4_191_);
lean_dec(v_h__3_190_);
lean_dec(v_h__1_188_);
v_v_195_ = lean_ctor_get(v_x_187_, 0);
lean_inc(v_v_195_);
lean_dec_ref_known(v_x_187_, 1);
v___x_196_ = lean_apply_1(v_h__2_189_, v_v_195_);
return v___x_196_;
}
case 2:
{
lean_object* v_addr_197_; lean_object* v___x_198_; 
lean_dec(v_h__4_191_);
lean_dec(v_h__2_189_);
lean_dec(v_h__1_188_);
v_addr_197_ = lean_ctor_get(v_x_187_, 0);
lean_inc_ref(v_addr_197_);
lean_dec_ref_known(v_x_187_, 1);
v___x_198_ = lean_apply_1(v_h__3_190_, v_addr_197_);
return v___x_198_;
}
default: 
{
uint8_t v_op_199_; lean_object* v_e1_200_; lean_object* v_e2_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec(v_h__3_190_);
lean_dec(v_h__2_189_);
lean_dec(v_h__1_188_);
v_op_199_ = lean_ctor_get_uint8(v_x_187_, sizeof(void*)*2);
v_e1_200_ = lean_ctor_get(v_x_187_, 0);
lean_inc_ref(v_e1_200_);
v_e2_201_ = lean_ctor_get(v_x_187_, 1);
lean_inc_ref(v_e2_201_);
lean_dec_ref_known(v_x_187_, 2);
v___x_202_ = lean_box(v_op_199_);
v___x_203_ = lean_apply_3(v_h__4_191_, v___x_202_, v_e1_200_, v_e2_201_);
return v___x_203_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprPanExp_repr_match__1_splitter(lean_object* v_motive_204_, lean_object* v_x_205_, lean_object* v_h__1_206_, lean_object* v_h__2_207_, lean_object* v_h__3_208_, lean_object* v_h__4_209_){
_start:
{
switch(lean_obj_tag(v_x_205_))
{
case 0:
{
uint64_t v_w_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
lean_dec(v_h__4_209_);
lean_dec(v_h__3_208_);
lean_dec(v_h__2_207_);
v_w_210_ = lean_ctor_get_uint64(v_x_205_, 0);
lean_dec_ref_known(v_x_205_, 0);
v___x_211_ = lean_box_uint64(v_w_210_);
v___x_212_ = lean_apply_1(v_h__1_206_, v___x_211_);
return v___x_212_;
}
case 1:
{
lean_object* v_v_213_; lean_object* v___x_214_; 
lean_dec(v_h__4_209_);
lean_dec(v_h__3_208_);
lean_dec(v_h__1_206_);
v_v_213_ = lean_ctor_get(v_x_205_, 0);
lean_inc(v_v_213_);
lean_dec_ref_known(v_x_205_, 1);
v___x_214_ = lean_apply_1(v_h__2_207_, v_v_213_);
return v___x_214_;
}
case 2:
{
lean_object* v_addr_215_; lean_object* v___x_216_; 
lean_dec(v_h__4_209_);
lean_dec(v_h__2_207_);
lean_dec(v_h__1_206_);
v_addr_215_ = lean_ctor_get(v_x_205_, 0);
lean_inc_ref(v_addr_215_);
lean_dec_ref_known(v_x_205_, 1);
v___x_216_ = lean_apply_1(v_h__3_208_, v_addr_215_);
return v___x_216_;
}
default: 
{
uint8_t v_op_217_; lean_object* v_e1_218_; lean_object* v_e2_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec(v_h__3_208_);
lean_dec(v_h__2_207_);
lean_dec(v_h__1_206_);
v_op_217_ = lean_ctor_get_uint8(v_x_205_, sizeof(void*)*2);
v_e1_218_ = lean_ctor_get(v_x_205_, 0);
lean_inc_ref(v_e1_218_);
v_e2_219_ = lean_ctor_get(v_x_205_, 1);
lean_inc_ref(v_e2_219_);
lean_dec_ref_known(v_x_205_, 2);
v___x_220_ = lean_box(v_op_217_);
v___x_221_ = lean_apply_3(v_h__4_209_, v___x_220_, v_e1_218_, v_e2_219_);
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(uint8_t v_x_222_, lean_object* v_h__1_223_, lean_object* v_h__2_224_, lean_object* v_h__3_225_, lean_object* v_h__4_226_, lean_object* v_h__5_227_, lean_object* v_h__6_228_, lean_object* v_h__7_229_, lean_object* v_h__8_230_, lean_object* v_h__9_231_, lean_object* v_h__10_232_, lean_object* v_h__11_233_, lean_object* v_h__12_234_, lean_object* v_h__13_235_, lean_object* v_h__14_236_, lean_object* v_h__15_237_, lean_object* v_h__16_238_, lean_object* v_h__17_239_, lean_object* v_h__18_240_, lean_object* v_h__19_241_, lean_object* v_h__20_242_, lean_object* v_h__21_243_){
_start:
{
switch(v_x_222_)
{
case 0:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
v___x_244_ = lean_box(0);
v___x_245_ = lean_apply_1(v_h__1_223_, v___x_244_);
return v___x_245_;
}
case 1:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__1_223_);
v___x_246_ = lean_box(0);
v___x_247_ = lean_apply_1(v_h__2_224_, v___x_246_);
return v___x_247_;
}
case 2:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_248_ = lean_box(0);
v___x_249_ = lean_apply_1(v_h__3_225_, v___x_248_);
return v___x_249_;
}
case 3:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_250_ = lean_box(0);
v___x_251_ = lean_apply_1(v_h__4_226_, v___x_250_);
return v___x_251_;
}
case 4:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_252_ = lean_box(0);
v___x_253_ = lean_apply_1(v_h__5_227_, v___x_252_);
return v___x_253_;
}
case 5:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_254_ = lean_box(0);
v___x_255_ = lean_apply_1(v_h__6_228_, v___x_254_);
return v___x_255_;
}
case 6:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_256_ = lean_box(0);
v___x_257_ = lean_apply_1(v_h__7_229_, v___x_256_);
return v___x_257_;
}
case 7:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_258_ = lean_box(0);
v___x_259_ = lean_apply_1(v_h__8_230_, v___x_258_);
return v___x_259_;
}
case 8:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_260_ = lean_box(0);
v___x_261_ = lean_apply_1(v_h__9_231_, v___x_260_);
return v___x_261_;
}
case 9:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_262_ = lean_box(0);
v___x_263_ = lean_apply_1(v_h__10_232_, v___x_262_);
return v___x_263_;
}
case 10:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_264_ = lean_box(0);
v___x_265_ = lean_apply_1(v_h__11_233_, v___x_264_);
return v___x_265_;
}
case 11:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_266_ = lean_box(0);
v___x_267_ = lean_apply_1(v_h__12_234_, v___x_266_);
return v___x_267_;
}
case 12:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_268_ = lean_box(0);
v___x_269_ = lean_apply_1(v_h__13_235_, v___x_268_);
return v___x_269_;
}
case 13:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_270_ = lean_box(0);
v___x_271_ = lean_apply_1(v_h__14_236_, v___x_270_);
return v___x_271_;
}
case 14:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_272_ = lean_box(0);
v___x_273_ = lean_apply_1(v_h__15_237_, v___x_272_);
return v___x_273_;
}
case 15:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_274_ = lean_box(0);
v___x_275_ = lean_apply_1(v_h__16_238_, v___x_274_);
return v___x_275_;
}
case 16:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_apply_1(v_h__17_239_, v___x_276_);
return v___x_277_;
}
case 17:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_278_ = lean_box(0);
v___x_279_ = lean_apply_1(v_h__18_240_, v___x_278_);
return v___x_279_;
}
case 18:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__20_242_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_280_ = lean_box(0);
v___x_281_ = lean_apply_1(v_h__19_241_, v___x_280_);
return v___x_281_;
}
case 19:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec(v_h__21_243_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_282_ = lean_box(0);
v___x_283_ = lean_apply_1(v_h__20_242_, v___x_282_);
return v___x_283_;
}
default: 
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec(v_h__20_242_);
lean_dec(v_h__19_241_);
lean_dec(v_h__18_240_);
lean_dec(v_h__17_239_);
lean_dec(v_h__16_238_);
lean_dec(v_h__15_237_);
lean_dec(v_h__14_236_);
lean_dec(v_h__13_235_);
lean_dec(v_h__12_234_);
lean_dec(v_h__11_233_);
lean_dec(v_h__10_232_);
lean_dec(v_h__9_231_);
lean_dec(v_h__8_230_);
lean_dec(v_h__7_229_);
lean_dec(v_h__6_228_);
lean_dec(v_h__5_227_);
lean_dec(v_h__4_226_);
lean_dec(v_h__3_225_);
lean_dec(v_h__2_224_);
lean_dec(v_h__1_223_);
v___x_284_ = lean_box(0);
v___x_285_ = lean_apply_1(v_h__21_243_, v___x_284_);
return v___x_285_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg___boxed(lean_object** _args){
lean_object* v_x_286_ = _args[0];
lean_object* v_h__1_287_ = _args[1];
lean_object* v_h__2_288_ = _args[2];
lean_object* v_h__3_289_ = _args[3];
lean_object* v_h__4_290_ = _args[4];
lean_object* v_h__5_291_ = _args[5];
lean_object* v_h__6_292_ = _args[6];
lean_object* v_h__7_293_ = _args[7];
lean_object* v_h__8_294_ = _args[8];
lean_object* v_h__9_295_ = _args[9];
lean_object* v_h__10_296_ = _args[10];
lean_object* v_h__11_297_ = _args[11];
lean_object* v_h__12_298_ = _args[12];
lean_object* v_h__13_299_ = _args[13];
lean_object* v_h__14_300_ = _args[14];
lean_object* v_h__15_301_ = _args[15];
lean_object* v_h__16_302_ = _args[16];
lean_object* v_h__17_303_ = _args[17];
lean_object* v_h__18_304_ = _args[18];
lean_object* v_h__19_305_ = _args[19];
lean_object* v_h__20_306_ = _args[20];
lean_object* v_h__21_307_ = _args[21];
_start:
{
uint8_t v_x_195__boxed_308_; lean_object* v_res_309_; 
v_x_195__boxed_308_ = lean_unbox(v_x_286_);
v_res_309_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___redArg(v_x_195__boxed_308_, v_h__1_287_, v_h__2_288_, v_h__3_289_, v_h__4_290_, v_h__5_291_, v_h__6_292_, v_h__7_293_, v_h__8_294_, v_h__9_295_, v_h__10_296_, v_h__11_297_, v_h__12_298_, v_h__13_299_, v_h__14_300_, v_h__15_301_, v_h__16_302_, v_h__17_303_, v_h__18_304_, v_h__19_305_, v_h__20_306_, v_h__21_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(lean_object* v_motive_310_, uint8_t v_x_311_, lean_object* v_h__1_312_, lean_object* v_h__2_313_, lean_object* v_h__3_314_, lean_object* v_h__4_315_, lean_object* v_h__5_316_, lean_object* v_h__6_317_, lean_object* v_h__7_318_, lean_object* v_h__8_319_, lean_object* v_h__9_320_, lean_object* v_h__10_321_, lean_object* v_h__11_322_, lean_object* v_h__12_323_, lean_object* v_h__13_324_, lean_object* v_h__14_325_, lean_object* v_h__15_326_, lean_object* v_h__16_327_, lean_object* v_h__17_328_, lean_object* v_h__18_329_, lean_object* v_h__19_330_, lean_object* v_h__20_331_, lean_object* v_h__21_332_){
_start:
{
switch(v_x_311_)
{
case 0:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
v___x_333_ = lean_box(0);
v___x_334_ = lean_apply_1(v_h__1_312_, v___x_333_);
return v___x_334_;
}
case 1:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__1_312_);
v___x_335_ = lean_box(0);
v___x_336_ = lean_apply_1(v_h__2_313_, v___x_335_);
return v___x_336_;
}
case 2:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_337_ = lean_box(0);
v___x_338_ = lean_apply_1(v_h__3_314_, v___x_337_);
return v___x_338_;
}
case 3:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_339_ = lean_box(0);
v___x_340_ = lean_apply_1(v_h__4_315_, v___x_339_);
return v___x_340_;
}
case 4:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_341_ = lean_box(0);
v___x_342_ = lean_apply_1(v_h__5_316_, v___x_341_);
return v___x_342_;
}
case 5:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_343_ = lean_box(0);
v___x_344_ = lean_apply_1(v_h__6_317_, v___x_343_);
return v___x_344_;
}
case 6:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_345_ = lean_box(0);
v___x_346_ = lean_apply_1(v_h__7_318_, v___x_345_);
return v___x_346_;
}
case 7:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_347_ = lean_box(0);
v___x_348_ = lean_apply_1(v_h__8_319_, v___x_347_);
return v___x_348_;
}
case 8:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_349_ = lean_box(0);
v___x_350_ = lean_apply_1(v_h__9_320_, v___x_349_);
return v___x_350_;
}
case 9:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_351_ = lean_box(0);
v___x_352_ = lean_apply_1(v_h__10_321_, v___x_351_);
return v___x_352_;
}
case 10:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_353_ = lean_box(0);
v___x_354_ = lean_apply_1(v_h__11_322_, v___x_353_);
return v___x_354_;
}
case 11:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_355_ = lean_box(0);
v___x_356_ = lean_apply_1(v_h__12_323_, v___x_355_);
return v___x_356_;
}
case 12:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_357_ = lean_box(0);
v___x_358_ = lean_apply_1(v_h__13_324_, v___x_357_);
return v___x_358_;
}
case 13:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_359_ = lean_box(0);
v___x_360_ = lean_apply_1(v_h__14_325_, v___x_359_);
return v___x_360_;
}
case 14:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_361_ = lean_box(0);
v___x_362_ = lean_apply_1(v_h__15_326_, v___x_361_);
return v___x_362_;
}
case 15:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_363_ = lean_box(0);
v___x_364_ = lean_apply_1(v_h__16_327_, v___x_363_);
return v___x_364_;
}
case 16:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_365_ = lean_box(0);
v___x_366_ = lean_apply_1(v_h__17_328_, v___x_365_);
return v___x_366_;
}
case 17:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_367_ = lean_box(0);
v___x_368_ = lean_apply_1(v_h__18_329_, v___x_367_);
return v___x_368_;
}
case 18:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__20_331_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_369_ = lean_box(0);
v___x_370_ = lean_apply_1(v_h__19_330_, v___x_369_);
return v___x_370_;
}
case 19:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
lean_dec(v_h__21_332_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_371_ = lean_box(0);
v___x_372_ = lean_apply_1(v_h__20_331_, v___x_371_);
return v___x_372_;
}
default: 
{
lean_object* v___x_373_; lean_object* v___x_374_; 
lean_dec(v_h__20_331_);
lean_dec(v_h__19_330_);
lean_dec(v_h__18_329_);
lean_dec(v_h__17_328_);
lean_dec(v_h__16_327_);
lean_dec(v_h__15_326_);
lean_dec(v_h__14_325_);
lean_dec(v_h__13_324_);
lean_dec(v_h__12_323_);
lean_dec(v_h__11_322_);
lean_dec(v_h__10_321_);
lean_dec(v_h__9_320_);
lean_dec(v_h__8_319_);
lean_dec(v_h__7_318_);
lean_dec(v_h__6_317_);
lean_dec(v_h__5_316_);
lean_dec(v_h__4_315_);
lean_dec(v_h__3_314_);
lean_dec(v_h__2_313_);
lean_dec(v_h__1_312_);
v___x_373_ = lean_box(0);
v___x_374_ = lean_apply_1(v_h__21_332_, v___x_373_);
return v___x_374_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter___boxed(lean_object** _args){
lean_object* v_motive_375_ = _args[0];
lean_object* v_x_376_ = _args[1];
lean_object* v_h__1_377_ = _args[2];
lean_object* v_h__2_378_ = _args[3];
lean_object* v_h__3_379_ = _args[4];
lean_object* v_h__4_380_ = _args[5];
lean_object* v_h__5_381_ = _args[6];
lean_object* v_h__6_382_ = _args[7];
lean_object* v_h__7_383_ = _args[8];
lean_object* v_h__8_384_ = _args[9];
lean_object* v_h__9_385_ = _args[10];
lean_object* v_h__10_386_ = _args[11];
lean_object* v_h__11_387_ = _args[12];
lean_object* v_h__12_388_ = _args[13];
lean_object* v_h__13_389_ = _args[14];
lean_object* v_h__14_390_ = _args[15];
lean_object* v_h__15_391_ = _args[16];
lean_object* v_h__16_392_ = _args[17];
lean_object* v_h__17_393_ = _args[18];
lean_object* v_h__18_394_ = _args[19];
lean_object* v_h__19_395_ = _args[20];
lean_object* v_h__20_396_ = _args[21];
lean_object* v_h__21_397_ = _args[22];
_start:
{
uint8_t v_x_282__boxed_398_; lean_object* v_res_399_; 
v_x_282__boxed_398_ = lean_unbox(v_x_376_);
v_res_399_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Spec_instReprBinOp_repr_match__1_splitter(v_motive_375_, v_x_282__boxed_398_, v_h__1_377_, v_h__2_378_, v_h__3_379_, v_h__4_380_, v_h__5_381_, v_h__6_382_, v_h__7_383_, v_h__8_384_, v_h__9_385_, v_h__10_386_, v_h__11_387_, v_h__12_388_, v_h__13_389_, v_h__14_390_, v_h__15_391_, v_h__16_392_, v_h__17_393_, v_h__18_394_, v_h__19_395_, v_h__20_396_, v_h__21_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_simpExp(lean_object* v_x_400_){
_start:
{
switch(lean_obj_tag(v_x_400_))
{
case 2:
{
lean_object* v_addr_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_409_; 
v_addr_401_ = lean_ctor_get(v_x_400_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_409_ == 0)
{
v___x_403_ = v_x_400_;
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_addr_401_);
lean_dec(v_x_400_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_407_; 
v___x_405_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_addr_401_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_405_);
v___x_407_ = v___x_403_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
case 3:
{
uint8_t v_op_410_; lean_object* v_e1_411_; lean_object* v_e2_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_op_410_ = lean_ctor_get_uint8(v_x_400_, sizeof(void*)*2);
v_e1_411_ = lean_ctor_get(v_x_400_, 0);
lean_inc_ref(v_e1_411_);
v_e2_412_ = lean_ctor_get(v_x_400_, 1);
lean_inc_ref(v_e2_412_);
lean_dec_ref_known(v_x_400_, 2);
v___x_413_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_e1_411_);
v___x_414_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_e2_412_);
v___x_415_ = lp_rv2pancake_Rv2Pancake_Passes_simpBinOp(v_op_410_, v___x_413_, v___x_414_);
return v___x_415_;
}
default: 
{
return v_x_400_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpExp_match__1_splitter___redArg(lean_object* v_x_416_, lean_object* v_h__1_417_, lean_object* v_h__2_418_, lean_object* v_h__3_419_, lean_object* v_h__4_420_){
_start:
{
switch(lean_obj_tag(v_x_416_))
{
case 0:
{
uint64_t v_w_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
lean_dec(v_h__4_420_);
lean_dec(v_h__3_419_);
lean_dec(v_h__2_418_);
v_w_421_ = lean_ctor_get_uint64(v_x_416_, 0);
lean_dec_ref_known(v_x_416_, 0);
v___x_422_ = lean_box_uint64(v_w_421_);
v___x_423_ = lean_apply_1(v_h__1_417_, v___x_422_);
return v___x_423_;
}
case 1:
{
lean_object* v_v_424_; lean_object* v___x_425_; 
lean_dec(v_h__4_420_);
lean_dec(v_h__3_419_);
lean_dec(v_h__1_417_);
v_v_424_ = lean_ctor_get(v_x_416_, 0);
lean_inc(v_v_424_);
lean_dec_ref_known(v_x_416_, 1);
v___x_425_ = lean_apply_1(v_h__2_418_, v_v_424_);
return v___x_425_;
}
case 2:
{
lean_object* v_addr_426_; lean_object* v___x_427_; 
lean_dec(v_h__4_420_);
lean_dec(v_h__2_418_);
lean_dec(v_h__1_417_);
v_addr_426_ = lean_ctor_get(v_x_416_, 0);
lean_inc_ref(v_addr_426_);
lean_dec_ref_known(v_x_416_, 1);
v___x_427_ = lean_apply_1(v_h__3_419_, v_addr_426_);
return v___x_427_;
}
default: 
{
uint8_t v_op_428_; lean_object* v_e1_429_; lean_object* v_e2_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec(v_h__3_419_);
lean_dec(v_h__2_418_);
lean_dec(v_h__1_417_);
v_op_428_ = lean_ctor_get_uint8(v_x_416_, sizeof(void*)*2);
v_e1_429_ = lean_ctor_get(v_x_416_, 0);
lean_inc_ref(v_e1_429_);
v_e2_430_ = lean_ctor_get(v_x_416_, 1);
lean_inc_ref(v_e2_430_);
lean_dec_ref_known(v_x_416_, 2);
v___x_431_ = lean_box(v_op_428_);
v___x_432_ = lean_apply_3(v_h__4_420_, v___x_431_, v_e1_429_, v_e2_430_);
return v___x_432_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_simpExp_match__1_splitter(lean_object* v_motive_433_, lean_object* v_x_434_, lean_object* v_h__1_435_, lean_object* v_h__2_436_, lean_object* v_h__3_437_, lean_object* v_h__4_438_){
_start:
{
switch(lean_obj_tag(v_x_434_))
{
case 0:
{
uint64_t v_w_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
lean_dec(v_h__4_438_);
lean_dec(v_h__3_437_);
lean_dec(v_h__2_436_);
v_w_439_ = lean_ctor_get_uint64(v_x_434_, 0);
lean_dec_ref_known(v_x_434_, 0);
v___x_440_ = lean_box_uint64(v_w_439_);
v___x_441_ = lean_apply_1(v_h__1_435_, v___x_440_);
return v___x_441_;
}
case 1:
{
lean_object* v_v_442_; lean_object* v___x_443_; 
lean_dec(v_h__4_438_);
lean_dec(v_h__3_437_);
lean_dec(v_h__1_435_);
v_v_442_ = lean_ctor_get(v_x_434_, 0);
lean_inc(v_v_442_);
lean_dec_ref_known(v_x_434_, 1);
v___x_443_ = lean_apply_1(v_h__2_436_, v_v_442_);
return v___x_443_;
}
case 2:
{
lean_object* v_addr_444_; lean_object* v___x_445_; 
lean_dec(v_h__4_438_);
lean_dec(v_h__2_436_);
lean_dec(v_h__1_435_);
v_addr_444_ = lean_ctor_get(v_x_434_, 0);
lean_inc_ref(v_addr_444_);
lean_dec_ref_known(v_x_434_, 1);
v___x_445_ = lean_apply_1(v_h__3_437_, v_addr_444_);
return v___x_445_;
}
default: 
{
uint8_t v_op_446_; lean_object* v_e1_447_; lean_object* v_e2_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec(v_h__3_437_);
lean_dec(v_h__2_436_);
lean_dec(v_h__1_435_);
v_op_446_ = lean_ctor_get_uint8(v_x_434_, sizeof(void*)*2);
v_e1_447_ = lean_ctor_get(v_x_434_, 0);
lean_inc_ref(v_e1_447_);
v_e2_448_ = lean_ctor_get(v_x_434_, 1);
lean_inc_ref(v_e2_448_);
lean_dec_ref_known(v_x_434_, 2);
v___x_449_ = lean_box(v_op_446_);
v___x_450_ = lean_apply_3(v_h__4_438_, v___x_449_, v_e1_447_, v_e2_448_);
return v___x_450_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_substVarExp(lean_object* v_v_451_, lean_object* v_rep_452_, lean_object* v_x_453_){
_start:
{
switch(lean_obj_tag(v_x_453_))
{
case 0:
{
return v_x_453_;
}
case 1:
{
lean_object* v_v_454_; uint8_t v___x_455_; 
v_v_454_ = lean_ctor_get(v_x_453_, 0);
v___x_455_ = lean_nat_dec_eq(v_v_454_, v_v_451_);
if (v___x_455_ == 0)
{
return v_x_453_;
}
else
{
lean_dec_ref_known(v_x_453_, 1);
lean_inc_ref(v_rep_452_);
return v_rep_452_;
}
}
case 2:
{
lean_object* v_addr_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_464_; 
v_addr_456_ = lean_ctor_get(v_x_453_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_464_ == 0)
{
v___x_458_ = v_x_453_;
v_isShared_459_ = v_isSharedCheck_464_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_addr_456_);
lean_dec(v_x_453_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_464_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_460_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_451_, v_rep_452_, v_addr_456_);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v___x_460_);
v___x_462_ = v___x_458_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_460_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
default: 
{
uint8_t v_op_465_; lean_object* v_e1_466_; lean_object* v_e2_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_476_; 
v_op_465_ = lean_ctor_get_uint8(v_x_453_, sizeof(void*)*2);
v_e1_466_ = lean_ctor_get(v_x_453_, 0);
v_e2_467_ = lean_ctor_get(v_x_453_, 1);
v_isSharedCheck_476_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_476_ == 0)
{
v___x_469_ = v_x_453_;
v_isShared_470_ = v_isSharedCheck_476_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_e2_467_);
lean_inc(v_e1_466_);
lean_dec(v_x_453_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_476_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_471_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_451_, v_rep_452_, v_e1_466_);
v___x_472_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_451_, v_rep_452_, v_e2_467_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 1, v___x_472_);
lean_ctor_set(v___x_469_, 0, v___x_471_);
v___x_474_ = v___x_469_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_471_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v___x_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_475_, sizeof(void*)*2, v_op_465_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_substVarExp___boxed(lean_object* v_v_477_, lean_object* v_rep_478_, lean_object* v_x_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_477_, v_rep_478_, v_x_479_);
lean_dec_ref(v_rep_478_);
lean_dec(v_v_477_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_seqSkipElim(lean_object* v_p1_481_, lean_object* v_p2_482_){
_start:
{
if (lean_obj_tag(v_p1_481_) == 0)
{
return v_p2_482_;
}
else
{
lean_object* v___x_483_; 
v___x_483_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_483_, 0, v_p1_481_);
lean_ctor_set(v___x_483_, 1, v_p2_482_);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_seqSkipElim_match__1_splitter___redArg(lean_object* v_p1_484_, lean_object* v_h__1_485_, lean_object* v_h__2_486_){
_start:
{
if (lean_obj_tag(v_p1_484_) == 0)
{
lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec(v_h__2_486_);
v___x_487_ = lean_box(0);
v___x_488_ = lean_apply_1(v_h__1_485_, v___x_487_);
return v___x_488_;
}
else
{
lean_object* v___x_489_; 
lean_dec(v_h__1_485_);
v___x_489_ = lean_apply_2(v_h__2_486_, v_p1_484_, lean_box(0));
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_seqSkipElim_match__1_splitter(lean_object* v_motive_490_, lean_object* v_p1_491_, lean_object* v_h__1_492_, lean_object* v_h__2_493_){
_start:
{
if (lean_obj_tag(v_p1_491_) == 0)
{
lean_object* v___x_494_; lean_object* v___x_495_; 
lean_dec(v_h__2_493_);
v___x_494_ = lean_box(0);
v___x_495_ = lean_apply_1(v_h__1_492_, v___x_494_);
return v___x_495_;
}
else
{
lean_object* v___x_496_; 
lean_dec(v_h__1_492_);
v___x_496_ = lean_apply_2(v_h__2_493_, v_p1_491_, lean_box(0));
return v___x_496_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst(lean_object* v_v_497_, lean_object* v_x_498_){
_start:
{
switch(lean_obj_tag(v_x_498_))
{
case 1:
{
lean_object* v_e_499_; 
v_e_499_ = lean_ctor_get(v_x_498_, 1);
lean_inc_ref(v_e_499_);
if (lean_obj_tag(v_e_499_) == 0)
{
lean_object* v_v_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_513_; 
v_v_500_ = lean_ctor_get(v_x_498_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_498_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; 
v_unused_514_ = lean_ctor_get(v_x_498_, 1);
lean_dec(v_unused_514_);
v___x_502_ = v_x_498_;
v_isShared_503_ = v_isSharedCheck_513_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_v_500_);
lean_dec(v_x_498_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_513_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
uint64_t v_w_504_; uint8_t v___x_505_; 
v_w_504_ = lean_ctor_get_uint64(v_e_499_, 0);
lean_dec_ref_known(v_e_499_, 0);
v___x_505_ = lean_nat_dec_eq(v_v_500_, v_v_497_);
lean_dec(v_v_500_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; 
lean_del_object(v___x_502_);
v___x_506_ = lean_box(0);
return v___x_506_;
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_507_ = lean_box(0);
v___x_508_ = lean_box_uint64(v_w_504_);
if (v_isShared_503_ == 0)
{
lean_ctor_set_tag(v___x_502_, 0);
lean_ctor_set(v___x_502_, 1, v___x_508_);
lean_ctor_set(v___x_502_, 0, v___x_507_);
v___x_510_ = v___x_502_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_507_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v___x_508_);
v___x_510_ = v_reuseFailAlloc_512_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_511_; 
v___x_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
}
}
else
{
lean_object* v___x_515_; 
lean_dec_ref_known(v_x_498_, 2);
lean_dec_ref(v_e_499_);
v___x_515_ = lean_box(0);
return v___x_515_;
}
}
case 3:
{
lean_object* v_p1_516_; lean_object* v_p2_517_; lean_object* v___x_518_; 
v_p1_516_ = lean_ctor_get(v_x_498_, 0);
lean_inc(v_p1_516_);
v_p2_517_ = lean_ctor_get(v_x_498_, 1);
lean_inc(v_p2_517_);
lean_dec_ref_known(v_x_498_, 2);
v___x_518_ = lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst(v_v_497_, v_p2_517_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_dec(v_p1_516_);
return v___x_518_;
}
else
{
lean_object* v_val_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_536_; 
v_val_519_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_536_ == 0)
{
v___x_521_ = v___x_518_;
v_isShared_522_ = v_isSharedCheck_536_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_val_519_);
lean_dec(v___x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_536_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v_fst_523_; lean_object* v_snd_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_535_; 
v_fst_523_ = lean_ctor_get(v_val_519_, 0);
v_snd_524_ = lean_ctor_get(v_val_519_, 1);
v_isSharedCheck_535_ = !lean_is_exclusive(v_val_519_);
if (v_isSharedCheck_535_ == 0)
{
v___x_526_ = v_val_519_;
v_isShared_527_ = v_isSharedCheck_535_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_snd_524_);
lean_inc(v_fst_523_);
lean_dec(v_val_519_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_535_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = lp_rv2pancake_Rv2Pancake_Passes_seqSkipElim(v_p1_516_, v_fst_523_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_snd_524_);
v___x_530_ = v_reuseFailAlloc_534_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_532_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_530_);
v___x_532_ = v___x_521_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_537_; 
lean_dec(v_x_498_);
v___x_537_ = lean_box(0);
return v___x_537_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst___boxed(lean_object* v_v_538_, lean_object* v_x_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst(v_v_538_, v_x_539_);
lean_dec(v_v_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__3_splitter___redArg(lean_object* v_x_541_, lean_object* v_h__1_542_, lean_object* v_h__2_543_, lean_object* v_h__3_544_){
_start:
{
switch(lean_obj_tag(v_x_541_))
{
case 1:
{
lean_object* v_e_545_; 
lean_dec(v_h__2_543_);
v_e_545_ = lean_ctor_get(v_x_541_, 1);
if (lean_obj_tag(v_e_545_) == 0)
{
lean_object* v_v_546_; uint64_t v_w_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
lean_inc_ref(v_e_545_);
lean_dec(v_h__3_544_);
v_v_546_ = lean_ctor_get(v_x_541_, 0);
lean_inc(v_v_546_);
lean_dec_ref_known(v_x_541_, 2);
v_w_547_ = lean_ctor_get_uint64(v_e_545_, 0);
lean_dec_ref_known(v_e_545_, 0);
v___x_548_ = lean_box_uint64(v_w_547_);
v___x_549_ = lean_apply_2(v_h__1_542_, v_v_546_, v___x_548_);
return v___x_549_;
}
else
{
lean_object* v___x_550_; 
lean_dec(v_h__1_542_);
v___x_550_ = lean_apply_3(v_h__3_544_, v_x_541_, lean_box(0), lean_box(0));
return v___x_550_;
}
}
case 3:
{
lean_object* v_p1_551_; lean_object* v_p2_552_; lean_object* v___x_553_; 
lean_dec(v_h__3_544_);
lean_dec(v_h__1_542_);
v_p1_551_ = lean_ctor_get(v_x_541_, 0);
lean_inc(v_p1_551_);
v_p2_552_ = lean_ctor_get(v_x_541_, 1);
lean_inc(v_p2_552_);
lean_dec_ref_known(v_x_541_, 2);
v___x_553_ = lean_apply_2(v_h__2_543_, v_p1_551_, v_p2_552_);
return v___x_553_;
}
default: 
{
lean_object* v___x_554_; 
lean_dec(v_h__2_543_);
lean_dec(v_h__1_542_);
v___x_554_ = lean_apply_3(v_h__3_544_, v_x_541_, lean_box(0), lean_box(0));
return v___x_554_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__3_splitter(lean_object* v_motive_555_, lean_object* v_x_556_, lean_object* v_h__1_557_, lean_object* v_h__2_558_, lean_object* v_h__3_559_){
_start:
{
switch(lean_obj_tag(v_x_556_))
{
case 1:
{
lean_object* v_e_560_; 
lean_dec(v_h__2_558_);
v_e_560_ = lean_ctor_get(v_x_556_, 1);
if (lean_obj_tag(v_e_560_) == 0)
{
lean_object* v_v_561_; uint64_t v_w_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
lean_inc_ref(v_e_560_);
lean_dec(v_h__3_559_);
v_v_561_ = lean_ctor_get(v_x_556_, 0);
lean_inc(v_v_561_);
lean_dec_ref_known(v_x_556_, 2);
v_w_562_ = lean_ctor_get_uint64(v_e_560_, 0);
lean_dec_ref_known(v_e_560_, 0);
v___x_563_ = lean_box_uint64(v_w_562_);
v___x_564_ = lean_apply_2(v_h__1_557_, v_v_561_, v___x_563_);
return v___x_564_;
}
else
{
lean_object* v___x_565_; 
lean_dec(v_h__1_557_);
v___x_565_ = lean_apply_3(v_h__3_559_, v_x_556_, lean_box(0), lean_box(0));
return v___x_565_;
}
}
case 3:
{
lean_object* v_p1_566_; lean_object* v_p2_567_; lean_object* v___x_568_; 
lean_dec(v_h__3_559_);
lean_dec(v_h__1_557_);
v_p1_566_ = lean_ctor_get(v_x_556_, 0);
lean_inc(v_p1_566_);
v_p2_567_ = lean_ctor_get(v_x_556_, 1);
lean_inc(v_p2_567_);
lean_dec_ref_known(v_x_556_, 2);
v___x_568_ = lean_apply_2(v_h__2_558_, v_p1_566_, v_p2_567_);
return v___x_568_;
}
default: 
{
lean_object* v___x_569_; 
lean_dec(v_h__2_558_);
lean_dec(v_h__1_557_);
v___x_569_ = lean_apply_3(v_h__3_559_, v_x_556_, lean_box(0), lean_box(0));
return v___x_569_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__1_splitter___redArg(lean_object* v_x_570_, lean_object* v_h__1_571_, lean_object* v_h__2_572_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec(v_h__1_571_);
v___x_573_ = lean_box(0);
v___x_574_ = lean_apply_1(v_h__2_572_, v___x_573_);
return v___x_574_;
}
else
{
lean_object* v_val_575_; lean_object* v_fst_576_; lean_object* v_snd_577_; lean_object* v___x_578_; 
lean_dec(v_h__2_572_);
v_val_575_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_val_575_);
lean_dec_ref_known(v_x_570_, 1);
v_fst_576_ = lean_ctor_get(v_val_575_, 0);
lean_inc(v_fst_576_);
v_snd_577_ = lean_ctor_get(v_val_575_, 1);
lean_inc(v_snd_577_);
lean_dec(v_val_575_);
v___x_578_ = lean_apply_2(v_h__1_571_, v_fst_576_, v_snd_577_);
return v___x_578_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractTrailingConst_match__1_splitter(lean_object* v_motive_579_, lean_object* v_x_580_, lean_object* v_h__1_581_, lean_object* v_h__2_582_){
_start:
{
if (lean_obj_tag(v_x_580_) == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; 
lean_dec(v_h__1_581_);
v___x_583_ = lean_box(0);
v___x_584_ = lean_apply_1(v_h__2_582_, v___x_583_);
return v___x_584_;
}
else
{
lean_object* v_val_585_; lean_object* v_fst_586_; lean_object* v_snd_587_; lean_object* v___x_588_; 
lean_dec(v_h__2_582_);
v_val_585_ = lean_ctor_get(v_x_580_, 0);
lean_inc(v_val_585_);
lean_dec_ref_known(v_x_580_, 1);
v_fst_586_ = lean_ctor_get(v_val_585_, 0);
lean_inc(v_fst_586_);
v_snd_587_ = lean_ctor_get(v_val_585_, 1);
lean_inc(v_snd_587_);
lean_dec(v_val_585_);
v___x_588_ = lean_apply_2(v_h__1_581_, v_fst_586_, v_snd_587_);
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(lean_object* v_v_589_, uint64_t v_c_590_, lean_object* v_x_591_){
_start:
{
switch(lean_obj_tag(v_x_591_))
{
case 0:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_592_, 0, v_c_590_);
v___x_593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_593_, 0, v_v_589_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
return v___x_593_;
}
case 1:
{
lean_object* v_v_594_; lean_object* v_e_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_611_; 
v_v_594_ = lean_ctor_get(v_x_591_, 0);
v_e_595_ = lean_ctor_get(v_x_591_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_x_591_);
if (v_isSharedCheck_611_ == 0)
{
v___x_597_ = v_x_591_;
v_isShared_598_ = v_isSharedCheck_611_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_e_595_);
lean_inc(v_v_594_);
lean_dec(v_x_591_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_611_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v_e2_x27_601_; uint8_t v___x_602_; 
v___x_599_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_599_, 0, v_c_590_);
v___x_600_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_589_, v___x_599_, v_e_595_);
v_e2_x27_601_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v___x_600_);
v___x_602_ = lean_nat_dec_eq(v_v_589_, v_v_594_);
if (v___x_602_ == 0)
{
lean_object* v___x_604_; 
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 1, v_e2_x27_601_);
v___x_604_ = v___x_597_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_v_594_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_e2_x27_601_);
v___x_604_ = v_reuseFailAlloc_607_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_605_, 0, v_v_589_);
lean_ctor_set(v___x_605_, 1, v___x_599_);
v___x_606_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_604_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
return v___x_606_;
}
}
else
{
lean_object* v___x_609_; 
lean_dec_ref_known(v___x_599_, 0);
lean_dec(v_v_594_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 1, v_e2_x27_601_);
lean_ctor_set(v___x_597_, 0, v_v_589_);
v___x_609_ = v___x_597_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_v_589_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_e2_x27_601_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
case 2:
{
lean_object* v_addr_612_; lean_object* v_val_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_627_; 
v_addr_612_ = lean_ctor_get(v_x_591_, 0);
v_val_613_ = lean_ctor_get(v_x_591_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v_x_591_);
if (v_isSharedCheck_627_ == 0)
{
v___x_615_ = v_x_591_;
v_isShared_616_ = v_isSharedCheck_627_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_val_613_);
lean_inc(v_addr_612_);
lean_dec(v_x_591_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_627_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v_a_x27_619_; lean_object* v___x_620_; lean_object* v_e_x27_621_; lean_object* v___x_623_; 
v___x_617_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_617_, 0, v_c_590_);
v___x_618_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_589_, v___x_617_, v_addr_612_);
v_a_x27_619_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v___x_618_);
v___x_620_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_589_, v___x_617_, v_val_613_);
v_e_x27_621_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v___x_620_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 1, v_e_x27_621_);
lean_ctor_set(v___x_615_, 0, v_a_x27_619_);
v___x_623_ = v___x_615_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_x27_619_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_e_x27_621_);
v___x_623_ = v_reuseFailAlloc_626_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_624_, 0, v_v_589_);
lean_ctor_set(v___x_624_, 1, v___x_617_);
v___x_625_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
return v___x_625_;
}
}
}
case 3:
{
lean_object* v_p1_628_; lean_object* v_p2_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_646_; 
v_p1_628_ = lean_ctor_get(v_x_591_, 0);
v_p2_629_ = lean_ctor_get(v_x_591_, 1);
v_isSharedCheck_646_ = !lean_is_exclusive(v_x_591_);
if (v_isSharedCheck_646_ == 0)
{
v___x_631_ = v_x_591_;
v_isShared_632_ = v_isSharedCheck_646_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_p2_629_);
lean_inc(v_p1_628_);
lean_dec(v_x_591_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_646_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v_p1_x27_633_; lean_object* v___x_634_; 
lean_inc(v_v_589_);
v_p1_x27_633_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v_v_589_, v_c_590_, v_p1_628_);
lean_inc(v_p1_x27_633_);
v___x_634_ = lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst(v_v_589_, v_p1_x27_633_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v___x_636_; 
lean_dec(v_v_589_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v_p1_x27_633_);
v___x_636_ = v___x_631_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_p1_x27_633_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_p2_629_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
else
{
lean_object* v_val_638_; lean_object* v_fst_639_; lean_object* v_snd_640_; uint64_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
lean_dec(v_p1_x27_633_);
v_val_638_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v___x_634_, 1);
v_fst_639_ = lean_ctor_get(v_val_638_, 0);
lean_inc(v_fst_639_);
v_snd_640_ = lean_ctor_get(v_val_638_, 1);
lean_inc(v_snd_640_);
lean_dec(v_val_638_);
v___x_641_ = lean_unbox_uint64(v_snd_640_);
lean_dec(v_snd_640_);
v___x_642_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v_v_589_, v___x_641_, v_p2_629_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 1, v___x_642_);
lean_ctor_set(v___x_631_, 0, v_fst_639_);
v___x_644_ = v___x_631_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_fst_639_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v___x_642_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
case 4:
{
lean_object* v_cond_647_; lean_object* v_thenBr_648_; lean_object* v_elseBr_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_666_; 
v_cond_647_ = lean_ctor_get(v_x_591_, 0);
v_thenBr_648_ = lean_ctor_get(v_x_591_, 1);
v_elseBr_649_ = lean_ctor_get(v_x_591_, 2);
v_isSharedCheck_666_ = !lean_is_exclusive(v_x_591_);
if (v_isSharedCheck_666_ == 0)
{
v___x_651_ = v_x_591_;
v_isShared_652_ = v_isSharedCheck_666_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_elseBr_649_);
lean_inc(v_thenBr_648_);
lean_inc(v_cond_647_);
lean_dec(v_x_591_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_666_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v_cond_x27_655_; 
v___x_653_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_653_, 0, v_c_590_);
v___x_654_ = lp_rv2pancake_Rv2Pancake_Passes_substVarExp(v_v_589_, v___x_653_, v_cond_647_);
lean_dec_ref_known(v___x_653_, 0);
v_cond_x27_655_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v___x_654_);
if (lean_obj_tag(v_cond_x27_655_) == 0)
{
uint64_t v_w_656_; uint64_t v___x_657_; uint8_t v___x_658_; 
lean_del_object(v___x_651_);
v_w_656_ = lean_ctor_get_uint64(v_cond_x27_655_, 0);
lean_dec_ref_known(v_cond_x27_655_, 0);
v___x_657_ = 0ULL;
v___x_658_ = lean_uint64_dec_eq(v_w_656_, v___x_657_);
if (v___x_658_ == 0)
{
lean_dec(v_elseBr_649_);
v_x_591_ = v_thenBr_648_;
goto _start;
}
else
{
lean_dec(v_thenBr_648_);
v_x_591_ = v_elseBr_649_;
goto _start;
}
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_664_; 
lean_inc(v_v_589_);
v___x_661_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v_v_589_, v_c_590_, v_thenBr_648_);
v___x_662_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v_v_589_, v_c_590_, v_elseBr_649_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 2, v___x_662_);
lean_ctor_set(v___x_651_, 1, v___x_661_);
lean_ctor_set(v___x_651_, 0, v_cond_x27_655_);
v___x_664_ = v___x_651_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_cond_x27_655_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_665_, 2, v___x_662_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
default: 
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_667_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint64(v___x_667_, 0, v_c_590_);
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v_v_589_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
lean_ctor_set(v___x_669_, 1, v_x_591_);
return v___x_669_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign___boxed(lean_object* v_v_670_, lean_object* v_c_671_, lean_object* v_x_672_){
_start:
{
uint64_t v_c_boxed_673_; lean_object* v_res_674_; 
v_c_boxed_673_ = lean_unbox_uint64(v_c_671_);
lean_dec_ref(v_c_671_);
v_res_674_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v_v_670_, v_c_boxed_673_, v_x_672_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_extractAnyTrailingConst(lean_object* v_x_675_){
_start:
{
switch(lean_obj_tag(v_x_675_))
{
case 1:
{
lean_object* v_e_676_; 
v_e_676_ = lean_ctor_get(v_x_675_, 1);
lean_inc_ref(v_e_676_);
if (lean_obj_tag(v_e_676_) == 0)
{
lean_object* v_v_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_692_; 
v_v_677_ = lean_ctor_get(v_x_675_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v_x_675_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; 
v_unused_693_ = lean_ctor_get(v_x_675_, 1);
lean_dec(v_unused_693_);
v___x_679_ = v_x_675_;
v_isShared_680_ = v_isSharedCheck_692_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_v_677_);
lean_dec(v_x_675_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_692_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
uint64_t v_w_681_; lean_object* v___x_682_; uint8_t v___x_683_; 
v_w_681_ = lean_ctor_get_uint64(v_e_676_, 0);
lean_dec_ref_known(v_e_676_, 0);
v___x_682_ = lean_unsigned_to_nat(0u);
v___x_683_ = lean_nat_dec_eq(v_v_677_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_687_; 
v___x_684_ = lean_box(0);
v___x_685_ = lean_box_uint64(v_w_681_);
if (v_isShared_680_ == 0)
{
lean_ctor_set_tag(v___x_679_, 0);
lean_ctor_set(v___x_679_, 1, v___x_685_);
v___x_687_ = v___x_679_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_v_677_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v___x_685_);
v___x_687_ = v_reuseFailAlloc_690_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_684_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
}
else
{
lean_object* v___x_691_; 
lean_del_object(v___x_679_);
lean_dec(v_v_677_);
v___x_691_ = lean_box(0);
return v___x_691_;
}
}
}
else
{
lean_object* v___x_694_; 
lean_dec_ref_known(v_x_675_, 2);
lean_dec_ref(v_e_676_);
v___x_694_ = lean_box(0);
return v___x_694_;
}
}
case 3:
{
lean_object* v_p1_695_; lean_object* v_p2_696_; lean_object* v___x_697_; 
v_p1_695_ = lean_ctor_get(v_x_675_, 0);
lean_inc(v_p1_695_);
v_p2_696_ = lean_ctor_get(v_x_675_, 1);
lean_inc(v_p2_696_);
lean_dec_ref_known(v_x_675_, 2);
v___x_697_ = lp_rv2pancake_Rv2Pancake_Passes_extractAnyTrailingConst(v_p2_696_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_dec(v_p1_695_);
return v___x_697_;
}
else
{
lean_object* v_val_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_715_; 
v_val_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_715_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_715_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_val_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_715_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v_fst_702_; lean_object* v_snd_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_714_; 
v_fst_702_ = lean_ctor_get(v_val_698_, 0);
v_snd_703_ = lean_ctor_get(v_val_698_, 1);
v_isSharedCheck_714_ = !lean_is_exclusive(v_val_698_);
if (v_isSharedCheck_714_ == 0)
{
v___x_705_ = v_val_698_;
v_isShared_706_ = v_isSharedCheck_714_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_snd_703_);
lean_inc(v_fst_702_);
lean_dec(v_val_698_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_714_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v___x_709_; 
v___x_707_ = lp_rv2pancake_Rv2Pancake_Passes_seqSkipElim(v_p1_695_, v_fst_702_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_707_);
v___x_709_ = v___x_705_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v_snd_703_);
v___x_709_ = v_reuseFailAlloc_713_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
lean_object* v___x_711_; 
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_709_);
v___x_711_ = v___x_700_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_716_; 
lean_dec(v_x_675_);
v___x_716_ = lean_box(0);
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractAnyTrailingConst_match__1_splitter___redArg(lean_object* v_x_717_, lean_object* v_h__1_718_, lean_object* v_h__2_719_){
_start:
{
if (lean_obj_tag(v_x_717_) == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec(v_h__1_718_);
v___x_720_ = lean_box(0);
v___x_721_ = lean_apply_1(v_h__2_719_, v___x_720_);
return v___x_721_;
}
else
{
lean_object* v_val_722_; lean_object* v_snd_723_; lean_object* v_fst_724_; lean_object* v_fst_725_; lean_object* v_snd_726_; lean_object* v___x_727_; 
lean_dec(v_h__2_719_);
v_val_722_ = lean_ctor_get(v_x_717_, 0);
lean_inc(v_val_722_);
lean_dec_ref_known(v_x_717_, 1);
v_snd_723_ = lean_ctor_get(v_val_722_, 1);
lean_inc(v_snd_723_);
v_fst_724_ = lean_ctor_get(v_val_722_, 0);
lean_inc(v_fst_724_);
lean_dec(v_val_722_);
v_fst_725_ = lean_ctor_get(v_snd_723_, 0);
lean_inc(v_fst_725_);
v_snd_726_ = lean_ctor_get(v_snd_723_, 1);
lean_inc(v_snd_726_);
lean_dec(v_snd_723_);
v___x_727_ = lean_apply_3(v_h__1_718_, v_fst_724_, v_fst_725_, v_snd_726_);
return v___x_727_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_extractAnyTrailingConst_match__1_splitter(lean_object* v_motive_728_, lean_object* v_x_729_, lean_object* v_h__1_730_, lean_object* v_h__2_731_){
_start:
{
if (lean_obj_tag(v_x_729_) == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v_h__1_730_);
v___x_732_ = lean_box(0);
v___x_733_ = lean_apply_1(v_h__2_731_, v___x_732_);
return v___x_733_;
}
else
{
lean_object* v_val_734_; lean_object* v_snd_735_; lean_object* v_fst_736_; lean_object* v_fst_737_; lean_object* v_snd_738_; lean_object* v___x_739_; 
lean_dec(v_h__2_731_);
v_val_734_ = lean_ctor_get(v_x_729_, 0);
lean_inc(v_val_734_);
lean_dec_ref_known(v_x_729_, 1);
v_snd_735_ = lean_ctor_get(v_val_734_, 1);
lean_inc(v_snd_735_);
v_fst_736_ = lean_ctor_get(v_val_734_, 0);
lean_inc(v_fst_736_);
lean_dec(v_val_734_);
v_fst_737_ = lean_ctor_get(v_snd_735_, 0);
lean_inc(v_fst_737_);
v_snd_738_ = lean_ctor_get(v_snd_735_, 1);
lean_inc(v_snd_738_);
lean_dec(v_snd_735_);
v___x_739_ = lean_apply_3(v_h__1_730_, v_fst_736_, v_fst_737_, v_snd_738_);
return v___x_739_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(lean_object* v_x_740_){
_start:
{
switch(lean_obj_tag(v_x_740_))
{
case 0:
{
return v_x_740_;
}
case 1:
{
lean_object* v_v_741_; lean_object* v_e_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_750_; 
v_v_741_ = lean_ctor_get(v_x_740_, 0);
v_e_742_ = lean_ctor_get(v_x_740_, 1);
v_isSharedCheck_750_ = !lean_is_exclusive(v_x_740_);
if (v_isSharedCheck_750_ == 0)
{
v___x_744_ = v_x_740_;
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_e_742_);
lean_inc(v_v_741_);
lean_dec(v_x_740_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_746_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_e_742_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v___x_746_);
v___x_748_ = v___x_744_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_v_741_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v___x_746_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
case 2:
{
lean_object* v_addr_751_; lean_object* v_val_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_761_; 
v_addr_751_ = lean_ctor_get(v_x_740_, 0);
v_val_752_ = lean_ctor_get(v_x_740_, 1);
v_isSharedCheck_761_ = !lean_is_exclusive(v_x_740_);
if (v_isSharedCheck_761_ == 0)
{
v___x_754_ = v_x_740_;
v_isShared_755_ = v_isSharedCheck_761_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_val_752_);
lean_inc(v_addr_751_);
lean_dec(v_x_740_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_761_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_756_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_addr_751_);
v___x_757_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_val_752_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 1, v___x_757_);
lean_ctor_set(v___x_754_, 0, v___x_756_);
v___x_759_ = v___x_754_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
case 3:
{
lean_object* v_p1_762_; lean_object* v_p2_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_790_; 
v_p1_762_ = lean_ctor_get(v_x_740_, 0);
v_p2_763_ = lean_ctor_get(v_x_740_, 1);
v_isSharedCheck_790_ = !lean_is_exclusive(v_x_740_);
if (v_isSharedCheck_790_ == 0)
{
v___x_765_ = v_x_740_;
v_isShared_766_ = v_isSharedCheck_790_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_p2_763_);
lean_inc(v_p1_762_);
lean_dec(v_x_740_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_790_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v_p1_x27_767_; lean_object* v_p2_x27_768_; lean_object* v___x_769_; 
v_p1_x27_767_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_p1_762_);
v_p2_x27_768_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_p2_763_);
lean_inc(v_p1_x27_767_);
v___x_769_ = lp_rv2pancake_Rv2Pancake_Passes_extractAnyTrailingConst(v_p1_x27_767_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v___x_771_; 
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v_p2_x27_768_);
lean_ctor_set(v___x_765_, 0, v_p1_x27_767_);
v___x_771_ = v___x_765_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_p1_x27_767_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_p2_x27_768_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
else
{
lean_object* v_val_773_; lean_object* v_snd_774_; lean_object* v_fst_775_; lean_object* v_fst_776_; lean_object* v_snd_777_; lean_object* v___x_778_; uint8_t v___x_779_; 
v_val_773_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_val_773_);
lean_dec_ref_known(v___x_769_, 1);
v_snd_774_ = lean_ctor_get(v_val_773_, 1);
lean_inc(v_snd_774_);
v_fst_775_ = lean_ctor_get(v_val_773_, 0);
lean_inc(v_fst_775_);
lean_dec(v_val_773_);
v_fst_776_ = lean_ctor_get(v_snd_774_, 0);
lean_inc(v_fst_776_);
v_snd_777_ = lean_ctor_get(v_snd_774_, 1);
lean_inc(v_snd_777_);
lean_dec(v_snd_774_);
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = lean_nat_dec_eq(v_fst_776_, v___x_778_);
if (v___x_779_ == 0)
{
lean_dec(v_p1_x27_767_);
if (lean_obj_tag(v_fst_775_) == 0)
{
uint64_t v___x_780_; lean_object* v___x_781_; 
lean_del_object(v___x_765_);
v___x_780_ = lean_unbox_uint64(v_snd_777_);
lean_dec(v_snd_777_);
v___x_781_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v_fst_776_, v___x_780_, v_p2_x27_768_);
return v___x_781_;
}
else
{
uint64_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_782_ = lean_unbox_uint64(v_snd_777_);
lean_dec(v_snd_777_);
v___x_783_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v_fst_776_, v___x_782_, v_p2_x27_768_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v___x_783_);
lean_ctor_set(v___x_765_, 0, v_fst_775_);
v___x_785_ = v___x_765_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_fst_775_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
lean_object* v___x_788_; 
lean_dec(v_snd_777_);
lean_dec(v_fst_776_);
lean_dec(v_fst_775_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 1, v_p2_x27_768_);
lean_ctor_set(v___x_765_, 0, v_p1_x27_767_);
v___x_788_ = v___x_765_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_p1_x27_767_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_p2_x27_768_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
}
case 4:
{
lean_object* v_cond_791_; lean_object* v_thenBr_792_; lean_object* v_elseBr_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_806_; 
v_cond_791_ = lean_ctor_get(v_x_740_, 0);
v_thenBr_792_ = lean_ctor_get(v_x_740_, 1);
v_elseBr_793_ = lean_ctor_get(v_x_740_, 2);
v_isSharedCheck_806_ = !lean_is_exclusive(v_x_740_);
if (v_isSharedCheck_806_ == 0)
{
v___x_795_ = v_x_740_;
v_isShared_796_ = v_isSharedCheck_806_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_elseBr_793_);
lean_inc(v_thenBr_792_);
lean_inc(v_cond_791_);
lean_dec(v_x_740_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_806_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v_cond_x27_797_; lean_object* v_t_x27_798_; lean_object* v_f_x27_799_; 
v_cond_x27_797_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_cond_791_);
v_t_x27_798_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_thenBr_792_);
v_f_x27_799_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_elseBr_793_);
if (lean_obj_tag(v_cond_x27_797_) == 0)
{
uint64_t v_w_800_; uint64_t v___x_801_; uint8_t v___x_802_; 
lean_del_object(v___x_795_);
v_w_800_ = lean_ctor_get_uint64(v_cond_x27_797_, 0);
lean_dec_ref_known(v_cond_x27_797_, 0);
v___x_801_ = 0ULL;
v___x_802_ = lean_uint64_dec_eq(v_w_800_, v___x_801_);
if (v___x_802_ == 0)
{
lean_dec(v_f_x27_799_);
return v_t_x27_798_;
}
else
{
lean_dec(v_t_x27_798_);
return v_f_x27_799_;
}
}
else
{
lean_object* v___x_804_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 2, v_f_x27_799_);
lean_ctor_set(v___x_795_, 1, v_t_x27_798_);
lean_ctor_set(v___x_795_, 0, v_cond_x27_797_);
v___x_804_ = v___x_795_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_cond_x27_797_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_t_x27_798_);
lean_ctor_set(v_reuseFailAlloc_805_, 2, v_f_x27_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
default: 
{
lean_object* v_cond_807_; lean_object* v_body_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_817_; 
v_cond_807_ = lean_ctor_get(v_x_740_, 0);
v_body_808_ = lean_ctor_get(v_x_740_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_x_740_);
if (v_isSharedCheck_817_ == 0)
{
v___x_810_ = v_x_740_;
v_isShared_811_ = v_isSharedCheck_817_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_body_808_);
lean_inc(v_cond_807_);
lean_dec(v_x_740_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_817_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_812_ = lp_rv2pancake_Rv2Pancake_Passes_simpExp(v_cond_807_);
v___x_813_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_body_808_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v___x_813_);
lean_ctor_set(v___x_810_, 0, v___x_812_);
v___x_815_ = v___x_810_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v___x_813_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__3_splitter___redArg(lean_object* v_x_818_, lean_object* v_h__1_819_, lean_object* v_h__2_820_, lean_object* v_h__3_821_, lean_object* v_h__4_822_, lean_object* v_h__5_823_, lean_object* v_h__6_824_){
_start:
{
switch(lean_obj_tag(v_x_818_))
{
case 0:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
lean_dec(v_h__6_824_);
lean_dec(v_h__5_823_);
lean_dec(v_h__4_822_);
lean_dec(v_h__3_821_);
lean_dec(v_h__2_820_);
v___x_825_ = lean_box(0);
v___x_826_ = lean_apply_1(v_h__1_819_, v___x_825_);
return v___x_826_;
}
case 1:
{
lean_object* v_v_827_; lean_object* v_e_828_; lean_object* v___x_829_; 
lean_dec(v_h__6_824_);
lean_dec(v_h__5_823_);
lean_dec(v_h__4_822_);
lean_dec(v_h__3_821_);
lean_dec(v_h__1_819_);
v_v_827_ = lean_ctor_get(v_x_818_, 0);
lean_inc(v_v_827_);
v_e_828_ = lean_ctor_get(v_x_818_, 1);
lean_inc_ref(v_e_828_);
lean_dec_ref_known(v_x_818_, 2);
v___x_829_ = lean_apply_2(v_h__2_820_, v_v_827_, v_e_828_);
return v___x_829_;
}
case 2:
{
lean_object* v_addr_830_; lean_object* v_val_831_; lean_object* v___x_832_; 
lean_dec(v_h__6_824_);
lean_dec(v_h__5_823_);
lean_dec(v_h__4_822_);
lean_dec(v_h__2_820_);
lean_dec(v_h__1_819_);
v_addr_830_ = lean_ctor_get(v_x_818_, 0);
lean_inc_ref(v_addr_830_);
v_val_831_ = lean_ctor_get(v_x_818_, 1);
lean_inc_ref(v_val_831_);
lean_dec_ref_known(v_x_818_, 2);
v___x_832_ = lean_apply_2(v_h__3_821_, v_addr_830_, v_val_831_);
return v___x_832_;
}
case 3:
{
lean_object* v_p1_833_; lean_object* v_p2_834_; lean_object* v___x_835_; 
lean_dec(v_h__6_824_);
lean_dec(v_h__5_823_);
lean_dec(v_h__3_821_);
lean_dec(v_h__2_820_);
lean_dec(v_h__1_819_);
v_p1_833_ = lean_ctor_get(v_x_818_, 0);
lean_inc(v_p1_833_);
v_p2_834_ = lean_ctor_get(v_x_818_, 1);
lean_inc(v_p2_834_);
lean_dec_ref_known(v_x_818_, 2);
v___x_835_ = lean_apply_2(v_h__4_822_, v_p1_833_, v_p2_834_);
return v___x_835_;
}
case 4:
{
lean_object* v_cond_836_; lean_object* v_thenBr_837_; lean_object* v_elseBr_838_; lean_object* v___x_839_; 
lean_dec(v_h__6_824_);
lean_dec(v_h__4_822_);
lean_dec(v_h__3_821_);
lean_dec(v_h__2_820_);
lean_dec(v_h__1_819_);
v_cond_836_ = lean_ctor_get(v_x_818_, 0);
lean_inc_ref(v_cond_836_);
v_thenBr_837_ = lean_ctor_get(v_x_818_, 1);
lean_inc(v_thenBr_837_);
v_elseBr_838_ = lean_ctor_get(v_x_818_, 2);
lean_inc(v_elseBr_838_);
lean_dec_ref_known(v_x_818_, 3);
v___x_839_ = lean_apply_3(v_h__5_823_, v_cond_836_, v_thenBr_837_, v_elseBr_838_);
return v___x_839_;
}
default: 
{
lean_object* v_cond_840_; lean_object* v_body_841_; lean_object* v___x_842_; 
lean_dec(v_h__5_823_);
lean_dec(v_h__4_822_);
lean_dec(v_h__3_821_);
lean_dec(v_h__2_820_);
lean_dec(v_h__1_819_);
v_cond_840_ = lean_ctor_get(v_x_818_, 0);
lean_inc_ref(v_cond_840_);
v_body_841_ = lean_ctor_get(v_x_818_, 1);
lean_inc(v_body_841_);
lean_dec_ref_known(v_x_818_, 2);
v___x_842_ = lean_apply_2(v_h__6_824_, v_cond_840_, v_body_841_);
return v___x_842_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__3_splitter(lean_object* v_motive_843_, lean_object* v_x_844_, lean_object* v_h__1_845_, lean_object* v_h__2_846_, lean_object* v_h__3_847_, lean_object* v_h__4_848_, lean_object* v_h__5_849_, lean_object* v_h__6_850_){
_start:
{
switch(lean_obj_tag(v_x_844_))
{
case 0:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec(v_h__6_850_);
lean_dec(v_h__5_849_);
lean_dec(v_h__4_848_);
lean_dec(v_h__3_847_);
lean_dec(v_h__2_846_);
v___x_851_ = lean_box(0);
v___x_852_ = lean_apply_1(v_h__1_845_, v___x_851_);
return v___x_852_;
}
case 1:
{
lean_object* v_v_853_; lean_object* v_e_854_; lean_object* v___x_855_; 
lean_dec(v_h__6_850_);
lean_dec(v_h__5_849_);
lean_dec(v_h__4_848_);
lean_dec(v_h__3_847_);
lean_dec(v_h__1_845_);
v_v_853_ = lean_ctor_get(v_x_844_, 0);
lean_inc(v_v_853_);
v_e_854_ = lean_ctor_get(v_x_844_, 1);
lean_inc_ref(v_e_854_);
lean_dec_ref_known(v_x_844_, 2);
v___x_855_ = lean_apply_2(v_h__2_846_, v_v_853_, v_e_854_);
return v___x_855_;
}
case 2:
{
lean_object* v_addr_856_; lean_object* v_val_857_; lean_object* v___x_858_; 
lean_dec(v_h__6_850_);
lean_dec(v_h__5_849_);
lean_dec(v_h__4_848_);
lean_dec(v_h__2_846_);
lean_dec(v_h__1_845_);
v_addr_856_ = lean_ctor_get(v_x_844_, 0);
lean_inc_ref(v_addr_856_);
v_val_857_ = lean_ctor_get(v_x_844_, 1);
lean_inc_ref(v_val_857_);
lean_dec_ref_known(v_x_844_, 2);
v___x_858_ = lean_apply_2(v_h__3_847_, v_addr_856_, v_val_857_);
return v___x_858_;
}
case 3:
{
lean_object* v_p1_859_; lean_object* v_p2_860_; lean_object* v___x_861_; 
lean_dec(v_h__6_850_);
lean_dec(v_h__5_849_);
lean_dec(v_h__3_847_);
lean_dec(v_h__2_846_);
lean_dec(v_h__1_845_);
v_p1_859_ = lean_ctor_get(v_x_844_, 0);
lean_inc(v_p1_859_);
v_p2_860_ = lean_ctor_get(v_x_844_, 1);
lean_inc(v_p2_860_);
lean_dec_ref_known(v_x_844_, 2);
v___x_861_ = lean_apply_2(v_h__4_848_, v_p1_859_, v_p2_860_);
return v___x_861_;
}
case 4:
{
lean_object* v_cond_862_; lean_object* v_thenBr_863_; lean_object* v_elseBr_864_; lean_object* v___x_865_; 
lean_dec(v_h__6_850_);
lean_dec(v_h__4_848_);
lean_dec(v_h__3_847_);
lean_dec(v_h__2_846_);
lean_dec(v_h__1_845_);
v_cond_862_ = lean_ctor_get(v_x_844_, 0);
lean_inc_ref(v_cond_862_);
v_thenBr_863_ = lean_ctor_get(v_x_844_, 1);
lean_inc(v_thenBr_863_);
v_elseBr_864_ = lean_ctor_get(v_x_844_, 2);
lean_inc(v_elseBr_864_);
lean_dec_ref_known(v_x_844_, 3);
v___x_865_ = lean_apply_3(v_h__5_849_, v_cond_862_, v_thenBr_863_, v_elseBr_864_);
return v___x_865_;
}
default: 
{
lean_object* v_cond_866_; lean_object* v_body_867_; lean_object* v___x_868_; 
lean_dec(v_h__5_849_);
lean_dec(v_h__4_848_);
lean_dec(v_h__3_847_);
lean_dec(v_h__2_846_);
lean_dec(v_h__1_845_);
v_cond_866_ = lean_ctor_get(v_x_844_, 0);
lean_inc_ref(v_cond_866_);
v_body_867_ = lean_ctor_get(v_x_844_, 1);
lean_inc(v_body_867_);
lean_dec_ref_known(v_x_844_, 2);
v___x_868_ = lean_apply_2(v_h__6_850_, v_cond_866_, v_body_867_);
return v___x_868_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__1_splitter___redArg(lean_object* v_cond_x27_869_, lean_object* v_h__1_870_, lean_object* v_h__2_871_){
_start:
{
if (lean_obj_tag(v_cond_x27_869_) == 0)
{
uint64_t v_w_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec(v_h__2_871_);
v_w_872_ = lean_ctor_get_uint64(v_cond_x27_869_, 0);
lean_dec_ref_known(v_cond_x27_869_, 0);
v___x_873_ = lean_box_uint64(v_w_872_);
v___x_874_ = lean_apply_1(v_h__1_870_, v___x_873_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; 
lean_dec(v_h__1_870_);
v___x_875_ = lean_apply_2(v_h__2_871_, v_cond_x27_869_, lean_box(0));
return v___x_875_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushConstAssign_match__1_splitter(lean_object* v_motive_876_, lean_object* v_cond_x27_877_, lean_object* v_h__1_878_, lean_object* v_h__2_879_){
_start:
{
if (lean_obj_tag(v_cond_x27_877_) == 0)
{
uint64_t v_w_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
lean_dec(v_h__2_879_);
v_w_880_ = lean_ctor_get_uint64(v_cond_x27_877_, 0);
lean_dec_ref_known(v_cond_x27_877_, 0);
v___x_881_ = lean_box_uint64(v_w_880_);
v___x_882_ = lean_apply_1(v_h__1_878_, v___x_881_);
return v___x_882_;
}
else
{
lean_object* v___x_883_; 
lean_dec(v_h__1_878_);
v___x_883_ = lean_apply_2(v_h__2_879_, v_cond_x27_877_, lean_box(0));
return v___x_883_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushLeafTrailingPc(lean_object* v_body_884_, lean_object* v_b_885_){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = lean_unsigned_to_nat(0u);
lean_inc(v_b_885_);
v___x_887_ = lp_rv2pancake_Rv2Pancake_Passes_extractTrailingConst(v___x_886_, v_b_885_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_body_884_);
v___x_889_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_889_, 0, v_b_885_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
return v___x_889_;
}
else
{
lean_object* v_val_890_; lean_object* v_fst_891_; lean_object* v_snd_892_; uint64_t v___x_893_; lean_object* v_pushed_894_; lean_object* v___x_895_; 
lean_dec(v_b_885_);
v_val_890_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_val_890_);
lean_dec_ref_known(v___x_887_, 1);
v_fst_891_ = lean_ctor_get(v_val_890_, 0);
lean_inc(v_fst_891_);
v_snd_892_ = lean_ctor_get(v_val_890_, 1);
lean_inc(v_snd_892_);
lean_dec(v_val_890_);
v___x_893_ = lean_unbox_uint64(v_snd_892_);
lean_dec(v_snd_892_);
v_pushed_894_ = lp_rv2pancake_Rv2Pancake_Passes_pushConstAssign(v___x_886_, v___x_893_, v_body_884_);
v___x_895_ = lp_rv2pancake_Rv2Pancake_Passes_seqSkipElim(v_fst_891_, v_pushed_894_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(lean_object* v_body_896_, lean_object* v_x_897_){
_start:
{
switch(lean_obj_tag(v_x_897_))
{
case 4:
{
lean_object* v_cond_898_; lean_object* v_thenBr_899_; lean_object* v_elseBr_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_909_; 
v_cond_898_ = lean_ctor_get(v_x_897_, 0);
v_thenBr_899_ = lean_ctor_get(v_x_897_, 1);
v_elseBr_900_ = lean_ctor_get(v_x_897_, 2);
v_isSharedCheck_909_ = !lean_is_exclusive(v_x_897_);
if (v_isSharedCheck_909_ == 0)
{
v___x_902_ = v_x_897_;
v_isShared_903_ = v_isSharedCheck_909_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_elseBr_900_);
lean_inc(v_thenBr_899_);
lean_inc(v_cond_898_);
lean_dec(v_x_897_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_909_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_907_; 
lean_inc(v_body_896_);
v___x_904_ = lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(v_body_896_, v_thenBr_899_);
v___x_905_ = lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(v_body_896_, v_elseBr_900_);
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 2, v___x_905_);
lean_ctor_set(v___x_902_, 1, v___x_904_);
v___x_907_ = v___x_902_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_cond_898_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
case 3:
{
lean_object* v_p2_910_; 
v_p2_910_ = lean_ctor_get(v_x_897_, 1);
lean_inc(v_p2_910_);
switch(lean_obj_tag(v_p2_910_))
{
case 4:
{
lean_object* v_p1_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_930_; 
v_p1_911_ = lean_ctor_get(v_x_897_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v_x_897_);
if (v_isSharedCheck_930_ == 0)
{
lean_object* v_unused_931_; 
v_unused_931_ = lean_ctor_get(v_x_897_, 1);
lean_dec(v_unused_931_);
v___x_913_ = v_x_897_;
v_isShared_914_ = v_isSharedCheck_930_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_p1_911_);
lean_dec(v_x_897_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_930_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v_cond_915_; lean_object* v_thenBr_916_; lean_object* v_elseBr_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_929_; 
v_cond_915_ = lean_ctor_get(v_p2_910_, 0);
v_thenBr_916_ = lean_ctor_get(v_p2_910_, 1);
v_elseBr_917_ = lean_ctor_get(v_p2_910_, 2);
v_isSharedCheck_929_ = !lean_is_exclusive(v_p2_910_);
if (v_isSharedCheck_929_ == 0)
{
v___x_919_ = v_p2_910_;
v_isShared_920_ = v_isSharedCheck_929_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_elseBr_917_);
lean_inc(v_thenBr_916_);
lean_inc(v_cond_915_);
lean_dec(v_p2_910_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_929_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
lean_inc(v_body_896_);
v___x_921_ = lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(v_body_896_, v_thenBr_916_);
v___x_922_ = lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(v_body_896_, v_elseBr_917_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 2, v___x_922_);
lean_ctor_set(v___x_919_, 1, v___x_921_);
v___x_924_ = v___x_919_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_cond_915_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v___x_922_);
v___x_924_ = v_reuseFailAlloc_928_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_926_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 1, v___x_924_);
v___x_926_ = v___x_913_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_p1_911_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v___x_924_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
case 3:
{
lean_object* v_p2_932_; 
v_p2_932_ = lean_ctor_get(v_p2_910_, 1);
lean_inc(v_p2_932_);
if (lean_obj_tag(v_p2_932_) == 4)
{
lean_object* v_p1_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_961_; 
v_p1_933_ = lean_ctor_get(v_x_897_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v_x_897_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; 
v_unused_962_ = lean_ctor_get(v_x_897_, 1);
lean_dec(v_unused_962_);
v___x_935_ = v_x_897_;
v_isShared_936_ = v_isSharedCheck_961_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_p1_933_);
lean_dec(v_x_897_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_961_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v_p1_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_959_; 
v_p1_937_ = lean_ctor_get(v_p2_910_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v_p2_910_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v_p2_910_, 1);
lean_dec(v_unused_960_);
v___x_939_ = v_p2_910_;
v_isShared_940_ = v_isSharedCheck_959_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_p1_937_);
lean_dec(v_p2_910_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_959_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v_cond_941_; lean_object* v_thenBr_942_; lean_object* v_elseBr_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_958_; 
v_cond_941_ = lean_ctor_get(v_p2_932_, 0);
v_thenBr_942_ = lean_ctor_get(v_p2_932_, 1);
v_elseBr_943_ = lean_ctor_get(v_p2_932_, 2);
v_isSharedCheck_958_ = !lean_is_exclusive(v_p2_932_);
if (v_isSharedCheck_958_ == 0)
{
v___x_945_ = v_p2_932_;
v_isShared_946_ = v_isSharedCheck_958_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_elseBr_943_);
lean_inc(v_thenBr_942_);
lean_inc(v_cond_941_);
lean_dec(v_p2_932_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_958_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
lean_inc(v_body_896_);
v___x_947_ = lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(v_body_896_, v_thenBr_942_);
v___x_948_ = lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(v_body_896_, v_elseBr_943_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 2, v___x_948_);
lean_ctor_set(v___x_945_, 1, v___x_947_);
v___x_950_ = v___x_945_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_cond_941_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_957_, 2, v___x_948_);
v___x_950_ = v_reuseFailAlloc_957_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_952_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_950_);
v___x_952_ = v___x_939_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_p1_937_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v___x_950_);
v___x_952_ = v_reuseFailAlloc_956_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_954_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 1, v___x_952_);
v___x_954_ = v___x_935_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_p1_933_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v___x_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_963_; 
lean_dec_ref_known(v_p2_910_, 2);
lean_dec(v_p2_932_);
v___x_963_ = lp_rv2pancake_Rv2Pancake_Passes_pushLeafTrailingPc(v_body_896_, v_x_897_);
return v___x_963_;
}
}
default: 
{
lean_object* v___x_964_; 
lean_dec(v_p2_910_);
v___x_964_ = lp_rv2pancake_Rv2Pancake_Passes_pushLeafTrailingPc(v_body_896_, v_x_897_);
return v___x_964_;
}
}
}
default: 
{
lean_object* v___x_965_; 
v___x_965_ = lp_rv2pancake_Rv2Pancake_Passes_pushLeafTrailingPc(v_body_896_, v_x_897_);
return v___x_965_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushBranchTrailingPc_match__1_splitter___redArg(lean_object* v_x_966_, lean_object* v_h__1_967_, lean_object* v_h__2_968_, lean_object* v_h__3_969_, lean_object* v_h__4_970_){
_start:
{
switch(lean_obj_tag(v_x_966_))
{
case 4:
{
lean_object* v_cond_971_; lean_object* v_thenBr_972_; lean_object* v_elseBr_973_; lean_object* v___x_974_; 
lean_dec(v_h__4_970_);
lean_dec(v_h__3_969_);
lean_dec(v_h__2_968_);
v_cond_971_ = lean_ctor_get(v_x_966_, 0);
lean_inc_ref(v_cond_971_);
v_thenBr_972_ = lean_ctor_get(v_x_966_, 1);
lean_inc(v_thenBr_972_);
v_elseBr_973_ = lean_ctor_get(v_x_966_, 2);
lean_inc(v_elseBr_973_);
lean_dec_ref_known(v_x_966_, 3);
v___x_974_ = lean_apply_3(v_h__1_967_, v_cond_971_, v_thenBr_972_, v_elseBr_973_);
return v___x_974_;
}
case 3:
{
lean_object* v_p2_975_; 
lean_dec(v_h__1_967_);
v_p2_975_ = lean_ctor_get(v_x_966_, 1);
switch(lean_obj_tag(v_p2_975_))
{
case 4:
{
lean_object* v_p1_976_; lean_object* v_cond_977_; lean_object* v_thenBr_978_; lean_object* v_elseBr_979_; lean_object* v___x_980_; 
lean_inc_ref(v_p2_975_);
lean_dec(v_h__4_970_);
lean_dec(v_h__3_969_);
v_p1_976_ = lean_ctor_get(v_x_966_, 0);
lean_inc(v_p1_976_);
lean_dec_ref_known(v_x_966_, 2);
v_cond_977_ = lean_ctor_get(v_p2_975_, 0);
lean_inc_ref(v_cond_977_);
v_thenBr_978_ = lean_ctor_get(v_p2_975_, 1);
lean_inc(v_thenBr_978_);
v_elseBr_979_ = lean_ctor_get(v_p2_975_, 2);
lean_inc(v_elseBr_979_);
lean_dec_ref_known(v_p2_975_, 3);
v___x_980_ = lean_apply_4(v_h__2_968_, v_p1_976_, v_cond_977_, v_thenBr_978_, v_elseBr_979_);
return v___x_980_;
}
case 3:
{
lean_object* v_p2_981_; 
lean_dec(v_h__2_968_);
v_p2_981_ = lean_ctor_get(v_p2_975_, 1);
if (lean_obj_tag(v_p2_981_) == 4)
{
lean_object* v_p1_982_; lean_object* v_p1_983_; lean_object* v_cond_984_; lean_object* v_thenBr_985_; lean_object* v_elseBr_986_; lean_object* v___x_987_; 
lean_inc_ref(v_p2_981_);
lean_inc_ref(v_p2_975_);
lean_dec(v_h__4_970_);
v_p1_982_ = lean_ctor_get(v_x_966_, 0);
lean_inc(v_p1_982_);
lean_dec_ref_known(v_x_966_, 2);
v_p1_983_ = lean_ctor_get(v_p2_975_, 0);
lean_inc(v_p1_983_);
lean_dec_ref_known(v_p2_975_, 2);
v_cond_984_ = lean_ctor_get(v_p2_981_, 0);
lean_inc_ref(v_cond_984_);
v_thenBr_985_ = lean_ctor_get(v_p2_981_, 1);
lean_inc(v_thenBr_985_);
v_elseBr_986_ = lean_ctor_get(v_p2_981_, 2);
lean_inc(v_elseBr_986_);
lean_dec_ref_known(v_p2_981_, 3);
v___x_987_ = lean_apply_5(v_h__3_969_, v_p1_982_, v_p1_983_, v_cond_984_, v_thenBr_985_, v_elseBr_986_);
return v___x_987_;
}
else
{
lean_object* v___x_988_; 
lean_dec(v_h__3_969_);
v___x_988_ = lean_apply_4(v_h__4_970_, v_x_966_, lean_box(0), lean_box(0), lean_box(0));
return v___x_988_;
}
}
default: 
{
lean_object* v___x_989_; 
lean_dec(v_h__3_969_);
lean_dec(v_h__2_968_);
v___x_989_ = lean_apply_4(v_h__4_970_, v_x_966_, lean_box(0), lean_box(0), lean_box(0));
return v___x_989_;
}
}
}
default: 
{
lean_object* v___x_990_; 
lean_dec(v_h__3_969_);
lean_dec(v_h__2_968_);
lean_dec(v_h__1_967_);
v___x_990_ = lean_apply_4(v_h__4_970_, v_x_966_, lean_box(0), lean_box(0), lean_box(0));
return v___x_990_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_pushBranchTrailingPc_match__1_splitter(lean_object* v_motive_991_, lean_object* v_x_992_, lean_object* v_h__1_993_, lean_object* v_h__2_994_, lean_object* v_h__3_995_, lean_object* v_h__4_996_){
_start:
{
switch(lean_obj_tag(v_x_992_))
{
case 4:
{
lean_object* v_cond_997_; lean_object* v_thenBr_998_; lean_object* v_elseBr_999_; lean_object* v___x_1000_; 
lean_dec(v_h__4_996_);
lean_dec(v_h__3_995_);
lean_dec(v_h__2_994_);
v_cond_997_ = lean_ctor_get(v_x_992_, 0);
lean_inc_ref(v_cond_997_);
v_thenBr_998_ = lean_ctor_get(v_x_992_, 1);
lean_inc(v_thenBr_998_);
v_elseBr_999_ = lean_ctor_get(v_x_992_, 2);
lean_inc(v_elseBr_999_);
lean_dec_ref_known(v_x_992_, 3);
v___x_1000_ = lean_apply_3(v_h__1_993_, v_cond_997_, v_thenBr_998_, v_elseBr_999_);
return v___x_1000_;
}
case 3:
{
lean_object* v_p2_1001_; 
lean_dec(v_h__1_993_);
v_p2_1001_ = lean_ctor_get(v_x_992_, 1);
switch(lean_obj_tag(v_p2_1001_))
{
case 4:
{
lean_object* v_p1_1002_; lean_object* v_cond_1003_; lean_object* v_thenBr_1004_; lean_object* v_elseBr_1005_; lean_object* v___x_1006_; 
lean_inc_ref(v_p2_1001_);
lean_dec(v_h__4_996_);
lean_dec(v_h__3_995_);
v_p1_1002_ = lean_ctor_get(v_x_992_, 0);
lean_inc(v_p1_1002_);
lean_dec_ref_known(v_x_992_, 2);
v_cond_1003_ = lean_ctor_get(v_p2_1001_, 0);
lean_inc_ref(v_cond_1003_);
v_thenBr_1004_ = lean_ctor_get(v_p2_1001_, 1);
lean_inc(v_thenBr_1004_);
v_elseBr_1005_ = lean_ctor_get(v_p2_1001_, 2);
lean_inc(v_elseBr_1005_);
lean_dec_ref_known(v_p2_1001_, 3);
v___x_1006_ = lean_apply_4(v_h__2_994_, v_p1_1002_, v_cond_1003_, v_thenBr_1004_, v_elseBr_1005_);
return v___x_1006_;
}
case 3:
{
lean_object* v_p2_1007_; 
lean_dec(v_h__2_994_);
v_p2_1007_ = lean_ctor_get(v_p2_1001_, 1);
if (lean_obj_tag(v_p2_1007_) == 4)
{
lean_object* v_p1_1008_; lean_object* v_p1_1009_; lean_object* v_cond_1010_; lean_object* v_thenBr_1011_; lean_object* v_elseBr_1012_; lean_object* v___x_1013_; 
lean_inc_ref(v_p2_1007_);
lean_inc_ref(v_p2_1001_);
lean_dec(v_h__4_996_);
v_p1_1008_ = lean_ctor_get(v_x_992_, 0);
lean_inc(v_p1_1008_);
lean_dec_ref_known(v_x_992_, 2);
v_p1_1009_ = lean_ctor_get(v_p2_1001_, 0);
lean_inc(v_p1_1009_);
lean_dec_ref_known(v_p2_1001_, 2);
v_cond_1010_ = lean_ctor_get(v_p2_1007_, 0);
lean_inc_ref(v_cond_1010_);
v_thenBr_1011_ = lean_ctor_get(v_p2_1007_, 1);
lean_inc(v_thenBr_1011_);
v_elseBr_1012_ = lean_ctor_get(v_p2_1007_, 2);
lean_inc(v_elseBr_1012_);
lean_dec_ref_known(v_p2_1007_, 3);
v___x_1013_ = lean_apply_5(v_h__3_995_, v_p1_1008_, v_p1_1009_, v_cond_1010_, v_thenBr_1011_, v_elseBr_1012_);
return v___x_1013_;
}
else
{
lean_object* v___x_1014_; 
lean_dec(v_h__3_995_);
v___x_1014_ = lean_apply_4(v_h__4_996_, v_x_992_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1014_;
}
}
default: 
{
lean_object* v___x_1015_; 
lean_dec(v_h__3_995_);
lean_dec(v_h__2_994_);
v___x_1015_ = lean_apply_4(v_h__4_996_, v_x_992_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1015_;
}
}
}
default: 
{
lean_object* v___x_1016_; 
lean_dec(v_h__3_995_);
lean_dec(v_h__2_994_);
lean_dec(v_h__1_993_);
v___x_1016_ = lean_apply_4(v_h__4_996_, v_x_992_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody(lean_object* v_k_1017_, lean_object* v_body_1018_){
_start:
{
lean_object* v_zero_1019_; uint8_t v_isZero_1020_; 
v_zero_1019_ = lean_unsigned_to_nat(0u);
v_isZero_1020_ = lean_nat_dec_eq(v_k_1017_, v_zero_1019_);
if (v_isZero_1020_ == 1)
{
return v_body_1018_;
}
else
{
lean_object* v_one_1021_; lean_object* v_n_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v_one_1021_ = lean_unsigned_to_nat(1u);
v_n_1022_ = lean_nat_sub(v_k_1017_, v_one_1021_);
lean_inc(v_body_1018_);
v___x_1023_ = lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody(v_n_1022_, v_body_1018_);
lean_dec(v_n_1022_);
v___x_1024_ = lp_rv2pancake_Rv2Pancake_Passes_pushBranchTrailingPc(v_body_1018_, v___x_1023_);
return v___x_1024_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody___boxed(lean_object* v_k_1025_, lean_object* v_body_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = lp_rv2pancake_Rv2Pancake_Passes_unrollAndFoldBody(v_k_1025_, v_body_1026_);
lean_dec(v_k_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_seqRepeat(lean_object* v_k_1028_, lean_object* v_body_1029_){
_start:
{
lean_object* v_zero_1030_; uint8_t v_isZero_1031_; 
v_zero_1030_ = lean_unsigned_to_nat(0u);
v_isZero_1031_ = lean_nat_dec_eq(v_k_1028_, v_zero_1030_);
if (v_isZero_1031_ == 1)
{
return v_body_1029_;
}
else
{
lean_object* v_one_1032_; lean_object* v_n_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v_one_1032_ = lean_unsigned_to_nat(1u);
v_n_1033_ = lean_nat_sub(v_k_1028_, v_one_1032_);
lean_inc(v_body_1029_);
v___x_1034_ = lp_rv2pancake_Rv2Pancake_Passes_seqRepeat(v_n_1033_, v_body_1029_);
lean_dec(v_n_1033_);
v___x_1035_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
lean_ctor_set(v___x_1035_, 1, v_body_1029_);
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_seqRepeat___boxed(lean_object* v_k_1036_, lean_object* v_body_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = lp_rv2pancake_Rv2Pancake_Passes_seqRepeat(v_k_1036_, v_body_1037_);
lean_dec(v_k_1036_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter___redArg(lean_object* v_k_1039_, lean_object* v_h__1_1040_, lean_object* v_h__2_1041_){
_start:
{
lean_object* v_zero_1042_; uint8_t v_isZero_1043_; 
v_zero_1042_ = lean_unsigned_to_nat(0u);
v_isZero_1043_ = lean_nat_dec_eq(v_k_1039_, v_zero_1042_);
if (v_isZero_1043_ == 1)
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_dec(v_h__2_1041_);
v___x_1044_ = lean_box(0);
v___x_1045_ = lean_apply_1(v_h__1_1040_, v___x_1044_);
return v___x_1045_;
}
else
{
lean_object* v_one_1046_; lean_object* v_n_1047_; lean_object* v___x_1048_; 
lean_dec(v_h__1_1040_);
v_one_1046_ = lean_unsigned_to_nat(1u);
v_n_1047_ = lean_nat_sub(v_k_1039_, v_one_1046_);
v___x_1048_ = lean_apply_1(v_h__2_1041_, v_n_1047_);
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter___redArg___boxed(lean_object* v_k_1049_, lean_object* v_h__1_1050_, lean_object* v_h__2_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter___redArg(v_k_1049_, v_h__1_1050_, v_h__2_1051_);
lean_dec(v_k_1049_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter(lean_object* v_motive_1053_, lean_object* v_k_1054_, lean_object* v_h__1_1055_, lean_object* v_h__2_1056_){
_start:
{
lean_object* v_zero_1057_; uint8_t v_isZero_1058_; 
v_zero_1057_ = lean_unsigned_to_nat(0u);
v_isZero_1058_ = lean_nat_dec_eq(v_k_1054_, v_zero_1057_);
if (v_isZero_1058_ == 1)
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_dec(v_h__2_1056_);
v___x_1059_ = lean_box(0);
v___x_1060_ = lean_apply_1(v_h__1_1055_, v___x_1059_);
return v___x_1060_;
}
else
{
lean_object* v_one_1061_; lean_object* v_n_1062_; lean_object* v___x_1063_; 
lean_dec(v_h__1_1055_);
v_one_1061_ = lean_unsigned_to_nat(1u);
v_n_1062_ = lean_nat_sub(v_k_1054_, v_one_1061_);
v___x_1063_ = lean_apply_1(v_h__2_1056_, v_n_1062_);
return v___x_1063_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter___boxed(lean_object* v_motive_1064_, lean_object* v_k_1065_, lean_object* v_h__1_1066_, lean_object* v_h__2_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = lp_rv2pancake___private_Rv2Pancake_Passes_SymCheck_0__Rv2Pancake_Passes_unrollAndFoldBody_match__1_splitter(v_motive_1064_, v_k_1065_, v_h__1_1066_, v_h__2_1067_);
lean_dec(v_k_1065_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_proposeSymCheck(lean_object* v_a_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_a_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Passes_checkSymCheck(lean_object* v_p_1071_, lean_object* v_p_x27_1072_){
_start:
{
lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1073_ = lp_rv2pancake_Rv2Pancake_Passes_propConstSeq(v_p_1071_);
v___x_1074_ = lp_rv2pancake_Rv2Pancake_Spec_instDecidableEqPanProg_decEq(v___x_1073_, v_p_x27_1072_);
lean_dec(v___x_1073_);
if (v___x_1074_ == 0)
{
return v___x_1074_;
}
else
{
uint8_t v___x_1075_; 
v___x_1075_ = lp_rv2pancake_Rv2Pancake_Passes_isLoopFree(v_p_x27_1072_);
return v___x_1075_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Passes_checkSymCheck___boxed(lean_object* v_p_1076_, lean_object* v_p_x27_1077_){
_start:
{
uint8_t v_res_1078_; lean_object* v_r_1079_; 
v_res_1078_ = lp_rv2pancake_Rv2Pancake_Passes_checkSymCheck(v_p_1076_, v_p_x27_1077_);
lean_dec(v_p_x27_1077_);
v_r_1079_ = lean_box(v_res_1078_);
return v_r_1079_;
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
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SymCheck(uint8_t builtin) {
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
