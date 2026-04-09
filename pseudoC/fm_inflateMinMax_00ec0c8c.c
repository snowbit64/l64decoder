// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_inflateMinMax
// Entry Point: 00ec0c8c
// Size: 108 bytes
// Signature: undefined __cdecl fm_inflateMinMax(double * param_1, double * param_2, double param_3)


/* FLOAT_MATH::fm_inflateMinMax(double*, double*, double) */

void FLOAT_MATH::fm_inflateMinMax(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = *param_1 - *param_2;
  dVar1 = param_1[1] - param_2[1];
  uVar2 = NEON_fmadd(dVar3,dVar3,dVar1 * dVar1);
  dVar1 = param_1[2] - param_2[2];
  dVar1 = (double)NEON_fmadd(dVar1,dVar1,uVar2);
  dVar1 = SQRT(dVar1) * 0.5 * param_3;
  *param_1 = *param_1 - dVar1;
  param_1[1] = param_1[1] - dVar1;
  param_1[2] = param_1[2] - dVar1;
  param_2[1] = param_2[1] + dVar1;
  *param_2 = *param_2 + dVar1;
  param_2[2] = dVar1 + param_2[2];
  return;
}


