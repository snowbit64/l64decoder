// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fill_range_values___un_3C_s_5B_vyrange_values_5D__3E_un_3C_vyi_3E_
// Entry Point: 00e52d34
// Size: 456 bytes
// Signature: undefined fill_range_values___un_3C_s_5B_vyrange_values_5D__3E_un_3C_vyi_3E_(void)


void fill_range_values___un_3C_s_5B_vyrange_values_5D__3E_un_3C_vyi_3E_
               (undefined param_1 [16],undefined4 *param_2,undefined (*param_3) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  int iVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined auVar9 [16];
  undefined auVar13 [16];
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  auVar6._8_4_ = 0x5556;
  auVar6._0_8_ = 0x555600005556;
  auVar6._12_4_ = 0x5556;
  auVar7 = *param_3;
  iVar14 = auVar7._0_4_ * 0x5556 >> 0x10;
  iVar16 = auVar7._4_4_ * 0x5556 >> 0x10;
  iVar17 = auVar7._8_4_ * 0x5556 >> 0x10;
  iVar18 = auVar7._12_4_ * 0x5556 >> 0x10;
  iVar8 = auVar7._0_4_ + iVar14 * -3;
  iVar10 = auVar7._4_4_ + iVar16 * -3;
  iVar11 = auVar7._8_4_ + iVar17 * -3;
  iVar12 = auVar7._12_4_ + iVar18 * -3;
  auVar5._0_4_ = iVar8 + iVar14 + -1;
  auVar5._4_4_ = iVar10 + iVar16 + -1;
  auVar5._8_4_ = iVar11 + iVar17 + -1;
  auVar5._12_4_ = iVar12 + iVar18 + -1;
  uVar15 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
           (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  auVar5 = NEON_smax(auVar5,ZEXT816(0),4);
  if ((uVar15 & 1) != 0) {
    param_2[8] = auVar5._0_4_;
  }
  auVar9._8_4_ = 5;
  auVar9._0_8_ = 0x500000005;
  auVar9._12_4_ = 5;
  if ((uVar15 >> 1 & 1) == 0) {
    auVar13._0_4_ = iVar8 * -2 + 5;
    auVar13._4_4_ = iVar10 * -2 + 5;
    auVar13._8_4_ = iVar11 * -2 + 5;
    auVar13._12_4_ = iVar12 * -2 + 5;
  }
  else {
    param_2[9] = auVar5._4_4_;
    auVar13._0_4_ = iVar8 * -2 + 5;
    auVar13._4_4_ = iVar10 * -2 + 5;
    auVar13._8_4_ = iVar11 * -2 + 5;
    auVar13._12_4_ = iVar12 * -2 + 5;
  }
  auVar4._8_4_ = 2;
  auVar4._0_8_ = 0x200000002;
  auVar4._12_4_ = 2;
  if ((uVar15 >> 2 & 1) == 0) {
    auVar13 = NEON_smax(auVar4,auVar13,4);
    auVar7 = NEON_cmeq(auVar7,0,2);
  }
  else {
    param_2[10] = auVar5._8_4_;
    auVar13 = NEON_smax(auVar4,auVar13,4);
    auVar7 = NEON_cmeq(auVar7,0,2);
  }
  if ((uVar15 >> 3 & 1) == 0) {
    auVar7 = NEON_bsl(auVar7,auVar4,auVar13,1);
  }
  else {
    param_2[0xb] = auVar5._12_4_;
    auVar7 = NEON_bsl(auVar7,auVar4,auVar13,1);
  }
  if ((uVar15 & 1) != 0) {
    *param_2 = auVar7._0_4_;
  }
  auVar3._8_4_ = 3;
  auVar3._0_8_ = 0x300000003;
  auVar3._12_4_ = 3;
  if ((uVar15 >> 1 & 1) == 0) {
    auVar13 = NEON_cmeq(auVar7,auVar3,4);
  }
  else {
    param_2[1] = auVar7._4_4_;
    auVar13 = NEON_cmeq(auVar7,auVar3,4);
  }
  auVar2._8_4_ = 0x8001;
  auVar2._0_8_ = 0x800100008001;
  auVar2._12_4_ = 0x8001;
  if ((uVar15 >> 2 & 1) == 0) {
    auVar6 = NEON_bif(auVar6,auVar2,auVar13,1);
    auVar9 = NEON_cmeq(auVar7,auVar9,4);
  }
  else {
    param_2[2] = auVar7._8_4_;
    auVar6 = NEON_bif(auVar6,auVar2,auVar13,1);
    auVar9 = NEON_cmeq(auVar7,auVar9,4);
  }
  auVar1._8_4_ = 0x3334;
  auVar1._0_8_ = 0x333400003334;
  auVar1._12_4_ = 0x3334;
  if ((uVar15 >> 3 & 1) == 0) {
    auVar6 = NEON_bit(auVar6,auVar1,auVar9,1);
  }
  else {
    param_2[3] = auVar7._12_4_;
    auVar6 = NEON_bit(auVar6,auVar1,auVar9,1);
  }
  if ((uVar15 & 1) != 0) {
    param_2[4] = auVar6._0_4_;
  }
  if ((uVar15 >> 1 & 1) != 0) {
    param_2[5] = auVar6._4_4_;
  }
  if ((uVar15 >> 2 & 1) != 0) {
    param_2[6] = auVar6._8_4_;
  }
  if ((uVar15 >> 3 & 1) == 0) {
    auVar7 = NEON_ushl(auVar7,auVar5,4);
  }
  else {
    param_2[7] = auVar6._12_4_;
    auVar7 = NEON_ushl(auVar7,auVar5,4);
  }
  if ((uVar15 & 1) != 0) {
    param_2[0xc] = auVar7._0_4_;
  }
  if ((uVar15 >> 1 & 1) != 0) {
    param_2[0xd] = auVar7._4_4_;
  }
  if ((uVar15 >> 2 & 1) != 0) {
    param_2[0xe] = auVar7._8_4_;
  }
  if ((uVar15 >> 3 & 1) == 0) {
    return;
  }
  param_2[0xf] = auVar7._12_4_;
  return;
}


