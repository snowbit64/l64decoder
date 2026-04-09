// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 00b10514
// Size: 96 bytes
// Signature: undefined __thiscall setVolume(SoftAudioSource * this, float param_1)


/* SoftAudioSource::setVolume(float) */

void __thiscall SoftAudioSource::setVolume(SoftAudioSource *this,float param_1)

{
  uint uVar1;
  Soloud *this_00;
  float fVar2;
  
  uVar1 = *(uint *)(this + 200);
  *(float *)(this + 0x108) = param_1;
  if (uVar1 != 0) {
    this_00 = *(Soloud **)(this + 0xb8);
    fVar2 = (float)SoftAudioDevice::getGroupVolume
                             (*(SoftAudioDevice **)(this + 0xa8),*(uint *)(this + 0xd0));
    SoLoud::Soloud::setVolume(this_00,uVar1,fVar2 * *(float *)(this + 0x108));
    return;
  }
  return;
}


