// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_copy3
// Entry Point: 00ec08ec
// Size: 28 bytes
// Signature: undefined __cdecl fm_copy3(double * param_1, double * param_2)


/* FLOAT_MATH::fm_copy3(double const*, double*) */

void FLOAT_MATH::fm_copy3(double *param_1,double *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}


