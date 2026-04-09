// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_normalize
// Entry Point: 00eb4754
// Size: 100 bytes
// Signature: undefined __cdecl fm_normalize(float * param_1)


/* FLOAT_MATH::fm_normalize(float*) */

void FLOAT_MATH::fm_normalize(float *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  uVar1 = NEON_fmadd(fVar5,fVar5,fVar3 * fVar3);
  fVar2 = (float)NEON_fmadd(fVar4,fVar4,uVar1);
  if (1e-07 < SQRT(fVar2)) {
    fVar2 = 1.0 / SQRT(fVar2);
    *param_1 = fVar5 * fVar2;
    param_1[1] = fVar3 * fVar2;
    param_1[2] = fVar4 * fVar2;
    return;
  }
  param_1[2] = 0.0;
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}


