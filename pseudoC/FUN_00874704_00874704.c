// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00874704
// Entry Point: 00874704
// Size: 108 bytes
// Signature: undefined FUN_00874704(void)


void FUN_00874704(ObstacleWallDetector **param_1)

{
  ObstacleWallDetector *pOVar1;
  ObstacleWallDetector *this;
  ObstacleWallDetector *pOVar2;
  
  pOVar2 = *param_1;
  if (pOVar2 == (ObstacleWallDetector *)0x0) {
    return;
  }
  this = param_1[1];
  pOVar1 = pOVar2;
  if (this != pOVar2) {
    do {
      this = this + -0x3b0;
      ObstacleWallDetector::~ObstacleWallDetector(this);
    } while (this != pOVar2);
    pOVar1 = *param_1;
  }
  param_1[1] = pOVar2;
  operator_delete(pOVar1);
  return;
}


