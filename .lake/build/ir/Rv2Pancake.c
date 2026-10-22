// Lean compiler output
// Module: Rv2Pancake
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem public import Rv2Pancake.Spec.PancakeSem public import Rv2Pancake.Spec.Equiv public import Rv2Pancake.Spec.ElfLoader public import Rv2Pancake.Base.Lifter public import Rv2Pancake.Base.BaseSound public import Rv2Pancake.Passes.SafePass public import Rv2Pancake.Passes.BlockFusion public import Rv2Pancake.Passes.IfElseRecon public import Rv2Pancake.Passes.WhileRecon public import Rv2Pancake.Passes.DeadRegElim public import Rv2Pancake.Pipeline
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_PancakeSem(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_Equiv(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_ElfLoader(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Base_Lifter(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Base_BaseSound(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_SafePass(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_BlockFusion(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_IfElseRecon(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_WhileRecon(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Passes_DeadRegElim(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Pipeline(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake(uint8_t builtin) {
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
res = initialize_rv2pancake_Rv2Pancake_Spec_ElfLoader(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Base_Lifter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Base_BaseSound(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_SafePass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_BlockFusion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_IfElseRecon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_WhileRecon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Passes_DeadRegElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_rv2pancake_Rv2Pancake_Pipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
