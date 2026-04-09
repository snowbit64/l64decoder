// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_13
// Entry Point: 00723e30
// Size: 92 bytes
// Signature: undefined _INIT_13(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_13(void)

{
  VehicleNavigationPlanner *this;
  
  _DAT_01052b38 = 0;
  _DAT_01052b40 = 0;
  _DAT_01052b48 = 0;
  this = (VehicleNavigationPlanner *)operator_new(0x100);
                    /* try { // try from 00723e5c to 00723e63 has its CatchHandler @ 00723e8c */
  VehicleNavigationPlanner::VehicleNavigationPlanner(this,0xffffffff);
  VehicleNavigationManager::s_vehicleNavigationManager = this;
  __cxa_atexit(VehicleNavigationManager::~VehicleNavigationManager,
               &VehicleNavigationManager::s_vehicleNavigationManager,&PTR_LOOP_00fd8de0);
  return;
}


