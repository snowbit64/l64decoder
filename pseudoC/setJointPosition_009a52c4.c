// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointPosition
// Entry Point: 009a52c4
// Size: 244 bytes
// Signature: undefined __thiscall setJointPosition(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointPosition * param_2)


/* Bt2ScenegraphPhysicsContext::setJointPosition(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointPosition const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointPosition
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointPosition *param_2)

{
  btTransform *pbVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  pBVar3 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar2 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar3 + 0x20) >= param_1) {
        pBVar2 = pBVar3;
      }
      pBVar3 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar3 + (ulong)(*(uint *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar2 != this + 0x1c8) && (*(uint *)(pBVar2 + 0x20) <= param_1)) {
      lVar4 = *(long *)(pBVar2 + 0x30);
      lVar5 = 0x28;
      if (*(int *)param_2 != 0) {
        lVar5 = 0x30;
      }
      lVar5 = *(long *)(lVar4 + lVar5);
      pbVar1 = (btTransform *)(lVar4 + 0x48);
      if (*(int *)param_2 != 0) {
        pbVar1 = (btTransform *)(lVar4 + 0x88);
      }
      if (((*(byte *)(lVar5 + 0xe0) & 1) == 0) && (*(long *)(lVar5 + 0x228) != 0)) {
        DynamicMotionState::applyLocalBodyToTransform
                  ((btTransform *)(*(long *)(lVar5 + 0x228) + 0x58),pbVar1);
      }
      uVar6 = *(undefined8 *)(param_2 + 4);
      uVar7 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(pbVar1 + 0x3c) = 0;
      *(undefined8 *)(pbVar1 + 0x30) = uVar6;
      *(undefined4 *)(pbVar1 + 0x38) = uVar7;
      if (((*(byte *)(lVar5 + 0xe0) & 1) == 0) &&
         (*(DynamicMotionState **)(lVar5 + 0x228) != (DynamicMotionState *)0x0)) {
        DynamicMotionState::applyLocalTransformToBody
                  (*(DynamicMotionState **)(lVar5 + 0x228),pbVar1);
      }
      btCollisionObject::activate(*(btCollisionObject **)(lVar4 + 0x28),false);
      btCollisionObject::activate(*(btCollisionObject **)(lVar4 + 0x30),false);
      return;
    }
  }
  return;
}


