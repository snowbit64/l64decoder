// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderTextureController
// Entry Point: 00a36b54
// Size: 68 bytes
// Signature: undefined __thiscall RenderTextureController(RenderTextureController * this, IRenderDevice * param_1, uint param_2, uint param_3, float param_4, uint param_5, PIXEL_FORMAT param_6, bool param_7, PIXEL_FORMAT param_8)


/* RenderTextureController::RenderTextureController(IRenderDevice*, unsigned int, unsigned int,
   float, unsigned int, PixelFormat::PIXEL_FORMAT, bool, PixelFormat::PIXEL_FORMAT) */

void __thiscall
RenderTextureController::RenderTextureController
          (RenderTextureController *this,IRenderDevice *param_1,uint param_2,uint param_3,
          float param_4,uint param_5,PIXEL_FORMAT param_6,bool param_7,PIXEL_FORMAT param_8)

{
  *(float *)(this + 0x10) = param_4;
  if (7 < param_5) {
    param_5 = 8;
  }
  *(IRenderDevice **)this = param_1;
  *(uint *)(this + 8) = param_2;
  *(uint *)(this + 0xc) = param_3;
  *(uint *)(this + 0x14) = param_5;
  *(PIXEL_FORMAT *)(this + 0x18) = param_6;
  this[0x1c] = (RenderTextureController)param_7;
  *(PIXEL_FORMAT *)(this + 0x20) = param_8;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


