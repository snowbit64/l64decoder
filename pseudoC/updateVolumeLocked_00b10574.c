// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateVolumeLocked
// Entry Point: 00b10574
// Size: 232 bytes
// Signature: undefined updateVolumeLocked(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::updateVolumeLocked() */

void SoftAudioSource::updateVolumeLocked(void)

{
  uint uVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  Soloud *this;
  float fVar4;
  
  if (*(uint *)(in_x0 + 200) == 0) {
    if (*(uint *)(in_x0 + 0xcc) != 0) {
      iVar2 = SoLoud::Soloud::getVoiceFromHandle(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 0xcc))
      ;
      if (iVar2 == -1) {
        *(undefined4 *)(in_x0 + 0xcc) = 0;
      }
      else {
        iVar2 = SoLoud::Soloud::getVoiceFromHandle
                          (*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 0xcc));
        if (iVar2 != -1) {
          lVar3 = *(long *)(*(long *)(in_x0 + 0xb8) + (long)iVar2 * 8 + 0xa0);
          fVar4 = (float)SoftAudioDevice::getGroupVolume
                                   (*(SoftAudioDevice **)(in_x0 + 0xa8),*(uint *)(in_x0 + 0xd0));
          fVar4 = fVar4 * *(float *)(in_x0 + 0x108);
          SoLoud::Fader::setClamped
                    ((Fader *)(lVar3 + 0x98),fVar4,0.0,fVar4,(double)*(float *)(lVar3 + 0xa4),
                     *(double *)(lVar3 + 0x58));
          return;
        }
      }
    }
  }
  else {
    uVar1 = SoLoud::Soloud::getVoiceFromHandle(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 200));
    if (uVar1 != 0xffffffff) {
      this = *(Soloud **)(in_x0 + 0xb8);
      fVar4 = (float)SoftAudioDevice::getGroupVolume
                               (*(SoftAudioDevice **)(in_x0 + 0xa8),*(uint *)(in_x0 + 0xd0));
      SoLoud::Soloud::setVoiceVolume(this,uVar1,fVar4 * *(float *)(in_x0 + 0x108));
      return;
    }
  }
  return;
}


