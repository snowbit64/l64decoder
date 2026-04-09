// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMuteState
// Entry Point: 00b0c860
// Size: 76 bytes
// Signature: undefined __thiscall setMuteState(SoftAudioDevice * this, bool param_1)


/* SoftAudioDevice::setMuteState(bool) */

void __thiscall SoftAudioDevice::setMuteState(SoftAudioDevice *this,bool param_1)

{
  float fVar1;
  
  if (this[0x1b60] != (SoftAudioDevice)param_1) {
    fVar1 = 0.0;
    if (!param_1) {
      fVar1 = *(float *)(this + 0x1b64);
    }
    SoLoud::Soloud::setGlobalVolume(*(Soloud **)(this + 8),fVar1);
    this[0x1b60] = (SoftAudioDevice)param_1;
  }
  return;
}


