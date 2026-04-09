// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Frustum
// Entry Point: 00b560d4
// Size: 4 bytes
// Signature: undefined __thiscall ~Frustum(Frustum * this)


/* Frustum::~Frustum() */

void __thiscall Frustum::~Frustum(Frustum *this)

{
  operator_delete(this);
  return;
}


