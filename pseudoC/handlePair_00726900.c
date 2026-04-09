// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handlePair
// Entry Point: 00726900
// Size: 36 bytes
// Signature: undefined __thiscall handlePair(DynamicAvoidance * this, StoppableObstacle * param_1, Obstacle * param_2)


/* DynamicAvoidance::handlePair(StoppableObstacle&, Obstacle&) */

void __thiscall
DynamicAvoidance::handlePair(DynamicAvoidance *this,StoppableObstacle *param_1,Obstacle *param_2)

{
  param_1[0x39] = (StoppableObstacle)0x1;
  if (*(int *)(param_1 + 0x1c) == 3) {
    EvasiveObstacle::addObstacles((EvasiveObstacle *)param_1,(vector *)param_2);
    return;
  }
  return;
}


