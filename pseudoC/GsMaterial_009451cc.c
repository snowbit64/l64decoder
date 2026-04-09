// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsMaterial
// Entry Point: 009451cc
// Size: 36 bytes
// Signature: undefined __thiscall ~GsMaterial(GsMaterial * this)


/* GsMaterial::~GsMaterial() */

void __thiscall GsMaterial::~GsMaterial(GsMaterial *this)

{
  ~GsMaterial(this);
  operator_delete(this);
  return;
}


