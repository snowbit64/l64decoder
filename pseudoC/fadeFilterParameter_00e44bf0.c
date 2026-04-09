// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fadeFilterParameter
// Entry Point: 00e44bf0
// Size: 72 bytes
// Signature: undefined __thiscall fadeFilterParameter(FilterInstance * this, uint param_1, float param_2, double param_3, double param_4)


/* SoLoud::FilterInstance::fadeFilterParameter(unsigned int, float, double, double) */

void __thiscall
SoLoud::FilterInstance::fadeFilterParameter
          (FilterInstance *this,uint param_1,float param_2,double param_3,double param_4)

{
  float fVar1;
  
  if (((0.0 < param_3) && (param_1 < *(uint *)(this + 8))) &&
     (fVar1 = *(float *)(*(long *)(this + 0x10) + (ulong)param_1 * 4), fVar1 != param_2)) {
    Fader::set((Fader *)(*(long *)(this + 0x18) + (ulong)param_1 * 0x30),fVar1,param_2,param_3,
               param_4);
    return;
  }
  return;
}


