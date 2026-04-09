// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersect
// Entry Point: 0089c40c
// Size: 84 bytes
// Signature: undefined __thiscall intersect(Obstacle * this, Obstacle * param_1)


/* SimulatedPedestrian::Obstacle::intersect(SimulatedPedestrian::Obstacle&) */

bool __thiscall SimulatedPedestrian::Obstacle::intersect(Obstacle *this,Obstacle *param_1)

{
  if ((this[0x18] != (Obstacle)0x0) &&
     (ABS(*(float *)this - *(float *)param_1) <= *(float *)(this + 8) + *(float *)(param_1 + 8))) {
    return ABS(*(float *)(this + 4) - *(float *)(param_1 + 4)) <=
           *(float *)(this + 0xc) + *(float *)(param_1 + 0xc);
  }
  return false;
}


