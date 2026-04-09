// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007fd614
// Size: 3964 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, BitVector,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true> >(IDensityPixelSource*,
   ChunkedBitSquare*, BitVector*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,
               AddDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
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
  long lVar17;
  uint *puVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  code **ppcVar32;
  uint uVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  ulong uVar40;
  uint *puVar41;
  long *plVar42;
  undefined2 uVar43;
  undefined8 uVar44;
  uint local_148;
  uint local_144;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_ec;
  uint local_b8;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar17 = tpidr_el0;
  local_70 = *(long *)(lVar17 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar42 = *(long **)param_7;
  local_88 = (uint *)param_2;
  uVar20 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar21 = (**(code **)(*plVar42 + 0x20))(plVar42);
  uVar22 = (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar31 = *(int *)(param_7 + 8);
  plVar42 = *(long **)param_8;
  iVar5 = *(int *)(param_7 + 0x18);
  iVar28 = *(int *)(param_7 + 0x1c);
  DVar10 = param_7[0x20];
  uVar6 = *(uint *)(param_7 + 0xc);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar24 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar25 = (**(code **)(*plVar42 + 0x20))(plVar42);
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar23 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  uVar16 = ~(-1 << (ulong)(uVar26 & 0x1f));
  iVar8 = *(int *)(param_8 + 8);
  uVar26 = *(uint *)(param_8 + 0xc);
  DVar11 = param_8[0x20];
  uVar9 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar20) || (local_94 < uVar25)) || (local_94 < uVar21)) || (local_98 < uVar24))
  {
    if (((uVar20 < local_98) || (uVar25 < local_94)) || ((uVar21 < local_94 || (uVar24 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar31 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar31 != 0
         )) {
                    /* try { // try from 007fe554 to 007fe55f has its CatchHandler @ 007fe590 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar20,(ulong)uVar21,(ulong)uVar24,(ulong)uVar25,(ulong)local_98,
                         (ulong)local_94);
      bVar19 = false;
      goto LAB_007fe50c;
    }
    uVar33 = 0;
    if (local_94 != 0) {
      uVar33 = uVar21 / local_94;
    }
    uVar21 = 0;
    if (local_98 != 0) {
      uVar21 = uVar20 / local_98;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar27 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar27 = uVar21;
      }
      uVar37 = (uint)bVar19;
      uVar35 = uVar37 << 4 | 8;
      uVar36 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar35 = uVar37 << 4;
        uVar36 = uVar27;
      }
      uVar27 = uVar35 | 4;
      uVar37 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar27 = uVar35;
        uVar37 = uVar36;
      }
      uVar35 = uVar27 | 2;
      uVar36 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar35 = uVar27;
        uVar36 = uVar37;
      }
      local_128 = (uVar36 + uVar35) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar27 = 0;
    if (local_98 != 0) {
      uVar27 = uVar24 / local_98;
    }
    uVar44 = NEON_cnt((ulong)uVar33,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar33 & 0xffff0000) != 0;
      uVar24 = uVar33 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar33;
      }
      uVar37 = (uint)bVar19;
      uVar35 = uVar37 << 4 | 8;
      uVar36 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar35 = uVar37 << 4;
        uVar36 = uVar24;
      }
      uVar24 = uVar35 | 4;
      uVar37 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar24 = uVar35;
        uVar37 = uVar36;
      }
      uVar35 = uVar24 | 2;
      uVar36 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar35 = uVar24;
        uVar36 = uVar37;
      }
      local_144 = (uVar36 + uVar35) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar24 = 0;
    if (local_94 != 0) {
      uVar24 = uVar25 / local_94;
    }
    uVar44 = NEON_cnt((ulong)uVar27,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar25 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar25 = uVar27;
      }
      uVar37 = (uint)bVar19;
      uVar35 = uVar37 << 4 | 8;
      uVar36 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar35 = uVar37 << 4;
        uVar36 = uVar25;
      }
      uVar25 = uVar35 | 4;
      uVar37 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar25 = uVar35;
        uVar37 = uVar36;
      }
      uVar35 = uVar25 | 2;
      uVar36 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar35 = uVar25;
        uVar36 = uVar37;
      }
      local_12c = (uVar36 + uVar35) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar24,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar24 & 0xffff0000) != 0;
      uVar25 = uVar24 >> 0x10;
      if (!bVar19) {
        uVar25 = uVar24;
      }
      uVar37 = (uint)bVar19;
      uVar35 = uVar37 << 4 | 8;
      uVar36 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar35 = uVar37 << 4;
        uVar36 = uVar25;
      }
      uVar25 = uVar35 | 4;
      uVar37 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar25 = uVar35;
        uVar37 = uVar36;
      }
      uVar35 = uVar25 | 2;
      uVar36 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar35 = uVar25;
        uVar36 = uVar37;
      }
      local_148 = (uVar36 + uVar35) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar25 = *(uint *)(param_5 + 0x48);
    uVar35 = *(uint *)(param_5 + 0x4c);
    if (uVar25 < uVar35) {
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar33 < 2) {
        uVar33 = 1;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar25);
        uVar35 = *(uint *)(param_5 + 0x58);
        if (uVar35 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar36 = 0;
            uVar37 = uVar22 * (uVar20 * (uVar25 << (ulong)(local_144 & 0x1f)) +
                              (uVar35 << (ulong)(local_128 & 0x1f)));
            lVar34 = *(long *)param_3;
            do {
              uVar29 = 0;
              uVar3 = uVar37;
              do {
                uVar40 = (ulong)(uVar3 >> 3) & 0xffff;
                lVar39 = *(long *)(lVar34 + (ulong)(uVar3 >> 0x13) * 8);
                if ((uint)uVar40 < 0xfffd) {
                  uVar38 = *(uint *)(lVar39 + uVar40);
                }
                else {
                  uVar38 = (uVar3 >> 3) + 1;
                  uVar2 = (uVar3 >> 3) + 2;
                  uVar38 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar34 + (ulong)(uVar2 >> 0x10) * 8) +
                                           ((ulong)uVar2 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar34 + (ulong)(uVar38 >> 0x10) * 8)
                                                    + ((ulong)uVar38 & 0xffff)),
                                                   *(undefined *)(lVar39 + uVar40)));
                }
                uVar38 = uVar38 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
                if ((iVar31 == 2) || ((iVar31 == 0) != ((uVar38 & uVar14) != uVar6))) {
                  uVar38 = uVar38 >> (ulong)(uVar4 & 0x1f) & uVar13;
                  if (((int)uVar38 < iVar5) || (iVar28 < (int)uVar38)) {
                    if (DVar10 != (DensityMapFilter)0x0) goto LAB_007fe268;
                  }
                  else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007fe268:
                    if ((uVar7 == 0) || ((uVar38 & uVar7) != 0)) {
                      uVar36 = 0;
                      goto LAB_007fe298;
                    }
                  }
                }
                uVar29 = uVar29 + 1;
                uVar3 = uVar3 + uVar22;
              } while (uVar29 != uVar21);
              uVar36 = uVar36 + 1;
              uVar37 = uVar37 + uVar20 * uVar22;
            } while (uVar36 != uVar33);
LAB_007fe11c:
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007fe12c:
            uVar35 = uVar35 + 1;
          } while (uVar35 < *(uint *)(param_5 + 0x5c));
        }
        uVar35 = *(uint *)(param_5 + 0x4c);
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar35);
    }
  }
  else {
    uVar33 = 0;
    if (uVar20 != 0) {
      uVar33 = local_98 / uVar20;
    }
    uVar27 = 0;
    if (uVar21 != 0) {
      uVar27 = local_94 / uVar21;
    }
    uVar44 = NEON_cnt((ulong)uVar33,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar33 & 0xffff0000) != 0;
      uVar21 = uVar33 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar33;
      }
      uVar36 = (uint)bVar19;
      uVar33 = uVar36 << 4 | 8;
      uVar35 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar33 = uVar36 << 4;
        uVar35 = uVar21;
      }
      uVar21 = uVar33 | 4;
      uVar36 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar21 = uVar33;
        uVar36 = uVar35;
      }
      uVar33 = uVar21 | 2;
      uVar35 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar33 = uVar21;
        uVar35 = uVar36;
      }
      local_b8 = (uVar35 + uVar33) - 1;
    }
    else {
      local_b8 = 0;
    }
    uVar21 = 0;
    if (uVar24 != 0) {
      uVar21 = local_98 / uVar24;
    }
    uVar44 = NEON_cnt((ulong)uVar27,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar24 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar27;
      }
      uVar35 = (uint)bVar19;
      uVar33 = uVar35 << 4 | 8;
      uVar27 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar33 = uVar35 << 4;
        uVar27 = uVar24;
      }
      uVar24 = uVar33 | 4;
      uVar35 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar24 = uVar33;
        uVar35 = uVar27;
      }
      uVar33 = uVar24 | 2;
      uVar27 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar33 = uVar24;
        uVar27 = uVar35;
      }
      local_124 = (uVar27 + uVar33) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar24 = 0;
    if (uVar25 != 0) {
      uVar24 = local_94 / uVar25;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar25 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar25 = uVar21;
      }
      uVar27 = (uint)bVar19;
      uVar21 = uVar27 << 4 | 8;
      uVar33 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar21 = uVar27 << 4;
        uVar33 = uVar25;
      }
      uVar25 = uVar21 | 4;
      uVar27 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar25 = uVar21;
        uVar27 = uVar33;
      }
      uVar21 = uVar25 | 2;
      uVar33 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar21 = uVar25;
        uVar33 = uVar27;
      }
      local_ec = (uVar33 + uVar21) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar24,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar24 & 0xffff0000) != 0;
      uVar21 = uVar24 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar24;
      }
      uVar33 = (uint)bVar19;
      uVar24 = uVar33 << 4 | 8;
      uVar25 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar24 = uVar33 << 4;
        uVar25 = uVar21;
      }
      uVar21 = uVar24 | 4;
      uVar33 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar21 = uVar24;
        uVar33 = uVar25;
      }
      uVar24 = uVar21 | 2;
      uVar25 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar24 = uVar21;
        uVar25 = uVar33;
      }
      local_128 = (uVar25 + uVar24) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    uVar35 = *(uint *)(param_5 + 0x4c);
    if (uVar21 < uVar35) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar24 = *(uint *)(param_5 + 0x58);
        if (uVar24 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar39 = *(long *)param_3;
            uVar25 = ((uVar24 >> (ulong)(local_b8 & 0x1f)) +
                     (uVar21 >> (ulong)(local_124 & 0x1f)) * uVar20) * uVar22;
            uVar40 = (ulong)(uVar25 >> 3) & 0xffff;
            lVar34 = *(long *)(lVar39 + (ulong)(uVar25 >> 0x13) * 8);
            if ((uint)uVar40 < 0xfffd) {
              uVar33 = *(uint *)(lVar34 + uVar40);
            }
            else {
              uVar33 = (uVar25 >> 3) + 1;
              uVar27 = (uVar25 >> 3) + 2;
              uVar33 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar39 + (ulong)(uVar27 >> 0x10) * 8) +
                                       ((ulong)uVar27 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar39 + (ulong)(uVar33 >> 0x10) * 8) +
                                                ((ulong)uVar33 & 0xffff)),
                                               *(undefined *)(lVar34 + uVar40)));
            }
            uVar25 = uVar33 >> (ulong)(uVar25 & 7) & ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
            if (((((iVar31 == 2) || ((iVar31 == 0) != ((uVar25 & uVar14) != uVar6))) &&
                 ((DVar10 == (DensityMapFilter)0x0 &&
                  ((uVar7 == 0 || ((uVar25 >> (ulong)(uVar4 & 0x1f) & uVar13 & uVar7) != 0)))))) &&
                ((uVar25 = (**(code **)(*(long *)param_4 + 0x58))
                                     (param_4,uVar24 >> (ulong)(local_ec & 0x1f),
                                      uVar21 >> (ulong)(local_128 & 0x1f)), puVar18 = local_88,
                 iVar8 == 2 || ((iVar8 == 0) != ((uVar25 & uVar16) != uVar26))))) &&
               ((DVar11 == (DensityMapFilter)0x0 &&
                ((uVar9 == 0 || ((uVar25 >> (ulong)(uVar23 & 0x1f) & uVar15 & uVar9) != 0)))))) {
              uVar25 = local_88[0xd];
              iVar5 = (uVar21 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar32 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar5 + (uVar24 >> 5)) * uVar25) * 8)
              ;
              uVar33 = uVar24 & 0x1f | (uVar21 & 0x1f) << 5;
              local_80 = uVar24;
              uStack_7c = uVar21;
              uVar27 = (**ppcVar32)(ppcVar32,uVar33,0,local_88[0xf]);
              if (1 < puVar18[0xd]) {
                puVar41 = puVar18 + 0x11;
                uVar40 = 1;
                do {
                  ppcVar32 = *(code ***)
                              (*(long *)(puVar18 + 10) +
                              (ulong)(uVar25 * (iVar5 + (uVar24 >> 5)) + (int)uVar40) * 8);
                  iVar28 = (**ppcVar32)(ppcVar32,uVar33,0,*puVar41);
                  puVar1 = puVar41 + -1;
                  uVar40 = uVar40 + 1;
                  puVar41 = puVar41 + 2;
                  uVar27 = iVar28 << (ulong)(*puVar1 & 0x1f) | uVar27;
                } while (uVar40 < puVar18[0xd]);
              }
              local_78 = uVar27;
              DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
                        ((AddDensityProcessor<ChunkedBitSquare,true> *)param_6,
                         (HelperSource *)&local_98);
              uVar25 = local_78;
              puVar18 = local_88;
              if (uVar27 != local_78) {
                uVar33 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar27 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar39 = (ulong)uVar27 * 8;
                lVar34 = *(long *)(*(long *)(local_88 + 10) + lVar39);
                uVar44 = (**(code **)(lVar34 + 8))(lVar34,uVar33,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar18 + 10) + lVar39) = uVar44;
                if (1 < puVar18[0xd]) {
                  puVar41 = puVar18 + 0x11;
                  uVar40 = 1;
                  do {
                    lVar39 = (ulong)(uVar27 + (int)uVar40) * 8;
                    lVar34 = *(long *)(*(long *)(puVar18 + 10) + lVar39);
                    uVar44 = (**(code **)(lVar34 + 8))
                                       (lVar34,uVar33,0,*puVar41,
                                        uVar25 >> (ulong)(puVar41[-1] & 0x1f));
                    uVar40 = uVar40 + 1;
                    puVar41 = puVar41 + 2;
                    *(undefined8 *)(*(long *)(puVar18 + 10) + lVar39) = uVar44;
                  } while (uVar40 < puVar18[0xd]);
                }
              }
            }
            else {
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)(param_5 + 0x5c));
        }
        uVar35 = *(uint *)(param_5 + 0x4c);
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar35);
    }
  }
  bVar19 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar35,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_007fe50c:
  if (*(long *)(lVar17 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar19;
LAB_007fe298:
  uVar37 = 0;
LAB_007fe2c0:
  uVar29 = (**(code **)(*(long *)param_4 + 0x58))
                     (param_4,(uVar35 << (ulong)(local_12c & 0x1f)) + uVar37,
                      uVar36 + (uVar25 << (ulong)(local_148 & 0x1f)));
  puVar18 = local_88;
  if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar29 & uVar16) != uVar26))) ||
      (DVar11 != (DensityMapFilter)0x0)) ||
     ((uVar9 != 0 && ((uVar29 >> (ulong)(uVar23 & 0x1f) & uVar15 & uVar9) == 0))))
  goto LAB_007fe2b4;
  uVar36 = local_88[0xd];
  iVar12 = (uVar25 >> 5) << (ulong)(*local_88 & 0x1f);
  ppcVar32 = *(code ***)(*(long *)(local_88 + 10) + (ulong)((iVar12 + (uVar35 >> 5)) * uVar36) * 8);
  uVar37 = uVar35 & 0x1f | (uVar25 & 0x1f) << 5;
  local_80 = uVar35;
  uStack_7c = uVar25;
  uVar29 = (**ppcVar32)(ppcVar32,uVar37,0,local_88[0xf]);
  if (1 < puVar18[0xd]) {
    uVar40 = 1;
    puVar41 = puVar18 + 0x11;
    do {
      ppcVar32 = *(code ***)
                  (*(long *)(puVar18 + 10) +
                  (ulong)(uVar36 * (iVar12 + (uVar35 >> 5)) + (int)uVar40) * 8);
      iVar30 = (**ppcVar32)(ppcVar32,uVar37,0,*puVar41);
      puVar1 = puVar41 + -1;
      uVar40 = uVar40 + 1;
      puVar41 = puVar41 + 2;
      uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
    } while (uVar40 < puVar18[0xd]);
  }
  local_78 = uVar29;
  DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
            ((AddDensityProcessor<ChunkedBitSquare,true> *)param_6,(HelperSource *)&local_98);
  uVar36 = local_78;
  puVar18 = local_88;
  if (uVar29 != local_78) {
    uVar37 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
    uVar29 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) * local_88[0xd];
    lVar39 = (ulong)uVar29 * 8;
    lVar34 = *(long *)(*(long *)(local_88 + 10) + lVar39);
    uVar44 = (**(code **)(lVar34 + 8))(lVar34,uVar37,0,local_88[0xf],local_78);
    *(undefined8 *)(*(long *)(puVar18 + 10) + lVar39) = uVar44;
    if (1 < puVar18[0xd]) {
      puVar41 = puVar18 + 0x11;
      uVar40 = 1;
      do {
        lVar39 = (ulong)(uVar29 + (int)uVar40) * 8;
        lVar34 = *(long *)(*(long *)(puVar18 + 10) + lVar39);
        uVar44 = (**(code **)(lVar34 + 8))
                           (lVar34,uVar37,0,*puVar41,uVar36 >> (ulong)(puVar41[-1] & 0x1f));
        uVar40 = uVar40 + 1;
        puVar41 = puVar41 + 2;
        *(undefined8 *)(*(long *)(puVar18 + 10) + lVar39) = uVar44;
      } while (uVar40 < puVar18[0xd]);
    }
  }
  goto LAB_007fe12c;
LAB_007fe2b4:
  uVar37 = uVar37 + 1;
  if (uVar37 == uVar27) goto LAB_007fe288;
  goto LAB_007fe2c0;
LAB_007fe288:
  uVar36 = uVar36 + 1;
  if (uVar36 == uVar24) goto LAB_007fe11c;
  goto LAB_007fe298;
}


