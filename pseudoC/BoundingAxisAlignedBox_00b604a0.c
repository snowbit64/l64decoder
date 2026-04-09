// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoundingAxisAlignedBox
// Entry Point: 00b604a0
// Size: 152 bytes
// Signature: undefined __thiscall BoundingAxisAlignedBox(BoundingAxisAlignedBox * this, Vector3 * param_1, Vector3 * param_2)


/* BoundingAxisAlignedBox::BoundingAxisAlignedBox(Vector3 const&, Vector3 const&) */

void __thiscall
BoundingAxisAlignedBox::BoundingAxisAlignedBox
          (BoundingAxisAlignedBox *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  BoundingVolume::BoundingVolume((BoundingVolume *)this,1);
  *(undefined ***)this = &PTR__BoundingAxisAlignedBox_00fea2e8;
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1c) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(ulong *)(this + 0xc) =
       CONCAT44(((float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20)) * 0.5,
                ((float)*(undefined8 *)(this + 0x1c) + (float)*(undefined8 *)(this + 0x28)) * 0.5);
  *(float *)(this + 0x14) = (*(float *)(this + 0x24) + *(float *)(this + 0x30)) * 0.5;
  return;
}


