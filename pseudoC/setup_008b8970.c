// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setup
// Entry Point: 008b8970
// Size: 20 bytes
// Signature: undefined __thiscall setup(BiquadResonantFilter * this, FilterType param_1, float param_2, float param_3, float param_4)


/* BiquadResonantFilter::setup(BiquadResonantFilter::FilterType, float, float, float) */

void __thiscall
BiquadResonantFilter::setup
          (BiquadResonantFilter *this,FilterType param_1,float param_2,float param_3,float param_4)

{
  *(FilterType *)(this + 0x28) = param_1;
  *(float *)(this + 0x2c) = param_2;
  *(float *)(this + 0x30) = param_4;
  *(float *)(this + 0x34) = param_3;
  calculateParameters();
  return;
}


