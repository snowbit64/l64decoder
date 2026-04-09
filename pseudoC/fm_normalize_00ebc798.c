// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_normalize
// Entry Point: 00ebc798
// Size: 96 bytes
// Signature: undefined __cdecl fm_normalize(double * param_1)


/* FLOAT_MATH::fm_normalize(double*) */

void FLOAT_MATH::fm_normalize(double *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_1[2];
  uVar1 = NEON_fmadd(dVar5,dVar5,dVar3 * dVar3);
  dVar2 = (double)NEON_fmadd(dVar4,dVar4,uVar1);
  if (1.000000011686097e-07 < SQRT(dVar2)) {
    dVar2 = 1.0 / SQRT(dVar2);
    *param_1 = dVar5 * dVar2;
    param_1[1] = dVar3 * dVar2;
    param_1[2] = dVar4 * dVar2;
    return;
  }
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  *param_1 = 1.0;
  return;
}


