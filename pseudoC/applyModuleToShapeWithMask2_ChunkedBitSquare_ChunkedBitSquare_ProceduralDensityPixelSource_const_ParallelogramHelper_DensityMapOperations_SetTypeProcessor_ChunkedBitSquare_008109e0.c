// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
// Entry Point: 008109e0
// Size: 4092 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ChunkedBitSquare * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, SetTypeProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, ChunkedBitSquare,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetTypeProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ChunkedBitSquare*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ChunkedBitSquare *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,
               SetTypeProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

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
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  code **ppcVar35;
  long lVar36;
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
  uint local_12c;
  uint local_118;
  uint local_a0;
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
  iVar34 = *(int *)(param_7 + 8);
  uVar7 = *(uint *)(param_7 + 0xc);
  plVar44 = *(long **)param_8;
  DVar11 = param_7[0x20];
  uVar8 = *(uint *)(param_7 + 0x24);
  iVar27 = *(int *)(param_7 + 0x18);
  uVar15 = ~(-1 << (ulong)(uVar22 & 0x1f));
  iVar29 = *(int *)(param_7 + 0x1c);
  uVar23 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar24 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar22 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  DVar12 = param_8[0x20];
  uVar10 = *(uint *)(param_8 + 0xc);
  uVar17 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar25 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar20) || (local_94 < uVar24)) || (local_94 < uVar21)) || (local_98 < uVar23))
  {
    if (((uVar20 < local_98) || (uVar24 < local_94)) || ((uVar21 < local_94 || (uVar23 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 00811988 to 0081199f has its CatchHandler @ 008119dc */
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
      goto LAB_00811944;
    }
    uVar28 = 0;
    if (local_98 != 0) {
      uVar28 = uVar20 / local_98;
    }
    uVar20 = 0;
    if (local_94 != 0) {
      uVar20 = uVar21 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar28,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar28 & 0xffff0000) != 0;
      uVar21 = uVar28 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar28;
      }
      uVar38 = (uint)bVar19;
      uVar37 = uVar38 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar37 = uVar38 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar37 | 4;
      uVar38 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar37;
        uVar38 = uVar26;
      }
      uVar37 = uVar21 | 2;
      uVar26 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar37 = uVar21;
        uVar26 = uVar38;
      }
      local_13c = (uVar26 + uVar37) - 1;
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
      uVar37 = uVar38 << 4 | 8;
      uVar26 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar37 = uVar38 << 4;
        uVar26 = uVar23;
      }
      uVar23 = uVar37 | 4;
      uVar38 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar23 = uVar37;
        uVar38 = uVar26;
      }
      uVar37 = uVar23 | 2;
      uVar26 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar37 = uVar23;
        uVar26 = uVar38;
      }
      local_154 = (uVar26 + uVar37) - 1;
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
      uVar37 = uVar38 << 4 | 8;
      uVar26 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar37 = uVar38 << 4;
        uVar26 = uVar24;
      }
      uVar24 = uVar37 | 4;
      uVar38 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar24 = uVar37;
        uVar38 = uVar26;
      }
      uVar37 = uVar24 | 2;
      uVar26 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar37 = uVar24;
        uVar26 = uVar38;
      }
      local_140 = (uVar26 + uVar37) - 1;
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
      uVar37 = uVar38 << 4 | 8;
      uVar26 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar37 = uVar38 << 4;
        uVar26 = uVar24;
      }
      uVar24 = uVar37 | 4;
      uVar38 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar24 = uVar37;
        uVar38 = uVar26;
      }
      uVar37 = uVar24 | 2;
      uVar26 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar37 = uVar24;
        uVar26 = uVar38;
      }
      local_158 = (uVar26 + uVar37) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar24 = *(uint *)(param_5 + 0x48);
    uVar37 = *(uint *)(param_5 + 0x4c);
    if (uVar24 < uVar37) {
      if (uVar28 < 2) {
        uVar28 = 1;
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
        uVar37 = *(uint *)(param_5 + 0x58);
        if (uVar37 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar26 = 0;
            uVar38 = uVar37 << (ulong)(local_13c & 0x1f);
            do {
              uVar32 = 0;
              uVar43 = (ulong)*(uint *)(param_3 + 0x34);
              uVar4 = uVar26 + (uVar24 << (ulong)(local_154 & 0x1f));
              uVar3 = uVar38;
              do {
                uVar5 = uVar32 + uVar38;
                iVar13 = (uVar4 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar33 = (int)uVar43;
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar13 + (uVar5 >> 5)) * iVar33) * 8);
                uVar5 = uVar5 & 0x1f | (uVar4 & 0x1f) << 5;
                uVar30 = (**ppcVar35)(ppcVar35,uVar5,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar43 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar34 != 2) goto LAB_0081164c;
LAB_0081166c:
                  uVar5 = uVar30 >> (ulong)(uVar6 & 0x1f) & uVar14;
                  if (((int)uVar5 < iVar27) || (iVar29 < (int)uVar5)) {
                    if (DVar11 != (DensityMapFilter)0x0) goto LAB_00811698;
                  }
                  else if (DVar11 == (DensityMapFilter)0x0) {
LAB_00811698:
                    if ((uVar8 == 0) || ((uVar5 & uVar8) != 0)) {
                      uVar26 = 0;
                      goto LAB_008116d0;
                    }
                  }
                }
                else {
                  uVar39 = 1;
                  puVar40 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar35 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar33 * (iVar13 + (uVar3 >> 5)) + (int)uVar39) * 8);
                    iVar31 = (**ppcVar35)(ppcVar35,uVar5,0,*puVar40);
                    puVar1 = puVar40 + -1;
                    uVar39 = uVar39 + 1;
                    uVar43 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar40 = puVar40 + 2;
                    uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
                  } while (uVar39 < uVar43);
                  if (iVar34 == 2) goto LAB_0081166c;
