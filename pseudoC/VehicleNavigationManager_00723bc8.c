// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleNavigationManager
// Entry Point: 00723bc8
// Size: 76 bytes
// Signature: undefined __thiscall ~VehicleNavigationManager(VehicleNavigationManager * this)


/* VehicleNavigationManager::~VehicleNavigationManager() */

void __thiscall VehicleNavigationManager::~VehicleNavigationManager(VehicleNavigationManager *this)

{
  void *pvVar1;
  VehicleNavigationPlanner *this_00;
  
  this_00 = *(VehicleNavigationPlanner **)this;
  if (this_00 != (VehicleNavigationPlanner *)0x0) {
    VehicleNavigationPlanner::~VehicleNavigationPlanner(this_00);
    operator_delete(this_00);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


