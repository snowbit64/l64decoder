// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 008b8d6c
// Size: 132 bytes
// Signature: undefined __thiscall apply(Equalizer * this, float * param_1)


/* Equalizer::apply(float&) */

void __thiscall Equalizer::apply(Equalizer *this,float *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)this;
  if (0 < (int)((ulong)(*(long *)(this + 8) - lVar1) >> 3) * -0x49249249) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      BiquadResonantFilter::filter((BiquadResonantFilter *)(lVar1 + lVar2),param_1);
      lVar1 = *(long *)this;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (lVar3 < (int)((ulong)(*(long *)(this + 8) - lVar1) >> 3) * -0x49249249);
  }
  return;
}


