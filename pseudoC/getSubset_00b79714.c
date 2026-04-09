// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSubset
// Entry Point: 00b79714
// Size: 12 bytes
// Signature: undefined __thiscall getSubset(IndexedTriangleSet * this, uint param_1)


/* IndexedTriangleSet::getSubset(unsigned int) const */

undefined8 __thiscall IndexedTriangleSet::getSubset(IndexedTriangleSet *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x80) + (ulong)param_1 * 8);
}


