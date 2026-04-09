// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeNormalVector
// Entry Point: 00eb46cc
// Size: 136 bytes
// Signature: undefined __cdecl fm_computeNormalVector(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_computeNormalVector(float*, float const*, float const*) */

void FLOAT_MATH::fm_computeNormalVector(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_3 - *param_2;
  *param_1 = fVar3;
  fVar4 = param_3[1] - param_2[1];
  param_1[1] = fVar4;
  uVar1 = NEON_fmadd(fVar3,fVar3,fVar4 * fVar4);
  fVar5 = param_3[2] - param_2[2];
  fVar2 = (float)NEON_fmadd(fVar5,fVar5,uVar1);
  if (1e-07 < SQRT(fVar2)) {
    fVar2 = 1.0 / SQRT(fVar2);
    *param_1 = fVar3 * fVar2;
    param_1[1] = fVar4 * fVar2;
    param_1[2] = fVar5 * fVar2;
    return;
  }
  param_1[2] = 0.0;
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}


