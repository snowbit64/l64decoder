// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 00801f5c
// Size: 2752 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, ParallelogramHelper * param_4, AddDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ChunkedBitSquare, BitVector,
   ParallelogramHelper, DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>
   >(IDensityPixelSource*, ChunkedBitSquare*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               ParallelogramHelper *param_4,AddDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  DensityMapFilter DVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  code **ppcVar23;
  Logger *this;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  uint *puVar30;
  long *plVar31;
  undefined2 uVar32;
  undefined8 uVar33;
  uint local_fc;
  uint local_ec;
  uint local_e4;
  uint local_d8;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  uVar13 = (**(code **)(*(long *)param_1 + 0x18))();
  local_98 = uVar13;
  uVar14 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar14;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar31 = *(long **)param_6;
  local_88 = (uint *)param_2;
  uVar15 = (**(code **)(*plVar31 + 0x18))(plVar31);
  uVar16 = (**(code **)(*plVar31 + 0x20))(plVar31);
  uVar17 = (**(code **)(*plVar31 + 0x30))(plVar31);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar4 = *(uint *)(param_6 + 0x10);
  uVar8 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar18 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar22 = *(int *)(param_6 + 8);
  uVar5 = *(uint *)(param_6 + 0xc);
  DVar6 = param_6[0x20];
  uVar9 = ~(-1 << (ulong)(uVar18 & 0x1f));
  uVar18 = *(uint *)(param_6 + 0x24);
  if ((uVar13 < uVar15) || (uVar14 < uVar16)) {
    if ((uVar15 < uVar13) || (uVar16 < uVar14)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar22 != 0
         )) {
                    /* try { // try from 008029d8 to 008029df has its CatchHandler @ 00802a2c */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 008029e4 to 008029e7 has its CatchHandler @ 00802a1c */
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
      goto LAB_00802990;
    }
    uVar25 = 0;
    if (uVar14 != 0) {
      uVar25 = uVar16 / uVar14;
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = uVar15 / uVar13;
    }
    uVar33 = NEON_cnt((ulong)uVar14,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar12 = (uVar14 & 0xffff0000) != 0;
      uVar13 = uVar14 >> 0x10;
      if (!bVar12) {
        uVar13 = uVar14;
      }
      uVar27 = (uint)bVar12;
      uVar16 = uVar27 << 4 | 8;
      uVar19 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar27 << 4;
        uVar19 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar27 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar13 = uVar16;
        uVar27 = uVar19;
      }
      uVar16 = uVar13 | 2;
      uVar19 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar16 = uVar13;
        uVar19 = uVar27;
      }
      local_e4 = (uVar19 + uVar16) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar25,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar12 = (uVar25 & 0xffff0000) != 0;
      uVar13 = uVar25 >> 0x10;
      if (!bVar12) {
        uVar13 = uVar25;
      }
      uVar27 = (uint)bVar12;
      uVar16 = uVar27 << 4 | 8;
      uVar19 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar27 << 4;
        uVar19 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar27 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar13 = uVar16;
        uVar27 = uVar19;
      }
      uVar16 = uVar13 | 2;
      uVar19 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar16 = uVar13;
        uVar19 = uVar27;
      }
      local_fc = (uVar19 + uVar16) - 1;
    }
    else {
      local_fc = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    uVar16 = *(uint *)(param_4 + 0x4c);
    if (uVar13 < uVar16) {
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar16 = *(uint *)(param_4 + 0x58);
        if (uVar16 < *(uint *)(param_4 + 0x5c)) {
LAB_008026c8:
          puVar11 = local_88;
          uVar19 = 0;
          uVar27 = uVar17 * (uVar15 * (uVar13 << (ulong)(local_fc & 0x1f)) +
                            (uVar16 << (ulong)(local_e4 & 0x1f)));
          lVar24 = *(long *)param_3;
LAB_00802714:
          uVar21 = 0;
          uVar3 = uVar27;
LAB_00802734:
          uVar26 = (ulong)(uVar3 >> 3) & 0xffff;
          lVar28 = *(long *)(lVar24 + (ulong)(uVar3 >> 0x13) * 8);
          if ((uint)uVar26 < 0xfffd) {
            uVar29 = *(uint *)(lVar28 + uVar26);
          }
          else {
            uVar29 = (uVar3 >> 3) + 1;
            uVar2 = (uVar3 >> 3) + 2;
            uVar29 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar24 + (ulong)(uVar2 >> 0x10) * 8) +
                                     ((ulong)uVar2 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar24 + (ulong)(uVar29 >> 0x10) * 8) +
                                              ((ulong)uVar29 & 0xffff)),
                                             *(undefined *)(lVar28 + uVar26)));
          }
          uVar29 = uVar29 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
          if ((((iVar22 != 2) && ((iVar22 == 0) == ((uVar29 & uVar9) != uVar5))) ||
              (DVar6 != (DensityMapFilter)0x0)) ||
             ((uVar18 != 0 && ((uVar29 >> (ulong)(uVar4 & 0x1f) & uVar8 & uVar18) == 0))))
          goto LAB_00802724;
          uVar19 = local_88[0xd];
          iVar7 = (uVar13 >> 5) << (ulong)(*local_88 & 0x1f);
          ppcVar23 = *(code ***)
                      (*(long *)(local_88 + 10) + (ulong)((iVar7 + (uVar16 >> 5)) * uVar19) * 8);
          uVar27 = uVar16 & 0x1f | (uVar13 & 0x1f) << 5;
          local_80 = uVar16;
          uStack_7c = uVar13;
          uVar21 = (**ppcVar23)(ppcVar23,uVar27,0,local_88[0xf]);
          if (1 < puVar11[0xd]) {
            uVar26 = 1;
            puVar30 = puVar11 + 0x11;
            do {
              ppcVar23 = *(code ***)
                          (*(long *)(puVar11 + 10) +
                          (ulong)(uVar19 * (iVar7 + (uVar16 >> 5)) + (int)uVar26) * 8);
              iVar20 = (**ppcVar23)(ppcVar23,uVar27,0,*puVar30);
              puVar1 = puVar30 + -1;
              uVar26 = uVar26 + 1;
              puVar30 = puVar30 + 2;
              uVar21 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar21;
            } while (uVar26 < puVar11[0xd]);
          }
          local_78 = uVar21;
          DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
                    ((AddDensityProcessor<ChunkedBitSquare,true> *)param_5,(HelperSource *)&local_98
                    );
          uVar19 = local_78;
          puVar11 = local_88;
          if (uVar21 != local_78) {
            uVar27 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
            uVar21 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                     local_88[0xd];
            lVar28 = (ulong)uVar21 * 8;
            lVar24 = *(long *)(*(long *)(local_88 + 10) + lVar28);
            uVar33 = (**(code **)(lVar24 + 8))(lVar24,uVar27,0,local_88[0xf],local_78);
            *(undefined8 *)(*(long *)(puVar11 + 10) + lVar28) = uVar33;
            if (1 < puVar11[0xd]) {
              puVar30 = puVar11 + 0x11;
              uVar26 = 1;
              do {
                lVar28 = (ulong)(uVar21 + (int)uVar26) * 8;
                lVar24 = *(long *)(*(long *)(puVar11 + 10) + lVar28);
                uVar33 = (**(code **)(lVar24 + 8))
                                   (lVar24,uVar27,0,*puVar30,uVar19 >> (ulong)(puVar30[-1] & 0x1f));
                uVar26 = uVar26 + 1;
                puVar30 = puVar30 + 2;
                *(undefined8 *)(*(long *)(puVar11 + 10) + lVar28) = uVar33;
              } while (uVar26 < puVar11[0xd]);
            }
          }
          goto LAB_008026a0;
        }
