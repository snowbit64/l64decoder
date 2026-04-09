// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionEmitterShape
// Entry Point: 0092a6c0
// Size: 36 bytes
// Signature: undefined __thiscall ~DestructionEmitterShape(DestructionEmitterShape * this)


/* DestructionEmitterShape::~DestructionEmitterShape() */

void __thiscall DestructionEmitterShape::~DestructionEmitterShape(DestructionEmitterShape *this)

{
  ~DestructionEmitterShape(this);
  operator_delete(this);
  return;
}


