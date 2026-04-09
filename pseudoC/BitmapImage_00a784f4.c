// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BitmapImage
// Entry Point: 00a784f4
// Size: 84 bytes
// Signature: undefined __thiscall BitmapImage(BitmapImage * this, ImageDesc * param_1)


/* BitmapImage::BitmapImage(ImageDesc const&) */

void __thiscall BitmapImage::BitmapImage(BitmapImage *this,ImageDesc *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *this = (BitmapImage)0x1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x34) = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined2 *)(this + 0x2c) = *(undefined2 *)(param_1 + 0x48);
  return;
}


