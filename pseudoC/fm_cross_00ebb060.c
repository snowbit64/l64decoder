// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_cross
// Entry Point: 00ebb060
// Size: 92 bytes
// Signature: undefined __cdecl fm_cross(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_cross(double*, double const*, double const*) */

void FLOAT_MATH::fm_cross(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (double)NEON_fmadd(param_2[1],param_3[2],param_3[1] * -param_2[2]);
  *param_1 = dVar1;
  dVar1 = (double)NEON_fmadd(param_2[2],*param_3,param_3[2] * -*param_2);
  param_1[1] = dVar1;
  dVar1 = (double)NEON_fmadd(*param_2,param_3[1],*param_3 * -param_2[1]);
  param_1[2] = dVar1;
  return;
}


