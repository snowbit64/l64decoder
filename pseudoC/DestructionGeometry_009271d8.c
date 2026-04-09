// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionGeometry
// Entry Point: 009271d8
// Size: 36 bytes
// Signature: undefined __thiscall ~DestructionGeometry(DestructionGeometry * this)


/* DestructionGeometry::~DestructionGeometry() */

void __thiscall DestructionGeometry::~DestructionGeometry(DestructionGeometry *this)

{
  ~DestructionGeometry(this);
  operator_delete(this);
  return;
}


