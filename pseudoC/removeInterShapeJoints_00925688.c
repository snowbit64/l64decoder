// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeInterShapeJoints
// Entry Point: 00925688
// Size: 272 bytes
// Signature: undefined __thiscall removeInterShapeJoints(DestructionShape * this, DestructionShape * param_1)


/* DestructionShape::removeInterShapeJoints(DestructionShape*) */

void __thiscall
DestructionShape::removeInterShapeJoints(DestructionShape *this,DestructionShape *param_1)

{
  uint uVar1;
  bool bVar2;
  DestructionShape **ppDVar3;
  DestructionShape **ppDVar4;
  DestructionShape *pDVar5;
  DestructionShape **ppDVar6;
  
  ppDVar3 = *(DestructionShape ***)(this + 0x260);
  while (ppDVar3 != (DestructionShape **)(this + 0x268)) {
    ppDVar4 = (DestructionShape **)ppDVar3[1];
    if (ppDVar3[6] == param_1) {
      if (ppDVar4 == (DestructionShape **)0x0) {
        ppDVar4 = ppDVar3 + 2;
        ppDVar6 = (DestructionShape **)*ppDVar4;
        if ((DestructionShape **)*ppDVar6 != ppDVar3) {
          do {
            pDVar5 = *ppDVar4;
            ppDVar4 = (DestructionShape **)(pDVar5 + 0x10);
            ppDVar6 = (DestructionShape **)*ppDVar4;
          } while (*ppDVar6 != pDVar5);
        }
      }
      else {
        do {
          ppDVar6 = ppDVar4;
          ppDVar4 = (DestructionShape **)*ppDVar6;
        } while ((DestructionShape **)*ppDVar6 != (DestructionShape **)0x0);
      }
      uVar1 = *(uint *)(ppDVar3 + 4);
      Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint
                (*(Bt2ScenegraphPhysicsContext **)(this + 0x290),uVar1);
      onJointRemoved(this,uVar1,true);
      ppDVar3 = ppDVar6;
    }
    else if (ppDVar4 == (DestructionShape **)0x0) {
      ppDVar4 = ppDVar3 + 2;
      bVar2 = (DestructionShape **)*(DestructionShape **)*ppDVar4 != ppDVar3;
      ppDVar3 = (DestructionShape **)*ppDVar4;
      if (bVar2) {
        do {
          pDVar5 = *ppDVar4;
          ppDVar4 = (DestructionShape **)(pDVar5 + 0x10);
          ppDVar3 = (DestructionShape **)*ppDVar4;
        } while (*ppDVar3 != pDVar5);
      }
    }
    else {
      do {
        ppDVar3 = ppDVar4;
        ppDVar4 = (DestructionShape **)*ppDVar3;
      } while ((DestructionShape **)*ppDVar3 != (DestructionShape **)0x0);
    }
  }
  return;
}


