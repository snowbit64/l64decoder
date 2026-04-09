// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoundingVolume
// Entry Point: 00b61ea8
// Size: 24 bytes
// Signature: undefined __thiscall BoundingVolume(BoundingVolume * this, BV_TYPE param_1)


/* BoundingVolume::BoundingVolume(BoundingVolume::BV_TYPE) */

void __thiscall BoundingVolume::BoundingVolume(BoundingVolume *this,BV_TYPE param_1)

{
  *(BV_TYPE *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__BoundingVolume_00fea3f8;
  return;
}


