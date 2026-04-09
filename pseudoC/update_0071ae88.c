// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0071ae88
// Size: 124 bytes
// Signature: undefined __thiscall update(TrafficSystem * this, float param_1)


/* TrafficSystem::update(float) */

void __thiscall TrafficSystem::update(TrafficSystem *this,float param_1)

{
  *(int *)(this + 0x7250) = *(int *)(this + 0x7250) + 1;
  if (this[0xb2] != (TrafficSystem)0x0) {
    updateParkedVehicles(param_1);
    if (this[0xb3] != (TrafficSystem)0x0) {
      updateVehicles(this,param_1);
    }
    if (s_debugRenderingEnabled != '\0') {
      debugRender();
      return;
    }
  }
  return;
}


