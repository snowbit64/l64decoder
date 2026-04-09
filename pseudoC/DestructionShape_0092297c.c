// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionShape
// Entry Point: 0092297c
// Size: 40 bytes
// Signature: undefined __thiscall ~DestructionShape(DestructionShape * this)


/* non-virtual thunk to DestructionShape::~DestructionShape() */

void __thiscall DestructionShape::~DestructionShape(DestructionShape *this)

{
  ~DestructionShape(this + -0x160);
  operator_delete(this + -0x160);
  return;
}


