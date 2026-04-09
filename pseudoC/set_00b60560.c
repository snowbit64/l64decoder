// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00b60560
// Size: 200 bytes
// Signature: undefined __thiscall set(BoundingAxisAlignedBox * this, BoundingVolume * param_1)


/* BoundingAxisAlignedBox::set(BoundingVolume const*) */

void __thiscall BoundingAxisAlignedBox::set(BoundingAxisAlignedBox *this,BoundingVolume *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = BoundingVolume::getType();
  if (iVar1 == 0) {
    fVar3 = *(float *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    *(float *)(this + 0x24) = *(float *)(param_1 + 0x14) - fVar3;
    *(ulong *)(this + 0x1c) = CONCAT44((float)((ulong)uVar2 >> 0x20) - fVar3,(float)uVar2 - fVar3);
    fVar4 = *(float *)(param_1 + 0x14);
    *(ulong *)(this + 0x28) =
         CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20),
                  fVar3 + (float)*(undefined8 *)(param_1 + 0xc));
    *(float *)(this + 0x30) = fVar3 + fVar4;
  }
  else {
    iVar1 = BoundingVolume::getType();
    if (iVar1 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x1c);
      *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined8 *)(this + 0x1c) = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined8 *)(this + 0x28) = uVar2;
    }
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0xc) =
       CONCAT44(((float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20)) * 0.5,
                ((float)*(undefined8 *)(this + 0x1c) + (float)*(undefined8 *)(this + 0x28)) * 0.5);
  *(float *)(this + 0x14) = (*(float *)(this + 0x24) + *(float *)(this + 0x30)) * 0.5;
  return;
}


