// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFrequencyFilter
// Entry Point: 00b107f0
// Size: 28 bytes
// Signature: undefined __thiscall setFrequencyFilter(SoftAudioSource * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* SoftAudioSource::setFrequencyFilter(float, float, float, float, float, float) */

void __thiscall
SoftAudioSource::setFrequencyFilter
          (SoftAudioSource *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  *(float *)(this + 0xf4) = param_2;
  *(float *)(this + 0xf0) = param_1;
  *(float *)(this + 0xf8) = param_3;
  *(float *)(this + 0xfc) = param_4;
  *(float *)(this + 0x100) = param_5;
  *(float *)(this + 0x104) = param_6;
  updateFrequencyFilter();
  return;
}


