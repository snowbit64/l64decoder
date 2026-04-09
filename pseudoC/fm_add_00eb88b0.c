// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_add
// Entry Point: 00eb88b0
// Size: 52 bytes
// Signature: undefined __cdecl fm_add(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_add(float const*, float const*, float*) */

void FLOAT_MATH::fm_add(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  return;
}


