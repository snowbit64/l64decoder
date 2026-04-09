// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lerp
// Entry Point: 00ebcff4
// Size: 64 bytes
// Signature: undefined __cdecl fm_lerp(double * param_1, double * param_2, double * param_3, double param_4)


/* FLOAT_MATH::fm_lerp(double const*, double const*, double*, double) */

void FLOAT_MATH::fm_lerp(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  
  dVar1 = (double)NEON_fmadd(*param_2 - *param_1,param_4,*param_1);
  *param_3 = dVar1;
  dVar1 = (double)NEON_fmadd(param_2[1] - param_1[1],param_4,param_1[1]);
  param_3[1] = dVar1;
  dVar1 = (double)NEON_fmadd(param_2[2] - param_1[2],param_4,param_1[2]);
  param_3[2] = dVar1;
  return;
}


