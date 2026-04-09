// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getImageDesc
// Entry Point: 00a78834
// Size: 72 bytes
// Signature: undefined __thiscall getImageDesc(BitmapImage * this, ImageDesc * param_1)


/* BitmapImage::getImageDesc(ImageDesc&) const */

void __thiscall BitmapImage::getImageDesc(BitmapImage *this,ImageDesc *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)param_1 = *(undefined8 *)(this + 8);
  uVar1 = *(undefined4 *)(this + 0x14);
  uVar2 = *(undefined4 *)(this + 0x18);
  uVar3 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x34);
  uVar1 = *(undefined4 *)(this + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(this + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x28);
  return;
}


