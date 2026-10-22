// Lean compiler output
// Module: Rv2Pancake.Spec.Equiv
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint64_t lp_rv2pancake_Rv2Pancake_Spec_readReg(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0(lean_object*, uint64_t, uint8_t, uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_observeRV(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_observePan(lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0(lean_object* v_regs_1_, uint64_t v_retVal_2_, uint8_t v_halted_3_, uint64_t v_pc_4_, lean_object* v_v_5_){
_start:
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_unsigned_to_nat(0u);
v___x_7_ = lean_nat_dec_eq(v_v_5_, v___x_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(32u);
v___x_9_ = lean_nat_dec_eq(v_v_5_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(33u);
v___x_11_ = lean_nat_dec_eq(v_v_5_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(1u);
v___x_13_ = lean_nat_dec_le(v___x_12_, v_v_5_);
if (v___x_13_ == 0)
{
uint64_t v___x_14_; 
lean_dec(v_v_5_);
lean_dec_ref(v_regs_1_);
v___x_14_ = 0ULL;
return v___x_14_;
}
else
{
lean_object* v___x_15_; uint8_t v___x_16_; 
v___x_15_ = lean_unsigned_to_nat(31u);
v___x_16_ = lean_nat_dec_le(v_v_5_, v___x_15_);
if (v___x_16_ == 0)
{
uint64_t v___x_17_; 
lean_dec(v_v_5_);
lean_dec_ref(v_regs_1_);
v___x_17_ = 0ULL;
return v___x_17_;
}
else
{
uint64_t v___x_18_; 
v___x_18_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1_, v_v_5_);
return v___x_18_;
}
}
}
else
{
lean_dec(v_v_5_);
lean_dec_ref(v_regs_1_);
return v_retVal_2_;
}
}
else
{
lean_dec(v_v_5_);
lean_dec_ref(v_regs_1_);
if (v_halted_3_ == 0)
{
uint64_t v___x_19_; 
v___x_19_ = 0ULL;
return v___x_19_;
}
else
{
uint64_t v___x_20_; 
v___x_20_ = 1ULL;
return v___x_20_;
}
}
}
else
{
lean_dec(v_v_5_);
lean_dec_ref(v_regs_1_);
if (v_halted_3_ == 0)
{
return v_pc_4_;
}
else
{
uint64_t v___x_21_; 
v___x_21_ = 0ULL;
return v___x_21_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0___boxed(lean_object* v_regs_22_, lean_object* v_retVal_23_, lean_object* v_halted_24_, lean_object* v_pc_25_, lean_object* v_v_26_){
_start:
{
uint64_t v_retVal_boxed_27_; uint8_t v_halted_boxed_28_; uint64_t v_pc_boxed_29_; uint64_t v_res_30_; lean_object* v_r_31_; 
v_retVal_boxed_27_ = lean_unbox_uint64(v_retVal_23_);
lean_dec_ref(v_retVal_23_);
v_halted_boxed_28_ = lean_unbox(v_halted_24_);
v_pc_boxed_29_ = lean_unbox_uint64(v_pc_25_);
lean_dec_ref(v_pc_25_);
v_res_30_ = lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0(v_regs_22_, v_retVal_boxed_27_, v_halted_boxed_28_, v_pc_boxed_29_, v_v_26_);
v_r_31_ = lean_box_uint64(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState(lean_object* v_rv_32_){
_start:
{
uint64_t v_pc_33_; lean_object* v_regs_34_; lean_object* v_mem_35_; uint8_t v_halted_36_; uint64_t v_retVal_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___f_41_; lean_object* v___x_42_; 
v_pc_33_ = lean_ctor_get_uint64(v_rv_32_, sizeof(void*)*2);
v_regs_34_ = lean_ctor_get(v_rv_32_, 0);
lean_inc_ref(v_regs_34_);
v_mem_35_ = lean_ctor_get(v_rv_32_, 1);
lean_inc_ref(v_mem_35_);
v_halted_36_ = lean_ctor_get_uint8(v_rv_32_, sizeof(void*)*2 + 16);
v_retVal_37_ = lean_ctor_get_uint64(v_rv_32_, sizeof(void*)*2 + 8);
lean_dec_ref(v_rv_32_);
v___x_38_ = lean_box_uint64(v_retVal_37_);
v___x_39_ = lean_box(v_halted_36_);
v___x_40_ = lean_box_uint64(v_pc_33_);
v___f_41_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0___boxed), 5, 4);
lean_closure_set(v___f_41_, 0, v_regs_34_);
lean_closure_set(v___f_41_, 1, v___x_38_);
lean_closure_set(v___f_41_, 2, v___x_39_);
lean_closure_set(v___f_41_, 3, v___x_40_);
v___x_42_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_42_, 0, v___f_41_);
lean_ctor_set(v___x_42_, 1, v_mem_35_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_observeRV(lean_object* v_rv_43_){
_start:
{
lean_object* v_regs_44_; lean_object* v_mem_45_; lean_object* v___x_46_; uint64_t v___x_47_; lean_object* v___x_48_; 
v_regs_44_ = lean_ctor_get(v_rv_43_, 0);
lean_inc_ref(v_regs_44_);
v_mem_45_ = lean_ctor_get(v_rv_43_, 1);
lean_inc_ref(v_mem_45_);
lean_dec_ref(v_rv_43_);
v___x_46_ = lean_unsigned_to_nat(10u);
v___x_47_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_44_, v___x_46_);
v___x_48_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_48_, 0, v_mem_45_);
lean_ctor_set_uint64(v___x_48_, sizeof(void*)*1, v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_observePan(lean_object* v_pan_49_){
_start:
{
lean_object* v_vars_50_; lean_object* v_mem_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint64_t v___x_55_; 
v_vars_50_ = lean_ctor_get(v_pan_49_, 0);
lean_inc_ref(v_vars_50_);
v_mem_51_ = lean_ctor_get(v_pan_49_, 1);
lean_inc_ref(v_mem_51_);
lean_dec_ref(v_pan_49_);
v___x_52_ = lean_unsigned_to_nat(10u);
v___x_53_ = lean_apply_1(v_vars_50_, v___x_52_);
v___x_54_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_54_, 0, v_mem_51_);
v___x_55_ = lean_unbox_uint64(v___x_53_);
lean_dec_ref(v___x_53_);
lean_ctor_set_uint64(v___x_54_, sizeof(void*)*1, v___x_55_);
return v___x_54_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Spec_Equiv(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
