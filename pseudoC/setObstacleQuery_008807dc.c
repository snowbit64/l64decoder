// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setObstacleQuery
// Entry Point: 008807dc
// Size: 36 bytes
// Signature: undefined __thiscall setObstacleQuery(AnimalSteering * this, ObstacleAvoidance * param_1)


/* AnimalSteering::setObstacleQuery(ObstacleAvoidance*) */

void __thiscall AnimalSteering::setObstacleQuery(AnimalSteering *this,ObstacleAvoidance *param_1)

{
  *(ObstacleAvoidance **)(this + 0xb0) = param_1;
  ObstacleAvoidance::init(param_1,10,10,*(float *)(this + 0x54),*(float *)(this + 0x30));
  return;
}


