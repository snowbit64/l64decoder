// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointLimits
// Entry Point: 009a4dd4
// Size: 448 bytes
// Signature: undefined __thiscall setJointLimits(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointLimit * param_2)


/* Bt2ScenegraphPhysicsContext::setJointLimits(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointLimit const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointLimits
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointLimit *param_2)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pBVar2 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar1 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar2 + 0x20) >= param_1) {
        pBVar1 = pBVar2;
      }
      pBVar2 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar2 + (ulong)(*(uint *)(pBVar2 + 0x20) < param_1) * 8);
    } while (pBVar2 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar1 != this + 0x1c8) && (*(uint *)(pBVar1 + 0x20) <= param_1)) {
      lVar3 = *(long *)(pBVar1 + 0x30);
      lVar4 = (long)*(int *)(param_2 + 4);
      if (*param_2 == (SetJointLimit)0x0) {
        if (param_2[0x10] == (SetJointLimit)0x0) {
          fVar5 = -1.0;
          fVar8 = 1.0;
        }
        else {
          fVar8 = -*(float *)(param_2 + 0xc);
          fVar5 = -*(float *)(param_2 + 8);
          if (*(float *)(param_2 + 8) <= *(float *)(param_2 + 0xc)) {
            fVar6 = fmodf(fVar8,6.283185);
            fVar8 = fVar6 + 6.283185;
            if (-6.283185 <= fVar6) {
              fVar8 = fVar6;
            }
            fVar5 = fmodf(fVar5,6.283185);
            fVar6 = fVar5 + 6.283185;
            if (-6.283185 <= fVar5) {
              fVar6 = fVar5;
            }
            fVar5 = fVar6 + 6.283185;
            if (fVar8 <= fVar6) {
              fVar5 = fVar6;
            }
            if (fVar5 < fVar8 + 0.001) {
              fVar8 = (fVar8 + fVar5) * 0.5;
              fVar5 = fVar8;
            }
          }
        }
        lVar4 = lVar3 + lVar4 * 0x44;
        *(float *)(lVar4 + 0x1c0) = fVar8;
        *(float *)(lVar4 + 0x1c4) = fVar5;
        Bt2D6Joint::selectBestRotateOrder();
      }
      else if (param_2[0x10] == (SetJointLimit)0x0) {
        lVar4 = lVar3 + lVar4 * 4;
        *(undefined4 *)(lVar4 + 0xcc) = 0x3f800000;
        *(undefined4 *)(lVar4 + 0xdc) = 0xbf800000;
      }
      else {
        fVar6 = *(float *)(param_2 + 8);
        fVar7 = *(float *)(param_2 + 0xc);
        fVar5 = (fVar6 + fVar7) * 0.5;
        lVar4 = lVar3 + lVar4 * 4;
        fVar8 = fVar5;
        if (fVar7 < fVar6 || fVar6 + 0.0001 <= fVar7) {
          fVar5 = fVar7;
          fVar8 = fVar6;
        }
        *(float *)(lVar4 + 0xcc) = fVar8;
        *(float *)(lVar4 + 0xdc) = fVar5;
      }
      btCollisionObject::activate(*(btCollisionObject **)(lVar3 + 0x28),false);
      btCollisionObject::activate(*(btCollisionObject **)(lVar3 + 0x30),false);
      return;
    }
  }
  return;
}


