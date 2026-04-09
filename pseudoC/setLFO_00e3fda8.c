// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLFO
// Entry Point: 00e3fda8
// Size: 76 bytes
// Signature: undefined __thiscall setLFO(Fader * this, float param_1, float param_2, double param_3, double param_4)


/* SoLoud::Fader::setLFO(float, float, double, double) */

void __thiscall
SoLoud::Fader::setLFO(Fader *this,float param_1,float param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  
  *(double *)(this + 0x10) = param_4;
  *(float *)(this + 8) = param_1;
  *(float *)(this + 0xc) = (float)param_3;
  fVar2 = (param_2 - param_1) * 0.5;
  *(undefined4 *)(this + 0x28) = 2;
  fVar1 = -((param_2 - param_1) * 0.5);
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  *(float *)this = param_1;
  *(float *)(this + 4) = fVar1;
  *(double *)(this + 0x18) = (double)(6.283185 / (float)param_3);
  *(double *)(this + 0x20) = param_4;
  return;
}


