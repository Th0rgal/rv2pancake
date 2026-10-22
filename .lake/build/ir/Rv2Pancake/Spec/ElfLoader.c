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
LEAN_EXPORT uint32_t lp_rv2pancake_Rv2Pancake_Spec_readU32LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readU32LE___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_signExtend32(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_signExtend32___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word(uint64_t, uint32_t);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_isElfMagic___boxed(lean_object*);
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_readU64LE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readU64LE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word(uint64_t v_pc_52_, uint32_t v_raw_53_){
_start:
{
uint32_t v___x_54_; uint32_t v_opcode_55_; uint32_t v___x_56_; uint32_t v___x_57_; uint32_t v___x_58_; uint32_t v___x_59_; lean_object* v_rd_60_; lean_object* v___x_61_; uint32_t v___x_62_; uint32_t v___x_63_; uint32_t v_funct3_64_; uint32_t v___x_65_; uint32_t v___x_66_; uint32_t v___x_67_; lean_object* v_rs1_68_; uint32_t v___x_69_; uint32_t v___x_70_; uint32_t v___x_71_; uint8_t v___x_72_; 
v___x_54_ = 127;
v_opcode_55_ = lean_uint32_land(v_raw_53_, v___x_54_);
v___x_56_ = 7;
v___x_57_ = lean_uint32_shift_right(v_raw_53_, v___x_56_);
v___x_58_ = 31;
v___x_59_ = lean_uint32_land(v___x_57_, v___x_58_);
v_rd_60_ = lean_uint32_to_nat(v___x_59_);
v___x_61_ = lean_unsigned_to_nat(12u);
v___x_62_ = 12;
v___x_63_ = lean_uint32_shift_right(v_raw_53_, v___x_62_);
v_funct3_64_ = lean_uint32_land(v___x_63_, v___x_56_);
v___x_65_ = 15;
v___x_66_ = lean_uint32_shift_right(v_raw_53_, v___x_65_);
v___x_67_ = lean_uint32_land(v___x_66_, v___x_58_);
v_rs1_68_ = lean_uint32_to_nat(v___x_67_);
v___x_69_ = 20;
v___x_70_ = lean_uint32_shift_right(v_raw_53_, v___x_69_);
v___x_71_ = 19;
v___x_72_ = lean_uint32_dec_eq(v_opcode_55_, v___x_71_);
if (v___x_72_ == 0)
{
uint32_t v___x_73_; lean_object* v_rs2_74_; uint32_t v___x_75_; uint32_t v___x_76_; uint32_t v_funct7_77_; uint32_t v___x_78_; uint8_t v___x_79_; 
v___x_73_ = lean_uint32_land(v___x_70_, v___x_58_);
v_rs2_74_ = lean_uint32_to_nat(v___x_73_);
v___x_75_ = 25;
v___x_76_ = lean_uint32_shift_right(v_raw_53_, v___x_75_);
v_funct7_77_ = lean_uint32_land(v___x_76_, v___x_54_);
v___x_78_ = 51;
v___x_79_ = lean_uint32_dec_eq(v_opcode_55_, v___x_78_);
if (v___x_79_ == 0)
{
uint32_t v___x_80_; uint8_t v___x_81_; 
v___x_80_ = 55;
v___x_81_ = lean_uint32_dec_eq(v_opcode_55_, v___x_80_);
if (v___x_81_ == 0)
{
uint32_t v___x_82_; uint8_t v___x_83_; 
v___x_82_ = 23;
v___x_83_ = lean_uint32_dec_eq(v_opcode_55_, v___x_82_);
if (v___x_83_ == 0)
{
uint32_t v___x_84_; uint8_t v___x_85_; 
v___x_84_ = 3;
v___x_85_ = lean_uint32_dec_eq(v_opcode_55_, v___x_84_);
if (v___x_85_ == 0)
{
uint32_t v___x_86_; uint8_t v___x_87_; 
v___x_86_ = 35;
v___x_87_ = lean_uint32_dec_eq(v_opcode_55_, v___x_86_);
if (v___x_87_ == 0)
{
uint32_t v___x_88_; uint8_t v___x_89_; 
v___x_88_ = 99;
v___x_89_ = lean_uint32_dec_eq(v_opcode_55_, v___x_88_);
if (v___x_89_ == 0)
{
uint32_t v___x_90_; uint8_t v___x_91_; 
lean_dec(v_rs2_74_);
v___x_90_ = 111;
v___x_91_ = lean_uint32_dec_eq(v_opcode_55_, v___x_90_);
if (v___x_91_ == 0)
{
uint32_t v___x_92_; uint8_t v___x_93_; 
v___x_92_ = 103;
v___x_93_ = lean_uint32_dec_eq(v_opcode_55_, v___x_92_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
lean_dec(v_rs1_68_);
lean_dec(v_rd_60_);
v___x_94_ = lean_box(9);
return v___x_94_;
}
else
{
uint32_t v___x_95_; uint32_t v___x_96_; uint64_t v_immI_97_; lean_object* v___x_98_; 
v___x_95_ = 4095;
v___x_96_ = lean_uint32_land(v___x_70_, v___x_95_);
v_immI_97_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_96_, v___x_61_);
v___x_98_ = lean_alloc_ctor(8, 2, 8);
lean_ctor_set(v___x_98_, 0, v_rd_60_);
lean_ctor_set(v___x_98_, 1, v_rs1_68_);
lean_ctor_set_uint64(v___x_98_, sizeof(void*)*2, v_immI_97_);
return v___x_98_;
}
}
else
{
uint32_t v___x_99_; uint32_t v___x_100_; uint32_t v___x_101_; uint32_t v_j20_102_; uint32_t v___x_103_; uint32_t v___x_104_; uint32_t v_j19__12_105_; uint32_t v___x_106_; uint32_t v___x_107_; uint32_t v_j11_108_; lean_object* v___x_109_; uint32_t v___x_110_; uint32_t v___x_111_; uint32_t v___x_112_; uint32_t v___x_113_; uint32_t v_j10__1_114_; uint32_t v___x_115_; uint32_t v___x_116_; uint32_t v___x_117_; uint64_t v_off_118_; uint64_t v___x_119_; lean_object* v___x_120_; 
lean_dec(v_rs1_68_);
v___x_99_ = lean_uint32_shift_right(v_raw_53_, v___x_58_);
v___x_100_ = 1;
v___x_101_ = lean_uint32_land(v___x_99_, v___x_100_);
v_j20_102_ = lean_uint32_shift_left(v___x_101_, v___x_69_);
v___x_103_ = 255;
v___x_104_ = lean_uint32_land(v___x_63_, v___x_103_);
v_j19__12_105_ = lean_uint32_shift_left(v___x_104_, v___x_62_);
v___x_106_ = lean_uint32_land(v___x_70_, v___x_100_);
v___x_107_ = 11;
v_j11_108_ = lean_uint32_shift_left(v___x_106_, v___x_107_);
v___x_109_ = lean_unsigned_to_nat(21u);
v___x_110_ = 21;
v___x_111_ = lean_uint32_shift_right(v_raw_53_, v___x_110_);
v___x_112_ = 1023;
v___x_113_ = lean_uint32_land(v___x_111_, v___x_112_);
v_j10__1_114_ = lean_uint32_shift_left(v___x_113_, v___x_100_);
v___x_115_ = lean_uint32_lor(v_j20_102_, v_j19__12_105_);
v___x_116_ = lean_uint32_lor(v___x_115_, v_j11_108_);
v___x_117_ = lean_uint32_lor(v___x_116_, v_j10__1_114_);
v_off_118_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_117_, v___x_109_);
v___x_119_ = lean_uint64_add(v_pc_52_, v_off_118_);
v___x_120_ = lean_alloc_ctor(7, 1, 8);
lean_ctor_set(v___x_120_, 0, v_rd_60_);
lean_ctor_set_uint64(v___x_120_, sizeof(void*)*1, v___x_119_);
return v___x_120_;
}
}
else
{
uint32_t v___x_121_; uint32_t v___x_122_; uint32_t v___x_123_; uint32_t v_b12_124_; uint32_t v___x_125_; uint32_t v___x_126_; uint32_t v_b11_127_; uint32_t v___x_128_; uint32_t v___x_129_; uint32_t v___x_130_; uint32_t v_b10__5_131_; uint32_t v___x_132_; uint32_t v___x_133_; uint32_t v___x_134_; uint32_t v_b4__1_135_; uint32_t v___x_136_; uint32_t v___x_137_; uint32_t v___x_138_; lean_object* v___x_139_; uint64_t v_off_140_; uint8_t v___y_142_; uint32_t v___x_145_; uint8_t v___x_146_; 
lean_dec(v_rd_60_);
v___x_121_ = lean_uint32_shift_right(v_raw_53_, v___x_58_);
v___x_122_ = 1;
v___x_123_ = lean_uint32_land(v___x_121_, v___x_122_);
v_b12_124_ = lean_uint32_shift_left(v___x_123_, v___x_62_);
v___x_125_ = lean_uint32_land(v___x_57_, v___x_122_);
v___x_126_ = 11;
v_b11_127_ = lean_uint32_shift_left(v___x_125_, v___x_126_);
v___x_128_ = 63;
v___x_129_ = lean_uint32_land(v___x_76_, v___x_128_);
v___x_130_ = 5;
v_b10__5_131_ = lean_uint32_shift_left(v___x_129_, v___x_130_);
v___x_132_ = 8;
v___x_133_ = lean_uint32_shift_right(v_raw_53_, v___x_132_);
v___x_134_ = lean_uint32_land(v___x_133_, v___x_65_);
v_b4__1_135_ = lean_uint32_shift_left(v___x_134_, v___x_122_);
v___x_136_ = lean_uint32_lor(v_b12_124_, v_b11_127_);
v___x_137_ = lean_uint32_lor(v___x_136_, v_b10__5_131_);
v___x_138_ = lean_uint32_lor(v___x_137_, v_b4__1_135_);
v___x_139_ = lean_unsigned_to_nat(13u);
v_off_140_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_138_, v___x_139_);
v___x_145_ = 0;
v___x_146_ = lean_uint32_dec_eq(v_funct3_64_, v___x_145_);
if (v___x_146_ == 0)
{
uint8_t v___x_147_; 
v___x_147_ = lean_uint32_dec_eq(v_funct3_64_, v___x_122_);
if (v___x_147_ == 0)
{
uint32_t v___x_148_; uint8_t v___x_149_; 
v___x_148_ = 6;
v___x_149_ = lean_uint32_dec_eq(v_funct3_64_, v___x_148_);
if (v___x_149_ == 0)
{
uint8_t v___x_150_; 
v___x_150_ = 3;
v___y_142_ = v___x_150_;
goto v___jp_141_;
}
else
{
uint8_t v___x_151_; 
v___x_151_ = 2;
v___y_142_ = v___x_151_;
goto v___jp_141_;
}
}
else
{
uint8_t v___x_152_; 
v___x_152_ = 1;
v___y_142_ = v___x_152_;
goto v___jp_141_;
}
}
else
{
uint8_t v___x_153_; 
v___x_153_ = 0;
v___y_142_ = v___x_153_;
goto v___jp_141_;
}
v___jp_141_:
{
uint64_t v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_uint64_add(v_pc_52_, v_off_140_);
v___x_144_ = lean_alloc_ctor(6, 2, 9);
lean_ctor_set(v___x_144_, 0, v_rs1_68_);
lean_ctor_set(v___x_144_, 1, v_rs2_74_);
lean_ctor_set_uint8(v___x_144_, sizeof(void*)*2 + 8, v___y_142_);
lean_ctor_set_uint64(v___x_144_, sizeof(void*)*2, v___x_143_);
return v___x_144_;
}
}
}
else
{
uint32_t v___x_154_; uint32_t v___x_155_; uint32_t v_immSRaw_156_; uint64_t v_immS_157_; lean_object* v___x_158_; 
lean_dec(v_rd_60_);
v___x_154_ = 5;
v___x_155_ = lean_uint32_shift_left(v_funct7_77_, v___x_154_);
v_immSRaw_156_ = lean_uint32_lor(v___x_155_, v___x_59_);
v_immS_157_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v_immSRaw_156_, v___x_61_);
v___x_158_ = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(v___x_158_, 0, v_rs1_68_);
lean_ctor_set(v___x_158_, 1, v_rs2_74_);
lean_ctor_set_uint64(v___x_158_, sizeof(void*)*2, v_immS_157_);
return v___x_158_;
}
}
else
{
uint32_t v___x_159_; uint32_t v___x_160_; uint64_t v_immI_161_; lean_object* v___x_162_; 
lean_dec(v_rs2_74_);
v___x_159_ = 4095;
v___x_160_ = lean_uint32_land(v___x_70_, v___x_159_);
v_immI_161_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_160_, v___x_61_);
v___x_162_ = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(v___x_162_, 0, v_rd_60_);
lean_ctor_set(v___x_162_, 1, v_rs1_68_);
lean_ctor_set_uint64(v___x_162_, sizeof(void*)*2, v_immI_161_);
return v___x_162_;
}
}
else
{
uint32_t v___x_163_; uint32_t v___x_164_; lean_object* v___x_165_; uint64_t v_imm20_166_; lean_object* v___x_167_; 
lean_dec(v_rs2_74_);
lean_dec(v_rs1_68_);
v___x_163_ = 4294963200;
v___x_164_ = lean_uint32_land(v_raw_53_, v___x_163_);
v___x_165_ = lean_unsigned_to_nat(32u);
v_imm20_166_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_164_, v___x_165_);
v___x_167_ = lean_alloc_ctor(3, 1, 8);
lean_ctor_set(v___x_167_, 0, v_rd_60_);
lean_ctor_set_uint64(v___x_167_, sizeof(void*)*1, v_imm20_166_);
return v___x_167_;
}
}
else
{
uint32_t v___x_168_; uint32_t v___x_169_; lean_object* v___x_170_; uint64_t v_imm20_171_; lean_object* v___x_172_; 
lean_dec(v_rs2_74_);
lean_dec(v_rs1_68_);
v___x_168_ = 4294963200;
v___x_169_ = lean_uint32_land(v_raw_53_, v___x_168_);
v___x_170_ = lean_unsigned_to_nat(32u);
v_imm20_171_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_169_, v___x_170_);
v___x_172_ = lean_alloc_ctor(2, 1, 8);
lean_ctor_set(v___x_172_, 0, v_rd_60_);
lean_ctor_set_uint64(v___x_172_, sizeof(void*)*1, v_imm20_171_);
return v___x_172_;
}
}
else
{
uint32_t v___x_173_; uint8_t v___x_174_; 
v___x_173_ = 0;
v___x_174_ = lean_uint32_dec_eq(v_funct3_64_, v___x_173_);
if (v___x_174_ == 0)
{
uint8_t v___x_175_; 
v___x_175_ = lean_uint32_dec_eq(v_funct3_64_, v___x_56_);
if (v___x_175_ == 0)
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 6;
v___x_177_ = lean_uint32_dec_eq(v_funct3_64_, v___x_176_);
if (v___x_177_ == 0)
{
uint32_t v___x_178_; uint8_t v___x_179_; 
v___x_178_ = 4;
v___x_179_ = lean_uint32_dec_eq(v_funct3_64_, v___x_178_);
if (v___x_179_ == 0)
{
uint32_t v___x_180_; uint8_t v___x_181_; 
v___x_180_ = 1;
v___x_181_ = lean_uint32_dec_eq(v_funct3_64_, v___x_180_);
if (v___x_181_ == 0)
{
uint32_t v___x_182_; uint8_t v___x_183_; 
v___x_182_ = 5;
v___x_183_ = lean_uint32_dec_eq(v_funct3_64_, v___x_182_);
if (v___x_183_ == 0)
{
uint32_t v___x_184_; uint8_t v___x_185_; 
v___x_184_ = 3;
v___x_185_ = lean_uint32_dec_eq(v_funct3_64_, v___x_184_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; lean_object* v___x_187_; 
v___x_186_ = 0;
v___x_187_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_187_, 0, v_rd_60_);
lean_ctor_set(v___x_187_, 1, v_rs1_68_);
lean_ctor_set(v___x_187_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_187_, sizeof(void*)*3, v___x_186_);
return v___x_187_;
}
else
{
uint8_t v___x_188_; lean_object* v___x_189_; 
v___x_188_ = 9;
v___x_189_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_189_, 0, v_rd_60_);
lean_ctor_set(v___x_189_, 1, v_rs1_68_);
lean_ctor_set(v___x_189_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*3, v___x_188_);
return v___x_189_;
}
}
else
{
uint8_t v___x_190_; lean_object* v___x_191_; 
v___x_190_ = 6;
v___x_191_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_191_, 0, v_rd_60_);
lean_ctor_set(v___x_191_, 1, v_rs1_68_);
lean_ctor_set(v___x_191_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_191_, sizeof(void*)*3, v___x_190_);
return v___x_191_;
}
}
else
{
uint8_t v___x_192_; lean_object* v___x_193_; 
v___x_192_ = 5;
v___x_193_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_193_, 0, v_rd_60_);
lean_ctor_set(v___x_193_, 1, v_rs1_68_);
lean_ctor_set(v___x_193_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*3, v___x_192_);
return v___x_193_;
}
}
else
{
uint8_t v___x_194_; lean_object* v___x_195_; 
v___x_194_ = 4;
v___x_195_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_195_, 0, v_rd_60_);
lean_ctor_set(v___x_195_, 1, v_rs1_68_);
lean_ctor_set(v___x_195_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_195_, sizeof(void*)*3, v___x_194_);
return v___x_195_;
}
}
else
{
uint8_t v___x_196_; lean_object* v___x_197_; 
v___x_196_ = 3;
v___x_197_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_197_, 0, v_rd_60_);
lean_ctor_set(v___x_197_, 1, v_rs1_68_);
lean_ctor_set(v___x_197_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_197_, sizeof(void*)*3, v___x_196_);
return v___x_197_;
}
}
else
{
uint8_t v___x_198_; lean_object* v___x_199_; 
v___x_198_ = 2;
v___x_199_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_199_, 0, v_rd_60_);
lean_ctor_set(v___x_199_, 1, v_rs1_68_);
lean_ctor_set(v___x_199_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_199_, sizeof(void*)*3, v___x_198_);
return v___x_199_;
}
}
else
{
uint32_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 32;
v___x_201_ = lean_uint32_dec_eq(v_funct7_77_, v___x_200_);
if (v___x_201_ == 0)
{
uint8_t v___x_202_; lean_object* v___x_203_; 
v___x_202_ = 0;
v___x_203_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_203_, 0, v_rd_60_);
lean_ctor_set(v___x_203_, 1, v_rs1_68_);
lean_ctor_set(v___x_203_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_203_, sizeof(void*)*3, v___x_202_);
return v___x_203_;
}
else
{
uint8_t v___x_204_; lean_object* v___x_205_; 
v___x_204_ = 1;
v___x_205_ = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(v___x_205_, 0, v_rd_60_);
lean_ctor_set(v___x_205_, 1, v_rs1_68_);
lean_ctor_set(v___x_205_, 2, v_rs2_74_);
lean_ctor_set_uint8(v___x_205_, sizeof(void*)*3, v___x_204_);
return v___x_205_;
}
}
}
}
else
{
uint32_t v___x_206_; uint32_t v___x_207_; uint64_t v_immI_208_; uint32_t v___x_209_; uint8_t v___x_210_; 
v___x_206_ = 4095;
v___x_207_ = lean_uint32_land(v___x_70_, v___x_206_);
v_immI_208_ = lp_rv2pancake_Rv2Pancake_Spec_signExtend32(v___x_207_, v___x_61_);
v___x_209_ = 0;
v___x_210_ = lean_uint32_dec_eq(v_funct3_64_, v___x_209_);
if (v___x_210_ == 0)
{
uint8_t v___x_211_; 
v___x_211_ = lean_uint32_dec_eq(v_funct3_64_, v___x_56_);
if (v___x_211_ == 0)
{
uint32_t v___x_212_; uint8_t v___x_213_; 
v___x_212_ = 6;
v___x_213_ = lean_uint32_dec_eq(v_funct3_64_, v___x_212_);
if (v___x_213_ == 0)
{
uint32_t v___x_214_; uint8_t v___x_215_; 
v___x_214_ = 4;
v___x_215_ = lean_uint32_dec_eq(v_funct3_64_, v___x_214_);
if (v___x_215_ == 0)
{
uint32_t v___x_216_; uint8_t v___x_217_; 
v___x_216_ = 3;
v___x_217_ = lean_uint32_dec_eq(v_funct3_64_, v___x_216_);
if (v___x_217_ == 0)
{
uint32_t v___x_218_; uint32_t v___x_219_; uint64_t v_shamt_220_; uint32_t v___x_221_; uint8_t v___x_222_; 
v___x_218_ = 63;
v___x_219_ = lean_uint32_land(v___x_70_, v___x_218_);
v_shamt_220_ = lean_uint32_to_uint64(v___x_219_);
v___x_221_ = 1;
v___x_222_ = lean_uint32_dec_eq(v_funct3_64_, v___x_221_);
if (v___x_222_ == 0)
{
uint32_t v___x_223_; uint8_t v___x_224_; 
v___x_223_ = 5;
v___x_224_ = lean_uint32_dec_eq(v_funct3_64_, v___x_223_);
if (v___x_224_ == 0)
{
uint8_t v___x_225_; lean_object* v___x_226_; 
v___x_225_ = 0;
v___x_226_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_226_, 0, v_rd_60_);
lean_ctor_set(v___x_226_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*2 + 8, v___x_225_);
lean_ctor_set_uint64(v___x_226_, sizeof(void*)*2, v_immI_208_);
return v___x_226_;
}
else
{
uint8_t v___x_227_; lean_object* v___x_228_; 
v___x_227_ = 6;
v___x_228_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_228_, 0, v_rd_60_);
lean_ctor_set(v___x_228_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_228_, sizeof(void*)*2 + 8, v___x_227_);
lean_ctor_set_uint64(v___x_228_, sizeof(void*)*2, v_shamt_220_);
return v___x_228_;
}
}
else
{
uint8_t v___x_229_; lean_object* v___x_230_; 
v___x_229_ = 5;
v___x_230_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_230_, 0, v_rd_60_);
lean_ctor_set(v___x_230_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*2 + 8, v___x_229_);
lean_ctor_set_uint64(v___x_230_, sizeof(void*)*2, v_shamt_220_);
return v___x_230_;
}
}
else
{
uint8_t v___x_231_; lean_object* v___x_232_; 
v___x_231_ = 9;
v___x_232_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_232_, 0, v_rd_60_);
lean_ctor_set(v___x_232_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_232_, sizeof(void*)*2 + 8, v___x_231_);
lean_ctor_set_uint64(v___x_232_, sizeof(void*)*2, v_immI_208_);
return v___x_232_;
}
}
else
{
uint8_t v___x_233_; lean_object* v___x_234_; 
v___x_233_ = 4;
v___x_234_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_234_, 0, v_rd_60_);
lean_ctor_set(v___x_234_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*2 + 8, v___x_233_);
lean_ctor_set_uint64(v___x_234_, sizeof(void*)*2, v_immI_208_);
return v___x_234_;
}
}
else
{
uint8_t v___x_235_; lean_object* v___x_236_; 
v___x_235_ = 3;
v___x_236_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_236_, 0, v_rd_60_);
lean_ctor_set(v___x_236_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_236_, sizeof(void*)*2 + 8, v___x_235_);
lean_ctor_set_uint64(v___x_236_, sizeof(void*)*2, v_immI_208_);
return v___x_236_;
}
}
else
{
uint8_t v___x_237_; lean_object* v___x_238_; 
v___x_237_ = 2;
v___x_238_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_238_, 0, v_rd_60_);
lean_ctor_set(v___x_238_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*2 + 8, v___x_237_);
lean_ctor_set_uint64(v___x_238_, sizeof(void*)*2, v_immI_208_);
return v___x_238_;
}
}
else
{
uint8_t v___x_239_; lean_object* v___x_240_; 
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(0, 2, 9);
lean_ctor_set(v___x_240_, 0, v_rd_60_);
lean_ctor_set(v___x_240_, 1, v_rs1_68_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*2 + 8, v___x_239_);
lean_ctor_set_uint64(v___x_240_, sizeof(void*)*2, v_immI_208_);
return v___x_240_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word___boxed(lean_object* v_pc_241_, lean_object* v_raw_242_){
_start:
{
uint64_t v_pc_boxed_243_; uint32_t v_raw_boxed_244_; lean_object* v_res_245_; 
v_pc_boxed_243_ = lean_unbox_uint64(v_pc_241_);
lean_dec_ref(v_pc_241_);
v_raw_boxed_244_ = lean_unbox_uint32(v_raw_242_);
lean_dec(v_raw_242_);
v_res_245_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word(v_pc_boxed_243_, v_raw_boxed_244_);
return v_res_245_;
}
}
LEAN_EXPORT uint8_t lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(lean_object* v_bytes_246_){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_247_ = lean_unsigned_to_nat(64u);
v___x_248_ = lean_byte_array_size(v_bytes_246_);
v___x_249_ = lean_nat_dec_le(v___x_247_, v___x_248_);
if (v___x_249_ == 0)
{
return v___x_249_;
}
else
{
lean_object* v___x_250_; uint8_t v___x_251_; uint8_t v___x_252_; uint8_t v___x_253_; 
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = lean_byte_array_get(v_bytes_246_, v___x_250_);
v___x_252_ = 127;
v___x_253_ = lean_uint8_dec_eq(v___x_251_, v___x_252_);
if (v___x_253_ == 0)
{
return v___x_253_;
}
else
{
lean_object* v___x_254_; uint8_t v___x_255_; uint8_t v___x_256_; uint8_t v___x_257_; 
v___x_254_ = lean_unsigned_to_nat(1u);
v___x_255_ = lean_byte_array_get(v_bytes_246_, v___x_254_);
v___x_256_ = 69;
v___x_257_ = lean_uint8_dec_eq(v___x_255_, v___x_256_);
if (v___x_257_ == 0)
{
return v___x_257_;
}
else
{
lean_object* v___x_258_; uint8_t v___x_259_; uint8_t v___x_260_; uint8_t v___x_261_; 
v___x_258_ = lean_unsigned_to_nat(2u);
v___x_259_ = lean_byte_array_get(v_bytes_246_, v___x_258_);
v___x_260_ = 76;
v___x_261_ = lean_uint8_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
return v___x_261_;
}
else
{
lean_object* v___x_262_; uint8_t v___x_263_; uint8_t v___x_264_; uint8_t v___x_265_; 
v___x_262_ = lean_unsigned_to_nat(3u);
v___x_263_ = lean_byte_array_get(v_bytes_246_, v___x_262_);
v___x_264_ = 70;
v___x_265_ = lean_uint8_dec_eq(v___x_263_, v___x_264_);
return v___x_265_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_isElfMagic___boxed(lean_object* v_bytes_266_){
_start:
{
uint8_t v_res_267_; lean_object* v_r_268_; 
v_res_267_ = lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(v_bytes_266_);
lean_dec_ref(v_bytes_266_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT uint64_t lp_rv2pancake_Rv2Pancake_Spec_readU64LE(lean_object* v_bytes_269_, lean_object* v_off_270_){
_start:
{
uint32_t v___x_271_; uint64_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; uint32_t v___x_275_; uint64_t v___x_276_; uint64_t v___x_277_; uint64_t v___x_278_; uint64_t v___x_279_; 
v___x_271_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_269_, v_off_270_);
v___x_272_ = lean_uint32_to_uint64(v___x_271_);
v___x_273_ = lean_unsigned_to_nat(4u);
v___x_274_ = lean_nat_add(v_off_270_, v___x_273_);
v___x_275_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_269_, v___x_274_);
lean_dec(v___x_274_);
v___x_276_ = lean_uint32_to_uint64(v___x_275_);
v___x_277_ = 32ULL;
v___x_278_ = lean_uint64_shift_left(v___x_276_, v___x_277_);
v___x_279_ = lean_uint64_lor(v___x_272_, v___x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_readU64LE___boxed(lean_object* v_bytes_280_, lean_object* v_off_281_){
_start:
{
uint64_t v_res_282_; lean_object* v_r_283_; 
v_res_282_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_280_, v_off_281_);
lean_dec(v_off_281_);
lean_dec_ref(v_bytes_280_);
v_r_283_ = lean_box_uint64(v_res_282_);
return v_r_283_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(lean_object* v_bytes_284_, uint64_t v_basePc_285_, lean_object* v_off_286_, lean_object* v_count_287_){
_start:
{
lean_object* v_zero_288_; uint8_t v_isZero_289_; 
v_zero_288_ = lean_unsigned_to_nat(0u);
v_isZero_289_ = lean_nat_dec_eq(v_count_287_, v_zero_288_);
if (v_isZero_289_ == 1)
{
lean_object* v___x_290_; 
v___x_290_ = lean_box(0);
return v___x_290_;
}
else
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_291_ = lean_unsigned_to_nat(3u);
v___x_292_ = lean_nat_add(v_off_286_, v___x_291_);
v___x_293_ = lean_byte_array_size(v_bytes_284_);
v___x_294_ = lean_nat_dec_lt(v___x_292_, v___x_293_);
lean_dec(v___x_292_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; 
v___x_295_ = lean_box(0);
return v___x_295_;
}
else
{
lean_object* v_one_296_; lean_object* v_n_297_; uint32_t v_w_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; uint64_t v___x_303_; uint64_t v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_one_296_ = lean_unsigned_to_nat(1u);
v_n_297_ = lean_nat_sub(v_count_287_, v_one_296_);
v_w_298_ = lp_rv2pancake_Rv2Pancake_Spec_readU32LE(v_bytes_284_, v_off_286_);
v___x_299_ = lp_rv2pancake_Rv2Pancake_Spec_decodeRV64Word(v_basePc_285_, v_w_298_);
v___x_300_ = lean_box_uint64(v_basePc_285_);
v___x_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
lean_ctor_set(v___x_301_, 1, v___x_299_);
v___x_302_ = lean_unsigned_to_nat(4u);
v___x_303_ = 4ULL;
v___x_304_ = lean_uint64_add(v_basePc_285_, v___x_303_);
v___x_305_ = lean_nat_add(v_off_286_, v___x_302_);
v___x_306_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_284_, v___x_304_, v___x_305_, v_n_297_);
lean_dec(v_n_297_);
lean_dec(v___x_305_);
v___x_307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_301_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
return v___x_307_;
}
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice___boxed(lean_object* v_bytes_308_, lean_object* v_basePc_309_, lean_object* v_off_310_, lean_object* v_count_311_){
_start:
{
uint64_t v_basePc_boxed_312_; lean_object* v_res_313_; 
v_basePc_boxed_312_ = lean_unbox_uint64(v_basePc_309_);
lean_dec_ref(v_basePc_309_);
v_res_313_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_308_, v_basePc_boxed_312_, v_off_310_, v_count_311_);
lean_dec(v_count_311_);
lean_dec(v_off_310_);
lean_dec_ref(v_bytes_308_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(lean_object* v_bytes_314_){
_start:
{
lean_object* v___y_316_; lean_object* v___y_317_; uint64_t v___y_318_; uint64_t v___y_319_; lean_object* v___y_323_; lean_object* v___y_324_; uint64_t v___y_325_; uint64_t v___y_326_; uint64_t v___y_327_; lean_object* v___y_331_; uint8_t v___x_336_; 
v___x_336_ = lp_rv2pancake_Rv2Pancake_Spec_isElfMagic(v_bytes_314_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_337_ = lean_unsigned_to_nat(2048u);
v___x_338_ = lean_byte_array_size(v_bytes_314_);
v___x_339_ = lean_unsigned_to_nat(2u);
v___x_340_ = lean_nat_shiftr(v___x_338_, v___x_339_);
v___x_341_ = lean_nat_dec_le(v___x_337_, v___x_340_);
if (v___x_341_ == 0)
{
v___y_331_ = v___x_340_;
goto v___jp_330_;
}
else
{
lean_dec(v___x_340_);
v___y_331_ = v___x_337_;
goto v___jp_330_;
}
}
else
{
lean_object* v___x_342_; uint64_t v_entry_343_; lean_object* v___y_345_; uint64_t v___y_346_; lean_object* v___y_347_; lean_object* v___y_352_; lean_object* v___y_353_; uint64_t v___y_354_; lean_object* v___x_359_; uint64_t v___x_360_; lean_object* v_phoff_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_373_; 
v___x_342_ = lean_unsigned_to_nat(24u);
v_entry_343_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_314_, v___x_342_);
v___x_359_ = lean_unsigned_to_nat(32u);
v___x_360_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_314_, v___x_359_);
v_phoff_361_ = lean_uint64_to_nat(v___x_360_);
v___x_362_ = lean_unsigned_to_nat(56u);
v___x_363_ = lean_nat_add(v_phoff_361_, v___x_362_);
v___x_364_ = lean_byte_array_size(v_bytes_314_);
v___x_365_ = lean_nat_dec_le(v___x_363_, v___x_364_);
lean_dec(v___x_363_);
if (v___x_365_ == 0)
{
lean_object* v___x_379_; 
v___x_379_ = lean_unsigned_to_nat(64u);
v___y_373_ = v___x_379_;
goto v___jp_372_;
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; uint64_t v___x_382_; lean_object* v___x_383_; 
v___x_380_ = lean_unsigned_to_nat(8u);
v___x_381_ = lean_nat_add(v_phoff_361_, v___x_380_);
v___x_382_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_314_, v___x_381_);
lean_dec(v___x_381_);
v___x_383_ = lean_uint64_to_nat(v___x_382_);
v___y_373_ = v___x_383_;
goto v___jp_372_;
}
v___jp_344_:
{
uint64_t v___x_348_; uint8_t v___x_349_; 
v___x_348_ = 0ULL;
v___x_349_ = lean_uint64_dec_eq(v_entry_343_, v___x_348_);
if (v___x_349_ == 0)
{
v___y_323_ = v___y_345_;
v___y_324_ = v___y_347_;
v___y_325_ = v___y_346_;
v___y_326_ = v___x_348_;
v___y_327_ = v_entry_343_;
goto v___jp_322_;
}
else
{
uint64_t v___x_350_; 
v___x_350_ = 4096ULL;
v___y_323_ = v___y_345_;
v___y_324_ = v___y_347_;
v___y_325_ = v___y_346_;
v___y_326_ = v___x_348_;
v___y_327_ = v___x_350_;
goto v___jp_322_;
}
}
v___jp_351_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_355_ = lean_unsigned_to_nat(2048u);
v___x_356_ = lean_unsigned_to_nat(2u);
v___x_357_ = lean_nat_shiftr(v___y_353_, v___x_356_);
lean_dec(v___y_353_);
v___x_358_ = lean_nat_dec_le(v___x_355_, v___x_357_);
if (v___x_358_ == 0)
{
v___y_345_ = v___y_352_;
v___y_346_ = v___y_354_;
v___y_347_ = v___x_357_;
goto v___jp_344_;
}
else
{
lean_dec(v___x_357_);
v___y_345_ = v___y_352_;
v___y_346_ = v___y_354_;
v___y_347_ = v___x_355_;
goto v___jp_344_;
}
}
v___jp_366_:
{
if (v___x_365_ == 0)
{
lean_dec(v_phoff_361_);
v___y_352_ = v___y_367_;
v___y_353_ = v___y_368_;
v___y_354_ = v_entry_343_;
goto v___jp_351_;
}
else
{
lean_object* v___x_369_; lean_object* v___x_370_; uint64_t v___x_371_; 
v___x_369_ = lean_unsigned_to_nat(16u);
v___x_370_ = lean_nat_add(v_phoff_361_, v___x_369_);
lean_dec(v_phoff_361_);
v___x_371_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_314_, v___x_370_);
lean_dec(v___x_370_);
v___y_352_ = v___y_367_;
v___y_353_ = v___y_368_;
v___y_354_ = v___x_371_;
goto v___jp_351_;
}
}
v___jp_372_:
{
if (v___x_365_ == 0)
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_unsigned_to_nat(64u);
v___x_375_ = lean_nat_sub(v___x_364_, v___x_374_);
v___y_367_ = v___y_373_;
v___y_368_ = v___x_375_;
goto v___jp_366_;
}
else
{
lean_object* v___x_376_; uint64_t v___x_377_; lean_object* v___x_378_; 
v___x_376_ = lean_nat_add(v_phoff_361_, v___x_359_);
v___x_377_ = lp_rv2pancake_Rv2Pancake_Spec_readU64LE(v_bytes_314_, v___x_376_);
lean_dec(v___x_376_);
v___x_378_ = lean_uint64_to_nat(v___x_377_);
v___y_367_ = v___y_373_;
v___y_368_ = v___x_378_;
goto v___jp_366_;
}
}
}
v___jp_315_:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_314_, v___y_319_, v___y_316_, v___y_317_);
lean_dec(v___y_317_);
lean_dec(v___y_316_);
v___x_321_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_321_, 0, v___x_320_);
lean_ctor_set_uint64(v___x_321_, sizeof(void*)*1, v___y_318_);
return v___x_321_;
}
v___jp_322_:
{
uint8_t v___x_328_; 
v___x_328_ = lean_uint64_dec_eq(v___y_325_, v___y_326_);
if (v___x_328_ == 0)
{
v___y_316_ = v___y_323_;
v___y_317_ = v___y_324_;
v___y_318_ = v___y_327_;
v___y_319_ = v___y_325_;
goto v___jp_315_;
}
else
{
uint64_t v___x_329_; 
v___x_329_ = 4096ULL;
v___y_316_ = v___y_323_;
v___y_317_ = v___y_324_;
v___y_318_ = v___y_327_;
v___y_319_ = v___x_329_;
goto v___jp_315_;
}
}
v___jp_330_:
{
uint64_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_332_ = 4096ULL;
v___x_333_ = lean_unsigned_to_nat(0u);
v___x_334_ = lp_rv2pancake_Rv2Pancake_Spec_decodeCodeSlice(v_bytes_314_, v___x_332_, v___x_333_, v___y_331_);
lean_dec(v___y_331_);
v___x_335_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set_uint64(v___x_335_, sizeof(void*)*1, v___x_332_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw___boxed(lean_object* v_bytes_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = lp_rv2pancake_Rv2Pancake_Spec_parseElfOrRaw(v_bytes_384_);
lean_dec_ref(v_bytes_384_);
return v_res_385_;
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
