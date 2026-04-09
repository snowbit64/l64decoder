// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00995050
// Size: 2280 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsRBObject::update() */

void Bt2PhysicsRBObject::update(void)

{
  Bt2PhysicsRBObject BVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  MESSAGE_TYPE MVar6;
  Bt2PhysicsRBObject *in_x0;
  ulong uVar7;
  btCollisionObject *pbVar8;
  uint uVar9;
  btRigidBody *pbVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar9 = *(uint *)(in_x0 + 0x20);
  if (uVar9 == 0) goto LAB_00995908;
  if ((uVar9 & 0x1c0) != 0) {
    uVar13 = *(uint *)(in_x0 + 8);
    if ((uVar13 >> 6 & 1) == 0) {
      if ((uVar13 >> 7 & 1) == 0) goto LAB_009950ac;
      uVar14 = 0xfffffeff;
    }
    else {
      uVar14 = 0xfffffe7f;
    }
    *(uint *)(in_x0 + 8) = uVar13 & uVar14;
  }
LAB_009950ac:
  pbVar10 = *(btRigidBody **)(in_x0 + 0x30);
  if (pbVar10 != (btRigidBody *)0x0) {
    if ((uVar9 & 0x100800) != 0) {
      Bt2PhysicsUtil::updateRigidBodyCollisionMask(in_x0,pbVar10,*(uint *)(in_x0 + 0x58));
      pbVar10 = *(btRigidBody **)(in_x0 + 0x30);
      if (((byte)((btCollisionObject *)pbVar10)[0xe0] & 1) == 0) {
        btCollisionObject::activate((btCollisionObject *)pbVar10,true);
        pbVar10 = *(btRigidBody **)(in_x0 + 0x30);
      }
    }
    bVar5 = (uVar9 & 0x100800) != 0;
    if ((*(uint *)(pbVar10 + 0xe0) & 1) == 0) {
      if ((*(ushort *)(in_x0 + 0x20) & 0x180) == 0) {
        bVar3 = 0;
      }
      else {
        if ((*(uint *)(in_x0 + 8) >> 7 & 1) == 0) {
          if ((*(uint *)(in_x0 + 8) >> 8 & 1) != 0) {
            local_a0 = 0;
            uStack_98 = 0;
            btRigidBody::setMassProps(pbVar10,0.0,(btVector3 *)&local_a0);
            lVar11 = *(long *)(in_x0 + 0x30);
            *(undefined8 *)(lVar11 + 0x184) = 0;
            *(undefined8 *)(lVar11 + 0x17c) = 0;
            *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
            *(uint *)(lVar11 + 0xe0) = *(uint *)(lVar11 + 0xe0) & 0xfffffffc | 2;
            lVar11 = *(long *)(in_x0 + 0x30);
            *(undefined8 *)(lVar11 + 0x194) = 0;
            *(undefined8 *)(lVar11 + 0x18c) = 0;
            *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
            btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x30),true);
          }
          bVar3 = 0;
          BVar1 = in_x0[9];
        }
        else {
          bVar3 = 1;
          *(uint *)(pbVar10 + 0xe0) = *(uint *)(pbVar10 + 0xe0) & 0xfffffffd;
          btCollisionObject::forceActivationState((btCollisionObject *)pbVar10,1);
          btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x30),true);
          BVar1 = in_x0[9];
        }
        if (((byte)BVar1 >> 3 & 1) != 0) {
          Bt2PhysicsUtil::getMergedRigidBodyCollisionMask(in_x0,*(btRigidBody **)(in_x0 + 0x30));
        }
      }
      if ((char)in_x0[0x22] < '\0') {
        btRigidBody::setDamping
                  (*(btRigidBody **)(in_x0 + 0x30),*(float *)(in_x0 + 0x6c),*(float *)(in_x0 + 0x70)
                  );
      }
      uVar9 = *(uint *)(in_x0 + 0x20);
      if (((byte)in_x0[9] & 1) != 0) {
        if (((uVar9 >> 0x1d & 1) != 0) &&
           (uVar7 = Bt2PhysicsUtil::updateCompoundMassProps
                              (*(btRigidBody **)(in_x0 + 0x30),(btTransform *)&local_a0),
           (uVar7 & 1) != 0)) {
LAB_00995324:
          pbVar8 = *(btCollisionObject **)(in_x0 + 0x30);
LAB_00995328:
          bVar5 = true;
LAB_009953ac:
          btCollisionObject::activate(pbVar8,true);
        }
        goto LAB_009953b0;
      }
      if ((bool)((uVar9 & 0x25000000) == 0 & (bVar3 ^ 1))) {
        if ((uVar9 >> 0x19 & 1) != 0) {
          pbVar10 = *(btRigidBody **)(in_x0 + 0x30);
          if (*(float *)(pbVar10 + 0x19c) != 0.0) {
            uVar23 = *(undefined8 *)(pbVar10 + 0x1d0);
            uVar21 = NEON_fmov(0x3f800000,4);
            uStack_98._0_4_ = (float)*(undefined8 *)(pbVar10 + 0x1d8);
            fVar24 = (float)uVar21 / (float)uVar23;
            fVar25 = (float)((ulong)uVar21 >> 0x20) / (float)((ulong)uVar23 >> 0x20);
            uVar23 = NEON_fcmeq(uVar23,0,4);
            fVar19 = 1.0 / (float)uStack_98;
            fVar22 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((ulong)uVar23 >> 0x18),
                                     CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                              ~(byte)((ulong)uVar23 >> 0x10),
                                              CONCAT11((byte)((uint)fVar24 >> 8) &
                                                       ~(byte)((ulong)uVar23 >> 8),
                                                       SUB41(fVar24,0) & ~(byte)uVar23)));
            fVar24 = *(float *)(in_x0 + 0x78) / (1.0 / *(float *)(pbVar10 + 0x19c));
            if ((float)uStack_98 == 0.0) {
              fVar19 = 0.0;
            }
            local_a0 = CONCAT44((float)(CONCAT17((byte)((uint)fVar25 >> 0x18) &
                                                 ~(byte)((ulong)uVar23 >> 0x38),
                                                 CONCAT16((byte)((uint)fVar25 >> 0x10) &
                                                          ~(byte)((ulong)uVar23 >> 0x30),
                                                          CONCAT15((byte)((uint)fVar25 >> 8) &
                                                                   ~(byte)((ulong)uVar23 >> 0x28),
                                                                   CONCAT14(SUB41(fVar25,0) &
                                                                            ~(byte)((ulong)uVar23 >>
                                                                                   0x20),fVar22))))
                                       >> 0x20) * fVar24,fVar22 * fVar24);
            uStack_98 = (ulong)(uint)(fVar19 * fVar24);
            btRigidBody::setMassProps(pbVar10,*(float *)(in_x0 + 0x78),(btVector3 *)&local_a0);
            pbVar8 = *(btCollisionObject **)(in_x0 + 0x30);
            goto LAB_009953ac;
          }
        }
        goto LAB_009953b0;
      }
      uVar7 = Bt2PhysicsUtil::updateCompoundMassProps
                        (*(btRigidBody **)(in_x0 + 0x30),(btTransform *)&local_a0);
      if ((uVar7 & 1) == 0) goto LAB_009953b0;
      Bt2ScenegraphPhysicsContext::updateAttachmentPositions
                (*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10),*(btRigidBody **)(in_x0 + 0x30),
                 (btTransform *)&local_a0);
      if (((byte)in_x0[0x23] >> 4 & 1) == 0) {
        pbVar8 = *(btCollisionObject **)(in_x0 + 0x30);
        lVar11 = *(long *)(pbVar8 + 0x228);
        if (lVar11 != 0) {
          btTransform::inverse();
          btTransform::operator*((btTransform *)&local_a0,(btTransform *)&local_120);
          btTransform::operator*((btTransform *)(lVar11 + 0x18),(btTransform *)&local_e0);
          *(undefined8 *)(lVar11 + 0x20) = uStack_118;
          *(undefined8 *)(lVar11 + 0x18) = local_120;
          *(undefined8 *)(lVar11 + 0x30) = uStack_108;
          *(undefined8 *)(lVar11 + 0x28) = local_110;
          *(undefined8 *)(lVar11 + 0x40) = uStack_f8;
          *(undefined8 *)(lVar11 + 0x38) = local_100;
          *(undefined8 *)(lVar11 + 0x50) = uStack_e8;
          *(undefined8 *)(lVar11 + 0x48) = local_f0;
          lVar11 = *(long *)(in_x0 + 0x30);
          btTransform::operator*((btTransform *)(lVar11 + 8),(btTransform *)&local_e0);
          *(undefined8 *)(lVar11 + 0x10) = uStack_118;
          *(undefined8 *)(lVar11 + 8) = local_120;
          *(undefined8 *)(lVar11 + 0x20) = uStack_108;
          *(undefined8 *)(lVar11 + 0x18) = local_110;
          *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
          *(undefined8 *)(lVar11 + 0x30) = uStack_f8;
          *(undefined8 *)(lVar11 + 0x28) = local_100;
          *(undefined8 *)(lVar11 + 0x40) = uStack_e8;
          *(undefined8 *)(lVar11 + 0x38) = local_f0;
          btRigidBody::updateInertiaTensor();
          lVar11 = *(long *)(in_x0 + 0x30);
          btTransform::operator*((btTransform *)(lVar11 + 0x48),(btTransform *)&local_e0);
          *(undefined8 *)(lVar11 + 0x50) = uStack_118;
          *(undefined8 *)(lVar11 + 0x48) = local_120;
          *(undefined8 *)(lVar11 + 0x60) = uStack_108;
          *(undefined8 *)(lVar11 + 0x58) = local_110;
          *(undefined8 *)(lVar11 + 0x70) = uStack_f8;
          *(undefined8 *)(lVar11 + 0x68) = local_100;
          *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
          *(undefined8 *)(lVar11 + 0x80) = uStack_e8;
          *(undefined8 *)(lVar11 + 0x78) = local_f0;
          goto LAB_00995324;
        }
        goto LAB_00995328;
      }
      bVar5 = true;
      uVar9 = *(uint *)(in_x0 + 0x20);
    }
    else {
LAB_009953b0:
      uVar9 = *(uint *)(in_x0 + 0x20);
    }
    if ((uVar9 >> 0x15 & 1) != 0) {
      fVar19 = *(float *)(in_x0 + 0x5c);
      lVar11 = *(long *)(in_x0 + 0x30);
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
      *(float *)(lVar11 + 0xf8) = SQRT(fVar19);
    }
    if ((uVar9 >> 0x16 & 1) != 0) {
      pbVar8 = *(btCollisionObject **)(in_x0 + 0x30);
      fVar19 = *(float *)(in_x0 + 0x60);
      if (*(float *)(in_x0 + 0x60) < *(float *)(in_x0 + 100)) {
        fVar19 = *(float *)(in_x0 + 100);
      }
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      *(float *)(pbVar8 + 0xf4) = SQRT(fVar19);
      uVar20 = *(undefined4 *)(in_x0 + 0x68);
      *(int *)(pbVar8 + 0x148) = *(int *)(pbVar8 + 0x148) + 2;
      *(undefined4 *)(pbVar8 + 0xfc) = uVar20;
      if (((byte)pbVar8[0xe0] & 1) == 0) {
        btCollisionObject::activate(pbVar8,true);
        uVar9 = *(uint *)(in_x0 + 0x20);
      }
    }
    if ((uVar9 >> 0x1e & 1) != 0) {
      Bt2PhysicsUtil::updateRigidBodyFrictionVelocity
                (in_x0,*(btRigidBody **)(in_x0 + 0x30),*(float *)(in_x0 + 0x88));
      if (((byte)(*(btCollisionObject **)(in_x0 + 0x30))[0xe0] & 1) == 0) {
        btCollisionObject::activate(*(btCollisionObject **)(in_x0 + 0x30),true);
      }
    }
    uVar9 = *(uint *)(in_x0 + 0x20);
    if ((uVar9 >> 0x1c & 1) != 0) {
      lVar11 = *(long *)(in_x0 + 0x30);
      if ((*(byte *)(lVar11 + 0xe0) & 3) == 0) {
        *(undefined8 *)(lVar11 + 0x184) = 0;
        *(undefined8 *)(lVar11 + 0x17c) = 0;
        *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
        lVar11 = *(long *)(in_x0 + 0x30);
        *(undefined8 *)(lVar11 + 0x18c) = 0;
        *(undefined8 *)(lVar11 + 0x194) = 0;
        *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
        Bt2ScenegraphPhysicsContext::resetVehicle
                  (*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10),*(btRigidBody **)(in_x0 + 0x30));
      }
      lVar11 = *(long *)(in_x0 + 0x28);
      RawTransformGroup::updateWorldTransformation();
      uStack_98 = *(ulong *)(lVar11 + 0xc0);
      local_a0 = *(undefined8 *)(lVar11 + 0xb8);
      uStack_88 = *(undefined8 *)(lVar11 + 0xd0);
      local_90 = *(undefined8 *)(lVar11 + 200);
      uStack_78 = *(undefined8 *)(lVar11 + 0xe0);
      local_80 = *(undefined8 *)(lVar11 + 0xd8);
      local_68 = *(undefined8 *)(lVar11 + 0xf0);
      local_70 = *(long *)(lVar11 + 0xe8);
      Matrix4x4::orthonormalize3x3();
      pbVar10 = *(btRigidBody **)(in_x0 + 0x30);
      plVar12 = *(long **)((btCollisionObject *)pbVar10 + 0x228);
      if ((((byte)((btCollisionObject *)pbVar10)[0xe0] >> 1 & 1) == 0) ||
         (((byte)in_x0[10] >> 2 & 1) != 0)) {
        if (plVar12 == (long *)0x0) {
          uStack_d4 = 0;
          local_c4 = 0;
          uStack_b4 = 0;
          local_e0 = (undefined4)local_a0;
          uStack_dc = (undefined4)local_90;
          local_a4 = 0;
          uStack_d8 = (undefined4)local_80;
          local_c8 = local_80._4_4_;
          local_d0 = local_a0._4_4_;
          uStack_cc = local_90._4_4_;
          local_c0 = (float)uStack_98;
          uStack_bc = (undefined4)uStack_88;
          local_b0 = local_70;
          uStack_b8 = (undefined4)uStack_78;
          local_a8 = (undefined4)local_68;
        }
        else {
          *(undefined4 *)((long)plVar12 + 0x24) = 0;
          *(undefined4 *)((long)plVar12 + 0x34) = 0;
          *(undefined4 *)((long)plVar12 + 0x44) = 0;
          *(undefined4 *)(plVar12 + 3) = (undefined4)local_a0;
          *(undefined4 *)((long)plVar12 + 0x1c) = (undefined4)local_90;
          *(undefined4 *)((long)plVar12 + 0x54) = 0;
          *(undefined4 *)(plVar12 + 4) = (undefined4)local_80;
          *(undefined4 *)(plVar12 + 5) = local_a0._4_4_;
          *(undefined4 *)((long)plVar12 + 0x2c) = local_90._4_4_;
          *(float *)(plVar12 + 7) = (float)uStack_98;
          *(undefined4 *)((long)plVar12 + 0x3c) = (undefined4)uStack_88;
          *(undefined4 *)(plVar12 + 6) = local_80._4_4_;
          *(undefined4 *)(plVar12 + 8) = (undefined4)uStack_78;
          plVar12[9] = local_70;
          *(undefined4 *)(plVar12 + 10) = (undefined4)local_68;
          (**(code **)(*plVar12 + 0x10))(plVar12,&local_e0);
          pbVar10 = *(btRigidBody **)(in_x0 + 0x30);
        }
        btRigidBody::setCenterOfMassTransform(pbVar10,(btTransform *)&local_e0);
        lVar11 = *(long *)(in_x0 + 0x30);
        *(ulong *)(lVar11 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
        *(ulong *)(lVar11 + 0x48) = CONCAT44(uStack_dc,local_e0);
        *(ulong *)(lVar11 + 0x60) = CONCAT44(local_c4,local_c8);
        *(ulong *)(lVar11 + 0x58) = CONCAT44(uStack_cc,local_d0);
        *(ulong *)(lVar11 + 0x70) = CONCAT44(uStack_b4,uStack_b8);
        *(ulong *)(lVar11 + 0x68) = CONCAT44(uStack_bc,local_c0);
        *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
        *(ulong *)(lVar11 + 0x80) = CONCAT44(local_a4,local_a8);
        *(long *)(lVar11 + 0x78) = local_b0;
        pbVar8 = *(btCollisionObject **)(in_x0 + 0x30);
        if (((byte)pbVar8[0xe0] & 1) == 0) {
          btCollisionObject::activate(pbVar8,true);
        }
        else {
          btCollisionWorld::updateSingleAabb
                    (*(btCollisionWorld **)(*(long *)(in_x0 + 0x10) + 0x30),pbVar8);
        }
        bVar5 = true;
      }
      else {
        *(undefined4 *)((long)plVar12 + 0x24) = 0;
        *(undefined4 *)((long)plVar12 + 0x34) = 0;
        *(undefined4 *)((long)plVar12 + 0x44) = 0;
        *(undefined4 *)(plVar12 + 3) = (undefined4)local_a0;
        *(undefined4 *)((long)plVar12 + 0x1c) = (undefined4)local_90;
        *(undefined4 *)(plVar12 + 5) = local_a0._4_4_;
        *(float *)(plVar12 + 7) = (float)uStack_98;
        *(undefined4 *)((long)plVar12 + 0x54) = 0;
        *(undefined4 *)(plVar12 + 4) = (undefined4)local_80;
        *(undefined4 *)((long)plVar12 + 0x2c) = local_90._4_4_;
        *(undefined4 *)((long)plVar12 + 0x3c) = (undefined4)uStack_88;
        *(undefined4 *)(plVar12 + 6) = local_80._4_4_;
        *(undefined4 *)(plVar12 + 8) = (undefined4)uStack_78;
        plVar12[9] = local_70;
        *(undefined4 *)(plVar12 + 10) = (undefined4)local_68;
        btCollisionObject::activate((btCollisionObject *)pbVar10,true);
      }
      uVar7 = *(ulong *)(in_x0 + 0x30);
      if ((*(byte *)(uVar7 + 0xe0) >> 1 & 1) != 0) {
        lVar11 = *(long *)(in_x0 + 0x10);
        lVar15 = *(long *)(lVar11 + 0x238);
        if (lVar15 != 0) {
          lVar17 = lVar11 + 0x238;
          do {
            bVar4 = *(ulong *)(lVar15 + 0x20) < uVar7;
            if (!bVar4) {
              lVar17 = lVar15;
            }
            lVar15 = *(long *)(lVar15 + (ulong)bVar4 * 8);
          } while (lVar15 != 0);
          if (((lVar17 != lVar11 + 0x238) && (*(ulong *)(lVar17 + 0x20) <= uVar7)) &&
             (uVar9 = *(uint *)(lVar17 + 0x30), uVar9 != 0)) {
            lVar11 = 0;
            do {
              btCollisionObject::activate
                        (*(btCollisionObject **)
                          (*(long *)(*(long *)(*(long *)(lVar17 + 0x28) + lVar11) + 0x28) + 0x28),
                         false);
              btCollisionObject::activate
                        (*(btCollisionObject **)
                          (*(long *)(*(long *)(*(long *)(lVar17 + 0x28) + lVar11) + 0x28) + 0x30),
                         false);
              lVar11 = lVar11 + 8;
            } while ((ulong)uVar9 * 8 - lVar11 != 0);
            lVar11 = *(long *)(in_x0 + 0x10);
            uVar7 = *(ulong *)(in_x0 + 0x30);
          }
        }
        lVar15 = *(long *)(lVar11 + 0x220);
        if (lVar15 != 0) {
          lVar17 = lVar11 + 0x220;
          do {
            bVar4 = *(ulong *)(lVar15 + 0x20) < uVar7;
            if (!bVar4) {
              lVar17 = lVar15;
            }
            lVar15 = *(long *)(lVar15 + (ulong)bVar4 * 8);
          } while (lVar15 != 0);
          if (((lVar17 != lVar11 + 0x220) && (*(ulong *)(lVar17 + 0x20) <= uVar7)) &&
             (uVar9 = *(uint *)(lVar17 + 0x30), uVar9 != 0)) {
            uVar7 = 0;
            lVar15 = *(long *)(lVar11 + 0x1c8);
            while( true ) {
              if (lVar15 != 0) {
                uVar13 = *(uint *)(*(long *)(lVar17 + 0x28) + uVar7 * 4);
                lVar18 = lVar11 + 0x1c8;
                do {
                  bVar4 = *(uint *)(lVar15 + 0x20) < uVar13;
                  if (!bVar4) {
                    lVar18 = lVar15;
                  }
                  lVar15 = *(long *)(lVar15 + (ulong)bVar4 * 8);
                } while (lVar15 != 0);
                if ((lVar18 != lVar11 + 0x1c8) && (*(uint *)(lVar18 + 0x20) <= uVar13)) {
                  btCollisionObject::activate
                            (*(btCollisionObject **)(*(long *)(lVar18 + 0x30) + 0x28),false);
                  btCollisionObject::activate
                            (*(btCollisionObject **)(*(long *)(lVar18 + 0x30) + 0x30),false);
                }
              }
              uVar7 = uVar7 + 1;
              if (uVar7 == uVar9) break;
              lVar11 = *(long *)(in_x0 + 0x10);
              lVar15 = *(long *)(lVar11 + 0x1c8);
            }
            uVar7 = *(ulong *)(in_x0 + 0x30);
          }
        }
      }
      *(uint *)(in_x0 + 8) = *(uint *)(in_x0 + 8) & 0xfffbffff;
      if ((*(byte *)(uVar7 + 0xe0) & 1) != 0) {
        Bt2PhysicsContextManager::getInstance();
        MVar6 = Bt2PhysicsContextManager::getPhysicsErrorStream();
        Bt2PhysicsErrorStream::print
                  (MVar6,(char *)0x1,"Static actor moved (%s)\n",
                   *(undefined8 *)(*(long *)(in_x0 + 0x28) + 8));
      }
      uVar9 = *(uint *)(in_x0 + 0x20);
    }
    if ((((uVar9 & 0x7000) != 0) || (bVar5)) &&
       (lVar11 = (**(code **)(**(long **)(*(long *)(*(long *)(in_x0 + 0x10) + 0x30) + 0x60) + 0x48))
                           (), lVar11 != 0)) {
      plVar12 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(in_x0 + 0x10) + 0x30) + 0x60) +
                                    0x48))();
      (**(code **)(*plVar12 + 0x50))
                (plVar12,*(undefined8 *)(*(long *)(in_x0 + 0x30) + 0xc0),
                 *(undefined8 *)(*(long *)(*(long *)(in_x0 + 0x10) + 0x30) + 0x28));
    }
    if (((byte)in_x0[0x21] & 0x70) != 0) {
      lVar11 = *(long *)(in_x0 + 0x30);
      uVar9 = *(uint *)(in_x0 + 8);
      puVar16 = *(uint **)(lVar11 + 0x108);
      uVar13 = *puVar16;
      if ((uVar9 >> 0xc & 1) == 0) {
        *puVar16 = uVar13 & 0xffffff9f;
        uVar13 = *(uint *)(lVar11 + 0xe0) & 0xfffffdfb;
      }
      else {
        uVar14 = uVar13 & 0xffffff9f | 0x20;
        if ((uVar9 & 0x2000) != 0) {
          uVar14 = uVar13 | 0x60;
        }
        *puVar16 = uVar14;
        uVar13 = *(uint *)(lVar11 + 0xe0) & 0xfffffdff | 4;
        if ((uVar9 & 0x4000) != 0) {
          uVar13 = *(uint *)(lVar11 + 0xe0) | 0x204;
        }
      }
      *(uint *)(lVar11 + 0xe0) = uVar13;
    }
  }
  *(undefined4 *)(in_x0 + 0x20) = 0;
LAB_00995908:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


