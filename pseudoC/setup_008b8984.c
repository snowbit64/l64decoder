// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setup
// Entry Point: 008b8984
// Size: 24 bytes
// Signature: undefined __thiscall setup(BiquadResonantFilter * this, float param_1, float param_2, float param_3, float param_4, float param_5)


/* BiquadResonantFilter::setup(float, float, float, float, float) */

void __thiscall
BiquadResonantFilter::setup
          (BiquadResonantFilter *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  *(float *)(this + 8) = param_1;
  *(float *)(this + 0xc) = param_2;
  *(float *)(this + 0x10) = param_3;
  *(float *)this = param_4;
  *(float *)(this + 4) = param_5;
  return;
}


