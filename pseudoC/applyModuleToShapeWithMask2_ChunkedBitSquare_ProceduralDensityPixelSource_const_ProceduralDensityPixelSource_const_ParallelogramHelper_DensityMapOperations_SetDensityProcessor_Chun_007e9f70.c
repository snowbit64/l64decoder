// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007e9f70
// Size: 3708 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, SetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*,
   ParallelogramHelper&, DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true>&,
   DensityMapFilter const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,ProceduralDensityPixelSource *param_4,
               ParallelogramHelper *param_5,SetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  DensityMapFilter DVar8;
  DensityMapFilter DVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  code **ppcVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  long lVar35;
  long *plVar36;
  ulong uVar37;
  undefined2 uVar38;
  undefined8 uVar39;
  uint local_130;
  uint local_12c;
  uint local_118;
  uint local_114;
  uint local_ec;
  uint local_e0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar36 = *(long **)param_7;
  local_88 = (uint *)param_2;
  uVar18 = (**(code **)(*plVar36 + 0x18))(plVar36);
  uVar19 = (**(code **)(*plVar36 + 0x20))(plVar36);
  (**(code **)(*plVar36 + 0x30))(plVar36);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar2 = *(uint *)(param_7 + 0x10);
  uVar11 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar20 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar28 = *(int *)(param_7 + 8);
  plVar36 = *(long **)param_8;
  iVar3 = *(int *)(param_7 + 0x18);
  iVar25 = *(int *)(param_7 + 0x1c);
  DVar8 = param_7[0x20];
  uVar4 = *(uint *)(param_7 + 0xc);
  uVar5 = *(uint *)(param_7 + 0x24);
  uVar12 = ~(-1 << (ulong)(uVar20 & 0x1f));
  uVar21 = (**(code **)(*plVar36 + 0x18))(plVar36);
  uVar22 = (**(code **)(*plVar36 + 0x20))(plVar36);
  (**(code **)(*plVar36 + 0x30))(plVar36);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar20 = *(uint *)(param_8 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar6 = *(int *)(param_8 + 8);
  DVar9 = param_8[0x20];
  uVar7 = *(uint *)(param_8 + 0xc);
  uVar14 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar23 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar18) || (local_94 < uVar22)) || (local_94 < uVar19)) || (local_98 < uVar21))
  {
    if (((uVar18 < local_98) || (uVar22 < local_94)) || ((uVar19 < local_94 || (uVar21 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar28 != 0
         )) {
                    /* try { // try from 007eadb0 to 007eadbb has its CatchHandler @ 007eadec */
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
      goto LAB_007ead6c;
    }
    uVar24 = 0;
    if (local_98 != 0) {
      uVar24 = uVar18 / local_98;
    }
    uVar18 = 0;
    if (local_94 != 0) {
      uVar18 = uVar19 / local_94;
    }
    uVar39 = NEON_cnt((ulong)uVar24,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar17 = (uVar24 & 0xffff0000) != 0;
      uVar19 = uVar24 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar24;
      }
      uVar33 = (uint)bVar17;
      uVar31 = uVar33 << 4 | 8;
      uVar32 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar31 = uVar33 << 4;
        uVar32 = uVar19;
      }
      uVar19 = uVar31 | 4;
      uVar33 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar19 = uVar31;
        uVar33 = uVar32;
      }
      uVar31 = uVar19 | 2;
      uVar32 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar31 = uVar19;
        uVar32 = uVar33;
      }
      local_114 = (uVar32 + uVar31) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar19 = 0;
    if (local_98 != 0) {
      uVar19 = uVar21 / local_98;
    }
    uVar39 = NEON_cnt((ulong)uVar18,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar18;
      }
      uVar33 = (uint)bVar17;
      uVar31 = uVar33 << 4 | 8;
      uVar32 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar31 = uVar33 << 4;
        uVar32 = uVar21;
      }
      uVar21 = uVar31 | 4;
      uVar33 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar21 = uVar31;
        uVar33 = uVar32;
      }
      uVar31 = uVar21 | 2;
      uVar32 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar31 = uVar21;
        uVar32 = uVar33;
      }
      local_12c = (uVar32 + uVar31) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar21 = 0;
    if (local_94 != 0) {
      uVar21 = uVar22 / local_94;
    }
    uVar39 = NEON_cnt((ulong)uVar19,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar17 = (uVar19 & 0xffff0000) != 0;
      uVar22 = uVar19 >> 0x10;
      if (!bVar17) {
        uVar22 = uVar19;
      }
      uVar33 = (uint)bVar17;
      uVar31 = uVar33 << 4 | 8;
      uVar32 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar31 = uVar33 << 4;
        uVar32 = uVar22;
      }
      uVar22 = uVar31 | 4;
      uVar33 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar22 = uVar31;
        uVar33 = uVar32;
      }
      uVar31 = uVar22 | 2;
      uVar32 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar31 = uVar22;
        uVar32 = uVar33;
      }
      local_118 = (uVar32 + uVar31) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar21,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar17 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar17) {
        uVar22 = uVar21;
      }
      uVar33 = (uint)bVar17;
      uVar31 = uVar33 << 4 | 8;
      uVar32 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar31 = uVar33 << 4;
        uVar32 = uVar22;
      }
      uVar22 = uVar31 | 4;
      uVar33 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar22 = uVar31;
        uVar33 = uVar32;
      }
      uVar31 = uVar22 | 2;
      uVar32 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar31 = uVar22;
        uVar32 = uVar33;
      }
      local_130 = (uVar32 + uVar31) - 1;
    }
    else {
      local_130 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    uVar31 = *(uint *)(param_5 + 0x4c);
    if (uVar22 < uVar31) {
      if (uVar24 < 2) {
        uVar24 = 1;
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
        uVar31 = *(uint *)(param_5 + 0x58);
        if (uVar31 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar32 = 0;
            do {
              uVar33 = 0;
              do {
                uVar26 = (**(code **)(*(long *)param_3 + 0x58))
                                   (param_3,(uVar31 << (ulong)(local_114 & 0x1f)) + uVar33,
                                    uVar32 + (uVar22 << (ulong)(local_12c & 0x1f)));
                if ((iVar28 == 2) || ((iVar28 == 0) != ((uVar26 & uVar12) != uVar4))) {
                  uVar26 = uVar26 >> (ulong)(uVar2 & 0x1f) & uVar11;
                  if (((int)uVar26 < iVar3) || (iVar25 < (int)uVar26)) {
                    if (DVar8 != (DensityMapFilter)0x0) goto LAB_007eaac0;
                  }
                  else if (DVar8 == (DensityMapFilter)0x0) {
LAB_007eaac0:
                    if ((uVar5 == 0) || ((uVar26 & uVar5) != 0)) {
                      uVar32 = 0;
                      goto LAB_007eaaf8;
                    }
                  }
                }
                uVar33 = uVar33 + 1;
              } while (uVar33 != uVar24);
              uVar32 = uVar32 + 1;
            } while (uVar32 != uVar18);
LAB_007ea9d8:
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007ea9e4:
            uVar31 = uVar31 + 1;
          } while (uVar31 < *(uint *)(param_5 + 0x5c));
        }
        uVar31 = *(uint *)(param_5 + 0x4c);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar31);
    }
  }
  else {
    uVar24 = 0;
    if (uVar18 != 0) {
      uVar24 = local_98 / uVar18;
    }
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = local_94 / uVar19;
    }
    uVar39 = NEON_cnt((ulong)uVar24,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar17 = (uVar24 & 0xffff0000) != 0;
      uVar19 = uVar24 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar24;
      }
      uVar32 = (uint)bVar17;
      uVar24 = uVar32 << 4 | 8;
      uVar31 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar24 = uVar32 << 4;
        uVar31 = uVar19;
      }
      uVar19 = uVar24 | 4;
      uVar32 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar19 = uVar24;
        uVar32 = uVar31;
      }
      uVar24 = uVar19 | 2;
      uVar31 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar24 = uVar19;
        uVar31 = uVar32;
      }
      local_e0 = (uVar31 + uVar24) - 1;
    }
    else {
      local_e0 = 0;
    }
    uVar19 = 0;
    if (uVar21 != 0) {
      uVar19 = local_98 / uVar21;
    }
    uVar39 = NEON_cnt((ulong)uVar18,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar18;
      }
      uVar31 = (uint)bVar17;
      uVar18 = uVar31 << 4 | 8;
      uVar24 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar18 = uVar31 << 4;
        uVar24 = uVar21;
      }
      uVar21 = uVar18 | 4;
      uVar31 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar21 = uVar18;
        uVar31 = uVar24;
      }
      uVar18 = uVar21 | 2;
      uVar24 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar18 = uVar21;
        uVar24 = uVar31;
      }
      local_114 = (uVar24 + uVar18) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar18 = 0;
    if (uVar22 != 0) {
      uVar18 = local_94 / uVar22;
    }
    uVar39 = NEON_cnt((ulong)uVar19,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar17 = (uVar19 & 0xffff0000) != 0;
      uVar21 = uVar19 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar19;
      }
      uVar24 = (uint)bVar17;
      uVar19 = uVar24 << 4 | 8;
      uVar22 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar19 = uVar24 << 4;
        uVar22 = uVar21;
      }
      uVar21 = uVar19 | 4;
      uVar24 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar21 = uVar19;
        uVar24 = uVar22;
      }
      uVar19 = uVar21 | 2;
      uVar22 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar19 = uVar21;
        uVar22 = uVar24;
      }
      local_ec = (uVar22 + uVar19) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar18,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
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
      local_118 = (uVar21 + uVar18) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar18 = *(uint *)(param_5 + 0x48);
    uVar31 = *(uint *)(param_5 + 0x4c);
    if (uVar18 < uVar31) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar18);
        uVar19 = *(uint *)(param_5 + 0x58);
        if (uVar19 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar21 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar19 >> (ulong)(local_e0 & 0x1f),
                                uVar18 >> (ulong)(local_114 & 0x1f));
            if (((((iVar28 == 2) || ((iVar28 == 0) != ((uVar21 & uVar12) != uVar4))) &&
                 ((DVar8 == (DensityMapFilter)0x0 &&
                  ((uVar5 == 0 || ((uVar21 >> (ulong)(uVar2 & 0x1f) & uVar11 & uVar5) != 0)))))) &&
                ((uVar21 = (**(code **)(*(long *)param_4 + 0x58))
                                     (param_4,uVar19 >> (ulong)(local_ec & 0x1f),
                                      uVar18 >> (ulong)(local_118 & 0x1f)), puVar16 = local_88,
                 iVar6 == 2 || ((iVar6 == 0) != ((uVar21 & uVar14) != uVar7))))) &&
               ((DVar9 == (DensityMapFilter)0x0 &&
                ((uVar23 == 0 || ((uVar21 >> (ulong)(uVar20 & 0x1f) & uVar13 & uVar23) != 0)))))) {
              uVar21 = local_88[0xd];
              iVar3 = (uVar18 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar29 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar3 + (uVar19 >> 5)) * uVar21) * 8)
              ;
              uVar22 = uVar19 & 0x1f | (uVar18 & 0x1f) << 5;
              local_80 = uVar19;
              uStack_7c = uVar18;
              uVar24 = (**ppcVar29)(ppcVar29,uVar22,0,local_88[0xf]);
              if (1 < puVar16[0xd]) {
                puVar34 = puVar16 + 0x11;
                uVar37 = 1;
                do {
                  ppcVar29 = *(code ***)
                              (*(long *)(puVar16 + 10) +
                              (ulong)(uVar21 * (iVar3 + (uVar19 >> 5)) + (int)uVar37) * 8);
                  iVar25 = (**ppcVar29)(ppcVar29,uVar22,0,*puVar34);
                  puVar1 = puVar34 + -1;
                  uVar37 = uVar37 + 1;
                  puVar34 = puVar34 + 2;
                  uVar24 = iVar25 << (ulong)(*puVar1 & 0x1f) | uVar24;
                } while (uVar37 < puVar16[0xd]);
              }
              local_78 = uVar24;
              DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
                        ((SetDensityProcessor<ChunkedBitSquare,true> *)param_6,
                         (HelperSource *)&local_98);
              uVar21 = local_78;
              puVar16 = local_88;
              if (uVar24 != local_78) {
                uVar22 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar24 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar35 = (ulong)uVar24 * 8;
                lVar30 = *(long *)(*(long *)(local_88 + 10) + lVar35);
                uVar39 = (**(code **)(lVar30 + 8))(lVar30,uVar22,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar16 + 10) + lVar35) = uVar39;
                if (1 < puVar16[0xd]) {
                  puVar34 = puVar16 + 0x11;
                  uVar37 = 1;
                  do {
                    lVar35 = (ulong)(uVar24 + (int)uVar37) * 8;
                    lVar30 = *(long *)(*(long *)(puVar16 + 10) + lVar35);
                    uVar39 = (**(code **)(lVar30 + 8))
                                       (lVar30,uVar22,0,*puVar34,
                                        uVar21 >> (ulong)(puVar34[-1] & 0x1f));
                    uVar37 = uVar37 + 1;
                    puVar34 = puVar34 + 2;
                    *(undefined8 *)(*(long *)(puVar16 + 10) + lVar35) = uVar39;
                  } while (uVar37 < puVar16[0xd]);
                }
              }
            }
            else {
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(param_5 + 0x5c));
        }
        uVar31 = *(uint *)(param_5 + 0x4c);
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar31);
    }
  }
  bVar17 = true;
  if (param_6[100] != (SetDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x50),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar31,*(uint *)(param_6 + 0x1c),*(uint *)(param_6 + 0x20),
               *(uint *)(param_6 + 0x68),(bool)param_6[0x65],true,true);
  }
