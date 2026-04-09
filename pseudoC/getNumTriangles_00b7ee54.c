// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumTriangles
// Entry Point: 00b7ee54
// Size: 16 bytes
// Signature: undefined getNumTriangles(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetBuilder::getNumTriangles() const */

ulong IndexedTriangleSetBuilder::getNumTriangles(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x20) - *(long *)(in_x0 + 0x18)) >> 4;
}


