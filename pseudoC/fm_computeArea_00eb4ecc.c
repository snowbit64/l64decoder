// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeArea
// Entry Point: 00eb4ecc
// Size: 156 bytes
// Signature: undefined __cdecl fm_computeArea(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_computeArea(float const*, float const*, float const*) */

float FLOAT_MATH::fm_computeArea(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = param_2[1] - param_1[1];
  fVar7 = param_2[2] - param_1[2];
  fVar5 = *param_2 - *param_1;
  uVar1 = NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
  fVar2 = (float)NEON_fmadd(fVar7,fVar7,uVar1);
  fVar2 = SQRT(fVar2);
  if (fVar2 == 0.0) {
    return fVar2 * 0.5 * 0.0;
  }
  fVar3 = param_3[1] - param_1[1];
  fVar10 = param_3[2] - param_1[2];
  fVar8 = *param_3 - *param_1;
  fVar9 = (float)NEON_fmadd(fVar5,fVar8,fVar4 * fVar3);
  fVar9 = (float)NEON_fnmadd(fVar7,fVar10,-fVar9);
  fVar9 = fVar9 / (fVar2 * fVar2);
  fVar4 = (float)NEON_fmadd(fVar9,fVar4,fVar3);
  uVar1 = NEON_fmadd(fVar9,fVar5,fVar8);
  uVar6 = NEON_fmadd(fVar9,fVar7,fVar10);
  uVar1 = NEON_fmadd(uVar1,uVar1,fVar4 * fVar4);
  fVar4 = (float)NEON_fmadd(uVar6,uVar6,uVar1);
  return fVar2 * 0.5 * SQRT(fVar4);
}


