// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VehicleNavigationManager
// Entry Point: 00723b58
// Size: 72 bytes
// Signature: undefined __thiscall VehicleNavigationManager(VehicleNavigationManager * this)


/* VehicleNavigationManager::VehicleNavigationManager() */

void __thiscall VehicleNavigationManager::VehicleNavigationManager(VehicleNavigationManager *this)

{
  VehicleNavigationPlanner *this_00;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this_00 = (VehicleNavigationPlanner *)operator_new(0x100);
                    /* try { // try from 00723b84 to 00723b8b has its CatchHandler @ 00723ba0 */
  VehicleNavigationPlanner::VehicleNavigationPlanner(this_00,0xffffffff);
  *(VehicleNavigationPlanner **)this = this_00;
  return;
}


