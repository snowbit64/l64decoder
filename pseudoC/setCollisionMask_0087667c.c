// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionMask
// Entry Point: 0087667c
// Size: 116 bytes
// Signature: undefined __thiscall setCollisionMask(AnimalCompanionManager * this, uint param_1, uint param_2, uint param_3)


/* AnimalCompanionManager::setCollisionMask(unsigned int, unsigned int, unsigned int) */

void __thiscall
AnimalCompanionManager::setCollisionMask
          (AnimalCompanionManager *this,uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  *(uint *)(this + 0x228) = param_1;
  *(uint *)(this + 0x22c) = param_3;
  if (*(int *)(this + 0x18c) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      ObstacleWallDetector::setCollisionMasks
                ((ObstacleWallDetector *)(*(long *)(this + 200) + lVar1),param_2,param_3);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x3b0;
    } while (uVar2 < *(uint *)(this + 0x18c));
  }
  return;
}


