// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParkedVehicleType
// Entry Point: 00719918
// Size: 60 bytes
// Signature: undefined __thiscall getParkedVehicleType(TrafficSystem * this, float param_1)


/* TrafficSystem::getParkedVehicleType(float) */

ulong __thiscall TrafficSystem::getParkedVehicleType(TrafficSystem *this,float param_1)

{
  ulong uVar1;
  
  if (*(uint *)(this + 0x4304) != 0) {
    uVar1 = 0;
    do {
      if (param_1 <= *(float *)(this + uVar1 * 4 + 0x7210)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(this + 0x4304) != uVar1);
  }
  return 0;
}


