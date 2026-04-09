// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00b101fc
// Size: 296 bytes
// Signature: undefined __thiscall stop(SoftAudioSource * this, float param_1, float param_2)


/* SoftAudioSource::stop(float, float) */

void __thiscall SoftAudioSource::stop(SoftAudioSource *this,float param_1,float param_2)

{
  int iVar1;
  long lVar2;
  double dVar3;
  
  if (*(uint *)(this + 200) != 0) {
    if ((0.0 < param_1) || (0.0 < param_2)) {
      SoLoud::Soloud::lockAudioMutex();
      iVar1 = SoLoud::Soloud::getVoiceFromHandle(*(Soloud **)(this + 0xb8),*(uint *)(this + 200));
      if ((iVar1 != -1) &&
         (lVar2 = *(long *)(*(long *)(this + 0xb8) + (long)iVar1 * 8 + 0xa0), lVar2 != 0)) {
        dVar3 = (double)(param_1 + param_2) / 1000.0;
        SoLoud::Fader::set((Fader *)(lVar2 + 0x128),1.0,0.0,dVar3,*(double *)(lVar2 + 0x58));
        if (0.0 < param_2) {
          SoLoud::Fader::setClamped
                    ((Fader *)(lVar2 + 0x98),
                     ((param_1 + param_2) * *(float *)(lVar2 + 0x3c)) / param_2,0.0,
                     *(float *)(lVar2 + 0x3c),dVar3,*(double *)(lVar2 + 0x58));
        }
        *(undefined4 *)(this + 0xcc) = *(undefined4 *)(this + 200);
        SoftAudioDevice::notifySourceStartsFadingOut(*(SoftAudioDevice **)(this + 0xa8),this);
      }
      SoLoud::Soloud::unlockAudioMutex();
    }
    else {
      SoLoud::Soloud::stop(*(Soloud **)(this + 0xb8),*(uint *)(this + 200));
    }
    *(undefined4 *)(this + 200) = 0;
    iVar1 = FUN_00f276a0(0,this + 0x110);
    if (iVar1 == 1) {
      SoftAudioDevice::notifySourceStopsPlaying(*(SoftAudioDevice **)(this + 0xa8),this);
      return;
    }
  }
  return;
}


