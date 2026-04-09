// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWriteBufferSize
// Entry Point: 00aaab0c
// Size: 96 bytes
// Signature: undefined __thiscall getWriteBufferSize(NullRenderWindow * this, PIXEL_FORMAT param_1)


/* NullRenderWindow::getWriteBufferSize(PixelFormat::PIXEL_FORMAT) */

void __thiscall NullRenderWindow::getWriteBufferSize(NullRenderWindow *this,PIXEL_FORMAT param_1)

{
  PIXEL_FORMAT PVar1;
  uint uVar2;
  uint uVar3;
  
  PVar1 = 5;
  if (param_1 != 0) {
    PVar1 = param_1;
  }
  uVar2 = (**(code **)(*(long *)this + 0x10))();
  uVar3 = (**(code **)(*(long *)this + 0x18))(this);
  PixelFormatUtil::getMemorySize(uVar2,uVar3,1,PVar1);
  return;
}


