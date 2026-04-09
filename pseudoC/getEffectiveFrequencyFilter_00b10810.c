// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEffectiveFrequencyFilter
// Entry Point: 00b10810
// Size: 208 bytes
// Signature: undefined __thiscall getEffectiveFrequencyFilter(SoftAudioSource * this, float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6)


/* SoftAudioSource::getEffectiveFrequencyFilter(float&, float&, float&, float&, float&, float&)
   const */

void __thiscall
SoftAudioSource::getEffectiveFrequencyFilter
          (SoftAudioSource *this,float *param_1,float *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6)

{
  SoftAudioDevice::getGroupFrequencyFilter
            (*(SoftAudioDevice **)(this + 0xa8),*(uint *)(this + 0xd0),param_1,param_2,param_3,
             param_4,param_5,param_6);
  *param_1 = *(float *)(this + 0xf0) * *param_1;
  *param_2 = *(float *)(this + 0xf4) * *param_2;
  if (0.0 < *(float *)(this + 0xf8)) {
    *param_3 = *(float *)(this + 0xf8);
  }
  if (0.0 < *(float *)(this + 0xfc)) {
    *param_4 = *(float *)(this + 0xfc);
  }
  if (0.0 < *(float *)(this + 0x100)) {
    *param_5 = *(float *)(this + 0x100);
  }
  if (0.0 < *(float *)(this + 0x104)) {
    *param_6 = *(float *)(this + 0x104);
  }
  return;
}


