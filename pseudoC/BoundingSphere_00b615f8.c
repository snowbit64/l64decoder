// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BoundingSphere
// Entry Point: 00b615f8
// Size: 4 bytes
// Signature: undefined __thiscall ~BoundingSphere(BoundingSphere * this)


/* BoundingSphere::~BoundingSphere() */

void __thiscall BoundingSphere::~BoundingSphere(BoundingSphere *this)

{
  BoundingVolume::~BoundingVolume((BoundingVolume *)this);
  return;
}


