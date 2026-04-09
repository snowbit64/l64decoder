// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_solveZ
// Entry Point: 00ebd970
// Size: 36 bytes
// Signature: undefined __cdecl fm_solveZ(double * param_1, double param_2, double param_3)


/* FLOAT_MATH::fm_solveZ(double const*, double, double) */

undefined  [16] FLOAT_MATH::fm_solveZ(double *param_1,double param_2,double param_3)

{
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)NEON_fmadd(param_2,*param_1,param_1[1] * param_3);
  auVar2._0_8_ = (param_1[3] + dVar1) / -param_1[2];
  auVar2._8_8_ = 0;
  return auVar2;
}


