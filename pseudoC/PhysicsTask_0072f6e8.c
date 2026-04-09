// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PhysicsTask
// Entry Point: 0072f6e8
// Size: 88 bytes
// Signature: undefined __thiscall ~PhysicsTask(PhysicsTask * this)


/* non-virtual thunk to VehicleNavigationMapGenerator::PhysicsTask::~PhysicsTask() */

void __thiscall VehicleNavigationMapGenerator::PhysicsTask::~PhysicsTask(PhysicsTask *this)

{
  *(undefined ***)(this + -8) = &PTR__PhysicsTask_00fda6a8;
  *(undefined ***)this = &PTR__PhysicsTask_00fda6d8;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


