// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
// Entry Point: 008179ec
// Size: 2904 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ChunkedBitSquare * param_3, ParallelogramHelper * param_4, SetTypeProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ChunkedBitSquare, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>
   >(IDensityPixelSource*, ChunkedBitSquare*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ChunkedBitSquare *param_3,
               ParallelogramHelper *param_4,SetTypeProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  DensityMapFilter DVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  code **ppcVar25;
  long lVar26;
  Logger *this;
  uint uVar27;
  undefined4 *puVar28;
  ulong uVar29;
  long lVar30;
  uint *puVar31;
  ulong uVar32;
  long *plVar33;
  undefined2 uVar34;
  undefined8 uVar35;
  uint local_118;
  uint local_10c;
  uint local_fc;
  uint local_a0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  uVar13 = (**(code **)(*(long *)param_1 + 0x18))();
  local_98 = uVar13;
  uVar14 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar14;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar33 = *(long **)param_6;
  local_88 = (uint *)param_2;
  uVar15 = (**(code **)(*plVar33 + 0x18))(plVar33);
  uVar16 = (**(code **)(*plVar33 + 0x20))(plVar33);
  (**(code **)(*plVar33 + 0x30))(plVar33);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar6 = *(uint *)(param_6 + 0x10);
  uVar9 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar17 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar24 = *(int *)(param_6 + 8);
  uVar7 = *(uint *)(param_6 + 0xc);
  DVar8 = param_6[0x20];
  uVar10 = ~(-1 << (ulong)(uVar17 & 0x1f));
  uVar17 = *(uint *)(param_6 + 0x24);
  if ((uVar13 < uVar15) || (uVar14 < uVar16)) {
    if ((uVar15 < uVar13) || (uVar16 < uVar14)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar24 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar24 != 0
         )) {
                    /* try { // try from 00818500 to 00818507 has its CatchHandler @ 00818554 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 0081850c to 0081850f has its CatchHandler @ 00818544 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar15,(ulong)uVar16,(ulong)local_98,(ulong)local_94);
      bVar12 = false;
      goto LAB_008184bc;
    }
    uVar27 = 0;
    if (uVar13 != 0) {
      uVar27 = uVar15 / uVar13;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar16 / uVar14;
    }
    uVar35 = NEON_cnt((ulong)uVar27,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar27 & 0xffff0000) != 0;
      uVar14 = uVar27 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar27;
      }
      uVar18 = (uint)bVar12;
      uVar15 = uVar18 << 4 | 8;
      uVar16 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar15 = uVar18 << 4;
        uVar16 = uVar14;
      }
      uVar14 = uVar15 | 4;
      uVar18 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar14 = uVar15;
        uVar18 = uVar16;
      }
      uVar15 = uVar14 | 2;
      uVar16 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar15 = uVar14;
        uVar16 = uVar18;
      }
      local_10c = (uVar16 + uVar15) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar13,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar13 & 0xffff0000) != 0;
      uVar14 = uVar13 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar13;
      }
      uVar18 = (uint)bVar12;
      uVar15 = uVar18 << 4 | 8;
      uVar16 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar15 = uVar18 << 4;
        uVar16 = uVar14;
      }
      uVar14 = uVar15 | 4;
      uVar18 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar14 = uVar15;
        uVar18 = uVar16;
      }
      uVar15 = uVar14 | 2;
      uVar16 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar15 = uVar14;
        uVar16 = uVar18;
      }
      local_118 = (uVar16 + uVar15) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar14 = *(uint *)(param_4 + 0x48);
    uVar15 = *(uint *)(param_4 + 0x4c);
    if (uVar14 < uVar15) {
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar14);
        uVar15 = *(uint *)(param_4 + 0x58);
        if (uVar15 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar16 = 0;
            uVar18 = uVar15 << (ulong)(local_10c & 0x1f);
            do {
              uVar23 = 0;
              uVar29 = (ulong)*(uint *)(param_3 + 0x34);
              uVar4 = uVar16 + (uVar14 << (ulong)(local_118 & 0x1f));
              uVar3 = uVar18;
              do {
                uVar5 = uVar23 + uVar18;
                iVar19 = (uVar4 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar20 = (int)uVar29;
                ppcVar25 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar19 + (uVar5 >> 5)) * iVar20) * 8);
                uVar5 = uVar5 & 0x1f | (uVar4 & 0x1f) << 5;
                uVar21 = (**ppcVar25)(ppcVar25,uVar5,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar29 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar24 != 2) goto LAB_00818298;
LAB_008182b8:
                  puVar1 = local_88;
                  if ((DVar8 != (DensityMapFilter)0x0) ||
                     ((uVar17 != 0 && ((uVar21 >> (ulong)(uVar6 & 0x1f) & uVar9 & uVar17) == 0))))
                  goto LAB_008181c0;
                  uVar16 = local_88[0xd];
                  iVar19 = (uVar14 >> 5) << (ulong)(*local_88 & 0x1f);
                  ppcVar25 = *(code ***)
                              (*(long *)(local_88 + 10) +
                              (ulong)((iVar19 + (uVar15 >> 5)) * uVar16) * 8);
                  uVar18 = uVar15 & 0x1f | (uVar14 & 0x1f) << 5;
                  local_80 = uVar15;
                  uStack_7c = uVar14;
                  uVar23 = (**ppcVar25)(ppcVar25,uVar18,0,local_88[0xf]);
                  if (1 < puVar1[0xd]) {
                    puVar31 = puVar1 + 0x11;
                    uVar29 = 1;
                    do {
                      ppcVar25 = *(code ***)
                                  (*(long *)(puVar1 + 10) +
                                  (ulong)(uVar16 * (iVar19 + (uVar15 >> 5)) + (int)uVar29) * 8);
                      iVar20 = (**ppcVar25)(ppcVar25,uVar18,0,*puVar31);
                      puVar2 = puVar31 + -1;
                      uVar29 = uVar29 + 1;
                      puVar31 = puVar31 + 2;
                      uVar23 = iVar20 << (ulong)(*puVar2 & 0x1f) | uVar23;
                    } while (uVar29 < puVar1[0xd]);
                  }
                  local_78 = uVar23;
                  DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>::process
                            ((SetTypeProcessor<ChunkedBitSquare> *)param_5,(HelperSource *)&local_98
                            );
                  uVar16 = local_78;
                  puVar1 = local_88;
                  if (uVar23 != local_78) {
                    uVar18 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                    uVar23 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                             local_88[0xd];
                    lVar30 = (ulong)uVar23 * 8;
                    lVar26 = *(long *)(*(long *)(local_88 + 10) + lVar30);
                    uVar35 = (**(code **)(lVar26 + 8))(lVar26,uVar18,0,local_88[0xf],local_78);
                    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar30) = uVar35;
                    if (1 < puVar1[0xd]) {
                      puVar31 = puVar1 + 0x11;
                      uVar29 = 1;
                      do {
                        lVar30 = (ulong)(uVar23 + (int)uVar29) * 8;
                        lVar26 = *(long *)(*(long *)(puVar1 + 10) + lVar30);
                        uVar35 = (**(code **)(lVar26 + 8))
                                           (lVar26,uVar18,0,*puVar31,
                                            uVar16 >> (ulong)(puVar31[-1] & 0x1f));
                        uVar29 = uVar29 + 1;
                        puVar31 = puVar31 + 2;
                        *(undefined8 *)(*(long *)(puVar1 + 10) + lVar30) = uVar35;
                      } while (uVar29 < puVar1[0xd]);
                    }
                  }
                  goto LAB_00818144;
                }
                uVar32 = 1;
                puVar28 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar25 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar20 * (iVar19 + (uVar3 >> 5)) + (int)uVar32) * 8);
                  iVar22 = (**ppcVar25)(ppcVar25,uVar5,0,*puVar28);
                  puVar1 = puVar28 + -1;
                  uVar32 = uVar32 + 1;
                  uVar29 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar28 = puVar28 + 2;
                  uVar21 = iVar22 << (ulong)(*puVar1 & 0x1f) | uVar21;
                } while (uVar32 < uVar29);
                if (iVar24 == 2) goto LAB_008182b8;
LAB_00818298:
                if ((iVar24 == 0) != ((uVar21 & uVar10) != uVar7)) goto LAB_008182b8;
LAB_008181c0:
                uVar23 = uVar23 + 1;
                uVar3 = uVar3 + 1;
              } while (uVar23 != uVar27);
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar13);
            *(int *)param_5 = *(int *)param_5 + 1;
LAB_00818144:
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(param_4 + 0x5c));
        }
        uVar15 = *(uint *)(param_4 + 0x4c);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
  }
  else {
    uVar27 = 0;
    if (uVar15 != 0) {
      uVar27 = uVar13 / uVar15;
    }
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = uVar14 / uVar16;
    }
    uVar35 = NEON_cnt((ulong)uVar27,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar27 & 0xffff0000) != 0;
      uVar14 = uVar27 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar27;
      }
      uVar27 = (uint)bVar12;
      uVar15 = uVar27 << 4 | 8;
      uVar16 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar15 = uVar27 << 4;
        uVar16 = uVar14;
      }
      uVar14 = uVar15 | 4;
      uVar27 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar14 = uVar15;
        uVar27 = uVar16;
      }
      uVar15 = uVar14 | 2;
      uVar16 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar15 = uVar14;
        uVar16 = uVar27;
      }
      local_a0 = (uVar16 + uVar15) - 1;
    }
    else {
      local_a0 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar13,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar13 & 0xffff0000) != 0;
      uVar14 = uVar13 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar13;
      }
      uVar16 = (uint)bVar12;
      uVar13 = uVar16 << 4 | 8;
      uVar15 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar13 = uVar16 << 4;
        uVar15 = uVar14;
      }
      uVar14 = uVar13 | 4;
      uVar16 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar14 = uVar13;
        uVar16 = uVar15;
      }
      uVar13 = uVar14 | 2;
      uVar15 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar13 = uVar14;
        uVar15 = uVar16;
      }
      local_fc = (uVar15 + uVar13) - 1;
    }
    else {
      local_fc = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    uVar15 = *(uint *)(param_4 + 0x4c);
    if (uVar13 < uVar15) {
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar14 = *(uint *)(param_4 + 0x58);
        if (uVar14 < *(uint *)(param_4 + 0x5c)) {
          uVar15 = uVar13 >> (ulong)(local_fc & 0x1f);
          do {
            uVar16 = uVar14 >> (ulong)(local_a0 & 0x1f);
            uVar27 = (((uVar15 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar16 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar25 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar27 * 8);
            uVar16 = uVar16 & 0x1f | (uVar15 & 0x1f) << 5;
            uVar18 = (**ppcVar25)(ppcVar25,uVar16,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar29 = 1;
              puVar28 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar25 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar27 + (int)uVar29) * 8);
                iVar19 = (**ppcVar25)(ppcVar25,uVar16,0,*puVar28);
                puVar1 = puVar28 + -1;
                uVar29 = uVar29 + 1;
                puVar28 = puVar28 + 2;
                uVar18 = iVar19 << (ulong)(*puVar1 & 0x1f) | uVar18;
              } while (uVar29 < *(uint *)(param_3 + 0x34));
            }
            puVar1 = local_88;
            if ((((iVar24 == 2) || ((iVar24 == 0) != ((uVar18 & uVar10) != uVar7))) &&
                (DVar8 == (DensityMapFilter)0x0)) &&
               ((uVar17 == 0 || ((uVar18 >> (ulong)(uVar6 & 0x1f) & uVar9 & uVar17) != 0)))) {
              uVar16 = local_88[0xd];
              iVar19 = (uVar13 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar25 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar19 + (uVar14 >> 5)) * uVar16) * 8
                          );
              uVar27 = uVar14 & 0x1f | (uVar13 & 0x1f) << 5;
              local_80 = uVar14;
              uStack_7c = uVar13;
              uVar18 = (**ppcVar25)(ppcVar25,uVar27,0,local_88[0xf]);
              if (1 < puVar1[0xd]) {
                uVar29 = 1;
                puVar31 = puVar1 + 0x11;
                do {
                  ppcVar25 = *(code ***)
                              (*(long *)(puVar1 + 10) +
                              (ulong)(uVar16 * (iVar19 + (uVar14 >> 5)) + (int)uVar29) * 8);
                  iVar20 = (**ppcVar25)(ppcVar25,uVar27,0,*puVar31);
                  puVar2 = puVar31 + -1;
                  uVar29 = uVar29 + 1;
                  puVar31 = puVar31 + 2;
                  uVar18 = iVar20 << (ulong)(*puVar2 & 0x1f) | uVar18;
                } while (uVar29 < puVar1[0xd]);
              }
              local_78 = uVar18;
              DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>::process
                        ((SetTypeProcessor<ChunkedBitSquare> *)param_5,(HelperSource *)&local_98);
              uVar16 = local_78;
              puVar1 = local_88;
              if (uVar18 != local_78) {
                uVar27 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar18 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar30 = (ulong)uVar18 * 8;
                lVar26 = *(long *)(*(long *)(local_88 + 10) + lVar30);
                uVar35 = (**(code **)(lVar26 + 8))(lVar26,uVar27,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar1 + 10) + lVar30) = uVar35;
                if (1 < puVar1[0xd]) {
                  puVar31 = puVar1 + 0x11;
                  uVar29 = 1;
                  do {
                    lVar30 = (ulong)(uVar18 + (int)uVar29) * 8;
                    lVar26 = *(long *)(*(long *)(puVar1 + 10) + lVar30);
                    uVar35 = (**(code **)(lVar26 + 8))
                                       (lVar26,uVar27,0,*puVar31,
                                        uVar16 >> (ulong)(puVar31[-1] & 0x1f));
                    uVar29 = uVar29 + 1;
                    puVar31 = puVar31 + 2;
                    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar30) = uVar35;
                  } while (uVar29 < puVar1[0xd]);
                }
              }
            }
            else {
              *(int *)param_5 = *(int *)param_5 + 1;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(param_4 + 0x5c));
        }
        uVar15 = *(uint *)(param_4 + 0x4c);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar15);
    }
  }
  bVar12 = true;
  if (param_5[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_5 + 0x48),*(uint *)(param_4 + 0x50),*(uint *)(param_4 + 0x48),
               *(uint *)(param_4 + 0x54),uVar15,*(uint *)(param_5 + 0x14),*(uint *)(param_5 + 0x18),
               *(uint *)(param_5 + 0x60),(bool)param_5[0x5d],true,true);
  }
LAB_008184bc:
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return bVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


