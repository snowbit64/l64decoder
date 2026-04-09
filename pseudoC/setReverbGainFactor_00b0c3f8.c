// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReverbGainFactor
// Entry Point: 00b0c3f8
// Size: 136 bytes
// Signature: undefined __thiscall setReverbGainFactor(SoftAudioDevice * this, uint param_1, float param_2)


/* SoftAudioDevice::setReverbGainFactor(unsigned int, float) */

void __thiscall
SoftAudioDevice::setReverbGainFactor(SoftAudioDevice *this,uint param_1,float param_2)

{
  if (*(long *)(this + (ulong)param_1 * 0x18 + 0xea0) != 0) {
    SoLoud::Soloud::lockAudioMutex();
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xea8),0,
               *(float *)(this + 0x1bd4) * param_2);
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xeb0),0,
               *(float *)(this + 0x1c40) * param_2);
    SoLoud::Soloud::unlockAudioMutex();
    return;
  }
  return;
}


