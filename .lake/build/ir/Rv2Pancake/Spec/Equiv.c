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
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0(lean_object*, uint8_t, uint64_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState(lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0(lean_object* v_regs_1_, uint8_t v_halted_2_, uint64_t v_pc_3_, lean_object* v_v_4_){
_start:
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_nat_dec_eq(v_v_4_, v___x_5_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(1u);
v___x_8_ = lean_nat_dec_le(v___x_7_, v_v_4_);
if (v___x_8_ == 0)
{
uint64_t v___x_9_; 
lean_dec(v_v_4_);
lean_dec_ref(v_regs_1_);
v___x_9_ = 0ULL;
return v___x_9_;
}
else
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(31u);
v___x_11_ = lean_nat_dec_le(v_v_4_, v___x_10_);
if (v___x_11_ == 0)
{
uint64_t v___x_12_; 
lean_dec(v_v_4_);
lean_dec_ref(v_regs_1_);
v___x_12_ = 0ULL;
return v___x_12_;
}
else
{
uint64_t v___x_13_; 
v___x_13_ = lp_rv2pancake_Rv2Pancake_Spec_readReg(v_regs_1_, v_v_4_);
return v___x_13_;
}
}
}
else
{
lean_dec(v_v_4_);
lean_dec_ref(v_regs_1_);
if (v_halted_2_ == 0)
{
return v_pc_3_;
}
else
{
uint64_t v___x_14_; 
v___x_14_ = 0ULL;
return v___x_14_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0___boxed(lean_object* v_regs_15_, lean_object* v_halted_16_, lean_object* v_pc_17_, lean_object* v_v_18_){
_start:
{
uint8_t v_halted_boxed_19_; uint64_t v_pc_boxed_20_; uint64_t v_res_21_; lean_object* v_r_22_; 
v_halted_boxed_19_ = lean_unbox(v_halted_16_);
v_pc_boxed_20_ = lean_unbox_uint64(v_pc_17_);
lean_dec_ref(v_pc_17_);
v_res_21_ = lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0(v_regs_15_, v_halted_boxed_19_, v_pc_boxed_20_, v_v_18_);
v_r_22_ = lean_box_uint64(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_initPanState(lean_object* v_rv_23_){
_start:
{
uint64_t v_pc_24_; lean_object* v_regs_25_; lean_object* v_mem_26_; uint8_t v_halted_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___f_30_; lean_object* v___x_31_; 
v_pc_24_ = lean_ctor_get_uint64(v_rv_23_, sizeof(void*)*2);
v_regs_25_ = lean_ctor_get(v_rv_23_, 0);
lean_inc_ref(v_regs_25_);
v_mem_26_ = lean_ctor_get(v_rv_23_, 1);
lean_inc_ref(v_mem_26_);
v_halted_27_ = lean_ctor_get_uint8(v_rv_23_, sizeof(void*)*2 + 16);
lean_dec_ref(v_rv_23_);
v___x_28_ = lean_box(v_halted_27_);
v___x_29_ = lean_box_uint64(v_pc_24_);
v___f_30_ = lean_alloc_closure((void*)(lp_rv2pancake_Rv2Pancake_Spec_initPanState___lam__0___boxed), 4, 3);
lean_closure_set(v___f_30_, 0, v_regs_25_);
lean_closure_set(v___f_30_, 1, v___x_28_);
lean_closure_set(v___f_30_, 2, v___x_29_);
v___x_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_31_, 0, v___f_30_);
lean_ctor_set(v___x_31_, 1, v_mem_26_);
return v___x_31_;
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
