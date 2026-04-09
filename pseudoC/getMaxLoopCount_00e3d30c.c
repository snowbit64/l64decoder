// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxLoopCount
// Entry Point: 00e3d30c
// Size: 148 bytes
// Signature: undefined __thiscall getMaxLoopCount(Soloud * this, uint param_1)


/* SoLoud::Soloud::getMaxLoopCount(unsigned int) */

undefined4 __thiscall SoLoud::Soloud::getMaxLoopCount(Soloud *this,uint param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar3 = (ulong)param_1;
  lockAudioMutex();
  puVar1 = (uint *)voiceGroupHandleToArray(this,param_1);
  if (puVar1 != (uint *)0x0) {
    uVar3 = (ulong)*puVar1;
  }
  if ((uint)uVar3 != 0) {
    uVar2 = (uVar3 & 0xfff) - 1;
    if (*(long *)(this + uVar2 * 8 + 0xa0) != 0) {
      uVar4 = 0;
      if (((int)(uVar3 & 0xfff) != 0) &&
         ((*(uint *)(*(long *)(this + uVar2 * 8 + 0xa0) + 8) & 0xfffff) == (uint)uVar3 >> 0xc)) {
        uVar4 = *(undefined4 *)(*(long *)(this + (uVar2 & 0xffffffff) * 8 + 0xa0) + 0x10);
      }
      goto LAB_00e3d384;
    }
  }
  uVar4 = 0;
LAB_00e3d384:
  unlockAudioMutex();
  return uVar4;
}


