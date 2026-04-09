// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0071b71c
// Size: 128 bytes
// Signature: undefined __thiscall update(TrafficSystem * this, float param_1)


/* non-virtual thunk to TrafficSystem::update(float) */

void __thiscall TrafficSystem::update(TrafficSystem *this,float param_1)

{
  *(int *)(this + 0x7230) = *(int *)(this + 0x7230) + 1;
  if (this[0x92] != (TrafficSystem)0x0) {
    updateParkedVehicles(param_1);
    if (this[0x93] != (TrafficSystem)0x0) {
      updateVehicles(this + -0x20,param_1);
    }
    if (s_debugRenderingEnabled != '\0') {
      debugRender();
      return;
    }
  }
  return;
}


