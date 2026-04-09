// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00e3fd38
// Size: 56 bytes
// Signature: undefined __thiscall set(Fader * this, float param_1, float param_2, double param_3, double param_4)


/* SoLoud::Fader::set(float, float, double, double) */

void __thiscall
SoLoud::Fader::set(Fader *this,float param_1,float param_2,double param_3,double param_4)

{
  *(float *)this = param_1;
  *(float *)(this + 8) = param_1;
  *(double *)(this + 0x20) = param_4;
  *(double *)(this + 0x10) = param_4;
  *(float *)(this + 0xc) = (float)param_3;
  *(float *)(this + 4) = param_2 - param_1;
  *(undefined4 *)(this + 0x28) = 1;
  *(double *)(this + 0x18) = (double)(float)param_3 + param_4;
  return;
}


