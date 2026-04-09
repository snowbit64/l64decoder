// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioEffectBus
// Entry Point: 00b0f6bc
// Size: 36 bytes
// Signature: undefined __thiscall ~SoftAudioEffectBus(SoftAudioEffectBus * this)


/* SoftAudioEffectBus::~SoftAudioEffectBus() */

void __thiscall SoftAudioEffectBus::~SoftAudioEffectBus(SoftAudioEffectBus *this)

{
  SoLoud::AudioSource::~AudioSource((AudioSource *)this);
  operator_delete(this);
  return;
}


