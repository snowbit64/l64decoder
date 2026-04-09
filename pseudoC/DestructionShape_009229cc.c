// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionShape
// Entry Point: 009229cc
// Size: 40 bytes
// Signature: undefined __thiscall ~DestructionShape(DestructionShape * this)


/* non-virtual thunk to DestructionShape::~DestructionShape() */

void __thiscall DestructionShape::~DestructionShape(DestructionShape *this)

{
  ~DestructionShape(this + -0x210);
  operator_delete(this + -0x210);
  return;
}


