// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_sum_sqr_shift
// Entry Point: 00e636e8
// Size: 660 bytes
// Signature: undefined silk_sum_sqr_shift(void)


void silk_sum_sqr_shift(int *param_1,uint *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
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
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  
  uVar6 = 0x1f - (int)LZCOUNT(param_4);
  uVar7 = (ulong)(param_4 - 1);
  uVar13 = param_4;
  if ((int)param_4 < 2) {
    uVar8 = 0;
    if (0 < (int)param_4) goto LAB_00e6381c;
  }
  else {
    uVar1 = uVar7;
    if (uVar7 < 3) {
      uVar1 = 2;
    }
    if (uVar1 - 1 < 0x1e) {
      uVar9 = 0;
LAB_00e637e8:
      do {
        psVar11 = (short *)(param_3 + uVar9 * 2);
        uVar9 = uVar9 + 2;
        iVar15 = (int)*psVar11;
        iVar14 = (int)psVar11[1];
        uVar13 = ((uint)(iVar15 * iVar15 + iVar14 * iVar14) >> (ulong)(uVar6 & 0x1f)) + uVar13;
      } while (uVar9 < uVar7);
    }
    else {
      iVar15 = 0;
      iVar16 = 0;
      auVar22._4_4_ = uVar6;
      auVar22._0_4_ = uVar6;
      auVar22._8_4_ = uVar6;
      auVar22._12_4_ = uVar6;
      uVar1 = (uVar1 - 1 >> 1) + 1;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      uVar10 = uVar1 & 0x7ffffffffffffff0;
      auVar29 = NEON_neg(auVar22,4);
      uVar9 = uVar10 << 1;
      iVar14 = 0;
      iVar21 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      psVar11 = (short *)(param_3 + 0x20);
      uVar12 = uVar10;
      auVar22 = ZEXT816(0);
      do {
        auVar30._0_2_ = *psVar11;
        auVar30._2_2_ = psVar11[2];
        auVar30._4_2_ = psVar11[4];
        auVar30._6_2_ = psVar11[6];
        auVar30._8_2_ = psVar11[8];
        auVar30._10_2_ = psVar11[10];
        auVar30._12_2_ = psVar11[0xc];
        auVar30._14_2_ = psVar11[0xe];
        uVar12 = uVar12 - 0x10;
        auVar34._0_2_ = psVar11[-0x10];
        auVar34._2_2_ = psVar11[-0xe];
        auVar34._4_2_ = psVar11[-0xc];
        auVar34._6_2_ = psVar11[-10];
        auVar34._8_2_ = psVar11[-8];
        auVar34._10_2_ = psVar11[-6];
        auVar34._12_2_ = psVar11[-4];
        auVar34._14_2_ = psVar11[-2];
        auVar37 = NEON_ext(auVar30,auVar30,8,1);
        auVar33 = NEON_ext(auVar34,auVar34,8,1);
        auVar32._4_4_ =
             (int)psVar11[0xb] * (int)psVar11[0xb] + (int)auVar37._2_2_ * (int)auVar37._2_2_;
        auVar32._0_4_ = (int)psVar11[9] * (int)psVar11[9] + (int)auVar37._0_2_ * (int)auVar37._0_2_;
        auVar32._8_4_ =
             (int)psVar11[0xd] * (int)psVar11[0xd] + (int)auVar37._4_2_ * (int)auVar37._4_2_;
        auVar32._12_4_ =
             (int)psVar11[0xf] * (int)psVar11[0xf] + (int)auVar37._6_2_ * (int)auVar37._6_2_;
        auVar32 = NEON_ushl(auVar32,auVar29,4);
        auVar36._4_4_ = (int)psVar11[3] * (int)psVar11[3] + (int)auVar30._2_2_ * (int)auVar30._2_2_;
        auVar36._0_4_ = (int)psVar11[1] * (int)psVar11[1] + (int)auVar30._0_2_ * (int)auVar30._0_2_;
        auVar36._8_4_ = (int)psVar11[5] * (int)psVar11[5] + (int)auVar30._4_2_ * (int)auVar30._4_2_;
        auVar36._12_4_ = (int)psVar11[7] * (int)psVar11[7] + (int)auVar30._6_2_ * (int)auVar30._6_2_
        ;
        auVar36 = NEON_ushl(auVar36,auVar29,4);
        auVar37._4_4_ =
             (int)psVar11[-5] * (int)psVar11[-5] + (int)auVar33._2_2_ * (int)auVar33._2_2_;
        auVar37._0_4_ =
             (int)psVar11[-7] * (int)psVar11[-7] + (int)auVar33._0_2_ * (int)auVar33._0_2_;
        auVar37._8_4_ =
             (int)psVar11[-3] * (int)psVar11[-3] + (int)auVar33._4_2_ * (int)auVar33._4_2_;
        auVar37._12_4_ =
             (int)psVar11[-1] * (int)psVar11[-1] + (int)auVar33._6_2_ * (int)auVar33._6_2_;
        auVar37 = NEON_ushl(auVar37,auVar29,4);
        auVar33._4_4_ =
             (int)psVar11[-0xd] * (int)psVar11[-0xd] + (int)auVar34._2_2_ * (int)auVar34._2_2_;
        auVar33._0_4_ =
             (int)psVar11[-0xf] * (int)psVar11[-0xf] + (int)auVar34._0_2_ * (int)auVar34._0_2_;
        auVar33._8_4_ =
             (int)psVar11[-0xb] * (int)psVar11[-0xb] + (int)auVar34._4_2_ * (int)auVar34._4_2_;
        auVar33._12_4_ =
             (int)psVar11[-9] * (int)psVar11[-9] + (int)auVar34._6_2_ * (int)auVar34._6_2_;
        auVar33 = NEON_ushl(auVar33,auVar29,4);
        auVar28._0_4_ = auVar32._0_4_ + auVar22._0_4_;
        auVar28._4_4_ = auVar32._4_4_ + auVar22._4_4_;
        auVar28._8_4_ = auVar32._8_4_ + auVar22._8_4_;
        auVar28._12_4_ = auVar32._12_4_ + auVar22._12_4_;
        iVar21 = auVar36._0_4_ + iVar21;
        iVar24 = auVar36._4_4_ + iVar24;
        iVar25 = auVar36._8_4_ + iVar25;
        iVar26 = auVar36._12_4_ + iVar26;
        iVar17 = auVar37._0_4_ + iVar17;
        iVar18 = auVar37._4_4_ + iVar18;
        iVar19 = auVar37._8_4_ + iVar19;
        iVar20 = auVar37._12_4_ + iVar20;
        uVar13 = auVar33._0_4_ + uVar13;
        iVar14 = auVar33._4_4_ + iVar14;
        iVar15 = auVar33._8_4_ + iVar15;
        iVar16 = auVar33._12_4_ + iVar16;
        psVar11 = psVar11 + 0x20;
        auVar22 = auVar28;
      } while (uVar12 != 0);
      uVar13 = iVar21 + uVar13 + auVar28._0_4_ + iVar17 + iVar24 + iVar14 + auVar28._4_4_ + iVar18 +
               iVar25 + iVar15 + auVar28._8_4_ + iVar19 + iVar26 + iVar16 + auVar28._12_4_ + iVar20;
      if (uVar1 != uVar10) goto LAB_00e637e8;
    }
    uVar8 = param_4 & 0xfffffffe;
    if ((int)uVar8 < (int)param_4) {
LAB_00e6381c:
      iVar14 = (int)*(short *)(param_3 + (ulong)uVar8 * 2);
      uVar13 = ((uint)(iVar14 * iVar14) >> (ulong)(uVar6 & 0x1f)) + uVar13;
    }
  }
  uVar13 = 0x22 - ((int)LZCOUNT(param_4) + (int)LZCOUNT(uVar13));
  uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
  if ((int)param_4 < 2) {
    uVar6 = 0;
    iVar14 = 0;
    if ((int)param_4 < 1) goto LAB_00e63970;
  }
  else {
    uVar1 = uVar7;
    if (uVar7 < 3) {
      uVar1 = 2;
    }
    if (uVar1 - 1 < 0x1e) {
      uVar9 = 0;
      iVar14 = 0;
LAB_00e6392c:
      do {
        psVar11 = (short *)(param_3 + uVar9 * 2);
        uVar9 = uVar9 + 2;
        iVar16 = (int)*psVar11;
        iVar15 = (int)psVar11[1];
        iVar14 = ((uint)(iVar16 * iVar16 + iVar15 * iVar15) >> (ulong)(uVar13 & 0x1f)) + iVar14;
      } while (uVar9 < uVar7);
    }
    else {
      auVar29._4_4_ = uVar13;
      auVar29._0_4_ = uVar13;
      auVar29._8_4_ = uVar13;
      auVar29._12_4_ = uVar13;
      uVar1 = (uVar1 - 1 >> 1) + 1;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      uVar10 = uVar1 & 0x7ffffffffffffff0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      uVar9 = uVar10 << 1;
      auVar29 = NEON_neg(auVar29,4);
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      psVar11 = (short *)(param_3 + 0x20);
      uVar12 = uVar10;
      auVar22 = ZEXT816(0);
      do {
        auVar31._0_2_ = *psVar11;
        auVar31._2_2_ = psVar11[2];
        auVar31._4_2_ = psVar11[4];
        auVar31._6_2_ = psVar11[6];
        auVar31._8_2_ = psVar11[8];
        auVar31._10_2_ = psVar11[10];
        auVar31._12_2_ = psVar11[0xc];
        auVar31._14_2_ = psVar11[0xe];
        uVar12 = uVar12 - 0x10;
        auVar35._0_2_ = psVar11[-0x10];
        auVar35._2_2_ = psVar11[-0xe];
        auVar35._4_2_ = psVar11[-0xc];
        auVar35._6_2_ = psVar11[-10];
        auVar35._8_2_ = psVar11[-8];
        auVar35._10_2_ = psVar11[-6];
        auVar35._12_2_ = psVar11[-4];
        auVar35._14_2_ = psVar11[-2];
        auVar32 = NEON_ext(auVar31,auVar31,8,1);
        auVar37 = NEON_ext(auVar35,auVar35,8,1);
        auVar2._4_4_ = (int)psVar11[0xb] * (int)psVar11[0xb] +
                       (int)auVar32._2_2_ * (int)auVar32._2_2_;
        auVar2._0_4_ = (int)psVar11[9] * (int)psVar11[9] + (int)auVar32._0_2_ * (int)auVar32._0_2_;
        auVar2._8_4_ = (int)psVar11[0xd] * (int)psVar11[0xd] +
                       (int)auVar32._4_2_ * (int)auVar32._4_2_;
        auVar2._12_4_ =
             (int)psVar11[0xf] * (int)psVar11[0xf] + (int)auVar32._6_2_ * (int)auVar32._6_2_;
        auVar32 = NEON_ushl(auVar2,auVar29,4);
        auVar5._4_4_ = (int)psVar11[3] * (int)psVar11[3] + (int)auVar31._2_2_ * (int)auVar31._2_2_;
        auVar5._0_4_ = (int)psVar11[1] * (int)psVar11[1] + (int)auVar31._0_2_ * (int)auVar31._0_2_;
        auVar5._8_4_ = (int)psVar11[5] * (int)psVar11[5] + (int)auVar31._4_2_ * (int)auVar31._4_2_;
        auVar5._12_4_ = (int)psVar11[7] * (int)psVar11[7] + (int)auVar31._6_2_ * (int)auVar31._6_2_;
        auVar36 = NEON_ushl(auVar5,auVar29,4);
        auVar3._4_4_ = (int)psVar11[-5] * (int)psVar11[-5] + (int)auVar37._2_2_ * (int)auVar37._2_2_
        ;
        auVar3._0_4_ = (int)psVar11[-7] * (int)psVar11[-7] + (int)auVar37._0_2_ * (int)auVar37._0_2_
        ;
        auVar3._8_4_ = (int)psVar11[-3] * (int)psVar11[-3] + (int)auVar37._4_2_ * (int)auVar37._4_2_
        ;
        auVar3._12_4_ =
             (int)psVar11[-1] * (int)psVar11[-1] + (int)auVar37._6_2_ * (int)auVar37._6_2_;
        auVar37 = NEON_ushl(auVar3,auVar29,4);
        auVar4._4_4_ = (int)psVar11[-0xd] * (int)psVar11[-0xd] +
                       (int)auVar35._2_2_ * (int)auVar35._2_2_;
        auVar4._0_4_ = (int)psVar11[-0xf] * (int)psVar11[-0xf] +
                       (int)auVar35._0_2_ * (int)auVar35._0_2_;
        auVar4._8_4_ = (int)psVar11[-0xb] * (int)psVar11[-0xb] +
                       (int)auVar35._4_2_ * (int)auVar35._4_2_;
        auVar4._12_4_ =
             (int)psVar11[-9] * (int)psVar11[-9] + (int)auVar35._6_2_ * (int)auVar35._6_2_;
        auVar33 = NEON_ushl(auVar4,auVar29,4);
        auVar23._0_4_ = auVar32._0_4_ + auVar22._0_4_;
        auVar23._4_4_ = auVar32._4_4_ + auVar22._4_4_;
        auVar23._8_4_ = auVar32._8_4_ + auVar22._8_4_;
        auVar23._12_4_ = auVar32._12_4_ + auVar22._12_4_;
        iVar24 = auVar36._0_4_ + iVar24;
        iVar25 = auVar36._4_4_ + iVar25;
        iVar26 = auVar36._8_4_ + iVar26;
        iVar27 = auVar36._12_4_ + iVar27;
        iVar18 = auVar37._0_4_ + iVar18;
        iVar19 = auVar37._4_4_ + iVar19;
        iVar20 = auVar37._8_4_ + iVar20;
        iVar21 = auVar37._12_4_ + iVar21;
        iVar14 = auVar33._0_4_ + iVar14;
        iVar15 = auVar33._4_4_ + iVar15;
        iVar16 = auVar33._8_4_ + iVar16;
        iVar17 = auVar33._12_4_ + iVar17;
        psVar11 = psVar11 + 0x20;
        auVar22 = auVar23;
      } while (uVar12 != 0);
      iVar14 = iVar24 + iVar14 + auVar23._0_4_ + iVar18 + iVar25 + iVar15 + auVar23._4_4_ + iVar19 +
               iVar26 + iVar16 + auVar23._8_4_ + iVar20 + iVar27 + iVar17 + auVar23._12_4_ + iVar21;
      if (uVar1 != uVar10) goto LAB_00e6392c;
    }
    uVar6 = param_4 & 0xfffffffe;
    if ((int)param_4 <= (int)uVar6) goto LAB_00e63970;
  }
  iVar15 = (int)*(short *)(param_3 + (ulong)uVar6 * 2);
  iVar14 = ((uint)(iVar15 * iVar15) >> (ulong)(uVar13 & 0x1f)) + iVar14;
LAB_00e63970:
  *param_2 = uVar13;
  *param_1 = iVar14;
  return;
}


