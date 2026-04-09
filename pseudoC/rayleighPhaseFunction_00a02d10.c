// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayleighPhaseFunction
// Entry Point: 00a02d10
// Size: 72 bytes
// Signature: undefined __cdecl rayleighPhaseFunction(float * param_1, float param_2, float * param_3)


/* LightScatteringUtil::rayleighPhaseFunction(float const*, float, float*) */

void LightScatteringUtil::rayleighPhaseFunction(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(param_2,param_2,0x3f800000);
  *param_3 = fVar1 * *param_1 * 0.0596831;
  param_3[1] = fVar1 * param_1[1] * 0.0596831;
  param_3[2] = fVar1 * param_1[2] * 0.0596831;
  return;
}


