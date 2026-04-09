// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getAABBCenter
// Entry Point: 00ebd994
// Size: 68 bytes
// Signature: undefined __cdecl fm_getAABBCenter(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_getAABBCenter(double const*, double const*, double*) */

void FLOAT_MATH::fm_getAABBCenter(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (double)NEON_fmadd(*param_2 - *param_1,0x3fe0000000000000,*param_1);
  *param_3 = dVar1;
  dVar1 = (double)NEON_fmadd(param_2[1] - param_1[1],0x3fe0000000000000,param_1[1]);
  param_3[1] = dVar1;
  dVar1 = (double)NEON_fmadd(param_2[2] - param_1[2],0x3fe0000000000000,param_1[2]);
  param_3[2] = dVar1;
  return;
}


