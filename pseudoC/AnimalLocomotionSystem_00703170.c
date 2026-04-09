// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalLocomotionSystem
// Entry Point: 00703170
// Size: 64 bytes
// Signature: undefined __thiscall ~AnimalLocomotionSystem(AnimalLocomotionSystem * this)


/* AnimalLocomotionSystem::~AnimalLocomotionSystem() */

void __thiscall AnimalLocomotionSystem::~AnimalLocomotionSystem(AnimalLocomotionSystem *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x460);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x468) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x410);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x418) = pvVar1;
    operator_delete(pvVar1);
  }
  AnimalAnimationSystem::~AnimalAnimationSystem((AnimalAnimationSystem *)(this + 0x78));
  return;
}


