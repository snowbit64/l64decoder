// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ingestCookedData
// Entry Point: 0098d70c
// Size: 932 bytes
// Signature: undefined __thiscall ingestCookedData(Bt2PhysicsColShapeCache * this, Bt2PhysicsCookedDataSet * param_1, Geometry * param_2)


/* Bt2PhysicsColShapeCache::ingestCookedData(Bt2PhysicsCookedDataSet*, Geometry*) */

undefined4 __thiscall
Bt2PhysicsColShapeCache::ingestCookedData
          (Bt2PhysicsColShapeCache *this,Bt2PhysicsCookedDataSet *param_1,Geometry *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  short **ppsVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  btBvhTriangleMeshShape *pbVar12;
  undefined4 *puVar13;
  Logger *pLVar14;
  char *pcVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined4 *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  short *psVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  BtTriangleInfoMap *local_d0;
  btOptimizedBvh *local_c8;
  Bt2PhysicsMeshInterface *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  if ((*(Bt2PhysicsColShapeCache **)(param_1 + 0x20) == (Bt2PhysicsColShapeCache *)0x0) ||
     (*(Bt2PhysicsColShapeCache **)(param_1 + 0x20) == this)) {
    lVar23 = 0;
    uVar25 = 0;
    do {
      ppsVar4 = (short **)(param_1 + lVar23 * 0x10);
      uVar6 = *(uint *)(ppsVar4 + 1);
      if (uVar6 != 0) {
        if (lVar23 == 0) {
          psVar24 = *ppsVar4;
          if ((*psVar24 == 0x6d63) && (psVar24[1] == 4)) {
            uVar7 = *(uint *)(psVar24 + 2);
            uVar11 = (ulong)uVar7;
            if ((ulong)(uVar7 * 3) * 4 + 0x40 == (ulong)uVar6) {
              uStack_b8 = *(undefined8 *)(psVar24 + 10);
              local_c0 = *(Bt2PhysicsMeshInterface **)(psVar24 + 6);
              uStack_a8 = *(undefined8 *)(psVar24 + 0x12);
              uStack_b0 = *(undefined8 *)(psVar24 + 0xe);
              uStack_98 = *(undefined8 *)(psVar24 + 0x1a);
              local_a0 = *(undefined8 *)(psVar24 + 0x16);
              local_90 = *(undefined4 *)(psVar24 + 0x1e);
              uVar6 = *(uint *)(param_2 + 0x28);
              fVar36 = *(float *)(psVar24 + 4);
              puVar13 = (undefined4 *)btAlignedAllocInternal(uVar11 << 4,0x10);
              if (uVar7 != 0) {
                puVar3 = (undefined4 *)(psVar24 + 0x20);
                if (uVar7 < 4) {
LAB_0098d8d8:
                  uVar17 = 0;
                }
                else {
                  uVar21 = uVar11 - 1;
                  uVar17 = 0;
                  uVar19 = (uVar21 & 0xffffffff) + (uVar21 & 0xffffffff) * 2;
                  bVar9 = (uVar19 & 0xffffffff00000000) == 0;
                  uVar22 = (uint)uVar19;
                  if ((((uVar22 != 0xffffffff) && (bVar9)) && (uVar21 >> 0x20 == 0)) &&
                     ((uVar22 < 0xfffffffe && (bVar9)))) {
                    if ((puVar13 < psVar24 + uVar11 * 6 + 0x20) && (puVar3 < puVar13 + uVar11 * 4))
                    goto LAB_0098d8d8;
                    uVar19 = 0;
                    uVar17 = uVar11 & 0xfffffffc;
                    puVar20 = puVar13;
                    do {
                      uVar21 = uVar19 & 0xfffffffc;
                      uVar19 = uVar19 + 0xc;
                      puVar5 = puVar3 + uVar21;
                      uVar28 = puVar5[1];
                      uVar32 = puVar5[2];
                      uVar25 = puVar5[3];
                      uVar29 = puVar5[4];
                      uVar33 = puVar5[5];
                      uVar26 = puVar5[6];
                      uVar30 = puVar5[7];
                      uVar34 = puVar5[8];
                      uVar27 = puVar5[9];
                      uVar31 = puVar5[10];
                      uVar35 = puVar5[0xb];
                      *puVar20 = *puVar5;
                      puVar20[1] = uVar28;
                      puVar20[2] = uVar32;
                      puVar20[3] = 0;
                      puVar20[4] = uVar25;
                      puVar20[5] = uVar29;
                      puVar20[6] = uVar33;
                      puVar20[7] = 0;
                      puVar20[8] = uVar26;
                      puVar20[9] = uVar30;
                      puVar20[10] = uVar34;
                      puVar20[0xb] = 0;
                      puVar20[0xc] = uVar27;
                      puVar20[0xd] = uVar31;
                      puVar20[0xe] = uVar35;
                      puVar20[0xf] = 0;
                      puVar20 = puVar20 + 0x10;
                    } while ((ulong)(uVar7 >> 2) * 0xc - uVar19 != 0);
                    if (uVar17 == uVar11) goto LAB_0098d91c;
                  }
                }
                lVar18 = uVar11 - uVar17;
                uVar22 = (int)uVar17 * 3;
                puVar20 = puVar13 + uVar17 * 4 + 2;
                do {
                  uVar1 = uVar22 + 1;
                  lVar18 = lVar18 + -1;
                  puVar20[-2] = puVar3[uVar22];
                  uVar2 = uVar22 + 2;
                  uVar22 = uVar22 + 3;
                  puVar20[-1] = puVar3[uVar1];
                  uVar25 = puVar3[uVar2];
                  puVar20[1] = 0;
                  *puVar20 = uVar25;
                  puVar20 = puVar20 + 4;
                } while (lVar18 != 0);
              }
LAB_0098d91c:
              uVar16 = createAndCacheConvexColShape
                                 (this,(ulong)uVar6 | 0x100000000,uVar7,(btVector3 *)puVar13,fVar36,
                                  (VolumeInfo *)&local_c0);
              if (*(void **)param_1 != (void *)0x0) {
                operator_delete__(*(void **)param_1);
              }
              *(undefined8 *)param_1 = uVar16;
              uVar25 = 1;
              *(undefined4 *)(param_1 + 8) = 0;
              *(Bt2PhysicsColShapeCache **)(param_1 + 0x20) = this;
              goto LAB_0098d7d8;
            }
          }
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar10 != 0)) {
                    /* try { // try from 0098da30 to 0098da37 has its CatchHandler @ 0098dac8 */
            pLVar14 = (Logger *)operator_new(0x38);
                    /* try { // try from 0098da3c to 0098da3f has its CatchHandler @ 0098dab8 */
            Logger::Logger(pLVar14);
            LogManager::getInstance()::singletonLogManager = pLVar14;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          uVar16 = *(undefined8 *)(param_2 + 0x18);
          pcVar15 = "Warning: Invalid convex cooking data for \'%s\'.\n";
        }
        else {
          local_c8 = (btOptimizedBvh *)0x0;
          local_c0 = (Bt2PhysicsMeshInterface *)0x0;
          local_d0 = (BtTriangleInfoMap *)0x0;
          uVar11 = Bt2PhysicsSerialization::loadCookedTriangleMesh
                             ((uchar *)*ppsVar4,uVar6,&local_c0,&local_c8,&local_d0);
          if ((uVar11 & 1) != 0) {
            pbVar12 = (btBvhTriangleMeshShape *)
                      Bt2PhysicsCookingUtil::createTriangleColShape(local_c0,local_c8,local_d0);
            addTriangleColShapeToCache(this,(ulong)*(uint *)(param_2 + 0x28),pbVar12);
            if (*(void **)(param_1 + 0x10) != (void *)0x0) {
              operator_delete__(*(void **)(param_1 + 0x10));
            }
            *(btBvhTriangleMeshShape **)(param_1 + 0x10) = pbVar12;
            uVar25 = 1;
            *(undefined4 *)(param_1 + 0x18) = 0;
            *(Bt2PhysicsColShapeCache **)(param_1 + 0x20) = this;
            goto LAB_0098d7d8;
          }
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar10 != 0)) {
                    /* try { // try from 0098da74 to 0098da7b has its CatchHandler @ 0098dab4 */
            pLVar14 = (Logger *)operator_new(0x38);
                    /* try { // try from 0098da80 to 0098da83 has its CatchHandler @ 0098dab0 */
            Logger::Logger(pLVar14);
            LogManager::getInstance()::singletonLogManager = pLVar14;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          uVar16 = *(undefined8 *)(param_2 + 0x18);
          pcVar15 = "Warning: Invalid triangle cooking data for \'%s\'.\n";
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar15,uVar16);
      }
LAB_0098d7d8:
      lVar23 = lVar23 + 1;
    } while (lVar23 != 2);
  }
  else {
    uVar25 = 0;
  }
  if (*(long *)(lVar8 + 0x28) == local_80) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


