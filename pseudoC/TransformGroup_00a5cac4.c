// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TransformGroup
// Entry Point: 00a5cac4
// Size: 36 bytes
// Signature: undefined __thiscall ~TransformGroup(TransformGroup * this)


/* TransformGroup::~TransformGroup() */

void __thiscall TransformGroup::~TransformGroup(TransformGroup *this)

{
  RawTransformGroup::~RawTransformGroup((RawTransformGroup *)this);
  operator_delete(this);
  return;
}


