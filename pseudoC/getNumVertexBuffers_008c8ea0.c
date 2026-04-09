// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumVertexBuffers
// Entry Point: 008c8ea0
// Size: 16 bytes
// Signature: undefined getNumVertexBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VertexBufferGeometry::getNumVertexBuffers() const */

ulong VertexBufferGeometry::getNumVertexBuffers(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x90) - *(long *)(in_x0 + 0x88)) >> 3;
}


