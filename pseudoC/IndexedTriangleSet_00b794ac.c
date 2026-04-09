// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IndexedTriangleSet
// Entry Point: 00b794ac
// Size: 72 bytes
// Signature: undefined __thiscall IndexedTriangleSet(IndexedTriangleSet * this)


/* IndexedTriangleSet::IndexedTriangleSet() */

void __thiscall IndexedTriangleSet::IndexedTriangleSet(IndexedTriangleSet *this)

{
  TriangleSet::TriangleSet((TriangleSet *)this);
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined ***)this = &PTR__IndexedTriangleSet_00fea4b8;
  return;
}


