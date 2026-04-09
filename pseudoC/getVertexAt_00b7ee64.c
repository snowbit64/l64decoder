// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexAt
// Entry Point: 00b7ee64
// Size: 16 bytes
// Signature: undefined __thiscall getVertexAt(IndexedTriangleSetBuilder * this, uint param_1)


/* IndexedTriangleSetBuilder::getVertexAt(unsigned int) */

long __thiscall IndexedTriangleSetBuilder::getVertexAt(IndexedTriangleSetBuilder *this,uint param_1)

{
  return *(long *)this + (ulong)param_1 * 0x70;
}


