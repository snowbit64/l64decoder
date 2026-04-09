// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSettings
// Entry Point: 008b79e4
// Size: 216 bytes
// Signature: undefined __thiscall setSettings(BandDistortion * this, BandDistortionSettings * param_1)


/* BandDistortion::setSettings(BandDistortionSettings const*) */

undefined8 __thiscall
BandDistortion::setSettings(BandDistortion *this,BandDistortionSettings *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)param_1;
  *(BandDistortionSettings **)this = param_1;
  if (*(float *)(this + 0x58) != fVar1) {
    BiquadResonantFilter::reset();
    BiquadResonantFilter::setup((BiquadResonantFilter *)(this + 0x2c),1,fVar1,0.707,0.0);
    param_1 = *(BandDistortionSettings **)this;
  }
  fVar1 = *(float *)(param_1 + 4);
  if (*(float *)(this + 0x90) != fVar1) {
    BiquadResonantFilter::reset();
    BiquadResonantFilter::setup((BiquadResonantFilter *)(this + 100),2,fVar1,0.707,0.0);
    param_1 = *(BandDistortionSettings **)this;
  }
  Distortion::setType((Distortion *)(this + 8),*(Type *)(param_1 + 8));
  Distortion::setType((Distortion *)(this + 0x14),*(Type *)(*(long *)this + 0x10));
  Distortion::setType((Distortion *)(this + 0x20),*(Type *)(*(long *)this + 0x18));
  return 1;
}


