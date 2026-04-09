// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRelativePlaySpeed
// Entry Point: 00e3d704
// Size: 140 bytes
// Signature: undefined __thiscall getRelativePlaySpeed(Soloud * this, uint param_1)


/* SoLoud::Soloud::getRelativePlaySpeed(unsigned int) */

undefined4 __thiscall SoLoud::Soloud::getRelativePlaySpeed(Soloud *this,uint param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = (ulong)param_1;
  lockAudioMutex();
  puVar1 = (uint *)voiceGroupHandleToArray(this,param_1);
  if (puVar1 != (uint *)0x0) {
    uVar3 = (ulong)*puVar1;
  }
  uVar4 = 0x3f800000;
  uVar5 = 0x3f800000;
  if ((uint)uVar3 != 0) {
    uVar2 = (uVar3 & 0xfff) - 1;
    uVar5 = uVar4;
    if (((*(long *)(this + uVar2 * 8 + 0xa0) != 0) && ((int)(uVar3 & 0xfff) != 0)) &&
       ((*(uint *)(*(long *)(this + uVar2 * 8 + 0xa0) + 8) & 0xfffff) == (uint)uVar3 >> 0xc)) {
      uVar5 = *(undefined4 *)(*(long *)(this + (uVar2 & 0xffffffff) * 8 + 0xa0) + 0x50);
    }
  }
  unlockAudioMutex();
  return uVar5;
}


