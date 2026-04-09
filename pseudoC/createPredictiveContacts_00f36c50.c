// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createPredictiveContacts
// Entry Point: 00f36c50
// Size: 2052 bytes
// Signature: undefined __thiscall createPredictiveContacts(btDiscreteDynamicsWorld * this, float param_1)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* btDiscreteDynamicsWorld::createPredictiveContacts(float) */

void __thiscall
btDiscreteDynamicsWorld::createPredictiveContacts(btDiscreteDynamicsWorld *this,float param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  btPersistentManifold *pbVar8;
  btPersistentManifold *this_00;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  timeval local_2c0;
  undefined8 local_2b0;
  float local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined local_248;
  undefined7 uStack_247;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined **local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined4 local_18c;
  undefined4 local_17c;
  undefined **local_170;
  float local_168;
  undefined2 local_164;
  undefined2 local_162;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_140;
  float fStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long local_120;
  long local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  btTransform abStack_f8 [48];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  long local_b8;
  
  lVar5 = tpidr_el0;
  local_b8 = *(long *)(lVar5 + 0x28);
  CProfileManager::Start_Profile("createPredictiveContacts");
  CProfileManager::Start_Profile("release predictive contact manifolds");
  if (0 < *(int *)(this + 0x1ac)) {
    lVar12 = 0;
    do {
      (**(code **)(**(long **)(this + 0x28) + 0x20))
                (*(long **)(this + 0x28),*(undefined8 *)(*(long *)(this + 0x1b8) + lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(this + 0x1ac));
  }
  pbVar8 = *(btPersistentManifold **)(this + 0x1b8);
  puVar2 = (undefined8 *)(this + 0x1ac);
  if ((pbVar8 != (btPersistentManifold *)0x0) && (this[0x1c0] != (btDiscreteDynamicsWorld)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    pbVar8 = (btPersistentManifold *)(*(code *)PTR_FUN_01048e40)();
  }
  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x1b8) = 0;
  *puVar2 = 0;
  puVar6 = CProfileManager::CurrentNode;
  iVar10 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar10;
  if ((iVar10 == 0) && (*(int *)(puVar6 + 8) != 0)) {
    uVar7 = gettimeofday(&local_2c0,(__timezone_ptr_t)0x0);
    pbVar8 = (btPersistentManifold *)(ulong)uVar7;
    iVar10 = *(int *)(puVar6 + 0x18);
    uVar14 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_2c0.tv_usec +
                                       (local_2c0.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar6 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar6 + 0xc));
    *(undefined4 *)(puVar6 + 0xc) = uVar14;
  }
  if (iVar10 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (0 < *(int *)(this + 0x144)) {
    lVar12 = 0;
    do {
      lVar13 = *(long *)(*(long *)(this + 0x150) + lVar12 * 8);
      *(undefined4 *)(lVar13 + 0x114) = 0x3f800000;
      if ((*(int *)(lVar13 + 0xec) != 2 && *(int *)(lVar13 + 0xec) != 5) &&
         ((*(byte *)(lVar13 + 0xe0) & 3) == 0)) {
        puVar3 = (undefined8 *)(lVar13 + 8);
        pbVar8 = (btPersistentManifold *)
                 btTransformUtil::integrateTransform
                           ((btTransform *)puVar3,(btVector3 *)(lVar13 + 0x17c),
                            (btVector3 *)(lVar13 + 0x18c),param_1,abStack_f8);
        if ((this[0x40] != (btDiscreteDynamicsWorld)0x0) &&
           ((fVar15 = *(float *)(lVar13 + 0x11c) * *(float *)(lVar13 + 0x11c), fVar15 != 0.0 &&
            (fVar18 = fStack_c4 - (float)*(undefined8 *)(lVar13 + 0x3c),
            fVar19 = fStack_c0 - (float)((ulong)*(undefined8 *)(lVar13 + 0x3c) >> 0x20),
            fVar20 = local_c8 - *(float *)(lVar13 + 0x38),
            fVar18 = (float)NEON_fmadd(fVar20,fVar20,fVar18 * fVar18),
            fVar15 < fVar18 + fVar19 * fVar19)))) {
          pbVar8 = (btPersistentManifold *)
                   CProfileManager::Start_Profile("predictive convexSweepTest");
          if (*(int *)(*(long *)(lVar13 + 200) + 8) < 0x14) {
            gNumClampedCcdMotions = gNumClampedCcdMotions + 1;
            local_108 = (**(code **)(**(long **)(this + 0x60) + 0x48))();
            local_168 = 1.0;
            uStack_158 = *(undefined8 *)(lVar13 + 0x40);
            local_160 = *(undefined8 *)(lVar13 + 0x38);
            local_120 = 0;
            local_1a8 = 0;
            local_18c = *(undefined4 *)(lVar13 + 0x118);
            local_100 = *(undefined8 *)(this + 0x28);
            uStack_194 = 0x3f800000;
            local_19c = 0x3f8000003f800000;
            local_110 = *(undefined4 *)(this + 0x54);
            local_1a0 = 0xffffffff;
            uStack_1e8 = *(undefined8 *)(lVar13 + 0x20);
            local_1f0 = *(undefined8 *)(lVar13 + 0x18);
            local_1b0 = 8;
            local_164 = *(undefined2 *)(*(long *)(lVar13 + 0xc0) + 8);
            local_162 = *(undefined2 *)(*(long *)(lVar13 + 0xc0) + 10);
            uStack_1f8 = *(undefined8 *)(lVar13 + 0x10);
            local_200 = *puVar3;
            uStack_1d8 = *(undefined8 *)(lVar13 + 0x30);
            local_1e0 = *(undefined8 *)(lVar13 + 0x28);
            local_170 = &PTR__ConvexResultCallback_01018bc0;
            local_1b8 = &PTR__btConvexShape_0101c5e8;
            local_17c = local_18c;
            local_118 = lVar13;
            pbVar8 = (btPersistentManifold *)
                     btCollisionWorld::convexSweepTest
                               ((btCollisionWorld *)this,(btConvexShape *)&local_1b8,
                                (btTransform *)puVar3,(btTransform *)&local_200,
                                (ConvexResultCallback *)&local_170,0.0,false);
            fVar21 = fStack_c0;
            fVar16 = fStack_c4;
            fVar20 = local_c8;
            uVar14 = uStack_138;
            fVar19 = fStack_13c;
            fVar18 = local_140;
            fVar15 = local_168;
            if (local_168 < 1.0) {
              uVar22 = *(undefined8 *)(lVar13 + 0x38);
              fVar23 = *(float *)(lVar13 + 0x40);
              this_00 = (btPersistentManifold *)
                        (**(code **)(**(long **)(this + 0x28) + 0x18))
                                  (*(long **)(this + 0x28),lVar13,local_120);
              uVar7 = *(uint *)(this + 0x1ac);
              pbVar8 = this_00;
              if (uVar7 == *(uint *)(this + 0x1b0)) {
                uVar4 = uVar7 << 1;
                if (uVar7 == 0) {
                  uVar4 = 1;
                }
                if ((int)uVar7 < (int)uVar4) {
                  if (uVar4 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    lVar9 = (*(code *)PTR_FUN_01048e38)
                                      (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar4 << 3,0x10);
                    uVar7 = *(uint *)puVar2;
                  }
                  if (0 < (int)uVar7) {
                    lVar11 = 0;
                    do {
                      *(undefined8 *)(lVar9 + lVar11) =
                           *(undefined8 *)(*(long *)(this + 0x1b8) + lVar11);
                      lVar11 = lVar11 + 8;
                    } while ((ulong)uVar7 * 8 - lVar11 != 0);
                  }
                  pbVar8 = *(btPersistentManifold **)(this + 0x1b8);
                  if ((pbVar8 != (btPersistentManifold *)0x0) &&
                     (this[0x1c0] != (btDiscreteDynamicsWorld)0x0)) {
                    gNumAlignedFree = gNumAlignedFree + 1;
                    pbVar8 = (btPersistentManifold *)(*(code *)PTR_FUN_01048e40)();
                    uVar7 = *(uint *)puVar2;
                  }
                  *(long *)(this + 0x1b8) = lVar9;
                  *(uint *)(this + 0x1b0) = uVar4;
                  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
                }
              }
              lVar9 = local_120;
              local_2c0.tv_sec = 0;
              local_2c0.tv_usec = 0;
              local_2a4 = 0;
              *(btPersistentManifold **)(*(long *)(this + 0x1b8) + (long)(int)uVar7 * 8) = this_00;
              fVar20 = (fVar20 - (float)uVar22) * fVar15;
              fVar16 = (fVar16 - (float)((ulong)uVar22 >> 0x20)) * fVar15;
              *(uint *)(this + 0x1ac) = uVar7 + 1;
              fVar15 = (fVar21 - fVar23) * fVar15;
              local_268 = 0;
              fVar27 = (float)*(undefined8 *)(lVar13 + 0x38) + fVar20;
              fVar28 = (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20) + fVar16;
              fVar25 = *(float *)(local_120 + 0x3c);
              fVar29 = *(float *)(lVar13 + 0x40) + fVar15;
              fVar21 = (float)*(undefined8 *)(local_120 + 0x18);
              fVar23 = (float)((ulong)*(undefined8 *)(local_120 + 0x18) >> 0x20);
              fVar24 = fVar27 - *(float *)(local_120 + 0x38);
              fVar26 = *(float *)(local_120 + 0x40);
              local_270 = NEON_fnmadd(uVar14,fVar15,-(fVar18 * fVar20 + fVar19 * fVar16));
              fVar18 = (float)*(undefined8 *)(local_120 + 0x28);
              fVar19 = (float)((ulong)*(undefined8 *)(local_120 + 0x28) >> 0x20);
              uVar14 = NEON_fmadd(*(undefined4 *)(local_120 + 0x30),fVar29,
                                  *(float *)(local_120 + 0x20) * fVar28);
              local_26c = 0;
              fVar15 = (float)NEON_fmadd(fVar26,*(undefined4 *)(local_120 + 0x30),
                                         fVar25 * *(float *)(local_120 + 0x20));
              local_250 = 0;
              local_2a8 = (float)NEON_fmadd(fVar24,*(undefined4 *)(local_120 + 0x10),uVar14);
              uVar7 = *(uint *)(this_00 + 0x318);
              local_248 = 0;
              uStack_278 = CONCAT44(uStack_134,uStack_138);
              local_280 = CONCAT44(fStack_13c,local_140);
              local_2a8 = local_2a8 - fVar15;
              local_2b0 = CONCAT44((fVar23 * fVar28 + fVar19 * fVar29 +
                                   (float)((ulong)*(undefined8 *)(local_120 + 8) >> 0x20) * fVar24)
                                   - (fVar23 * fVar25 + fVar19 * fVar26),
                                   (fVar21 * fVar28 + fVar18 * fVar29 +
                                   (float)*(undefined8 *)(local_120 + 8) * fVar24) -
                                   (fVar21 * fVar25 + fVar18 * fVar26));
              if (uVar7 == 4) {
                uVar7 = btPersistentManifold::sortCachedPoints
                                  (this_00,(btManifoldPoint *)&local_2c0);
                pbVar8 = *(btPersistentManifold **)(this_00 + (long)(int)uVar7 * 0xc0 + 0x78);
                if ((pbVar8 != (btPersistentManifold *)0x0) &&
                   (gContactDestroyedCallback != (code *)0x0)) {
                  pbVar8 = (btPersistentManifold *)(*gContactDestroyedCallback)();
                  *(btPersistentManifold **)(this_00 + (long)(int)uVar7 * 0xc0 + 0x78) =
                       (btPersistentManifold *)0x0;
                  lVar9 = local_120;
                }
              }
              else {
                *(uint *)(this_00 + 0x318) = uVar7 + 1;
              }
              uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x70) = uStack_258;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x68) = local_260;
              *(ulong *)(this_00 + (ulong)uVar7 * 0xc0 + 0x80) = CONCAT71(uStack_247,local_248);
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x78) = local_250;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x50) = uStack_278;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x48) = local_280;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x60) = local_268;
              *(ulong *)(this_00 + (ulong)uVar7 * 0xc0 + 0x58) = CONCAT44(local_26c,local_270);
              *(undefined4 *)(this_00 + (ulong)uVar7 * 0xc0 + 100) = 0;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0xb0) = uStack_218;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0xa8) = local_220;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0xc0) = uStack_208;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0xb8) = uStack_210;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x90) = uStack_238;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x88) = uStack_240;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0xa0) = uStack_228;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x98) = uStack_230;
              *(__suseconds_t *)(this_00 + (ulong)uVar7 * 0xc0 + 0x10) = local_2c0.tv_usec;
              *(__time_t *)(this_00 + (ulong)uVar7 * 0xc0 + 8) = local_2c0.tv_sec;
              *(ulong *)(this_00 + (ulong)uVar7 * 0xc0 + 0x20) = CONCAT44(local_2a4,local_2a8);
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x18) = local_2b0;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x30) = uStack_298;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x28) = local_2a0;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x40) = uStack_288;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x38) = uStack_290;
              fVar15 = *(float *)(lVar9 + 0xf4) * *(float *)(lVar13 + 0xf4);
              if (fVar15 <= -10.0) {
                fVar15 = -10.0;
              }
              uVar14 = NEON_fminnm(fVar15,0x41200000);
              *(undefined4 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x5c) = uVar14;
              uVar17 = *(undefined8 *)(lVar13 + 0x40);
              uVar22 = *(undefined8 *)(lVar13 + 0x38);
              *(ulong *)(this_00 + (ulong)uVar7 * 0xc0 + 0x28) = CONCAT44(fVar28,fVar27);
              *(float *)(this_00 + (ulong)uVar7 * 0xc0 + 0x30) = fVar29;
              *(undefined4 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x34) = 0;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x40) = uVar17;
              *(undefined8 *)(this_00 + (ulong)uVar7 * 0xc0 + 0x38) = uVar22;
            }
          }
          puVar6 = CProfileManager::CurrentNode;
          iVar10 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
          *(int *)(CProfileManager::CurrentNode + 0x18) = iVar10;
          if ((iVar10 == 0) && (*(int *)(puVar6 + 8) != 0)) {
            uVar7 = gettimeofday(&local_2c0,(__timezone_ptr_t)0x0);
            pbVar8 = (btPersistentManifold *)(ulong)uVar7;
            iVar10 = *(int *)(puVar6 + 0x18);
            uVar14 = NEON_fmadd((float)(unkuint9)
                                       (ulong)((local_2c0.tv_usec +
                                               (local_2c0.tv_sec - *DAT_02125d68) * 1000000) -
                                              (DAT_02125d68[1] + *(long *)(puVar6 + 0x10))),
                                0x3a83126f,*(undefined4 *)(puVar6 + 0xc));
            *(undefined4 *)(puVar6 + 0xc) = uVar14;
          }
          if (iVar10 == 0) {
            CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(this + 0x144));
  }
  puVar6 = CProfileManager::CurrentNode;
  piVar1 = (int *)(CProfileManager::CurrentNode + 8);
  iVar10 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar10;
  if (iVar10 == 0 && *piVar1 != 0) {
    uVar7 = gettimeofday(&local_2c0,(__timezone_ptr_t)0x0);
    pbVar8 = (btPersistentManifold *)(ulong)uVar7;
    iVar10 = *(int *)(puVar6 + 0x18);
    uVar14 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_2c0.tv_usec +
                                       (local_2c0.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar6 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar6 + 0xc));
    *(undefined4 *)(puVar6 + 0xc) = uVar14;
  }
  if (iVar10 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar5 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar8);
}


