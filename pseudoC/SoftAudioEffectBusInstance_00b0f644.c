// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioEffectBusInstance
// Entry Point: 00b0f644
// Size: 56 bytes
// Signature: undefined __thiscall ~SoftAudioEffectBusInstance(SoftAudioEffectBusInstance * this)


/* SoftAudioEffectBus::SoftAudioEffectBusInstance::~SoftAudioEffectBusInstance() */

void __thiscall
SoftAudioEffectBus::SoftAudioEffectBusInstance::~SoftAudioEffectBusInstance
          (SoftAudioEffectBusInstance *this)

{
  *(undefined ***)this = &PTR__SoftAudioEffectBusInstance_00fe7b18;
  SoLoud::AlignedFloatBuffer::~AlignedFloatBuffer((AlignedFloatBuffer *)(this + 0x648));
  SoLoud::BusInstance::~BusInstance((BusInstance *)this);
  return;
}


