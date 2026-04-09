// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPauseAll
// Entry Point: 00e3ec30
// Size: 100 bytes
// Signature: undefined __thiscall setPauseAll(Soloud * this, bool param_1)


/* SoLoud::Soloud::setPauseAll(bool) */

void __thiscall SoLoud::Soloud::setPauseAll(Soloud *this,bool param_1)

{
  uint uVar1;
  
  lockAudioMutex();
  if (0 < *(int *)(this + 0x54)) {
    uVar1 = 0;
    do {
      setVoicePause(this,uVar1,param_1 & 1);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(this + 0x54));
  }
  unlockAudioMutex();
  return;
}


