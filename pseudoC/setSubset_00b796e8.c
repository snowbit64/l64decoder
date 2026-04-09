// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSubset
// Entry Point: 00b796e8
// Size: 12 bytes
// Signature: undefined __thiscall setSubset(IndexedTriangleSet * this, IndexedTriangleSubset * param_1, uint param_2)


/* IndexedTriangleSet::setSubset(IndexedTriangleSubset*, unsigned int) */

void __thiscall
IndexedTriangleSet::setSubset(IndexedTriangleSet *this,IndexedTriangleSubset *param_1,uint param_2)

{
  *(IndexedTriangleSubset **)(*(long *)(this + 0x80) + (ulong)param_2 * 8) = param_1;
  return;
}


