// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionMasks
// Entry Point: 0087a0b0
// Size: 12 bytes
// Signature: undefined __thiscall setCollisionMasks(ObstacleWallDetector * this, uint param_1, uint param_2)


/* ObstacleWallDetector::setCollisionMasks(unsigned int, unsigned int) */

void __thiscall
ObstacleWallDetector::setCollisionMasks(ObstacleWallDetector *this,uint param_1,uint param_2)

{
  *(uint *)(this + 900) = param_1;
  *(uint *)(this + 0x388) = param_2;
  return;
}


