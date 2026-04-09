// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumPolylines
// Entry Point: 008d24d4
// Size: 16 bytes
// Signature: undefined getNumPolylines(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::getNumPolylines() const */

ulong FillPlaneGeometry::getNumPolylines(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0xb8) - *(long *)(in_x0 + 0xb0)) >> 3;
}


