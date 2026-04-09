// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaterialIndex
// Entry Point: 00a6ae94
// Size: 12 bytes
// Signature: undefined __thiscall getMaterialIndex(FoliageCellGeometry * this, uint param_1)


/* FoliageCellGeometry::getMaterialIndex(unsigned int) const */

undefined4 __thiscall FoliageCellGeometry::getMaterialIndex(FoliageCellGeometry *this,uint param_1)

{
  return *(undefined4 *)(*(long *)(this + 0xa0) + (ulong)param_1 * 4);
}


