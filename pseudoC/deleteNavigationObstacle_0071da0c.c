// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteNavigationObstacle
// Entry Point: 0071da0c
// Size: 52 bytes
// Signature: undefined __thiscall deleteNavigationObstacle(TrafficVehicle * this, VehicleNavigationMapGenerator * param_1)


/* TrafficVehicle::deleteNavigationObstacle(VehicleNavigationMapGenerator*) */

void __thiscall
TrafficVehicle::deleteNavigationObstacle
          (TrafficVehicle *this,VehicleNavigationMapGenerator *param_1)

{
  if (*(ulonglong *)(this + 0x370) != 0) {
    VehicleNavigationMapGenerator::removeObstacle(param_1,*(ulonglong *)(this + 0x370));
    *(undefined8 *)(this + 0x370) = 0;
  }
  return;
}


