// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renormalise_vector
// Entry Point: 00e77c88
// Size: 500 bytes
// Signature: undefined renormalise_vector(void)


void renormalise_vector(short *param_1,uint param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  short *psVar7;
  undefined (*pauVar8) [16];
  ulong uVar9;
  undefined auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  
  if ((int)param_2 < 1) {
    iVar11 = 1;
    goto LAB_00e77d50;
  }
  uVar4 = (ulong)param_2;
  if (param_2 < 0x10) {
    uVar6 = 0;
    iVar11 = 0;
LAB_00e77d34:
    lVar5 = uVar4 - uVar6;
    psVar7 = param_1 + uVar6;
    do {
      lVar5 = lVar5 + -1;
      iVar11 = iVar11 + (int)*psVar7 * (int)*psVar7;
      psVar7 = psVar7 + 1;
    } while (lVar5 != 0);
  }
  else {
    uVar6 = uVar4 & 0xfffffff0;
    pauVar8 = (undefined (*) [16])(param_1 + 8);
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    uVar9 = uVar6;
    auVar10 = ZEXT816(0);
    auVar21 = ZEXT816(0);
    do {
      auVar24 = pauVar8[-1];
      auVar19 = *pauVar8;
      pauVar8 = pauVar8 + 2;
      uVar9 = uVar9 - 0x10;
      auVar22 = NEON_ext(auVar24,auVar24,8,1);
      auVar20._0_4_ = auVar10._0_4_ + (int)auVar24._0_2_ * (int)auVar24._0_2_;
      auVar20._4_4_ = auVar10._4_4_ + (int)auVar24._2_2_ * (int)auVar24._2_2_;
      auVar20._8_4_ = auVar10._8_4_ + (int)auVar24._4_2_ * (int)auVar24._4_2_;
      auVar20._12_4_ = auVar10._12_4_ + (int)auVar24._6_2_ * (int)auVar24._6_2_;
      auVar10 = NEON_ext(auVar19,auVar19,8,1);
      iVar15 = iVar15 + (int)auVar19._0_2_ * (int)auVar19._0_2_;
      iVar16 = iVar16 + (int)auVar19._2_2_ * (int)auVar19._2_2_;
      iVar17 = iVar17 + (int)auVar19._4_2_ * (int)auVar19._4_2_;
      iVar18 = iVar18 + (int)auVar19._6_2_ * (int)auVar19._6_2_;
      iVar11 = iVar11 + (int)auVar22._0_2_ * (int)auVar22._0_2_;
      iVar12 = iVar12 + (int)auVar22._2_2_ * (int)auVar22._2_2_;
      iVar13 = iVar13 + (int)auVar22._4_2_ * (int)auVar22._4_2_;
      iVar14 = iVar14 + (int)auVar22._6_2_ * (int)auVar22._6_2_;
      auVar24._0_4_ = auVar21._0_4_ + (int)auVar10._0_2_ * (int)auVar10._0_2_;
      auVar24._4_4_ = auVar21._4_4_ + (int)auVar10._2_2_ * (int)auVar10._2_2_;
      auVar24._8_4_ = auVar21._8_4_ + (int)auVar10._4_2_ * (int)auVar10._4_2_;
      auVar24._12_4_ = auVar21._12_4_ + (int)auVar10._6_2_ * (int)auVar10._6_2_;
      auVar10 = auVar20;
      auVar21 = auVar24;
    } while (uVar9 != 0);
    iVar11 = iVar15 + auVar20._0_4_ + auVar24._0_4_ + iVar11 +
             iVar16 + auVar20._4_4_ + auVar24._4_4_ + iVar12 +
             iVar17 + auVar20._8_4_ + auVar24._8_4_ + iVar13 +
             iVar18 + auVar20._12_4_ + auVar24._12_4_ + iVar14;
    if (uVar6 != uVar4) goto LAB_00e77d34;
  }
  iVar11 = iVar11 + 1;
LAB_00e77d50:
  uVar2 = 0x1f - (uint)LZCOUNT(iVar11);
  uVar1 = uVar2 & 0xfffffffe;
  iVar12 = iVar11 >> (uVar1 - 0xe & 0x1f);
  if (0xf < (uint)LZCOUNT(iVar11)) {
    iVar12 = iVar11 << (ulong)(0xe - uVar1 & 0x1f);
  }
  sVar3 = celt_rsqrt_norm(iVar12);
  if (0 < (int)param_2) {
    uVar1 = ((int)uVar2 >> 1) + 1;
    iVar11 = (int)param_3 * (int)sVar3 * 2 + 0x8000 >> 0x10;
    uVar2 = (uint)(1 << (ulong)(uVar1 & 0x1f)) >> 1;
    if (param_2 - 1 < 0xf) {
      uVar6 = 0;
    }
    else {
      uVar4 = (ulong)(param_2 - 1) + 1;
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      uVar6 = uVar4 & 0x1fffffff0;
      pauVar8 = (undefined (*) [16])(param_1 + 8);
      auVar10 = NEON_neg(auVar10,4);
      param_1 = param_1 + uVar6;
      uVar9 = uVar6;
      do {
        auVar21 = pauVar8[-1];
        auVar24 = *pauVar8;
        uVar9 = uVar9 - 0x10;
        auVar19._0_4_ = uVar2 + iVar11 * auVar21._8_2_;
        auVar19._4_4_ = uVar2 + iVar11 * auVar21._10_2_;
        auVar19._8_4_ = uVar2 + iVar11 * auVar21._12_2_;
        auVar19._12_4_ = uVar2 + iVar11 * auVar21._14_2_;
        auVar22._0_4_ = uVar2 + iVar11 * auVar21._0_2_;
        auVar22._4_4_ = uVar2 + iVar11 * auVar21._2_2_;
        auVar22._8_4_ = uVar2 + iVar11 * auVar21._4_2_;
        auVar22._12_4_ = uVar2 + iVar11 * auVar21._6_2_;
        auVar19 = NEON_sshl(auVar19,auVar10,4);
        auVar23._0_4_ = uVar2 + iVar11 * auVar24._0_2_;
        auVar23._4_4_ = uVar2 + iVar11 * auVar24._2_2_;
        auVar23._8_4_ = uVar2 + iVar11 * auVar24._4_2_;
        auVar23._12_4_ = uVar2 + iVar11 * auVar24._6_2_;
        auVar20 = NEON_sshl(auVar22,auVar10,4);
        auVar21._4_4_ = uVar2 + iVar11 * auVar24._10_2_;
        auVar21._0_4_ = uVar2 + iVar11 * auVar24._8_2_;
        auVar21._8_4_ = uVar2 + iVar11 * auVar24._12_2_;
        auVar21._12_4_ = uVar2 + iVar11 * auVar24._14_2_;
        auVar21 = NEON_sshl(auVar21,auVar10,4);
        auVar24 = NEON_sshl(auVar23,auVar10,4);
        *(short *)*pauVar8 = auVar19._0_2_;
        *(short *)((long)*pauVar8 + 2) = auVar19._4_2_;
        *(short *)((long)*pauVar8 + 4) = auVar19._8_2_;
        *(short *)((long)*pauVar8 + 6) = auVar19._12_2_;
        *(short *)pauVar8[-1] = auVar20._0_2_;
        *(short *)((long)pauVar8[-1] + 2) = auVar20._4_2_;
        *(short *)((long)pauVar8[-1] + 4) = auVar20._8_2_;
        *(short *)((long)pauVar8[-1] + 6) = auVar20._12_2_;
        *(short *)pauVar8[1] = auVar21._0_2_;
        *(short *)((long)pauVar8[1] + 2) = auVar21._4_2_;
        *(short *)((long)pauVar8[1] + 4) = auVar21._8_2_;
        *(short *)((long)pauVar8[1] + 6) = auVar21._12_2_;
        *(short *)*pauVar8 = auVar24._0_2_;
        *(short *)((long)*pauVar8 + 2) = auVar24._4_2_;
        *(short *)((long)*pauVar8 + 4) = auVar24._8_2_;
        *(short *)((long)*pauVar8 + 6) = auVar24._12_2_;
        pauVar8 = pauVar8 + 2;
      } while (uVar9 != 0);
      if (uVar4 == uVar6) {
        return;
      }
    }
    iVar12 = param_2 - (int)uVar6;
    do {
      iVar12 = iVar12 + -1;
      *param_1 = (short)((int)(uVar2 + iVar11 * *param_1) >> (uVar1 & 0x1f));
      param_1 = param_1 + 1;
    } while (iVar12 != 0);
  }
  return;
}


