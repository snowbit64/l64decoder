// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionShape
// Entry Point: 00922930
// Size: 36 bytes
// Signature: undefined __thiscall ~DestructionShape(DestructionShape * this)


/* DestructionShape::~DestructionShape() */

void __thiscall DestructionShape::~DestructionShape(DestructionShape *this)

{
  ~DestructionShape(this);
  operator_delete(this);
  return;
}


