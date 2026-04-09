// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChildId
// Entry Point: 0097b2c0
// Size: 12 bytes
// Signature: undefined __thiscall getChildId(MeshSplitGeometry * this, uint param_1)


/* non-virtual thunk to MeshSplitGeometry::getChildId(unsigned int) */

undefined4 __thiscall MeshSplitGeometry::getChildId(MeshSplitGeometry *this,uint param_1)

{
  return *(undefined4 *)(*(long *)(this + 0x28) + (ulong)param_1 * 4);
}


