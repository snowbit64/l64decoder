// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumVertices
// Entry Point: 00b7ee38
// Size: 28 bytes
// Signature: undefined getNumVertices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetBuilder::getNumVertices() const */

int IndexedTriangleSetBuilder::getNumVertices(void)

{
  long *in_x0;
  
  return (int)((ulong)(in_x0[1] - *in_x0) >> 4) * -0x49249249;
}


