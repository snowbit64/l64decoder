// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNodeAt
// Entry Point: 00af8b58
// Size: 16 bytes
// Signature: undefined __thiscall getNodeAt(NavigationMesh * this, uint param_1)


/* NavigationMesh::getNodeAt(unsigned int) */

long __thiscall NavigationMesh::getNodeAt(NavigationMesh *this,uint param_1)

{
  return *(long *)(this + 0x30) + (ulong)param_1 * 0x18;
}


