// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addExtraSimulationTime
// Entry Point: 009acbf4
// Size: 16 bytes
// Signature: undefined __thiscall addExtraSimulationTime(Bt2ScenegraphPhysicsContext * this, float param_1)


/* Bt2ScenegraphPhysicsContext::addExtraSimulationTime(float) */

void __thiscall
Bt2ScenegraphPhysicsContext::addExtraSimulationTime(Bt2ScenegraphPhysicsContext *this,float param_1)

{
  *(float *)(this + 0x68) = *(float *)(this + 0x68) + param_1;
  return;
}


