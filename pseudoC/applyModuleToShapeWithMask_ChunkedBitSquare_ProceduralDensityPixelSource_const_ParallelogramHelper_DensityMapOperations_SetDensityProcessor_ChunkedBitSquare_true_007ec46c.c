// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007ec46c
// Size: 2556 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, ParallelogramHelper * param_4, SetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,ParallelogramHelper *param_4,
               SetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  DensityMapFilter DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  code **ppcVar20;
  long lVar21;
  Logger *this;
  uint uVar22;
  long lVar23;
  uint *puVar24;
  ulong uVar25;
  long *plVar26;
  undefined2 uVar27;
  undefined8 uVar28;
  uint local_f4;
  uint local_ec;
  uint local_e8;
  uint local_d0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  uVar11 = (**(code **)(*(long *)param_1 + 0x18))();
  local_98 = uVar11;
  uVar12 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar12;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar26 = *(long **)param_6;
  local_88 = (uint *)param_2;
  uVar13 = (**(code **)(*plVar26 + 0x18))(plVar26);
  uVar14 = (**(code **)(*plVar26 + 0x20))(plVar26);
  (**(code **)(*plVar26 + 0x30))(plVar26);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar2 = *(uint *)(param_6 + 0x10);
  uVar6 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar15 = (**(code **)(**(long **)param_6 + 0x28))();
  uVar7 = ~(-1 << (ulong)(uVar15 & 0x1f));
  iVar19 = *(int *)(param_6 + 8);
  uVar15 = *(uint *)(param_6 + 0xc);
  DVar4 = param_6[0x20];
  uVar3 = *(uint *)(param_6 + 0x24);
  if ((uVar11 < uVar13) || (uVar12 < uVar14)) {
    if ((uVar13 < uVar11) || (uVar14 < uVar12)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0
         )) {
                    /* try { // try from 007ece1c to 007ece27 has its CatchHandler @ 007ece78 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007ece2c to 007ece2f has its CatchHandler @ 007ece68 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar13,(ulong)uVar14,(ulong)local_98,(ulong)local_94);
      bVar10 = false;
      goto LAB_007ecdd4;
    }
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = uVar13 / uVar11;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar14 / uVar12;
    }
    uVar28 = NEON_cnt((ulong)uVar16,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar16 & 0xffff0000) != 0;
      uVar12 = uVar16 >> 0x10;
      if (!bVar10) {
        uVar12 = uVar16;
      }
      uVar22 = (uint)bVar10;
      uVar13 = uVar22 << 4 | 8;
      uVar14 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar13 = uVar22 << 4;
        uVar14 = uVar12;
      }
      uVar12 = uVar13 | 4;
      uVar22 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar12 = uVar13;
        uVar22 = uVar14;
      }
      uVar13 = uVar12 | 2;
      uVar14 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar13 = uVar12;
        uVar14 = uVar22;
      }
      local_e8 = (uVar14 + uVar13) - 1;
    }
    else {
      local_e8 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar11,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar11 & 0xffff0000) != 0;
      uVar12 = uVar11 >> 0x10;
      if (!bVar10) {
        uVar12 = uVar11;
      }
      uVar22 = (uint)bVar10;
      uVar13 = uVar22 << 4 | 8;
      uVar14 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar13 = uVar22 << 4;
        uVar14 = uVar12;
      }
      uVar12 = uVar13 | 4;
      uVar22 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar12 = uVar13;
        uVar22 = uVar14;
      }
      uVar13 = uVar12 | 2;
      uVar14 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar13 = uVar12;
        uVar14 = uVar22;
      }
      local_f4 = (uVar14 + uVar13) - 1;
    }
    else {
      local_f4 = 0;
    }
    uVar12 = *(uint *)(param_4 + 0x48);
    uVar13 = *(uint *)(param_4 + 0x4c);
    if (uVar12 < uVar13) {
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar12);
        uVar13 = *(uint *)(param_4 + 0x58);
        if (uVar13 < *(uint *)(param_4 + 0x5c)) {
LAB_007ecb54:
          uVar14 = 0;
LAB_007ecb80:
          uVar22 = 0;
LAB_007ecba4:
          uVar18 = (**(code **)(*(long *)param_3 + 0x58))
                             (param_3,(uVar13 << (ulong)(local_e8 & 0x1f)) + uVar22,
                              uVar14 + (uVar12 << (ulong)(local_f4 & 0x1f)));
          puVar9 = local_88;
          if ((((iVar19 != 2) && ((iVar19 == 0) == ((uVar18 & uVar7) != uVar15))) ||
              (DVar4 != (DensityMapFilter)0x0)) ||
             ((uVar3 != 0 && ((uVar18 >> (ulong)(uVar2 & 0x1f) & uVar6 & uVar3) == 0))))
          goto LAB_007ecb98;
          uVar14 = local_88[0xd];
          iVar5 = (uVar12 >> 5) << (ulong)(*local_88 & 0x1f);
          ppcVar20 = *(code ***)
                      (*(long *)(local_88 + 10) + (ulong)((iVar5 + (uVar13 >> 5)) * uVar14) * 8);
          uVar22 = uVar13 & 0x1f | (uVar12 & 0x1f) << 5;
          local_80 = uVar13;
          uStack_7c = uVar12;
          uVar18 = (**ppcVar20)(ppcVar20,uVar22,0,local_88[0xf]);
          if (1 < puVar9[0xd]) {
            puVar24 = puVar9 + 0x11;
            uVar25 = 1;
            do {
              ppcVar20 = *(code ***)
                          (*(long *)(puVar9 + 10) +
                          (ulong)(uVar14 * (iVar5 + (uVar13 >> 5)) + (int)uVar25) * 8);
              iVar17 = (**ppcVar20)(ppcVar20,uVar22,0,*puVar24);
              puVar1 = puVar24 + -1;
              uVar25 = uVar25 + 1;
              puVar24 = puVar24 + 2;
              uVar18 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar18;
            } while (uVar25 < puVar9[0xd]);
          }
          local_78 = uVar18;
          DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
                    ((SetDensityProcessor<ChunkedBitSquare,true> *)param_5,(HelperSource *)&local_98
                    );
          uVar14 = local_78;
          puVar9 = local_88;
          if (uVar18 != local_78) {
            uVar22 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
            uVar18 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                     local_88[0xd];
            lVar23 = (ulong)uVar18 * 8;
            lVar21 = *(long *)(*(long *)(local_88 + 10) + lVar23);
            uVar28 = (**(code **)(lVar21 + 8))(lVar21,uVar22,0,local_88[0xf],local_78);
            *(undefined8 *)(*(long *)(puVar9 + 10) + lVar23) = uVar28;
            if (1 < puVar9[0xd]) {
              puVar24 = puVar9 + 0x11;
              uVar25 = 1;
              do {
                lVar23 = (ulong)(uVar18 + (int)uVar25) * 8;
                lVar21 = *(long *)(*(long *)(puVar9 + 10) + lVar23);
                uVar28 = (**(code **)(lVar21 + 8))
                                   (lVar21,uVar22,0,*puVar24,uVar14 >> (ulong)(puVar24[-1] & 0x1f));
                uVar25 = uVar25 + 1;
                puVar24 = puVar24 + 2;
                *(undefined8 *)(*(long *)(puVar9 + 10) + lVar23) = uVar28;
              } while (uVar25 < puVar9[0xd]);
            }
          }
          goto LAB_007ecb34;
        }
LAB_007ecadc:
        uVar13 = *(uint *)(param_4 + 0x4c);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
    }
  }
  else {
    uVar16 = 0;
    if (uVar13 != 0) {
      uVar16 = uVar11 / uVar13;
    }
    uVar11 = 0;
    if (uVar14 != 0) {
      uVar11 = uVar12 / uVar14;
    }
    uVar28 = NEON_cnt((ulong)uVar16,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar16 & 0xffff0000) != 0;
      uVar12 = uVar16 >> 0x10;
      if (!bVar10) {
        uVar12 = uVar16;
      }
      uVar16 = (uint)bVar10;
      uVar13 = uVar16 << 4 | 8;
      uVar14 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar13 = uVar16 << 4;
        uVar14 = uVar12;
      }
      uVar12 = uVar13 | 4;
      uVar16 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar12 = uVar13;
        uVar16 = uVar14;
      }
      uVar13 = uVar12 | 2;
      uVar14 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar13 = uVar12;
        uVar14 = uVar16;
      }
      local_d0 = (uVar14 + uVar13) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar11,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar11 & 0xffff0000) != 0;
      uVar12 = uVar11 >> 0x10;
      if (!bVar10) {
        uVar12 = uVar11;
      }
      uVar14 = (uint)bVar10;
      uVar11 = uVar14 << 4 | 8;
      uVar13 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar11 = uVar14 << 4;
        uVar13 = uVar12;
      }
      uVar12 = uVar11 | 4;
      uVar14 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar12 = uVar11;
        uVar14 = uVar13;
      }
      uVar11 = uVar12 | 2;
      uVar13 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar11 = uVar12;
        uVar13 = uVar14;
      }
      local_ec = (uVar13 + uVar11) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar11 = *(uint *)(param_4 + 0x48);
    uVar13 = *(uint *)(param_4 + 0x4c);
    if (uVar11 < uVar13) {
      do {
        ParallelogramHelper::startXIteration(param_4,uVar11);
        uVar12 = *(uint *)(param_4 + 0x58);
        if (uVar12 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar13 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar12 >> (ulong)(local_d0 & 0x1f),
                                uVar11 >> (ulong)(local_ec & 0x1f));
            puVar9 = local_88;
            if (((iVar19 == 2) || ((iVar19 == 0) != ((uVar13 & uVar7) != uVar15))) &&
               ((DVar4 == (DensityMapFilter)0x0 &&
                ((uVar3 == 0 || ((uVar13 >> (ulong)(uVar2 & 0x1f) & uVar6 & uVar3) != 0)))))) {
              uVar13 = local_88[0xd];
              iVar5 = (uVar11 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar20 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar5 + (uVar12 >> 5)) * uVar13) * 8)
              ;
              uVar14 = uVar12 & 0x1f | (uVar11 & 0x1f) << 5;
              local_80 = uVar12;
              uStack_7c = uVar11;
              uVar16 = (**ppcVar20)(ppcVar20,uVar14,0,local_88[0xf]);
              if (1 < puVar9[0xd]) {
                uVar25 = 1;
                puVar24 = puVar9 + 0x11;
                do {
                  ppcVar20 = *(code ***)
                              (*(long *)(puVar9 + 10) +
                              (ulong)(uVar13 * (iVar5 + (uVar12 >> 5)) + (int)uVar25) * 8);
                  iVar17 = (**ppcVar20)(ppcVar20,uVar14,0,*puVar24);
                  puVar1 = puVar24 + -1;
                  uVar25 = uVar25 + 1;
                  puVar24 = puVar24 + 2;
                  uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
                } while (uVar25 < puVar9[0xd]);
              }
              local_78 = uVar16;
              DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
                        ((SetDensityProcessor<ChunkedBitSquare,true> *)param_5,
                         (HelperSource *)&local_98);
              uVar13 = local_78;
              puVar9 = local_88;
              if (uVar16 != local_78) {
                uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar16 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar23 = (ulong)uVar16 * 8;
                lVar21 = *(long *)(*(long *)(local_88 + 10) + lVar23);
                uVar28 = (**(code **)(lVar21 + 8))(lVar21,uVar14,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar9 + 10) + lVar23) = uVar28;
                if (1 < puVar9[0xd]) {
                  puVar24 = puVar9 + 0x11;
                  uVar25 = 1;
                  do {
                    lVar23 = (ulong)(uVar16 + (int)uVar25) * 8;
                    lVar21 = *(long *)(*(long *)(puVar9 + 10) + lVar23);
                    uVar28 = (**(code **)(lVar21 + 8))
                                       (lVar21,uVar14,0,*puVar24,
                                        uVar13 >> (ulong)(puVar24[-1] & 0x1f));
                    uVar25 = uVar25 + 1;
                    puVar24 = puVar24 + 2;
                    *(undefined8 *)(*(long *)(puVar9 + 10) + lVar23) = uVar28;
                  } while (uVar25 < puVar9[0xd]);
                }
              }
            }
            else {
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_4 + 0x5c));
        }
        uVar13 = *(uint *)(param_4 + 0x4c);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
  }
  bVar10 = true;
  if (param_5[100] != (SetDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_5 + 0x50),*(uint *)(param_4 + 0x50),*(uint *)(param_4 + 0x48),
               *(uint *)(param_4 + 0x54),uVar13,*(uint *)(param_5 + 0x1c),*(uint *)(param_5 + 0x20),
               *(uint *)(param_5 + 0x68),(bool)param_5[0x65],true,true);
  }
LAB_007ecdd4:
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_007ecb98:
  uVar22 = uVar22 + 1;
  if (uVar22 == uVar16) goto LAB_007ecb70;
  goto LAB_007ecba4;
LAB_007ecb70:
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar11) goto LAB_007ecb28;
  goto LAB_007ecb80;
LAB_007ecb28:
  *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
LAB_007ecb34:
  uVar13 = uVar13 + 1;
  if (*(uint *)(param_4 + 0x5c) <= uVar13) goto LAB_007ecadc;
  goto LAB_007ecb54;
}


