// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPause
// Entry Point: 00e3d81c
// Size: 152 bytes
// Signature: undefined __thiscall getPause(Soloud * this, uint param_1)


/* SoLoud::Soloud::getPause(unsigned int) */

byte __thiscall SoLoud::Soloud::getPause(Soloud *this,uint param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  uVar3 = (ulong)param_1;
  lockAudioMutex();
  puVar1 = (uint *)voiceGroupHandleToArray(this,param_1);
  if (puVar1 != (uint *)0x0) {
    uVar3 = (ulong)*puVar1;
  }
  if ((uint)uVar3 != 0) {
    uVar2 = (uVar3 & 0xfff) - 1;
    if (*(long *)(this + uVar2 * 8 + 0xa0) != 0) {
      bVar4 = 0;
      if (((int)(uVar3 & 0xfff) != 0) &&
         ((*(uint *)(*(long *)(this + uVar2 * 8 + 0xa0) + 8) & 0xfffff) == (uint)uVar3 >> 0xc)) {
        bVar4 = *(byte *)(*(long *)(this + (uVar2 & 0xffffffff) * 8 + 0xa0) + 0x14) >> 1 & 1;
      }
      goto LAB_00e3d898;
    }
  }
  bVar4 = 0;
LAB_00e3d898:
  unlockAudioMutex();
  return bVar4;
}


