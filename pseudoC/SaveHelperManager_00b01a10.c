// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SaveHelperManager
// Entry Point: 00b01a10
// Size: 120 bytes
// Signature: undefined __thiscall ~SaveHelperManager(SaveHelperManager * this)


/* SaveHelperManager::~SaveHelperManager() */

void __thiscall SaveHelperManager::~SaveHelperManager(SaveHelperManager *this)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != *(void **)this) {
    uVar5 = 0;
    pvVar1 = *(void **)this;
    pvVar4 = pvVar2;
    do {
      pvVar2 = pvVar1;
      plVar3 = *(long **)((long)pvVar2 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        pvVar2 = *(void **)this;
        pvVar4 = *(void **)(this + 8);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      pvVar1 = pvVar2;
    } while (uVar5 < (ulong)((long)pvVar4 - (long)pvVar2 >> 3));
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar2);
  return;
}


