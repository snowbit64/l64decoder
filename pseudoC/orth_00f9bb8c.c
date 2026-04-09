// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: orth
// Entry Point: 00f9bb8c
// Size: 100 bytes
// Signature: undefined __cdecl orth(btVector3 * param_1)


/* orth(btVector3 const&) */

float orth(btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar4 = *(float *)param_1 * *(float *)param_1;
  fVar2 = (float)NEON_fmadd(fVar1,fVar1,fVar4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = (float)NEON_fmadd(fVar3,fVar3,fVar4);
  if (SQRT(fVar4) < SQRT(fVar2)) {
    return (1.0 / SQRT(fVar2)) * fVar1;
  }
  return (1.0 / SQRT(fVar4)) * -fVar3;
}


