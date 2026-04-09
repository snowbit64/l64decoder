// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_rayIntersectsTriangle
// Entry Point: 00eb7d80
// Size: 320 bytes
// Signature: undefined __cdecl fm_rayIntersectsTriangle(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6)


/* FLOAT_MATH::fm_rayIntersectsTriangle(float const*, float const*, float const*, float const*,
   float const*, float&) */

bool FLOAT_MATH::fm_rayIntersectsTriangle
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6)

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
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  
  fVar12 = param_3[1];
  fVar6 = param_3[2];
  fVar4 = *param_2;
  fVar8 = param_2[1];
  fVar10 = *param_3;
  fVar1 = param_5[2] - fVar6;
  fVar2 = param_5[1] - fVar12;
  fVar3 = *param_5 - fVar10;
  fVar5 = param_2[2];
  fVar7 = param_4[1] - fVar12;
  fVar9 = *param_4 - fVar10;
  fVar14 = (float)NEON_fmadd(fVar5,fVar3,fVar4 * -fVar1);
  uVar16 = NEON_fmadd(fVar8,fVar1,fVar5 * -fVar2);
  fVar11 = param_4[2] - fVar6;
  uVar17 = NEON_fmadd(fVar4,fVar2,fVar8 * -fVar3);
  uVar13 = NEON_fmadd(fVar9,uVar16,fVar7 * fVar14);
  fVar18 = (float)NEON_fmadd(fVar11,uVar17,uVar13);
  if ((-1e-05 < fVar18) && (fVar18 < 1e-05)) {
    return false;
  }
  fVar12 = param_1[1] - fVar12;
  fVar18 = 1.0 / fVar18;
  fVar10 = *param_1 - fVar10;
  fVar6 = param_1[2] - fVar6;
  uVar13 = NEON_fmadd(fVar10,uVar16,fVar14 * fVar12);
  fVar14 = (float)NEON_fmadd(fVar6,uVar17,uVar13);
  fVar14 = fVar18 * fVar14;
  if ((fVar14 < 0.0 || fVar14 != 1.0) && (fVar14 < 0.0 || 1.0 <= fVar14)) {
    return false;
  }
  fVar15 = (float)NEON_fmadd(fVar6,fVar9,fVar10 * -fVar11);
  uVar17 = NEON_fmadd(fVar12,fVar11,fVar6 * -fVar7);
  uVar16 = NEON_fmadd(fVar10,fVar7,fVar12 * -fVar9);
  uVar13 = NEON_fmadd(fVar4,uVar17,fVar8 * fVar15);
  fVar4 = (float)NEON_fmadd(fVar5,uVar16,uVar13);
  fVar4 = fVar18 * fVar4;
  if ((fVar4 < 0.0 || fVar14 + fVar4 != 1.0) && (fVar4 < 0.0 || 1.0 <= fVar14 + fVar4)) {
    return false;
  }
  uVar13 = NEON_fmadd(fVar3,uVar17,fVar2 * fVar15);
  fVar1 = (float)NEON_fmadd(fVar1,uVar16,uVar13);
  *param_6 = fVar18 * fVar1;
  return 0.0 < fVar18 * fVar1;
}


