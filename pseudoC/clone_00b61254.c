// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00b61254
// Size: 152 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BoundingAxisAlignedBox::clone() const */

undefined8 * BoundingAxisAlignedBox::clone(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long in_x0;
  undefined8 *this;
  undefined8 uVar3;
  
  this = (undefined8 *)operator_new(0x38);
                    /* try { // try from 00b61270 to 00b61277 has its CatchHandler @ 00b612ec */
  BoundingVolume::BoundingVolume((BoundingVolume *)this,1);
  uVar3 = *(undefined8 *)(in_x0 + 0x28);
  uVar1 = *(undefined4 *)(in_x0 + 0x24);
  *(undefined8 *)((long)this + 0x1c) = *(undefined8 *)(in_x0 + 0x1c);
  uVar2 = *(undefined4 *)(in_x0 + 0x30);
  this[5] = uVar3;
  *(undefined4 *)((long)this + 0x24) = uVar1;
  *(undefined4 *)(this + 6) = uVar2;
  *(undefined4 *)(this + 3) = 0;
  *(ulong *)((long)this + 0xc) =
       CONCAT44(((float)((ulong)*(undefined8 *)((long)this + 0x1c) >> 0x20) +
                (float)((ulong)this[5] >> 0x20)) * 0.5,
                ((float)*(undefined8 *)((long)this + 0x1c) + (float)this[5]) * 0.5);
  *this = &PTR__BoundingAxisAlignedBox_00fea2e8;
  *(float *)((long)this + 0x14) = (*(float *)((long)this + 0x24) + *(float *)(this + 6)) * 0.5;
  return this;
}