LAB_007ead6c:
  if (*(long *)(lVar15 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar17;
LAB_007eaaf8:
  uVar33 = 0;
LAB_007eab1c:
  uVar26 = (**(code **)(*(long *)param_4 + 0x58))
                     (param_4,(uVar31 << (ulong)(local_118 & 0x1f)) + uVar33,
                      uVar32 + (uVar22 << (ulong)(local_130 & 0x1f)));
  puVar16 = local_88;
  if ((((iVar6 != 2) && ((iVar6 == 0) == ((uVar26 & uVar14) != uVar7))) ||
      (DVar9 != (DensityMapFilter)0x0)) ||
     ((uVar23 != 0 && ((uVar26 >> (ulong)(uVar20 & 0x1f) & uVar13 & uVar23) == 0))))
  goto LAB_007eab10;
  uVar32 = local_88[0xd];
  iVar10 = (uVar22 >> 5) << (ulong)(*local_88 & 0x1f);
  ppcVar29 = *(code ***)(*(long *)(local_88 + 10) + (ulong)((iVar10 + (uVar31 >> 5)) * uVar32) * 8);
  uVar33 = uVar31 & 0x1f | (uVar22 & 0x1f) << 5;
  local_80 = uVar31;
  uStack_7c = uVar22;
  uVar26 = (**ppcVar29)(ppcVar29,uVar33,0,local_88[0xf]);
  if (1 < puVar16[0xd]) {
    uVar37 = 1;
    puVar34 = puVar16 + 0x11;
    do {
      ppcVar29 = *(code ***)
                  (*(long *)(puVar16 + 10) +
                  (ulong)(uVar32 * (iVar10 + (uVar31 >> 5)) + (int)uVar37) * 8);
      iVar27 = (**ppcVar29)(ppcVar29,uVar33,0,*puVar34);
      puVar1 = puVar34 + -1;
      uVar37 = uVar37 + 1;
      puVar34 = puVar34 + 2;
      uVar26 = iVar27 << (ulong)(*puVar1 & 0x1f) | uVar26;
    } while (uVar37 < puVar16[0xd]);
  }
  local_78 = uVar26;
  DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
            ((SetDensityProcessor<ChunkedBitSquare,true> *)param_6,(HelperSource *)&local_98);
  uVar32 = local_78;
  puVar16 = local_88;
  if (uVar26 != local_78) {
    uVar33 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
    uVar26 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) * local_88[0xd];
    lVar35 = (ulong)uVar26 * 8;
    lVar30 = *(long *)(*(long *)(local_88 + 10) + lVar35);
    uVar39 = (**(code **)(lVar30 + 8))(lVar30,uVar33,0,local_88[0xf],local_78);
    *(undefined8 *)(*(long *)(puVar16 + 10) + lVar35) = uVar39;
    if (1 < puVar16[0xd]) {
      puVar34 = puVar16 + 0x11;
      uVar37 = 1;
      do {
        lVar35 = (ulong)(uVar26 + (int)uVar37) * 8;
        lVar30 = *(long *)(*(long *)(puVar16 + 10) + lVar35);
        uVar39 = (**(code **)(lVar30 + 8))
                           (lVar30,uVar33,0,*puVar34,uVar32 >> (ulong)(puVar34[-1] & 0x1f));
        uVar37 = uVar37 + 1;
        puVar34 = puVar34 + 2;
        *(undefined8 *)(*(long *)(puVar16 + 10) + lVar35) = uVar39;
      } while (uVar37 < puVar16[0xd]);
    }
  }
  goto LAB_007ea9e4;
LAB_007eab10:
  uVar33 = uVar33 + 1;
  if (uVar33 == uVar19) goto LAB_007eaae8;
  goto LAB_007eab1c;
LAB_007eaae8:
  uVar32 = uVar32 + 1;
  if (uVar32 == uVar21) goto LAB_007ea9d8;
  goto LAB_007eaaf8;
}


