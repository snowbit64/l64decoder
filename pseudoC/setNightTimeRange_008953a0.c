// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNightTimeRange
// Entry Point: 008953a0
// Size: 48 bytes
// Signature: undefined __thiscall setNightTimeRange(PedestrianSystem * this, float param_1, float param_2)


/* PedestrianSystem::setNightTimeRange(float, float) */

void __thiscall
PedestrianSystem::setNightTimeRange(PedestrianSystem *this,float param_1,float param_2)

{
  *(ulong *)(this + 0x2597c) =
       CONCAT44(param_2 * 60.0 * 60.0 * 1000.0,param_1 * 60.0 * 60.0 * 1000.0);
  return;
}


