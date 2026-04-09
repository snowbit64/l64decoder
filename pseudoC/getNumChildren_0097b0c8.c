// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumChildren
// Entry Point: 0097b0c8
// Size: 16 bytes
// Signature: undefined getNumChildren(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MeshSplitGeometry::getNumChildren() */

ulong MeshSplitGeometry::getNumChildren(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x180) - *(long *)(in_x0 + 0x178)) >> 3;
}


