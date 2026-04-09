// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AABBTreeImpl
// Entry Point: 00ec5d08
// Size: 56 bytes
// Signature: undefined __thiscall AABBTreeImpl(AABBTreeImpl * this, XVector3 * param_1, uint param_2, uint * param_3, uint param_4)


/* aabbtree::AABBTreeImpl::AABBTreeImpl(aabbtree::XVector3<double> const*, unsigned int, unsigned
   int const*, unsigned int) */

void __thiscall
aabbtree::AABBTreeImpl::AABBTreeImpl
          (AABBTreeImpl *this,XVector3 *param_1,uint param_2,uint *param_3,uint param_4)

{
  *(XVector3 **)(this + 0x10) = param_1;
  *(uint *)(this + 0x18) = param_2;
  *(uint **)(this + 0x20) = param_3;
  *(uint *)(this + 0x28) = param_4;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR_raycast_01014780;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  Build();
  return;
}


