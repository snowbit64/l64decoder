// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getTranslation
// Entry Point: 00ebc43c
// Size: 28 bytes
// Signature: undefined __cdecl fm_getTranslation(double * param_1, double * param_2)


/* FLOAT_MATH::fm_getTranslation(double const*, double*) */

void FLOAT_MATH::fm_getTranslation(double *param_1,double *param_2)

{
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  return;
}


