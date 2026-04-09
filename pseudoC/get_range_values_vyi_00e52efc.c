// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_range_values___vyi
// Entry Point: 00e52efc
// Size: 120 bytes
// Signature: undefined get_range_values___vyi(void)


undefined  [16] get_range_values___vyi(undefined param_1 [16])

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iVar9;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  
  auVar5._8_4_ = 0x5556;
  auVar5._0_8_ = 0x555600005556;
  auVar5._12_4_ = 0x5556;
  iVar9 = param_1._0_4_ * 0x5556 >> 0x10;
  iVar12 = param_1._4_4_ * 0x5556 >> 0x10;
  iVar13 = param_1._8_4_ * 0x5556 >> 0x10;
  iVar14 = param_1._12_4_ * 0x5556 >> 0x10;
  auVar15 = NEON_cmeq(param_1,0,2);
  iVar1 = param_1._0_4_ + iVar9 * -3;
  iVar2 = param_1._4_4_ + iVar12 * -3;
  iVar3 = param_1._8_4_ + iVar13 * -3;
  iVar4 = param_1._12_4_ + iVar14 * -3;
  auVar7._8_4_ = 5;
  auVar7._0_8_ = 0x500000005;
  auVar7._12_4_ = 5;
  auVar11._0_4_ = iVar1 * -2 + 5;
  auVar11._4_4_ = iVar2 * -2 + 5;
  auVar11._8_4_ = iVar3 * -2 + 5;
  auVar11._12_4_ = iVar4 * -2 + 5;
  auVar6._8_4_ = 2;
  auVar6._0_8_ = 0x200000002;
  auVar6._12_4_ = 2;
  auVar10 = NEON_smax(auVar6,auVar11,4);
  auVar8._8_4_ = 2;
  auVar8._0_8_ = 0x200000002;
  auVar8._12_4_ = 2;
  auVar11 = NEON_bit(auVar10,auVar8,auVar15,1);
  auVar16._8_4_ = 3;
  auVar16._0_8_ = 0x300000003;
  auVar16._12_4_ = 3;
  auVar15._8_4_ = 0x8001;
  auVar15._0_8_ = 0x800100008001;
  auVar15._12_4_ = 0x8001;
  auVar10 = NEON_cmeq(auVar11,auVar16,4);
  auVar6 = NEON_bif(auVar5,auVar15,auVar10,1);
  auVar17._8_4_ = 0x3334;
  auVar17._0_8_ = 0x333400003334;
  auVar17._12_4_ = 0x3334;
  auVar8 = NEON_cmeq(auVar11,auVar7,4);
  auVar10._4_4_ = iVar2 + iVar12 + -1;
  auVar10._0_4_ = iVar1 + iVar9 + -1;
  auVar10._8_4_ = iVar3 + iVar13 + -1;
  auVar10._12_4_ = iVar4 + iVar14 + -1;
  auVar10 = NEON_smax(auVar10,ZEXT816(0),4);
  NEON_bit(auVar6,auVar17,auVar8,1);
  NEON_ushl(auVar11,auVar10,4);
  return auVar11;
}


