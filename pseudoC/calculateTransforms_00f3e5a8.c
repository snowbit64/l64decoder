// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTransforms
// Entry Point: 00f3e5a8
// Size: 16 bytes
// Signature: undefined calculateTransforms(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btGeneric6DofConstraint::calculateTransforms() */

void btGeneric6DofConstraint::calculateTransforms(void)

{
  btGeneric6DofConstraint *in_x0;
  
  calculateTransforms(in_x0,(btTransform *)(*(long *)(in_x0 + 0x28) + 8),
                      (btTransform *)(*(long *)(in_x0 + 0x30) + 8));
  return;
}


