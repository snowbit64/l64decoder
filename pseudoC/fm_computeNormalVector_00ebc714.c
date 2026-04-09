// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeNormalVector
// Entry Point: 00ebc714
// Size: 132 bytes
// Signature: undefined __cdecl fm_computeNormalVector(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_computeNormalVector(double*, double const*, double const*) */

void FLOAT_MATH::fm_computeNormalVector(double *param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *param_3 - *param_2;
  *param_1 = dVar3;
  dVar4 = param_3[1] - param_2[1];
  param_1[1] = dVar4;
  uVar1 = NEON_fmadd(dVar3,dVar3,dVar4 * dVar4);
  dVar5 = param_3[2] - param_2[2];
  dVar2 = (double)NEON_fmadd(dVar5,dVar5,uVar1);
  if (1.000000011686097e-07 < SQRT(dVar2)) {
    dVar2 = 1.0 / SQRT(dVar2);
    *param_1 = dVar3 * dVar2;
    param_1[1] = dVar4 * dVar2;
    param_1[2] = dVar5 * dVar2;
    return;
  }
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  *param_1 = 1.0;
  return;
}


