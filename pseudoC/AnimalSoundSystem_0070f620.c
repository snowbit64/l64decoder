// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalSoundSystem
// Entry Point: 0070f620
// Size: 352 bytes
// Signature: undefined __thiscall ~AnimalSoundSystem(AnimalSoundSystem * this)


/* AnimalSoundSystem::~AnimalSoundSystem() */

void __thiscall AnimalSoundSystem::~AnimalSoundSystem(AnimalSoundSystem *this)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != *(void **)(this + 0x30)) {
    uVar7 = 0;
    do {
                    /* try { // try from 0070f670 to 0070f673 has its CatchHandler @ 0070f780 */
      AudioSource::stop();
      pvVar1 = *(void **)(this + 0x30);
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar4 = (*(long *)(this + 0x38) - (long)pvVar1 >> 2) * 0x6db6db6db6db6db7;
    } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
  }
  lVar5 = *(long *)this;
  lVar6 = *(long *)(this + 8);
  *(void **)(this + 0x38) = pvVar1;
  if (lVar6 == lVar5) {
    *(long *)(this + 8) = lVar6;
  }
  else {
    uVar7 = 0;
    do {
      plVar2 = *(long **)(lVar5 + uVar7 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar5 = *(long *)this;
        lVar6 = *(long *)(this + 8);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(lVar6 - lVar5 >> 3));
    pvVar1 = *(void **)(this + 0x30);
    *(long *)(this + 8) = lVar5;
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    pvVar8 = *(void **)(this + 0x20);
    if (*(void **)(this + 0x20) != pvVar1) {
      do {
        pvVar3 = *(void **)((long)pvVar8 + -0x38);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar8 + -0x30) = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar3 = (void *)((long)pvVar8 + -0x58);
        if ((*(byte *)((long)pvVar8 + -0x50) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + -0x40));
        }
        pvVar8 = pvVar3;
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x18);
    }
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar3);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


