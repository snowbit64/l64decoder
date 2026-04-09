// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_inner_prod_aligned_scale
// Entry Point: 00e88c80
// Size: 232 bytes
// Signature: undefined silk_inner_prod_aligned_scale(void)


int silk_inner_prod_aligned_scale(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined (*pauVar5) [16];
  short *psVar6;
  ulong uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined auVar13 [16];
  int iVar14;
  int iVar15;
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
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar2 = (ulong)param_4;
  if (param_4 < 0x10) {
    uVar4 = 0;
    iVar9 = 0;
  }
  else {
    auVar13._4_4_ = param_3;
    auVar13._0_4_ = param_3;
    auVar13._8_4_ = param_3;
    auVar13._12_4_ = param_3;
    uVar4 = uVar2 & 0xfffffff0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    pauVar1 = (undefined (*) [16])(param_1 + 0x10);
    auVar13 = NEON_neg(auVar13,4);
    pauVar5 = (undefined (*) [16])(param_2 + 0x10);
    iVar14 = 0;
    iVar15 = 0;
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
    uVar7 = uVar4;
    do {
      auVar29 = pauVar1[-1];
      auVar27 = *pauVar1;
      pauVar1 = pauVar1 + 2;
      uVar7 = uVar7 - 0x10;
      auVar31 = pauVar5[-1];
      auVar32 = *pauVar5;
      pauVar5 = pauVar5 + 2;
      auVar26._0_4_ = (int)auVar31._0_2_ * (int)auVar29._0_2_;
      auVar26._4_4_ = (int)auVar31._2_2_ * (int)auVar29._2_2_;
      auVar26._8_4_ = (int)auVar31._4_2_ * (int)auVar29._4_2_;
      auVar26._12_4_ = (int)auVar31._6_2_ * (int)auVar29._6_2_;
      auVar28._0_4_ = (int)auVar32._8_2_ * (int)auVar27._8_2_;
      auVar28._4_4_ = (int)auVar32._10_2_ * (int)auVar27._10_2_;
      auVar28._8_4_ = (int)auVar32._12_2_ * (int)auVar27._12_2_;
      auVar28._12_4_ = (int)auVar32._14_2_ * (int)auVar27._14_2_;
      auVar30._0_4_ = (int)auVar32._0_2_ * (int)auVar27._0_2_;
      auVar30._4_4_ = (int)auVar32._2_2_ * (int)auVar27._2_2_;
      auVar30._8_4_ = (int)auVar32._4_2_ * (int)auVar27._4_2_;
      auVar30._12_4_ = (int)auVar32._6_2_ * (int)auVar27._6_2_;
      auVar27._4_4_ = (int)auVar31._10_2_ * (int)auVar29._10_2_;
      auVar27._0_4_ = (int)auVar31._8_2_ * (int)auVar29._8_2_;
      auVar27._8_4_ = (int)auVar31._12_2_ * (int)auVar29._12_2_;
      auVar27._12_4_ = (int)auVar31._14_2_ * (int)auVar29._14_2_;
      auVar32 = NEON_sshl(auVar27,auVar13,4);
      auVar27 = NEON_sshl(auVar26,auVar13,4);
      auVar29 = NEON_sshl(auVar28,auVar13,4);
      auVar31 = NEON_sshl(auVar30,auVar13,4);
      iVar14 = auVar32._0_4_ + iVar14;
      iVar15 = auVar32._4_4_ + iVar15;
      iVar16 = auVar32._8_4_ + iVar16;
      iVar17 = auVar32._12_4_ + iVar17;
      iVar9 = auVar27._0_4_ + iVar9;
      iVar10 = auVar27._4_4_ + iVar10;
      iVar11 = auVar27._8_4_ + iVar11;
      iVar12 = auVar27._12_4_ + iVar12;
      iVar22 = auVar29._0_4_ + iVar22;
      iVar23 = auVar29._4_4_ + iVar23;
      iVar24 = auVar29._8_4_ + iVar24;
      iVar25 = auVar29._12_4_ + iVar25;
      iVar18 = auVar31._0_4_ + iVar18;
      iVar19 = auVar31._4_4_ + iVar19;
      iVar20 = auVar31._8_4_ + iVar20;
      iVar21 = auVar31._12_4_ + iVar21;
    } while (uVar7 != 0);
    iVar9 = iVar18 + iVar9 + iVar22 + iVar14 + iVar19 + iVar10 + iVar23 + iVar15 +
            iVar20 + iVar11 + iVar24 + iVar16 + iVar21 + iVar12 + iVar25 + iVar17;
    if (uVar4 == uVar2) {
      return iVar9;
    }
  }
  lVar3 = uVar2 - uVar4;
  psVar6 = (short *)(param_2 + uVar4 * 2);
  psVar8 = (short *)(param_1 + uVar4 * 2);
  do {
    lVar3 = lVar3 + -1;
    iVar9 = ((int)*psVar6 * (int)*psVar8 >> (param_3 & 0x1f)) + iVar9;
    psVar6 = psVar6 + 1;
    psVar8 = psVar8 + 1;
  } while (lVar3 != 0);
  return iVar9;
}


