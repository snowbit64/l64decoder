// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReverbLateReverbGainFactor
// Entry Point: 00b0c590
// Size: 136 bytes
// Signature: undefined __thiscall setReverbLateReverbGainFactor(SoftAudioDevice * this, uint param_1, float param_2)


/* SoftAudioDevice::setReverbLateReverbGainFactor(unsigned int, float) */

void __thiscall
SoftAudioDevice::setReverbLateReverbGainFactor(SoftAudioDevice *this,uint param_1,float param_2)

{
  if (*(long *)(this + (ulong)param_1 * 0x18 + 0xea0) != 0) {
    SoLoud::Soloud::lockAudioMutex();
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xea8),7,
               *(float *)(this + 0x1c00) * param_2);
    FDNReverbEffect::setParameter
              (*(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xeb0),7,
               *(float *)(this + 0x1c6c) * param_2);
    SoLoud::Soloud::unlockAudioMutex();
    return;
  }
  return;
}


