// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isValidVoiceHandle
// Entry Point: 00e3d158
// Size: 176 bytes
// Signature: undefined __thiscall isValidVoiceHandle(Soloud * this, uint param_1)


/* SoLoud::Soloud::isValidVoiceHandle(unsigned int) */

undefined8 __thiscall SoLoud::Soloud::isValidVoiceHandle(Soloud *this,uint param_1)

{
  uint *puVar1;
  ulong uVar2;
  
  if (0xffffefff < param_1) {
    return 0;
  }
  uVar2 = (ulong)param_1;
  lockAudioMutex();
  puVar1 = (uint *)voiceGroupHandleToArray(this,param_1);
  if (puVar1 != (uint *)0x0) {
    uVar2 = (ulong)*puVar1;
  }
  if ((uint)uVar2 != 0) {
    if (((*(long *)(this + (uVar2 & 0xfff) * 8 + 0x98) != 0) && ((int)(uVar2 & 0xfff) != 0)) &&
       ((*(uint *)(*(long *)(this + (uVar2 & 0xfff) * 8 + 0x98) + 8) & 0xfffff) ==
        (uint)uVar2 >> 0xc)) {
      unlockAudioMutex();
      return 1;
    }
  }
  unlockAudioMutex();
  return 0;
}


