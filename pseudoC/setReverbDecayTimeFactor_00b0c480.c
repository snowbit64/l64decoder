// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReverbDecayTimeFactor
// Entry Point: 00b0c480
// Size: 136 bytes
// Signature: undefined __thiscall setReverbDecayTimeFactor(SoftAudioDevice * this, uint param_1, float param_2)


/* SoftAudioDevice::setReverbDecayTimeFactor(unsigned int, float) */

void __thiscall
SoftAudioDevice::setReverbDecayTimeFactor(SoftAudioDevice *this,uint param_1,float param_2)

{
  if (*(long *)(this + (ulong)param_1 * 0x18 + 0xea0) != 0) {
    SoLoud::Soloud::lockAudioMutex();
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xea8),3,
               *(float *)(this + 0x1be0) * param_2);
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xeb0),3,
               *(float *)(this + 0x1c4c) * param_2);
    SoLoud::Soloud::unlockAudioMutex();
    return;
  }
  return;
}


