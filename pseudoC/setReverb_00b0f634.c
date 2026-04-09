// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReverb
// Entry Point: 00b0f634
// Size: 16 bytes
// Signature: undefined __thiscall setReverb(SoftAudioEffectBus * this, FDNReverbEffect * param_1, FDNReverbEffect * param_2, float param_3)


/* SoftAudioEffectBus::setReverb(FDNReverbEffect*, FDNReverbEffect*, float) */

void __thiscall
SoftAudioEffectBus::setReverb
          (SoftAudioEffectBus *this,FDNReverbEffect *param_1,FDNReverbEffect *param_2,float param_3)

{
  *(FDNReverbEffect **)(this + 0x8b0) = param_1;
  *(FDNReverbEffect **)(this + 0x8b8) = param_2;
  *(float *)(this + 0x8c0) = param_3;
  return;
}


