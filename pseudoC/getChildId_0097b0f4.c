// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChildId
// Entry Point: 0097b0f4
// Size: 12 bytes
// Signature: undefined __thiscall getChildId(MeshSplitGeometry * this, uint param_1)


/* MeshSplitGeometry::getChildId(unsigned int) */

undefined4 __thiscall MeshSplitGeometry::getChildId(MeshSplitGeometry *this,uint param_1)

{
  return *(undefined4 *)(*(long *)(this + 400) + (ulong)param_1 * 4);
}


