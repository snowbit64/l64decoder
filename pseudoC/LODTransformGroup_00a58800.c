// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LODTransformGroup
// Entry Point: 00a58800
// Size: 36 bytes
// Signature: undefined __thiscall ~LODTransformGroup(LODTransformGroup * this)


/* LODTransformGroup::~LODTransformGroup() */

void __thiscall LODTransformGroup::~LODTransformGroup(LODTransformGroup *this)

{
  TransformGroup::~TransformGroup((TransformGroup *)this);
  operator_delete(this);
  return;
}


