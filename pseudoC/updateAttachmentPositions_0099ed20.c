// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAttachmentPositions
// Entry Point: 0099ed20
// Size: 1512 bytes
// Signature: undefined __thiscall updateAttachmentPositions(Bt2ScenegraphPhysicsContext * this, btRigidBody * param_1, btTransform * param_2)


/* Bt2ScenegraphPhysicsContext::updateAttachmentPositions(btRigidBody*, btTransform const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::updateAttachmentPositions
          (Bt2ScenegraphPhysicsContext *this,btRigidBody *param_1,btTransform *param_2)

{
  Bt2ScenegraphPhysicsContext **ppBVar1;
  long lVar2;
  btTransform *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Bt2ScenegraphPhysicsContext *pBVar7;
  Bt2ScenegraphPhysicsContext *pBVar8;
  Bt2ScenegraphPhysicsContext **ppBVar9;
  long lVar10;
  Bt2ScenegraphPhysicsContext **ppBVar11;
  DynamicMotionState *this_00;
  Bt2World *pBVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  
  if (((byte)param_1[0xe0] & 1) != 0) {
    return;
  }
  pBVar7 = *(Bt2ScenegraphPhysicsContext **)(this + 0x220);
  this_00 = *(DynamicMotionState **)(param_1 + 0x228);
  if (pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar8 = this + 0x220;
    do {
      if (*(btRigidBody **)(pBVar7 + 0x20) >= param_1) {
        pBVar8 = pBVar7;
      }
      pBVar7 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar7 + (ulong)(*(btRigidBody **)(pBVar7 + 0x20) < param_1) * 8);
    } while (pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0);
    if (((pBVar8 != this + 0x220) && (*(btRigidBody **)(pBVar8 + 0x20) <= param_1)) &&
       (uVar5 = *(uint *)(pBVar8 + 0x30), uVar5 != 0)) {
      uVar13 = 0;
      ppBVar1 = (Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
      do {
        ppBVar11 = (Bt2ScenegraphPhysicsContext **)*ppBVar1;
        if (ppBVar11 != (Bt2ScenegraphPhysicsContext **)0x0) {
          uVar4 = *(uint *)(*(long *)(pBVar8 + 0x28) + uVar13 * 4);
          ppBVar9 = ppBVar1;
          do {
            if (*(uint *)(ppBVar11 + 4) >= uVar4) {
              ppBVar9 = ppBVar11;
            }
            ppBVar11 = (Bt2ScenegraphPhysicsContext **)ppBVar11[*(uint *)(ppBVar11 + 4) < uVar4];
          } while (ppBVar11 != (Bt2ScenegraphPhysicsContext **)0x0);
          if ((ppBVar9 != ppBVar1) && (*(uint *)(ppBVar9 + 4) <= uVar4)) {
            pBVar7 = ppBVar9[6];
            pbVar3 = (btTransform *)(pBVar7 + 0x48);
            if (*(btRigidBody **)(pBVar7 + 0x28) != param_1) {
              pbVar3 = (btTransform *)(pBVar7 + 0x88);
            }
            DynamicMotionState::applyLocalBodyToTransform(param_2,pbVar3);
            DynamicMotionState::applyLocalTransformToBody(this_00,pbVar3);
            uVar5 = *(uint *)(pBVar8 + 0x30);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar5);
    }
  }
  pBVar7 = *(Bt2ScenegraphPhysicsContext **)(this + 0x238);
  if (pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar8 = this + 0x238;
    do {
      if (*(btRigidBody **)(pBVar7 + 0x20) >= param_1) {
        pBVar8 = pBVar7;
      }
      pBVar7 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar7 + (ulong)(*(btRigidBody **)(pBVar7 + 0x20) < param_1) * 8);
    } while (pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0);
    if (((pBVar8 != this + 0x238) && (*(btRigidBody **)(pBVar8 + 0x20) <= param_1)) &&
       (uVar5 = *(uint *)(pBVar8 + 0x30), uVar5 != 0)) {
      uVar13 = 0;
      do {
        lVar10 = *(long *)(*(long *)(*(long *)(pBVar8 + 0x28) + uVar13 * 8) + 0x28);
        if (lVar10 != 0) {
          pbVar3 = (btTransform *)(lVar10 + 0x48);
          if (*(btRigidBody **)(lVar10 + 0x28) != param_1) {
            pbVar3 = (btTransform *)(lVar10 + 0x88);
          }
          DynamicMotionState::applyLocalBodyToTransform(param_2,pbVar3);
          DynamicMotionState::applyLocalTransformToBody(this_00,pbVar3);
          uVar5 = *(uint *)(pBVar8 + 0x30);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar5);
    }
  }
  pBVar7 = *(Bt2ScenegraphPhysicsContext **)(this + 400);
  if (pBVar7 == (Bt2ScenegraphPhysicsContext *)0x0) {
    return;
  }
  pBVar8 = this + 400;
  do {
    if (*(btRigidBody **)(pBVar7 + 0x20) >= param_1) {
      pBVar8 = pBVar7;
    }
    pBVar7 = *(Bt2ScenegraphPhysicsContext **)
              (pBVar7 + (ulong)(*(btRigidBody **)(pBVar7 + 0x20) < param_1) * 8);
  } while (pBVar7 != (Bt2ScenegraphPhysicsContext *)0x0);
  if (pBVar8 == this + 400) {
    return;
  }
  if (param_1 < *(btRigidBody **)(pBVar8 + 0x20)) {
    return;
  }
  pBVar12 = *(Bt2World **)(pBVar8 + 0x28);
  Bt2RaycastVehicle::resetSuspension(pBVar12);
  if (*(btRigidBody **)(pBVar12 + 8) != (btRigidBody *)0x0) {
    if (*(btRigidBody **)(pBVar12 + 8) == param_1) {
      iVar6 = 0;
      goto LAB_0099efa0;
    }
    if (*(btRigidBody **)(pBVar12 + 0x10) != (btRigidBody *)0x0) {
      if (*(btRigidBody **)(pBVar12 + 0x10) == param_1) {
        iVar6 = 1;
        goto LAB_0099efa0;
      }
      if (*(btRigidBody **)(pBVar12 + 0x18) != (btRigidBody *)0x0) {
        if (*(btRigidBody **)(pBVar12 + 0x18) == param_1) {
          iVar6 = 2;
          goto LAB_0099efa0;
        }
        if (*(btRigidBody **)(pBVar12 + 0x20) != (btRigidBody *)0x0) {
          if (*(btRigidBody **)(pBVar12 + 0x20) == param_1) {
            iVar6 = 3;
            goto LAB_0099efa0;
          }
          if (*(btRigidBody **)(pBVar12 + 0x28) != (btRigidBody *)0x0) {
            if (*(btRigidBody **)(pBVar12 + 0x28) == param_1) {
              iVar6 = 4;
              goto LAB_0099efa0;
            }
            if (*(btRigidBody **)(pBVar12 + 0x30) != (btRigidBody *)0x0) {
              iVar6 = 5;
              if (*(btRigidBody **)(pBVar12 + 0x30) != param_1) {
                iVar6 = -1;
              }
              goto LAB_0099efa0;
            }
          }
        }
      }
    }
  }
  iVar6 = -1;
LAB_0099efa0:
  uVar5 = *(uint *)(pBVar12 + 0x3c);
  if (0 < (int)uVar5) {
    lVar10 = 0;
    do {
      lVar2 = *(long *)(pBVar12 + 0x48) + lVar10;
      if (*(int *)(lVar2 + 0x180) == iVar6) {
        uVar20 = *(undefined8 *)(param_2 + 0x10);
        fVar14 = *(float *)(lVar2 + 0x88) - *(float *)(param_2 + 0x34);
        fVar17 = *(float *)(lVar2 + 0x84) - *(float *)(param_2 + 0x30);
        uVar21 = *(undefined8 *)param_2;
        fVar16 = *(float *)(lVar2 + 0x8c) - *(float *)(param_2 + 0x38);
        uVar22 = *(undefined8 *)(param_2 + 0x20);
        uVar15 = NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar17,fVar14 * *(float *)(param_2 + 0x18))
        ;
        uVar18 = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(lVar2 + 0x90) = 0;
        fVar19 = (float)uVar20 * fVar14 + (float)uVar21 * fVar17 + (float)uVar22 * fVar16;
        fVar14 = (float)((ulong)uVar20 >> 0x20) * fVar14 + (float)((ulong)uVar21 >> 0x20) * fVar17 +
                 (float)((ulong)uVar22 >> 0x20) * fVar16;
        uVar15 = NEON_fmadd(uVar18,fVar16,uVar15);
        *(ulong *)(lVar2 + 0x84) = CONCAT44(fVar14,fVar19);
        *(undefined4 *)(lVar2 + 0x8c) = uVar15;
        fVar16 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this_00 + 0x60),
                                   *(float *)(this_00 + 0x5c) * fVar14 +
                                   *(float *)(this_00 + 0x58) * fVar19);
        fVar17 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this_00 + 0x70),
                                   *(float *)(this_00 + 0x6c) * fVar14 +
                                   *(float *)(this_00 + 0x68) * fVar19);
        fVar23 = *(float *)(this_00 + 0x88);
        fVar26 = *(float *)(this_00 + 0x8c);
        fVar14 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this_00 + 0x80),
                                   *(float *)(this_00 + 0x7c) * fVar14 +
                                   *(float *)(this_00 + 0x78) * fVar19);
        fVar19 = *(float *)(this_00 + 0x90);
        *(undefined4 *)(lVar2 + 0x90) = 0;
        fVar24 = *(float *)(lVar2 + 0xac);
        *(float *)(lVar2 + 0x84) = fVar16 + fVar23;
        *(float *)(lVar2 + 0x88) = fVar17 + fVar26;
        fVar17 = *(float *)(lVar2 + 0xa4);
        fVar16 = *(float *)(lVar2 + 0xa8);
        *(float *)(lVar2 + 0x8c) = fVar14 + fVar19;
        uVar20 = *(undefined8 *)(param_2 + 0x10);
        uVar21 = *(undefined8 *)param_2;
        uVar22 = *(undefined8 *)(param_2 + 0x20);
        uVar15 = NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar17,fVar16 * *(float *)(param_2 + 0x18))
        ;
        uVar18 = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(lVar2 + 0xb0) = 0;
        fVar14 = (float)uVar20 * fVar16 + (float)uVar21 * fVar17 + (float)uVar22 * fVar24;
        fVar16 = (float)((ulong)uVar20 >> 0x20) * fVar16 + (float)((ulong)uVar21 >> 0x20) * fVar17 +
                 (float)((ulong)uVar22 >> 0x20) * fVar24;
        uVar18 = NEON_fmadd(uVar18,fVar24,uVar15);
        *(ulong *)(lVar2 + 0xa4) = CONCAT44(fVar16,fVar14);
        *(undefined4 *)(lVar2 + 0xac) = uVar18;
        fVar24 = *(float *)(this_00 + 0x58);
        fVar17 = *(float *)(this_00 + 0x5c);
        fVar26 = *(float *)(this_00 + 0x68);
        fVar19 = *(float *)(this_00 + 0x6c);
        fVar28 = *(float *)(this_00 + 0x78);
        fVar23 = *(float *)(this_00 + 0x7c);
        uVar25 = *(undefined4 *)(this_00 + 0x60);
        uVar27 = *(undefined4 *)(this_00 + 0x70);
        uVar15 = *(undefined4 *)(this_00 + 0x80);
        *(undefined4 *)(lVar2 + 0xb0) = 0;
        uVar25 = NEON_fmadd(uVar25,uVar18,fVar17 * fVar16 + fVar24 * fVar14);
        fVar24 = *(float *)(lVar2 + 0xbc);
        uVar27 = NEON_fmadd(uVar27,uVar18,fVar19 * fVar16 + fVar26 * fVar14);
        uVar15 = NEON_fmadd(uVar15,uVar18,fVar23 * fVar16 + fVar28 * fVar14);
        *(undefined4 *)(lVar2 + 0xa4) = uVar25;
        *(undefined4 *)(lVar2 + 0xa8) = uVar27;
        fVar17 = *(float *)(lVar2 + 0xb4);
        fVar16 = *(float *)(lVar2 + 0xb8);
        *(undefined4 *)(lVar2 + 0xac) = uVar15;
        uVar20 = *(undefined8 *)(param_2 + 0x10);
        uVar21 = *(undefined8 *)param_2;
        uVar22 = *(undefined8 *)(param_2 + 0x20);
        uVar15 = NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar17,fVar16 * *(float *)(param_2 + 0x18))
        ;
        uVar18 = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(lVar2 + 0xc0) = 0;
        fVar14 = (float)uVar20 * fVar16 + (float)uVar21 * fVar17 + (float)uVar22 * fVar24;
        fVar16 = (float)((ulong)uVar20 >> 0x20) * fVar16 + (float)((ulong)uVar21 >> 0x20) * fVar17 +
                 (float)((ulong)uVar22 >> 0x20) * fVar24;
        uVar18 = NEON_fmadd(uVar18,fVar24,uVar15);
        *(ulong *)(lVar2 + 0xb4) = CONCAT44(fVar16,fVar14);
        *(undefined4 *)(lVar2 + 0xbc) = uVar18;
        fVar24 = *(float *)(this_00 + 0x58);
        fVar17 = *(float *)(this_00 + 0x5c);
        fVar26 = *(float *)(this_00 + 0x68);
        fVar19 = *(float *)(this_00 + 0x6c);
        fVar28 = *(float *)(this_00 + 0x78);
        fVar23 = *(float *)(this_00 + 0x7c);
        uVar25 = *(undefined4 *)(this_00 + 0x60);
        uVar27 = *(undefined4 *)(this_00 + 0x70);
        uVar15 = *(undefined4 *)(this_00 + 0x80);
        *(undefined4 *)(lVar2 + 0xc0) = 0;
        uVar25 = NEON_fmadd(uVar25,uVar18,fVar17 * fVar16 + fVar24 * fVar14);
        uVar27 = NEON_fmadd(uVar27,uVar18,fVar19 * fVar16 + fVar26 * fVar14);
        uVar15 = NEON_fmadd(uVar15,uVar18,fVar23 * fVar16 + fVar28 * fVar14);
        *(undefined4 *)(lVar2 + 0xb4) = uVar25;
        *(undefined4 *)(lVar2 + 0xb8) = uVar27;
        *(undefined4 *)(lVar2 + 0xbc) = uVar15;
        fVar14 = *(float *)(lVar2 + 200) - *(float *)(param_2 + 0x34);
        uVar20 = *(undefined8 *)(param_2 + 0x10);
        fVar17 = *(float *)(lVar2 + 0xc4) - *(float *)(param_2 + 0x30);
        uVar21 = *(undefined8 *)param_2;
        fVar19 = *(float *)(lVar2 + 0xcc) - *(float *)(param_2 + 0x38);
        uVar15 = NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar17,fVar14 * *(float *)(param_2 + 0x18))
        ;
        uVar22 = *(undefined8 *)(param_2 + 0x20);
        uVar18 = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(lVar2 + 0xd0) = 0;
        fVar16 = (float)uVar20 * fVar14 + (float)uVar21 * fVar17 + (float)uVar22 * fVar19;
        fVar14 = (float)((ulong)uVar20 >> 0x20) * fVar14 + (float)((ulong)uVar21 >> 0x20) * fVar17 +
                 (float)((ulong)uVar22 >> 0x20) * fVar19;
        uVar15 = NEON_fmadd(uVar18,fVar19,uVar15);
        *(ulong *)(lVar2 + 0xc4) = CONCAT44(fVar14,fVar16);
        *(undefined4 *)(lVar2 + 0xcc) = uVar15;
        fVar17 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this_00 + 0x60),
                                   *(float *)(this_00 + 0x5c) * fVar14 +
                                   *(float *)(this_00 + 0x58) * fVar16);
        fVar19 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this_00 + 0x70),
                                   *(float *)(this_00 + 0x6c) * fVar14 +
                                   *(float *)(this_00 + 0x68) * fVar16);
        fVar23 = *(float *)(this_00 + 0x88);
        fVar26 = *(float *)(this_00 + 0x8c);
        fVar14 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this_00 + 0x80),
                                   *(float *)(this_00 + 0x7c) * fVar14 +
                                   *(float *)(this_00 + 0x78) * fVar16);
        fVar16 = *(float *)(this_00 + 0x90);
        *(undefined4 *)(lVar2 + 0xd0) = 0;
        fVar24 = *(float *)(lVar2 + 0x9c);
        *(float *)(lVar2 + 0xc4) = fVar17 + fVar23;
        *(float *)(lVar2 + 200) = fVar19 + fVar26;
        fVar19 = *(float *)(lVar2 + 0x94);
        fVar17 = *(float *)(lVar2 + 0x98);
        *(float *)(lVar2 + 0xcc) = fVar14 + fVar16;
        uVar20 = *(undefined8 *)(param_2 + 0x10);
        uVar21 = *(undefined8 *)param_2;
        uVar22 = *(undefined8 *)(param_2 + 0x20);
        uVar15 = NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar19,fVar17 * *(float *)(param_2 + 0x18))
        ;
        uVar18 = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(lVar2 + 0xa0) = 0;
        fVar14 = (float)uVar20 * fVar17 + (float)uVar21 * fVar19 + (float)uVar22 * fVar24;
        fVar16 = (float)((ulong)uVar20 >> 0x20) * fVar17 + (float)((ulong)uVar21 >> 0x20) * fVar19 +
                 (float)((ulong)uVar22 >> 0x20) * fVar24;
        uVar18 = NEON_fmadd(uVar18,fVar24,uVar15);
        *(ulong *)(lVar2 + 0x94) = CONCAT44(fVar16,fVar14);
        *(undefined4 *)(lVar2 + 0x9c) = uVar18;
        fVar24 = *(float *)(this_00 + 0x58);
        fVar17 = *(float *)(this_00 + 0x5c);
        fVar26 = *(float *)(this_00 + 0x68);
        fVar19 = *(float *)(this_00 + 0x6c);
        fVar28 = *(float *)(this_00 + 0x78);
        fVar23 = *(float *)(this_00 + 0x7c);
        uVar25 = *(undefined4 *)(this_00 + 0x60);
        uVar27 = *(undefined4 *)(this_00 + 0x70);
        uVar15 = *(undefined4 *)(this_00 + 0x80);
        *(undefined4 *)(lVar2 + 0xa0) = 0;
        uVar25 = NEON_fmadd(uVar25,uVar18,fVar17 * fVar16 + fVar24 * fVar14);
        uVar27 = NEON_fmadd(uVar27,uVar18,fVar19 * fVar16 + fVar26 * fVar14);
        uVar15 = NEON_fmadd(uVar15,uVar18,fVar23 * fVar16 + fVar28 * fVar14);
        *(undefined4 *)(lVar2 + 0x94) = uVar25;
        *(undefined4 *)(lVar2 + 0x98) = uVar27;
        *(undefined4 *)(lVar2 + 0x9c) = uVar15;
        Bt2WheelInfo::updateSteering();
      }
      lVar10 = lVar10 + 0x1a0;
    } while ((ulong)uVar5 * 0x1a0 - lVar10 != 0);
  }
  return;
}


