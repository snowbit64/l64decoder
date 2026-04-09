// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: golub_kahn_svd_rot<float>
// Entry Point: 00b6e3cc
// Size: 668 bytes
// Signature: void __cdecl golub_kahn_svd_rot<float>(float * param_1, int param_2, int param_3, float * param_4, int param_5, int param_6, int param_7)


/* void SVDUtilDetails::golub_kahn_svd_rot<float>(float*, int, int, float*, int, int, int) */

void SVDUtilDetails::golub_kahn_svd_rot<float>
               (float *param_1,int param_2,int param_3,float *param_4,int param_5,int param_6,
               int param_7)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  
  iVar2 = param_3 + -1;
  if (iVar2 == 0 || param_3 < 1) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = param_1[iVar2 + (param_3 + -2) * param_6];
  }
  lVar10 = (long)param_2;
  fVar18 = param_1[iVar2 * param_6 + param_3];
  fVar20 = param_1[iVar2 * param_6 + iVar2];
  lVar5 = (long)param_6 * (long)param_2;
  lVar7 = (long)(param_2 + 1);
  fVar16 = (float)NEON_fmadd(fVar20,fVar20,fVar16 * fVar16);
  fVar19 = (float)NEON_fmadd(param_1[param_3 + param_6 * param_3],
                             param_1[param_3 + param_6 * param_3],fVar18 * fVar18);
  fVar21 = param_1[(int)lVar5 + param_2];
  lVar9 = (long)(param_2 + 2);
  uVar6 = (ulong)param_6;
  fVar17 = (fVar16 - fVar19) * 0.5;
  fVar20 = (float)NEON_fmadd(fVar17,fVar17,fVar20 * fVar18 * fVar20 * fVar18);
  fVar18 = fVar21 * param_1[(int)lVar5 + param_2 + 1];
  fVar16 = -SQRT(fVar20);
  if (fVar17 <= 0.0) {
    fVar16 = SQRT(fVar20);
  }
  lVar12 = lVar9;
  if (lVar9 < lVar10 + 1) {
    lVar12 = lVar10 + 1;
  }
  uVar14 = lVar12 - lVar10;
  fVar17 = fVar21 * fVar21 - (fVar19 + fVar17 + fVar16);
  fVar16 = (float)NEON_fmadd(fVar17,fVar17,fVar18 * fVar18);
  fVar18 = fVar18 / SQRT(fVar16);
  fVar17 = fVar17 / SQRT(fVar16);
  fVar16 = -fVar18;
  lVar12 = lVar10;
  if ((uVar14 < 4) || (param_6 != 1)) {
LAB_00b6e55c:
    lVar1 = lVar12 * uVar6 + lVar7;
    lVar10 = lVar12 * uVar6 + lVar10;
    do {
      lVar12 = lVar12 + 1;
      fVar19 = (float)NEON_fmadd(fVar17,param_1[lVar10],fVar18 * param_1[lVar1]);
      fVar20 = (float)NEON_fmadd(fVar16,param_1[lVar10],fVar17 * param_1[lVar1]);
      param_1[lVar10] = fVar19;
      param_1[lVar1] = fVar20;
      param_1 = param_1 + uVar6;
    } while (lVar12 < lVar9);
  }
  else {
    lVar1 = lVar9;
    if (lVar9 < lVar10 + 1) {
      lVar1 = lVar10 + 1;
    }
    if ((param_1 + lVar10 * 2 < param_1 + lVar1 + lVar7) &&
       (param_1 + lVar10 + lVar7 < param_1 + lVar1 + lVar10)) goto LAB_00b6e55c;
    uVar15 = uVar14 & 0xfffffffffffffffc;
    lVar12 = uVar6 * lVar10 + lVar7;
    lVar1 = lVar10 + uVar6 * lVar10;
    pfVar3 = param_1;
    uVar4 = uVar15;
    do {
      uVar23 = *(undefined8 *)((long)(pfVar3 + lVar12) + 8);
      uVar22 = *(undefined8 *)(pfVar3 + lVar12);
      uVar4 = uVar4 - 4;
      uVar29 = *(undefined8 *)((long)(pfVar3 + lVar1) + 8);
      uVar26 = *(undefined8 *)(pfVar3 + lVar1);
      fVar20 = (float)uVar22;
      fVar19 = (float)((ulong)uVar22 >> 0x20);
      fVar21 = (float)uVar23;
      fVar24 = (float)((ulong)uVar23 >> 0x20);
      fVar25 = (float)uVar26;
      fVar27 = (float)((ulong)uVar26 >> 0x20);
      fVar28 = (float)uVar29;
      fVar30 = (float)((ulong)uVar29 >> 0x20);
      *(ulong *)((long)(pfVar3 + lVar1) + 8) =
           CONCAT44(fVar24 * fVar18 + fVar30 * fVar17,fVar21 * fVar18 + fVar28 * fVar17);
      *(ulong *)(pfVar3 + lVar1) =
           CONCAT44(fVar19 * fVar18 + fVar27 * fVar17,fVar20 * fVar18 + fVar25 * fVar17);
      *(ulong *)((long)(pfVar3 + lVar12) + 8) =
           CONCAT44(fVar24 * fVar17 + fVar30 * fVar16,fVar21 * fVar17 + fVar28 * fVar16);
      *(ulong *)(pfVar3 + lVar12) =
           CONCAT44(fVar19 * fVar17 + fVar27 * fVar16,fVar20 * fVar17 + fVar25 * fVar16);
      pfVar3 = pfVar3 + uVar6 * 4;
    } while (uVar4 != 0);
    lVar12 = uVar15 + lVar10;
    if (uVar14 != uVar15) goto LAB_00b6e55c;
  }
  if (param_6 < 1) {
    return;
  }
  lVar7 = lVar7 * uVar6;
  if (3 < (uint)param_6) {
    if ((param_4 + uVar6 + lVar7 <= param_4 + lVar5) || (param_4 + uVar6 + lVar5 <= param_4 + lVar7)
       ) {
      uVar14 = uVar6 & 0xfffffffffffffffc;
      puVar11 = (undefined8 *)(param_4 + lVar5);
      puVar13 = (undefined8 *)(param_4 + lVar7);
      uVar4 = uVar14;
      do {
        uVar4 = uVar4 - 4;
        fVar20 = (float)*puVar13;
        fVar19 = (float)((ulong)*puVar13 >> 0x20);
        fVar21 = (float)puVar13[1];
        fVar24 = (float)((ulong)puVar13[1] >> 0x20);
        fVar25 = (float)*puVar11;
        fVar27 = (float)((ulong)*puVar11 >> 0x20);
        fVar28 = (float)puVar11[1];
        fVar30 = (float)((ulong)puVar11[1] >> 0x20);
        puVar11[1] = CONCAT44(fVar24 * fVar18 + fVar30 * fVar17,fVar21 * fVar18 + fVar28 * fVar17);
        *puVar11 = CONCAT44(fVar19 * fVar18 + fVar27 * fVar17,fVar20 * fVar18 + fVar25 * fVar17);
        puVar13[1] = CONCAT44(fVar24 * fVar17 + fVar30 * fVar16,fVar21 * fVar17 + fVar28 * fVar16);
        *puVar13 = CONCAT44(fVar19 * fVar17 + fVar27 * fVar16,fVar20 * fVar17 + fVar25 * fVar16);
        puVar11 = puVar11 + 2;
        puVar13 = puVar13 + 2;
      } while (uVar4 != 0);
      if (uVar14 == uVar6) {
        return;
      }
      goto LAB_00b6e5e4;
    }
  }
  uVar14 = 0;
LAB_00b6e5e4:
  lVar10 = uVar6 - uVar14;
  pfVar3 = param_4 + uVar14 + lVar7;
  pfVar8 = param_4 + uVar14 + lVar5;
  do {
    lVar10 = lVar10 + -1;
    fVar19 = (float)NEON_fmadd(fVar17,*pfVar8,fVar18 * *pfVar3);
    fVar20 = (float)NEON_fmadd(fVar16,*pfVar8,fVar17 * *pfVar3);
    *pfVar8 = fVar19;
    *pfVar3 = fVar20;
    pfVar3 = pfVar3 + 1;
    pfVar8 = pfVar8 + 1;
  } while (lVar10 != 0);
  return;
}


