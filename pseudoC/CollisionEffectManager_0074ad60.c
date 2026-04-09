// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CollisionEffectManager
// Entry Point: 0074ad60
// Size: 232 bytes
// Signature: undefined __thiscall ~CollisionEffectManager(CollisionEffectManager * this)


/* CollisionEffectManager::~CollisionEffectManager() */

void __thiscall CollisionEffectManager::~CollisionEffectManager(CollisionEffectManager *this)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
                    /* try { // try from 0074ad74 to 0074ad7f has its CatchHandler @ 0074ae48 */
  stopEffects();
  unloadConfig();
  ppvVar1 = (void **)*(void **)(this + 0x48);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = ppvVar1[4];
    pvVar3 = *ppvVar1;
    if (pvVar2 != (void *)0x0) {
      ppvVar1[5] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar3;
  }
  pvVar2 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = pvVar2;
    pvVar4 = *(void **)(this + 8);
    if (*(void **)(this + 8) != pvVar2) {
      do {
        pvVar3 = *(void **)((long)pvVar4 + -0x18);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar4 + -0x10) = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar3 = *(void **)((long)pvVar4 + -0x30);
        pvVar5 = (void *)((long)pvVar4 + -0x48);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar4 + -0x28) = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar4 = pvVar5;
      } while (pvVar5 != pvVar2);
      pvVar3 = *(void **)this;
    }
    *(void **)(this + 8) = pvVar2;
    operator_delete(pvVar3);
    return;
  }
  return;
}


