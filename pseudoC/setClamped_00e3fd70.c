// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setClamped
// Entry Point: 00e3fd70
// Size: 56 bytes
// Signature: undefined __thiscall setClamped(Fader * this, float param_1, float param_2, float param_3, double param_4, double param_5)


/* SoLoud::Fader::setClamped(float, float, float, double, double) */

void __thiscall
SoLoud::Fader::setClamped
          (Fader *this,float param_1,float param_2,float param_3,double param_4,double param_5)

{
  *(float *)this = param_1;
  *(double *)(this + 0x20) = param_5;
  *(float *)(this + 8) = param_3;
  *(double *)(this + 0x10) = param_5;
  *(float *)(this + 0xc) = (float)param_4;
  *(float *)(this + 4) = param_2 - param_1;
  *(undefined4 *)(this + 0x28) = 1;
  *(double *)(this + 0x18) = (double)(float)param_4 + param_5;
  return;
}


