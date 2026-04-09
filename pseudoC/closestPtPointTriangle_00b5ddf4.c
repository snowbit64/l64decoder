// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPtPointTriangle
// Entry Point: 00b5ddf4
// Size: 972 bytes
// Signature: undefined __thiscall closestPtPointTriangle(SimplexSolver * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, bool * param_5, bool * param_6, bool * param_7, float * param_8, float * param_9, float * param_10, Vector3 * param_11)


/* SimplexSolver::closestPtPointTriangle(Vector3 const&, Vector3 const&, Vector3 const&, Vector3
   const&, bool&, bool&, bool&, float&, float&, float&, Vector3&) */

undefined8 __thiscall
SimplexSolver::closestPtPointTriangle
          (SimplexSolver *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,
          bool *param_5,bool *param_6,bool *param_7,float *param_8,float *param_9,float *param_10,
          Vector3 *param_11)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  *param_5 = false;
  *param_6 = false;
  *param_7 = false;
  *param_8 = 0.0;
  *param_9 = 0.0;
  *param_10 = 0.0;
  fVar6 = *(float *)param_3;
  fVar4 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar16 = *(float *)param_1;
  fVar18 = *(float *)(param_1 + 4);
  fVar11 = *(float *)param_4;
  fVar8 = *(float *)(param_3 + 4) - fVar2;
  fVar10 = fVar6 - fVar4;
  fVar3 = *(float *)(param_4 + 4) - fVar2;
  fVar14 = *(float *)(param_2 + 8);
  fVar17 = *(float *)(param_1 + 8);
  fVar7 = fVar11 - fVar4;
  fVar9 = *(float *)(param_3 + 8) - fVar14;
  fVar5 = *(float *)(param_4 + 8) - fVar14;
  uVar15 = NEON_fmadd(fVar10,fVar16 - fVar4,fVar8 * (fVar18 - fVar2));
  uVar12 = NEON_fmadd(fVar7,fVar16 - fVar4,fVar3 * (fVar18 - fVar2));
  fVar2 = (float)NEON_fmadd(fVar9,fVar17 - fVar14,uVar15);
  fVar4 = (float)NEON_fmadd(fVar5,fVar17 - fVar14,uVar12);
  if ((fVar2 <= 0.0) && (fVar4 <= 0.0)) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined4 *)(param_11 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_11 = uVar1;
    *param_5 = true;
    *param_8 = 1.0;
    return 1;
  }
  fVar14 = fVar18 - *(float *)(param_3 + 4);
  fVar19 = fVar17 - *(float *)(param_3 + 8);
  uVar15 = NEON_fmadd(fVar10,fVar16 - fVar6,fVar8 * fVar14);
  uVar12 = NEON_fmadd(fVar7,fVar16 - fVar6,fVar3 * fVar14);
  fVar13 = (float)NEON_fmadd(fVar9,fVar19,uVar15);
  fVar14 = (float)NEON_fmadd(fVar5,fVar19,uVar12);
  if ((0.0 <= fVar13) && (fVar14 <= fVar13)) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined4 *)(param_11 + 8) = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)param_11 = uVar1;
    *param_6 = true;
    *param_9 = 1.0;
    return 1;
  }
  fVar19 = (float)NEON_fmadd(fVar2,fVar14,fVar4 * -fVar13);
  if (((fVar13 <= 0.0) && (0.0 <= fVar2)) && (fVar19 <= 0.0)) {
    *param_5 = true;
    fVar2 = fVar2 / (fVar2 - fVar13);
    *param_6 = true;
    *(float *)param_11 = fVar10 * fVar2;
    *(float *)(param_11 + 4) = fVar8 * fVar2;
    *(float *)(param_11 + 8) = fVar9 * fVar2;
    *(float *)param_11 = fVar10 * fVar2 + *(float *)param_2;
    *(float *)(param_11 + 4) = fVar8 * fVar2 + *(float *)(param_2 + 4);
    *(float *)(param_11 + 8) = fVar9 * fVar2 + *(float *)(param_2 + 8);
    *param_8 = 1.0 - fVar2;
    *param_9 = fVar2;
    return 1;
  }
  fVar18 = fVar18 - *(float *)(param_4 + 4);
  fVar17 = fVar17 - *(float *)(param_4 + 8);
  uVar15 = NEON_fmadd(fVar7,fVar16 - fVar11,fVar3 * fVar18);
  uVar12 = NEON_fmadd(fVar10,fVar16 - fVar11,fVar8 * fVar18);
  fVar16 = (float)NEON_fmadd(fVar5,fVar17,uVar15);
  fVar17 = (float)NEON_fmadd(fVar9,fVar17,uVar12);
  if ((0.0 <= fVar16) && (fVar17 <= fVar16)) {
    uVar1 = *(undefined8 *)param_4;
    *(undefined4 *)(param_11 + 8) = *(undefined4 *)(param_4 + 8);
    *(undefined8 *)param_11 = uVar1;
    *param_7 = true;
    *param_10 = 1.0;
    return 1;
  }
  fVar2 = (float)NEON_fmadd(fVar17,fVar4,fVar16 * -fVar2);
  if ((0.0 < fVar16) || ((fVar4 < 0.0 || (0.0 < fVar2)))) {
    fVar4 = (float)NEON_fmadd(fVar13,fVar16,fVar14 * -fVar17);
    if ((fVar4 <= 0.0) && ((fVar14 = fVar14 - fVar13, 0.0 <= fVar14 && (0.0 <= fVar17 - fVar16)))) {
      *(float *)param_11 = fVar11 - fVar6;
      fVar14 = fVar14 / (fVar14 + (fVar17 - fVar16));
      fVar3 = *(float *)(param_4 + 4);
      *param_6 = true;
      fVar4 = *(float *)(param_3 + 4);
      *param_7 = true;
      *(float *)(param_11 + 4) = fVar3 - fVar4;
      fVar5 = *(float *)(param_4 + 8);
      fVar7 = *(float *)(param_3 + 8);
      fVar2 = (fVar11 - fVar6) * fVar14;
      fVar3 = fVar14 * (fVar3 - fVar4);
      *(float *)param_11 = fVar2;
      *(float *)(param_11 + 4) = fVar3;
      fVar4 = fVar14 * (fVar5 - fVar7);
      *(float *)(param_11 + 8) = fVar4;
      *(float *)param_11 = fVar2 + *(float *)param_3;
      *(float *)(param_11 + 4) = fVar3 + *(float *)(param_3 + 4);
      *(float *)(param_11 + 8) = fVar4 + *(float *)(param_3 + 8);
      *param_9 = 1.0 - fVar14;
      *param_10 = fVar14;
      return 1;
    }
    *param_5 = true;
    *param_6 = true;
    *param_7 = true;
    fVar4 = 1.0 / (fVar19 + fVar4 + fVar2);
    fVar2 = fVar2 * fVar4;
    fVar4 = fVar19 * fVar4;
    *(float *)param_11 = fVar10 * fVar2;
    *(float *)(param_11 + 4) = fVar8 * fVar2;
    *(float *)(param_11 + 8) = fVar9 * fVar2;
    fVar10 = fVar10 * fVar2 + *(float *)param_2;
    *(float *)param_11 = fVar10;
    fVar6 = fVar8 * fVar2 + *(float *)(param_2 + 4);
    *(float *)(param_11 + 4) = fVar6;
    fVar8 = *(float *)(param_2 + 8);
    *(float *)param_11 = fVar7 * fVar4 + fVar10;
    *(float *)(param_11 + 4) = fVar3 * fVar4 + fVar6;
    *(float *)(param_11 + 8) = fVar5 * fVar4 + fVar9 * fVar2 + fVar8;
    *param_8 = (1.0 - fVar2) - fVar4;
    *param_9 = fVar2;
  }
  else {
    *param_5 = true;
    fVar4 = fVar4 / (fVar4 - fVar16);
    *param_7 = true;
    *(float *)param_11 = fVar7 * fVar4;
    *(float *)(param_11 + 4) = fVar3 * fVar4;
    *(float *)(param_11 + 8) = fVar5 * fVar4;
    *(float *)param_11 = fVar7 * fVar4 + *(float *)param_2;
    *(float *)(param_11 + 4) = fVar3 * fVar4 + *(float *)(param_2 + 4);
    *(float *)(param_11 + 8) = fVar5 * fVar4 + *(float *)(param_2 + 8);
    *param_8 = 1.0 - fVar4;
    *param_9 = 0.0;
  }
  *param_10 = fVar4;
  return 1;
}


