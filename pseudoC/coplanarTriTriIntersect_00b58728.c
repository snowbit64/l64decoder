// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: coplanarTriTriIntersect
// Entry Point: 00b58728
// Size: 544 bytes
// Signature: undefined __cdecl coplanarTriTriIntersect(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6, Vector3 * param_7)


/* MathUtil::coplanarTriTriIntersect(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&, Vector3 const&, Vector3 const&) */

undefined8
MathUtil::coplanarTriTriIntersect
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,Vector3 *param_5,
          Vector3 *param_6,Vector3 *param_7)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
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
  float fVar18;
  
  fVar8 = ABS(*(float *)(param_1 + 4));
  fVar9 = ABS(*(float *)(param_1 + 8));
  fVar10 = ABS(*(float *)param_1);
  uVar4 = 2;
  uVar1 = uVar4;
  if (fVar8 < fVar9) {
    uVar1 = 1;
  }
  if (fVar10 <= fVar9) {
    uVar4 = 1;
  }
  uVar7 = 0;
  if (fVar8 < fVar10) {
    uVar7 = (uint)(fVar9 < fVar10);
  }
  if (fVar8 < fVar10) {
    uVar1 = uVar4;
  }
  uVar2 = edgeTriIntersect(param_2,param_3,param_5,param_6,param_7,uVar7,uVar1);
  if ((((uVar2 & 1) == 0) &&
      (uVar2 = edgeTriIntersect(param_3,param_4,param_5,param_6,param_7,uVar7,uVar1),
      (uVar2 & 1) == 0)) &&
     (uVar2 = edgeTriIntersect(param_4,param_2,param_5,param_6,param_7,uVar7,uVar1),
     (uVar2 & 1) == 0)) {
    lVar5 = (ulong)uVar7 * 4;
    lVar6 = (ulong)uVar1 * 4;
    fVar14 = *(float *)(param_6 + lVar5);
    fVar8 = *(float *)(param_5 + lVar5);
    fVar12 = *(float *)(param_7 + lVar5);
    fVar17 = *(float *)(param_6 + lVar6);
    fVar9 = *(float *)(param_5 + lVar6);
    fVar10 = *(float *)(param_2 + lVar6);
    fVar13 = *(float *)(param_7 + lVar6);
    fVar11 = *(float *)(param_2 + lVar5);
    fVar15 = (float)NEON_fmsub(fVar17 - fVar9,fVar8,fVar9 * (fVar14 - fVar8));
    fVar16 = (float)NEON_fmsub(fVar13 - fVar17,fVar14,fVar17 * (fVar12 - fVar14));
    fVar18 = (float)NEON_fmadd(fVar17 - fVar9,fVar11,fVar10 * -(fVar14 - fVar8));
    fVar14 = (float)NEON_fmadd(fVar13 - fVar17,fVar11,fVar10 * -(fVar12 - fVar14));
    if (0.0 < (fVar15 + fVar18) * (fVar14 + fVar16)) {
      fVar14 = (float)NEON_fmsub(fVar9 - fVar13,fVar12,fVar13 * (fVar8 - fVar12));
      fVar12 = (float)NEON_fmadd(fVar9 - fVar13,fVar11,fVar10 * -(fVar8 - fVar12));
      if (0.0 < (fVar15 + fVar18) * (fVar12 + fVar14)) goto LAB_00b587fc;
    }
    fVar14 = *(float *)(param_3 + lVar5);
    fVar12 = *(float *)(param_4 + lVar5);
    fVar17 = *(float *)(param_3 + lVar6);
    fVar13 = *(float *)(param_4 + lVar6);
    fVar15 = (float)NEON_fmsub(fVar17 - fVar10,fVar11,fVar10 * (fVar14 - fVar11));
    fVar16 = (float)NEON_fmsub(fVar13 - fVar17,fVar14,fVar17 * (fVar12 - fVar14));
    fVar18 = (float)NEON_fmadd(fVar17 - fVar10,fVar8,fVar9 * -(fVar14 - fVar11));
    fVar14 = (float)NEON_fmadd(fVar13 - fVar17,fVar8,fVar9 * -(fVar12 - fVar14));
    if (0.0 < (fVar15 + fVar18) * (fVar14 + fVar16)) {
      fVar14 = (float)NEON_fmsub(fVar10 - fVar13,fVar12,fVar13 * (fVar11 - fVar12));
      fVar8 = (float)NEON_fmadd(fVar10 - fVar13,fVar8,fVar9 * -(fVar11 - fVar12));
      if (0.0 < (fVar15 + fVar18) * (fVar8 + fVar14)) goto LAB_00b587fc;
    }
    uVar3 = 0;
  }
  else {
LAB_00b587fc:
    uVar3 = 1;
  }
  return uVar3;
}


