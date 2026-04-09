// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalAnimationSystem
// Entry Point: 00703fac
// Size: 236 bytes
// Signature: undefined __thiscall ~AnimalAnimationSystem(AnimalAnimationSystem * this)


/* AnimalAnimationSystem::~AnimalAnimationSystem() */

void __thiscall AnimalAnimationSystem::~AnimalAnimationSystem(AnimalAnimationSystem *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(this + 0x308);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x310) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x270);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x278) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x208);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x210) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1a0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1a8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x138);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x140) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xd0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = *(void **)(this + 8);
  if (*(void **)(this + 8) != pvVar1) {
    do {
      pvVar3 = (void *)((long)pvVar2 + -0x28);
      if ((*(byte *)((long)pvVar2 + -0x20) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x10));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *(void **)this;
  }
  *(void **)(this + 8) = pvVar1;
  operator_delete(pvVar3);
  return;
}


