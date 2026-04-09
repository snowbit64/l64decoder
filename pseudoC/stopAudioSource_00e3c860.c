// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopAudioSource
// Entry Point: 00e3c860
// Size: 152 bytes
// Signature: undefined __thiscall stopAudioSource(Soloud * this, AudioSource * param_1)


/* SoLoud::Soloud::stopAudioSource(SoLoud::AudioSource&) */

void __thiscall SoLoud::Soloud::stopAudioSource(Soloud *this,AudioSource *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    lockAudioMutex();
    iVar1 = *(int *)(this + 0x54);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if ((*(long *)(this + lVar2 * 8 + 0xa0) != 0) &&
           (*(int *)(*(long *)(this + lVar2 * 8 + 0xa0) + 0x180) == *(int *)(param_1 + 0x1c))) {
          stopVoice(this,(uint)lVar2);
          iVar1 = *(int *)(this + 0x54);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    unlockAudioMutex();
    return;
  }
  return;
}


