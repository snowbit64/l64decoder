// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computePlane
// Entry Point: 00eb45f8
// Size: 172 bytes
// Signature: undefined __cdecl fm_computePlane(float * param_1, float * param_2, float * param_3, float * param_4)


/* FLOAT_MATH::fm_computePlane(float const*, float const*, float const*, float*) */

float FLOAT_MATH::fm_computePlane(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = param_1[1];
  fVar9 = param_1[2];
  fVar1 = *param_2 - *param_3;
  fVar10 = *param_1;
  fVar5 = param_2[1] - param_3[1];
  fVar4 = fVar11 - param_2[1];
  fVar7 = param_2[2] - param_3[2];
  fVar6 = fVar9 - param_2[2];
  fVar2 = fVar10 - *param_2;
  fVar8 = (float)NEON_fmadd(fVar7,fVar2,fVar6 * -fVar1);
  fVar6 = (float)NEON_fmadd(fVar5,fVar6,fVar4 * -fVar7);
  fVar2 = (float)NEON_fmadd(fVar1,fVar4,fVar2 * -fVar5);
  uVar3 = NEON_fmadd(fVar6,fVar6,fVar8 * fVar8);
  fVar4 = (float)NEON_fmadd(fVar2,fVar2,uVar3);
  fVar1 = 0.0;
  if (1e-06 <= SQRT(fVar4)) {
    fVar1 = 1.0 / SQRT(fVar4);
  }
  *param_4 = fVar6 * fVar1;
  param_4[1] = fVar8 * fVar1;
  param_4[2] = fVar2 * fVar1;
  uVar3 = NEON_fmadd(fVar6 * fVar1,fVar10,fVar11 * fVar8 * fVar1);
  fVar1 = (float)NEON_fmadd(fVar2 * fVar1,fVar9,uVar3);
  return 0.0 - fVar1;
}


