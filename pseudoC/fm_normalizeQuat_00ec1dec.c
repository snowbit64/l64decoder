// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_normalizeQuat
// Entry Point: 00ec1dec
// Size: 80 bytes
// Signature: undefined __cdecl fm_normalizeQuat(double * param_1)


/* FLOAT_MATH::fm_normalizeQuat(double*) */

void FLOAT_MATH::fm_normalizeQuat(double *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = *param_1;
  dVar3 = param_1[1];
  dVar5 = param_1[2];
  dVar6 = param_1[3];
  uVar1 = NEON_fmadd(dVar4 * dVar4,dVar4 * dVar4,dVar3 * dVar3 * dVar3 * dVar3);
  uVar1 = NEON_fmadd(dVar5 * dVar5,dVar5 * dVar5,uVar1);
  dVar2 = (double)NEON_fmadd(dVar6 * dVar6,dVar6 * dVar6,uVar1);
  dVar2 = 1.0 / SQRT(dVar2);
  *param_1 = dVar4 * dVar2;
  param_1[1] = dVar3 * dVar2;
  param_1[2] = dVar5 * dVar2;
  param_1[3] = dVar6 * dVar2;
  return;
}


