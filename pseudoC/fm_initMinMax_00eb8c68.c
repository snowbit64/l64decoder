// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_initMinMax
// Entry Point: 00eb8c68
// Size: 36 bytes
// Signature: undefined __cdecl fm_initMinMax(float * param_1, float * param_2)


/* FLOAT_MATH::fm_initMinMax(float*, float*) */

void FLOAT_MATH::fm_initMinMax(float *param_1,float *param_2)

{
  param_1[2] = 3.402823e+38;
  *(undefined8 *)param_1 = 0x7f7fffff7f7fffff;
  *(undefined8 *)param_2 = 0xff7fffffff7fffff;
  param_2[2] = -3.402823e+38;
  return;
}


