// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_initMinMax
// Entry Point: 00ebe668
// Size: 40 bytes
// Signature: undefined __cdecl fm_initMinMax(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_initMinMax(double const*, double*, double*) */

void FLOAT_MATH::fm_initMinMax(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = *param_1;
  *param_2 = dVar1;
  *param_3 = dVar1;
  dVar1 = param_1[1];
  param_2[1] = dVar1;
  param_3[1] = dVar1;
  dVar1 = param_1[2];
  param_2[2] = dVar1;
  param_3[2] = dVar1;
  return;
}


