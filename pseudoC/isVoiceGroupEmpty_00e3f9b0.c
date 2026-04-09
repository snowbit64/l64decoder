// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isVoiceGroupEmpty
// Entry Point: 00e3f9b0
// Size: 188 bytes
// Signature: undefined __thiscall isVoiceGroupEmpty(Soloud * this, uint param_1)


/* SoLoud::Soloud::isVoiceGroupEmpty(unsigned int) */

bool __thiscall SoLoud::Soloud::isVoiceGroupEmpty(Soloud *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (0xffffefff < param_1) {
    uVar1 = param_1 & 0xfff;
    if (uVar1 < *(uint *)(this + 0x214e8)) {
      lockAudioMutex();
      lVar3 = *(long *)(*(long *)(this + 0x214e0) + (ulong)uVar1 * 8);
      unlockAudioMutex();
      if (lVar3 != 0) {
        trimVoiceGroup(this,param_1);
        lockAudioMutex();
        iVar2 = *(int *)(*(long *)(*(long *)(this + 0x214e0) + (ulong)uVar1 * 8) + 4);
        unlockAudioMutex();
        return iVar2 == 0;
      }
    }
  }
  return true;
}


