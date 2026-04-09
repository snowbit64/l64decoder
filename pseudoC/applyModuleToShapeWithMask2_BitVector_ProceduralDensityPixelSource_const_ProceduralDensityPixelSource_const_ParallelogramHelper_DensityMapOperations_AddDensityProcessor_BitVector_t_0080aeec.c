// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
// Entry Point: 0080aeec
// Size: 3264 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ProceduralDensityPixelSource
   const, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::AddDensityProcessor<BitVector, true> >(IDensityPixelSource*, BitVector*,
   ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<BitVector, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,ProceduralDensityPixelSource *param_4,
               ParallelogramHelper *param_5,AddDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  DensityMapFilter DVar10;
  DensityMapFilter DVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  long *plVar33;
  undefined2 uVar34;
  undefined8 uVar35;
  uint local_120;
  uint local_11c;
  uint local_10c;
  uint local_100;
  uint local_e8;
  uint local_e4;
  uint local_dc;
  uint local_98;
  uint local_94;
  uint local_90;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar16 = tpidr_el0;
  local_70 = *(long *)(lVar16 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar33 = *(long **)param_7;
  local_88 = (long *)param_2;
  uVar18 = (**(code **)(*plVar33 + 0x18))(plVar33);
  uVar19 = (**(code **)(*plVar33 + 0x20))(plVar33);
  (**(code **)(*plVar33 + 0x30))(plVar33);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar1 = *(uint *)(param_7 + 0x10);
  uVar12 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar20 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar25 = *(int *)(param_7 + 8);
  uVar3 = *(uint *)(param_7 + 0xc);
  plVar33 = *(long **)param_8;
  DVar10 = param_7[0x20];
  uVar5 = *(uint *)(param_7 + 0x24);
  iVar6 = *(int *)(param_7 + 0x18);
  uVar13 = ~(-1 << (ulong)(uVar20 & 0x1f));
  iVar7 = *(int *)(param_7 + 0x1c);
  uVar21 = (**(code **)(*plVar33 + 0x18))(plVar33);
  uVar22 = (**(code **)(*plVar33 + 0x20))(plVar33);
  (**(code **)(*plVar33 + 0x30))(plVar33);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar20 = *(uint *)(param_8 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar2 = *(int *)(param_8 + 8);
  uVar4 = *(uint *)(param_8 + 0xc);
  DVar11 = param_8[0x20];
  iVar8 = *(int *)(param_8 + 0x18);
  iVar9 = *(int *)(param_8 + 0x1c);
  uVar15 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar23 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar18) || (local_94 < uVar22)) || (local_94 < uVar19)) || (local_98 < uVar21))
  {
    if (((uVar18 < local_98) || (uVar22 < local_94)) || ((uVar19 < local_94 || (uVar21 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar25 != 0
         )) {
                    /* try { // try from 0080bb70 to 0080bb7b has its CatchHandler @ 0080bbac */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar18,(ulong)uVar19,(ulong)uVar21,(ulong)uVar22,(ulong)local_98,
                         (ulong)local_94);
      bVar17 = false;
      goto LAB_0080bb2c;
    }
    uVar27 = 0;
    if (local_98 != 0) {
      uVar27 = uVar18 / local_98;
    }
    uVar18 = 0;
    if (local_94 != 0) {
      uVar18 = uVar19 / local_94;
    }
    uVar35 = NEON_cnt((ulong)uVar27,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar27 & 0xffff0000) != 0;
      uVar19 = uVar27 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar27;
      }
      uVar32 = (uint)bVar17;
      uVar29 = uVar32 << 4 | 8;
      uVar31 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar29 = uVar32 << 4;
        uVar31 = uVar19;
      }
      uVar19 = uVar29 | 4;
      uVar32 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar19 = uVar29;
        uVar32 = uVar31;
      }
      uVar29 = uVar19 | 2;
      uVar31 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar29 = uVar19;
        uVar31 = uVar32;
      }
      local_100 = (uVar31 + uVar29) - 1;
    }
    else {
      local_100 = 0;
    }
    uVar19 = 0;
    if (local_98 != 0) {
      uVar19 = uVar21 / local_98;
    }
    uVar35 = NEON_cnt((ulong)uVar18,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar18;
      }
      uVar32 = (uint)bVar17;
      uVar29 = uVar32 << 4 | 8;
      uVar31 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar29 = uVar32 << 4;
        uVar31 = uVar21;
      }
      uVar21 = uVar29 | 4;
      uVar32 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar21 = uVar29;
        uVar32 = uVar31;
      }
      uVar29 = uVar21 | 2;
      uVar31 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar29 = uVar21;
        uVar31 = uVar32;
      }
      local_11c = (uVar31 + uVar29) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar21 = 0;
    if (local_94 != 0) {
      uVar21 = uVar22 / local_94;
    }
    uVar35 = NEON_cnt((ulong)uVar19,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar19 & 0xffff0000) != 0;
      uVar22 = uVar19 >> 0x10;
      if (!bVar17) {
        uVar22 = uVar19;
      }
      uVar32 = (uint)bVar17;
      uVar29 = uVar32 << 4 | 8;
      uVar31 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar29 = uVar32 << 4;
        uVar31 = uVar22;
      }
      uVar22 = uVar29 | 4;
      uVar32 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar22 = uVar29;
        uVar32 = uVar31;
      }
      uVar29 = uVar22 | 2;
      uVar31 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar29 = uVar22;
        uVar31 = uVar32;
      }
      local_10c = (uVar31 + uVar29) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar21,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar17) {
        uVar22 = uVar21;
      }
      uVar32 = (uint)bVar17;
      uVar29 = uVar32 << 4 | 8;
      uVar31 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar29 = uVar32 << 4;
        uVar31 = uVar22;
      }
      uVar22 = uVar29 | 4;
      uVar32 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar22 = uVar29;
        uVar32 = uVar31;
      }
      uVar29 = uVar22 | 2;
      uVar31 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar29 = uVar22;
        uVar31 = uVar32;
      }
      local_120 = (uVar31 + uVar29) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    uVar29 = *(uint *)(param_5 + 0x4c);
    if (uVar22 < uVar29) {
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar29 = *(uint *)(param_5 + 0x58);
        if (uVar29 < *(uint *)(param_5 + 0x5c)) {
LAB_0080b890:
          uVar31 = 0;
          do {
            uVar32 = 0;
            do {
              uVar24 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar29 << (ulong)(local_100 & 0x1f)) + uVar32,
                                  uVar31 + (uVar22 << (ulong)(local_11c & 0x1f)));
              if ((iVar25 == 2) || ((iVar25 == 0) != ((uVar24 & uVar13) != uVar3))) {
                uVar24 = uVar24 >> (ulong)(uVar1 & 0x1f) & uVar12;
                if (((int)uVar24 < iVar6) || (iVar7 < (int)uVar24)) {
                  if (DVar10 != (DensityMapFilter)0x0) goto LAB_0080b944;
                }
                else if (DVar10 == (DensityMapFilter)0x0) {
LAB_0080b944:
                  if ((uVar5 == 0) || ((uVar24 & uVar5) != 0)) {
                    uVar31 = 0;
                    goto LAB_0080b97c;
                  }
                }
              }
              uVar32 = uVar32 + 1;
            } while (uVar32 != uVar27);
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar18);
          goto LAB_0080b868;
        }
