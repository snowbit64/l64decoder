// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_dot
// Entry Point: 00ebb0bc
// Size: 36 bytes
// Signature: undefined __cdecl fm_dot(double * param_1, double * param_2)


/* FLOAT_MATH::fm_dot(double const*, double const*) */

undefined  [16] FLOAT_MATH::fm_dot(double *param_1,double *param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = NEON_fmadd(*param_1,*param_2,param_1[1] * param_2[1]);
  auVar2._0_8_ = NEON_fmadd(param_1[2],param_2[2],uVar1);
  auVar2._8_8_ = 0;
  return auVar2;
}


