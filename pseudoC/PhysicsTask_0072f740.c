// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PhysicsTask
// Entry Point: 0072f740
// Size: 84 bytes
// Signature: undefined __thiscall ~PhysicsTask(PhysicsTask * this)


/* non-virtual thunk to VehicleNavigationMapGenerator::PhysicsTask::~PhysicsTask() */

void __thiscall VehicleNavigationMapGenerator::PhysicsTask::~PhysicsTask(PhysicsTask *this)

{
  *(undefined ***)this = &PTR__PhysicsTask_00fda6d8;
  *(undefined ***)(this + -8) = &PTR__PhysicsTask_00fda6a8;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  operator_delete(this + -8);
  return;
}


