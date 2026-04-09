// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionGeometry
// Entry Point: 009271fc
// Size: 40 bytes
// Signature: undefined __thiscall ~DestructionGeometry(DestructionGeometry * this)


/* non-virtual thunk to DestructionGeometry::~DestructionGeometry() */

void __thiscall DestructionGeometry::~DestructionGeometry(DestructionGeometry *this)

{
  ~DestructionGeometry(this + -0x10);
  operator_delete(this + -0x10);
  return;
}


