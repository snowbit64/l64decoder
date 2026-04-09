// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007e7fd0
// Size: 4080 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, SetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::SetDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,ChunkedBitSquare *param_4,
               ParallelogramHelper *param_5,SetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  DensityMapFilter DVar11;
  DensityMapFilter DVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  code **ppcVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined4 *puVar40;
  long lVar41;
  uint *puVar42;
  ulong uVar43;
  long *plVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_158;
  uint local_154;
  uint local_140;
  uint local_13c;
  uint local_124;
  uint local_110;
  uint local_d0;
  uint local_9c;
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
  uVar20 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar21 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar6 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar22 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar33 = *(int *)(param_7 + 8);
  plVar44 = *(long **)param_8;
  DVar11 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0xc);
  uVar8 = *(uint *)(param_7 + 0x24);
  iVar27 = *(int *)(param_7 + 0x18);
  uVar15 = ~(-1 << (ulong)(uVar22 & 0x1f));
  iVar28 = *(int *)(param_7 + 0x1c);
  uVar23 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar24 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar22 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  DVar12 = param_8[0x20];
  uVar17 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar25 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar20) || (local_94 < uVar24)) || (local_94 < uVar21)) || (local_98 < uVar23))
  {
    if (((uVar20 < local_98) || (uVar24 < local_94)) || ((uVar21 < local_94 || (uVar23 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar33 != 0
         )) {
                    /* try { // try from 007e8f84 to 007e8f8f has its CatchHandler @ 007e8fc0 */
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
      goto LAB_007e8f3c;
    }
    uVar36 = 0;
    if (local_98 != 0) {
      uVar36 = uVar20 / local_98;
    }
    uVar20 = 0;
    if (local_94 != 0) {
      uVar20 = uVar21 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar36,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar36 & 0xffff0000) != 0;
      uVar21 = uVar36 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar36;
      }
      uVar38 = (uint)bVar19;
      uVar26 = uVar38 << 4 | 8;
      uVar37 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar38 << 4;
        uVar37 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar21 = uVar26;
        uVar38 = uVar37;
      }
      uVar26 = uVar21 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar26 = uVar21;
        uVar37 = uVar38;
      }
      local_13c = (uVar37 + uVar26) - 1;
    }
    else {
      local_13c = 0;
    }
    uVar21 = 0;
    if (local_98 != 0) {
      uVar21 = uVar23 / local_98;
    }
    uVar46 = NEON_cnt((ulong)uVar20,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar23 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar20;
      }
      uVar38 = (uint)bVar19;
      uVar26 = uVar38 << 4 | 8;
      uVar37 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar26 = uVar38 << 4;
        uVar37 = uVar23;
      }
      uVar23 = uVar26 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar23 = uVar26;
        uVar38 = uVar37;
      }
      uVar26 = uVar23 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar26 = uVar23;
        uVar37 = uVar38;
      }
      local_154 = (uVar37 + uVar26) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar23 = 0;
    if (local_94 != 0) {
      uVar23 = uVar24 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar24 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar21;
      }
      uVar38 = (uint)bVar19;
      uVar26 = uVar38 << 4 | 8;
      uVar37 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar26 = uVar38 << 4;
        uVar37 = uVar24;
      }
      uVar24 = uVar26 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar24 = uVar26;
        uVar38 = uVar37;
      }
      uVar26 = uVar24 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar26 = uVar24;
        uVar37 = uVar38;
      }
      local_140 = (uVar37 + uVar26) - 1;
    }
    else {
      local_140 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar23 & 0xffff0000) != 0;
      uVar24 = uVar23 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar23;
      }
      uVar38 = (uint)bVar19;
      uVar26 = uVar38 << 4 | 8;
      uVar37 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar26 = uVar38 << 4;
        uVar37 = uVar24;
      }
      uVar24 = uVar26 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar24 = uVar26;
        uVar38 = uVar37;
      }
      uVar26 = uVar24 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar26 = uVar24;
        uVar37 = uVar38;
      }
      local_158 = (uVar37 + uVar26) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar24 = *(uint *)(param_5 + 0x48);
    uVar26 = *(uint *)(param_5 + 0x4c);
    if (uVar24 < uVar26) {
      if (uVar36 < 2) {
        uVar36 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar24);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
LAB_007e8b10:
          uVar37 = 0;
          do {
            uVar38 = 0;
            do {
              uVar29 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar26 << (ulong)(local_13c & 0x1f)) + uVar38,
                                  uVar37 + (uVar24 << (ulong)(local_154 & 0x1f)));
              if ((iVar33 == 2) || ((iVar33 == 0) != ((uVar29 & uVar15) != uVar7))) {
                uVar29 = uVar29 >> (ulong)(uVar6 & 0x1f) & uVar14;
                if (((int)uVar29 < iVar27) || (iVar28 < (int)uVar29)) {
                  if (DVar11 != (DensityMapFilter)0x0) goto LAB_007e8bcc;
                }
                else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007e8bcc:
                  if ((uVar8 == 0) || ((uVar29 & uVar8) != 0)) {
                    uVar37 = 0;
                    uVar38 = uVar26 << (ulong)(local_140 & 0x1f);
                    goto LAB_007e8c0c;
                  }
                }
              }
              uVar38 = uVar38 + 1;
            } while (uVar38 != uVar36);
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar20);
          goto LAB_007e8adc;
        }
