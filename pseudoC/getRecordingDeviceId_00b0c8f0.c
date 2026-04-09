// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordingDeviceId
// Entry Point: 00b0c8f0
// Size: 8 bytes
// Signature: undefined __thiscall getRecordingDeviceId(SoftAudioDevice * this, uint param_1)


/* SoftAudioDevice::getRecordingDeviceId(unsigned int) const */

void __thiscall SoftAudioDevice::getRecordingDeviceId(SoftAudioDevice *this,uint param_1)

{
  SoLoud::Soloud::getRecordingDeviceId(*(Soloud **)(this + 8),param_1);
  return;
}


