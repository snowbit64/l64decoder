// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioRecordingDevice
// Entry Point: 00b0f6e0
// Size: 24 bytes
// Signature: undefined __thiscall SoftAudioRecordingDevice(SoftAudioRecordingDevice * this, Soloud * param_1, uint param_2)


/* SoftAudioRecordingDevice::SoftAudioRecordingDevice(SoLoud::Soloud*, unsigned int) */

void __thiscall
SoftAudioRecordingDevice::SoftAudioRecordingDevice
          (SoftAudioRecordingDevice *this,Soloud *param_1,uint param_2)

{
  *(uint *)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__SoftAudioRecordingDevice_00fe7bc0;
  *(Soloud **)(this + 8) = param_1;
  return;
}