LAB_0081164c:
                  if ((iVar34 == 0) != ((uVar30 & uVar15) != uVar7)) goto LAB_0081166c;
                }
                uVar32 = uVar32 + 1;
                uVar3 = uVar3 + 1;
              } while (uVar32 != uVar28);
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar20);
LAB_008114e8:
            *(int *)param_6 = *(int *)param_6 + 1;
LAB_008114fc:
            uVar37 = uVar37 + 1;
          } while (uVar37 < *(uint *)(param_5 + 0x5c));
        }
        uVar37 = *(uint *)(param_5 + 0x4c);
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar37);
    }
  }
  else {
    uVar28 = 0;
    if (uVar20 != 0) {
      uVar28 = local_98 / uVar20;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = local_94 / uVar21;
    }
    uVar46 = NEON_cnt((ulong)uVar28,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar28 & 0xffff0000) != 0;
      uVar21 = uVar28 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar28;
      }
      uVar26 = (uint)bVar19;
      uVar28 = uVar26 << 4 | 8;
      uVar37 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar28 = uVar26 << 4;
        uVar37 = uVar21;
      }
      uVar21 = uVar28 | 4;
      uVar26 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar21 = uVar28;
        uVar26 = uVar37;
      }
      uVar28 = uVar21 | 2;
      uVar37 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar28 = uVar21;
        uVar37 = uVar26;
      }
      local_a0 = (uVar37 + uVar28) - 1;
    }
    else {
      local_a0 = 0;
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
      uVar37 = (uint)bVar19;
      uVar20 = uVar37 << 4 | 8;
      uVar28 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar20 = uVar37 << 4;
        uVar28 = uVar23;
      }
      uVar23 = uVar20 | 4;
      uVar37 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar23 = uVar20;
        uVar37 = uVar28;
      }
      uVar20 = uVar23 | 2;
      uVar28 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar20 = uVar23;
        uVar28 = uVar37;
      }
      local_118 = (uVar28 + uVar20) - 1;
    }
    else {
      local_118 = 0;
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
      uVar28 = (uint)bVar19;
      uVar21 = uVar28 << 4 | 8;
      uVar24 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar21 = uVar28 << 4;
        uVar24 = uVar23;
      }
      uVar23 = uVar21 | 4;
      uVar28 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar23 = uVar21;
        uVar28 = uVar24;
      }
      uVar21 = uVar23 | 2;
      uVar24 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar21 = uVar23;
        uVar24 = uVar28;
      }
      uVar21 = (uVar24 + uVar21) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar20,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar23 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar20;
      }
      uVar28 = (uint)bVar19;
      uVar20 = uVar28 << 4 | 8;
      uVar24 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar20 = uVar28 << 4;
        uVar24 = uVar23;
      }
      uVar23 = uVar20 | 4;
      uVar28 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar23 = uVar20;
        uVar28 = uVar24;
      }
      uVar20 = uVar23 | 2;
      uVar24 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar20 = uVar23;
        uVar24 = uVar28;
      }
      local_12c = (uVar24 + uVar20) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    uVar37 = *(uint *)(param_5 + 0x4c);
    if (uVar20 < uVar37) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar23 = *(uint *)(param_5 + 0x58);
        if (uVar23 < *(uint *)(param_5 + 0x5c)) {
          uVar24 = uVar20 >> (ulong)(local_118 & 0x1f);
          do {
            uVar28 = uVar23 >> (ulong)(local_a0 & 0x1f);
            uVar37 = (((uVar24 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar28 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar35 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar37 * 8);
            uVar28 = uVar28 & 0x1f | (uVar24 & 0x1f) << 5;
            uVar26 = (**ppcVar35)(ppcVar35,uVar28,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar43 = 1;
              puVar40 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar37 + (int)uVar43) * 8);
                iVar27 = (**ppcVar35)(ppcVar35,uVar28,0,*puVar40);
                puVar1 = puVar40 + -1;
                uVar43 = uVar43 + 1;
                puVar40 = puVar40 + 2;
                uVar26 = iVar27 << (ulong)(*puVar1 & 0x1f) | uVar26;
              } while (uVar43 < *(uint *)(param_3 + 0x34));
            }
            if (((((iVar34 == 2) || ((iVar34 == 0) != ((uVar26 & uVar15) != uVar7))) &&
                 ((DVar11 == (DensityMapFilter)0x0 &&
                  ((uVar8 == 0 || ((uVar26 >> (ulong)(uVar6 & 0x1f) & uVar14 & uVar8) != 0)))))) &&
                ((uVar28 = (**(code **)(*(long *)param_4 + 0x58))
                                     (param_4,uVar23 >> (ulong)(uVar21 & 0x1f),
                                      uVar20 >> (ulong)(local_12c & 0x1f)), puVar1 = local_88,
                 iVar9 == 2 || ((iVar9 == 0) != ((uVar28 & uVar17) != uVar10))))) &&
               ((DVar12 == (DensityMapFilter)0x0 &&
                ((uVar25 == 0 || ((uVar28 >> (ulong)(uVar22 & 0x1f) & uVar16 & uVar25) != 0)))))) {
              uVar28 = local_88[0xd];
              iVar27 = (uVar20 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar35 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar27 + (uVar23 >> 5)) * uVar28) * 8
                          );
              uVar37 = uVar23 & 0x1f | (uVar20 & 0x1f) << 5;
              local_80 = uVar23;
              uStack_7c = uVar20;
              uVar26 = (**ppcVar35)(ppcVar35,uVar37,0,local_88[0xf]);
              if (1 < puVar1[0xd]) {
                uVar43 = 1;
                puVar42 = puVar1 + 0x11;
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(puVar1 + 10) +
                              (ulong)(uVar28 * (iVar27 + (uVar23 >> 5)) + (int)uVar43) * 8);
                  iVar29 = (**ppcVar35)(ppcVar35,uVar37,0,*puVar42);
                  puVar2 = puVar42 + -1;
                  uVar43 = uVar43 + 1;
                  puVar42 = puVar42 + 2;
                  uVar26 = iVar29 << (ulong)(*puVar2 & 0x1f) | uVar26;
                } while (uVar43 < puVar1[0xd]);
              }
              local_78 = uVar26;
              DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>::process
                        ((SetTypeProcessor<ChunkedBitSquare> *)param_6,(HelperSource *)&local_98);
              uVar28 = local_78;
              puVar1 = local_88;
              if (uVar26 != local_78) {
                uVar37 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar26 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar41 = (ulong)uVar26 * 8;
                lVar36 = *(long *)(*(long *)(local_88 + 10) + lVar41);
                uVar46 = (**(code **)(lVar36 + 8))(lVar36,uVar37,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
                if (1 < puVar1[0xd]) {
                  puVar42 = puVar1 + 0x11;
                  uVar43 = 1;
                  do {
                    lVar41 = (ulong)(uVar26 + (int)uVar43) * 8;
                    lVar36 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
                    uVar46 = (**(code **)(lVar36 + 8))
                                       (lVar36,uVar37,0,*puVar42,
                                        uVar28 >> (ulong)(puVar42[-1] & 0x1f));
                    uVar43 = uVar43 + 1;
                    puVar42 = puVar42 + 2;
                    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
                  } while (uVar43 < puVar1[0xd]);
                }
              }
            }
            else {
              *(int *)param_6 = *(int *)param_6 + 1;
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(uint *)(param_5 + 0x5c));
        }
        uVar37 = *(uint *)(param_5 + 0x4c);
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar37);
    }
  }
  bVar19 = true;
  if (param_6[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x48),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar37,*(uint *)(param_6 + 0x14),*(uint *)(param_6 + 0x18),
               *(uint *)(param_6 + 0x60),(bool)param_6[0x5d],true,true);
  }
