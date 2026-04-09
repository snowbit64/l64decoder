// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTriangleAt
// Entry Point: 00b7ee74
// Size: 12 bytes
// Signature: undefined __thiscall getTriangleAt(IndexedTriangleSetBuilder * this, uint param_1)


/* IndexedTriangleSetBuilder::getTriangleAt(unsigned int) */

long __thiscall
IndexedTriangleSetBuilder::getTriangleAt(IndexedTriangleSetBuilder *this,uint param_1)

{
  return *(long *)(this + 0x18) + (ulong)param_1 * 0x10;
}


