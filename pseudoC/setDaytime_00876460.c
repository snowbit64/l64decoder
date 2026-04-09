// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDaytime
// Entry Point: 00876460
// Size: 44 bytes
// Signature: undefined __thiscall setDaytime(AnimalCompanionManager * this, float param_1)


/* AnimalCompanionManager::setDaytime(float) */

void __thiscall AnimalCompanionManager::setDaytime(AnimalCompanionManager *this,float param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (ulong)*(uint *)(this + 0x18c);
  *(float *)(this + 0x224) = param_1;
  if (*(uint *)(this + 0x18c) != 0) {
    plVar2 = *(long **)(this + 0x158);
    do {
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        return;
      }
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
      *(float *)(lVar3 + 0xec) = param_1;
    } while (uVar1 != 0);
  }
  return;
}