LAB_007e8a84:
        uVar26 = *(uint *)(param_5 + 0x4c);
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar26);
    }
  }
  else {
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar36 = local_98 / uVar20;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = local_94 / uVar21;
    }
    uVar46 = NEON_cnt((ulong)uVar36,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar36 & 0xffff0000) != 0;
      uVar21 = uVar36 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar36;
      }
      uVar37 = (uint)bVar19;
      uVar36 = uVar37 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar36 = uVar37 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar36 | 4;
      uVar37 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar36;
        uVar37 = uVar26;
      }
      uVar36 = uVar21 | 2;
      uVar26 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar36 = uVar21;
        uVar26 = uVar37;
      }
      local_9c = (uVar26 + uVar36) - 1;
    }
    else {
      local_9c = 0;
    }
    uVar21 = 0;
    if (uVar23 != 0) {
      uVar21 = local_98 / uVar23;
    }
    uVar46 = NEON_cnt((ulong)uVar20,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar23 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar20;
      }
      uVar26 = (uint)bVar19;
      uVar20 = uVar26 << 4 | 8;
      uVar36 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar20 = uVar26 << 4;
        uVar36 = uVar23;
      }
      uVar23 = uVar20 | 4;
      uVar26 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar23 = uVar20;
        uVar26 = uVar36;
      }
      uVar20 = uVar23 | 2;
      uVar36 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar20 = uVar23;
        uVar36 = uVar26;
      }
      local_110 = (uVar36 + uVar20) - 1;
    }
    else {
      local_110 = 0;
    }
    uVar20 = 0;
    if (uVar24 != 0) {
      uVar20 = local_94 / uVar24;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar23 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar21;
      }
      uVar36 = (uint)bVar19;
      uVar21 = uVar36 << 4 | 8;
      uVar24 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar21 = uVar36 << 4;
        uVar24 = uVar23;
      }
      uVar23 = uVar21 | 4;
      uVar36 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar23 = uVar21;
        uVar36 = uVar24;
      }
      uVar21 = uVar23 | 2;
      uVar24 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar21 = uVar23;
        uVar24 = uVar36;
      }
      local_d0 = (uVar24 + uVar21) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar20,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar24 = (uint)bVar19;
      uVar20 = uVar24 << 4 | 8;
      uVar23 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar20 = uVar24 << 4;
        uVar23 = uVar21;
      }
      uVar21 = uVar20 | 4;
      uVar24 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar21 = uVar20;
        uVar24 = uVar23;
      }
      uVar20 = uVar21 | 2;
      uVar23 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar20 = uVar21;
        uVar23 = uVar24;
      }
      local_124 = (uVar23 + uVar20) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    uVar26 = *(uint *)(param_5 + 0x4c);
    if (uVar20 < uVar26) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar21 = *(uint *)(param_5 + 0x58);
        if (uVar21 < *(uint *)(param_5 + 0x5c)) {
          uVar23 = uVar20 >> (ulong)(local_124 & 0x1f);
          do {
            uVar24 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar21 >> (ulong)(local_9c & 0x1f),
                                uVar20 >> (ulong)(local_110 & 0x1f));
            if ((((iVar33 == 2) || ((iVar33 == 0) != ((uVar24 & uVar15) != uVar7))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar24 >> (ulong)(uVar6 & 0x1f) & uVar14 & uVar8) != 0)))) {
              uVar24 = uVar21 >> (ulong)(local_d0 & 0x1f);
              uVar36 = (((uVar23 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar24 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar34 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar36 * 8);
              uVar24 = uVar24 & 0x1f | (uVar23 & 0x1f) << 5;
              uVar26 = (**ppcVar34)(ppcVar34,uVar24,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar43 = 1;
                puVar40 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar36 + (int)uVar43) * 8);
                  iVar27 = (**ppcVar34)(ppcVar34,uVar24,0,*puVar40);
                  puVar1 = puVar40 + -1;
                  uVar43 = uVar43 + 1;
                  puVar40 = puVar40 + 2;
                  uVar26 = iVar27 << (ulong)(*puVar1 & 0x1f) | uVar26;
                } while (uVar43 < *(uint *)(param_4 + 0x34));
              }
              puVar1 = local_88;
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar26 & uVar17) != uVar10))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar25 != 0 && ((uVar26 >> (ulong)(uVar22 & 0x1f) & uVar16 & uVar25) == 0))))))
              goto LAB_007e8868;
              uVar24 = local_88[0xd];
              iVar27 = (uVar20 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar34 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar27 + (uVar21 >> 5)) * uVar24) * 8
                          );
              uVar36 = uVar21 & 0x1f | (uVar20 & 0x1f) << 5;
              local_80 = uVar21;
              uStack_7c = uVar20;
              uVar26 = (**ppcVar34)(ppcVar34,uVar36,0,local_88[0xf]);
              if (1 < puVar1[0xd]) {
                uVar43 = 1;
                puVar42 = puVar1 + 0x11;
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(puVar1 + 10) +
                              (ulong)(uVar24 * (iVar27 + (uVar21 >> 5)) + (int)uVar43) * 8);
                  iVar28 = (**ppcVar34)(ppcVar34,uVar36,0,*puVar42);
                  puVar2 = puVar42 + -1;
                  uVar43 = uVar43 + 1;
                  puVar42 = puVar42 + 2;
                  uVar26 = iVar28 << (ulong)(*puVar2 & 0x1f) | uVar26;
                } while (uVar43 < puVar1[0xd]);
              }
              local_78 = uVar26;
              DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
                        ((SetDensityProcessor<ChunkedBitSquare,true> *)param_6,
                         (HelperSource *)&local_98);
              uVar24 = local_78;
              puVar1 = local_88;
              if (uVar26 != local_78) {
                uVar36 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar26 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar41 = (ulong)uVar26 * 8;
                lVar35 = *(long *)(*(long *)(local_88 + 10) + lVar41);
                uVar46 = (**(code **)(lVar35 + 8))(lVar35,uVar36,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
                if (1 < puVar1[0xd]) {
                  puVar42 = puVar1 + 0x11;
                  uVar43 = 1;
                  do {
                    lVar41 = (ulong)(uVar26 + (int)uVar43) * 8;
                    lVar35 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
                    uVar46 = (**(code **)(lVar35 + 8))
                                       (lVar35,uVar36,0,*puVar42,
                                        uVar24 >> (ulong)(puVar42[-1] & 0x1f));
                    uVar43 = uVar43 + 1;
                    puVar42 = puVar42 + 2;
                    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
                  } while (uVar43 < puVar1[0xd]);
                }
              }
            }
            else {
LAB_007e8868:
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(param_5 + 0x5c));
        }
        uVar26 = *(uint *)(param_5 + 0x4c);
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar26);
    }
  }
  bVar19 = true;
  if (param_6[100] != (SetDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x50),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar26,*(uint *)(param_6 + 0x1c),*(uint *)(param_6 + 0x20),
               *(uint *)(param_6 + 0x68),(bool)param_6[0x65],true,true);
  }
