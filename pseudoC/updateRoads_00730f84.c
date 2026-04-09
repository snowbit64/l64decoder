// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRoads
// Entry Point: 00730f84
// Size: 36 bytes
// Signature: undefined updateRoads(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationMap::updateRoads() */

void VehicleNavigationMap::updateRoads(void)

{
  createConnectivityGraph();
  createSpatialIndex();
  return;
}


