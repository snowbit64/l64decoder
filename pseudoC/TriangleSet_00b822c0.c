// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TriangleSet
// Entry Point: 00b822c0
// Size: 36 bytes
// Signature: undefined __thiscall ~TriangleSet(TriangleSet * this)


/* TriangleSet::~TriangleSet() */

void __thiscall TriangleSet::~TriangleSet(TriangleSet *this)

{
  ~TriangleSet(this);
  operator_delete(this);
  return;
}


