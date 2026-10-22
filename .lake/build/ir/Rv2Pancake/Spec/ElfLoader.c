// Lean compiler output
// Module: Rv2Pancake.Spec.ElfLoader
// Imports: public import Init public meta import Init public import Rv2Pancake.Spec.RiscvSem
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
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint32_t lean_uint32_land(uint32_t, uint32_t);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_rv2pancake_Rv2Pancake_Spec_readU32LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readU32LE___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_signExtend32(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_signExtend32___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__1(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___closed__0 = (const lean_object*)&lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___closed__0_value;
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt(uint64_t, uint32_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word(uint64_t, uint32_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_isElfMagic___boxed(lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_readU64LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readU64LE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_findExecSegment(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_findExecSegment___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw___boxed(lean_object*);
LEAN_EXPORT uint32_t lp_rv2pancake_Rv2Pancake_Spec_readU32LE(lean_object* v_bytes_1_, lean_object* v_off_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_3_ = lean_unsigned_to_nat(3u);
v___x_4_ = lean_nat_add(v_off_2_, v___x_3_);
v___x_5_ = lean_byte_array_size(v_bytes_1_);
v___x_6_ = lean_nat_dec_lt(v___x_4_, v___x_5_);
if (v___x_6_ == 0)
{
uint32_t v___x_7_; 
lean_dec(v___x_4_);
v___x_7_ = 0;
return v___x_7_;
}
else
{
uint8_t v___x_8_; uint32_t v_b0_9_; lean_object* v___x_10_; lean_object* v___x_11_; uint8_t v___x_12_; uint32_t v___x_13_; uint32_t v___x_14_; uint32_t v_b1_15_; lean_object* v___x_16_; lean_object* v___x_17_; uint8_t v___x_18_; uint32_t v___x_19_; uint32_t v___x_20_; uint32_t v_b2_21_; uint8_t v___x_22_; uint32_t v___x_23_; uint32_t v___x_24_; uint32_t v_b3_25_; uint32_t v___x_26_; uint32_t v___x_27_; uint32_t v___x_28_; 
v___x_8_ = lean_byte_array_get(v_bytes_1_, v_off_2_);
v_b0_9_ = lean_uint8_to_uint32(v___x_8_);
v___x_10_ = lean_unsigned_to_nat(1u);
v___x_11_ = lean_nat_add(v_off_2_, v___x_10_);
v___x_12_ = lean_byte_array_get(v_bytes_1_, v___x_11_);
lean_dec(v___x_11_);
v___x_13_ = lean_uint8_to_uint32(v___x_12_);
v___x_14_ = 8;
v_b1_15_ = lean_uint32_shift_left(v___x_13_, v___x_14_);
v___x_16_ = lean_unsigned_to_nat(2u);
v___x_17_ = lean_nat_add(v_off_2_, v___x_16_);
v___x_18_ = lean_byte_array_get(v_bytes_1_, v___x_17_);
lean_dec(v___x_17_);
v___x_19_ = lean_uint8_to_uint32(v___x_18_);
v___x_20_ = 16;
v_b2_21_ = lean_uint32_shift_left(v___x_19_, v___x_20_);
v___x_22_ = lean_byte_array_get(v_bytes_1_, v___x_4_);
lean_dec(v___x_4_);
v___x_23_ = lean_uint8_to_uint32(v___x_22_);
v___x_24_ = 24;
v_b3_25_ = lean_uint32_shift_left(v___x_23_, v___x_24_);
v___x_26_ = lean_uint32_lor(v_b0_9_, v_b1_15_);
v___x_27_ = lean_uint32_lor(v___x_26_, v_b2_21_);
v___x_28_ = lean_uint32_lor(v___x_27_, v_b3_25_);
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readU32LE___boxed(lean_object* v_bytes_29_, lean_object* v_off_30_){
_start:
{
uint32_t v_res_31_; lean_object* v_r_32_; 
v_res_31_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_29_, v_off_30_);
lean_dec(v_off_30_);
lean_dec_ref(v_bytes_29_);
v_r_32_ = lean_box_uint32(v_res_31_);
return v_r_32_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_signExtend32(uint32_t v_val_33_, lean_object* v_bits_34_){
_start:
{
uint64_t v_v64_35_; lean_object* v___x_36_; lean_object* v___x_37_; uint64_t v___x_38_; uint64_t v___x_39_; uint64_t v___x_40_; uint64_t v_signBit_41_; uint8_t v___x_42_; 
v_v64_35_ = lean_uint32_to_uint64(v_val_33_);
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_sub(v_bits_34_, v___x_36_);
v___x_38_ = lean_uint64_of_nat(v___x_37_);
lean_dec(v___x_37_);
v___x_39_ = lean_uint64_shift_right(v_v64_35_, v___x_38_);
v___x_40_ = 1ULL;
v_signBit_41_ = lean_uint64_land(v___x_39_, v___x_40_);
v___x_42_ = lean_uint64_dec_eq(v_signBit_41_, v___x_40_);
if (v___x_42_ == 0)
{
return v_v64_35_;
}
else
{
uint64_t v___x_43_; uint64_t v___x_44_; uint64_t v___x_45_; uint64_t v___x_46_; 
v___x_43_ = 18446744073709551615ULL;
v___x_44_ = lean_uint64_of_nat(v_bits_34_);
v___x_45_ = lean_uint64_shift_left(v___x_43_, v___x_44_);
v___x_46_ = lean_uint64_lor(v_v64_35_, v___x_45_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_signExtend32___boxed(lean_object* v_val_47_, lean_object* v_bits_48_){
_start:
{
uint32_t v_val_boxed_49_; uint64_t v_res_50_; lean_object* v_r_51_; 
v_val_boxed_49_ = lean_unbox_uint32(v_val_47_);
lean_dec(v_val_47_);
v_res_50_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v_val_boxed_49_, v_bits_48_);
lean_dec(v_bits_48_);
v_r_51_ = lean_box_uint64(v_res_50_);
return v_r_51_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0(uint32_t v_funct7_52_, lean_object* v_00___53_){
_start:
{
uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_54_ = 0;
v___x_55_ = lean_uint32_dec_eq(v_funct7_52_, v___x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0___boxed(lean_object* v_funct7_56_, lean_object* v_00___57_){
_start:
{
uint32_t v_funct7_boxed_58_; uint8_t v_res_59_; lean_object* v_r_60_; 
v_funct7_boxed_58_ = lean_unbox_uint32(v_funct7_56_);
lean_dec(v_funct7_56_);
v_res_59_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0(v_funct7_boxed_58_, v_00___57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__1(uint32_t v_funct7_61_, lean_object* v_00___62_){
_start:
{
uint32_t v___x_63_; uint8_t v___x_64_; 
v___x_63_ = 32;
v___x_64_ = lean_uint32_dec_eq(v_funct7_61_, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__1___boxed(lean_object* v_funct7_65_, lean_object* v_00___66_){
_start:
{
uint32_t v_funct7_boxed_67_; uint8_t v_res_68_; lean_object* v_r_69_; 
v_funct7_boxed_67_ = lean_unbox_uint32(v_funct7_65_);
lean_dec(v_funct7_65_);
v_res_68_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__1(v_funct7_boxed_67_, v_00___66_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt(uint64_t v_pc_72_, uint32_t v_raw_73_){
_start:
{
uint32_t v___x_76_; uint32_t v_opcode_77_; uint32_t v___x_78_; uint32_t v___x_79_; uint32_t v___x_80_; uint32_t v___x_81_; lean_object* v_rd_82_; lean_object* v___x_83_; uint32_t v___x_84_; uint32_t v___x_85_; uint32_t v_funct3_86_; uint32_t v___x_87_; uint32_t v___x_88_; uint32_t v___x_89_; lean_object* v_rs1_90_; uint32_t v___x_91_; uint32_t v___x_92_; uint32_t v___x_93_; uint32_t v___x_94_; uint8_t v___x_95_; 
v___x_76_ = 127;
v_opcode_77_ = lean_uint32_land(v_raw_73_, v___x_76_);
v___x_78_ = 7;
v___x_79_ = lean_uint32_shift_right(v_raw_73_, v___x_78_);
v___x_80_ = 31;
v___x_81_ = lean_uint32_land(v___x_79_, v___x_80_);
v_rd_82_ = lean_uint32_to_nat(v___x_81_);
v___x_83_ = lean_unsigned_to_nat(12u);
v___x_84_ = 12;
v___x_85_ = lean_uint32_shift_right(v_raw_73_, v___x_84_);
v_funct3_86_ = lean_uint32_land(v___x_85_, v___x_78_);
v___x_87_ = 15;
v___x_88_ = lean_uint32_shift_right(v_raw_73_, v___x_87_);
v___x_89_ = lean_uint32_land(v___x_88_, v___x_80_);
v_rs1_90_ = lean_uint32_to_nat(v___x_89_);
v___x_91_ = 20;
v___x_92_ = lean_uint32_shift_right(v_raw_73_, v___x_91_);
v___x_93_ = 63;
v___x_94_ = 19;
v___x_95_ = lean_uint32_dec_eq(v_opcode_77_, v___x_94_);
if (v___x_95_ == 0)
{
uint32_t v___x_96_; uint32_t v___x_97_; uint32_t v___x_98_; uint32_t v_funct7_99_; uint32_t v___x_100_; uint8_t v___x_101_; 
v___x_96_ = 25;
v___x_97_ = lean_uint32_shift_right(v_raw_73_, v___x_96_);
v___x_98_ = lean_uint32_land(v___x_92_, v___x_80_);
v_funct7_99_ = lean_uint32_land(v___x_97_, v___x_76_);
v___x_100_ = 27;
v___x_101_ = lean_uint32_dec_eq(v_opcode_77_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v_rs2_102_; uint32_t v___x_103_; uint8_t v___x_104_; 
v_rs2_102_ = lean_uint32_to_nat(v___x_98_);
v___x_103_ = 51;
v___x_104_ = lean_uint32_dec_eq(v_opcode_77_, v___x_103_);
if (v___x_104_ == 0)
{
uint32_t v___x_105_; uint8_t v___x_106_; 
v___x_105_ = 59;
v___x_106_ = lean_uint32_dec_eq(v_opcode_77_, v___x_105_);
if (v___x_106_ == 0)
{
uint32_t v___x_107_; uint8_t v___x_108_; 
v___x_107_ = 55;
v___x_108_ = lean_uint32_dec_eq(v_opcode_77_, v___x_107_);
if (v___x_108_ == 0)
{
uint32_t v___x_109_; uint8_t v___x_110_; 
v___x_109_ = 23;
v___x_110_ = lean_uint32_dec_eq(v_opcode_77_, v___x_109_);
if (v___x_110_ == 0)
{
uint32_t v___x_111_; uint8_t v___x_112_; 
v___x_111_ = 3;
v___x_112_ = lean_uint32_dec_eq(v_opcode_77_, v___x_111_);
if (v___x_112_ == 0)
{
uint32_t v___x_113_; uint8_t v___x_114_; 
v___x_113_ = 35;
v___x_114_ = lean_uint32_dec_eq(v_opcode_77_, v___x_113_);
if (v___x_114_ == 0)
{
uint32_t v___x_115_; uint8_t v___x_116_; 
v___x_115_ = 99;
v___x_116_ = lean_uint32_dec_eq(v_opcode_77_, v___x_115_);
if (v___x_116_ == 0)
{
uint32_t v___x_117_; uint8_t v___x_118_; 
lean_dec(v_rs2_102_);
v___x_117_ = 111;
v___x_118_ = lean_uint32_dec_eq(v_opcode_77_, v___x_117_);
if (v___x_118_ == 0)
{
uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_119_ = 103;
v___x_120_ = lean_uint32_dec_eq(v_opcode_77_, v___x_119_);
if (v___x_120_ == 0)
{
uint32_t v___x_121_; uint8_t v___x_122_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_121_ = 115;
v___x_122_ = lean_uint32_dec_eq(v_raw_73_, v___x_121_);
if (v___x_122_ == 0)
{
uint32_t v___x_123_; uint8_t v___x_124_; 
v___x_123_ = 1048691;
v___x_124_ = lean_uint32_dec_eq(v_raw_73_, v___x_123_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_box(0);
return v___x_125_;
}
else
{
goto v___jp_74_;
}
}
else
{
goto v___jp_74_;
}
}
else
{
uint32_t v___x_126_; uint8_t v___x_127_; 
v___x_126_ = 0;
v___x_127_ = lean_uint32_dec_eq(v_funct3_86_, v___x_126_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_128_ = lean_box(0);
return v___x_128_;
}
else
{
uint32_t v___x_129_; uint32_t v___x_130_; uint64_t v_immI_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_129_ = 4095;
v___x_130_ = lean_uint32_land(v___x_92_, v___x_129_);
v_immI_131_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_130_, v___x_83_);
v___x_132_ = lean_alloc_ctor(8, 2, 8);
lean_ctor_set(v___x_132_, 0, v_rd_82_);
lean_ctor_set(v___x_132_, 1, v_rs1_90_);
lean_ctor_set_uint64(v___x_132_, sizeof(void*)*2, v_immI_131_);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
}
else
{
uint32_t v___x_134_; uint32_t v___x_135_; uint32_t v___x_136_; uint32_t v_j20_137_; uint32_t v___x_138_; uint32_t v___x_139_; uint32_t v_j19__12_140_; uint32_t v___x_141_; uint32_t v___x_142_; uint32_t v_j11_143_; lean_object* v___x_144_; uint32_t v___x_145_; uint32_t v___x_146_; uint32_t v___x_147_; uint32_t v___x_148_; uint32_t v_j10__1_149_; uint32_t v___x_150_; uint32_t v___x_151_; uint32_t v___x_152_; uint64_t v_off_153_; uint64_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
lean_dec(v_rs1_90_);
v___x_134_ = lean_uint32_shift_right(v_raw_73_, v___x_80_);
v___x_135_ = 1;
v___x_136_ = lean_uint32_land(v___x_134_, v___x_135_);
v_j20_137_ = lean_uint32_shift_left(v___x_136_, v___x_91_);
v___x_138_ = 255;
v___x_139_ = lean_uint32_land(v___x_85_, v___x_138_);
v_j19__12_140_ = lean_uint32_shift_left(v___x_139_, v___x_84_);
v___x_141_ = lean_uint32_land(v___x_92_, v___x_135_);
v___x_142_ = 11;
v_j11_143_ = lean_uint32_shift_left(v___x_141_, v___x_142_);
v___x_144_ = lean_unsigned_to_nat(21u);
v___x_145_ = 21;
v___x_146_ = lean_uint32_shift_right(v_raw_73_, v___x_145_);
v___x_147_ = 1023;
v___x_148_ = lean_uint32_land(v___x_146_, v___x_147_);
v_j10__1_149_ = lean_uint32_shift_left(v___x_148_, v___x_135_);
v___x_150_ = lean_uint32_lor(v_j20_137_, v_j19__12_140_);
v___x_151_ = lean_uint32_lor(v___x_150_, v_j11_143_);
v___x_152_ = lean_uint32_lor(v___x_151_, v_j10__1_149_);
v_off_153_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_152_, v___x_144_);
v___x_154_ = lean_uint64_add(v_pc_72_, v_off_153_);
v___x_155_ = lean_alloc_ctor(7, 1, 8);
lean_ctor_set(v___x_155_, 0, v_rd_82_);
lean_ctor_set_uint64(v___x_155_, sizeof(void*)*1, v___x_154_);
v___x_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
else
{
uint32_t v___x_157_; uint32_t v___x_158_; uint32_t v___x_159_; uint32_t v_b12_160_; uint32_t v___x_161_; uint32_t v___x_162_; uint32_t v_b11_163_; uint32_t v___x_164_; uint32_t v___x_165_; uint32_t v_b10__5_166_; uint32_t v___x_167_; uint32_t v___x_168_; uint32_t v___x_169_; uint32_t v_b4__1_170_; uint32_t v___x_171_; uint32_t v___x_172_; uint32_t v___x_173_; lean_object* v___x_174_; uint64_t v_off_175_; uint32_t v___x_176_; uint8_t v___x_177_; 
lean_dec(v_rd_82_);
v___x_157_ = lean_uint32_shift_right(v_raw_73_, v___x_80_);
v___x_158_ = 1;
v___x_159_ = lean_uint32_land(v___x_157_, v___x_158_);
v_b12_160_ = lean_uint32_shift_left(v___x_159_, v___x_84_);
v___x_161_ = lean_uint32_land(v___x_79_, v___x_158_);
v___x_162_ = 11;
v_b11_163_ = lean_uint32_shift_left(v___x_161_, v___x_162_);
v___x_164_ = lean_uint32_land(v___x_97_, v___x_93_);
v___x_165_ = 5;
v_b10__5_166_ = lean_uint32_shift_left(v___x_164_, v___x_165_);
v___x_167_ = 8;
v___x_168_ = lean_uint32_shift_right(v_raw_73_, v___x_167_);
v___x_169_ = lean_uint32_land(v___x_168_, v___x_87_);
v_b4__1_170_ = lean_uint32_shift_left(v___x_169_, v___x_158_);
v___x_171_ = lean_uint32_lor(v_b12_160_, v_b11_163_);
v___x_172_ = lean_uint32_lor(v___x_171_, v_b10__5_166_);
v___x_173_ = lean_uint32_lor(v___x_172_, v_b4__1_170_);
v___x_174_ = lean_unsigned_to_nat(13u);
v_off_175_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_173_, v___x_174_);
v___x_176_ = 0;
v___x_177_ = lean_uint32_dec_eq(v_funct3_86_, v___x_176_);
if (v___x_177_ == 0)
{
uint8_t v___x_178_; 
v___x_178_ = lean_uint32_dec_eq(v_funct3_86_, v___x_158_);
if (v___x_178_ == 0)
{
uint32_t v___x_179_; uint8_t v___x_180_; 
v___x_179_ = 4;
v___x_180_ = lean_uint32_dec_eq(v_funct3_86_, v___x_179_);
if (v___x_180_ == 0)
{
uint8_t v___x_181_; 
v___x_181_ = lean_uint32_dec_eq(v_funct3_86_, v___x_165_);
if (v___x_181_ == 0)
{
uint32_t v___x_182_; uint8_t v___x_183_; 
v___x_182_ = 6;
v___x_183_ = lean_uint32_dec_eq(v_funct3_86_, v___x_182_);
if (v___x_183_ == 0)
{
uint8_t v___x_184_; 
v___x_184_ = lean_uint32_dec_eq(v_funct3_86_, v___x_78_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
uint8_t v___x_186_; uint64_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_186_ = 3;
v___x_187_ = lean_uint64_add(v_pc_72_, v_off_175_);
v___x_188_ = lean_alloc_ctor(6, 2, 9);
lean_ctor_set(v___x_188_, 0, v_rs1_90_);
lean_ctor_set(v___x_188_, 1, v_rs2_102_);
lean_ctor_set_uint8(v___x_188_, sizeof(void*)*2 + 8, v___x_186_);
lean_ctor_set_uint64(v___x_188_, sizeof(void*)*2, v___x_187_);
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
return v___x_189_;
}
}
else
{
uint8_t v___x_190_; uint64_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_190_ = 2;
v___x_191_ = lean_uint64_add(v_pc_72_, v_off_175_);
v___x_192_ = lean_alloc_ctor(6, 2, 9);
lean_ctor_set(v___x_192_, 0, v_rs1_90_);
lean_ctor_set(v___x_192_, 1, v_rs2_102_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*2 + 8, v___x_190_);
lean_ctor_set_uint64(v___x_192_, sizeof(void*)*2, v___x_191_);
v___x_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
return v___x_193_;
}
}
else
{
uint8_t v___x_194_; uint64_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_194_ = 5;
v___x_195_ = lean_uint64_add(v_pc_72_, v_off_175_);
v___x_196_ = lean_alloc_ctor(6, 2, 9);
lean_ctor_set(v___x_196_, 0, v_rs1_90_);
lean_ctor_set(v___x_196_, 1, v_rs2_102_);
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*2 + 8, v___x_194_);
lean_ctor_set_uint64(v___x_196_, sizeof(void*)*2, v___x_195_);
v___x_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
}
else
{
uint8_t v___x_198_; uint64_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_198_ = 4;
v___x_199_ = lean_uint64_add(v_pc_72_, v_off_175_);
v___x_200_ = lean_alloc_ctor(6, 2, 9);
lean_ctor_set(v___x_200_, 0, v_rs1_90_);
lean_ctor_set(v___x_200_, 1, v_rs2_102_);
lean_ctor_set_uint8(v___x_200_, sizeof(void*)*2 + 8, v___x_198_);
lean_ctor_set_uint64(v___x_200_, sizeof(void*)*2, v___x_199_);
v___x_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
else
{
uint8_t v___x_202_; uint64_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_202_ = 1;
v___x_203_ = lean_uint64_add(v_pc_72_, v_off_175_);
v___x_204_ = lean_alloc_ctor(6, 2, 9);
lean_ctor_set(v___x_204_, 0, v_rs1_90_);
lean_ctor_set(v___x_204_, 1, v_rs2_102_);
lean_ctor_set_uint8(v___x_204_, sizeof(void*)*2 + 8, v___x_202_);
lean_ctor_set_uint64(v___x_204_, sizeof(void*)*2, v___x_203_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
else
{
uint8_t v___x_206_; uint64_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_206_ = 0;
v___x_207_ = lean_uint64_add(v_pc_72_, v_off_175_);
v___x_208_ = lean_alloc_ctor(6, 2, 9);
lean_ctor_set(v___x_208_, 0, v_rs1_90_);
lean_ctor_set(v___x_208_, 1, v_rs2_102_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*2 + 8, v___x_206_);
lean_ctor_set_uint64(v___x_208_, sizeof(void*)*2, v___x_207_);
v___x_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
return v___x_209_;
}
}
}
else
{
uint8_t v___x_210_; 
lean_dec(v_rd_82_);
v___x_210_ = lean_uint32_dec_eq(v_funct3_86_, v___x_111_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
v___x_211_ = lean_box(0);
return v___x_211_;
}
else
{
uint32_t v___x_212_; uint32_t v___x_213_; uint32_t v_immSRaw_214_; uint64_t v_immS_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_212_ = 5;
v___x_213_ = lean_uint32_shift_left(v_funct7_99_, v___x_212_);
v_immSRaw_214_ = lean_uint32_lor(v___x_213_, v___x_81_);
v_immS_215_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v_immSRaw_214_, v___x_83_);
v___x_216_ = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(v___x_216_, 0, v_rs1_90_);
lean_ctor_set(v___x_216_, 1, v_rs2_102_);
lean_ctor_set_uint64(v___x_216_, sizeof(void*)*2, v_immS_215_);
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
else
{
uint8_t v___x_218_; 
lean_dec(v_rs2_102_);
v___x_218_ = lean_uint32_dec_eq(v_funct3_86_, v___x_111_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_219_ = lean_box(0);
return v___x_219_;
}
else
{
uint32_t v___x_220_; uint32_t v___x_221_; uint64_t v_immI_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_220_ = 4095;
v___x_221_ = lean_uint32_land(v___x_92_, v___x_220_);
v_immI_222_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_221_, v___x_83_);
v___x_223_ = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(v___x_223_, 0, v_rd_82_);
lean_ctor_set(v___x_223_, 1, v_rs1_90_);
lean_ctor_set_uint64(v___x_223_, sizeof(void*)*2, v_immI_222_);
v___x_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
return v___x_224_;
}
}
}
else
{
uint32_t v___x_225_; uint32_t v___x_226_; lean_object* v___x_227_; uint64_t v_imm20_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
v___x_225_ = 4294963200;
v___x_226_ = lean_uint32_land(v_raw_73_, v___x_225_);
v___x_227_ = lean_unsigned_to_nat(32u);
v_imm20_228_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_226_, v___x_227_);
v___x_229_ = lean_alloc_ctor(3, 1, 8);
lean_ctor_set(v___x_229_, 0, v_rd_82_);
lean_ctor_set_uint64(v___x_229_, sizeof(void*)*1, v_imm20_228_);
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
return v___x_230_;
}
}
else
{
uint32_t v___x_231_; uint32_t v___x_232_; lean_object* v___x_233_; uint64_t v_imm20_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
v___x_231_ = 4294963200;
v___x_232_ = lean_uint32_land(v_raw_73_, v___x_231_);
v___x_233_ = lean_unsigned_to_nat(32u);
v_imm20_234_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_232_, v___x_233_);
v___x_235_ = lean_alloc_ctor(2, 1, 8);
lean_ctor_set(v___x_235_, 0, v_rd_82_);
lean_ctor_set_uint64(v___x_235_, sizeof(void*)*1, v_imm20_234_);
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
return v___x_236_;
}
}
else
{
uint8_t v___y_238_; uint32_t v___x_262_; uint8_t v___x_263_; 
v___x_262_ = 0;
v___x_263_ = lean_uint32_dec_eq(v_funct3_86_, v___x_262_);
if (v___x_263_ == 0)
{
goto v___jp_270_;
}
else
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lean_box(0);
v___x_277_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0(v_funct7_99_, v___x_276_);
if (v___x_277_ == 0)
{
goto v___jp_270_;
}
else
{
uint8_t v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = 15;
v___x_279_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_279_, 0, v_rd_82_);
lean_ctor_set(v___x_279_, 1, v_rs1_90_);
lean_ctor_set(v___x_279_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_279_, sizeof(void*)*3, v___x_278_);
v___x_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
v___jp_237_:
{
if (v___y_238_ == 0)
{
lean_object* v___x_239_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_239_ = lean_box(0);
return v___x_239_;
}
else
{
lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_240_ = lean_box(0);
v___x_241_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__1(v_funct7_99_, v___x_240_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_242_ = lean_box(0);
return v___x_242_;
}
else
{
uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = 20;
v___x_244_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_244_, 0, v_rd_82_);
lean_ctor_set(v___x_244_, 1, v_rs1_90_);
lean_ctor_set(v___x_244_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_244_, sizeof(void*)*3, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
}
v___jp_246_:
{
uint32_t v___x_247_; uint8_t v___x_248_; 
v___x_247_ = 5;
v___x_248_ = lean_uint32_dec_eq(v_funct3_86_, v___x_247_);
if (v___x_248_ == 0)
{
v___y_238_ = v___x_248_;
goto v___jp_237_;
}
else
{
lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_249_ = lean_box(0);
v___x_250_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0(v_funct7_99_, v___x_249_);
if (v___x_250_ == 0)
{
v___y_238_ = v___x_248_;
goto v___jp_237_;
}
else
{
uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_251_ = 19;
v___x_252_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_252_, 0, v_rd_82_);
lean_ctor_set(v___x_252_, 1, v_rs1_90_);
lean_ctor_set(v___x_252_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*3, v___x_251_);
v___x_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
}
v___jp_254_:
{
uint32_t v___x_255_; uint8_t v___x_256_; 
v___x_255_ = 1;
v___x_256_ = lean_uint32_dec_eq(v_funct3_86_, v___x_255_);
if (v___x_256_ == 0)
{
goto v___jp_246_;
}
else
{
lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_257_ = lean_box(0);
v___x_258_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__0(v_funct7_99_, v___x_257_);
if (v___x_258_ == 0)
{
goto v___jp_246_;
}
else
{
uint8_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = 18;
v___x_260_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_260_, 0, v_rd_82_);
lean_ctor_set(v___x_260_, 1, v_rs1_90_);
lean_ctor_set(v___x_260_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*3, v___x_259_);
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
return v___x_261_;
}
}
}
v___jp_264_:
{
if (v___x_263_ == 0)
{
goto v___jp_254_;
}
else
{
uint32_t v___x_265_; uint8_t v___x_266_; 
v___x_265_ = 1;
v___x_266_ = lean_uint32_dec_eq(v_funct7_99_, v___x_265_);
if (v___x_266_ == 0)
{
goto v___jp_254_;
}
else
{
uint8_t v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_267_ = 17;
v___x_268_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_268_, 0, v_rd_82_);
lean_ctor_set(v___x_268_, 1, v_rs1_90_);
lean_ctor_set(v___x_268_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*3, v___x_267_);
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
return v___x_269_;
}
}
}
v___jp_270_:
{
if (v___x_263_ == 0)
{
goto v___jp_264_;
}
else
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_box(0);
v___x_272_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___lam__1(v_funct7_99_, v___x_271_);
if (v___x_272_ == 0)
{
goto v___jp_264_;
}
else
{
uint8_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = 16;
v___x_274_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_274_, 0, v_rd_82_);
lean_ctor_set(v___x_274_, 1, v_rs1_90_);
lean_ctor_set(v___x_274_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*3, v___x_273_);
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
return v___x_275_;
}
}
}
}
}
else
{
uint32_t v___x_281_; uint8_t v___x_282_; 
v___x_281_ = 1;
v___x_282_ = lean_uint32_dec_eq(v_funct7_99_, v___x_281_);
if (v___x_282_ == 0)
{
uint32_t v___x_283_; uint8_t v___y_300_; uint8_t v___x_334_; 
v___x_283_ = 0;
v___x_334_ = lean_uint32_dec_eq(v_funct3_86_, v___x_283_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
v___x_335_ = lean_uint32_dec_eq(v_funct3_86_, v___x_281_);
if (v___x_335_ == 0)
{
goto v___jp_327_;
}
else
{
uint8_t v___x_336_; 
v___x_336_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_336_ == 0)
{
goto v___jp_327_;
}
else
{
uint8_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = 8;
v___x_338_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_338_, 0, v_rd_82_);
lean_ctor_set(v___x_338_, 1, v_rs1_90_);
lean_ctor_set(v___x_338_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_338_, sizeof(void*)*3, v___x_337_);
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
}
}
else
{
uint8_t v___x_340_; 
v___x_340_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_340_ == 0)
{
uint32_t v___x_341_; uint8_t v___x_342_; 
v___x_341_ = 32;
v___x_342_ = lean_uint32_dec_eq(v_funct7_99_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_343_ = lean_box(0);
return v___x_343_;
}
else
{
uint8_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = 1;
v___x_345_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_345_, 0, v_rd_82_);
lean_ctor_set(v___x_345_, 1, v_rs1_90_);
lean_ctor_set(v___x_345_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_345_, sizeof(void*)*3, v___x_344_);
v___x_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
}
else
{
uint8_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = 0;
v___x_348_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_348_, 0, v_rd_82_);
lean_ctor_set(v___x_348_, 1, v_rs1_90_);
lean_ctor_set(v___x_348_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_348_, sizeof(void*)*3, v___x_347_);
v___x_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
v___jp_284_:
{
uint8_t v___x_285_; 
v___x_285_ = lean_uint32_dec_eq(v_funct3_86_, v___x_78_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_286_ = lean_box(0);
return v___x_286_;
}
else
{
uint8_t v___x_287_; 
v___x_287_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_288_ = lean_box(0);
return v___x_288_;
}
else
{
uint8_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = 5;
v___x_290_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_290_, 0, v_rd_82_);
lean_ctor_set(v___x_290_, 1, v_rs1_90_);
lean_ctor_set(v___x_290_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*3, v___x_289_);
v___x_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
}
v___jp_292_:
{
uint32_t v___x_293_; uint8_t v___x_294_; 
v___x_293_ = 6;
v___x_294_ = lean_uint32_dec_eq(v_funct3_86_, v___x_293_);
if (v___x_294_ == 0)
{
goto v___jp_284_;
}
else
{
uint8_t v___x_295_; 
v___x_295_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_295_ == 0)
{
goto v___jp_284_;
}
else
{
uint8_t v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = 6;
v___x_297_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_297_, 0, v_rd_82_);
lean_ctor_set(v___x_297_, 1, v_rs1_90_);
lean_ctor_set(v___x_297_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_297_, sizeof(void*)*3, v___x_296_);
v___x_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
v___jp_299_:
{
if (v___y_300_ == 0)
{
goto v___jp_292_;
}
else
{
uint32_t v___x_301_; uint8_t v___x_302_; 
v___x_301_ = 32;
v___x_302_ = lean_uint32_dec_eq(v_funct7_99_, v___x_301_);
if (v___x_302_ == 0)
{
goto v___jp_292_;
}
else
{
uint8_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = 10;
v___x_304_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_304_, 0, v_rd_82_);
lean_ctor_set(v___x_304_, 1, v_rs1_90_);
lean_ctor_set(v___x_304_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_304_, sizeof(void*)*3, v___x_303_);
v___x_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
}
}
v___jp_306_:
{
uint32_t v___x_307_; uint8_t v___x_308_; 
v___x_307_ = 5;
v___x_308_ = lean_uint32_dec_eq(v_funct3_86_, v___x_307_);
if (v___x_308_ == 0)
{
v___y_300_ = v___x_308_;
goto v___jp_299_;
}
else
{
uint8_t v___x_309_; 
v___x_309_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_309_ == 0)
{
v___y_300_ = v___x_308_;
goto v___jp_299_;
}
else
{
uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = 9;
v___x_311_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_311_, 0, v_rd_82_);
lean_ctor_set(v___x_311_, 1, v_rs1_90_);
lean_ctor_set(v___x_311_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*3, v___x_310_);
v___x_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
return v___x_312_;
}
}
}
v___jp_313_:
{
uint32_t v___x_314_; uint8_t v___x_315_; 
v___x_314_ = 4;
v___x_315_ = lean_uint32_dec_eq(v_funct3_86_, v___x_314_);
if (v___x_315_ == 0)
{
goto v___jp_306_;
}
else
{
uint8_t v___x_316_; 
v___x_316_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_316_ == 0)
{
goto v___jp_306_;
}
else
{
uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_317_ = 7;
v___x_318_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_318_, 0, v_rd_82_);
lean_ctor_set(v___x_318_, 1, v_rs1_90_);
lean_ctor_set(v___x_318_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_318_, sizeof(void*)*3, v___x_317_);
v___x_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
}
}
v___jp_320_:
{
uint32_t v___x_321_; uint8_t v___x_322_; 
v___x_321_ = 3;
v___x_322_ = lean_uint32_dec_eq(v_funct3_86_, v___x_321_);
if (v___x_322_ == 0)
{
goto v___jp_313_;
}
else
{
uint8_t v___x_323_; 
v___x_323_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_323_ == 0)
{
goto v___jp_313_;
}
else
{
uint8_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = 13;
v___x_325_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_325_, 0, v_rd_82_);
lean_ctor_set(v___x_325_, 1, v_rs1_90_);
lean_ctor_set(v___x_325_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_325_, sizeof(void*)*3, v___x_324_);
v___x_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
return v___x_326_;
}
}
}
v___jp_327_:
{
uint32_t v___x_328_; uint8_t v___x_329_; 
v___x_328_ = 2;
v___x_329_ = lean_uint32_dec_eq(v_funct3_86_, v___x_328_);
if (v___x_329_ == 0)
{
goto v___jp_320_;
}
else
{
uint8_t v___x_330_; 
v___x_330_ = lean_uint32_dec_eq(v_funct7_99_, v___x_283_);
if (v___x_330_ == 0)
{
goto v___jp_320_;
}
else
{
uint8_t v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = 14;
v___x_332_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_332_, 0, v_rd_82_);
lean_ctor_set(v___x_332_, 1, v_rs1_90_);
lean_ctor_set(v___x_332_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_332_, sizeof(void*)*3, v___x_331_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
return v___x_333_;
}
}
}
}
else
{
uint32_t v___x_350_; uint8_t v___x_351_; 
v___x_350_ = 0;
v___x_351_ = lean_uint32_dec_eq(v_funct3_86_, v___x_350_);
if (v___x_351_ == 0)
{
uint32_t v___x_352_; uint8_t v___x_353_; 
v___x_352_ = 5;
v___x_353_ = lean_uint32_dec_eq(v_funct3_86_, v___x_352_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
v___x_354_ = lean_uint32_dec_eq(v_funct3_86_, v___x_78_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
lean_dec(v_rs2_102_);
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_355_ = lean_box(0);
return v___x_355_;
}
else
{
uint8_t v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = 4;
v___x_357_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_357_, 0, v_rd_82_);
lean_ctor_set(v___x_357_, 1, v_rs1_90_);
lean_ctor_set(v___x_357_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_357_, sizeof(void*)*3, v___x_356_);
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
else
{
uint8_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = 3;
v___x_360_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_360_, 0, v_rd_82_);
lean_ctor_set(v___x_360_, 1, v_rs1_90_);
lean_ctor_set(v___x_360_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_360_, sizeof(void*)*3, v___x_359_);
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
return v___x_361_;
}
}
else
{
uint8_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = 2;
v___x_363_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_363_, 0, v_rd_82_);
lean_ctor_set(v___x_363_, 1, v_rs1_90_);
lean_ctor_set(v___x_363_, 2, v_rs2_102_);
lean_ctor_set_uint8(v___x_363_, sizeof(void*)*3, v___x_362_);
v___x_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
}
}
else
{
uint32_t v___x_365_; uint8_t v___x_366_; 
v___x_365_ = 0;
v___x_366_ = lean_uint32_dec_eq(v_funct3_86_, v___x_365_);
if (v___x_366_ == 0)
{
uint64_t v_shamt5_367_; uint8_t v___y_369_; uint32_t v___x_384_; uint8_t v___x_385_; 
v_shamt5_367_ = lean_uint32_to_uint64(v___x_98_);
v___x_384_ = 1;
v___x_385_ = lean_uint32_dec_eq(v_funct3_86_, v___x_384_);
if (v___x_385_ == 0)
{
goto v___jp_377_;
}
else
{
uint8_t v___x_386_; 
v___x_386_ = lean_uint32_dec_eq(v_funct7_99_, v___x_365_);
if (v___x_386_ == 0)
{
goto v___jp_377_;
}
else
{
uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_387_ = 18;
v___x_388_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_388_, 0, v_rd_82_);
lean_ctor_set(v___x_388_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*2 + 8, v___x_387_);
lean_ctor_set_uint64(v___x_388_, sizeof(void*)*2, v_shamt5_367_);
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
return v___x_389_;
}
}
v___jp_368_:
{
if (v___y_369_ == 0)
{
lean_object* v___x_370_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_370_ = lean_box(0);
return v___x_370_;
}
else
{
uint32_t v___x_371_; uint8_t v___x_372_; 
v___x_371_ = 32;
v___x_372_ = lean_uint32_dec_eq(v_funct7_99_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_373_ = lean_box(0);
return v___x_373_;
}
else
{
uint8_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = 20;
v___x_375_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_375_, 0, v_rd_82_);
lean_ctor_set(v___x_375_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*2 + 8, v___x_374_);
lean_ctor_set_uint64(v___x_375_, sizeof(void*)*2, v_shamt5_367_);
v___x_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
}
}
v___jp_377_:
{
uint32_t v___x_378_; uint8_t v___x_379_; 
v___x_378_ = 5;
v___x_379_ = lean_uint32_dec_eq(v_funct3_86_, v___x_378_);
if (v___x_379_ == 0)
{
v___y_369_ = v___x_379_;
goto v___jp_368_;
}
else
{
uint8_t v___x_380_; 
v___x_380_ = lean_uint32_dec_eq(v_funct7_99_, v___x_365_);
if (v___x_380_ == 0)
{
v___y_369_ = v___x_379_;
goto v___jp_368_;
}
else
{
uint8_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = 19;
v___x_382_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_382_, 0, v_rd_82_);
lean_ctor_set(v___x_382_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_382_, sizeof(void*)*2 + 8, v___x_381_);
lean_ctor_set_uint64(v___x_382_, sizeof(void*)*2, v_shamt5_367_);
v___x_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
}
}
else
{
uint32_t v___x_390_; uint32_t v___x_391_; uint64_t v_immI_392_; uint8_t v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_390_ = 4095;
v___x_391_ = lean_uint32_land(v___x_92_, v___x_390_);
v_immI_392_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_391_, v___x_83_);
v___x_393_ = 15;
v___x_394_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_394_, 0, v_rd_82_);
lean_ctor_set(v___x_394_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_394_, sizeof(void*)*2 + 8, v___x_393_);
lean_ctor_set_uint64(v___x_394_, sizeof(void*)*2, v_immI_392_);
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
}
else
{
uint32_t v___x_396_; uint32_t v___x_397_; uint64_t v_immI_398_; uint32_t v___x_399_; uint8_t v___x_400_; 
v___x_396_ = 4095;
v___x_397_ = lean_uint32_land(v___x_92_, v___x_396_);
v_immI_398_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_397_, v___x_83_);
v___x_399_ = 0;
v___x_400_ = lean_uint32_dec_eq(v_funct3_86_, v___x_399_);
if (v___x_400_ == 0)
{
uint32_t v___x_401_; uint8_t v___x_402_; 
v___x_401_ = 2;
v___x_402_ = lean_uint32_dec_eq(v_funct3_86_, v___x_401_);
if (v___x_402_ == 0)
{
uint32_t v___x_403_; uint8_t v___x_404_; 
v___x_403_ = 3;
v___x_404_ = lean_uint32_dec_eq(v_funct3_86_, v___x_403_);
if (v___x_404_ == 0)
{
uint32_t v___x_405_; uint8_t v___x_406_; 
v___x_405_ = 4;
v___x_406_ = lean_uint32_dec_eq(v_funct3_86_, v___x_405_);
if (v___x_406_ == 0)
{
uint32_t v___x_407_; uint8_t v___x_408_; 
v___x_407_ = 6;
v___x_408_ = lean_uint32_dec_eq(v_funct3_86_, v___x_407_);
if (v___x_408_ == 0)
{
uint8_t v___x_409_; 
v___x_409_ = lean_uint32_dec_eq(v_funct3_86_, v___x_78_);
if (v___x_409_ == 0)
{
uint32_t v___x_410_; uint32_t v___x_411_; uint32_t v_top6_412_; uint32_t v___x_413_; uint64_t v_shamt_414_; uint32_t v___x_415_; uint8_t v___x_416_; 
v___x_410_ = 26;
v___x_411_ = lean_uint32_shift_right(v_raw_73_, v___x_410_);
v_top6_412_ = lean_uint32_land(v___x_411_, v___x_93_);
v___x_413_ = lean_uint32_land(v___x_92_, v___x_93_);
v_shamt_414_ = lean_uint32_to_uint64(v___x_413_);
v___x_415_ = 1;
v___x_416_ = lean_uint32_dec_eq(v_funct3_86_, v___x_415_);
if (v___x_416_ == 0)
{
uint32_t v___x_417_; uint8_t v___x_418_; 
v___x_417_ = 5;
v___x_418_ = lean_uint32_dec_eq(v_funct3_86_, v___x_417_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_419_ = lean_box(0);
return v___x_419_;
}
else
{
uint8_t v___x_420_; 
v___x_420_ = lean_uint32_dec_eq(v_top6_412_, v___x_399_);
if (v___x_420_ == 0)
{
uint32_t v___x_421_; uint8_t v___x_422_; 
v___x_421_ = 16;
v___x_422_ = lean_uint32_dec_eq(v_top6_412_, v___x_421_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_423_ = lean_box(0);
return v___x_423_;
}
else
{
uint8_t v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = 10;
v___x_425_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_425_, 0, v_rd_82_);
lean_ctor_set(v___x_425_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_425_, sizeof(void*)*2 + 8, v___x_424_);
lean_ctor_set_uint64(v___x_425_, sizeof(void*)*2, v_shamt_414_);
v___x_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
}
else
{
uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_427_ = 9;
v___x_428_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_428_, 0, v_rd_82_);
lean_ctor_set(v___x_428_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*2 + 8, v___x_427_);
lean_ctor_set_uint64(v___x_428_, sizeof(void*)*2, v_shamt_414_);
v___x_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
}
}
else
{
uint8_t v___x_430_; 
v___x_430_ = lean_uint32_dec_eq(v_top6_412_, v___x_399_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
lean_dec(v_rs1_90_);
lean_dec(v_rd_82_);
v___x_431_ = lean_box(0);
return v___x_431_;
}
else
{
uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = 8;
v___x_433_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_433_, 0, v_rd_82_);
lean_ctor_set(v___x_433_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_433_, sizeof(void*)*2 + 8, v___x_432_);
lean_ctor_set_uint64(v___x_433_, sizeof(void*)*2, v_shamt_414_);
v___x_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
}
}
else
{
uint8_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_435_ = 5;
v___x_436_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_436_, 0, v_rd_82_);
lean_ctor_set(v___x_436_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_436_, sizeof(void*)*2 + 8, v___x_435_);
lean_ctor_set_uint64(v___x_436_, sizeof(void*)*2, v_immI_398_);
v___x_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
return v___x_437_;
}
}
else
{
uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = 6;
v___x_439_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_439_, 0, v_rd_82_);
lean_ctor_set(v___x_439_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_439_, sizeof(void*)*2 + 8, v___x_438_);
lean_ctor_set_uint64(v___x_439_, sizeof(void*)*2, v_immI_398_);
v___x_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
return v___x_440_;
}
}
else
{
uint8_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_441_ = 7;
v___x_442_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_442_, 0, v_rd_82_);
lean_ctor_set(v___x_442_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_442_, sizeof(void*)*2 + 8, v___x_441_);
lean_ctor_set_uint64(v___x_442_, sizeof(void*)*2, v_immI_398_);
v___x_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
else
{
uint8_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_444_ = 13;
v___x_445_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_445_, 0, v_rd_82_);
lean_ctor_set(v___x_445_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_445_, sizeof(void*)*2 + 8, v___x_444_);
lean_ctor_set_uint64(v___x_445_, sizeof(void*)*2, v_immI_398_);
v___x_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
return v___x_446_;
}
}
else
{
uint8_t v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_447_ = 14;
v___x_448_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_448_, 0, v_rd_82_);
lean_ctor_set(v___x_448_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_448_, sizeof(void*)*2 + 8, v___x_447_);
lean_ctor_set_uint64(v___x_448_, sizeof(void*)*2, v_immI_398_);
v___x_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
}
else
{
uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = 0;
v___x_451_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_451_, 0, v_rd_82_);
lean_ctor_set(v___x_451_, 1, v_rs1_90_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*2 + 8, v___x_450_);
lean_ctor_set_uint64(v___x_451_, sizeof(void*)*2, v_immI_398_);
v___x_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
v___jp_74_:
{
lean_object* v___x_75_; 
v___x_75_ = ((lean_object*)(lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___closed__0));
return v___x_75_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt___boxed(lean_object* v_pc_453_, lean_object* v_raw_454_){
_start:
{
uint64_t v_pc_boxed_455_; uint32_t v_raw_boxed_456_; lean_object* v_res_457_; 
v_pc_boxed_455_ = lean_unbox_uint64(v_pc_453_);
lean_dec_ref(v_pc_453_);
v_raw_boxed_456_ = lean_unbox_uint32(v_raw_454_);
lean_dec(v_raw_454_);
v_res_457_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt(v_pc_boxed_455_, v_raw_boxed_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word(uint64_t v_pc_458_, uint32_t v_raw_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt(v_pc_458_, v_raw_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v___x_461_; 
v___x_461_ = lean_box(9);
return v___x_461_;
}
else
{
lean_object* v_val_462_; 
v_val_462_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_val_462_);
lean_dec_ref_known(v___x_460_, 1);
return v_val_462_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word___boxed(lean_object* v_pc_463_, lean_object* v_raw_464_){
_start:
{
uint64_t v_pc_boxed_465_; uint32_t v_raw_boxed_466_; lean_object* v_res_467_; 
v_pc_boxed_465_ = lean_unbox_uint64(v_pc_463_);
lean_dec_ref(v_pc_463_);
v_raw_boxed_466_ = lean_unbox_uint32(v_raw_464_);
lean_dec(v_raw_464_);
v_res_467_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word(v_pc_boxed_465_, v_raw_boxed_466_);
return v_res_467_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(lean_object* v_bytes_468_){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_469_ = lean_unsigned_to_nat(64u);
v___x_470_ = lean_byte_array_size(v_bytes_468_);
v___x_471_ = lean_nat_dec_le(v___x_469_, v___x_470_);
if (v___x_471_ == 0)
{
return v___x_471_;
}
else
{
lean_object* v___x_472_; uint8_t v___x_473_; uint8_t v___x_474_; uint8_t v___x_475_; 
v___x_472_ = lean_unsigned_to_nat(0u);
v___x_473_ = lean_byte_array_get(v_bytes_468_, v___x_472_);
v___x_474_ = 127;
v___x_475_ = lean_uint8_dec_eq(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
return v___x_475_;
}
else
{
lean_object* v___x_476_; uint8_t v___x_477_; uint8_t v___x_478_; uint8_t v___x_479_; 
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_byte_array_get(v_bytes_468_, v___x_476_);
v___x_478_ = 69;
v___x_479_ = lean_uint8_dec_eq(v___x_477_, v___x_478_);
if (v___x_479_ == 0)
{
return v___x_479_;
}
else
{
lean_object* v___x_480_; uint8_t v___x_481_; uint8_t v___x_482_; uint8_t v___x_483_; 
v___x_480_ = lean_unsigned_to_nat(2u);
v___x_481_ = lean_byte_array_get(v_bytes_468_, v___x_480_);
v___x_482_ = 76;
v___x_483_ = lean_uint8_dec_eq(v___x_481_, v___x_482_);
if (v___x_483_ == 0)
{
return v___x_483_;
}
else
{
lean_object* v___x_484_; uint8_t v___x_485_; uint8_t v___x_486_; uint8_t v___x_487_; 
v___x_484_ = lean_unsigned_to_nat(3u);
v___x_485_ = lean_byte_array_get(v_bytes_468_, v___x_484_);
v___x_486_ = 70;
v___x_487_ = lean_uint8_dec_eq(v___x_485_, v___x_486_);
return v___x_487_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_isElfMagic___boxed(lean_object* v_bytes_488_){
_start:
{
uint8_t v_res_489_; lean_object* v_r_490_; 
v_res_489_ = lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(v_bytes_488_);
lean_dec_ref(v_bytes_488_);
v_r_490_ = lean_box(v_res_489_);
return v_r_490_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_readU64LE(lean_object* v_bytes_491_, lean_object* v_off_492_){
_start:
{
uint32_t v___x_493_; uint64_t v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; uint32_t v___x_497_; uint64_t v___x_498_; uint64_t v___x_499_; uint64_t v___x_500_; uint64_t v___x_501_; 
v___x_493_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_491_, v_off_492_);
v___x_494_ = lean_uint32_to_uint64(v___x_493_);
v___x_495_ = lean_unsigned_to_nat(4u);
v___x_496_ = lean_nat_add(v_off_492_, v___x_495_);
v___x_497_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_491_, v___x_496_);
lean_dec(v___x_496_);
v___x_498_ = lean_uint32_to_uint64(v___x_497_);
v___x_499_ = 32ULL;
v___x_500_ = lean_uint64_shift_left(v___x_498_, v___x_499_);
v___x_501_ = lean_uint64_lor(v___x_494_, v___x_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readU64LE___boxed(lean_object* v_bytes_502_, lean_object* v_off_503_){
_start:
{
uint64_t v_res_504_; lean_object* v_r_505_; 
v_res_504_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_502_, v_off_503_);
lean_dec(v_off_503_);
lean_dec_ref(v_bytes_502_);
v_r_505_ = lean_box_uint64(v_res_504_);
return v_r_505_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(lean_object* v_bytes_506_, uint64_t v_basePc_507_, lean_object* v_off_508_, lean_object* v_count_509_){
_start:
{
lean_object* v_zero_510_; uint8_t v_isZero_511_; 
v_zero_510_ = lean_unsigned_to_nat(0u);
v_isZero_511_ = lean_nat_dec_eq(v_count_509_, v_zero_510_);
if (v_isZero_511_ == 1)
{
lean_object* v___x_512_; 
lean_dec(v_count_509_);
lean_dec(v_off_508_);
v___x_512_ = lean_box(0);
return v___x_512_;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_513_ = lean_unsigned_to_nat(3u);
v___x_514_ = lean_nat_add(v_off_508_, v___x_513_);
v___x_515_ = lean_byte_array_size(v_bytes_506_);
v___x_516_ = lean_nat_dec_lt(v___x_514_, v___x_515_);
lean_dec(v___x_514_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
lean_dec(v_count_509_);
lean_dec(v_off_508_);
v___x_517_ = lean_box(0);
return v___x_517_;
}
else
{
lean_object* v_one_518_; lean_object* v_n_519_; uint32_t v_w_520_; lean_object* v___x_521_; 
v_one_518_ = lean_unsigned_to_nat(1u);
v_n_519_ = lean_nat_sub(v_count_509_, v_one_518_);
lean_dec(v_count_509_);
v_w_520_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_506_, v_off_508_);
v___x_521_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64WordOpt(v_basePc_507_, v_w_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v___x_522_; uint64_t v___x_523_; uint64_t v___x_524_; lean_object* v___x_525_; 
v___x_522_ = lean_unsigned_to_nat(4u);
v___x_523_ = 4ULL;
v___x_524_ = lean_uint64_add(v_basePc_507_, v___x_523_);
v___x_525_ = lean_nat_add(v_off_508_, v___x_522_);
lean_dec(v_off_508_);
v_basePc_507_ = v___x_524_;
v_off_508_ = v___x_525_;
v_count_509_ = v_n_519_;
goto _start;
}
else
{
lean_object* v_val_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; uint64_t v___x_531_; uint64_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_val_527_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_val_527_);
lean_dec_ref_known(v___x_521_, 1);
v___x_528_ = lean_box_uint64(v_basePc_507_);
v___x_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
lean_ctor_set(v___x_529_, 1, v_val_527_);
v___x_530_ = lean_unsigned_to_nat(4u);
v___x_531_ = 4ULL;
v___x_532_ = lean_uint64_add(v_basePc_507_, v___x_531_);
v___x_533_ = lean_nat_add(v_off_508_, v___x_530_);
lean_dec(v_off_508_);
v___x_534_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_506_, v___x_532_, v___x_533_, v_n_519_);
v___x_535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_529_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice___boxed(lean_object* v_bytes_536_, lean_object* v_basePc_537_, lean_object* v_off_538_, lean_object* v_count_539_){
_start:
{
uint64_t v_basePc_boxed_540_; lean_object* v_res_541_; 
v_basePc_boxed_540_ = lean_unbox_uint64(v_basePc_537_);
lean_dec_ref(v_basePc_537_);
v_res_541_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_536_, v_basePc_boxed_540_, v_off_538_, v_count_539_);
lean_dec_ref(v_bytes_536_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_findExecSegment(lean_object* v_bytes_542_, lean_object* v_phoff_543_, lean_object* v_phentsize_544_, lean_object* v_phnum_545_){
_start:
{
lean_object* v_zero_546_; uint8_t v_isZero_547_; 
v_zero_546_ = lean_unsigned_to_nat(0u);
v_isZero_547_ = lean_nat_dec_eq(v_phnum_545_, v_zero_546_);
if (v_isZero_547_ == 1)
{
lean_object* v___x_548_; 
lean_dec(v_phnum_545_);
lean_dec(v_phoff_543_);
v___x_548_ = lean_box(0);
return v___x_548_;
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_549_ = lean_unsigned_to_nat(56u);
v___x_550_ = lean_nat_add(v_phoff_543_, v___x_549_);
v___x_551_ = lean_byte_array_size(v_bytes_542_);
v___x_552_ = lean_nat_dec_le(v___x_550_, v___x_551_);
lean_dec(v___x_550_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; 
lean_dec(v_phnum_545_);
lean_dec(v_phoff_543_);
v___x_553_ = lean_box(0);
return v___x_553_;
}
else
{
lean_object* v_one_554_; lean_object* v_n_555_; uint32_t v_p__type_559_; uint32_t v___x_560_; uint8_t v___x_561_; 
v_one_554_ = lean_unsigned_to_nat(1u);
v_n_555_ = lean_nat_sub(v_phnum_545_, v_one_554_);
lean_dec(v_phnum_545_);
v_p__type_559_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_542_, v_phoff_543_);
v___x_560_ = 1;
v___x_561_ = lean_uint32_dec_eq(v_p__type_559_, v___x_560_);
if (v___x_561_ == 0)
{
goto v___jp_556_;
}
else
{
lean_object* v___x_562_; lean_object* v___x_563_; uint32_t v_p__flags_564_; uint32_t v___x_565_; uint32_t v___x_566_; uint8_t v___x_567_; 
v___x_562_ = lean_unsigned_to_nat(4u);
v___x_563_ = lean_nat_add(v_phoff_543_, v___x_562_);
v_p__flags_564_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_542_, v___x_563_);
lean_dec(v___x_563_);
v___x_565_ = lean_uint32_land(v_p__flags_564_, v___x_560_);
v___x_566_ = 0;
v___x_567_ = lean_uint32_dec_eq(v___x_565_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; uint64_t v___x_570_; lean_object* v_p__filesz_571_; uint8_t v___x_572_; 
v___x_568_ = lean_unsigned_to_nat(32u);
v___x_569_ = lean_nat_add(v_phoff_543_, v___x_568_);
v___x_570_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_542_, v___x_569_);
lean_dec(v___x_569_);
v_p__filesz_571_ = lean_uint64_to_nat(v___x_570_);
v___x_572_ = lean_nat_dec_lt(v_zero_546_, v_p__filesz_571_);
if (v___x_572_ == 0)
{
lean_dec(v_p__filesz_571_);
goto v___jp_556_;
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; uint64_t v___x_575_; lean_object* v_p__off_576_; lean_object* v___x_577_; lean_object* v___x_578_; uint64_t v_p__vaddr_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec(v_n_555_);
v___x_573_ = lean_unsigned_to_nat(8u);
v___x_574_ = lean_nat_add(v_phoff_543_, v___x_573_);
v___x_575_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_542_, v___x_574_);
lean_dec(v___x_574_);
v_p__off_576_ = lean_uint64_to_nat(v___x_575_);
v___x_577_ = lean_unsigned_to_nat(16u);
v___x_578_ = lean_nat_add(v_phoff_543_, v___x_577_);
lean_dec(v_phoff_543_);
v_p__vaddr_579_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_542_, v___x_578_);
lean_dec(v___x_578_);
v___x_580_ = lean_box_uint64(v_p__vaddr_579_);
v___x_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_581_, 0, v_p__filesz_571_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v_p__off_576_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v___x_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
}
else
{
goto v___jp_556_;
}
}
v___jp_556_:
{
lean_object* v___x_557_; 
v___x_557_ = lean_nat_add(v_phoff_543_, v_phentsize_544_);
lean_dec(v_phoff_543_);
v_phoff_543_ = v___x_557_;
v_phnum_545_ = v_n_555_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_findExecSegment___boxed(lean_object* v_bytes_584_, lean_object* v_phoff_585_, lean_object* v_phentsize_586_, lean_object* v_phnum_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = lp_rv2pancake_Rv2Pancake_Spec_findExecSegment(v_bytes_584_, v_phoff_585_, v_phentsize_586_, v_phnum_587_);
lean_dec(v_phentsize_586_);
lean_dec_ref(v_bytes_584_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(lean_object* v_bytes_589_){
_start:
{
uint64_t v___y_591_; lean_object* v___y_592_; lean_object* v___y_593_; uint64_t v___y_594_; uint64_t v___y_598_; uint64_t v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; uint64_t v___y_602_; lean_object* v___y_606_; uint8_t v___x_611_; 
v___x_611_ = lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(v_bytes_589_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_612_ = lean_unsigned_to_nat(2048u);
v___x_613_ = lean_byte_array_size(v_bytes_589_);
v___x_614_ = lean_unsigned_to_nat(2u);
v___x_615_ = lean_nat_shiftr(v___x_613_, v___x_614_);
v___x_616_ = lean_nat_dec_le(v___x_612_, v___x_615_);
if (v___x_616_ == 0)
{
v___y_606_ = v___x_615_;
goto v___jp_605_;
}
else
{
lean_dec(v___x_615_);
v___y_606_ = v___x_612_;
goto v___jp_605_;
}
}
else
{
lean_object* v___x_617_; uint64_t v_entry_618_; uint64_t v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v_fst_627_; lean_object* v_fst_628_; uint64_t v_snd_629_; lean_object* v___x_634_; uint64_t v___x_635_; lean_object* v_phoff_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___y_640_; lean_object* v___y_641_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_678_; uint8_t v___x_690_; 
v___x_617_ = lean_unsigned_to_nat(24u);
v_entry_618_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_589_, v___x_617_);
v___x_634_ = lean_unsigned_to_nat(32u);
v___x_635_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_589_, v___x_634_);
v_phoff_636_ = lean_uint64_to_nat(v___x_635_);
v___x_637_ = lean_unsigned_to_nat(56u);
v___x_638_ = lean_byte_array_size(v_bytes_589_);
v___x_690_ = lean_nat_dec_le(v___x_637_, v___x_638_);
if (v___x_690_ == 0)
{
v___y_678_ = v___x_637_;
goto v___jp_677_;
}
else
{
lean_object* v___x_691_; uint8_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_691_ = lean_unsigned_to_nat(54u);
v___x_692_ = lean_byte_array_get(v_bytes_589_, v___x_691_);
v___x_693_ = lean_uint8_to_nat(v___x_692_);
v___x_694_ = lean_unsigned_to_nat(55u);
v___x_695_ = lean_byte_array_get(v_bytes_589_, v___x_694_);
v___x_696_ = lean_uint8_to_nat(v___x_695_);
v___x_697_ = lean_unsigned_to_nat(256u);
v___x_698_ = lean_nat_mul(v___x_696_, v___x_697_);
v___x_699_ = lean_nat_add(v___x_693_, v___x_698_);
lean_dec(v___x_698_);
v___y_678_ = v___x_699_;
goto v___jp_677_;
}
v___jp_619_:
{
uint64_t v___x_623_; uint8_t v___x_624_; 
v___x_623_ = 0ULL;
v___x_624_ = lean_uint64_dec_eq(v_entry_618_, v___x_623_);
if (v___x_624_ == 0)
{
v___y_598_ = v___y_620_;
v___y_599_ = v___x_623_;
v___y_600_ = v___y_622_;
v___y_601_ = v___y_621_;
v___y_602_ = v_entry_618_;
goto v___jp_597_;
}
else
{
uint64_t v___x_625_; 
v___x_625_ = 4096ULL;
v___y_598_ = v___y_620_;
v___y_599_ = v___x_623_;
v___y_600_ = v___y_622_;
v___y_601_ = v___y_621_;
v___y_602_ = v___x_625_;
goto v___jp_597_;
}
}
v___jp_626_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_630_ = lean_unsigned_to_nat(2048u);
v___x_631_ = lean_unsigned_to_nat(2u);
v___x_632_ = lean_nat_shiftr(v_fst_628_, v___x_631_);
lean_dec(v_fst_628_);
v___x_633_ = lean_nat_dec_le(v___x_630_, v___x_632_);
if (v___x_633_ == 0)
{
v___y_620_ = v_snd_629_;
v___y_621_ = v_fst_627_;
v___y_622_ = v___x_632_;
goto v___jp_619_;
}
else
{
lean_dec(v___x_632_);
v___y_620_ = v_snd_629_;
v___y_621_ = v_fst_627_;
v___y_622_ = v___x_630_;
goto v___jp_619_;
}
}
v___jp_639_:
{
if (v___y_640_ == 0)
{
lean_object* v___x_642_; lean_object* v___x_643_; 
lean_dec(v_phoff_636_);
v___x_642_ = lean_unsigned_to_nat(64u);
v___x_643_ = lean_nat_sub(v___x_638_, v___x_642_);
v_fst_627_ = v___y_641_;
v_fst_628_ = v___x_643_;
v_snd_629_ = v_entry_618_;
goto v___jp_626_;
}
else
{
lean_object* v___x_644_; uint64_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; uint64_t v___x_649_; 
v___x_644_ = lean_nat_add(v_phoff_636_, v___x_634_);
v___x_645_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_589_, v___x_644_);
lean_dec(v___x_644_);
v___x_646_ = lean_uint64_to_nat(v___x_645_);
v___x_647_ = lean_unsigned_to_nat(16u);
v___x_648_ = lean_nat_add(v_phoff_636_, v___x_647_);
lean_dec(v_phoff_636_);
v___x_649_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_589_, v___x_648_);
lean_dec(v___x_648_);
v_fst_627_ = v___y_641_;
v_fst_628_ = v___x_646_;
v_snd_629_ = v___x_649_;
goto v___jp_626_;
}
}
v___jp_650_:
{
lean_object* v___x_653_; 
lean_inc(v_phoff_636_);
v___x_653_ = lp_rv2pancake_Rv2Pancake_Spec_findExecSegment(v_bytes_589_, v_phoff_636_, v___y_651_, v___y_652_);
lean_dec(v___y_651_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = lean_nat_add(v_phoff_636_, v___x_637_);
v___x_655_ = lean_nat_dec_le(v___x_654_, v___x_638_);
lean_dec(v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
v___x_656_ = lean_unsigned_to_nat(64u);
v___y_640_ = v___x_655_;
v___y_641_ = v___x_656_;
goto v___jp_639_;
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; uint64_t v___x_659_; lean_object* v___x_660_; 
v___x_657_ = lean_unsigned_to_nat(8u);
v___x_658_ = lean_nat_add(v_phoff_636_, v___x_657_);
v___x_659_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_589_, v___x_658_);
lean_dec(v___x_658_);
v___x_660_ = lean_uint64_to_nat(v___x_659_);
v___y_640_ = v___x_655_;
v___y_641_ = v___x_660_;
goto v___jp_639_;
}
}
else
{
lean_object* v_val_661_; lean_object* v_snd_662_; lean_object* v_fst_663_; lean_object* v_fst_664_; lean_object* v_snd_665_; uint64_t v___x_666_; 
lean_dec(v_phoff_636_);
v_val_661_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_val_661_);
lean_dec_ref_known(v___x_653_, 1);
v_snd_662_ = lean_ctor_get(v_val_661_, 1);
lean_inc(v_snd_662_);
v_fst_663_ = lean_ctor_get(v_val_661_, 0);
lean_inc(v_fst_663_);
lean_dec(v_val_661_);
v_fst_664_ = lean_ctor_get(v_snd_662_, 0);
lean_inc(v_fst_664_);
v_snd_665_ = lean_ctor_get(v_snd_662_, 1);
lean_inc(v_snd_665_);
lean_dec(v_snd_662_);
v___x_666_ = lean_unbox_uint64(v_snd_665_);
lean_dec(v_snd_665_);
v_fst_627_ = v_fst_663_;
v_fst_628_ = v_fst_664_;
v_snd_629_ = v___x_666_;
goto v___jp_626_;
}
}
v___jp_667_:
{
lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_670_ = lean_unsigned_to_nat(16u);
v___x_671_ = lean_nat_dec_le(v___x_670_, v___y_668_);
if (v___x_671_ == 0)
{
v___y_651_ = v___y_669_;
v___y_652_ = v___y_668_;
goto v___jp_650_;
}
else
{
lean_dec(v___y_668_);
v___y_651_ = v___y_669_;
v___y_652_ = v___x_670_;
goto v___jp_650_;
}
}
v___jp_672_:
{
lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_675_ = lean_unsigned_to_nat(0u);
v___x_676_ = lean_nat_dec_eq(v___y_673_, v___x_675_);
if (v___x_676_ == 0)
{
v___y_668_ = v___y_674_;
v___y_669_ = v___y_673_;
goto v___jp_667_;
}
else
{
lean_dec(v___y_673_);
v___y_668_ = v___y_674_;
v___y_669_ = v___x_637_;
goto v___jp_667_;
}
}
v___jp_677_:
{
lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_679_ = lean_unsigned_to_nat(58u);
v___x_680_ = lean_nat_dec_le(v___x_679_, v___x_638_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; 
v___x_681_ = lean_unsigned_to_nat(1u);
v___y_673_ = v___y_678_;
v___y_674_ = v___x_681_;
goto v___jp_672_;
}
else
{
uint8_t v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_682_ = lean_byte_array_get(v_bytes_589_, v___x_637_);
v___x_683_ = lean_uint8_to_nat(v___x_682_);
v___x_684_ = lean_unsigned_to_nat(57u);
v___x_685_ = lean_byte_array_get(v_bytes_589_, v___x_684_);
v___x_686_ = lean_uint8_to_nat(v___x_685_);
v___x_687_ = lean_unsigned_to_nat(256u);
v___x_688_ = lean_nat_mul(v___x_686_, v___x_687_);
v___x_689_ = lean_nat_add(v___x_683_, v___x_688_);
lean_dec(v___x_688_);
v___y_673_ = v___y_678_;
v___y_674_ = v___x_689_;
goto v___jp_672_;
}
}
}
v___jp_590_:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_589_, v___y_594_, v___y_593_, v___y_592_);
v___x_596_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set_uint64(v___x_596_, sizeof(void*)*1, v___y_591_);
return v___x_596_;
}
v___jp_597_:
{
uint8_t v___x_603_; 
v___x_603_ = lean_uint64_dec_eq(v___y_598_, v___y_599_);
if (v___x_603_ == 0)
{
v___y_591_ = v___y_602_;
v___y_592_ = v___y_600_;
v___y_593_ = v___y_601_;
v___y_594_ = v___y_598_;
goto v___jp_590_;
}
else
{
uint64_t v___x_604_; 
v___x_604_ = 4096ULL;
v___y_591_ = v___y_602_;
v___y_592_ = v___y_600_;
v___y_593_ = v___y_601_;
v___y_594_ = v___x_604_;
goto v___jp_590_;
}
}
v___jp_605_:
{
uint64_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_607_ = 4096ULL;
v___x_608_ = lean_unsigned_to_nat(0u);
v___x_609_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_589_, v___x_607_, v___x_608_, v___y_606_);
v___x_610_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set_uint64(v___x_610_, sizeof(void*)*1, v___x_607_);
return v___x_610_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw___boxed(lean_object* v_bytes_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(v_bytes_700_);
lean_dec_ref(v_bytes_700_);
return v_res_701_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_rv2pancake_Rv2Pancake_Spec_RiscvSem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_rv2pancake_Rv2Pancake_Spec_ElfLoader(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
