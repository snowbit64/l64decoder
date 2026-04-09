// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: normalize
// Entry Point: 00b5ba38
// Size: 96 bytes
// Signature: undefined normalize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Plane::normalize() */

void Plane::normalize(void)

{
  float *in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *in_x0;
  fVar1 = in_x0[1];
  uVar4 = NEON_fmadd(fVar3,fVar3,fVar1 * fVar1);
  fVar2 = in_x0[2];
  fVar6 = (float)NEON_fmadd(fVar2,fVar2,uVar4);
  fVar5 = 1.0;
  if (1e-06 < fVar6) {
    fVar5 = 1.0 / SQRT(fVar6);
  }
  *in_x0 = fVar3 * fVar5;
  in_x0[1] = fVar1 * fVar5;
  in_x0[2] = fVar2 * fVar5;
  in_x0[3] = fVar5 * in_x0[3];
  return;
}


