// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDensityMapDeleted
// Entry Point: 008d528c
// Size: 176 bytes
// Signature: undefined __thiscall onDensityMapDeleted(FoliageBendingSystem * this, DensityMap * param_1)


/* non-virtual thunk to FoliageBendingSystem::onDensityMapDeleted(DensityMap*) */

void __thiscall
FoliageBendingSystem::onDensityMapDeleted(FoliageBendingSystem *this,DensityMap *param_1)

{
  size_t __n;
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(this + 0x4a8);
  lVar3 = *(long *)(this + 0x4a0);
  if (lVar2 - lVar3 != 0) {
    uVar5 = 0;
    uVar4 = (lVar2 - lVar3 >> 3) * -0x3333333333333333;
    do {
      if (*(DensityMap **)(lVar3 + uVar5 * 0x28) == param_1) {
        pvVar1 = *(void **)(lVar3 + uVar5 * 0x28 + 0x20);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
          lVar3 = *(long *)(this + 0x4a0);
          lVar2 = *(long *)(this + 0x4a8);
        }
        pvVar1 = (void *)(lVar3 + uVar5 * 0x28);
        __n = lVar2 - (long)(void *)((long)pvVar1 + 0x28);
        if (__n != 0) {
          memmove(pvVar1,(void *)((long)pvVar1 + 0x28),__n);
        }
        *(size_t *)(this + 0x4a8) = (long)pvVar1 + __n;
        return;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 <= uVar4 && uVar4 - uVar5 != 0);
  }
  return;
}


