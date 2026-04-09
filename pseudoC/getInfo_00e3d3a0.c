// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo
// Entry Point: 00e3d3a0
// Size: 168 bytes
// Signature: undefined __thiscall getInfo(Soloud * this, uint param_1, uint param_2)


/* SoLoud::Soloud::getInfo(unsigned int, unsigned int) */

undefined4 __thiscall SoLoud::Soloud::getInfo(Soloud *this,uint param_1,uint param_2)

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
  uVar4 = 0;
  if ((uint)uVar3 != 0) {
    uVar2 = (uVar3 & 0xfff) - 1;
    if (((*(long *)(this + uVar2 * 8 + 0xa0) != 0) && ((int)(uVar3 & 0xfff) != 0)) &&
       ((*(uint *)(*(long *)(this + uVar2 * 8 + 0xa0) + 8) & 0xfffff) == (uint)uVar3 >> 0xc)) {
      uVar4 = (**(code **)(**(long **)(this + (uVar2 & 0xffffffff) * 8 + 0xa0) + 0x30))
                        (*(long **)(this + (uVar2 & 0xffffffff) * 8 + 0xa0),param_2);
    }
  }
  unlockAudioMutex();
  return uVar4;
}


