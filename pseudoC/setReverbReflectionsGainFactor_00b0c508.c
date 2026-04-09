// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReverbReflectionsGainFactor
// Entry Point: 00b0c508
// Size: 136 bytes
// Signature: undefined __thiscall setReverbReflectionsGainFactor(SoftAudioDevice * this, uint param_1, float param_2)


/* SoftAudioDevice::setReverbReflectionsGainFactor(unsigned int, float) */

void __thiscall
SoftAudioDevice::setReverbReflectionsGainFactor(SoftAudioDevice *this,uint param_1,float param_2)

{
  if (*(long *)(this + (ulong)param_1 * 0x18 + 0xea0) != 0) {
    SoLoud::Soloud::lockAudioMutex();
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xea8),5,
               *(float *)(this + 0x1bec) * param_2);
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xeb0),5,
               *(float *)(this + 0x1c58) * param_2);
    SoLoud::Soloud::unlockAudioMutex();
    return;
  }
  return;
}


