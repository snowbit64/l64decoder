// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setImageDesc
// Entry Point: 00a78548
// Size: 132 bytes
// Signature: undefined __thiscall setImageDesc(BitmapImage * this, ImageDesc * param_1)


/* BitmapImage::setImageDesc(ImageDesc const&) */

void __thiscall BitmapImage::setImageDesc(BitmapImage *this,ImageDesc *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*this != (BitmapImage)0x0) && (*(void **)(this + 0x20) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *this = (BitmapImage)0x1;
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


