// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordedSamples
// Entry Point: 00b0f76c
// Size: 28 bytes
// Signature: undefined __thiscall getRecordedSamples(SoftAudioRecordingDevice * this, void * param_1, uint param_2)


/* SoftAudioRecordingDevice::getRecordedSamples(void*, unsigned int) */

void __thiscall
SoftAudioRecordingDevice::getRecordedSamples
          (SoftAudioRecordingDevice *this,void *param_1,uint param_2)

{
  SoLoud::Soloud::getRecordedSamples(*(Soloud **)(this + 8),*(uint *)(this + 0x10),param_1,param_2);
  return;
}


