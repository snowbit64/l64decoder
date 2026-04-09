// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDistortionFrequencies
// Entry Point: 008b7bbc
// Size: 176 bytes
// Signature: undefined updateDistortionFrequencies(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BandDistortion::updateDistortionFrequencies() */

void BandDistortion::updateDistortionFrequencies(void)

{
  float **in_x0;
  float *pfVar1;
  float fVar2;
  
  pfVar1 = *in_x0;
  fVar2 = *pfVar1;
  if (*(float *)(in_x0 + 0xb) != fVar2) {
    BiquadResonantFilter::reset();
    BiquadResonantFilter::setup((BiquadResonantFilter *)((long)in_x0 + 0x2c),1,fVar2,0.707,0.0);
    pfVar1 = *in_x0;
  }
  fVar2 = pfVar1[1];
  if (*(float *)(in_x0 + 0x12) == fVar2) {
    return;
  }
  BiquadResonantFilter::reset();
  BiquadResonantFilter::setup((BiquadResonantFilter *)((long)in_x0 + 100),2,fVar2,0.707,0.0);
  return;
}


