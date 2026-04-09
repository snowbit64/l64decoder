// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDaytime
// Entry Point: 0071a13c
// Size: 12 bytes
// Signature: undefined __thiscall setDaytime(TrafficSystem * this, float param_1)


/* TrafficSystem::setDaytime(float) */

void __thiscall TrafficSystem::setDaytime(TrafficSystem *this,float param_1)

{
  *(float *)(this + 0x4c88) = param_1;
  return;
}


