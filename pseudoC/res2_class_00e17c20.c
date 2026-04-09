// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res2_class
// Entry Point: 00e17c20
// Size: 1028 bytes
// Signature: undefined res2_class(void)


void ** res2_class(undefined8 param_1,long **param_2,long *param_3,long param_4,ulong param_5)

{
  undefined (*pauVar1) [16];
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void **ppvVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined (*pauVar18) [16];
  long lVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  undefined8 uVar27;
  undefined auVar28 [16];
  uint uVar30;
  undefined auVar29 [16];
  undefined4 uVar31;
  undefined4 uVar33;
  undefined auVar32 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  
  uVar12 = (uint)param_5;
  if ((int)uVar12 < 1) {
    return (void **)0x0;
  }
  if (uVar12 < 8) {
    uVar17 = 0;
    iVar26 = 0;
LAB_00e17cb4:
    lVar15 = (param_5 & 0xffffffff) - uVar17;
    piVar20 = (int *)(param_4 + uVar17 * 4);
    do {
      if (*piVar20 != 0) {
        iVar26 = iVar26 + 1;
      }
      lVar15 = lVar15 + -1;
      piVar20 = piVar20 + 1;
    } while (lVar15 != 0);
  }
  else {
    uVar17 = param_5 & 0xfffffff8;
    pauVar18 = (undefined (*) [16])(param_4 + 0x10);
    uVar24 = uVar17;
    auVar29 = ZEXT816(0);
    auVar32 = ZEXT816(0);
    do {
      pauVar1 = pauVar18 + -1;
      auVar28 = *pauVar18;
      pauVar18 = pauVar18 + 2;
      uVar24 = uVar24 - 8;
      auVar34 = NEON_cmtst(*pauVar1,*pauVar1,4);
      auVar35 = NEON_cmtst(auVar28,auVar28,4);
      auVar28._0_4_ = auVar29._0_4_ - auVar34._0_4_;
      auVar28._4_4_ = auVar29._4_4_ - auVar34._4_4_;
      auVar28._8_4_ = auVar29._8_4_ - auVar34._8_4_;
      auVar28._12_4_ = auVar29._12_4_ - auVar34._12_4_;
      auVar34._0_4_ = auVar32._0_4_ - auVar35._0_4_;
      auVar34._4_4_ = auVar32._4_4_ - auVar35._4_4_;
      auVar34._8_4_ = auVar32._8_4_ - auVar35._8_4_;
      auVar34._12_4_ = auVar32._12_4_ - auVar35._12_4_;
      auVar29 = auVar28;
      auVar32 = auVar34;
    } while (uVar24 != 0);
    iVar26 = auVar34._0_4_ + auVar28._0_4_ + auVar34._4_4_ + auVar28._4_4_ +
             auVar34._8_4_ + auVar28._8_4_ + auVar34._12_4_ + auVar28._12_4_;
    if (uVar17 != (param_5 & 0xffffffff)) goto LAB_00e17cb4;
  }
  if (iVar26 == 0) {
    return (void **)0x0;
  }
  plVar25 = *param_2;
  iVar26 = *(int *)(plVar25 + 2);
  lVar15 = (long)iVar26;
  iVar3 = *(int *)(plVar25 + 3);
  uVar30 = 0;
  if (iVar26 != 0) {
    uVar30 = (*(int *)(plVar25 + 1) - *(int *)plVar25) / iVar26;
  }
  ppvVar7 = (void **)_vorbis_block_alloc(param_1,8);
  uVar24 = -(ulong)(uVar30 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar30 << 3;
  pvVar8 = (void *)_vorbis_block_alloc(param_1,uVar24);
  *ppvVar7 = pvVar8;
  memset(pvVar8,0,uVar24);
  if ((int)uVar30 < 1) goto LAB_00e17ff8;
  lVar16 = (long)(int)uVar30;
  lVar23 = (long)iVar3 + -1;
  pvVar8 = *ppvVar7;
  if (iVar26 < 1) {
    if (1 < iVar3) {
      lVar15 = 0;
      if (lVar23 < 2) {
        lVar23 = 1;
      }
      do {
        lVar11 = 0;
        do {
          if ((-1 < *(int *)((long)plVar25 + lVar11 * 4 + 0x920)) &&
             (lVar19 = lVar11, -1 < *(int *)((long)plVar25 + lVar11 * 4 + 0xa20))) break;
          lVar11 = lVar11 + 1;
          lVar19 = lVar23;
        } while (lVar23 != lVar11);
        *(long *)((long)pvVar8 + lVar15 * 8) = lVar19;
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar16);
      goto LAB_00e17ff8;
    }
  }
  else {
    uVar17 = (ulong)(int)uVar12;
    lVar11 = 0;
    if (uVar17 != 0) {
      lVar11 = *plVar25 / (long)uVar17;
    }
    lVar19 = *param_3;
    if (1 < (int)uVar12) {
      uVar24 = uVar17 - 1;
      lVar21 = 0;
      if (lVar23 < 2) {
        lVar23 = 1;
      }
      do {
        uVar12 = 0;
        lVar9 = 0;
        iVar26 = 0;
        do {
          iVar4 = *(int *)(lVar19 + lVar11 * 4);
          iVar6 = -iVar4;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          if (uVar24 < 2) {
            uVar22 = 1;
LAB_00e17e18:
            lVar14 = uVar17 - uVar22;
            plVar13 = param_3 + uVar22;
            uVar30 = uVar12;
            do {
              uVar5 = *(uint *)(*plVar13 + lVar11 * 4);
              uVar12 = -uVar5;
              if (-1 < (int)uVar5) {
                uVar12 = uVar5;
              }
              if ((int)uVar12 <= (int)uVar30) {
                uVar12 = uVar30;
              }
              lVar14 = lVar14 + -1;
              plVar13 = plVar13 + 1;
              uVar30 = uVar12;
            } while (lVar14 != 0);
          }
          else {
            uVar27 = CONCAT44(uVar12,uVar12);
            uVar22 = uVar24 & 0xfffffffffffffffe;
            plVar13 = param_3 + 2;
            do {
              plVar2 = plVar13 + -1;
              lVar14 = *plVar13;
              plVar13 = plVar13 + 2;
              uVar22 = uVar22 - 2;
              uVar31 = MP_INT_ABS(*(undefined4 *)(*plVar2 + lVar11 * 4));
              uVar33 = MP_INT_ABS(*(undefined4 *)(lVar14 + lVar11 * 4));
              uVar27 = NEON_smax(CONCAT44(uVar33,uVar31),uVar27,4);
            } while (uVar22 != 0);
            uVar30 = (uint)((ulong)uVar27 >> 0x20);
            uVar12 = (uint)uVar27;
            if ((uint)uVar27 <= uVar30) {
              uVar12 = uVar30;
            }
            uVar22 = uVar24 | 1;
            if (uVar24 != (uVar24 & 0xfffffffffffffffe)) goto LAB_00e17e18;
          }
          lVar11 = lVar11 + 1;
          if (iVar6 <= iVar26) {
            iVar6 = iVar26;
          }
          lVar9 = lVar9 + uVar17;
          iVar26 = iVar6;
        } while (lVar9 < lVar15);
        if (iVar3 < 2) {
          lVar9 = 0;
        }
        else {
          lVar14 = 0;
          do {
            if ((iVar6 <= *(int *)((long)plVar25 + lVar14 * 4 + 0x920)) &&
               (lVar9 = lVar14, (int)uVar12 <= *(int *)((long)plVar25 + lVar14 * 4 + 0xa20))) break;
            lVar14 = lVar14 + 1;
            lVar9 = lVar23;
          } while (lVar23 != lVar14);
        }
        *(long *)((long)pvVar8 + lVar21 * 8) = lVar9;
        lVar21 = lVar21 + 1;
      } while (lVar21 != lVar16);
      goto LAB_00e17ff8;
    }
    if (1 < iVar3) {
      lVar21 = 0;
      if (lVar23 < 2) {
        lVar23 = 1;
      }
      uVar24 = 0;
      if (uVar17 != 0) {
        uVar24 = (lVar15 - 1U) / uVar17;
      }
      uVar24 = uVar24 + 1;
      uVar22 = uVar24 & 0xfffffffffffffff8;
      do {
        if (uVar24 < 8) {
          lVar9 = lVar11;
          lVar11 = 0;
          iVar26 = 0;
LAB_00e17f94:
          do {
            iVar6 = *(int *)(lVar19 + lVar9 * 4);
            lVar9 = lVar9 + 1;
            lVar11 = lVar11 + uVar17;
            iVar3 = -iVar6;
            if (-1 < iVar6) {
              iVar3 = iVar6;
            }
            if (iVar3 <= iVar26) {
              iVar3 = iVar26;
            }
            iVar26 = iVar3;
          } while (lVar11 < lVar15);
        }
        else {
          auVar29 = ZEXT816(0);
          uVar10 = 0;
          auVar32 = ZEXT816(0);
          lVar9 = lVar11 + uVar22;
          pauVar18 = (undefined (*) [16])(lVar19 + 0x10 + lVar11 * 4);
          do {
            auVar28 = pauVar18[-1];
            auVar34 = *pauVar18;
            uVar10 = uVar10 + 8;
            pauVar18 = pauVar18 + 2;
            auVar35._0_4_ = MP_INT_ABS(auVar28._0_4_);
            auVar35._4_4_ = MP_INT_ABS(auVar28._4_4_);
            auVar35._8_4_ = MP_INT_ABS(auVar28._8_4_);
            auVar35._12_4_ = MP_INT_ABS(auVar28._12_4_);
            auVar36._0_4_ = MP_INT_ABS(auVar34._0_4_);
            auVar36._4_4_ = MP_INT_ABS(auVar34._4_4_);
            auVar36._8_4_ = MP_INT_ABS(auVar34._8_4_);
            auVar36._12_4_ = MP_INT_ABS(auVar34._12_4_);
            auVar29 = NEON_smax(auVar35,auVar29,4);
            auVar32 = NEON_smax(auVar36,auVar32,4);
          } while (uVar10 != uVar22);
          auVar29 = NEON_smax(auVar29,auVar32,4);
          iVar26 = NEON_smaxv(auVar29,4);
          lVar11 = uVar22 * uVar17;
          if (uVar24 != uVar22) goto LAB_00e17f94;
        }
        lVar11 = 0;
        do {
          if ((iVar26 <= *(int *)((long)plVar25 + lVar11 * 4 + 0x920)) &&
             (lVar14 = lVar11, -1 < *(int *)((long)plVar25 + lVar11 * 4 + 0xa20))) break;
          lVar11 = lVar11 + 1;
          lVar14 = lVar23;
        } while (lVar23 != lVar11);
        *(long *)((long)pvVar8 + lVar21 * 8) = lVar14;
        lVar21 = lVar21 + 1;
        lVar11 = lVar9;
      } while (lVar21 != lVar16);
      goto LAB_00e17ff8;
    }
  }
  memset(pvVar8,0,uVar24);
LAB_00e17ff8:
  param_2[9] = (long *)((long)param_2[9] + 1);
  return ppvVar7;
}


