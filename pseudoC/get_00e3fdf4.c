// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get
// Entry Point: 00e3fdf4
// Size: 260 bytes
// Signature: undefined __thiscall get(Fader * this, double param_1)


/* SoLoud::Fader::get(double) */

float __thiscall SoLoud::Fader::get(Fader *this,double param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  dVar2 = *(double *)(this + 0x10);
  if (*(int *)(this + 0x28) == 2) {
    if (param_1 < dVar2) {
      *(double *)(this + 0x10) = param_1;
      dVar2 = param_1;
    }
    dVar2 = sin((param_1 - dVar2) * *(double *)(this + 0x18));
    dVar2 = (double)NEON_fmadd(dVar2,(double)*(float *)(this + 4),
                               (double)(*(float *)(this + 4) + *(float *)this));
    return (float)dVar2;
  }
  if (dVar2 <= param_1) {
    dVar4 = *(double *)(this + 0x18);
  }
  else {
    dVar2 = param_1 - (*(double *)(this + 0x20) - dVar2);
    dVar4 = dVar2 + (double)*(float *)(this + 0xc);
    *(double *)(this + 0x10) = dVar2;
    *(double *)(this + 0x18) = dVar4;
  }
  if (param_1 <= dVar4) {
    *(double *)(this + 0x20) = param_1;
    fVar1 = *(float *)(this + 8);
    fVar3 = (float)NEON_fmadd(*(float *)(this + 4),(float)(param_1 - dVar2) / *(float *)(this + 0xc)
                              ,*(undefined4 *)this);
    if (*(float *)(this + 4) <= 0.0) {
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      return fVar1;
    }
    if (fVar1 <= fVar3) {
      fVar1 = fVar3;
    }
    return fVar1;
  }
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  return *(float *)this + *(float *)(this + 4);
}


