// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lineLineIntersect3D
// Entry Point: 00b585b8
// Size: 368 bytes
// Signature: undefined __cdecl lineLineIntersect3D(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6)


/* MathUtil::lineLineIntersect3D(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3&, Vector3&) */

bool MathUtil::lineLineIntersect3D
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,Vector3 *param_5
               ,Vector3 *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = *(float *)param_2;
  fVar12 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_3 + 8);
  uVar11 = *(undefined4 *)param_4;
  fVar1 = *(float *)(param_4 + 4);
  uVar3 = NEON_fmadd(uVar11,uVar11,fVar1 * fVar1);
  uVar8 = NEON_fmadd(uVar11,*(float *)param_1 - *(float *)param_3,
                     (*(float *)(param_1 + 4) - *(float *)(param_3 + 4)) * fVar1);
  uVar10 = *(undefined4 *)(param_4 + 8);
  fVar1 = (float)NEON_fmadd(fVar15,uVar11,fVar12 * fVar1);
  uVar11 = NEON_fmadd(fVar15,*(float *)param_1 - *(float *)param_3,
                      (*(float *)(param_1 + 4) - *(float *)(param_3 + 4)) * fVar12);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(float *)param_5 = fVar15;
  fVar4 = (float)NEON_fmadd(uVar10,uVar10,uVar3);
  fVar9 = (float)NEON_fmadd(uVar10,fVar5 - fVar7,uVar8);
  fVar13 = (float)NEON_fmadd(uVar2,uVar10,fVar1);
  fVar5 = (float)NEON_fmadd(uVar2,fVar5 - fVar7,uVar11);
  uVar11 = NEON_fmadd(fVar15,fVar15,fVar12 * fVar12);
  fVar1 = (float)NEON_fnmadd(uVar2,uVar10,-fVar1);
  uVar11 = NEON_fmadd(uVar2,uVar2,uVar11);
  fVar6 = (float)NEON_fmadd(uVar11,fVar4,fVar13 * fVar1);
  fVar12 = (float)NEON_fmadd(fVar13,fVar9,fVar5 * -fVar4);
  fVar14 = *(float *)(param_2 + 4);
  *(float *)(param_5 + 4) = fVar14;
  fVar7 = (float)NEON_fmadd(uVar11,fVar9,fVar5 * fVar1);
  fVar12 = fVar12 / fVar6;
  fVar1 = fVar9 / fVar4;
  if (fVar4 < fVar13) {
    fVar1 = fVar5 / fVar13;
  }
  if (fVar6 < 1e-06) {
    fVar12 = 0.0;
  }
  fVar4 = *(float *)(param_2 + 8);
  fVar14 = fVar12 * fVar14;
  *(float *)param_5 = fVar15 * fVar12;
  *(float *)(param_5 + 4) = fVar14;
  *(float *)(param_5 + 8) = fVar12 * fVar4;
  fVar5 = fVar7 / fVar6;
  if (fVar6 < 1e-06) {
    fVar5 = fVar1;
  }
  *(float *)param_5 = fVar15 * fVar12 + *(float *)param_1;
  *(float *)(param_5 + 4) = fVar14 + *(float *)(param_1 + 4);
  *(float *)(param_5 + 8) = fVar12 * fVar4 + *(float *)(param_1 + 8);
  fVar1 = *(float *)param_4;
  *(float *)param_6 = fVar1;
  fVar1 = fVar5 * fVar1;
  fVar7 = *(float *)(param_4 + 4);
  *(float *)(param_6 + 4) = fVar7;
  fVar7 = fVar5 * fVar7;
  fVar4 = *(float *)(param_4 + 8);
  *(float *)param_6 = fVar1;
  *(float *)(param_6 + 4) = fVar7;
  *(float *)(param_6 + 8) = fVar5 * fVar4;
  *(float *)param_6 = fVar1 + *(float *)param_3;
  *(float *)(param_6 + 4) = fVar7 + *(float *)(param_3 + 4);
  *(float *)(param_6 + 8) = fVar5 * fVar4 + *(float *)(param_3 + 8);
  return 1e-06 <= fVar6;
}


