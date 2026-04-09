// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_scale
// Entry Point: 00eb4ccc
// Size: 16 bytes
// Signature: undefined __cdecl fm_scale(float param_1, float param_2, float param_3, float * param_4)


/* FLOAT_MATH::fm_scale(float, float, float, float*) */

void FLOAT_MATH::fm_scale(float param_1,float param_2,float param_3,float *param_4)

{
  param_4[10] = param_3;
  *param_4 = param_1;
  param_4[5] = param_2;
  return;
}


