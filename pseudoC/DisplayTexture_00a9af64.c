// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DisplayTexture
// Entry Point: 00a9af64
// Size: 56 bytes
// Signature: undefined __thiscall DisplayTexture(DisplayTexture * this, uint param_1, uint param_2, float param_3, COLORSPACE param_4, bool param_5)


/* DisplayTexture::DisplayTexture(unsigned int, unsigned int, float, IDisplay::COLORSPACE, bool) */

void __thiscall
DisplayTexture::DisplayTexture
          (DisplayTexture *this,uint param_1,uint param_2,float param_3,COLORSPACE param_4,
          bool param_5)

{
  Display2D::Display2D((Display2D *)this,param_1,param_2,param_3,param_4,param_5);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR__IDisplay_00fe4880;
  return;
}