LAB_00811944:
  if (*(long *)(lVar18 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar19;
LAB_008116d0:
  uVar38 = 0;
LAB_00811704:
  uVar32 = (**(code **)(*(long *)param_4 + 0x58))
                     (param_4,(uVar37 << (ulong)(local_140 & 0x1f)) + uVar38,
                      uVar26 + (uVar24 << (ulong)(local_158 & 0x1f)));
  puVar1 = local_88;
  if ((((iVar9 != 2) && ((iVar9 == 0) == ((uVar32 & uVar17) != uVar10))) ||
      (DVar12 != (DensityMapFilter)0x0)) ||
     ((uVar25 != 0 && ((uVar32 >> (ulong)(uVar22 & 0x1f) & uVar16 & uVar25) == 0))))
  goto LAB_008116f4;
  uVar26 = local_88[0xd];
  iVar13 = (uVar24 >> 5) << (ulong)(*local_88 & 0x1f);
  ppcVar35 = *(code ***)(*(long *)(local_88 + 10) + (ulong)((iVar13 + (uVar37 >> 5)) * uVar26) * 8);
  uVar38 = uVar37 & 0x1f | (uVar24 & 0x1f) << 5;
  local_80 = uVar37;
  uStack_7c = uVar24;
  uVar32 = (**ppcVar35)(ppcVar35,uVar38,0,local_88[0xf]);
  if (1 < puVar1[0xd]) {
    uVar43 = 1;
    puVar42 = puVar1 + 0x11;
    do {
      ppcVar35 = *(code ***)
                  (*(long *)(puVar1 + 10) +
                  (ulong)(uVar26 * (iVar13 + (uVar37 >> 5)) + (int)uVar43) * 8);
      iVar33 = (**ppcVar35)(ppcVar35,uVar38,0,*puVar42);
      puVar2 = puVar42 + -1;
      uVar43 = uVar43 + 1;
      puVar42 = puVar42 + 2;
      uVar32 = iVar33 << (ulong)(*puVar2 & 0x1f) | uVar32;
    } while (uVar43 < puVar1[0xd]);
  }
  local_78 = uVar32;
  DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>::process
            ((SetTypeProcessor<ChunkedBitSquare> *)param_6,(HelperSource *)&local_98);
  uVar26 = local_78;
  puVar1 = local_88;
  if (uVar32 != local_78) {
    uVar38 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
    uVar32 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) * local_88[0xd];
    lVar41 = (ulong)uVar32 * 8;
    lVar36 = *(long *)(*(long *)(local_88 + 10) + lVar41);
    uVar46 = (**(code **)(lVar36 + 8))(lVar36,uVar38,0,local_88[0xf],local_78);
    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
    if (1 < puVar1[0xd]) {
      puVar42 = puVar1 + 0x11;
      uVar43 = 1;
      do {
        lVar41 = (ulong)(uVar32 + (int)uVar43) * 8;
        lVar36 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
        uVar46 = (**(code **)(lVar36 + 8))
                           (lVar36,uVar38,0,*puVar42,uVar26 >> (ulong)(puVar42[-1] & 0x1f));
        uVar43 = uVar43 + 1;
        puVar42 = puVar42 + 2;
        *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar46;
      } while (uVar43 < puVar1[0xd]);
    }
  }
  goto LAB_008114fc;
LAB_008116f4:
  uVar38 = uVar38 + 1;
  if (uVar38 == uVar21) goto LAB_008116c0;
  goto LAB_00811704;
LAB_008116c0:
  uVar26 = uVar26 + 1;
  if (uVar26 == uVar23) goto LAB_008114e8;
  goto LAB_008116d0;
}


