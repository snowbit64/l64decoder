// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: denormalise_bands
// Entry Point: 00e71dd4
// Size: 840 bytes
// Signature: undefined denormalise_bands(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void denormalise_bands(long param_1,long param_2,int *param_3,long param_4,int param_5,int param_6,
                      int param_7,int param_8,int param_9)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined auVar8 [16];
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined (*pauVar22) [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  
  lVar19 = *(long *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x28) * param_7;
  iVar17 = *(short *)(lVar19 + (long)param_6 * 2) * param_7;
  if (param_8 != 1) {
    iVar7 = 0;
    if (param_8 != 0) {
      iVar7 = iVar5 / param_8;
    }
    if (iVar7 <= iVar17) {
      iVar17 = iVar7;
    }
  }
  if (param_9 != 0) {
    param_5 = 0;
    iVar17 = 0;
    param_6 = 0;
  }
  uVar12 = *(short *)(lVar19 + (long)param_5 * 2) * param_7;
  piVar14 = param_3;
  if (0 < (int)uVar12) {
    memset(param_3,0,(ulong)uVar12 << 2);
    piVar14 = param_3 + (ulong)(uVar12 - 1) + 1;
  }
  if (param_5 < param_6) {
    sVar4 = *(short *)(lVar19 + (long)param_5 * 2);
    lVar20 = (long)param_5;
    psVar16 = (short *)(param_2 + (long)(int)uVar12 * 2);
    do {
      lVar1 = lVar20 + 1;
      iVar7 = (int)sVar4;
      sVar4 = *(short *)(lVar19 + lVar1 * 2);
      uVar9 = (int)*(short *)(param_4 + lVar20 * 2) + (char)(&eMeans)[lVar20] * 0x40;
      uVar12 = iVar7 * param_7;
      iVar7 = sVar4 * param_7;
      if (0x7ffe < (int)uVar9) {
        uVar9 = 0x7fff;
      }
      if (uVar9 == 0xffff8000 || (int)(uVar9 + 0x8000) < 0 != SCARRY4(uVar9,0x8000)) {
        uVar9 = 0xffff8000;
      }
      if ((int)uVar9 < -0x3c00) {
        uVar9 = 0;
        uVar18 = 0;
LAB_00e71f88:
        iVar3 = iVar7;
        if (iVar7 <= (int)(uVar12 + 1)) {
          iVar3 = uVar12 + 1;
        }
        if (0xe < iVar3 + ~uVar12) {
          uVar2 = (ulong)(iVar3 + ~uVar12) + 1;
          uVar10 = uVar2 & 0x1fffffff0;
          uVar12 = uVar12 + (int)uVar10;
          piVar13 = piVar14 + uVar10;
          psVar15 = psVar16 + uVar10;
          pauVar22 = (undefined (*) [16])(psVar16 + 8);
          uVar11 = uVar10;
          puVar21 = (undefined8 *)(piVar14 + 8);
          do {
            auVar24 = pauVar22[-1];
            auVar26 = *pauVar22;
            auVar8._4_4_ = uVar9;
            auVar8._0_4_ = uVar9;
            auVar8._8_4_ = uVar9;
            auVar8._12_4_ = uVar9;
            auVar28 = NEON_neg(auVar8,4);
            pauVar22 = pauVar22 + 2;
            uVar11 = uVar11 - 0x10;
            auVar30._0_4_ = uVar18 * (int)auVar24._8_2_;
            auVar30._4_4_ = uVar18 * (int)auVar24._10_2_;
            auVar30._8_4_ = uVar18 * (int)auVar24._12_2_;
            auVar30._12_4_ = uVar18 * (int)auVar24._14_2_;
            auVar23._0_4_ = uVar18 * (int)auVar24._0_2_;
            auVar23._4_4_ = uVar18 * (int)auVar24._2_2_;
            auVar23._8_4_ = uVar18 * (int)auVar24._4_2_;
            auVar23._12_4_ = uVar18 * (int)auVar24._6_2_;
            auVar33._0_4_ = uVar18 * (int)auVar26._8_2_;
            auVar33._4_4_ = uVar18 * (int)auVar26._10_2_;
            auVar33._8_4_ = uVar18 * (int)auVar26._12_2_;
            auVar33._12_4_ = uVar18 * (int)auVar26._14_2_;
            auVar25._0_4_ = uVar18 * (int)auVar26._0_2_;
            auVar25._4_4_ = uVar18 * (int)auVar26._2_2_;
            auVar25._8_4_ = uVar18 * (int)auVar26._4_2_;
            auVar25._12_4_ = uVar18 * (int)auVar26._6_2_;
            auVar31 = NEON_sshl(auVar30,auVar28,4);
            auVar24 = NEON_sshl(auVar23,auVar28,4);
            auVar34 = NEON_sshl(auVar33,auVar28,4);
            auVar26 = NEON_sshl(auVar25,auVar28,4);
            puVar21[-3] = auVar24._8_8_;
            puVar21[-4] = auVar24._0_8_;
            puVar21[-1] = auVar31._8_8_;
            puVar21[-2] = auVar31._0_8_;
            puVar21[1] = auVar26._8_8_;
            *puVar21 = auVar26._0_8_;
            puVar21[3] = auVar34._8_8_;
            puVar21[2] = auVar34._0_8_;
            puVar21 = puVar21 + 8;
          } while (uVar11 != 0);
          piVar14 = piVar13;
          psVar16 = psVar15;
          if (uVar2 == uVar10) goto LAB_00e71ec0;
        }
        do {
          psVar15 = psVar16 + 1;
          uVar12 = uVar12 + 1;
          piVar13 = piVar14 + 1;
          *piVar14 = (int)(uVar18 * (int)*psVar16) >> (uVar9 & 0x1f);
          piVar14 = piVar13;
          psVar16 = psVar15;
        } while ((int)uVar12 < iVar7);
      }
      else {
        iVar3 = (uVar9 & 0x3ff) * 0x20;
        iVar6 = (int)(uVar9 << 0x10) >> 0x1a;
        uVar18 = ((((uVar9 & 0x3ff) * 0x4fb80 >> 0x10) + 0x39e3) * iVar3 + 0x59140000 >> 0x10) *
                 iVar3 + 0x3fff0000 >> 0x10;
        if ((short)uVar9 < 0x4400) {
          uVar9 = 0x10 - iVar6;
          goto LAB_00e71f88;
        }
        if (iVar6 != 0x11) {
          uVar18 = 0x4000;
        }
        uVar9 = 1;
        if (iVar6 != 0x11) {
          uVar9 = 2;
        }
        iVar3 = iVar7;
        if (iVar7 <= (int)(uVar12 + 1)) {
          iVar3 = uVar12 + 1;
        }
        if (iVar3 + ~uVar12 < 0xf) {
LAB_00e720c4:
          do {
            psVar15 = psVar16 + 1;
            uVar12 = uVar12 + 1;
            piVar13 = piVar14 + 1;
            *piVar14 = uVar18 * (int)*psVar16 << (ulong)uVar9;
            piVar14 = piVar13;
            psVar16 = psVar15;
          } while ((int)uVar12 < iVar7);
        }
        else {
          uVar2 = (ulong)(iVar3 + ~uVar12) + 1;
          uVar10 = uVar2 & 0x1fffffff0;
          uVar12 = uVar12 + (int)uVar10;
          piVar13 = piVar14 + uVar10;
          psVar15 = psVar16 + uVar10;
          pauVar22 = (undefined (*) [16])(psVar16 + 8);
          uVar11 = uVar10;
          puVar21 = (undefined8 *)(piVar14 + 8);
          do {
            auVar24 = pauVar22[-1];
            auVar26 = *pauVar22;
            pauVar22 = pauVar22 + 2;
            uVar11 = uVar11 - 0x10;
            auVar29._0_4_ = uVar18 * (int)auVar24._8_2_;
            auVar29._4_4_ = uVar18 * (int)auVar24._10_2_;
            auVar29._8_4_ = uVar18 * (int)auVar24._12_2_;
            auVar29._12_4_ = uVar18 * (int)auVar24._14_2_;
            auVar34._0_4_ = uVar18 * (int)auVar24._0_2_;
            auVar34._4_4_ = uVar18 * (int)auVar24._2_2_;
            auVar34._8_4_ = uVar18 * (int)auVar24._4_2_;
            auVar34._12_4_ = uVar18 * (int)auVar24._6_2_;
            auVar32._0_4_ = uVar18 * (int)auVar26._8_2_;
            auVar32._4_4_ = uVar18 * (int)auVar26._10_2_;
            auVar32._8_4_ = uVar18 * (int)auVar26._12_2_;
            auVar32._12_4_ = uVar18 * (int)auVar26._14_2_;
            auVar27._0_4_ = uVar18 * (int)auVar26._0_2_;
            auVar27._4_4_ = uVar18 * (int)auVar26._2_2_;
            auVar27._8_4_ = uVar18 * (int)auVar26._4_2_;
            auVar27._12_4_ = uVar18 * (int)auVar26._6_2_;
            auVar24._4_4_ = uVar9;
            auVar24._0_4_ = uVar9;
            auVar24._8_4_ = uVar9;
            auVar24._12_4_ = uVar9;
            auVar29 = NEON_ushl(auVar29,auVar24,4);
            auVar26._4_4_ = uVar9;
            auVar26._0_4_ = uVar9;
            auVar26._8_4_ = uVar9;
            auVar26._12_4_ = uVar9;
            auVar24 = NEON_ushl(auVar34,auVar26,4);
            auVar28._4_4_ = uVar9;
            auVar28._0_4_ = uVar9;
            auVar28._8_4_ = uVar9;
            auVar28._12_4_ = uVar9;
            auVar28 = NEON_ushl(auVar32,auVar28,4);
            auVar31._4_4_ = uVar9;
            auVar31._0_4_ = uVar9;
            auVar31._8_4_ = uVar9;
            auVar31._12_4_ = uVar9;
            auVar26 = NEON_ushl(auVar27,auVar31,4);
            puVar21[-3] = auVar24._8_8_;
            puVar21[-4] = auVar24._0_8_;
            puVar21[-1] = auVar29._8_8_;
            puVar21[-2] = auVar29._0_8_;
            puVar21[1] = auVar26._8_8_;
            *puVar21 = auVar26._0_8_;
            puVar21[3] = auVar28._8_8_;
            puVar21[2] = auVar28._0_8_;
            puVar21 = puVar21 + 8;
          } while (uVar11 != 0);
          piVar14 = piVar13;
          psVar16 = psVar15;
          if (uVar2 != uVar10) goto LAB_00e720c4;
        }
      }
LAB_00e71ec0:
      lVar20 = lVar1;
      piVar14 = piVar13;
      psVar16 = psVar15;
    } while (lVar1 != param_6);
  }
  uVar12 = iVar5 - iVar17;
  memset(param_3 + iVar17,0,-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2);
  return;
}


