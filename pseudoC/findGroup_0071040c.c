// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findGroup
// Entry Point: 0071040c
// Size: 80 bytes
// Signature: undefined __thiscall findGroup(AnimalSoundSystem * this, uint param_1)


/* AnimalSoundSystem::findGroup(unsigned int) */

uint * __thiscall AnimalSoundSystem::findGroup(AnimalSoundSystem *this,uint param_1)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(this + 0x20) - *(long *)(this + 0x18);
  if (lVar1 != 0) {
    uVar3 = 0;
    uVar4 = (lVar1 >> 3) * 0x2e8ba2e8ba2e8ba3;
    do {
      puVar2 = (uint *)(*(long *)(this + 0x18) + uVar3 * 0x58);
      if (*puVar2 == param_1) {
        return puVar2;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 <= uVar4 && uVar4 - uVar3 != 0);
  }
  return (uint *)0x0;
}


