// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumQuads
// Entry Point: 00a1e570
// Size: 28 bytes
// Signature: undefined getNumQuads(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NPlaneFrustum::getNumQuads() const */

int NPlaneFrustum::getNumQuads(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x20) - *(long *)(in_x0 + 0x18)) >> 4) * -0x55555555;
}


