// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007e8fd8
// Size: 3968 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, BitVector * param_4, ParallelogramHelper * param_5, SetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare,
   ProceduralDensityPixelSource const, BitVector, ParallelogramHelper,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,BitVector *param_4,ParallelogramHelper *param_5
               ,SetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

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
  uint local_140;
  uint local_13c;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_c8;
  uint local_bc;
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
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar22 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar42 = *(long **)param_8;
  iVar31 = *(int *)(param_7 + 0x18);
  uVar5 = *(uint *)(param_7 + 0xc);
  DVar10 = param_7[0x20];
  iVar6 = *(int *)(param_7 + 8);
  iVar28 = *(int *)(param_7 + 0x1c);
  uVar14 = ~(-1 << (ulong)(uVar22 & 0x1f));
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar23 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar24 = (**(code **)(*plVar42 + 0x20))(plVar42);
  uVar25 = (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar22 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  DVar11 = param_8[0x20];
  uVar9 = *(uint *)(param_8 + 0xc);
  uVar16 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar26 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar20) || (local_94 < uVar24)) || (local_94 < uVar21)) || (local_98 < uVar23))
  {
    if (((uVar20 < local_98) || (uVar24 < local_94)) || ((uVar21 < local_94 || (uVar23 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar31 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar31 != 0
         )) {
                    /* try { // try from 007e9f1c to 007e9f27 has its CatchHandler @ 007e9f58 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar20,(ulong)uVar21,(ulong)uVar23,(ulong)uVar24,(ulong)local_98,
                         (ulong)local_94);
      bVar19 = false;
      goto LAB_007e9ed4;
    }
    uVar33 = 0;
    if (local_98 != 0) {
      uVar33 = uVar20 / local_98;
    }
    uVar20 = 0;
    if (local_94 != 0) {
      uVar20 = uVar21 / local_94;
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
      uVar27 = uVar36 << 4 | 8;
      uVar35 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar27 = uVar36 << 4;
        uVar35 = uVar21;
      }
      uVar21 = uVar27 | 4;
      uVar36 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar21 = uVar27;
        uVar36 = uVar35;
      }
      uVar27 = uVar21 | 2;
      uVar35 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar27 = uVar21;
        uVar35 = uVar36;
      }
      local_11c = (uVar35 + uVar27) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar20,1);
    uVar21 = 0;
    if (local_98 != 0) {
      uVar21 = uVar23 / local_98;
    }
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar27 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar27 = uVar20;
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
      local_13c = (uVar36 + uVar35) - 1;
    }
    else {
      local_13c = 0;
    }
    uVar27 = 0;
    if (local_94 != 0) {
      uVar27 = uVar24 / local_94;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar24 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar21;
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
      local_124 = (uVar36 + uVar35) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar27,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar24 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar27;
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
      local_140 = (uVar36 + uVar35) - 1;
    }
    else {
      local_140 = 0;
    }
    uVar24 = *(uint *)(param_5 + 0x48);
    uVar35 = *(uint *)(param_5 + 0x4c);
    if (uVar24 < uVar35) {
      if (uVar33 < 2) {
        uVar33 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar24);
        uVar35 = *(uint *)(param_5 + 0x58);
        if (uVar35 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar36 = 0;
            do {
              uVar37 = 0;
              do {
                uVar29 = (**(code **)(*(long *)param_3 + 0x58))
                                   (param_3,(uVar35 << (ulong)(local_11c & 0x1f)) + uVar37,
                                    uVar36 + (uVar24 << (ulong)(local_13c & 0x1f)));
                puVar18 = local_88;
                if ((iVar6 == 2) || ((iVar6 == 0) != ((uVar29 & uVar14) != uVar5))) {
                  uVar29 = uVar29 >> (ulong)(uVar4 & 0x1f) & uVar13;
                  if (((int)uVar29 < iVar31) || (iVar28 < (int)uVar29)) {
                    if (DVar10 != (DensityMapFilter)0x0) goto LAB_007e9bd0;
                  }
                  else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007e9bd0:
                    if ((uVar7 == 0) || ((uVar29 & uVar7) != 0)) {
                      uVar36 = 0;
                      uVar37 = uVar25 * (uVar23 * (uVar24 << (ulong)(local_140 & 0x1f)) +
                                        (uVar35 << (ulong)(local_124 & 0x1f)));
                      lVar34 = *(long *)param_4;
                      goto LAB_007e9c28;
                    }
                  }
                }
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar33);
              uVar36 = uVar36 + 1;
            } while (uVar36 != uVar20);
LAB_007e9ae4:
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007e9af0:
            uVar35 = uVar35 + 1;
          } while (uVar35 < *(uint *)(param_5 + 0x5c));
        }
        uVar35 = *(uint *)(param_5 + 0x4c);
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar35);
    }
  }
  else {
    uVar33 = 0;
    if (uVar20 != 0) {
      uVar33 = local_98 / uVar20;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = local_94 / uVar21;
    }
    uVar44 = NEON_cnt((ulong)uVar33,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar33 & 0xffff0000) != 0;
      uVar21 = uVar33 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar33;
      }
      uVar35 = (uint)bVar19;
      uVar33 = uVar35 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar33 = uVar35 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar33 | 4;
      uVar35 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar33;
        uVar35 = uVar27;
      }
      uVar33 = uVar21 | 2;
      uVar27 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar33 = uVar21;
        uVar27 = uVar35;
      }
      local_bc = (uVar27 + uVar33) - 1;
    }
    else {
      local_bc = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar20,1);
    uVar21 = 0;
    if (uVar23 != 0) {
      uVar21 = local_98 / uVar23;
    }
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar33 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar33 = uVar20;
      }
      uVar35 = (uint)bVar19;
      uVar20 = uVar35 << 4 | 8;
      uVar27 = uVar33 >> 8;
      if (uVar33 < 0x100) {
        uVar20 = uVar35 << 4;
        uVar27 = uVar33;
      }
      uVar33 = uVar20 | 4;
      uVar35 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar33 = uVar20;
        uVar35 = uVar27;
      }
      uVar20 = uVar33 | 2;
      uVar27 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar20 = uVar33;
        uVar27 = uVar35;
      }
      local_11c = (uVar27 + uVar20) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar20 = 0;
    if (uVar24 != 0) {
      uVar20 = local_94 / uVar24;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar24 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar21;
      }
      uVar27 = (uint)bVar19;
      uVar21 = uVar27 << 4 | 8;
      uVar33 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar21 = uVar27 << 4;
        uVar33 = uVar24;
      }
      uVar24 = uVar21 | 4;
      uVar27 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar24 = uVar21;
        uVar27 = uVar33;
      }
      uVar21 = uVar24 | 2;
      uVar33 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar21 = uVar24;
        uVar33 = uVar27;
      }
      local_c8 = (uVar33 + uVar21) - 1;
    }
    else {
      local_c8 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar20,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar33 = (uint)bVar19;
      uVar20 = uVar33 << 4 | 8;
      uVar24 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar20 = uVar33 << 4;
        uVar24 = uVar21;
      }
      uVar21 = uVar20 | 4;
      uVar33 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar21 = uVar20;
        uVar33 = uVar24;
      }
      uVar20 = uVar21 | 2;
      uVar24 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar20 = uVar21;
        uVar24 = uVar33;
      }
      local_120 = (uVar24 + uVar20) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    uVar35 = *(uint *)(param_5 + 0x4c);
    if (uVar20 < uVar35) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar21 = *(uint *)(param_5 + 0x58);
        if (uVar21 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar24 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar21 >> (ulong)(local_bc & 0x1f),
                                uVar20 >> (ulong)(local_11c & 0x1f));
            puVar18 = local_88;
            if (((iVar6 == 2) || ((iVar6 == 0) != ((uVar24 & uVar14) != uVar5))) &&
               ((DVar10 == (DensityMapFilter)0x0 &&
                ((uVar7 == 0 || ((uVar24 >> (ulong)(uVar4 & 0x1f) & uVar13 & uVar7) != 0)))))) {
              lVar39 = *(long *)param_4;
              uVar24 = ((uVar21 >> (ulong)(local_c8 & 0x1f)) +
                       (uVar20 >> (ulong)(local_120 & 0x1f)) * uVar23) * uVar25;
              uVar40 = (ulong)(uVar24 >> 3) & 0xffff;
              lVar34 = *(long *)(lVar39 + (ulong)(uVar24 >> 0x13) * 8);
              if ((uint)uVar40 < 0xfffd) {
                uVar33 = *(uint *)(lVar34 + uVar40);
              }
              else {
                uVar33 = (uVar24 >> 3) + 1;
                uVar27 = (uVar24 >> 3) + 2;
                uVar33 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar39 + (ulong)(uVar27 >> 0x10) * 8) +
                                         ((ulong)uVar27 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar39 + (ulong)(uVar33 >> 0x10) * 8) +
                                                  ((ulong)uVar33 & 0xffff)),
                                                 *(undefined *)(lVar34 + uVar40)));
              }
              uVar24 = uVar33 >> (ulong)(uVar24 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
              if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar24 & uVar16) != uVar9))) ||
                  (DVar11 != (DensityMapFilter)0x0)) ||
                 ((uVar26 != 0 && ((uVar24 >> (ulong)(uVar22 & 0x1f) & uVar15 & uVar26) == 0))))
              goto LAB_007e9884;
              uVar24 = local_88[0xd];
              iVar31 = (uVar20 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar32 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar31 + (uVar21 >> 5)) * uVar24) * 8
                          );
              uVar33 = uVar21 & 0x1f | (uVar20 & 0x1f) << 5;
              local_80 = uVar21;
              uStack_7c = uVar20;
              uVar27 = (**ppcVar32)(ppcVar32,uVar33,0,local_88[0xf]);
              if (1 < puVar18[0xd]) {
                puVar41 = puVar18 + 0x11;
                uVar40 = 1;
                do {
                  ppcVar32 = *(code ***)
                              (*(long *)(puVar18 + 10) +
                              (ulong)(uVar24 * (iVar31 + (uVar21 >> 5)) + (int)uVar40) * 8);
                  iVar28 = (**ppcVar32)(ppcVar32,uVar33,0,*puVar41);
                  puVar1 = puVar41 + -1;
                  uVar40 = uVar40 + 1;
                  puVar41 = puVar41 + 2;
                  uVar27 = iVar28 << (ulong)(*puVar1 & 0x1f) | uVar27;
                } while (uVar40 < puVar18[0xd]);
              }
              local_78 = uVar27;
              DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
                        ((SetDensityProcessor<ChunkedBitSquare,true> *)param_6,
                         (HelperSource *)&local_98);
              uVar24 = local_78;
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
                                        uVar24 >> (ulong)(puVar41[-1] & 0x1f));
                    uVar40 = uVar40 + 1;
                    puVar41 = puVar41 + 2;
                    *(undefined8 *)(*(long *)(puVar18 + 10) + lVar39) = uVar44;
                  } while (uVar40 < puVar18[0xd]);
                }
              }
            }
            else {
LAB_007e9884:
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(param_5 + 0x5c));
        }
        uVar35 = *(uint *)(param_5 + 0x4c);
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar35);
    }
  }
  bVar19 = true;
  if (param_6[100] != (SetDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x50),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar35,*(uint *)(param_6 + 0x1c),*(uint *)(param_6 + 0x20),
               *(uint *)(param_6 + 0x68),(bool)param_6[0x65],true,true);
  }
LAB_007e9ed4:
  if (*(long *)(lVar17 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar19;
LAB_007e9c28:
  uVar29 = 0;
  uVar3 = uVar37;
LAB_007e9c64:
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
                                      (*(long *)(lVar34 + (ulong)(uVar38 >> 0x10) * 8) +
                                      ((ulong)uVar38 & 0xffff)),*(undefined *)(lVar39 + uVar40)));
  }
  uVar38 = uVar38 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
  if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar38 & uVar16) != uVar9))) ||
      (DVar11 != (DensityMapFilter)0x0)) ||
     ((uVar26 != 0 && ((uVar38 >> (ulong)(uVar22 & 0x1f) & uVar15 & uVar26) == 0))))
  goto LAB_007e9c54;
  uVar36 = local_88[0xd];
  iVar12 = (uVar24 >> 5) << (ulong)(*local_88 & 0x1f);
  ppcVar32 = *(code ***)(*(long *)(local_88 + 10) + (ulong)((iVar12 + (uVar35 >> 5)) * uVar36) * 8);
  uVar37 = uVar35 & 0x1f | (uVar24 & 0x1f) << 5;
  local_80 = uVar35;
  uStack_7c = uVar24;
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
  DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
            ((SetDensityProcessor<ChunkedBitSquare,true> *)param_6,(HelperSource *)&local_98);
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
  goto LAB_007e9af0;
LAB_007e9c54:
  uVar29 = uVar29 + 1;
  uVar3 = uVar3 + uVar25;
  if (uVar29 == uVar21) goto LAB_007e9c10;
  goto LAB_007e9c64;
LAB_007e9c10:
  uVar36 = uVar36 + 1;
  uVar37 = uVar37 + uVar23 * uVar25;
  if (uVar36 == uVar27) goto LAB_007e9ae4;
  goto LAB_007e9c28;
}


