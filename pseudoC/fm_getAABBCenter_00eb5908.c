// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getAABBCenter
// Entry Point: 00eb5908
// Size: 68 bytes
// Signature: undefined __cdecl fm_getAABBCenter(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_getAABBCenter(float const*, float const*, float*) */

void FLOAT_MATH::fm_getAABBCenter(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(*param_2 - *param_1,0x3f000000,*param_1);
  *param_3 = fVar1;
  fVar1 = (float)NEON_fmadd(param_2[1] - param_1[1],0x3f000000,param_1[1]);
  param_3[1] = fVar1;
  fVar1 = (float)NEON_fmadd(param_2[2] - param_1[2],0x3f000000,param_1[2]);
  param_3[2] = fVar1;
  return;
}


