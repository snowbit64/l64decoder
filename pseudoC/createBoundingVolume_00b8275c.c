// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBoundingVolume
// Entry Point: 00b8275c
// Size: 20 bytes
// Signature: undefined createBoundingVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TriangleSet::createBoundingVolume() const */

void TriangleSet::createBoundingVolume(void)

{
  long in_x0;
  
  BoundingVolumeFactory::createBoundingVolume(*(float **)(in_x0 + 0x10),*(uint *)(in_x0 + 8),0);
  return;
}


