// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: blockObstacles
// Entry Point: 007370e8
// Size: 88 bytes
// Signature: undefined blockObstacles(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationAgent::blockObstacles() */

void VehicleNavigationAgent::blockObstacles(void)

{
  long in_x0;
  OrientedBox *pOVar1;
  OrientedBox *pOVar2;
  
  VehicleNavigationGridAdapter::clearBlocked();
  pOVar2 = *(OrientedBox **)(in_x0 + 0x12e0);
  for (pOVar1 = *(OrientedBox **)(in_x0 + 0x12d8); pOVar1 != pOVar2; pOVar1 = pOVar1 + 0x1c) {
    VehicleNavigationGridAdapter::addObstacleBox
              (*(VehicleNavigationGridAdapter **)(in_x0 + 0x12a0),pOVar1);
  }
  VehicleNavigationGridAdapter::clearCache();
  return;
}


