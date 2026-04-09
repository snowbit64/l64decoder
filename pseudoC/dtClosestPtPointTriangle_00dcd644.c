// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtClosestPtPointTriangle
// Entry Point: 00dcd644
// Size: 620 bytes
// Signature: undefined __cdecl dtClosestPtPointTriangle(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* dtClosestPtPointTriangle(float*, float const*, float const*, float const*, float const*) */

void dtClosestPtPointTriangle
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar2 = *param_4;
  fVar1 = *param_3;
  fVar3 = param_3[1];
  fVar16 = *param_2;
  fVar17 = param_2[1];
  fVar10 = *param_5;
  fVar5 = param_4[1] - fVar3;
  fVar8 = fVar2 - fVar1;
  fVar7 = param_5[1] - fVar3;
  fVar11 = param_3[2];
  fVar18 = param_2[2];
  fVar9 = fVar10 - fVar1;
  fVar4 = param_4[2] - fVar11;
  fVar6 = param_5[2] - fVar11;
  uVar15 = NEON_fmadd(fVar8,fVar16 - fVar1,fVar5 * (fVar17 - fVar3));
  uVar12 = NEON_fmadd(fVar9,fVar16 - fVar1,fVar7 * (fVar17 - fVar3));
  fVar3 = (float)NEON_fmadd(fVar4,fVar18 - fVar11,uVar15);
  fVar11 = (float)NEON_fmadd(fVar6,fVar18 - fVar11,uVar12);
  if ((fVar3 <= 0.0) && (fVar11 <= 0.0)) {
    *param_1 = fVar1;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return;
  }
  fVar13 = fVar17 - param_4[1];
  fVar19 = fVar18 - param_4[2];
  uVar15 = NEON_fmadd(fVar8,fVar16 - fVar2,fVar5 * fVar13);
  uVar12 = NEON_fmadd(fVar9,fVar16 - fVar2,fVar7 * fVar13);
  fVar14 = (float)NEON_fmadd(fVar4,fVar19,uVar15);
  fVar13 = (float)NEON_fmadd(fVar6,fVar19,uVar12);
  if (0.0 <= fVar14 && fVar13 < fVar14 || 0.0 <= fVar14 && fVar13 == fVar14) {
    *param_1 = fVar2;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    return;
  }
  fVar19 = (float)NEON_fmadd(fVar3,fVar13,fVar11 * -fVar14);
  if (((fVar14 <= 0.0) && (0.0 <= fVar3)) && (fVar19 <= 0.0)) {
    fVar3 = fVar3 / (fVar3 - fVar14);
    fVar1 = (float)NEON_fmadd(fVar3,fVar8,fVar1);
    *param_1 = fVar1;
    fVar1 = (float)NEON_fmadd(fVar3,fVar5,param_3[1]);
    param_1[1] = fVar1;
    fVar1 = (float)NEON_fmadd(fVar3,fVar4,param_3[2]);
    param_1[2] = fVar1;
    return;
  }
  fVar17 = fVar17 - param_5[1];
  fVar18 = fVar18 - param_5[2];
  uVar15 = NEON_fmadd(fVar9,fVar16 - fVar10,fVar7 * fVar17);
  uVar12 = NEON_fmadd(fVar8,fVar16 - fVar10,fVar5 * fVar17);
  fVar16 = (float)NEON_fmadd(fVar6,fVar18,uVar15);
  fVar17 = (float)NEON_fmadd(fVar4,fVar18,uVar12);
  if ((0.0 <= fVar16) && (fVar17 <= fVar16)) {
    *param_1 = fVar10;
    param_1[1] = param_5[1];
    param_1[2] = param_5[2];
    return;
  }
  fVar3 = (float)NEON_fmadd(fVar17,fVar11,fVar16 * -fVar3);
  if (((fVar16 <= 0.0) && (0.0 <= fVar11)) && (fVar3 <= 0.0)) {
    fVar11 = fVar11 / (fVar11 - fVar16);
    fVar1 = (float)NEON_fmadd(fVar11,fVar9,fVar1);
    *param_1 = fVar1;
    fVar1 = (float)NEON_fmadd(fVar11,fVar7,param_3[1]);
    param_1[1] = fVar1;
    fVar1 = (float)NEON_fmadd(fVar11,fVar6,param_3[2]);
    param_1[2] = fVar1;
    return;
  }
  fVar11 = (float)NEON_fmadd(fVar14,fVar16,fVar13 * -fVar17);
  if (((fVar11 <= 0.0) && (fVar13 = fVar13 - fVar14, 0.0 <= fVar13)) && (0.0 <= fVar17 - fVar16)) {
    fVar13 = fVar13 / (fVar13 + (fVar17 - fVar16));
    fVar1 = (float)NEON_fmadd(fVar13,fVar10 - fVar2,fVar2);
    *param_1 = fVar1;
    fVar1 = (float)NEON_fmadd(fVar13,param_5[1] - param_4[1],param_4[1]);
    param_1[1] = fVar1;
    fVar1 = (float)NEON_fmadd(fVar13,param_5[2] - param_4[2],param_4[2]);
    param_1[2] = fVar1;
    return;
  }
  fVar2 = 1.0 / (fVar19 + fVar11 + fVar3);
  fVar3 = fVar3 * fVar2;
  fVar19 = fVar19 * fVar2;
  uVar12 = NEON_fmadd(fVar8,fVar3,fVar1);
  fVar1 = (float)NEON_fmadd(fVar9,fVar19,uVar12);
  *param_1 = fVar1;
  uVar12 = NEON_fmadd(fVar5,fVar3,param_3[1]);
  fVar1 = (float)NEON_fmadd(fVar7,fVar19,uVar12);
  param_1[1] = fVar1;
  uVar12 = NEON_fmadd(fVar4,fVar3,param_3[2]);
  fVar1 = (float)NEON_fmadd(fVar6,fVar19,uVar12);
  param_1[2] = fVar1;
  return;
}


