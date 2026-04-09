// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: householder_zero_col<float>
// Entry Point: 00b6d64c
// Size: 1188 bytes
// Signature: void __cdecl householder_zero_col<float>(float * param_1, float * param_2, int param_3, int param_4, int param_5, int param_6, float * param_7)


/* void SVDUtilDetails::householder_zero_col<float>(float*, float*, int, int, int, int, float*) */

void SVDUtilDetails::householder_zero_col<float>
               (float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
               float *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if (param_5 <= param_3) {
    return;
  }
  lVar8 = (long)param_3;
  lVar9 = (long)param_5;
  lVar12 = (long)param_6;
  uVar10 = lVar9 - lVar8;
  if (uVar10 < 2) {
    fVar20 = 0.0;
    lVar11 = lVar8;
LAB_00b6d6d8:
    lVar16 = lVar9 - lVar11;
    pfVar5 = param_1 + (long)param_4 + lVar11 * lVar12;
    do {
      fVar21 = *pfVar5;
      pfVar5 = pfVar5 + lVar12;
      lVar16 = lVar16 + -1;
      fVar20 = fVar20 + ABS(fVar21);
    } while (lVar16 != 0);
  }
  else {
    uVar15 = uVar10 & 0xfffffffffffffffe;
    fVar20 = 0.0;
    lVar11 = uVar15 + lVar8;
    pfVar5 = param_1;
    uVar13 = uVar15;
    do {
      pfVar7 = pfVar5 + lVar12 * lVar8 + (long)param_4;
      uVar13 = uVar13 - 2;
      pfVar17 = pfVar5 + (long)param_4 + lVar12 + lVar12 * lVar8;
      pfVar5 = pfVar5 + lVar12 * 2;
      fVar20 = fVar20 + ABS(*pfVar7) + ABS(*pfVar17);
    } while (uVar13 != 0);
    if (uVar10 != uVar15) goto LAB_00b6d6d8;
  }
  if (fVar20 == 0.0) {
    return;
  }
  if (param_3 < param_5) {
    pfVar5 = param_1 + param_6 * lVar8 + (long)param_4;
    pfVar7 = param_7 + lVar8;
    uVar13 = uVar10;
    do {
      fVar21 = *pfVar5;
      pfVar5 = (float *)((long)pfVar5 +
                        (-(ulong)((uint)param_6 >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)param_6 << 2));
      uVar13 = uVar13 - 1;
      *pfVar7 = fVar21 / fVar20;
      pfVar7 = pfVar7 + 1;
    } while (uVar13 != 0);
    if (param_5 <= param_3) goto LAB_00b6d7c4;
    fVar21 = 0.0;
    lVar12 = (long)param_3;
    lVar8 = lVar12;
    if (uVar10 < 2) {
LAB_00b6d7a8:
      lVar12 = lVar9 - lVar8;
      pfVar5 = param_7 + lVar8;
      do {
        lVar12 = lVar12 + -1;
        fVar21 = (float)NEON_fmadd(*pfVar5,*pfVar5,fVar21);
        pfVar5 = pfVar5 + 1;
      } while (lVar12 != 0);
    }
    else {
      uVar15 = uVar10 & 0xfffffffffffffffe;
      fVar21 = 0.0;
      lVar8 = uVar15 + lVar12;
      pfVar5 = param_7 + lVar12 + 1;
      uVar13 = uVar15;
      do {
        pfVar7 = pfVar5 + -1;
        fVar24 = *pfVar5;
        uVar13 = uVar13 - 2;
        pfVar5 = pfVar5 + 2;
        fVar21 = fVar21 + *pfVar7 * *pfVar7 + fVar24 * fVar24;
      } while (uVar13 != 0);
      if (uVar10 != uVar15) goto LAB_00b6d7a8;
    }
  }
  else {
LAB_00b6d7c4:
    fVar21 = 0.0;
  }
  lVar8 = (long)param_3;
  fVar22 = param_7[lVar8];
  fVar24 = -SQRT(fVar21);
  if (fVar22 <= 0.0) {
    fVar24 = SQRT(fVar21);
  }
  param_7[lVar8] = fVar22 - fVar24;
  param_1[param_4 + param_6 * param_3] = fVar20 * fVar24;
  if (param_3 + 1 < param_5) {
    lVar12 = (long)(param_3 + 1);
    lVar11 = (long)param_6;
    uVar2 = (param_5 - param_3) - 2;
    if (uVar2 != 0) {
      lVar16 = lVar11 * lVar12;
      uVar10 = (ulong)uVar2 + 1;
      uVar15 = uVar10 & 0x1fffffffe;
      lVar12 = uVar15 + lVar12;
      pfVar5 = param_1;
      uVar13 = uVar15;
      do {
        pfVar5[lVar16 + param_4] = 0.0;
        uVar13 = uVar13 - 2;
        pfVar5[(long)param_4 + lVar11 + lVar16] = 0.0;
        pfVar5 = pfVar5 + lVar11 * 2;
      } while (uVar13 != 0);
      if (uVar10 == uVar15) goto LAB_00b6d890;
    }
    iVar14 = param_5 - (int)lVar12;
    pfVar5 = param_1 + (long)param_4 + lVar12 * lVar11;
    do {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + lVar11;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
LAB_00b6d890:
  fVar20 = (float)NEON_fnmsub(fVar22,fVar24,fVar21);
  if (param_4 + 1 < param_6) {
    lVar12 = (long)(param_4 + 1);
    uVar10 = -(ulong)((uint)param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_6 << 2;
    pfVar5 = param_1 + lVar12 + lVar8 * param_6;
    do {
      if (param_3 < param_5) {
        fVar21 = 0.0;
        lVar11 = lVar9 - lVar8;
        pfVar7 = pfVar5;
        pfVar17 = param_7 + lVar8;
        do {
          fVar24 = *pfVar7;
          pfVar7 = (float *)((long)pfVar7 + uVar10);
          lVar11 = lVar11 + -1;
          fVar21 = (float)NEON_fmadd(fVar24,*pfVar17,fVar21);
          pfVar17 = pfVar17 + 1;
        } while (lVar11 != 0);
        if (param_3 < param_5) {
          lVar11 = 0;
          lVar16 = lVar9 - lVar8;
          pfVar7 = param_7 + lVar8;
          do {
            lVar16 = lVar16 + -1;
            uVar23 = NEON_fmadd(fVar21 / fVar20,*pfVar7,*(undefined4 *)((long)pfVar5 + lVar11));
            *(undefined4 *)((long)pfVar5 + lVar11) = uVar23;
            lVar11 = lVar11 + uVar10;
            pfVar7 = pfVar7 + 1;
          } while (lVar16 != 0);
        }
      }
      lVar12 = lVar12 + 1;
      pfVar5 = pfVar5 + 1;
    } while ((int)lVar12 != param_6);
  }
  if (0 < param_5) {
    uVar13 = (ulong)(uint)param_5;
    uVar15 = uVar13 - lVar8;
    uVar18 = uVar15 & 0xfffffffffffffff8;
    lVar9 = 0;
    uVar10 = 0;
    puVar3 = (undefined8 *)(param_2 + lVar8 + 4);
    puVar1 = (undefined8 *)(param_7 + lVar8 + 4);
    do {
      if (param_3 < param_5) {
        fVar21 = 0.0;
        lVar12 = lVar8;
        if (uVar15 < 8) {
LAB_00b6da18:
          lVar11 = uVar13 - lVar12;
          pfVar5 = param_7 + lVar12;
          pfVar7 = param_2 + lVar12 + lVar9;
          do {
            lVar11 = lVar11 + -1;
            fVar21 = (float)NEON_fmadd(*pfVar7,*pfVar5,fVar21);
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          } while (lVar11 != 0);
        }
        else {
          fVar21 = 0.0;
          puVar4 = puVar1;
          puVar6 = puVar3;
          uVar19 = uVar18;
          do {
            uVar19 = uVar19 - 8;
            fVar21 = fVar21 + (float)puVar6[-2] * (float)puVar4[-2] +
                     (float)((ulong)puVar6[-2] >> 0x20) * (float)((ulong)puVar4[-2] >> 0x20) +
                     (float)puVar6[-1] * (float)puVar4[-1] +
                     (float)((ulong)puVar6[-1] >> 0x20) * (float)((ulong)puVar4[-1] >> 0x20) +
                     (float)*puVar6 * (float)*puVar4 +
                     (float)((ulong)*puVar6 >> 0x20) * (float)((ulong)*puVar4 >> 0x20) +
                     (float)puVar6[1] * (float)puVar4[1] +
                     (float)((ulong)puVar6[1] >> 0x20) * (float)((ulong)puVar4[1] >> 0x20);
            puVar4 = puVar4 + 4;
            puVar6 = puVar6 + 4;
          } while (uVar19 != 0);
          lVar12 = lVar8 + uVar18;
          if (uVar15 != uVar18) goto LAB_00b6da18;
        }
        if (param_3 < param_5) {
          fVar21 = fVar21 / fVar20;
          lVar12 = lVar8;
          if ((7 < uVar15) &&
             ((puVar4 = puVar3, puVar6 = puVar1, uVar19 = uVar18,
              param_7 + uVar13 <= param_2 + lVar8 + uVar10 * uVar13 ||
              (param_2 + uVar10 * uVar13 + uVar13 <= param_7 + lVar8)))) {
            do {
              uVar25 = puVar6[-2];
              uVar27 = puVar6[1];
              uVar26 = *puVar6;
              uVar19 = uVar19 - 8;
              puVar4[-1] = CONCAT44((float)((ulong)puVar4[-1] >> 0x20) +
                                    (float)((ulong)puVar6[-1] >> 0x20) * fVar21,
                                    (float)puVar4[-1] + (float)puVar6[-1] * fVar21);
              puVar4[-2] = CONCAT44((float)((ulong)puVar4[-2] >> 0x20) +
                                    (float)((ulong)uVar25 >> 0x20) * fVar21,
                                    (float)puVar4[-2] + (float)uVar25 * fVar21);
              puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                                   (float)((ulong)uVar27 >> 0x20) * fVar21,
                                   (float)puVar4[1] + (float)uVar27 * fVar21);
              *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) +
                                 (float)((ulong)uVar26 >> 0x20) * fVar21,
                                 (float)*puVar4 + (float)uVar26 * fVar21);
              puVar4 = puVar4 + 4;
              puVar6 = puVar6 + 4;
            } while (uVar19 != 0);
            lVar12 = lVar8 + uVar18;
            if (uVar15 == uVar18) goto LAB_00b6d978;
          }
          lVar11 = uVar13 - lVar12;
          pfVar5 = param_2 + lVar12 + lVar9;
          pfVar7 = param_7 + lVar12;
          do {
            lVar11 = lVar11 + -1;
            fVar24 = (float)NEON_fmadd(fVar21,*pfVar7,*pfVar5);
            *pfVar5 = fVar24;
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          } while (lVar11 != 0);
        }
      }
LAB_00b6d978:
      uVar10 = uVar10 + 1;
      puVar3 = (undefined8 *)((long)puVar3 + uVar13 * 4);
      lVar9 = lVar9 + uVar13;
    } while (uVar10 != uVar13);
  }
  return;
}


