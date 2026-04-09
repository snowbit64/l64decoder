// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChildNumPoints
// Entry Point: 0097b2a4
// Size: 28 bytes
// Signature: undefined __thiscall getChildNumPoints(MeshSplitGeometry * this, uint param_1)


/* non-virtual thunk to MeshSplitGeometry::getChildNumPoints(unsigned int) */

uint __thiscall MeshSplitGeometry::getChildNumPoints(MeshSplitGeometry *this,uint param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x10) + (ulong)param_1 * 8);
  return (uint)(*(int *)(lVar1 + 0x2ef8) - *(int *)(lVar1 + 0x2ef0)) >> 4 & 0xffff;
}


