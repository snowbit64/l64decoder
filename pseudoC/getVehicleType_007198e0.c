// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVehicleType
// Entry Point: 007198e0
// Size: 56 bytes
// Signature: undefined __thiscall getVehicleType(TrafficSystem * this, float param_1)


/* TrafficSystem::getVehicleType(float) */

ulong __thiscall TrafficSystem::getVehicleType(TrafficSystem *this,float param_1)

{
  ulong uVar1;
  
  if (*(uint *)(this + 0x11fc) != 0) {
    uVar1 = 0;
    do {
      if (param_1 <= *(float *)(this + uVar1 * 4 + 0x71d0)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(this + 0x11fc) != uVar1);
  }
  return 0;
}


