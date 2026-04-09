// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Spline
// Entry Point: 00b5f2f0
// Size: 40 bytes
// Signature: undefined __thiscall Spline(Spline * this, SPLINE_TYPE param_1, FORM param_2, uint param_3, uint param_4)


/* Spline::Spline(Spline::SPLINE_TYPE, Spline::FORM, unsigned int, unsigned int) */

void __thiscall
Spline::Spline(Spline *this,SPLINE_TYPE param_1,FORM param_2,uint param_3,uint param_4)

{
  *(SPLINE_TYPE *)(this + 0x30) = param_1;
  *(FORM *)(this + 8) = param_2;
  *(uint *)(this + 0x20) = param_3;
  *(uint *)(this + 0x24) = param_4;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__Spline_00fea278;
  return;
}


