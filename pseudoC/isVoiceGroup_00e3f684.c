// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isVoiceGroup
// Entry Point: 00e3f684
// Size: 128 bytes
// Signature: undefined __thiscall isVoiceGroup(Soloud * this, uint param_1)


/* SoLoud::Soloud::isVoiceGroup(unsigned int) */

bool __thiscall SoLoud::Soloud::isVoiceGroup(Soloud *this,uint param_1)

{
  long lVar1;
  
  if (0xffffefff < param_1) {
    if ((param_1 & 0xfff) < *(uint *)(this + 0x214e8)) {
      lockAudioMutex();
      lVar1 = *(long *)(*(long *)(this + 0x214e0) + (ulong)(param_1 & 0xfff) * 8);
      unlockAudioMutex();
      return lVar1 != 0;
    }
  }
  return false;
}


