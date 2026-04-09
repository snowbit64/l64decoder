// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_info
// Entry Point: 00e4511c
// Size: 44 bytes
// Signature: undefined stb_vorbis_get_info(void)


void stb_vorbis_get_info(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar3 = *(undefined (*) [16])(param_2 + 1);
  iVar1 = param_2[0x2b];
  auVar4 = NEON_ext(auVar3,auVar3,4,1);
  *param_1 = *param_2;
  auVar2._4_4_ = auVar3._12_4_;
  auVar2._0_4_ = auVar3._4_4_;
  auVar2._8_4_ = auVar4._4_4_;
  auVar2._12_4_ = auVar4._12_4_;
  param_1[5] = iVar1 >> 1;
  auVar3 = NEON_ext(auVar4,auVar2,0xc,1);
  *(long *)(param_1 + 3) = auVar3._8_8_;
  *(long *)(param_1 + 1) = auVar3._0_8_;
  return;
}


