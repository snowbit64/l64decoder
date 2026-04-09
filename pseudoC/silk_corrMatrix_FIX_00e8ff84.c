// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_corrMatrix_FIX
// Entry Point: 00e8ff84
// Size: 1212 bytes
// Signature: undefined silk_corrMatrix_FIX(void)


void silk_corrMatrix_FIX(long param_1,ulong param_2,uint param_3,int *param_4,int *param_5,
                        uint *param_6,undefined4 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined (*pauVar3) [16];
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  undefined (*pauVar11) [16];
  ulong uVar12;
  long lVar13;
  long lVar14;
  short *psVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  
  uVar18 = (ulong)param_3;
  uVar7 = (uint)param_2;
  silk_sum_sqr_shift(param_5,param_6,param_1,(param_3 - 1) + uVar7);
  uVar5 = param_3 - 1;
  uVar8 = (ulong)uVar5;
  iVar6 = *param_5;
  if (uVar5 == 0 || (int)param_3 < 1) {
    lVar13 = param_1 + (long)(int)uVar5 * 2;
    *param_4 = iVar6;
    goto LAB_00e90124;
  }
  uVar4 = *param_6;
  if (uVar5 < 0x10) {
    uVar12 = 0;
LAB_00e90090:
    lVar13 = uVar8 - uVar12;
    psVar15 = (short *)(param_1 + uVar12 * 2);
    do {
      lVar13 = lVar13 + -1;
      iVar6 = iVar6 - ((uint)((int)*psVar15 * (int)*psVar15) >> (ulong)(uVar4 & 0x1f));
      psVar15 = psVar15 + 1;
    } while (lVar13 != 0);
  }
  else {
    iVar22 = 0;
    iVar23 = 0;
    uVar12 = uVar8 & 0xfffffff0;
    auVar29._4_4_ = uVar4;
    auVar29._0_4_ = uVar4;
    auVar29._8_4_ = uVar4;
    auVar29._12_4_ = uVar4;
    iVar24 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    auVar29 = NEON_neg(auVar29,4);
    iVar21 = 0;
    pauVar11 = (undefined (*) [16])(param_1 + 0x10);
    iVar28 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar33 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    uVar17 = uVar12;
    do {
      auVar39 = pauVar11[-1];
      auVar41 = *pauVar11;
      pauVar11 = pauVar11 + 2;
      uVar17 = uVar17 - 0x10;
      auVar45._0_4_ = (int)auVar39._8_2_ * (int)auVar39._8_2_;
      auVar45._4_4_ = (int)auVar39._10_2_ * (int)auVar39._10_2_;
      auVar45._8_4_ = (int)auVar39._12_2_ * (int)auVar39._12_2_;
      auVar45._12_4_ = (int)auVar39._14_2_ * (int)auVar39._14_2_;
      auVar43._0_4_ = (int)auVar39._0_2_ * (int)auVar39._0_2_;
      auVar43._4_4_ = (int)auVar39._2_2_ * (int)auVar39._2_2_;
      auVar43._8_4_ = (int)auVar39._4_2_ * (int)auVar39._4_2_;
      auVar43._12_4_ = (int)auVar39._6_2_ * (int)auVar39._6_2_;
      auVar44._0_4_ = (int)auVar41._8_2_ * (int)auVar41._8_2_;
      auVar44._4_4_ = (int)auVar41._10_2_ * (int)auVar41._10_2_;
      auVar44._8_4_ = (int)auVar41._12_2_ * (int)auVar41._12_2_;
      auVar44._12_4_ = (int)auVar41._14_2_ * (int)auVar41._14_2_;
      auVar46._0_4_ = (int)auVar41._0_2_ * (int)auVar41._0_2_;
      auVar46._4_4_ = (int)auVar41._2_2_ * (int)auVar41._2_2_;
      auVar46._8_4_ = (int)auVar41._4_2_ * (int)auVar41._4_2_;
      auVar46._12_4_ = (int)auVar41._6_2_ * (int)auVar41._6_2_;
      auVar45 = NEON_ushl(auVar45,auVar29,4);
      auVar39 = NEON_ushl(auVar43,auVar29,4);
      auVar43 = NEON_ushl(auVar44,auVar29,4);
      auVar41 = NEON_ushl(auVar46,auVar29,4);
      iVar24 = iVar24 - auVar45._0_4_;
      iVar25 = iVar25 - auVar45._4_4_;
      iVar26 = iVar26 - auVar45._8_4_;
      iVar27 = iVar27 - auVar45._12_4_;
      iVar6 = iVar6 - auVar39._0_4_;
      iVar21 = iVar21 - auVar39._4_4_;
      iVar22 = iVar22 - auVar39._8_4_;
      iVar23 = iVar23 - auVar39._12_4_;
      iVar34 = iVar34 - auVar43._0_4_;
      iVar35 = iVar35 - auVar43._4_4_;
      iVar36 = iVar36 - auVar43._8_4_;
      iVar37 = iVar37 - auVar43._12_4_;
      iVar28 = iVar28 - auVar41._0_4_;
      iVar31 = iVar31 - auVar41._4_4_;
      iVar32 = iVar32 - auVar41._8_4_;
      iVar33 = iVar33 - auVar41._12_4_;
    } while (uVar17 != 0);
    iVar6 = iVar28 + iVar6 + iVar34 + iVar24 + iVar31 + iVar21 + iVar35 + iVar25 +
            iVar32 + iVar22 + iVar36 + iVar26 + iVar33 + iVar23 + iVar37 + iVar27;
    if (uVar12 != uVar8) goto LAB_00e90090;
  }
  lVar13 = param_1 + (long)(int)uVar5 * 2;
  *param_4 = iVar6;
  if (1 < (int)param_3) {
    psVar15 = (short *)(param_1 + (long)(int)uVar5 * 2);
    lVar14 = uVar18 - 1;
    lVar16 = 1;
    uVar17 = uVar18;
    do {
      psVar15 = psVar15 + -1;
      lVar14 = lVar14 + -1;
      lVar20 = lVar16 + (int)uVar17;
      lVar16 = lVar16 + 1;
      uVar17 = (ulong)((int)uVar17 + param_3);
      iVar6 = ((uint)((int)*psVar15 * (int)*psVar15) >> (ulong)(*param_6 & 0x1f)) +
              (iVar6 - ((uint)((int)psVar15[(int)uVar7] * (int)psVar15[(int)uVar7]) >>
                       (ulong)(*param_6 & 0x1f)));
      param_4[lVar20] = iVar6;
    } while (lVar14 != 0);
  }
LAB_00e90124:
  iVar6 = param_3 - 2;
  lVar16 = param_1 + (long)iVar6 * 2;
  if ((int)*param_6 < 1) {
    if (1 < (int)param_3) {
      iVar21 = param_3 << 1;
      param_1 = param_1 + ((long)iVar6 + (long)(int)uVar7) * 2;
      piVar9 = param_4 + uVar18 + 2;
      uVar17 = 1;
      do {
        param_1 = param_1 + -2;
        iVar6 = silk_inner_prod_aligned(lVar13,lVar16,param_2,param_7);
        param_4[uVar17 * uVar18] = iVar6;
        param_4[uVar17] = iVar6;
        if (1 < (long)(uVar18 - uVar17)) {
          lVar20 = 0;
          lVar14 = 1;
          piVar10 = piVar9;
          iVar22 = iVar21;
          do {
            lVar19 = lVar20 * 2;
            lVar20 = lVar20 + -1;
            lVar1 = lVar14 + iVar22;
            lVar14 = lVar14 + 1;
            iVar22 = iVar22 + param_3;
            iVar6 = (iVar6 - (int)*(short *)(param_1 + lVar19) *
                             (int)*(short *)(lVar13 + (long)(int)uVar7 * 2 + -2 + lVar19)) +
                    (int)*(short *)(lVar16 + lVar19 + -2) * (int)*(short *)(lVar13 + -2 + lVar19);
            param_4[lVar1] = iVar6;
            *piVar10 = iVar6;
            piVar10 = piVar10 + uVar18 + 1;
          } while (1 - uVar8 != lVar20);
        }
        lVar16 = lVar16 + -2;
        uVar17 = uVar17 + 1;
        uVar8 = (ulong)((int)uVar8 - 1);
        iVar21 = iVar21 + param_3;
        piVar9 = piVar9 + 1;
      } while (uVar17 != uVar18);
    }
  }
  else if (1 < (int)param_3) {
    param_1 = param_1 + ((long)iVar6 + (long)(int)uVar7) * 2;
    iVar6 = param_3 << 1;
    piVar9 = param_4 + uVar18 + 2;
    uVar17 = 1;
    do {
      param_1 = param_1 + -2;
      if ((int)uVar7 < 1) {
        iVar21 = 0;
      }
      else {
        uVar5 = *param_6;
        if (uVar7 < 0x10) {
          iVar21 = 0;
          uVar12 = 0;
        }
        else {
          iVar21 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          lVar14 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar28 = 0;
          iVar31 = 0;
          iVar32 = 0;
          iVar33 = 0;
          iVar34 = 0;
          auVar29 = ZEXT816(0);
          do {
            pauVar11 = (undefined (*) [16])(lVar16 + lVar14);
            pauVar3 = (undefined (*) [16])(lVar13 + lVar14);
            auVar39._4_4_ = uVar5;
            auVar39._0_4_ = uVar5;
            auVar39._8_4_ = uVar5;
            auVar39._12_4_ = uVar5;
            auVar45 = NEON_neg(auVar39,4);
            lVar14 = lVar14 + 0x20;
            auVar39 = *pauVar11;
            auVar41 = pauVar11[1];
            auVar43 = *pauVar3;
            auVar46 = pauVar3[1];
            auVar38._0_4_ = (int)auVar39._0_2_ * (int)auVar43._0_2_;
            auVar38._4_4_ = (int)auVar39._2_2_ * (int)auVar43._2_2_;
            auVar38._8_4_ = (int)auVar39._4_2_ * (int)auVar43._4_2_;
            auVar38._12_4_ = (int)auVar39._6_2_ * (int)auVar43._6_2_;
            auVar40._0_4_ = (int)auVar41._8_2_ * (int)auVar46._8_2_;
            auVar40._4_4_ = (int)auVar41._10_2_ * (int)auVar46._10_2_;
            auVar40._8_4_ = (int)auVar41._12_2_ * (int)auVar46._12_2_;
            auVar40._12_4_ = (int)auVar41._14_2_ * (int)auVar46._14_2_;
            auVar42._0_4_ = (int)auVar41._0_2_ * (int)auVar46._0_2_;
            auVar42._4_4_ = (int)auVar41._2_2_ * (int)auVar46._2_2_;
            auVar42._8_4_ = (int)auVar41._4_2_ * (int)auVar46._4_2_;
            auVar42._12_4_ = (int)auVar41._6_2_ * (int)auVar46._6_2_;
            auVar41._4_4_ = (int)auVar39._10_2_ * (int)auVar43._10_2_;
            auVar41._0_4_ = (int)auVar39._8_2_ * (int)auVar43._8_2_;
            auVar41._8_4_ = (int)auVar39._12_2_ * (int)auVar43._12_2_;
            auVar41._12_4_ = (int)auVar39._14_2_ * (int)auVar43._14_2_;
            auVar46 = NEON_sshl(auVar41,auVar45,4);
            auVar39 = NEON_sshl(auVar38,auVar45,4);
            auVar41 = NEON_sshl(auVar40,auVar45,4);
            auVar43 = NEON_sshl(auVar42,auVar45,4);
            iVar25 = auVar46._0_4_ + iVar25;
            iVar26 = auVar46._4_4_ + iVar26;
            iVar27 = auVar46._8_4_ + iVar27;
            iVar28 = auVar46._12_4_ + iVar28;
            iVar21 = auVar39._0_4_ + iVar21;
            iVar22 = auVar39._4_4_ + iVar22;
            iVar23 = auVar39._8_4_ + iVar23;
            iVar24 = auVar39._12_4_ + iVar24;
            iVar31 = auVar41._0_4_ + iVar31;
            iVar32 = auVar41._4_4_ + iVar32;
            iVar33 = auVar41._8_4_ + iVar33;
            iVar34 = auVar41._12_4_ + iVar34;
            auVar30._0_4_ = auVar43._0_4_ + auVar29._0_4_;
            auVar30._4_4_ = auVar43._4_4_ + auVar29._4_4_;
            auVar30._8_4_ = auVar43._8_4_ + auVar29._8_4_;
            auVar30._12_4_ = auVar43._12_4_ + auVar29._12_4_;
            auVar29 = auVar30;
          } while ((param_2 & 0xfffffff0) * 2 - lVar14 != 0);
          iVar21 = auVar30._0_4_ + iVar21 + iVar31 + iVar25 +
                   auVar30._4_4_ + iVar22 + iVar32 + iVar26 +
                   auVar30._8_4_ + iVar23 + iVar33 + iVar27 +
                   auVar30._12_4_ + iVar24 + iVar34 + iVar28;
          uVar12 = param_2 & 0xfffffff0;
          if ((param_2 & 0xfffffff0) == (param_2 & 0xffffffff)) goto LAB_00e90288;
        }
        do {
          uVar2 = uVar12 + 1;
          iVar21 = ((int)*(short *)(lVar16 + uVar12 * 2) * (int)*(short *)(lVar13 + uVar12 * 2) >>
                   (uVar5 & 0x1f)) + iVar21;
          uVar12 = uVar2;
        } while ((param_2 & 0xffffffff) != uVar2);
      }
LAB_00e90288:
      param_4[uVar17 * uVar18] = iVar21;
      param_4[uVar17] = iVar21;
      if (1 < (long)(uVar18 - uVar17)) {
        lVar20 = 0;
        lVar14 = 1;
        piVar10 = piVar9;
        iVar22 = iVar6;
        do {
          lVar19 = lVar20 * 2;
          lVar20 = lVar20 + -1;
          lVar1 = lVar14 + iVar22;
          lVar14 = lVar14 + 1;
          iVar21 = ((int)*(short *)(lVar16 + lVar19 + -2) * (int)*(short *)(lVar13 + -2 + lVar19) >>
                   (*param_6 & 0x1f)) +
                   (iVar21 - ((int)*(short *)(param_1 + lVar19) *
                              (int)*(short *)(lVar13 + (long)(int)uVar7 * 2 + -2 + lVar19) >>
                             (*param_6 & 0x1f)));
          iVar22 = iVar22 + param_3;
          param_4[lVar1] = iVar21;
          *piVar10 = iVar21;
          piVar10 = piVar10 + uVar18 + 1;
        } while (1 - uVar8 != lVar20);
      }
      lVar16 = lVar16 + -2;
      uVar17 = uVar17 + 1;
      uVar8 = (ulong)((int)uVar8 - 1);
      iVar6 = iVar6 + param_3;
      piVar9 = piVar9 + 1;
    } while (uVar17 != uVar18);
  }
  return;
}


