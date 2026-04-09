// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 00b0c618
// Size: 28 bytes
// Signature: undefined __thiscall setVolume(SoftAudioDevice * this, float param_1)


/* SoftAudioDevice::setVolume(float) */

void __thiscall SoftAudioDevice::setVolume(SoftAudioDevice *this,float param_1)

{
  *(float *)(this + 0x1b64) = param_1;
  if (this[0x1b60] != (SoftAudioDevice)0x0) {
    return;
  }
  SoLoud::Soloud::setGlobalVolume(*(Soloud **)(this + 8),param_1);
  return;
}


