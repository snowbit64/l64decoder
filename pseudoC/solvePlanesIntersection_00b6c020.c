// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solvePlanesIntersection
// Entry Point: 00b6c020
// Size: 376 bytes
// Signature: undefined __cdecl solvePlanesIntersection(Vector3 * param_1, Plane * param_2, Plane * param_3, Plane * param_4)


/* QuadricSolverUtil::solvePlanesIntersection(Vector3&, Plane const&, Plane const&, Plane const&) */

bool QuadricSolverUtil::solvePlanesIntersection
               (Vector3 *param_1,Plane *param_2,Plane *param_3,Plane *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar2 = *(float *)param_3;
  fVar4 = *(float *)(param_3 + 4);
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(param_4 + 4);
  fVar13 = *(float *)(param_4 + 8);
  fVar9 = ABS(fVar2);
  if (ABS(fVar2) <= ABS(fVar1)) {
    fVar9 = ABS(fVar1);
  }
  fVar16 = ABS(fVar5);
  if (ABS(fVar5) <= fVar9) {
    fVar16 = fVar9;
  }
  fVar9 = ABS(fVar3);
  if (ABS(fVar3) <= fVar16) {
    fVar9 = fVar16;
  }
  fVar16 = ABS(fVar4);
  if (ABS(fVar4) <= fVar9) {
    fVar16 = fVar9;
  }
  fVar7 = *(float *)(param_2 + 8);
  fVar9 = ABS(fVar6);
  if (ABS(fVar6) <= fVar16) {
    fVar9 = fVar16;
  }
  fVar8 = *(float *)(param_3 + 8);
  fVar16 = ABS(fVar7);
  if (ABS(fVar7) <= fVar9) {
    fVar16 = fVar9;
  }
  fVar19 = (float)NEON_fmadd(fVar2,fVar13,fVar8 * -fVar5);
  uVar12 = NEON_fmadd(fVar2,fVar6,fVar4 * -fVar5);
  fVar9 = ABS(fVar8);
  if (ABS(fVar8) <= fVar16) {
    fVar9 = fVar16;
  }
  uVar10 = NEON_fmadd(fVar4,fVar13,fVar8 * -fVar6);
  uVar15 = NEON_fmadd(fVar1,uVar10,fVar19 * -fVar3);
  fVar16 = ABS(fVar13);
  if (ABS(fVar13) <= fVar9) {
    fVar16 = fVar9;
  }
  fVar19 = (float)NEON_fmadd(fVar7,uVar12,uVar15);
  fVar9 = fVar16 * fVar16 * fVar16 * 3.0;
  if (fVar9 <= ABS(fVar19) * 65536.0) {
    fVar20 = *(float *)(param_2 + 0xc);
    fVar21 = *(float *)(param_4 + 0xc);
    fVar22 = *(float *)(param_3 + 0xc);
    fVar17 = (float)NEON_fmadd(fVar6,fVar7,fVar13 * -fVar3);
    fVar16 = 1.0 / fVar19;
    fVar23 = (float)NEON_fmsub(fVar21,fVar7,fVar13 * fVar20);
    fVar24 = (float)NEON_fmsub(fVar6,fVar20,fVar3 * fVar21);
    uVar14 = NEON_fmsub(fVar22,fVar13,fVar8 * fVar21);
    uVar15 = NEON_fmsub(fVar20,fVar8,fVar7 * fVar22);
    uVar12 = NEON_fmsub(fVar4,fVar21,fVar6 * fVar22);
    uVar11 = NEON_fmsub(fVar20,uVar10,fVar17 * -fVar22);
    uVar18 = NEON_fmadd(fVar3,fVar8,fVar7 * -fVar4);
    uVar14 = NEON_fmadd(fVar1,uVar14,fVar2 * fVar23);
    uVar12 = NEON_fmadd(fVar1,uVar12,fVar2 * fVar24);
    uVar10 = NEON_fmsub(fVar3,fVar22,fVar4 * fVar20);
    fVar2 = (float)NEON_fmsub(fVar21,uVar18,uVar11);
    fVar3 = (float)NEON_fmadd(fVar5,uVar15,uVar14);
    fVar1 = (float)NEON_fmadd(fVar5,uVar10,uVar12);
    *(float *)param_1 = fVar16 * fVar2;
    *(float *)(param_1 + 4) = fVar16 * fVar3;
    *(float *)(param_1 + 8) = fVar16 * fVar1;
  }
  return fVar9 <= ABS(fVar19) * 65536.0;
}


