// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordingDeviceFrequency
// Entry Point: 00b0c8d8
// Size: 8 bytes
// Signature: undefined __thiscall getRecordingDeviceFrequency(SoftAudioDevice * this, uint param_1)


/* SoftAudioDevice::getRecordingDeviceFrequency(unsigned int) const */

void __thiscall SoftAudioDevice::getRecordingDeviceFrequency(SoftAudioDevice *this,uint param_1)

{
  SoLoud::Soloud::getRecordingDeviceFrequency(*(Soloud **)(this + 8),param_1);
  return;
}


