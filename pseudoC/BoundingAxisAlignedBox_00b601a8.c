// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoundingAxisAlignedBox
// Entry Point: 00b601a8
// Size: 88 bytes
// Signature: undefined __thiscall BoundingAxisAlignedBox(BoundingAxisAlignedBox * this)


/* BoundingAxisAlignedBox::BoundingAxisAlignedBox() */

void __thiscall BoundingAxisAlignedBox::BoundingAxisAlignedBox(BoundingAxisAlignedBox *this)

{
  BoundingVolume::BoundingVolume((BoundingVolume *)this,1);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x24) = 0xf645371976453719;
  *(undefined8 *)(this + 0x1c) = 0x7645371976453719;
  *(undefined8 *)(this + 0x2c) = 0xf6453719f6453719;
  *(undefined ***)this = &PTR__BoundingAxisAlignedBox_00fea2e8;
  return;
}


