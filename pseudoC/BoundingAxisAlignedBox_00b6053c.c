// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BoundingAxisAlignedBox
// Entry Point: 00b6053c
// Size: 36 bytes
// Signature: undefined __thiscall ~BoundingAxisAlignedBox(BoundingAxisAlignedBox * this)


/* BoundingAxisAlignedBox::~BoundingAxisAlignedBox() */

void __thiscall BoundingAxisAlignedBox::~BoundingAxisAlignedBox(BoundingAxisAlignedBox *this)

{
  BoundingVolume::~BoundingVolume((BoundingVolume *)this);
  operator_delete(this);
  return;
}


