// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLightJoint
// Entry Point: 0099fc0c
// Size: 632 bytes
// Signature: undefined __thiscall addLightJoint(Bt2ScenegraphPhysicsContext * this, AddLightJointDesc * param_1)


/* Bt2ScenegraphPhysicsContext::addLightJoint(Bt2ScenegraphPhysicsContext::AddLightJointDesc const&)
    */

void __thiscall
Bt2ScenegraphPhysicsContext::addLightJoint
          (Bt2ScenegraphPhysicsContext *this,AddLightJointDesc *param_1)

{
  uint uVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  btRigidBody *pbVar4;
  Bt2ScenegraphPhysicsContext *pBVar5;
  btRigidBody *pbVar6;
  btRigidBody *pbVar7;
  uint uVar8;
  
  if (((byte)param_1[6] >> 4 & 1) == 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_0099fcb0;
    lVar2 = RawTransformGroup::getPhysicsObject();
    pbVar6 = *(btRigidBody **)(lVar2 + 0x30);
    lVar2 = RawTransformGroup::getPhysicsObject();
    if (*(int *)(lVar2 + 0x8c) == 0) {
      uVar8 = 0;
    }
    else {
      lVar2 = RawTransformGroup::getPhysicsObject();
      uVar8 = *(uint *)(lVar2 + 0x8c);
    }
  }
  else {
    pBVar5 = *(Bt2ScenegraphPhysicsContext **)(this + 0x268);
    if (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0) {
      uVar8 = *(uint *)(param_1 + 8);
      pBVar3 = this + 0x268;
      do {
        if (*(uint *)(pBVar5 + 0x20) >= uVar8) {
          pBVar3 = pBVar5;
        }
        pBVar5 = *(Bt2ScenegraphPhysicsContext **)
                  (pBVar5 + (ulong)(*(uint *)(pBVar5 + 0x20) < uVar8) * 8);
      } while (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0);
      if ((pBVar3 != this + 0x268) && (*(uint *)(pBVar3 + 0x20) <= uVar8)) {
        pbVar6 = *(btRigidBody **)(pBVar3 + 0x50);
        uVar8 = 0;
        goto LAB_0099fcb8;
      }
    }
LAB_0099fcb0:
    uVar8 = 0;
    pbVar6 = (btRigidBody *)0x0;
  }
LAB_0099fcb8:
  if (((byte)param_1[6] >> 5 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar2 = RawTransformGroup::getPhysicsObject();
      pbVar7 = *(btRigidBody **)(lVar2 + 0x30);
      lVar2 = RawTransformGroup::getPhysicsObject();
      if (uVar8 < *(uint *)(lVar2 + 0x8c)) {
        lVar2 = RawTransformGroup::getPhysicsObject();
        uVar8 = *(uint *)(lVar2 + 0x8c);
joined_r0x0099fe7c:
        pbVar4 = (btRigidBody *)((ulong)pbVar6 | (ulong)pbVar7);
        goto joined_r0x0099fd48;
      }
LAB_0099fd5c:
      pbVar4 = (btRigidBody *)((ulong)pbVar6 | (ulong)pbVar7);
      goto joined_r0x0099fd48;
    }
  }
  else {
    pBVar5 = *(Bt2ScenegraphPhysicsContext **)(this + 0x268);
    if (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0) {
      uVar1 = *(uint *)(param_1 + 0x10);
      pBVar3 = this + 0x268;
      do {
        if (*(uint *)(pBVar5 + 0x20) >= uVar1) {
          pBVar3 = pBVar5;
        }
        pBVar5 = *(Bt2ScenegraphPhysicsContext **)
                  (pBVar5 + (ulong)(*(uint *)(pBVar5 + 0x20) < uVar1) * 8);
      } while (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0);
      if (pBVar3 == this + 0x268) {
        pbVar7 = (btRigidBody *)0x0;
        goto LAB_0099fd5c;
      }
      if (*(uint *)(pBVar3 + 0x20) <= uVar1) {
        pbVar7 = *(btRigidBody **)(pBVar3 + 0x50);
        goto joined_r0x0099fe7c;
      }
    }
  }
  pbVar7 = (btRigidBody *)0x0;
  pbVar4 = pbVar6;
joined_r0x0099fd48:
  if (pbVar4 != (btRigidBody *)0x0) {
    createJoint(this,*(uint *)param_1,*(uint *)(param_1 + 4),pbVar6,pbVar7,
                *(IJointBreakReport **)(param_1 + 0xe0),(Vector3 *)(param_1 + 0x18),
                (Vector3 *)(param_1 + 0x48),(Vector3 *)(param_1 + 0x30),(Vector3 *)(param_1 + 0x24),
                (Vector3 *)(param_1 + 0x54),(Vector3 *)(param_1 + 0x3c),(float *)(param_1 + 0x60),
                (float *)(param_1 + 0x6c),(float *)(param_1 + 0x78),(float *)(param_1 + 0x84),
                (float *)(param_1 + 0x90),(float *)(param_1 + 0x9c),(float *)(param_1 + 0xa8),
                (float *)(param_1 + 0xb4),(float *)(param_1 + 0xc0),(float *)(param_1 + 0xcc),
                *(float *)(param_1 + 0xd8),*(float *)(param_1 + 0xdc),(float *)(param_1 + 0xe8),
                (float *)(param_1 + 0xf4),(float *)(param_1 + 0x100),(float *)(param_1 + 0x10c),
                (float *)(param_1 + 0x118),(float *)(param_1 + 0x124),(float *)(param_1 + 0x130),
                (float *)(param_1 + 0x13c),(float *)(param_1 + 0x148),(float *)(param_1 + 0x154),
                uVar8);
  }
  return;
}


