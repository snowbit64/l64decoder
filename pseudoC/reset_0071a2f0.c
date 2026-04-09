// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 0071a2f0
// Size: 96 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TrafficSystem::reset() */

void TrafficSystem::reset(void)

{
  long in_x0;
  TrafficVehicle *this;
  ulong uVar1;
  
  if (*(uint *)(in_x0 + 0x4d18) != 0) {
    uVar1 = 0;
    this = (TrafficVehicle *)(in_x0 + 0x4d20);
    do {
      TrafficVehicle::reset(this,*(VehicleNavigationMapGenerator **)(in_x0 + 0x7268));
      uVar1 = uVar1 + 1;
      this = this + 0x3a8;
    } while (uVar1 < *(uint *)(in_x0 + 0x4d18));
  }
  return;
}


