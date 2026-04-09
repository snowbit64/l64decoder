// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersects
// Entry Point: 00b60878
// Size: 196 bytes
// Signature: undefined __thiscall intersects(BoundingAxisAlignedBox * this, BoundingVolume * param_1)


/* BoundingAxisAlignedBox::intersects(BoundingVolume const*) const */

undefined8 __thiscall
BoundingAxisAlignedBox::intersects(BoundingAxisAlignedBox *this,BoundingVolume *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = BoundingVolume::getType();
  if (iVar1 != 0) {
    iVar1 = BoundingVolume::getType();
    if ((((iVar1 != 1) || (*(float *)(this + 0x28) < *(float *)(param_1 + 0x1c))) ||
        (*(float *)(param_1 + 0x28) < *(float *)(this + 0x1c))) ||
       (((*(float *)(this + 0x2c) < *(float *)(param_1 + 0x20) ||
         (*(float *)(param_1 + 0x2c) < *(float *)(this + 0x20))) ||
        ((*(float *)(this + 0x30) < *(float *)(param_1 + 0x24) ||
         (*(float *)(param_1 + 0x30) < *(float *)(this + 0x24))))))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
  uVar2 = MathUtil::sphereAABBIntersect
                    ((float *)(param_1 + 0xc),*(float *)(param_1 + 0x18),(float *)(this + 0x1c),
                     (float *)(this + 0x28));
  return uVar2;
}


