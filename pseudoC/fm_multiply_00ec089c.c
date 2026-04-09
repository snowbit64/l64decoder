// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_multiply
// Entry Point: 00ec089c
// Size: 28 bytes
// Signature: undefined __cdecl fm_multiply(double * param_1, double param_2)


/* FLOAT_MATH::fm_multiply(double*, double) */

void FLOAT_MATH::fm_multiply(double *param_1,double param_2)

{
  param_1[1] = param_1[1] * param_2;
  *param_1 = *param_1 * param_2;
  param_1[2] = param_1[2] * param_2;
  return;
}


