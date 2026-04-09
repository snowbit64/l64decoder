// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oscillateFilterParameter
// Entry Point: 00e44c38
// Size: 48 bytes
// Signature: undefined __thiscall oscillateFilterParameter(FilterInstance * this, uint param_1, float param_2, float param_3, double param_4, double param_5)


/* SoLoud::FilterInstance::oscillateFilterParameter(unsigned int, float, float, double, double) */

void __thiscall
SoLoud::FilterInstance::oscillateFilterParameter
          (FilterInstance *this,uint param_1,float param_2,float param_3,double param_4,
          double param_5)

{
  if (((param_2 != param_3) && (0.0 < param_4)) && (param_1 < *(uint *)(this + 8))) {
    Fader::setLFO((Fader *)(*(long *)(this + 0x18) + (ulong)param_1 * 0x30),param_2,param_3,param_4,
                  param_5);
    return;
  }
  return;
}


