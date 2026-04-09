// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroup
// Entry Point: 00b10794
// Size: 92 bytes
// Signature: undefined __thiscall setGroup(SoftAudioSource * this, uint param_1)


/* SoftAudioSource::setGroup(unsigned int) */

void __thiscall SoftAudioSource::setGroup(SoftAudioSource *this,uint param_1)

{
  uint uVar1;
  Soloud *this_00;
  float fVar2;
  
  uVar1 = *(uint *)(this + 200);
  *(uint *)(this + 0xd0) = param_1;
  if (uVar1 != 0) {
    this_00 = *(Soloud **)(this + 0xb8);
    fVar2 = (float)SoftAudioDevice::getGroupVolume(*(SoftAudioDevice **)(this + 0xa8),param_1);
    SoLoud::Soloud::setVolume(this_00,uVar1,fVar2 * *(float *)(this + 0x108));
    return;
  }
  return;
}


