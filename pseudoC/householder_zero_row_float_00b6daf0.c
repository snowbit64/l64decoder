// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: householder_zero_row<float>
// Entry Point: 00b6daf0
// Size: 1316 bytes
// Signature: void __cdecl householder_zero_row<float>(float * param_1, float * param_2, int param_3, int param_4, int param_5, int param_6, float * param_7)


/* void SVDUtilDetails::householder_zero_row<float>(float*, float*, int, int, int, int, float*) */

void SVDUtilDetails::householder_zero_row<float>
               (float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
               float *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  
  if (param_6 <= param_4) {
    return;
  }
  iVar2 = param_6 * param_3;
  lVar11 = (long)param_4;
  lVar20 = (long)param_6;
  lVar14 = (long)iVar2;
  uVar10 = lVar20 - lVar11;
  if (uVar10 < 8) {
    fVar21 = 0.0;
    lVar16 = lVar11;
LAB_00b6dbd4:
    lVar15 = lVar20 - lVar16;
    pfVar5 = param_1 + lVar16 + lVar14;
    do {
      lVar15 = lVar15 + -1;
      fVar21 = fVar21 + ABS(*pfVar5);
      pfVar5 = pfVar5 + 1;
    } while (lVar15 != 0);
  }
  else {
    uVar12 = uVar10 & 0xfffffffffffffff8;
    fVar21 = 0.0;
    lVar16 = uVar12 + lVar11;
    puVar17 = (undefined8 *)(param_1 + lVar11 + lVar14 + 4);
    uVar19 = uVar12;
    do {
      uVar19 = uVar19 - 8;
      fVar21 = fVar21 + ABS((float)puVar17[-2]) + ABS((float)((ulong)puVar17[-2] >> 0x20)) +
               ABS((float)puVar17[-1]) + ABS((float)((ulong)puVar17[-1] >> 0x20)) +
               ABS((float)*puVar17) + ABS((float)((ulong)*puVar17 >> 0x20)) + ABS((float)puVar17[1])
               + ABS((float)((ulong)puVar17[1] >> 0x20));
      puVar17 = puVar17 + 4;
    } while (uVar19 != 0);
    if (uVar10 != uVar12) goto LAB_00b6dbd4;
  }
  if (fVar21 == 0.0) {
    return;
  }
  if (param_4 < param_6) {
    lVar16 = (long)param_4;
    if ((uVar10 < 8) ||
       ((param_7 + lVar11 < param_1 + lVar20 + lVar14 &&
        (param_1 + lVar11 + lVar14 < param_7 + lVar20)))) {
LAB_00b6dc8c:
      lVar11 = lVar20 - lVar16;
      pfVar5 = param_7 + lVar16;
      pfVar7 = param_1 + lVar16 + iVar2;
      do {
        lVar11 = lVar11 + -1;
        *pfVar5 = *pfVar7 / fVar21;
        pfVar5 = pfVar5 + 1;
        pfVar7 = pfVar7 + 1;
      } while (lVar11 != 0);
    }
    else {
      uVar12 = uVar10 & 0xfffffffffffffff8;
      lVar16 = uVar12 + lVar16;
      puVar17 = (undefined8 *)(param_7 + lVar11 + 4);
      puVar3 = (undefined8 *)(param_1 + lVar11 + iVar2 + 4);
      uVar19 = uVar12;
      do {
        puVar4 = puVar3 + -1;
        uVar24 = puVar3[-2];
        uVar26 = puVar3[1];
        uVar25 = *puVar3;
        uVar19 = uVar19 - 8;
        puVar3 = puVar3 + 4;
        puVar17[-1] = CONCAT44((float)((ulong)*puVar4 >> 0x20) / fVar21,(float)*puVar4 / fVar21);
        puVar17[-2] = CONCAT44((float)((ulong)uVar24 >> 0x20) / fVar21,(float)uVar24 / fVar21);
        puVar17[1] = CONCAT44((float)((ulong)uVar26 >> 0x20) / fVar21,(float)uVar26 / fVar21);
        *puVar17 = CONCAT44((float)((ulong)uVar25 >> 0x20) / fVar21,(float)uVar25 / fVar21);
        puVar17 = puVar17 + 4;
      } while (uVar19 != 0);
      if (uVar10 != uVar12) goto LAB_00b6dc8c;
    }
    if (param_4 < param_6) {
      fVar27 = 0.0;
      lVar14 = (long)param_4;
      lVar11 = lVar14;
      if (1 < uVar10) {
        uVar12 = uVar10 & 0xfffffffffffffffe;
        fVar27 = 0.0;
        lVar11 = uVar12 + lVar14;
        pfVar5 = param_7 + lVar14 + 1;
        uVar19 = uVar12;
        do {
          pfVar7 = pfVar5 + -1;
          fVar22 = *pfVar5;
          uVar19 = uVar19 - 2;
          pfVar5 = pfVar5 + 2;
          fVar27 = fVar27 + *pfVar7 * *pfVar7 + fVar22 * fVar22;
        } while (uVar19 != 0);
        if (uVar10 == uVar12) goto LAB_00b6dd38;
      }
      lVar14 = lVar20 - lVar11;
      pfVar5 = param_7 + lVar11;
      do {
        lVar14 = lVar14 + -1;
        fVar27 = (float)NEON_fmadd(*pfVar5,*pfVar5,fVar27);
        pfVar5 = pfVar5 + 1;
      } while (lVar14 != 0);
      goto LAB_00b6dd38;
    }
  }
  fVar27 = 0.0;
LAB_00b6dd38:
  lVar11 = (long)param_4;
  fVar28 = param_7[lVar11];
  fVar22 = -SQRT(fVar27);
  if (fVar28 <= 0.0) {
    fVar22 = SQRT(fVar27);
  }
  param_7[lVar11] = fVar28 - fVar22;
  param_1[iVar2 + param_4] = fVar21 * fVar22;
  if (param_4 + 1 < param_6) {
    memset(param_1 + (iVar2 + param_4 + 1),0,(ulong)((param_6 - param_4) - 2) * 4 + 4);
  }
  fVar21 = (float)NEON_fnmsub(fVar28,fVar22,fVar27);
  if (param_3 + 1 < param_5) {
    lVar14 = (long)(param_3 + 1);
    uVar10 = lVar20 - lVar11;
    lVar13 = lVar20 * lVar14;
    uVar19 = uVar10 & 0xfffffffffffffff8;
    lVar16 = 0;
    lVar15 = lVar11 + lVar13;
    lVar1 = lVar20 + lVar13;
    puVar17 = (undefined8 *)(param_7 + lVar11 + 4);
    puVar3 = (undefined8 *)(param_1 + lVar15 + 4);
    do {
      if (param_4 < param_6) {
        fVar27 = 0.0;
        lVar9 = lVar11;
        if (uVar10 < 8) {
LAB_00b6de80:
          lVar8 = lVar20 - lVar9;
          pfVar5 = param_7 + lVar9;
          pfVar7 = param_1 + lVar9 + lVar13;
          do {
            lVar8 = lVar8 + -1;
            fVar27 = (float)NEON_fmadd(*pfVar7,*pfVar5,fVar27);
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          } while (lVar8 != 0);
        }
        else {
          fVar27 = 0.0;
          puVar4 = puVar3;
          puVar6 = puVar17;
          uVar12 = uVar19;
          do {
            uVar12 = uVar12 - 8;
            fVar27 = fVar27 + (float)puVar4[-2] * (float)puVar6[-2] +
                     (float)((ulong)puVar4[-2] >> 0x20) * (float)((ulong)puVar6[-2] >> 0x20) +
                     (float)puVar4[-1] * (float)puVar6[-1] +
                     (float)((ulong)puVar4[-1] >> 0x20) * (float)((ulong)puVar6[-1] >> 0x20) +
                     (float)*puVar4 * (float)*puVar6 +
                     (float)((ulong)*puVar4 >> 0x20) * (float)((ulong)*puVar6 >> 0x20) +
                     (float)puVar4[1] * (float)puVar6[1] +
                     (float)((ulong)puVar4[1] >> 0x20) * (float)((ulong)puVar6[1] >> 0x20);
            puVar4 = puVar4 + 4;
            puVar6 = puVar6 + 4;
          } while (uVar12 != 0);
          lVar9 = lVar11 + uVar19;
          if (uVar10 != uVar19) goto LAB_00b6de80;
        }
        if (param_4 < param_6) {
          fVar27 = fVar27 / fVar21;
          lVar9 = lVar11;
          if ((7 < uVar10) &&
             ((puVar4 = puVar17, puVar6 = puVar3, uVar12 = uVar19,
              param_7 + lVar20 <= param_1 + lVar15 + lVar16 * lVar20 ||
              (param_1 + lVar1 + lVar16 * lVar20 <= param_7 + lVar11)))) {
            do {
              uVar24 = puVar4[-2];
              uVar26 = puVar4[1];
              uVar25 = *puVar4;
              uVar12 = uVar12 - 8;
              puVar6[-1] = CONCAT44((float)((ulong)puVar6[-1] >> 0x20) +
                                    (float)((ulong)puVar4[-1] >> 0x20) * fVar27,
                                    (float)puVar6[-1] + (float)puVar4[-1] * fVar27);
              puVar6[-2] = CONCAT44((float)((ulong)puVar6[-2] >> 0x20) +
                                    (float)((ulong)uVar24 >> 0x20) * fVar27,
                                    (float)puVar6[-2] + (float)uVar24 * fVar27);
              puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                                   (float)((ulong)uVar26 >> 0x20) * fVar27,
                                   (float)puVar6[1] + (float)uVar26 * fVar27);
              *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                                 (float)((ulong)uVar25 >> 0x20) * fVar27,
                                 (float)*puVar6 + (float)uVar25 * fVar27);
              puVar4 = puVar4 + 4;
              puVar6 = puVar6 + 4;
            } while (uVar12 != 0);
            lVar9 = lVar11 + uVar19;
            if (uVar10 == uVar19) goto LAB_00b6dddc;
          }
          lVar8 = lVar20 - lVar9;
          pfVar5 = param_1 + lVar9 + lVar13;
          pfVar7 = param_7 + lVar9;
          do {
            lVar8 = lVar8 + -1;
            fVar22 = (float)NEON_fmadd(fVar27,*pfVar7,*pfVar5);
            *pfVar5 = fVar22;
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          } while (lVar8 != 0);
        }
      }
LAB_00b6dddc:
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 1;
      puVar3 = (undefined8 *)((long)puVar3 + lVar20 * 4);
      lVar13 = lVar13 + lVar20;
    } while ((int)lVar14 != param_5);
  }
  if (0 < param_6) {
    uVar19 = (ulong)(uint)param_6;
    uVar10 = 0;
    pfVar5 = param_2 + lVar11 * uVar19;
    do {
      if (param_4 < param_6) {
        fVar27 = 0.0;
        lVar11 = uVar19 - lVar11;
        pfVar7 = pfVar5;
        pfVar18 = param_7 + lVar11;
        do {
          fVar22 = *pfVar7;
          pfVar7 = pfVar7 + uVar19;
          lVar11 = lVar11 + -1;
          fVar27 = (float)NEON_fmadd(fVar22,*pfVar18,fVar27);
          pfVar18 = pfVar18 + 1;
        } while (lVar11 != 0);
        if (param_4 < param_6) {
          lVar11 = 0;
          lVar14 = uVar19 - lVar11;
          pfVar7 = param_7 + lVar11;
          do {
            lVar14 = lVar14 + -1;
            uVar23 = NEON_fmadd(fVar27 / fVar21,*pfVar7,*(undefined4 *)((long)pfVar5 + lVar11));
            *(undefined4 *)((long)pfVar5 + lVar11) = uVar23;
            lVar11 = lVar11 + uVar19 * 4;
            pfVar7 = pfVar7 + 1;
          } while (lVar14 != 0);
        }
      }
      uVar10 = uVar10 + 1;
      pfVar5 = pfVar5 + 1;
    } while (uVar10 != uVar19);
  }
  return;
}


