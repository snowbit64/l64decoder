// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_distance
// Entry Point: 00ebc5c4
// Size: 48 bytes
// Signature: undefined __cdecl fm_distance(double * param_1, double * param_2)


/* FLOAT_MATH::fm_distance(double const*, double const*) */

undefined  [16] FLOAT_MATH::fm_distance(double *param_1,double *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined auVar3 [16];
  
  uVar1 = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                     (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
  dVar2 = (double)NEON_fmadd(param_1[2] - param_2[2],param_1[2] - param_2[2],uVar1);
  auVar3._0_8_ = SQRT(dVar2);
  auVar3._8_8_ = 0;
  return auVar3;
}


