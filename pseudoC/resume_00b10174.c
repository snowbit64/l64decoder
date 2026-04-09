// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resume
// Entry Point: 00b10174
// Size: 136 bytes
// Signature: undefined resume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::resume() */

void SoftAudioSource::resume(void)

{
  uint uVar1;
  int iVar2;
  SoftAudioSource *in_x0;
  Soloud *this;
  float fVar3;
  
  uVar1 = *(uint *)(in_x0 + 200);
  if (uVar1 != 0) {
    this = *(Soloud **)(in_x0 + 0xb8);
    fVar3 = (float)SoftAudioDevice::getGroupVolume
                             (*(SoftAudioDevice **)(in_x0 + 0xa8),*(uint *)(in_x0 + 0xd0));
    SoLoud::Soloud::setVolume(this,uVar1,fVar3 * *(float *)(in_x0 + 0x108));
    SoLoud::Soloud::setPause(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 200),false);
    iVar2 = FUN_00f276a0(1,in_x0 + 0x110);
    if (iVar2 == 0) {
      SoftAudioDevice::notifySourceStartsPlaying(*(SoftAudioDevice **)(in_x0 + 0xa8),in_x0);
      return;
    }
  }
  return;
}


