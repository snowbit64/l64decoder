// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distanceSquaredXZ
// Entry Point: 00ebc620
// Size: 36 bytes
// Signature: undefined __cdecl fm_distanceSquaredXZ(double * param_1, double * param_2)


/* FLOAT_MATH::fm_distanceSquaredXZ(double const*, double const*) */

undefined  [16] FLOAT_MATH::fm_distanceSquaredXZ(double *param_1,double *param_2)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                            (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
  auVar1._8_8_ = 0;
  return auVar1;
}