LAB_00802648:
        uVar16 = *(uint *)(param_4 + 0x4c);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar16);
    }
  }
  else {
    uVar25 = 0;
    if (uVar15 != 0) {
      uVar25 = uVar13 / uVar15;
    }
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = uVar14 / uVar16;
    }
    uVar33 = NEON_cnt((ulong)uVar25,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar12 = (uVar25 & 0xffff0000) != 0;
      uVar14 = uVar25 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar25;
      }
      uVar19 = (uint)bVar12;
      uVar16 = uVar19 << 4 | 8;
      uVar25 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar25 = uVar14;
      }
      uVar14 = uVar16 | 4;
      uVar19 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar14 = uVar16;
        uVar19 = uVar25;
      }
      uVar16 = uVar14 | 2;
      uVar25 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar14;
        uVar25 = uVar19;
      }
      local_d8 = (uVar25 + uVar16) - 1;
    }
    else {
      local_d8 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar13,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar12 = (uVar13 & 0xffff0000) != 0;
      uVar14 = uVar13 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar13;
      }
      uVar25 = (uint)bVar12;
      uVar13 = uVar25 << 4 | 8;
      uVar16 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar13 = uVar25 << 4;
        uVar16 = uVar14;
      }
      uVar14 = uVar13 | 4;
      uVar25 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar14 = uVar13;
        uVar25 = uVar16;
      }
      uVar13 = uVar14 | 2;
      uVar16 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar13 = uVar14;
        uVar16 = uVar25;
      }
      local_ec = (uVar16 + uVar13) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    uVar16 = *(uint *)(param_4 + 0x4c);
    if (uVar13 < uVar16) {
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar14 = *(uint *)(param_4 + 0x58);
        if (uVar14 < *(uint *)(param_4 + 0x5c)) {
          do {
            puVar11 = local_88;
            lVar28 = *(long *)param_3;
            uVar16 = ((uVar14 >> (ulong)(local_d8 & 0x1f)) +
                     (uVar13 >> (ulong)(local_ec & 0x1f)) * uVar15) * uVar17;
            uVar26 = (ulong)(uVar16 >> 3) & 0xffff;
            lVar24 = *(long *)(lVar28 + (ulong)(uVar16 >> 0x13) * 8);
            if ((uint)uVar26 < 0xfffd) {
              uVar25 = *(uint *)(lVar24 + uVar26);
            }
            else {
              uVar25 = (uVar16 >> 3) + 1;
              uVar19 = (uVar16 >> 3) + 2;
              uVar25 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar28 + (ulong)(uVar19 >> 0x10) * 8) +
                                       ((ulong)uVar19 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar28 + (ulong)(uVar25 >> 0x10) * 8) +
                                                ((ulong)uVar25 & 0xffff)),
                                               *(undefined *)(lVar24 + uVar26)));
            }
            uVar16 = uVar25 >> (ulong)(uVar16 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
            if (((iVar22 == 2) || ((iVar22 == 0) != ((uVar16 & uVar9) != uVar5))) &&
               ((DVar6 == (DensityMapFilter)0x0 &&
                ((uVar18 == 0 || ((uVar16 >> (ulong)(uVar4 & 0x1f) & uVar8 & uVar18) != 0)))))) {
              uVar16 = local_88[0xd];
              iVar7 = (uVar13 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar23 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar7 + (uVar14 >> 5)) * uVar16) * 8)
              ;
              uVar25 = uVar14 & 0x1f | (uVar13 & 0x1f) << 5;
              local_80 = uVar14;
              uStack_7c = uVar13;
              uVar19 = (**ppcVar23)(ppcVar23,uVar25,0,local_88[0xf]);
              if (1 < puVar11[0xd]) {
                uVar26 = 1;
                puVar30 = puVar11 + 0x11;
                do {
                  ppcVar23 = *(code ***)
                              (*(long *)(puVar11 + 10) +
                              (ulong)(uVar16 * (iVar7 + (uVar14 >> 5)) + (int)uVar26) * 8);
                  iVar20 = (**ppcVar23)(ppcVar23,uVar25,0,*puVar30);
                  puVar1 = puVar30 + -1;
                  uVar26 = uVar26 + 1;
                  puVar30 = puVar30 + 2;
                  uVar19 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar19;
                } while (uVar26 < puVar11[0xd]);
              }
              local_78 = uVar19;
              DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
                        ((AddDensityProcessor<ChunkedBitSquare,true> *)param_5,
                         (HelperSource *)&local_98);
              uVar16 = local_78;
              puVar11 = local_88;
              if (uVar19 != local_78) {
                uVar25 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar19 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar28 = (ulong)uVar19 * 8;
                lVar24 = *(long *)(*(long *)(local_88 + 10) + lVar28);
                uVar33 = (**(code **)(lVar24 + 8))(lVar24,uVar25,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar11 + 10) + lVar28) = uVar33;
                if (1 < puVar11[0xd]) {
                  puVar30 = puVar11 + 0x11;
                  uVar26 = 1;
                  do {
                    lVar28 = (ulong)(uVar19 + (int)uVar26) * 8;
                    lVar24 = *(long *)(*(long *)(puVar11 + 10) + lVar28);
                    uVar33 = (**(code **)(lVar24 + 8))
                                       (lVar24,uVar25,0,*puVar30,
                                        uVar16 >> (ulong)(puVar30[-1] & 0x1f));
                    uVar26 = uVar26 + 1;
                    puVar30 = puVar30 + 2;
                    *(undefined8 *)(*(long *)(puVar11 + 10) + lVar28) = uVar33;
                  } while (uVar26 < puVar11[0xd]);
                }
              }
            }
            else {
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(param_4 + 0x5c));
        }
        uVar16 = *(uint *)(param_4 + 0x4c);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar16);
    }
  }
  bVar12 = true;
  if (param_5[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_5 + 0x58),*(uint *)(param_4 + 0x50),*(uint *)(param_4 + 0x48),
               *(uint *)(param_4 + 0x54),uVar16,*(uint *)(param_5 + 0x24),*(uint *)(param_5 + 0x28),
               *(uint *)(param_5 + 0x70),(bool)param_5[0x6d],true,true);
  }
LAB_00802990:
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return bVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00802724:
  uVar21 = uVar21 + 1;
  uVar3 = uVar3 + uVar17;
  if (uVar21 == uVar14) goto LAB_00802704;
  goto LAB_00802734;
LAB_00802704:
  uVar19 = uVar19 + 1;
  uVar27 = uVar27 + uVar15 * uVar17;
  if (uVar19 == uVar25) goto LAB_00802690;
  goto LAB_00802714;
LAB_00802690:
  *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
LAB_008026a0:
  uVar16 = uVar16 + 1;
  if (*(uint *)(param_4 + 0x5c) <= uVar16) goto LAB_00802648;
  goto LAB_008026c8;
}