LAB_0080b81c:
        uVar29 = *(uint *)(param_5 + 0x4c);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar29);
    }
  }
  else {
    uVar27 = 0;
    if (uVar18 != 0) {
      uVar27 = local_98 / uVar18;
    }
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = local_94 / uVar19;
    }
    uVar35 = NEON_cnt((ulong)uVar27,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar27 & 0xffff0000) != 0;
      uVar19 = uVar27 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar27;
      }
      uVar31 = (uint)bVar17;
      uVar27 = uVar31 << 4 | 8;
      uVar29 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar27 = uVar31 << 4;
        uVar29 = uVar19;
      }
      uVar19 = uVar27 | 4;
      uVar31 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar19 = uVar27;
        uVar31 = uVar29;
      }
      uVar27 = uVar19 | 2;
      uVar29 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar27 = uVar19;
        uVar29 = uVar31;
      }
      local_dc = (uVar29 + uVar27) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar19 = 0;
    if (uVar21 != 0) {
      uVar19 = local_98 / uVar21;
    }
    uVar35 = NEON_cnt((ulong)uVar18,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar18;
      }
      uVar29 = (uint)bVar17;
      uVar18 = uVar29 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar18 = uVar29 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar18 | 4;
      uVar29 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar18;
        uVar29 = uVar27;
      }
      uVar18 = uVar21 | 2;
      uVar27 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar18 = uVar21;
        uVar27 = uVar29;
      }
      local_e8 = (uVar27 + uVar18) - 1;
    }
    else {
      local_e8 = 0;
    }
    uVar18 = 0;
    if (uVar22 != 0) {
      uVar18 = local_94 / uVar22;
    }
    uVar35 = NEON_cnt((ulong)uVar19,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar19 & 0xffff0000) != 0;
      uVar21 = uVar19 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar19;
      }
      uVar27 = (uint)bVar17;
      uVar19 = uVar27 << 4 | 8;
      uVar22 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar19 = uVar27 << 4;
        uVar22 = uVar21;
      }
      uVar21 = uVar19 | 4;
      uVar27 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar21 = uVar19;
        uVar27 = uVar22;
      }
      uVar19 = uVar21 | 2;
      uVar22 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar19 = uVar21;
        uVar22 = uVar27;
      }
      local_e4 = (uVar22 + uVar19) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar18,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar19 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar18;
      }
      uVar22 = (uint)bVar17;
      uVar18 = uVar22 << 4 | 8;
      uVar21 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar18 = uVar22 << 4;
        uVar21 = uVar19;
      }
      uVar19 = uVar18 | 4;
      uVar22 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar19 = uVar18;
        uVar22 = uVar21;
      }
      uVar18 = uVar19 | 2;
      uVar21 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar18 = uVar19;
        uVar21 = uVar22;
      }
      uVar18 = (uVar21 + uVar18) - 1;
    }
    else {
      uVar18 = 0;
    }
    uVar19 = *(uint *)(param_5 + 0x48);
    uVar29 = *(uint *)(param_5 + 0x4c);
    if (uVar19 < uVar29) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar19);
        uVar21 = *(uint *)(param_5 + 0x58);
        if (uVar21 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar22 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar21 >> (ulong)(local_dc & 0x1f),
                                uVar19 >> (ulong)(local_e8 & 0x1f));
            if ((((((iVar25 == 2) || ((iVar25 == 0) != ((uVar22 & uVar13) != uVar3))) &&
                  (DVar10 == (DensityMapFilter)0x0)) &&
                 (((uVar5 == 0 || ((uVar22 >> (ulong)(uVar1 & 0x1f) & uVar12 & uVar5) != 0)) &&
                  ((uVar22 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar21 >> (ulong)(local_e4 & 0x1f),
                                        uVar19 >> (ulong)(uVar18 & 0x1f)), iVar2 == 2 ||
                   ((iVar2 == 0) != ((uVar22 & uVar15) != uVar4))))))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar23 == 0 || ((uVar22 >> (ulong)(uVar20 & 0x1f) & uVar14 & uVar23) != 0)))) {
              lVar30 = *local_88;
              uVar22 = (uVar21 + uVar19 * local_98) * local_90;
              lVar26 = *(long *)(lVar30 + (ulong)(uVar22 >> 0x13) * 8);
              uVar28 = (ulong)(uVar22 >> 3) & 0xffff;
              if ((uint)uVar28 < 0xfffd) {
                uVar27 = *(uint *)(lVar26 + uVar28);
              }
              else {
                uVar27 = (uVar22 >> 3) + 1;
                uVar29 = (uVar22 >> 3) + 2;
                uVar27 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar30 + (ulong)(uVar29 >> 0x10) * 8) +
                                         ((ulong)uVar29 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar30 + (ulong)(uVar27 >> 0x10) * 8) +
                                                  ((ulong)uVar27 & 0xffff)),
                                                 *(undefined *)(lVar26 + uVar28)));
              }
              uVar22 = uVar27 >> (ulong)(uVar22 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar21;
              uStack_7c = uVar19;
              local_78 = uVar22;
              DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                        ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
              if (uVar22 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(param_5 + 0x5c));
        }
        uVar29 = *(uint *)(param_5 + 0x4c);
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar29);
    }
  }
  bVar17 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar29,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_0080bb2c:
  if (*(long *)(lVar16 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar17;
LAB_0080b97c:
  do {
    uVar32 = 0;
    do {
      uVar24 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar29 << (ulong)(local_10c & 0x1f)) + uVar32,
                          uVar31 + (uVar22 << (ulong)(local_120 & 0x1f)));
      if ((iVar2 == 2) || ((iVar2 == 0) != ((uVar24 & uVar15) != uVar4))) {
        uVar24 = uVar24 >> (ulong)(uVar20 & 0x1f) & uVar14;
        if (((int)uVar24 < iVar8) || (iVar9 < (int)uVar24)) {
          if (DVar11 != (DensityMapFilter)0x0) goto LAB_0080ba10;
        }
        else if (DVar11 == (DensityMapFilter)0x0) {
LAB_0080ba10:
          if ((uVar23 == 0) || ((uVar24 & uVar23) != 0)) {
            lVar30 = *local_88;
            uVar31 = (uVar29 + local_98 * uVar22) * local_90;
            lVar26 = *(long *)(lVar30 + (ulong)(uVar31 >> 0x13) * 8);
            uVar28 = (ulong)(uVar31 >> 3) & 0xffff;
            if ((uint)uVar28 < 0xfffd) {
              uVar32 = *(uint *)(lVar26 + uVar28);
            }
            else {
              uVar32 = (uVar31 >> 3) + 1;
              uVar24 = (uVar31 >> 3) + 2;
              uVar32 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar30 + (ulong)(uVar24 >> 0x10) * 8) +
                                       ((ulong)uVar24 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar30 + (ulong)(uVar32 >> 0x10) * 8) +
                                                ((ulong)uVar32 & 0xffff)),
                                               *(undefined *)(lVar26 + uVar28)));
            }
            uVar31 = uVar32 >> (ulong)(uVar31 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            local_80 = uVar29;
            uStack_7c = uVar22;
            local_78 = uVar31;
            DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                      ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
            if (uVar31 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_0080b87c;
          }
        }
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar19);
    uVar31 = uVar31 + 1;
  } while (uVar31 != uVar21);
LAB_0080b868:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_0080b87c:
  uVar29 = uVar29 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar29) goto LAB_0080b81c;
  goto LAB_0080b890;
}