LAB_007e8f3c:
  if (*(long *)(lVar18 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar19;
LAB_007e8c0c:
  do {
    uVar29 = 0;
    uVar43 = (ulong)*(uint *)(param_4 + 0x34);
    uVar4 = uVar37 + (uVar24 << (ulong)(local_158 & 0x1f));
    uVar3 = uVar38;
    do {
      uVar5 = uVar29 + uVar38;
      iVar13 = (uVar4 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar32 = (int)uVar43;
      ppcVar34 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar13 + (uVar5 >> 5)) * iVar32) * 8);
      uVar5 = uVar5 & 0x1f | (uVar4 & 0x1f) << 5;
      uVar30 = (**ppcVar34)(ppcVar34,uVar5,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar43 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar9 != 2) goto LAB_007e8d18;
LAB_007e8d38:
        puVar1 = local_88;
        if ((DVar12 != (DensityMapFilter)0x0) ||
           ((uVar25 != 0 && ((uVar30 >> (ulong)(uVar22 & 0x1f) & uVar16 & uVar25) == 0))))
        goto LAB_007e8c40;
        uVar37 = local_88[0xd];
        iVar13 = (uVar24 >> 5) << (ulong)(*local_88 & 0x1f);
        ppcVar34 = *(code ***)
                    (*(long *)(local_88 + 10) + (ulong)((iVar13 + (uVar26 >> 5)) * uVar37) * 8);
        uVar38 = uVar26 & 0x1f | (uVar24 & 0x1f) << 5;
        local_80 = uVar26;
        uStack_7c = uVar24;
        uVar29 = (**ppcVar34)(ppcVar34,uVar38,0,local_88[0xf]);
        if (1 < puVar1[0xd]) {
          uVar43 = 1;
          puVar42 = puVar1 + 0x11;
          do {
            ppcVar34 = *(code ***)
                        (*(long *)(puVar1 + 10) +
                        (ulong)(uVar37 * (iVar13 + (uVar26 >> 5)) + (int)uVar43) * 8);
            iVar32 = (**ppcVar34)(ppcVar34,uVar38,0,*puVar42);
            puVar2 = puVar42 + -1;
            uVar43 = uVar43 + 1;
            puVar42 = puVar42 + 2;
            uVar29 = iVar32 << (ulong)(*puVar2 & 0x1f) | uVar29;
          } while (uVar43 < puVar1[0xd]);
        }
        local_78 = uVar29;
        DensityMapOperations::SetDensityProcessor<ChunkedBitSquare,true>::process
                  ((SetDensityProcessor<ChunkedBitSquare,true> *)param_6,(HelperSource *)&local_98);
        uVar37 = local_78;
        puVar1 = local_88;
        if (uVar29 != local_78) {
          uVar38 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
          uVar29 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                   local_88[0xd];
          lVar41 = (ulong)uVar29 * 8;
          lVar35 = *(long *)(*(long *)(local_88 + 10) + lVar41);
          uVar46 = (**(code **)(lVar35 + 8))(lVar35,uVar38,0,local_88[0xf],local_78);
          *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
          if (1 < puVar1[0xd]) {
            puVar42 = puVar1 + 0x11;
            uVar43 = 1;
            do {
              lVar41 = (ulong)(uVar29 + (int)uVar43) * 8;
              lVar35 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
              uVar46 = (**(code **)(lVar35 + 8))
                                 (lVar35,uVar38,0,*puVar42,uVar37 >> (ulong)(puVar42[-1] & 0x1f));
              uVar43 = uVar43 + 1;
              puVar42 = puVar42 + 2;
              *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
            } while (uVar43 < puVar1[0xd]);
          }
        }
        goto LAB_007e8aec;
      }
      uVar39 = 1;
      puVar40 = (undefined4 *)(param_4 + 0x44);
      do {
        ppcVar34 = *(code ***)
                    (*(long *)(param_4 + 0x28) +
                    (ulong)(iVar32 * (iVar13 + (uVar3 >> 5)) + (int)uVar39) * 8);
        iVar31 = (**ppcVar34)(ppcVar34,uVar5,0,*puVar40);
        puVar1 = puVar40 + -1;
        uVar39 = uVar39 + 1;
        uVar43 = (ulong)*(uint *)(param_4 + 0x34);
        puVar40 = puVar40 + 2;
        uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
      } while (uVar39 < uVar43);
      if (iVar9 == 2) goto LAB_007e8d38;
LAB_007e8d18:
      if ((iVar9 == 0) != ((uVar30 & uVar17) != uVar10)) goto LAB_007e8d38;
LAB_007e8c40:
      uVar29 = uVar29 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar29 != uVar21);
    uVar37 = uVar37 + 1;
  } while (uVar37 != uVar23);
LAB_007e8adc:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007e8aec:
  uVar26 = uVar26 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar26) goto LAB_007e8a84;
  goto LAB_007e8b10;
}


