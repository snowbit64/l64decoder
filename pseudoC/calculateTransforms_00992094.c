// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTransforms
// Entry Point: 00992094
// Size: 16 bytes
// Signature: undefined calculateTransforms(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2D6Joint::calculateTransforms() */

void Bt2D6Joint::calculateTransforms(void)

{
  Bt2D6Joint *in_x0;
  
  calculateTransforms(in_x0,(btTransform *)(*(long *)(in_x0 + 0x28) + 8),
                      (btTransform *)(*(long *)(in_x0 + 0x30) + 8));
  return;
}


