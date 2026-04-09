// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEmitCountScale
// Entry Point: 0092ac24
// Size: 56 bytes
// Signature: undefined getEmitCountScale(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionEmitterShape::getEmitCountScale() */

float DestructionEmitterShape::getEmitCountScale(void)

{
  long in_x0;
  ulong uVar1;
  float fVar2;
  
  uVar1 = (*(long *)(in_x0 + 0x20) - *(long *)(in_x0 + 0x18) >> 2) * 0x4ec4ec4ec4ec4ec5;
  fVar2 = (float)(unkuint9)uVar1;
  if (1 < uVar1) {
    fVar2 = fVar2 * 0.5;
  }
  return fVar2;
}


