// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_scale
// Entry Point: 00ebcd1c
// Size: 16 bytes
// Signature: undefined __cdecl fm_scale(double param_1, double param_2, double param_3, double * param_4)


/* FLOAT_MATH::fm_scale(double, double, double, double*) */

void FLOAT_MATH::fm_scale(double param_1,double param_2,double param_3,double *param_4)

{
  param_4[10] = param_3;
  *param_4 = param_1;
  param_4[5] = param_2;
  return;
}


