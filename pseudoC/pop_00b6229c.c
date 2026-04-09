// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pop
// Entry Point: 00b6229c
// Size: 16 bytes
// Signature: undefined pop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BoundingVolumeFactory::EnclosingSphere::pop() */

void BoundingVolumeFactory::EnclosingSphere::pop(void)

{
  long in_x0;
  
  *(int *)(in_x0 + 0xdc) = *(int *)(in_x0 + 0xdc) + -1;
  return;
}


