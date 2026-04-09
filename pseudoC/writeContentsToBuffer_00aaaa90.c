// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeContentsToBuffer
// Entry Point: 00aaaa90
// Size: 124 bytes
// Signature: undefined __thiscall writeContentsToBuffer(NullRenderWindow * this, uchar * param_1, IRenderDevice * param_2, PIXEL_FORMAT param_3)


/* NullRenderWindow::writeContentsToBuffer(unsigned char*, IRenderDevice*,
   PixelFormat::PIXEL_FORMAT) */

undefined8 __thiscall
NullRenderWindow::writeContentsToBuffer
          (NullRenderWindow *this,uchar *param_1,IRenderDevice *param_2,PIXEL_FORMAT param_3)

{
  PIXEL_FORMAT PVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  PVar1 = 5;
  if (param_3 != 0) {
    PVar1 = param_3;
  }
  uVar2 = (**(code **)(*(long *)this + 0x10))();
  uVar3 = (**(code **)(*(long *)this + 0x18))(this);
  uVar4 = PixelFormatUtil::getMemorySize(uVar2,uVar3,1,PVar1);
  memset(param_1,0,uVar4 & 0xffffffff);
  return 1;
}


