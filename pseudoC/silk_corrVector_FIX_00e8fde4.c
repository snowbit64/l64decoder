// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_corrVector_FIX
// Entry Point: 00e8fde4
// Size: 416 bytes
// Signature: undefined silk_corrVector_FIX(void)


void silk_corrVector_FIX(long param_1,long param_2,uint param_3,uint param_4,undefined4 *param_5,
                        uint param_6,undefined4 param_7)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
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
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  
  param_1 = param_1 + (long)(int)(param_4 - 1) * 2;
  if ((int)param_6 < 1) {
    if (0 < (int)param_4) {
      uVar4 = (ulong)param_4;
      do {
        uVar3 = silk_inner_prod_aligned(param_1,param_2,param_3,param_7);
        param_1 = param_1 + -2;
        uVar4 = uVar4 - 1;
        *param_5 = uVar3;
        param_5 = param_5 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (0 < (int)param_4) {
    if ((int)param_3 < 1) {
      memset(param_5,0,(ulong)param_4 << 2);
      return;
    }
    auVar8._4_4_ = param_6;
    auVar8._0_4_ = param_6;
    auVar8._8_4_ = param_6;
    auVar8._12_4_ = param_6;
    uVar5 = (ulong)param_3;
    uVar4 = 0;
    auVar8 = NEON_neg(auVar8,4);
    do {
      if (0xf < param_3) {
        iVar9 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iVar12 = 0;
        lVar7 = 0;
        iVar13 = 0;
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
        do {
          pauVar1 = (undefined (*) [16])(param_2 + lVar7);
          pauVar2 = (undefined (*) [16])(param_1 + lVar7);
          lVar7 = lVar7 + 0x20;
          auVar28 = *pauVar1;
          auVar26 = pauVar1[1];
          auVar30 = *pauVar2;
          auVar31 = pauVar2[1];
          auVar25._0_4_ = (int)auVar28._0_2_ * (int)auVar30._0_2_;
          auVar25._4_4_ = (int)auVar28._2_2_ * (int)auVar30._2_2_;
          auVar25._8_4_ = (int)auVar28._4_2_ * (int)auVar30._4_2_;
          auVar25._12_4_ = (int)auVar28._6_2_ * (int)auVar30._6_2_;
          auVar27._0_4_ = (int)auVar26._8_2_ * (int)auVar31._8_2_;
          auVar27._4_4_ = (int)auVar26._10_2_ * (int)auVar31._10_2_;
          auVar27._8_4_ = (int)auVar26._12_2_ * (int)auVar31._12_2_;
          auVar27._12_4_ = (int)auVar26._14_2_ * (int)auVar31._14_2_;
          auVar29._0_4_ = (int)auVar26._0_2_ * (int)auVar31._0_2_;
          auVar29._4_4_ = (int)auVar26._2_2_ * (int)auVar31._2_2_;
          auVar29._8_4_ = (int)auVar26._4_2_ * (int)auVar31._4_2_;
          auVar29._12_4_ = (int)auVar26._6_2_ * (int)auVar31._6_2_;
          auVar26._4_4_ = (int)auVar28._10_2_ * (int)auVar30._10_2_;
          auVar26._0_4_ = (int)auVar28._8_2_ * (int)auVar30._8_2_;
          auVar26._8_4_ = (int)auVar28._12_2_ * (int)auVar30._12_2_;
          auVar26._12_4_ = (int)auVar28._14_2_ * (int)auVar30._14_2_;
          auVar31 = NEON_sshl(auVar26,auVar8,4);
          auVar26 = NEON_sshl(auVar25,auVar8,4);
          auVar28 = NEON_sshl(auVar27,auVar8,4);
          auVar30 = NEON_sshl(auVar29,auVar8,4);
          iVar13 = auVar31._0_4_ + iVar13;
          iVar14 = auVar31._4_4_ + iVar14;
          iVar15 = auVar31._8_4_ + iVar15;
          iVar16 = auVar31._12_4_ + iVar16;
          iVar9 = auVar26._0_4_ + iVar9;
          iVar10 = auVar26._4_4_ + iVar10;
          iVar11 = auVar26._8_4_ + iVar11;
          iVar12 = auVar26._12_4_ + iVar12;
          iVar21 = auVar28._0_4_ + iVar21;
          iVar22 = auVar28._4_4_ + iVar22;
          iVar23 = auVar28._8_4_ + iVar23;
          iVar24 = auVar28._12_4_ + iVar24;
          iVar17 = auVar30._0_4_ + iVar17;
          iVar18 = auVar30._4_4_ + iVar18;
          iVar19 = auVar30._8_4_ + iVar19;
          iVar20 = auVar30._12_4_ + iVar20;
        } while ((uVar5 & 0xfffffff0) * 2 - lVar7 != 0);
        iVar9 = iVar17 + iVar9 + iVar21 + iVar13 + iVar18 + iVar10 + iVar22 + iVar14 +
                iVar19 + iVar11 + iVar23 + iVar15 + iVar20 + iVar12 + iVar24 + iVar16;
        uVar6 = uVar5 & 0xfffffff0;
        goto joined_r0x00e8feec;
      }
      uVar6 = 0;
      iVar9 = 0;
      do {
        lVar7 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        iVar9 = ((int)*(short *)(param_2 + lVar7) * (int)*(short *)(param_1 + lVar7) >>
                (param_6 & 0x1f)) + iVar9;
joined_r0x00e8feec:
      } while (uVar6 != uVar5);
      param_5[uVar4] = iVar9;
      param_1 = param_1 + -2;
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}


