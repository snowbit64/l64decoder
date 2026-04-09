// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionGeometryShared
// Entry Point: 00928a3c
// Size: 36 bytes
// Signature: undefined __thiscall ~DestructionGeometryShared(DestructionGeometryShared * this)


/* DestructionGeometryShared::~DestructionGeometryShared() */

void __thiscall
DestructionGeometryShared::~DestructionGeometryShared(DestructionGeometryShared *this)

{
  ~DestructionGeometryShared(this);
  operator_delete(this);
  return;
}


