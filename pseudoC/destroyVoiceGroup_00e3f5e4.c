// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyVoiceGroup
// Entry Point: 00e3f5e4
// Size: 160 bytes
// Signature: undefined __thiscall destroyVoiceGroup(Soloud * this, uint param_1)


/* SoLoud::Soloud::destroyVoiceGroup(unsigned int) */

undefined8 __thiscall SoLoud::Soloud::destroyVoiceGroup(Soloud *this,uint param_1)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  
  if (0xffffefff < param_1) {
    plVar1 = (long *)(this + 0x214e0);
    uVar2 = param_1 & 0xfff;
    if (uVar2 < *(uint *)(this + 0x214e8)) {
      lockAudioMutex();
      lVar4 = *(long *)(*plVar1 + (ulong)uVar2 * 8);
      unlockAudioMutex();
      if (lVar4 != 0) {
        lockAudioMutex();
        lVar4 = *plVar1;
        pvVar3 = *(void **)(lVar4 + (ulong)uVar2 * 8);
        if (pvVar3 != (void *)0x0) {
          operator_delete__(pvVar3);
          lVar4 = *plVar1;
        }
        *(undefined8 *)(lVar4 + (ulong)uVar2 * 8) = 0;
        unlockAudioMutex();
        return 0;
      }
    }
  }
  return 1;
}


