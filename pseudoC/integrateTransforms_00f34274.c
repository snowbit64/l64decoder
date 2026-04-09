// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: integrateTransforms
// Entry Point: 00f34274
// Size: 1956 bytes
// Signature: undefined __thiscall integrateTransforms(btDiscreteDynamicsWorld * this, float param_1)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* btDiscreteDynamicsWorld::integrateTransforms(float) */

void __thiscall
btDiscreteDynamicsWorld::integrateTransforms(btDiscreteDynamicsWorld *this,float param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  btRigidBody *this_00;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined **local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined4 local_144;
  undefined local_138 [12];
  undefined2 local_12c;
  undefined2 local_12a;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 local_e8;
  btRigidBody *pbStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  btTransform abStack_c0 [48];
  float local_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  long local_80;
  
  uVar33 = uStack_8c._4_4_;
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  uVar6 = CProfileManager::Start_Profile("integrateTransforms");
  if (0 < *(int *)(this + 0x144)) {
    lVar12 = 0;
    do {
      this_00 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar12 * 8);
      *(undefined4 *)(this_00 + 0x114) = 0x3f800000;
      if ((*(int *)(this_00 + 0xec) != 2 && *(int *)(this_00 + 0xec) != 5) &&
         (((byte)this_00[0xe0] & 3) == 0)) {
        puVar11 = (undefined8 *)(this_00 + 8);
        btTransformUtil::integrateTransform
                  ((btTransform *)puVar11,(btVector3 *)(this_00 + 0x17c),
                   (btVector3 *)(this_00 + 0x18c),param_1,abStack_c0);
        if ((this[0x40] != (btDiscreteDynamicsWorld)0x0) &&
           ((fVar13 = *(float *)(this_00 + 0x11c) * *(float *)(this_00 + 0x11c), fVar13 != 0.0 &&
            (fVar15 = (float)uStack_8c - (float)*(undefined8 *)(this_00 + 0x3c),
            fVar16 = (float)((ulong)uStack_8c >> 0x20) -
                     (float)((ulong)*(undefined8 *)(this_00 + 0x3c) >> 0x20),
            fVar15 = (float)NEON_fmadd(local_90 - *(float *)(this_00 + 0x38),
                                       local_90 - *(float *)(this_00 + 0x38),fVar15 * fVar15),
            fVar13 < fVar15 + fVar16 * fVar16)))) {
          CProfileManager::Start_Profile("CCD motion clamping");
          if (*(int *)(*(long *)(this_00 + 200) + 8) < 0x14) {
            gNumClampedCcdMotions = gNumClampedCcdMotions + 1;
            local_d0 = (**(code **)(**(long **)(this + 0x60) + 0x48))();
            local_138._8_4_ = 1.0;
            uStack_120 = *(undefined8 *)(this_00 + 0x40);
            local_128 = *(undefined8 *)(this_00 + 0x38);
            local_e8 = 0;
            local_170 = 0;
            uStack_110 = CONCAT44(uStack_84,uVar33);
            local_154 = *(undefined4 *)(this_00 + 0x118);
            uStack_c8 = *(undefined8 *)(this + 0x28);
            uStack_188 = CONCAT44(uStack_84,uVar33);
            uStack_15c = 0x3f800000;
            local_164 = 0x3f8000003f800000;
            local_d8 = *(undefined4 *)(this + 0x54);
            local_168 = 0xffffffff;
            uStack_1a8 = *(undefined8 *)(this_00 + 0x20);
            local_1b0 = *(undefined8 *)(this_00 + 0x18);
            local_178 = 8;
            local_12c = *(undefined2 *)(*(long *)(this_00 + 0xc0) + 8);
            local_12a = *(undefined2 *)(*(long *)(this_00 + 0xc0) + 10);
            uStack_1b8 = *(undefined8 *)(this_00 + 0x10);
            local_1c0 = *puVar11;
            uStack_198 = *(undefined8 *)(this_00 + 0x30);
            local_1a0 = *(undefined8 *)(this_00 + 0x28);
            local_138._0_8_ = &PTR__ConvexResultCallback_01018bc0;
            local_180 = &PTR__btConvexShape_0101c5e8;
            local_144 = local_154;
            pbStack_e0 = this_00;
            btCollisionWorld::convexSweepTest
                      ((btCollisionWorld *)this,(btConvexShape *)&local_180,(btTransform *)puVar11,
                       (btTransform *)&local_1c0,(ConvexResultCallback *)local_138,0.0,false);
            if ((float)local_138._8_4_ < 1.0) {
              *(undefined4 *)(this_00 + 0x114) = local_138._8_4_;
              btTransformUtil::integrateTransform
                        ((btTransform *)puVar11,(btVector3 *)(this_00 + 0x17c),
                         (btVector3 *)(this_00 + 0x18c),(float)local_138._8_4_ * param_1,abStack_c0)
              ;
              *(undefined4 *)(this_00 + 0x114) = 0;
              uVar6 = btRigidBody::setCenterOfMassTransform(this_00,abStack_c0);
              puVar4 = CProfileManager::CurrentNode;
              iVar7 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
              *(int *)(CProfileManager::CurrentNode + 0x18) = iVar7;
              if ((iVar7 == 0) && (iVar7 = 0, *(int *)(puVar4 + 8) != 0)) {
                uVar5 = gettimeofday((timeval *)local_138,(__timezone_ptr_t)0x0);
                uVar6 = (ulong)uVar5;
                iVar7 = *(int *)(puVar4 + 0x18);
                uVar14 = NEON_fmadd((float)(unkuint9)
                                           (ulong)((CONCAT26(local_12a,
                                                             CONCAT24(local_12c,local_138._8_4_)) +
                                                   (local_138._0_8_ - *DAT_02125d68) * 1000000) -
                                                  (DAT_02125d68[1] + *(long *)(puVar4 + 0x10))),
                                    0x3a83126f,*(undefined4 *)(puVar4 + 0xc));
                *(undefined4 *)(puVar4 + 0xc) = uVar14;
              }
              if (iVar7 == 0) {
                CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
              }
              goto LAB_00f3434c;
            }
          }
          puVar4 = CProfileManager::CurrentNode;
          iVar7 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
          *(int *)(CProfileManager::CurrentNode + 0x18) = iVar7;
          if ((iVar7 == 0) && (*(int *)(puVar4 + 8) != 0)) {
            gettimeofday((timeval *)local_138,(__timezone_ptr_t)0x0);
            iVar7 = *(int *)(puVar4 + 0x18);
            uVar14 = NEON_fmadd((float)(unkuint9)
                                       (ulong)((CONCAT26(local_12a,
                                                         CONCAT24(local_12c,local_138._8_4_)) +
                                               (local_138._0_8_ - *DAT_02125d68) * 1000000) -
                                              (DAT_02125d68[1] + *(long *)(puVar4 + 0x10))),
                                0x3a83126f,*(undefined4 *)(puVar4 + 0xc));
            *(undefined4 *)(puVar4 + 0xc) = uVar14;
          }
          if (iVar7 == 0) {
            CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
          }
        }
        uVar6 = btRigidBody::setCenterOfMassTransform(this_00,abStack_c0);
      }
LAB_00f3434c:
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(this + 0x144));
  }
  if (this[0x17b] != (btDiscreteDynamicsWorld)0x0) {
    uVar6 = CProfileManager::Start_Profile("apply speculative contact restitution");
    iVar7 = *(int *)(this + 0x1ac);
    if (0 < iVar7) {
      lVar12 = 0;
      lVar8 = *(long *)(this + 0x1b8);
      do {
        lVar10 = *(long *)(lVar8 + lVar12 * 8);
        lVar9 = (long)*(int *)(lVar10 + 0x318);
        lVar1 = 0;
        if ((*(byte *)(*(long *)(lVar10 + 0x308) + 0x100) & 2) != 0) {
          lVar1 = *(long *)(lVar10 + 0x308);
        }
        lVar2 = 0;
        if ((*(byte *)(*(long *)(lVar10 + 0x310) + 0x100) & 2) != 0) {
          lVar2 = *(long *)(lVar10 + 0x310);
        }
        if (0 < *(int *)(lVar10 + 0x318)) {
          puVar11 = (undefined8 *)(lVar10 + 0x48);
          do {
            fVar13 = *(float *)(lVar2 + 0xf8) * *(float *)(lVar1 + 0xf8);
            if ((0.0 < fVar13) && (*(float *)((long)puVar11 + 0x3c) != 0.0)) {
              fVar20 = *(float *)(puVar11 + 1);
              fVar24 = *(float *)(lVar1 + 0x19c);
              fVar15 = *(float *)(puVar11 + -4);
              fVar16 = *(float *)((long)puVar11 + -0x1c);
              fVar13 = fVar13 * -*(float *)((long)puVar11 + 0x3c);
              fVar18 = *(float *)(lVar2 + 0x38);
              fVar17 = *(float *)(lVar2 + 0x3c);
              fVar22 = (float)*puVar11 * fVar13;
              fVar23 = (float)((ulong)*puVar11 >> 0x20) * fVar13;
              fVar19 = *(float *)(puVar11 + -3);
              fVar21 = *(float *)(lVar2 + 0x40);
              if (fVar24 != 0.0) {
                fVar27 = *(float *)(puVar11 + -1) - *(float *)(lVar1 + 0x40);
                fVar29 = (float)*(undefined8 *)(lVar1 + 0x1a0) * fVar22;
                fVar30 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1a0) >> 0x20) * fVar23;
                fVar25 = *(float *)(puVar11 + -2) - *(float *)(lVar1 + 0x38);
                fVar28 = *(float *)(lVar1 + 0x1a8) * fVar13 * fVar20;
                fVar31 = *(float *)((long)puVar11 + -0xc) - *(float *)(lVar1 + 0x3c);
                fVar32 = (float)NEON_fnmsub(fVar28,fVar31,fVar27 * fVar30);
                fVar27 = -(fVar28 * fVar25) + fVar27 * fVar29;
                fVar25 = -(fVar29 * fVar31) + fVar25 * fVar30;
                uVar26 = *(undefined8 *)(lVar1 + 0x17c);
                uVar33 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x170),fVar27,
                                    *(float *)(lVar1 + 0x16c) * fVar32);
                uVar14 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar25,uVar33);
                uVar33 = NEON_fmadd(fVar28,fVar24,*(undefined4 *)(lVar1 + 0x184));
                *(undefined8 *)(lVar1 + 0x17c) =
                     CONCAT44((float)((ulong)uVar26 >> 0x20) + fVar30 * fVar24,
                              (float)uVar26 + fVar29 * fVar24);
                uVar14 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar14,
                                    *(undefined4 *)(lVar1 + 0x194));
                *(undefined4 *)(lVar1 + 0x184) = uVar33;
                *(ulong *)(lVar1 + 0x18c) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x18c) >> 0x20) +
                              (*(float *)(lVar1 + 0x15c) * fVar32 +
                               *(float *)(lVar1 + 0x160) * fVar27 +
                              *(float *)(lVar1 + 0x164) * fVar25) *
                              (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                              (float)*(undefined8 *)(lVar1 + 0x18c) +
                              (*(float *)(lVar1 + 0x14c) * fVar32 +
                               *(float *)(lVar1 + 0x150) * fVar27 +
                              *(float *)(lVar1 + 0x154) * fVar25) *
                              (float)*(undefined8 *)(lVar1 + 0x278));
                *(undefined4 *)(lVar1 + 0x194) = uVar14;
              }
              fVar24 = *(float *)(lVar2 + 0x19c);
              if (fVar24 != 0.0) {
                fVar19 = fVar19 - fVar21;
                fVar15 = fVar15 - fVar18;
                fVar16 = fVar16 - fVar17;
                fVar21 = (float)*(undefined8 *)(lVar2 + 0x1a0) * -fVar22;
                fVar22 = (float)((ulong)*(undefined8 *)(lVar2 + 0x1a0) >> 0x20) * -fVar23;
                fVar18 = *(float *)(lVar2 + 0x1a8) * -(fVar13 * fVar20);
                fVar17 = (float)NEON_fnmsub(fVar18,fVar16,fVar19 * fVar22);
                fVar19 = -(fVar18 * fVar15) + fVar19 * fVar21;
                fVar13 = -(fVar21 * fVar16) + fVar15 * fVar22;
                uVar26 = *(undefined8 *)(lVar2 + 0x17c);
                uVar33 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x170),fVar19,
                                    *(float *)(lVar2 + 0x16c) * fVar17);
                uVar33 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x174),fVar13,uVar33);
                uVar14 = NEON_fmadd(fVar18,fVar24,*(undefined4 *)(lVar2 + 0x184));
                *(undefined8 *)(lVar2 + 0x17c) =
                     CONCAT44((float)((ulong)uVar26 >> 0x20) + fVar22 * fVar24,
                              (float)uVar26 + fVar21 * fVar24);
                *(undefined4 *)(lVar2 + 0x184) = uVar14;
                uVar33 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x280),uVar33,
                                    *(undefined4 *)(lVar2 + 0x194));
                *(ulong *)(lVar2 + 0x18c) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x18c) >> 0x20) +
                              (*(float *)(lVar2 + 0x15c) * fVar17 +
                               *(float *)(lVar2 + 0x160) * fVar19 +
                              *(float *)(lVar2 + 0x164) * fVar13) *
                              (float)((ulong)*(undefined8 *)(lVar2 + 0x278) >> 0x20),
                              (float)*(undefined8 *)(lVar2 + 0x18c) +
                              (*(float *)(lVar2 + 0x14c) * fVar17 +
                               *(float *)(lVar2 + 0x150) * fVar19 +
                              *(float *)(lVar2 + 0x154) * fVar13) *
                              (float)*(undefined8 *)(lVar2 + 0x278));
                *(undefined4 *)(lVar2 + 0x194) = uVar33;
              }
            }
            lVar9 = lVar9 + -1;
            puVar11 = puVar11 + 0x18;
          } while (lVar9 != 0);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar7);
    }
    puVar4 = CProfileManager::CurrentNode;
    iVar7 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
    *(int *)(CProfileManager::CurrentNode + 0x18) = iVar7;
    if ((iVar7 == 0) && (*(int *)(puVar4 + 8) != 0)) {
      uVar5 = gettimeofday((timeval *)local_138,(__timezone_ptr_t)0x0);
      uVar6 = (ulong)uVar5;
      iVar7 = *(int *)(puVar4 + 0x18);
      uVar33 = NEON_fmadd((float)(unkuint9)
                                 (ulong)((CONCAT26(local_12a,CONCAT24(local_12c,local_138._8_4_)) +
                                         (local_138._0_8_ - *DAT_02125d68) * 1000000) -
                                        (DAT_02125d68[1] + *(long *)(puVar4 + 0x10))),0x3a83126f,
                          *(undefined4 *)(puVar4 + 0xc));
      *(undefined4 *)(puVar4 + 0xc) = uVar33;
    }
    if (iVar7 == 0) {
      CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
    }
  }
  puVar4 = CProfileManager::CurrentNode;
  iVar7 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar7;
  if ((iVar7 == 0) && (*(int *)(puVar4 + 8) != 0)) {
    uVar5 = gettimeofday((timeval *)local_138,(__timezone_ptr_t)0x0);
    uVar6 = (ulong)uVar5;
    iVar7 = *(int *)(puVar4 + 0x18);
    uVar33 = NEON_fmadd((float)(unkuint9)
                               (ulong)((CONCAT26(local_12a,CONCAT24(local_12c,local_138._8_4_)) +
                                       (local_138._0_8_ - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar4 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar4 + 0xc));
    *(undefined4 *)(puVar4 + 0xc) = uVar33;
  }
  if (iVar7 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


