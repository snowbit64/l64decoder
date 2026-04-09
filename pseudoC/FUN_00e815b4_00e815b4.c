// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e815b4
// Entry Point: 00e815b4
// Size: 448 bytes
// Signature: undefined FUN_00e815b4(void)


undefined8
FUN_00e815b4(float param_1,uint *param_2,int param_3,short *param_4,int param_5,int param_6,
            uint param_7)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  undefined (*pauVar7) [16];
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  
  if (0.1 <= param_1 || param_7 != 0) goto LAB_00e8172c;
  uVar1 = param_6 * param_5;
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    psVar6 = param_4;
    uVar8 = uVar2;
    do {
      uVar10 = (uint)*psVar6;
      if ((int)uVar4 <= (int)*psVar6) {
        uVar4 = uVar10;
      }
      if ((int)uVar10 <= (int)uVar3) {
        uVar3 = uVar10;
      }
      uVar4 = uVar4 & 0xffff;
      uVar8 = uVar8 - 1;
      psVar6 = psVar6 + 1;
    } while (uVar8 != 0);
  }
  if (uVar4 == -uVar3 || (int)(uVar4 + uVar3) < 0 != SBORROW4(uVar4,-uVar3)) {
    uVar4 = -uVar3;
  }
  iVar11 = (int)LZCOUNT(uVar1) + (int)LZCOUNT(uVar4) * 2;
  iVar12 = -iVar11;
  uVar4 = 0;
  if (iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
    uVar4 = 0x41 - iVar11;
  }
  if ((int)uVar1 < 1) {
    iVar11 = 0;
  }
  else {
    if (uVar1 < 0x10) {
      uVar5 = 0;
      iVar11 = 0;
    }
    else {
      auVar15._4_4_ = uVar4;
      auVar15._0_4_ = uVar4;
      auVar15._8_4_ = uVar4;
      auVar15._12_4_ = uVar4;
      uVar5 = uVar2 & 0xfffffff0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      pauVar7 = (undefined (*) [16])(param_4 + 8);
      auVar15 = NEON_neg(auVar15,4);
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      uVar8 = uVar5;
      do {
        auVar28 = pauVar7[-1];
        auVar30 = *pauVar7;
        pauVar7 = pauVar7 + 2;
        uVar8 = uVar8 - 0x10;
        auVar31._0_4_ = (int)auVar28._8_2_ * (int)auVar28._8_2_;
        auVar31._4_4_ = (int)auVar28._10_2_ * (int)auVar28._10_2_;
        auVar31._8_4_ = (int)auVar28._12_2_ * (int)auVar28._12_2_;
        auVar31._12_4_ = (int)auVar28._14_2_ * (int)auVar28._14_2_;
        auVar33._0_4_ = (int)auVar28._0_2_ * (int)auVar28._0_2_;
        auVar33._4_4_ = (int)auVar28._2_2_ * (int)auVar28._2_2_;
        auVar33._8_4_ = (int)auVar28._4_2_ * (int)auVar28._4_2_;
        auVar33._12_4_ = (int)auVar28._6_2_ * (int)auVar28._6_2_;
        auVar32._0_4_ = (int)auVar30._8_2_ * (int)auVar30._8_2_;
        auVar32._4_4_ = (int)auVar30._10_2_ * (int)auVar30._10_2_;
        auVar32._8_4_ = (int)auVar30._12_2_ * (int)auVar30._12_2_;
        auVar32._12_4_ = (int)auVar30._14_2_ * (int)auVar30._14_2_;
        auVar29._0_4_ = (int)auVar30._0_2_ * (int)auVar30._0_2_;
        auVar29._4_4_ = (int)auVar30._2_2_ * (int)auVar30._2_2_;
        auVar29._8_4_ = (int)auVar30._4_2_ * (int)auVar30._4_2_;
        auVar29._12_4_ = (int)auVar30._6_2_ * (int)auVar30._6_2_;
        auVar31 = NEON_ushl(auVar31,auVar15,4);
        auVar28 = NEON_ushl(auVar33,auVar15,4);
        auVar33 = NEON_ushl(auVar32,auVar15,4);
        auVar30 = NEON_ushl(auVar29,auVar15,4);
        iVar16 = auVar31._0_4_ + iVar16;
        iVar17 = auVar31._4_4_ + iVar17;
        iVar18 = auVar31._8_4_ + iVar18;
        iVar19 = auVar31._12_4_ + iVar19;
        iVar11 = auVar28._0_4_ + iVar11;
        iVar12 = auVar28._4_4_ + iVar12;
        iVar13 = auVar28._8_4_ + iVar13;
        iVar14 = auVar28._12_4_ + iVar14;
        iVar24 = auVar33._0_4_ + iVar24;
        iVar25 = auVar33._4_4_ + iVar25;
        iVar26 = auVar33._8_4_ + iVar26;
        iVar27 = auVar33._12_4_ + iVar27;
        iVar20 = auVar30._0_4_ + iVar20;
        iVar21 = auVar30._4_4_ + iVar21;
        iVar22 = auVar30._8_4_ + iVar22;
        iVar23 = auVar30._12_4_ + iVar23;
      } while (uVar8 != 0);
      iVar11 = iVar20 + iVar11 + iVar24 + iVar16 + iVar21 + iVar12 + iVar25 + iVar17 +
               iVar22 + iVar13 + iVar26 + iVar18 + iVar23 + iVar14 + iVar27 + iVar19;
      if (uVar5 == uVar2) goto LAB_00e81704;
    }
    lVar9 = uVar2 - uVar5;
    psVar6 = param_4 + uVar5;
    do {
      lVar9 = lVar9 + -1;
      iVar11 = ((uint)((int)*psVar6 * (int)*psVar6) >> (ulong)(uVar4 & 0x1f)) + iVar11;
      psVar6 = psVar6 + 1;
    } while (lVar9 != 0);
  }
LAB_00e81704:
  iVar12 = 0;
  if (uVar1 != 0) {
    iVar12 = iVar11 / (int)uVar1;
  }
  param_7 = (uint)((float)(iVar12 << (ulong)(uVar4 & 0x1f)) * 316.23 <= (float)param_3);
LAB_00e8172c:
  if (param_7 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    if (9 < (int)uVar1) {
      if (uVar1 < 0x1e) {
        return 1;
      }
      *param_2 = 10;
      return 0;
    }
  }
  return 0;
}


