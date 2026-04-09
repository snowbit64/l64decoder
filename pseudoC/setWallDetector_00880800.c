// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWallDetector
// Entry Point: 00880800
// Size: 8 bytes
// Signature: undefined __thiscall setWallDetector(AnimalSteering * this, ObstacleWallDetector * param_1)


/* AnimalSteering::setWallDetector(ObstacleWallDetector*) */

void __thiscall AnimalSteering::setWallDetector(AnimalSteering *this,ObstacleWallDetector *param_1)

{
  *(ObstacleWallDetector **)(this + 0xb8) = param_1;
  return;
}


