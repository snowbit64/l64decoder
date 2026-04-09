// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumChildren
// Entry Point: 0097b294
// Size: 16 bytes
// Signature: undefined __thiscall getNumChildren(MeshSplitGeometry * this)


/* non-virtual thunk to MeshSplitGeometry::getNumChildren() */

ulong __thiscall MeshSplitGeometry::getNumChildren(MeshSplitGeometry *this)

{
  return (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 3;
}


