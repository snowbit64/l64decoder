// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioEffectBus
// Entry Point: 00b0f5a0
// Size: 128 bytes
// Signature: undefined __thiscall SoftAudioEffectBus(SoftAudioEffectBus * this, SoftAudioDevice * param_1, Soloud * param_2, float param_3)


/* SoftAudioEffectBus::SoftAudioEffectBus(SoftAudioDevice*, SoLoud::Soloud*, float) */

void __thiscall
SoftAudioEffectBus::SoftAudioEffectBus
          (SoftAudioEffectBus *this,SoftAudioDevice *param_1,Soloud *param_2,float param_3)

{
  SoLoud::Bus::Bus((Bus *)this);
  *(undefined ***)this = &PTR_setFilter_00fe7b60;
                    /* try { // try from 00b0f5cc to 00b0f5d7 has its CatchHandler @ 00b0f620 */
  SoLoud::Bus::setChannels((Bus *)this,2);
  *(undefined8 *)(this + 0xa0) = 0;
  *(float *)(this + 0xc) = param_3;
  *(undefined4 *)(this + 0x8c0) = 0;
  *(undefined8 *)(this + 0x8b8) = 0;
  *(undefined8 *)(this + 0x8b0) = 0;
  *(undefined8 *)(this + 0x8cc) = 0xc00000003f800000;
  *(undefined8 *)(this + 0x8c4) = 0x40000000;
  *(undefined8 *)(this + 0x8dc) = 0x40000000;
  *(undefined8 *)(this + 0x8d4) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x8ec) = 0xbf80000000000000;
  *(undefined8 *)(this + 0x8e4) = 0xc0000000bf800000;
  return;
}


