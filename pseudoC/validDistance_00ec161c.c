// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validDistance
// Entry Point: 00ec161c
// Size: 56 bytes
// Signature: undefined __cdecl validDistance(double * param_1, double * param_2, double param_3)


/* FLOAT_MATH::validDistance(double const*, double const*, double) */

bool FLOAT_MATH::validDistance(double *param_1,double *param_2,double param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = NEON_fmadd(*param_1 - *param_2,*param_1 - *param_2,
                     (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
  dVar2 = (double)NEON_fmadd(param_1[2] - param_2[2],param_1[2] - param_2[2],uVar1);
  return param_3 * param_3 <= dVar2;
}


