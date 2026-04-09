// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_band_energies
// Entry Point: 00e718c0
// Size: 900 bytes
// Signature: undefined compute_band_energies(void)


void compute_band_energies
               (long param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6)

{
  undefined (*pauVar1) [16];
  long lVar2;
  ulong uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined (*pauVar16) [16];
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  
  if (0 < (int)param_4) {
    if ((int)param_5 < 2) {
      param_5 = 1;
    }
    uVar6 = *(int *)(param_1 + 0x28) << (ulong)(param_6 & 0x1f);
    lVar19 = 0;
    uVar20 = 0;
    lVar21 = *(long *)(param_1 + 0x18);
    lVar2 = param_2 + 0x10;
    lVar18 = param_2;
    do {
      uVar22 = 0;
      do {
        uVar3 = uVar22 + 1;
        sVar5 = *(short *)(lVar21 + uVar3 * 2);
        iVar9 = (int)*(short *)(lVar21 + uVar22 * 2);
        lVar10 = (long)(iVar9 << (ulong)(param_6 & 0x1f));
        uVar7 = sVar5 - iVar9 << (ulong)(param_6 & 0x1f);
        uVar12 = (ulong)uVar7;
        if ((int)uVar7 < 1) {
          iVar9 = 0;
          iVar23 = 0;
        }
        else {
          if (uVar7 < 8) {
            uVar14 = 0;
            iVar23 = 0;
            iVar9 = 0;
          }
          else {
            uVar14 = uVar12 & 0xfffffff8;
            auVar24 = ZEXT816(0);
            auVar26 = ZEXT816(0);
            pauVar16 = (undefined (*) [16])(lVar2 + (lVar19 + lVar10) * 4);
            auVar29 = ZEXT816(0);
            auVar28 = ZEXT816(0);
            uVar17 = uVar14;
            do {
              pauVar1 = pauVar16 + -1;
              auVar30 = *pauVar16;
              auVar31 = *pauVar16;
              pauVar16 = pauVar16 + 2;
              uVar17 = uVar17 - 8;
              auVar29 = NEON_smax(auVar29,*pauVar1,4);
              auVar24 = NEON_smin(auVar24,*pauVar1,4);
              auVar28 = NEON_smax(auVar28,auVar31,4);
              auVar26 = NEON_smin(auVar26,auVar30,4);
            } while (uVar17 != 0);
            auVar29 = NEON_smax(auVar29,auVar28,4);
            auVar24 = NEON_smin(auVar24,auVar26,4);
            iVar9 = NEON_smaxv(auVar29,4);
            iVar23 = NEON_sminv(auVar24,4);
            if (uVar14 == uVar12) goto LAB_00e71a64;
          }
          lVar13 = uVar12 - uVar14;
          piVar15 = (int *)(param_2 + (lVar19 + uVar14 + lVar10) * 4);
          do {
            iVar4 = *piVar15;
            if (iVar9 <= iVar4) {
              iVar9 = iVar4;
            }
            if (iVar4 <= iVar23) {
              iVar23 = iVar4;
            }
            lVar13 = lVar13 + -1;
            piVar15 = piVar15 + 1;
          } while (lVar13 != 0);
        }
LAB_00e71a64:
        if (iVar9 == -iVar23 || iVar9 + iVar23 < 0 != SBORROW4(iVar9,-iVar23)) {
          iVar9 = -iVar23;
        }
        if (iVar9 < 1) {
          iVar9 = 1;
        }
        else {
          uVar7 = (((int)(param_6 + 1 +
                         ((int)*(short *)(*(long *)(param_1 + 0x38) + uVar22 * 2) >> 3)) >> 1) -
                  (int)LZCOUNT(iVar9)) + 0x11;
          if ((int)uVar7 < 1) {
            lVar11 = (long)((int)sVar5 << (ulong)(param_6 & 0x1f));
            iVar9 = 0;
            uVar8 = -uVar7;
            lVar13 = lVar11;
            if (lVar11 < lVar10 + 1) {
              lVar13 = lVar10 + 1;
            }
            uVar12 = lVar13 - lVar10;
            if (7 < uVar12) {
              lVar13 = lVar19 + lVar10;
              uVar14 = uVar12 & 0xfffffffffffffff8;
              auVar29._4_4_ = uVar8;
              auVar29._0_4_ = uVar8;
              auVar29._8_4_ = uVar8;
              auVar29._12_4_ = uVar8;
              lVar10 = uVar14 + lVar10;
              pauVar16 = (undefined (*) [16])(lVar2 + lVar13 * 4);
              uVar17 = uVar14;
              auVar24 = ZEXT816(0);
              auVar26 = ZEXT816(0);
              do {
                pauVar1 = pauVar16 + -1;
                auVar28 = *pauVar16;
                uVar17 = uVar17 - 8;
                pauVar16 = pauVar16 + 2;
                auVar31 = NEON_ushl(*pauVar1,auVar29,4);
                auVar30 = NEON_ushl(auVar28,auVar29,4);
                auVar28._0_4_ = auVar24._0_4_ + (int)auVar31._0_2_ * (int)auVar31._0_2_;
                auVar28._4_4_ = auVar24._4_4_ + (int)auVar31._4_2_ * (int)auVar31._4_2_;
                auVar28._8_4_ = auVar24._8_4_ + (int)auVar31._8_2_ * (int)auVar31._8_2_;
                auVar28._12_4_ = auVar24._12_4_ + (int)auVar31._12_2_ * (int)auVar31._12_2_;
                auVar31._0_4_ = auVar26._0_4_ + (int)auVar30._0_2_ * (int)auVar30._0_2_;
                auVar31._4_4_ = auVar26._4_4_ + (int)auVar30._4_2_ * (int)auVar30._4_2_;
                auVar31._8_4_ = auVar26._8_4_ + (int)auVar30._8_2_ * (int)auVar30._8_2_;
                auVar31._12_4_ = auVar26._12_4_ + (int)auVar30._12_2_ * (int)auVar30._12_2_;
                auVar24 = auVar28;
                auVar26 = auVar31;
              } while (uVar17 != 0);
              iVar9 = auVar31._0_4_ + auVar28._0_4_ + auVar31._4_4_ + auVar28._4_4_ +
                      auVar31._8_4_ + auVar28._8_4_ + auVar31._12_4_ + auVar28._12_4_;
              if (uVar12 == uVar14) goto LAB_00e71c00;
            }
            do {
              lVar13 = lVar10 * 4;
              lVar10 = lVar10 + 1;
              iVar23 = (int)(short)(*(int *)(lVar18 + lVar13) << (ulong)(uVar8 & 0x1f));
              iVar9 = iVar9 + iVar23 * iVar23;
            } while (lVar10 < lVar11);
          }
          else {
            lVar11 = (long)((int)sVar5 << (ulong)(param_6 & 0x1f));
            lVar13 = lVar11;
            if (lVar11 < lVar10 + 1) {
              lVar13 = lVar10 + 1;
            }
            uVar12 = lVar13 - lVar10;
            if (uVar12 < 8) {
              iVar9 = 0;
            }
            else {
              lVar13 = lVar19 + lVar10;
              uVar14 = uVar12 & 0xfffffffffffffff8;
              auVar30._4_4_ = uVar7;
              auVar30._0_4_ = uVar7;
              auVar30._8_4_ = uVar7;
              auVar30._12_4_ = uVar7;
              lVar10 = uVar14 + lVar10;
              pauVar16 = (undefined (*) [16])(lVar2 + lVar13 * 4);
              uVar17 = uVar14;
              auVar24 = ZEXT816(0);
              auVar26 = ZEXT816(0);
              do {
                pauVar1 = pauVar16 + -1;
                auVar29 = *pauVar16;
                auVar28 = NEON_neg(auVar30,4);
                uVar17 = uVar17 - 8;
                pauVar16 = pauVar16 + 2;
                auVar31 = NEON_sshl(*pauVar1,auVar28,4);
                auVar29 = NEON_sshl(auVar29,auVar28,4);
                auVar25._0_4_ = auVar24._0_4_ + (int)auVar31._0_2_ * (int)auVar31._0_2_;
                auVar25._4_4_ = auVar24._4_4_ + (int)auVar31._4_2_ * (int)auVar31._4_2_;
                auVar25._8_4_ = auVar24._8_4_ + (int)auVar31._8_2_ * (int)auVar31._8_2_;
                auVar25._12_4_ = auVar24._12_4_ + (int)auVar31._12_2_ * (int)auVar31._12_2_;
                auVar27._0_4_ = auVar26._0_4_ + (int)auVar29._0_2_ * (int)auVar29._0_2_;
                auVar27._4_4_ = auVar26._4_4_ + (int)auVar29._4_2_ * (int)auVar29._4_2_;
                auVar27._8_4_ = auVar26._8_4_ + (int)auVar29._8_2_ * (int)auVar29._8_2_;
                auVar27._12_4_ = auVar26._12_4_ + (int)auVar29._12_2_ * (int)auVar29._12_2_;
                auVar24 = auVar25;
                auVar26 = auVar27;
              } while (uVar17 != 0);
              iVar9 = auVar27._0_4_ + auVar25._0_4_ + auVar27._4_4_ + auVar25._4_4_ +
                      auVar27._8_4_ + auVar25._8_4_ + auVar27._12_4_ + auVar25._12_4_;
              if (uVar12 == uVar14) goto LAB_00e71c00;
            }
            do {
              lVar13 = lVar10 * 4;
              lVar10 = lVar10 + 1;
              iVar23 = (int)(short)(*(int *)(lVar18 + lVar13) >> (uVar7 & 0x1f));
              iVar9 = iVar9 + iVar23 * iVar23;
            } while (lVar10 < lVar11);
          }
LAB_00e71c00:
          if ((int)uVar7 < 0) {
            iVar9 = celt_sqrt(iVar9);
            iVar9 = iVar9 >> (-uVar7 & 0x1f);
          }
          else {
            iVar9 = celt_sqrt(iVar9);
            iVar9 = iVar9 << (ulong)(uVar7 & 0x1f);
          }
          iVar9 = iVar9 + 1;
        }
        *(int *)(param_3 + (long)((int)uVar22 + *(int *)(param_1 + 8) * (int)uVar20) * 4) = iVar9;
        uVar22 = uVar3;
      } while (uVar3 != param_4);
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + (int)uVar6;
      lVar18 = lVar18 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
    } while (uVar20 != param_5);
  }
  return;
}


