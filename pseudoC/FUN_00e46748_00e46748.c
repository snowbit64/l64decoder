// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e46748
// Entry Point: 00e46748
// Size: 808 bytes
// Signature: undefined FUN_00e46748(void)


ulong FUN_00e46748(long param_1,int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined (*pauVar16) [16];
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  ulong uVar24;
  float *pfVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined4 uVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  
  uVar4 = *(uint *)(param_1 + 0x4f8);
  uVar17 = (ulong)uVar4;
  if (uVar4 == 0) {
    uVar18 = *(uint *)(param_1 + 4);
LAB_00e46788:
    uVar6 = param_2 - param_4;
    uVar19 = (ulong)uVar6;
    *(uint *)(param_1 + 0x4f8) = uVar6;
    if (0 < (int)uVar18) {
      lVar21 = (long)param_4;
      uVar15 = uVar19 & 0xfffffff8;
      uVar20 = 0;
      do {
        if (param_4 < param_2) {
          lVar28 = param_1 + uVar20 * 8;
          lVar23 = *(long *)(lVar28 + 0x378);
          uVar24 = *(ulong *)(lVar28 + 0x478);
          if ((uVar6 < 8) ||
             ((uVar24 < lVar23 + (lVar21 + uVar19) * 4 &&
              ((ulong)(lVar23 + lVar21 * 4) < uVar24 + uVar19 * 4)))) {
            uVar12 = 0;
            lVar28 = lVar21;
          }
          else {
            puVar14 = (undefined8 *)(uVar24 + 0x10);
            pauVar16 = (undefined (*) [16])(lVar23 + (lVar21 + 4) * 4);
            uVar12 = uVar15;
            do {
              auVar32 = pauVar16[-1];
              auVar33 = *pauVar16;
              uVar12 = uVar12 - 8;
              pauVar16 = pauVar16 + 2;
              puVar14[-1] = auVar32._8_8_;
              puVar14[-2] = auVar32._0_8_;
              puVar14[1] = auVar33._8_8_;
              *puVar14 = auVar33._0_8_;
              puVar14 = puVar14 + 4;
            } while (uVar12 != 0);
            uVar12 = uVar15;
            lVar28 = uVar15 + lVar21;
            if (uVar15 == uVar19) goto LAB_00e467b8;
          }
          lVar13 = uVar19 - uVar12;
          puVar11 = (undefined4 *)(uVar24 + uVar12 * 4);
          puVar22 = (undefined4 *)(lVar23 + lVar28 * 4);
          do {
            lVar13 = lVar13 + -1;
            *puVar11 = *puVar22;
            puVar11 = puVar11 + 1;
            puVar22 = puVar22 + 1;
          } while (lVar13 != 0);
        }
LAB_00e467b8:
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar18);
    }
    if (uVar4 == 0) {
      return uVar17;
    }
LAB_00e46a3c:
    if (param_4 <= param_2) {
      param_2 = param_4;
    }
    uVar17 = (ulong)(uint)(param_2 - param_3);
    *(int *)(param_1 + 0x70c) = *(int *)(param_1 + 0x70c) + (param_2 - param_3);
  }
  else {
    if (uVar4 << 1 == *(int *)(param_1 + 0xa8)) {
      uVar19 = *(ulong *)(param_1 + 0x5b8);
joined_r0x00e46878:
      if (uVar19 != 0) {
        uVar18 = *(uint *)(param_1 + 4);
        if (0 < (int)uVar18) {
          iVar5 = uVar4 - 1;
          lVar21 = (long)param_3;
          uVar20 = 0;
          uVar15 = uVar17 & 0xfffffff8;
          do {
            if (0 < (int)uVar4) {
              lVar28 = param_1 + uVar20 * 8;
              lVar23 = *(long *)(lVar28 + 0x378);
              uVar24 = *(ulong *)(lVar28 + 0x478);
              if (uVar4 < 8 || (iVar5 < iVar5 - (int)(uVar17 - 1) || uVar17 - 1 >> 0x20 != 0)) {
                uVar26 = 0;
              }
              else {
                uVar12 = lVar23 + lVar21 * 4;
                uVar3 = lVar23 + (lVar21 + uVar17) * 4;
                uVar26 = 0;
                if (((uVar19 + ((long)iVar5 + 1) * 4 <= uVar12 ||
                      uVar3 <= uVar19 + (((long)iVar5 + 1) - uVar17) * 4) &&
                    (uVar19 + uVar17 * 4 <= uVar12 || uVar3 <= uVar19)) &&
                   (uVar24 + uVar17 * 4 <= uVar12 || uVar3 <= uVar24)) {
                  puVar27 = (undefined8 *)(lVar23 + (lVar21 + 4) * 4);
                  puVar14 = (undefined8 *)(uVar24 + 0x10);
                  puVar30 = (undefined8 *)(uVar19 + 0x10);
                  uVar12 = uVar15;
                  iVar29 = iVar5;
                  do {
                    lVar28 = uVar19 + (long)iVar29 * 4;
                    iVar29 = iVar29 + -8;
                    puVar1 = puVar14 + -2;
                    puVar7 = puVar14 + -1;
                    puVar9 = puVar14 + 1;
                    uVar36 = *puVar14;
                    uVar12 = uVar12 - 8;
                    puVar14 = puVar14 + 4;
                    auVar32 = NEON_rev64(*(undefined (*) [16])(lVar28 + -0xc),4);
                    auVar33 = NEON_rev64(*(undefined (*) [16])(lVar28 + -0x1c),4);
                    auVar32 = NEON_ext(auVar32,auVar32,8,1);
                    auVar34 = NEON_ext(auVar33,auVar33,8,1);
                    puVar2 = puVar30 + -2;
                    puVar10 = puVar30 + -1;
                    puVar8 = puVar30 + 1;
                    uVar35 = *puVar30;
                    puVar30 = puVar30 + 4;
                    auVar33._0_8_ =
                         CONCAT44((float)((ulong)*puVar1 >> 0x20) * auVar32._4_4_ +
                                  (float)((ulong)*puVar2 >> 0x20) *
                                  (float)((ulong)puVar27[-2] >> 0x20),
                                  (float)*puVar1 * auVar32._0_4_ +
                                  (float)*puVar2 * (float)puVar27[-2]);
                    auVar33._8_4_ =
                         (float)*puVar7 * auVar32._8_4_ + (float)*puVar10 * (float)puVar27[-1];
                    auVar33._12_4_ =
                         (float)((ulong)*puVar7 >> 0x20) * auVar32._12_4_ +
                         (float)((ulong)*puVar10 >> 0x20) * (float)((ulong)puVar27[-1] >> 0x20);
                    auVar32._0_8_ =
                         CONCAT44((float)((ulong)uVar36 >> 0x20) * auVar34._4_4_ +
                                  (float)((ulong)uVar35 >> 0x20) * (float)((ulong)*puVar27 >> 0x20),
                                  (float)uVar36 * auVar34._0_4_ + (float)uVar35 * (float)*puVar27);
                    auVar32._8_4_ =
                         (float)*puVar9 * auVar34._8_4_ + (float)*puVar8 * (float)puVar27[1];
                    auVar32._12_4_ =
                         (float)((ulong)*puVar9 >> 0x20) * auVar34._12_4_ +
                         (float)((ulong)*puVar8 >> 0x20) * (float)((ulong)puVar27[1] >> 0x20);
                    puVar27[-1] = auVar33._8_8_;
                    puVar27[-2] = auVar33._0_8_;
                    puVar27[1] = auVar32._8_8_;
                    *puVar27 = auVar32._0_8_;
                    puVar27 = puVar27 + 4;
                  } while (uVar12 != 0);
                  uVar26 = uVar15;
                  if (uVar15 == uVar17) goto LAB_00e468e0;
                }
              }
              iVar29 = iVar5 - (int)uVar26;
              lVar28 = uVar17 - uVar26;
              puVar11 = (undefined4 *)(lVar23 + (lVar21 + uVar26) * 4);
              pfVar25 = (float *)(uVar24 + uVar26 * 4);
              puVar22 = (undefined4 *)(uVar19 + uVar26 * 4);
              do {
                lVar23 = (long)iVar29;
                iVar29 = iVar29 + -1;
                lVar28 = lVar28 + -1;
                uVar31 = NEON_fmadd(*puVar11,*puVar22,*pfVar25 * *(float *)(uVar19 + lVar23 * 4));
                *puVar11 = uVar31;
                puVar11 = puVar11 + 1;
                pfVar25 = pfVar25 + 1;
                puVar22 = puVar22 + 1;
              } while (lVar28 != 0);
            }
LAB_00e468e0:
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar18);
          goto LAB_00e46788;
        }
        *(int *)(param_1 + 0x4f8) = param_2 - param_4;
        goto LAB_00e46a3c;
      }
    }
    else if (uVar4 << 1 == *(int *)(param_1 + 0xac)) {
      uVar19 = *(ulong *)(param_1 + 0x5c0);
      goto joined_r0x00e46878;
    }
    uVar17 = 0;
  }
  return uVar17;
}


