// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_areaTriangle
// Entry Point: 00ec0680
// Size: 68 bytes
// Signature: undefined __cdecl fm_areaTriangle(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_areaTriangle(double const*, double const*, double const*) */

undefined  [16] FLOAT_MATH::fm_areaTriangle(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar4 = (double)NEON_fmadd(*param_1,param_2[1],param_1[1] * -*param_2);
  dVar1 = (double)NEON_fmadd(*param_2,param_3[1],param_2[1] * -*param_3);
  dVar3 = (double)NEON_fmadd(*param_3,param_1[1],param_3[1] * -*param_1);
  auVar2._0_8_ = (dVar4 + dVar1 + dVar3) * 0.5;
  auVar2._8_8_ = 0;
  return auVar2;
}


