// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isInFront
// Entry Point: 0089c61c
// Size: 28 bytes
// Signature: undefined __thiscall isInFront(Obstacle * this, SimulatedPedestrian * param_1)


/* SimulatedPedestrian::Obstacle::isInFront(SimulatedPedestrian*) */

bool __thiscall
SimulatedPedestrian::Obstacle::isInFront(Obstacle *this,SimulatedPedestrian *param_1)

{
  return ABS(*(float *)this - *(float *)(param_1 + 0xa0)) < *(float *)(this + 8);
}


