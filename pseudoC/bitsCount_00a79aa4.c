// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bitsCount
// Entry Point: 00a79aa4
// Size: 184 bytes
// Signature: undefined __cdecl bitsCount(uint param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DDSUtil::bitsCount(unsigned int) */

int DDSUtil::bitsCount(uint param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint5 uVar4;
  undefined auVar5 [16];
  uint5 uVar6;
  undefined auVar7 [16];
  uint5 uVar8;
  undefined auVar9 [16];
  uint5 uVar10;
  undefined auVar11 [16];
  uint5 uVar12;
  undefined auVar13 [16];
  uint5 uVar14;
  undefined auVar15 [16];
  uint5 uVar16;
  undefined auVar17 [16];
  
  auVar5._4_4_ = param_1;
  auVar5._0_4_ = param_1;
  auVar5._8_4_ = param_1;
  auVar5._12_4_ = param_1;
  auVar13 = NEON_ushl(auVar5,_DAT_004c4f80,4);
  auVar7._4_4_ = param_1;
  auVar7._0_4_ = param_1;
  auVar7._8_4_ = param_1;
  auVar7._12_4_ = param_1;
  auVar15 = NEON_ushl(auVar7,_DAT_004c4080,4);
  auVar9._4_4_ = param_1;
  auVar9._0_4_ = param_1;
  auVar9._8_4_ = param_1;
  auVar9._12_4_ = param_1;
  auVar11 = NEON_ushl(auVar9,_DAT_004c3820,4);
  auVar17._4_4_ = param_1;
  auVar17._0_4_ = param_1;
  auVar17._8_4_ = param_1;
  auVar17._12_4_ = param_1;
  auVar17 = NEON_ushl(auVar17,_DAT_004c4510,4);
  auVar1._4_4_ = param_1;
  auVar1._0_4_ = param_1;
  auVar1._8_4_ = param_1;
  auVar1._12_4_ = param_1;
  auVar9 = NEON_ushl(auVar1,_DAT_004c4380,4);
  uVar12 = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
  uVar14 = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
  uVar10 = CONCAT14(auVar11[4],(uint)(auVar11[0] & 1)) & 0x1ffffffff;
  uVar16 = CONCAT14(auVar17[4],(uint)(auVar17[0] & 1)) & 0x1ffffffff;
  auVar2._4_4_ = param_1;
  auVar2._0_4_ = param_1;
  auVar2._8_4_ = param_1;
  auVar2._12_4_ = param_1;
  auVar7 = NEON_ushl(auVar2,_DAT_004c31f0,4);
  uVar8 = CONCAT14(auVar9[4],(uint)(auVar9[0] & 1)) & 0x1ffffffff;
  uVar6 = CONCAT14(auVar7[4],(uint)(auVar7[0] & 1)) & 0x1ffffffff;
  auVar3._4_4_ = param_1;
  auVar3._0_4_ = param_1;
  auVar3._8_4_ = param_1;
  auVar3._12_4_ = param_1;
  auVar5 = NEON_ushl(auVar3,_DAT_004c4c90,4);
  uVar4 = CONCAT14(auVar5[4],(uint)(auVar5[0] & 1)) & 0x1ffffffff;
  return ((int)uVar16 + (int)uVar12 + (int)uVar10 + (int)uVar14 + (int)uVar6 + (int)uVar8 +
          (int)uVar4 +
          (uint)(byte)(uVar16 >> 0x20) + (uint)(byte)(uVar12 >> 0x20) +
          (uint)(byte)(uVar10 >> 0x20) + (uint)(byte)(uVar14 >> 0x20) +
          (uint)(byte)(uVar6 >> 0x20) + (uint)(byte)(uVar8 >> 0x20) + (uint)(byte)(uVar4 >> 0x20) +
          (uint)(auVar17[8] & 1) + (uint)(auVar13[8] & 1) +
          (uint)(auVar11[8] & 1) + (uint)(auVar15[8] & 1) +
          (uint)(auVar7[8] & 1) + (uint)(auVar9[8] & 1) + (uint)(auVar5[8] & 1) +
          (uint)(auVar17[12] & 1) + (uint)(auVar13[12] & 1) +
          (uint)(auVar11[12] & 1) + (uint)(auVar15[12] & 1) +
          (uint)(auVar7[12] & 1) + (uint)(auVar9[12] & 1) + (uint)(auVar5[12] & 1) +
          (param_1 >> 2 & 1) + (param_1 >> 1 & 1) + (param_1 & 1)) - ((int)param_1 >> 0x1f);
}


