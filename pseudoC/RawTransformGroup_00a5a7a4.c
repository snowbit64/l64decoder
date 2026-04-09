// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RawTransformGroup
// Entry Point: 00a5a7a4
// Size: 36 bytes
// Signature: undefined __thiscall ~RawTransformGroup(RawTransformGroup * this)


/* RawTransformGroup::~RawTransformGroup() */

void __thiscall RawTransformGroup::~RawTransformGroup(RawTransformGroup *this)

{
  ~RawTransformGroup(this);
  operator_delete(this);
  return;
}


