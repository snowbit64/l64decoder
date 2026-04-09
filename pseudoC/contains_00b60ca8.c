// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: contains
// Entry Point: 00b60ca8
// Size: 108 bytes
// Signature: undefined __thiscall contains(BoundingAxisAlignedBox * this, Vector3 * param_1)


/* BoundingAxisAlignedBox::contains(Vector3 const&) const */

bool __thiscall BoundingAxisAlignedBox::contains(BoundingAxisAlignedBox *this,Vector3 *param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  if ((fVar2 < *(float *)(this + 0x1c) || *(float *)(this + 0x28) <= fVar2) &&
      (fVar2 < *(float *)(this + 0x1c) || fVar2 != *(float *)(this + 0x28))) {
    return false;
  }
  bVar1 = false;
  if ((*(float *)(this + 0x20) <= *(float *)(param_1 + 4)) &&
     (*(float *)(param_1 + 4) <= *(float *)(this + 0x2c))) {
    if (*(float *)(param_1 + 8) < *(float *)(this + 0x24)) {
      return false;
    }
    bVar1 = *(float *)(param_1 + 8) <= *(float *)(this + 0x30);
  }
  return bVar1;
}


