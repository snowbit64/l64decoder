// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HeadMountedDisplayManager
// Entry Point: 00a9b114
// Size: 148 bytes
// Signature: undefined __thiscall ~HeadMountedDisplayManager(HeadMountedDisplayManager * this)


/* HeadMountedDisplayManager::~HeadMountedDisplayManager() */

void __thiscall
HeadMountedDisplayManager::~HeadMountedDisplayManager(HeadMountedDisplayManager *this)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 0x28) = 0;
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
  *(void **)(this + 8) = pvVar2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


