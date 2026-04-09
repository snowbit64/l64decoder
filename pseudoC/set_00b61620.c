// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00b61620
// Size: 68 bytes
// Signature: undefined __thiscall set(BoundingSphere * this, BoundingVolume * param_1)


/* BoundingSphere::set(BoundingVolume const*) */

void __thiscall BoundingSphere::set(BoundingSphere *this,BoundingVolume *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = BoundingVolume::getType();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(this + 0xc) = uVar2;
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}


