// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_add
// Entry Point: 00ec08b8
// Size: 52 bytes
// Signature: undefined __cdecl fm_add(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_add(double const*, double const*, double*) */

void FLOAT_MATH::fm_add(double *param_1,double *param_2,double *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  return;
}


