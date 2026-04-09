// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsObstacleBlocked
// Entry Point: 0072ee8c
// Size: 36 bytes
// Signature: undefined __thiscall getIsObstacleBlocked(VehicleNavigationMapGenerator * this, ulonglong param_1)


/* VehicleNavigationMapGenerator::getIsObstacleBlocked(unsigned long long) const */

bool __thiscall
VehicleNavigationMapGenerator::getIsObstacleBlocked
          (VehicleNavigationMapGenerator *this,ulonglong param_1)

{
  if (*(int *)(param_1 + 0x1c) == 2) {
    return *(char *)(param_1 + 0x39) != '\0';
  }
  return false;
}


