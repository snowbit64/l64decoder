// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_cross
// Entry Point: 00eb3040
// Size: 92 bytes
// Signature: undefined __cdecl fm_cross(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_cross(float*, float const*, float const*) */

void FLOAT_MATH::fm_cross(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(param_2[1],param_3[2],param_3[1] * -param_2[2]);
  *param_1 = fVar1;
  fVar1 = (float)NEON_fmadd(param_2[2],*param_3,param_3[2] * -*param_2);
  param_1[1] = fVar1;
  fVar1 = (float)NEON_fmadd(*param_2,param_3[1],*param_3 * -param_2[1]);
  param_1[2] = fVar1;
  return;
}


