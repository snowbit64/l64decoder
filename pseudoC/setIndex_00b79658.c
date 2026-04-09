// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setIndex
// Entry Point: 00b79658
// Size: 36 bytes
// Signature: undefined __thiscall setIndex(IndexedTriangleSet * this, uint param_1, uint param_2)


/* IndexedTriangleSet::setIndex(unsigned int, unsigned int) */

void __thiscall IndexedTriangleSet::setIndex(IndexedTriangleSet *this,uint param_1,uint param_2)

{
  if (*(uint *)(this + 8) < 0x10001) {
    *(short *)(*(long *)(this + 0x70) + (ulong)param_2 * 2) = (short)param_1;
    return;
  }
  *(uint *)(*(long *)(this + 0x70) + (ulong)param_2 * 4) = param_1;
  return;
}


