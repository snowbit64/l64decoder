// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_levels___vyi
// Entry Point: 00e52f74
// Size: 60 bytes
// Signature: undefined get_levels___vyi(void)


void get_levels___vyi(undefined param_1 [16])

{
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auVar2 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = param_1._0_4_ * 0x5556 >> 0x10;
  iVar9 = param_1._4_4_ * 0x5556 >> 0x10;
  iVar10 = param_1._8_4_ * 0x5556 >> 0x10;
  iVar11 = param_1._12_4_ * 0x5556 >> 0x10;
  iVar1 = param_1._0_4_ + iVar8 * -3;
  iVar3 = param_1._4_4_ + iVar9 * -3;
  iVar4 = param_1._8_4_ + iVar10 * -3;
  iVar5 = param_1._12_4_ + iVar11 * -3;
  auVar6._0_4_ = iVar1 * -2 + 5;
  auVar6._4_4_ = iVar3 * -2 + 5;
  auVar6._8_4_ = iVar4 * -2 + 5;
  auVar6._12_4_ = iVar5 * -2 + 5;
  auVar7._8_4_ = 2;
  auVar7._0_8_ = 0x200000002;
  auVar7._12_4_ = 2;
  auVar7 = NEON_smax(auVar7,auVar6,4);
  auVar2._0_4_ = iVar1 + iVar8;
  auVar2._4_4_ = iVar3 + iVar9;
  auVar2._8_4_ = iVar4 + iVar10;
  auVar2._12_4_ = iVar5 + iVar11;
  NEON_ushl(auVar7,auVar2,4);
  return;
}


