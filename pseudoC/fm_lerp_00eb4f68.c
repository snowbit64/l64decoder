// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lerp
// Entry Point: 00eb4f68
// Size: 64 bytes
// Signature: undefined __cdecl fm_lerp(float * param_1, float * param_2, float * param_3, float param_4)


/* FLOAT_MATH::fm_lerp(float const*, float const*, float*, float) */

void FLOAT_MATH::fm_lerp(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(*param_2 - *param_1,param_4,*param_1);
  *param_3 = fVar1;
  fVar1 = (float)NEON_fmadd(param_2[1] - param_1[1],param_4,param_1[1]);
  param_3[1] = fVar1;
  fVar1 = (float)NEON_fmadd(param_2[2] - param_1[2],param_4,param_1[2]);
  param_3[2] = fVar1;
  return;
}


