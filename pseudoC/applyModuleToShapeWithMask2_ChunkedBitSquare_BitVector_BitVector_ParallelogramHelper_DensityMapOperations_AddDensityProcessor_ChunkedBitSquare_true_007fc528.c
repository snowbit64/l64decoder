// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007fc528
// Size: 4308 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, BitVector * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, BitVector, BitVector,
   ParallelogramHelper, DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>
   >(IDensityPixelSource*, ChunkedBitSquare*, BitVector*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,AddDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  DensityMapFilter DVar10;
  DensityMapFilter DVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint *puVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  code **ppcVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  ulong uVar41;
  uint *puVar42;
  uint uVar43;
  long *plVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_154;
  uint local_150;
  uint local_13c;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_bc;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar18 = tpidr_el0;
  local_70 = *(long *)(lVar18 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar44 = *(long **)param_7;
  local_88 = (uint *)param_2;
  uVar21 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar22 = (**(code **)(*plVar44 + 0x20))(plVar44);
  uVar23 = (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar33 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  plVar44 = *(long **)param_8;
  iVar6 = *(int *)(param_7 + 0x18);
  DVar10 = param_7[0x20];
  iVar30 = *(int *)(param_7 + 0x1c);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar24 & 0x1f));
  uVar25 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar26 = (**(code **)(*plVar44 + 0x20))(plVar44);
  uVar27 = (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  uVar9 = *(uint *)(param_8 + 0xc);
  DVar11 = param_8[0x20];
  uVar16 = ~(-1 << (ulong)(uVar28 & 0x1f));
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar21) || (local_94 < uVar26)) || (local_94 < uVar22)) || (local_98 < uVar25))
  {
    if (((uVar21 < local_98) || (uVar26 < local_94)) || ((uVar22 < local_94 || (uVar25 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar33 != 0
         )) {
                    /* try { // try from 007fd5c0 to 007fd5cb has its CatchHandler @ 007fd5fc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar21,(ulong)uVar22,(ulong)uVar25,(ulong)uVar26,(ulong)local_98,
                         (ulong)local_94);
      bVar20 = false;
      goto LAB_007fd57c;
    }
    uVar43 = 0;
    if (local_94 != 0) {
      uVar43 = uVar22 / local_94;
    }
    uVar22 = 0;
    if (local_98 != 0) {
      uVar22 = uVar21 / local_98;
    }
    uVar46 = NEON_cnt((ulong)uVar22,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar22 & 0xffff0000) != 0;
      uVar17 = uVar22 >> 0x10;
      if (!bVar20) {
        uVar17 = uVar22;
      }
      uVar37 = (uint)bVar20;
      uVar35 = uVar37 << 4 | 8;
      uVar29 = uVar17 >> 8;
      if (uVar17 < 0x100) {
        uVar35 = uVar37 << 4;
        uVar29 = uVar17;
      }
      uVar17 = uVar35 | 4;
      uVar37 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar17 = uVar35;
        uVar37 = uVar29;
      }
      uVar35 = uVar17 | 2;
      uVar29 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar35 = uVar17;
        uVar29 = uVar37;
      }
      local_134 = (uVar29 + uVar35) - 1;
    }
    else {
      local_134 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar43,1);
    uVar17 = 0;
    if (local_98 != 0) {
      uVar17 = uVar25 / local_98;
    }
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar43 & 0xffff0000) != 0;
      uVar35 = uVar43 >> 0x10;
      if (!bVar20) {
        uVar35 = uVar43;
      }
      uVar38 = (uint)bVar20;
      uVar29 = uVar38 << 4 | 8;
      uVar37 = uVar35 >> 8;
      if (uVar35 < 0x100) {
        uVar29 = uVar38 << 4;
        uVar37 = uVar35;
      }
      uVar35 = uVar29 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar35 = uVar29;
        uVar38 = uVar37;
      }
      uVar29 = uVar35 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar29 = uVar35;
        uVar37 = uVar38;
      }
      local_150 = (uVar37 + uVar29) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar35 = 0;
    if (local_94 != 0) {
      uVar35 = uVar26 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar17,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar17 & 0xffff0000) != 0;
      uVar26 = uVar17 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar17;
      }
      uVar38 = (uint)bVar20;
      uVar29 = uVar38 << 4 | 8;
      uVar37 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar29 = uVar38 << 4;
        uVar37 = uVar26;
      }
      uVar26 = uVar29 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar26 = uVar29;
        uVar38 = uVar37;
      }
      uVar29 = uVar26 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar29 = uVar26;
        uVar37 = uVar38;
      }
      local_13c = (uVar37 + uVar29) - 1;
    }
    else {
      local_13c = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar35,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar35 & 0xffff0000) != 0;
      uVar26 = uVar35 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar35;
      }
      uVar38 = (uint)bVar20;
      uVar29 = uVar38 << 4 | 8;
      uVar37 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar29 = uVar38 << 4;
        uVar37 = uVar26;
      }
      uVar26 = uVar29 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar26 = uVar29;
        uVar38 = uVar37;
      }
      uVar29 = uVar26 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar29 = uVar26;
        uVar37 = uVar38;
      }
      local_154 = (uVar37 + uVar29) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    uVar29 = *(uint *)(param_5 + 0x4c);
    if (uVar26 < uVar29) {
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar43 < 2) {
        uVar43 = 1;
      }
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      if (uVar35 < 2) {
        uVar35 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar29 = *(uint *)(param_5 + 0x58);
        if (uVar29 < *(uint *)(param_5 + 0x5c)) {
          do {
            puVar19 = local_88;
            uVar37 = 0;
            uVar38 = uVar23 * (uVar21 * (uVar26 << (ulong)(local_150 & 0x1f)) +
                              (uVar29 << (ulong)(local_134 & 0x1f)));
            lVar36 = *(long *)param_3;
            do {
              uVar31 = 0;
              uVar3 = uVar38;
              do {
                uVar41 = (ulong)(uVar3 >> 3) & 0xffff;
                lVar40 = *(long *)(lVar36 + (ulong)(uVar3 >> 0x13) * 8);
                if ((uint)uVar41 < 0xfffd) {
                  uVar39 = *(uint *)(lVar40 + uVar41);
                }
                else {
                  uVar39 = (uVar3 >> 3) + 1;
                  uVar2 = (uVar3 >> 3) + 2;
                  uVar39 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar36 + (ulong)(uVar2 >> 0x10) * 8) +
                                           ((ulong)uVar2 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar36 + (ulong)(uVar39 >> 0x10) * 8)
                                                    + ((ulong)uVar39 & 0xffff)),
                                                   *(undefined *)(lVar40 + uVar41)));
                }
                uVar39 = uVar39 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
                if ((iVar33 == 2) || ((iVar33 == 0) != ((uVar39 & uVar14) != uVar5))) {
                  uVar39 = uVar39 >> (ulong)(uVar4 & 0x1f) & uVar13;
                  if (((int)uVar39 < iVar6) || (iVar30 < (int)uVar39)) {
                    if (DVar10 != (DensityMapFilter)0x0) goto LAB_007fd288;
                  }
                  else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007fd288:
                    if ((uVar7 == 0) || ((uVar39 & uVar7) != 0)) {
                      uVar37 = 0;
                      uVar38 = uVar27 * (uVar25 * (uVar26 << (ulong)(local_154 & 0x1f)) +
                                        (uVar29 << (ulong)(local_13c & 0x1f)));
                      lVar36 = *(long *)param_4;
                      goto LAB_007fd2d4;
                    }
                  }
                }
                uVar31 = uVar31 + 1;
                uVar3 = uVar3 + uVar23;
              } while (uVar31 != uVar22);
              uVar37 = uVar37 + 1;
              uVar38 = uVar38 + uVar21 * uVar23;
            } while (uVar37 != uVar43);
LAB_007fd13c:
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007fd14c:
            uVar29 = uVar29 + 1;
          } while (uVar29 < *(uint *)(param_5 + 0x5c));
        }
        uVar29 = *(uint *)(param_5 + 0x4c);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar29);
    }
  }
  else {
    uVar43 = 0;
    if (uVar21 != 0) {
      uVar43 = local_98 / uVar21;
    }
    uVar17 = 0;
    if (uVar22 != 0) {
      uVar17 = local_94 / uVar22;
    }
    uVar46 = NEON_cnt((ulong)uVar43,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar43 & 0xffff0000) != 0;
      uVar22 = uVar43 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar43;
      }
      uVar29 = (uint)bVar20;
      uVar43 = uVar29 << 4 | 8;
      uVar35 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar43 = uVar29 << 4;
        uVar35 = uVar22;
      }
      uVar22 = uVar43 | 4;
      uVar29 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar22 = uVar43;
        uVar29 = uVar35;
      }
      uVar43 = uVar22 | 2;
      uVar35 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar43 = uVar22;
        uVar35 = uVar29;
      }
      uVar22 = (uVar35 + uVar43) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar17,1);
    uVar43 = 0;
    if (uVar25 != 0) {
      uVar43 = local_98 / uVar25;
    }
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar17 & 0xffff0000) != 0;
      uVar35 = uVar17 >> 0x10;
      if (!bVar20) {
        uVar35 = uVar17;
      }
      uVar37 = (uint)bVar20;
      uVar17 = uVar37 << 4 | 8;
      uVar29 = uVar35 >> 8;
      if (uVar35 < 0x100) {
        uVar17 = uVar37 << 4;
        uVar29 = uVar35;
      }
      uVar35 = uVar17 | 4;
      uVar37 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar35 = uVar17;
        uVar37 = uVar29;
      }
      uVar17 = uVar35 | 2;
      uVar29 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar17 = uVar35;
        uVar29 = uVar37;
      }
      local_12c = (uVar29 + uVar17) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar17 = 0;
    if (uVar26 != 0) {
      uVar17 = local_94 / uVar26;
    }
    uVar46 = NEON_cnt((ulong)uVar43,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar43 & 0xffff0000) != 0;
      uVar26 = uVar43 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar43;
      }
      uVar29 = (uint)bVar20;
      uVar43 = uVar29 << 4 | 8;
      uVar35 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar43 = uVar29 << 4;
        uVar35 = uVar26;
      }
      uVar26 = uVar43 | 4;
      uVar29 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar26 = uVar43;
        uVar29 = uVar35;
      }
      uVar43 = uVar26 | 2;
      uVar35 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar43 = uVar26;
        uVar35 = uVar29;
      }
      local_bc = (uVar35 + uVar43) - 1;
    }
    else {
      local_bc = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar17,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar17 & 0xffff0000) != 0;
      uVar26 = uVar17 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar17;
      }
      uVar35 = (uint)bVar20;
      uVar43 = uVar35 << 4 | 8;
      uVar17 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar43 = uVar35 << 4;
        uVar17 = uVar26;
      }
      uVar26 = uVar43 | 4;
      uVar35 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar26 = uVar43;
        uVar35 = uVar17;
      }
      uVar43 = uVar26 | 2;
      uVar17 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar43 = uVar26;
        uVar17 = uVar35;
      }
      local_130 = (uVar17 + uVar43) - 1;
    }
    else {
      local_130 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    uVar29 = *(uint *)(param_5 + 0x4c);
    if (uVar26 < uVar29) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar43 = *(uint *)(param_5 + 0x58);
        if (uVar43 < *(uint *)(param_5 + 0x5c)) {
          do {
            puVar19 = local_88;
            uVar17 = ((uVar43 >> (ulong)(uVar22 & 0x1f)) +
                     (uVar26 >> (ulong)(local_12c & 0x1f)) * uVar21) * uVar23;
            lVar40 = *(long *)param_3;
            uVar41 = (ulong)(uVar17 >> 3) & 0xffff;
            lVar36 = *(long *)(lVar40 + (ulong)(uVar17 >> 0x13) * 8);
            if ((uint)uVar41 < 0xfffd) {
              uVar35 = *(uint *)(lVar36 + uVar41);
            }
            else {
              uVar35 = (uVar17 >> 3) + 1;
              uVar29 = (uVar17 >> 3) + 2;
              uVar35 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar40 + (ulong)(uVar29 >> 0x10) * 8) +
                                       ((ulong)uVar29 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar40 + (ulong)(uVar35 >> 0x10) * 8) +
                                                ((ulong)uVar35 & 0xffff)),
                                               *(undefined *)(lVar36 + uVar41)));
            }
            uVar17 = uVar35 >> (ulong)(uVar17 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
            if (((iVar33 == 2) || ((iVar33 == 0) != ((uVar17 & uVar14) != uVar5))) &&
               ((DVar10 == (DensityMapFilter)0x0 &&
                ((uVar7 == 0 || ((uVar17 >> (ulong)(uVar4 & 0x1f) & uVar13 & uVar7) != 0)))))) {
              lVar40 = *(long *)param_4;
              uVar17 = ((uVar43 >> (ulong)(local_bc & 0x1f)) +
                       (uVar26 >> (ulong)(local_130 & 0x1f)) * uVar25) * uVar27;
              uVar41 = (ulong)(uVar17 >> 3) & 0xffff;
              lVar36 = *(long *)(lVar40 + (ulong)(uVar17 >> 0x13) * 8);
              if ((uint)uVar41 < 0xfffd) {
                uVar35 = *(uint *)(lVar36 + uVar41);
              }
              else {
                uVar35 = (uVar17 >> 3) + 1;
                uVar29 = (uVar17 >> 3) + 2;
                uVar35 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar40 + (ulong)(uVar29 >> 0x10) * 8) +
                                         ((ulong)uVar29 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar40 + (ulong)(uVar35 >> 0x10) * 8) +
                                                  ((ulong)uVar35 & 0xffff)),
                                                 *(undefined *)(lVar36 + uVar41)));
              }
              uVar17 = uVar35 >> (ulong)(uVar17 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
              if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar17 & uVar16) != uVar9))) ||
                  (DVar11 != (DensityMapFilter)0x0)) ||
                 ((uVar28 != 0 && ((uVar17 >> (ulong)(uVar24 & 0x1f) & uVar15 & uVar28) == 0))))
              goto LAB_007fce94;
              uVar17 = local_88[0xd];
              iVar6 = (uVar26 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar34 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar6 + (uVar43 >> 5)) * uVar17) * 8)
              ;
              uVar35 = uVar43 & 0x1f | (uVar26 & 0x1f) << 5;
              local_80 = uVar43;
              uStack_7c = uVar26;
              uVar29 = (**ppcVar34)(ppcVar34,uVar35,0,local_88[0xf]);
              if (1 < puVar19[0xd]) {
                uVar41 = 1;
                puVar42 = puVar19 + 0x11;
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(puVar19 + 10) +
                              (ulong)(uVar17 * (iVar6 + (uVar43 >> 5)) + (int)uVar41) * 8);
                  iVar30 = (**ppcVar34)(ppcVar34,uVar35,0,*puVar42);
                  puVar1 = puVar42 + -1;
                  uVar41 = uVar41 + 1;
                  puVar42 = puVar42 + 2;
                  uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                } while (uVar41 < puVar19[0xd]);
              }
              local_78 = uVar29;
              DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
                        ((AddDensityProcessor<ChunkedBitSquare,true> *)param_6,
                         (HelperSource *)&local_98);
              uVar17 = local_78;
              puVar19 = local_88;
              if (uVar29 != local_78) {
                uVar35 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar29 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar40 = (ulong)uVar29 * 8;
                lVar36 = *(long *)(*(long *)(local_88 + 10) + lVar40);
                uVar46 = (**(code **)(lVar36 + 8))(lVar36,uVar35,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar19 + 10) + lVar40) = uVar46;
                if (1 < puVar19[0xd]) {
                  puVar42 = puVar19 + 0x11;
                  uVar41 = 1;
                  do {
                    lVar40 = (ulong)(uVar29 + (int)uVar41) * 8;
                    lVar36 = *(long *)(*(long *)(puVar19 + 10) + lVar40);
                    uVar46 = (**(code **)(lVar36 + 8))
                                       (lVar36,uVar35,0,*puVar42,
                                        uVar17 >> (ulong)(puVar42[-1] & 0x1f));
                    uVar41 = uVar41 + 1;
                    *(undefined8 *)(*(long *)(puVar19 + 10) + lVar40) = uVar46;
                    puVar42 = puVar42 + 2;
                  } while (uVar41 < puVar19[0xd]);
                }
              }
            }
            else {
LAB_007fce94:
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 < *(uint *)(param_5 + 0x5c));
        }
        uVar29 = *(uint *)(param_5 + 0x4c);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar29);
    }
  }
  bVar20 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar29,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_007fd57c:
  if (*(long *)(lVar18 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar20;
LAB_007fd2d4:
  uVar31 = 0;
  uVar3 = uVar38;
LAB_007fd304:
  uVar41 = (ulong)(uVar3 >> 3) & 0xffff;
  lVar40 = *(long *)(lVar36 + (ulong)(uVar3 >> 0x13) * 8);
  if ((uint)uVar41 < 0xfffd) {
    uVar39 = *(uint *)(lVar40 + uVar41);
  }
  else {
    uVar39 = (uVar3 >> 3) + 1;
    uVar2 = (uVar3 >> 3) + 2;
    uVar39 = (uint)CONCAT12(*(undefined *)
                             (*(long *)(lVar36 + (ulong)(uVar2 >> 0x10) * 8) +
                             ((ulong)uVar2 & 0xffff)),
                            CONCAT11(*(undefined *)
                                      (*(long *)(lVar36 + (ulong)(uVar39 >> 0x10) * 8) +
                                      ((ulong)uVar39 & 0xffff)),*(undefined *)(lVar40 + uVar41)));
  }
  uVar39 = uVar39 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
  if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar39 & uVar16) != uVar9))) ||
      (DVar11 != (DensityMapFilter)0x0)) ||
     ((uVar28 != 0 && ((uVar39 >> (ulong)(uVar24 & 0x1f) & uVar15 & uVar28) == 0))))
  goto LAB_007fd2f4;
  uVar37 = local_88[0xd];
  iVar12 = (uVar26 >> 5) << (ulong)(*local_88 & 0x1f);
  ppcVar34 = *(code ***)(*(long *)(local_88 + 10) + (ulong)((iVar12 + (uVar29 >> 5)) * uVar37) * 8);
  uVar38 = uVar29 & 0x1f | (uVar26 & 0x1f) << 5;
  local_80 = uVar29;
  uStack_7c = uVar26;
  uVar31 = (**ppcVar34)(ppcVar34,uVar38,0,local_88[0xf]);
  if (1 < puVar19[0xd]) {
    uVar41 = 1;
    puVar42 = puVar19 + 0x11;
    do {
      ppcVar34 = *(code ***)
                  (*(long *)(puVar19 + 10) +
                  (ulong)(uVar37 * (iVar12 + (uVar29 >> 5)) + (int)uVar41) * 8);
      iVar32 = (**ppcVar34)(ppcVar34,uVar38,0,*puVar42);
      puVar1 = puVar42 + -1;
      uVar41 = uVar41 + 1;
      puVar42 = puVar42 + 2;
      uVar31 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar31;
    } while (uVar41 < puVar19[0xd]);
  }
  local_78 = uVar31;
  DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
            ((AddDensityProcessor<ChunkedBitSquare,true> *)param_6,(HelperSource *)&local_98);
  uVar37 = local_78;
  puVar19 = local_88;
  if (uVar31 != local_78) {
    uVar38 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
    uVar31 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) * local_88[0xd];
    lVar40 = (ulong)uVar31 * 8;
    lVar36 = *(long *)(*(long *)(local_88 + 10) + lVar40);
    uVar46 = (**(code **)(lVar36 + 8))(lVar36,uVar38,0,local_88[0xf],local_78);
    *(undefined8 *)(*(long *)(puVar19 + 10) + lVar40) = uVar46;
    if (1 < puVar19[0xd]) {
      puVar42 = puVar19 + 0x11;
      uVar41 = 1;
      do {
        lVar40 = (ulong)(uVar31 + (int)uVar41) * 8;
        lVar36 = *(long *)(*(long *)(puVar19 + 10) + lVar40);
        uVar46 = (**(code **)(lVar36 + 8))
                           (lVar36,uVar38,0,*puVar42,uVar37 >> (ulong)(puVar42[-1] & 0x1f));
        uVar41 = uVar41 + 1;
        puVar42 = puVar42 + 2;
        *(undefined8 *)(*(long *)(puVar19 + 10) + lVar40) = uVar46;
      } while (uVar41 < puVar19[0xd]);
    }
  }
  goto LAB_007fd14c;
LAB_007fd2f4:
  uVar31 = uVar31 + 1;
  uVar3 = uVar3 + uVar27;
  if (uVar31 == uVar17) goto LAB_007fd2bc;
  goto LAB_007fd304;
LAB_007fd2bc:
  uVar37 = uVar37 + 1;
  uVar38 = uVar38 + uVar25 * uVar27;
  if (uVar37 == uVar35) goto LAB_007fd13c;
  goto LAB_007fd2d4;
}


