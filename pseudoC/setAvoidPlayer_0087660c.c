// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAvoidPlayer
// Entry Point: 0087660c
// Size: 112 bytes
// Signature: undefined __thiscall setAvoidPlayer(AnimalCompanionManager * this, TransformGroup * param_1, float param_2)


/* AnimalCompanionManager::setAvoidPlayer(TransformGroup*, float) */

void __thiscall
AnimalCompanionManager::setAvoidPlayer
          (AnimalCompanionManager *this,TransformGroup *param_1,float param_2)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x234) == 2) && (*(int *)(this + 0x18c) != 0)) {
    uVar1 = 0;
    do {
      DeerBehaviorContext::setAvoidParameters
                (*(DeerBehaviorContext **)(*(long *)(this + 0x158) + uVar1 * 8),param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x18c));
  }
  return;
}


