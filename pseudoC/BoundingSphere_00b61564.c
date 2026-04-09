// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoundingSphere
// Entry Point: 00b61564
// Size: 60 bytes
// Signature: undefined __thiscall BoundingSphere(BoundingSphere * this)


/* BoundingSphere::BoundingSphere() */

void __thiscall BoundingSphere::BoundingSphere(BoundingSphere *this)

{
  BoundingVolume::BoundingVolume((BoundingVolume *)this,0);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__BoundingSphere_00fea370;
  return;
}


