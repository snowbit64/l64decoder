// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_initMinMax
// Entry Point: 00eb65a8
// Size: 40 bytes
// Signature: undefined __cdecl fm_initMinMax(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_initMinMax(float const*, float*, float*) */

void FLOAT_MATH::fm_initMinMax(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_1;
  *param_2 = fVar1;
  *param_3 = fVar1;
  fVar1 = param_1[1];
  param_2[1] = fVar1;
  param_3[1] = fVar1;
  fVar1 = param_1[2];
  param_2[2] = fVar1;
  param_3[2] = fVar1;
  return;
}


