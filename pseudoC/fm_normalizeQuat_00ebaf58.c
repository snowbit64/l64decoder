// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_normalizeQuat
// Entry Point: 00ebaf58
// Size: 80 bytes
// Signature: undefined __cdecl fm_normalizeQuat(float * param_1)


/* FLOAT_MATH::fm_normalizeQuat(float*) */

void FLOAT_MATH::fm_normalizeQuat(float *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_1;
  fVar3 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  uVar1 = NEON_fmadd(fVar4 * fVar4,fVar4 * fVar4,fVar3 * fVar3 * fVar3 * fVar3);
  uVar1 = NEON_fmadd(fVar5 * fVar5,fVar5 * fVar5,uVar1);
  fVar2 = (float)NEON_fmadd(fVar6 * fVar6,fVar6 * fVar6,uVar1);
  fVar2 = 1.0 / SQRT(fVar2);
  *param_1 = fVar4 * fVar2;
  param_1[1] = fVar3 * fVar2;
  param_1[2] = fVar5 * fVar2;
  param_1[3] = fVar6 * fVar2;
  return;
}


