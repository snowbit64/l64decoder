// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCompanionsPhysicsUpdate
// Entry Point: 00876780
// Size: 196 bytes
// Signature: undefined __thiscall setCompanionsPhysicsUpdate(AnimalCompanionManager * this, bool param_1)


/* AnimalCompanionManager::setCompanionsPhysicsUpdate(bool) */

void __thiscall
AnimalCompanionManager::setCompanionsPhysicsUpdate(AnimalCompanionManager *this,bool param_1)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(uint *)(this + 0x18c);
  this[0x213] = (AnimalCompanionManager)param_1;
  if (param_1) {
    if (uVar2 != 0) {
      uVar3 = 0;
      lVar4 = 0x10;
      do {
        if (*(long *)(*(long *)(this + 0xb0) + lVar4) != 0) {
          ScenegraphPhysicsContextManager::getInstance();
          pBVar1 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
          Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup
                    (pBVar1,*(TransformGroup **)(*(long *)(this + 0xb0) + lVar4));
          uVar2 = *(uint *)(this + 0x18c);
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x58;
      } while (uVar3 < uVar2);
    }
  }
  else if (uVar2 != 0) {
    uVar3 = 0;
    lVar4 = 0x10;
    do {
      if (*(long *)(*(long *)(this + 0xb0) + lVar4) != 0) {
        ScenegraphPhysicsContextManager::getInstance();
        pBVar1 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup
                  (pBVar1,*(TransformGroup **)(*(long *)(this + 0xb0) + lVar4),true);
        uVar2 = *(uint *)(this + 0x18c);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x58;
    } while (uVar3 < uVar2);
  }
  return;
}


