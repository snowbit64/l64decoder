// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStreamTime
// Entry Point: 00e3d5ec
// Size: 140 bytes
// Signature: undefined __thiscall getStreamTime(Soloud * this, uint param_1)


/* SoLoud::Soloud::getStreamTime(unsigned int) */

undefined  [16] __thiscall SoLoud::Soloud::getStreamTime(Soloud *this,uint param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  ulong uVar5;
  
  uVar3 = (ulong)param_1;
  lockAudioMutex();
  puVar1 = (uint *)voiceGroupHandleToArray(this,param_1);
  if (puVar1 != (uint *)0x0) {
    uVar3 = (ulong)*puVar1;
  }
  uVar5 = 0;
  if ((uint)uVar3 != 0) {
    uVar2 = (uVar3 & 0xfff) - 1;
    if (((*(long *)(this + uVar2 * 8 + 0xa0) != 0) && ((int)(uVar3 & 0xfff) != 0)) &&
       ((*(uint *)(*(long *)(this + uVar2 * 8 + 0xa0) + 8) & 0xfffff) == (uint)uVar3 >> 0xc)) {
      uVar5 = *(ulong *)(*(long *)(this + (uVar2 & 0xffffffff) * 8 + 0xa0) + 0x58);
    }
  }
  unlockAudioMutex();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5;
  return auVar4;
}


