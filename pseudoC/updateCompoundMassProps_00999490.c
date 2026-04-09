// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCompoundMassProps
// Entry Point: 00999490
// Size: 472 bytes
// Signature: undefined __cdecl updateCompoundMassProps(btRigidBody * param_1, btTransform * param_2)


/* Bt2PhysicsUtil::updateCompoundMassProps(btRigidBody*, btTransform&) */

void Bt2PhysicsUtil::updateCompoundMassProps(btRigidBody *param_1,btTransform *param_2)

{
  TransformGroup **ppTVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  TransformGroup **ppTVar5;
  uint uVar6;
  ulong uVar7;
  TransformGroup **ppTVar8;
  TransformGroup *pTVar9;
  TransformGroup **ppTVar10;
  btCompoundShape *pbVar11;
  char *pcVar12;
  float local_1fc;
  btVector3 abStack_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  TransformGroup *apTStack_1a8 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((((**(byte **)(param_1 + 0x108) & 1) != 0) &&
       (*(int *)(*(long *)(param_1 + 200) + 8) == 0x1f)) && (*(long *)(param_1 + 0x228) != 0)) &&
     (((byte)param_1[0xe0] & 1) == 0)) {
    pTVar9 = *(TransformGroup **)(*(byte **)(param_1 + 0x108) + 8);
    lVar3 = RawTransformGroup::getPhysicsObject();
    if ((*(byte *)(lVar3 + 8) >> 3 & 1) != 0) {
      pcVar12 = *(char **)(param_1 + 0x108);
      pbVar11 = *(btCompoundShape **)(param_1 + 200);
      if (*pcVar12 < '\0') {
        uVar6 = *(uint *)(pbVar11 + 0x24);
        if (uVar6 < 0x29) {
          ppTVar5 = apTStack_1a8;
          ppTVar10 = (TransformGroup **)0x0;
        }
        else {
          uVar7 = (long)(int)uVar6 << 3;
          if ((ulong)(long)(int)uVar6 >> 0x3d != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          ppTVar5 = (TransformGroup **)operator_new__(uVar7);
          uVar6 = *(uint *)(pbVar11 + 0x24);
          ppTVar10 = ppTVar5;
        }
        if (0 < (int)uVar6) {
          lVar3 = 0;
          ppTVar8 = ppTVar5;
          do {
            ppTVar1 = (TransformGroup **)(*(long *)(pcVar12 + 0x18) + lVar3);
            lVar3 = lVar3 + 0x10;
            *ppTVar8 = *ppTVar1;
            ppTVar8 = ppTVar8 + 1;
          } while ((ulong)uVar6 * 0x10 - lVar3 != 0);
        }
      }
      else {
        ppTVar10 = (TransformGroup **)0x0;
        ppTVar5 = (TransformGroup **)0x0;
      }
      lVar3 = *(long *)(param_1 + 0x228);
      uVar4 = *(undefined8 *)(lVar3 + 0x58);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar3 + 0x60);
      *(undefined8 *)param_2 = uVar4;
      uVar4 = *(undefined8 *)(lVar3 + 0x68);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar3 + 0x70);
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      uVar4 = *(undefined8 *)(lVar3 + 0x78);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar3 + 0x80);
      *(undefined8 *)(param_2 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(lVar3 + 0x88);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar3 + 0x90);
      *(undefined8 *)(param_2 + 0x30) = uVar4;
      if (((byte)param_1[0xe0] >> 1 & 1) == 0) {
        updateCompoundMassProps
                  (pTVar9,ppTVar5,pbVar11,(btTransform *)&local_1e8,&local_1fc,abStack_1f8);
        btRigidBody::setMassProps(param_1,local_1fc,abStack_1f8);
        *(undefined8 *)(lVar3 + 0x60) = uStack_1e0;
        *(undefined8 *)(lVar3 + 0x58) = local_1e8;
        *(undefined8 *)(lVar3 + 0x70) = uStack_1d0;
        *(undefined8 *)(lVar3 + 0x68) = local_1d8;
        *(undefined8 *)(lVar3 + 0x80) = uStack_1c0;
        *(undefined8 *)(lVar3 + 0x78) = local_1c8;
        *(undefined8 *)(lVar3 + 0x90) = uStack_1b0;
        *(undefined8 *)(lVar3 + 0x88) = local_1b8;
      }
      else {
        updateCompoundMassPropsKinematic(pTVar9,ppTVar5,pbVar11);
      }
      if (ppTVar10 != (TransformGroup **)0x0) {
        operator_delete__(ppTVar10);
      }
      uVar4 = 1;
      goto LAB_00999508;
    }
  }
  uVar4 = 0;
LAB_00999508:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


