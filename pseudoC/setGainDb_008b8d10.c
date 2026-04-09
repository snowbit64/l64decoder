// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGainDb
// Entry Point: 008b8d10
// Size: 92 bytes
// Signature: undefined __thiscall setGainDb(Equalizer * this, int param_1, float param_2)


/* Equalizer::setGainDb(int, float) */

void __thiscall Equalizer::setGainDb(Equalizer *this,int param_1,float param_2)

{
  long lVar1;
  float *pfVar2;
  
  if (-1 < param_1) {
    lVar1 = *(long *)this;
    if (((lVar1 != *(long *)(this + 8)) &&
        (param_1 < (int)((ulong)(*(long *)(this + 8) - lVar1) >> 3) * -0x49249249)) &&
       (pfVar2 = (float *)(lVar1 + (ulong)(uint)param_1 * 0x38 + 0x30), *pfVar2 != param_2)) {
      *pfVar2 = param_2;
      BiquadResonantFilter::calculateParameters();
      return;
    }
  }
  return;
}


