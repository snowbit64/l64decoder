// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioEffectBusInstance
// Entry Point: 00b0f10c
// Size: 68 bytes
// Signature: undefined __thiscall SoftAudioEffectBusInstance(SoftAudioEffectBusInstance * this, SoftAudioEffectBus * param_1)


/* SoftAudioEffectBus::SoftAudioEffectBusInstance::SoftAudioEffectBusInstance(SoftAudioEffectBus*)
    */

void __thiscall
SoftAudioEffectBus::SoftAudioEffectBusInstance::SoftAudioEffectBusInstance
          (SoftAudioEffectBusInstance *this,SoftAudioEffectBus *param_1)

{
  SoLoud::BusInstance::BusInstance((BusInstance *)this,(Bus *)param_1);
  *(undefined ***)this = &PTR__SoftAudioEffectBusInstance_00fe7b18;
                    /* try { // try from 00b0f138 to 00b0f13b has its CatchHandler @ 00b0f150 */
  SoLoud::AlignedFloatBuffer::AlignedFloatBuffer((AlignedFloatBuffer *)(this + 0x648));
  *(SoftAudioEffectBus **)(this + 0x638) = param_1;
  *(undefined4 *)(this + 0x640) = 0;
  return;
}


