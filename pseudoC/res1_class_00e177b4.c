// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res1_class
// Entry Point: 00e177b4
// Size: 1028 bytes
// Signature: undefined res1_class(void)


void ** res1_class(undefined8 param_1,int **param_2,undefined8 *param_3,int *param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 uVar9;
  void **ppvVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  void **ppvVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined auVar36 [16];
  undefined auVar37 [16];
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  
  if (0 < (int)param_5) {
    uVar27 = 0;
    uVar12 = (ulong)param_5;
    puVar15 = param_3;
    do {
      if (*param_4 != 0) {
        param_3[(int)uVar27] = *puVar15;
        uVar27 = (ulong)((int)uVar27 + 1);
      }
      puVar15 = puVar15 + 1;
      param_4 = param_4 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar26 = (uint)uVar27;
    if (uVar26 != 0) {
      piVar25 = *param_2;
      uVar2 = piVar25[4];
      iVar14 = piVar25[5];
      iVar3 = piVar25[2];
      iVar28 = *piVar25;
      uVar12 = (ulong)(int)uVar2;
      ppvVar10 = (void **)_vorbis_block_alloc(param_1,-(uVar27 >> 0x1f) & 0xfffffff800000000 |
                                                      uVar27 << 3);
      if (0 < (int)uVar26) {
        uVar27 = (ulong)(int)uVar26;
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = (iVar3 - iVar28) / (int)uVar2;
        }
        lVar16 = (long)(int)uVar4;
        uVar24 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
        ppvVar19 = ppvVar10;
        uVar13 = uVar27;
        do {
          pvVar11 = (void *)_vorbis_block_alloc(param_1,uVar24);
          *ppvVar19 = pvVar11;
          memset(pvVar11,0,uVar24);
          uVar13 = uVar13 - 1;
          ppvVar19 = ppvVar19 + 1;
        } while (uVar13 != 0);
        if (0 < (int)uVar4) {
          uVar4 = iVar14 - 1;
          uVar13 = (ulong)uVar4;
          if (uVar4 == 0 || iVar14 < 1) {
            uVar12 = uVar27 & 0xfffffffffffffffe;
            if ((int)uVar2 < 1) {
              lVar17 = 0;
              do {
                uVar13 = uVar12;
                ppvVar19 = ppvVar10 + 1;
                if (uVar26 < 2) {
                  uVar13 = 0;
LAB_00e17b68:
                  lVar23 = uVar27 - uVar13;
                  ppvVar19 = ppvVar10 + uVar13;
                  do {
                    lVar23 = lVar23 + -1;
                    *(undefined8 *)((long)*ppvVar19 + lVar17 * 8) = 0;
                    ppvVar19 = ppvVar19 + 1;
                  } while (lVar23 != 0);
                }
                else {
                  do {
                    pvVar11 = *ppvVar19;
                    uVar13 = uVar13 - 2;
                    *(undefined8 *)((long)ppvVar19[-1] + lVar17 * 8) = 0;
                    *(undefined8 *)((long)pvVar11 + lVar17 * 8) = 0;
                    ppvVar19 = ppvVar19 + 2;
                  } while (uVar13 != 0);
                  uVar13 = uVar12;
                  if (uVar12 != uVar27) goto LAB_00e17b68;
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != lVar16);
            }
            else {
              lVar17 = 0;
              do {
                uVar13 = uVar12;
                ppvVar19 = ppvVar10 + 1;
                if (uVar26 < 2) {
                  uVar13 = 0;
LAB_00e17a80:
                  lVar23 = uVar27 - uVar13;
                  ppvVar19 = ppvVar10 + uVar13;
                  do {
                    lVar23 = lVar23 + -1;
                    *(undefined8 *)((long)*ppvVar19 + lVar17 * 8) = 0;
                    ppvVar19 = ppvVar19 + 1;
                  } while (lVar23 != 0);
                }
                else {
                  do {
                    pvVar11 = *ppvVar19;
                    uVar13 = uVar13 - 2;
                    *(undefined8 *)((long)ppvVar19[-1] + lVar17 * 8) = 0;
                    *(undefined8 *)((long)pvVar11 + lVar17 * 8) = 0;
                    ppvVar19 = ppvVar19 + 2;
                  } while (uVar13 != 0);
                  uVar13 = uVar12;
                  if (uVar12 != uVar27) goto LAB_00e17a80;
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != lVar16);
            }
          }
          else if ((int)uVar2 < 1) {
            lVar17 = 0;
            do {
              uVar12 = 0;
              do {
                uVar24 = 0;
                do {
                  if ((-1 < piVar25[uVar24 + 0x248]) &&
                     ((uVar18 = uVar24, piVar25[uVar24 + 0x288] < 0 ||
                      ((int)((100.0 / (float)uVar2) * 0.0) < piVar25[uVar24 + 0x288])))) break;
                  uVar24 = uVar24 + 1;
                  uVar18 = uVar13;
                } while (uVar13 != uVar24);
                ppvVar19 = ppvVar10 + uVar12;
                uVar12 = uVar12 + 1;
                *(ulong *)((long)*ppvVar19 + lVar17 * 8) = uVar18;
              } while (uVar12 != uVar27);
              lVar17 = lVar17 + 1;
            } while (lVar17 != lVar16);
          }
          else {
            iVar14 = 0;
            lVar17 = 0;
            uVar24 = uVar12 & 0xfffffffffffffff8;
            do {
              iVar3 = *piVar25;
              uVar18 = 0;
              do {
                if (uVar2 < 8) {
                  iVar28 = 0;
                  iVar38 = 0;
                  uVar22 = 0;
LAB_00e179a4:
                  lVar23 = uVar12 - uVar22;
                  piVar21 = (int *)(param_3[uVar18] + ((long)(iVar14 + iVar3) + uVar22) * 4);
                  iVar29 = iVar38;
                  do {
                    iVar30 = *piVar21;
                    iVar38 = -iVar30;
                    if (-1 < iVar30) {
                      iVar38 = iVar30;
                    }
                    iVar28 = iVar38 + iVar28;
                    if (iVar38 <= iVar29) {
                      iVar38 = iVar29;
                    }
                    lVar23 = lVar23 + -1;
                    piVar21 = piVar21 + 1;
                    iVar29 = iVar38;
                  } while (lVar23 != 0);
                }
                else {
                  iVar28 = 0;
                  iVar29 = 0;
                  iVar30 = 0;
                  iVar31 = 0;
                  puVar15 = (undefined8 *)(param_3[uVar18] + (long)(iVar14 + iVar3) * 4 + 0x10);
                  iVar32 = 0;
                  iVar33 = 0;
                  iVar34 = 0;
                  iVar35 = 0;
                  auVar36 = ZEXT816(0);
                  auVar37 = ZEXT816(0);
                  uVar22 = uVar24;
                  do {
                    puVar1 = puVar15 + -2;
                    puVar5 = puVar15 + -1;
                    puVar6 = puVar15 + 1;
                    uVar9 = *puVar15;
                    puVar15 = puVar15 + 4;
                    uVar22 = uVar22 - 8;
                    iVar38 = MP_INT_ABS((int)*puVar1);
                    iVar39 = MP_INT_ABS((int)((ulong)*puVar1 >> 0x20));
                    iVar40 = MP_INT_ABS((int)*puVar5);
                    iVar41 = MP_INT_ABS((int)((ulong)*puVar5 >> 0x20));
                    iVar42 = MP_INT_ABS((int)uVar9);
                    iVar43 = MP_INT_ABS((int)((ulong)uVar9 >> 0x20));
                    iVar44 = MP_INT_ABS((int)*puVar6);
                    iVar45 = MP_INT_ABS((int)((ulong)*puVar6 >> 0x20));
                    auVar7._4_4_ = iVar39;
                    auVar7._0_4_ = iVar38;
                    auVar7._8_4_ = iVar40;
                    auVar7._12_4_ = iVar41;
                    auVar36 = NEON_smax(auVar7,auVar36,4);
                    iVar28 = iVar38 + iVar28;
                    iVar29 = iVar39 + iVar29;
                    iVar30 = iVar40 + iVar30;
                    iVar31 = iVar41 + iVar31;
                    auVar8._4_4_ = iVar43;
                    auVar8._0_4_ = iVar42;
                    auVar8._8_4_ = iVar44;
                    auVar8._12_4_ = iVar45;
                    auVar37 = NEON_smax(auVar8,auVar37,4);
                    iVar32 = iVar42 + iVar32;
                    iVar33 = iVar43 + iVar33;
                    iVar34 = iVar44 + iVar34;
                    iVar35 = iVar45 + iVar35;
                  } while (uVar22 != 0);
                  auVar36 = NEON_smax(auVar36,auVar37,4);
                  iVar38 = NEON_smaxv(auVar36,4);
                  iVar28 = iVar32 + iVar28 + iVar33 + iVar29 + iVar34 + iVar30 + iVar35 + iVar31;
                  uVar22 = uVar24;
                  if (uVar24 != uVar12) goto LAB_00e179a4;
                }
                uVar22 = 0;
                do {
                  if ((iVar38 <= piVar25[uVar22 + 0x248]) &&
                     ((uVar20 = uVar22, piVar25[uVar22 + 0x288] < 0 ||
                      ((int)((100.0 / (float)uVar2) * (float)iVar28) < piVar25[uVar22 + 0x288]))))
                  break;
                  uVar22 = uVar22 + 1;
                  uVar20 = uVar13;
                } while (uVar13 != uVar22);
                ppvVar19 = ppvVar10 + uVar18;
                uVar18 = uVar18 + 1;
                *(ulong *)((long)*ppvVar19 + lVar17 * 8) = uVar20;
              } while (uVar18 != uVar27);
              lVar17 = lVar17 + 1;
              iVar14 = iVar14 + uVar2;
            } while (lVar17 != lVar16);
          }
        }
      }
      param_2[9] = (int *)((long)param_2[9] + 1);
      return ppvVar10;
    }
  }
  return (void **)0x0;
}


