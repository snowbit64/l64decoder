// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PhysicsTask
// Entry Point: 0072f644
// Size: 88 bytes
// Signature: undefined __thiscall ~PhysicsTask(PhysicsTask * this)


/* VehicleNavigationMapGenerator::PhysicsTask::~PhysicsTask() */

void __thiscall VehicleNavigationMapGenerator::PhysicsTask::~PhysicsTask(PhysicsTask *this)

{
  *(undefined ***)this = &PTR__PhysicsTask_00fda6a8;
  *(undefined ***)(this + 8) = &PTR__PhysicsTask_00fda6d8;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined ***)(this + 8) = &PTR__AtomicRefCounted_00fda810;
  return;
}


