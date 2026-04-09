// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPassFilterLowFrequency
// Entry Point: 008b7abc
// Size: 104 bytes
// Signature: undefined __thiscall setPassFilterLowFrequency(BandDistortion * this, float param_1)


/* BandDistortion::setPassFilterLowFrequency(float) */

void __thiscall BandDistortion::setPassFilterLowFrequency(BandDistortion *this,float param_1)

{
  if (*(float *)(this + 0x58) == param_1) {
    return;
  }
  BiquadResonantFilter::reset();
  BiquadResonantFilter::setup((BiquadResonantFilter *)(this + 0x2c),1,param_1,0.707,0.0);
  return;
}


