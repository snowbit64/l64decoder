// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Display2D
// Entry Point: 00a9aee4
// Size: 36 bytes
// Signature: undefined __thiscall Display2D(Display2D * this, uint param_1, uint param_2, float param_3, COLORSPACE param_4, bool param_5)


/* Display2D::Display2D(unsigned int, unsigned int, float, IDisplay::COLORSPACE, bool) */

void __thiscall
Display2D::Display2D
          (Display2D *this,uint param_1,uint param_2,float param_3,COLORSPACE param_4,bool param_5)

{
  *(uint *)(this + 8) = param_1;
  *(uint *)(this + 0xc) = param_2;
  *(float *)(this + 0x10) = param_3;
  *(COLORSPACE *)(this + 0x14) = param_4;
  this[0x18] = (Display2D)param_5;
  *(undefined ***)this = &PTR__IDisplay_00fe4780;
  return;
}


