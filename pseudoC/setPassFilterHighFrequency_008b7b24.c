// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPassFilterHighFrequency
// Entry Point: 008b7b24
// Size: 104 bytes
// Signature: undefined __thiscall setPassFilterHighFrequency(BandDistortion * this, float param_1)


/* BandDistortion::setPassFilterHighFrequency(float) */

void __thiscall BandDistortion::setPassFilterHighFrequency(BandDistortion *this,float param_1)

{
  if (*(float *)(this + 0x90) == param_1) {
    return;
  }
  BiquadResonantFilter::reset();
  BiquadResonantFilter::setup((BiquadResonantFilter *)(this + 100),2,param_1,0.707,0.0);
  return;
}


