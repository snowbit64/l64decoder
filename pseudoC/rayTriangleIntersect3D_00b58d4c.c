// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTriangleIntersect3D
// Entry Point: 00b58d4c
// Size: 364 bytes
// Signature: undefined __cdecl rayTriangleIntersect3D(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, float * param_6)


/* MathUtil::rayTriangleIntersect3D(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&, float&) */

undefined8
MathUtil::rayTriangleIntersect3D
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,Vector3 *param_5,
          float *param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  fVar15 = *(float *)(param_3 + 4);
  fVar11 = *(float *)(param_3 + 8);
  fVar8 = *(float *)param_2;
  fVar14 = *(float *)param_3;
  fVar7 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_5 + 8) - fVar11;
  fVar4 = *(float *)(param_5 + 4) - fVar15;
  fVar3 = *(float *)param_5 - fVar14;
  fVar9 = *(float *)(param_2 + 4);
  fVar10 = *(float *)(param_4 + 4) - fVar15;
  fVar12 = *(float *)param_4 - fVar14;
  fVar16 = (float)NEON_fmadd(fVar7,fVar3,fVar2 * -fVar8);
  uVar18 = NEON_fmadd(fVar9,fVar2,fVar4 * -fVar7);
  fVar13 = *(float *)(param_4 + 8) - fVar11;
  uVar19 = NEON_fmadd(fVar8,fVar4,fVar3 * -fVar9);
  uVar5 = NEON_fmadd(fVar12,uVar18,fVar10 * fVar16);
  fVar6 = (float)NEON_fmadd(fVar13,uVar19,uVar5);
  if (fVar6 < 1e-06) {
    return 0;
  }
  fVar15 = *(float *)(param_1 + 4) - fVar15;
  fVar14 = *(float *)param_1 - fVar14;
  fVar11 = *(float *)(param_1 + 8) - fVar11;
  uVar5 = NEON_fmadd(fVar14,uVar18,fVar16 * fVar15);
  fVar16 = (float)NEON_fmadd(fVar11,uVar19,uVar5);
  if (fVar16 < -0.0001) {
    return 0;
  }
  if (fVar6 + 0.0001 < fVar16) {
    return 0;
  }
  uVar1 = 0;
  fVar17 = (float)NEON_fmadd(fVar11,fVar12,fVar13 * -fVar14);
  uVar19 = NEON_fmadd(fVar15,fVar13,fVar10 * -fVar11);
  uVar18 = NEON_fmadd(fVar14,fVar10,fVar12 * -fVar15);
  uVar5 = NEON_fmadd(fVar8,uVar19,fVar9 * fVar17);
  fVar7 = (float)NEON_fmadd(fVar7,uVar18,uVar5);
  if ((-0.0001 <= fVar7) && (fVar16 + fVar7 <= fVar6 + 0.0001)) {
    uVar5 = NEON_fmadd(fVar3,uVar19,fVar4 * fVar17);
    fVar2 = (float)NEON_fmadd(fVar2,uVar18,uVar5);
    *param_6 = fVar2;
    if (fVar2 < 0.0) {
      return 0;
    }
    uVar1 = 1;
    *param_6 = fVar2 / fVar6;
  }
  return uVar1;
}


