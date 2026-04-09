// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
// Entry Point: 008038b0
// Size: 3996 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, ChunkedBitSquare * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ChunkedBitSquare,
   ChunkedBitSquare, ParallelogramHelper, DensityMapOperations::AddDensityProcessor<BitVector, true>
   >(IDensityPixelSource*, BitVector*, ChunkedBitSquare*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<BitVector, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,ChunkedBitSquare *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,AddDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  DensityMapFilter DVar13;
  DensityMapFilter DVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  code **ppcVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  undefined4 *puVar40;
  int iVar41;
  ulong uVar42;
  long *plVar43;
  uint uVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_158;
  uint local_154;
  uint local_144;
  uint local_140;
  uint local_118;
  uint local_114;
  uint local_e0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar20 = tpidr_el0;
  local_70 = *(long *)(lVar20 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  local_88 = (long *)param_2;
  uVar22 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar23 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar32 = *(int *)(param_7 + 8);
  uVar6 = *(uint *)(param_7 + 0xc);
  plVar43 = *(long **)param_8;
  DVar13 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0x24);
  iVar29 = *(int *)(param_7 + 0x18);
  uVar17 = ~(-1 << (ulong)(uVar24 & 0x1f));
  iVar8 = *(int *)(param_7 + 0x1c);
  uVar25 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar26 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  DVar14 = param_8[0x20];
  uVar10 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  iVar12 = *(int *)(param_8 + 0x1c);
  uVar19 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar27 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar22) || (local_94 < uVar26)) || (local_94 < uVar23)) || (local_98 < uVar25))
  {
    if (((uVar22 < local_98) || (uVar26 < local_94)) || ((uVar23 < local_94 || (uVar25 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar32 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar32 != 0
         )) {
                    /* try { // try from 00804810 to 0080481b has its CatchHandler @ 0080484c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar22,(ulong)uVar23,(ulong)uVar25,(ulong)uVar26,(ulong)local_98,
                         (ulong)local_94);
      bVar21 = false;
      goto LAB_008047c8;
    }
    uVar35 = 0;
    if (local_98 != 0) {
      uVar35 = uVar22 / local_98;
    }
    uVar22 = 0;
    if (local_94 != 0) {
      uVar22 = uVar23 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar35,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar35 & 0xffff0000) != 0;
      uVar23 = uVar35 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar35;
      }
      uVar38 = (uint)bVar21;
      uVar36 = uVar38 << 4 | 8;
      uVar28 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar36 = uVar38 << 4;
        uVar28 = uVar23;
      }
      uVar23 = uVar36 | 4;
      uVar38 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar23 = uVar36;
        uVar38 = uVar28;
      }
      uVar36 = uVar23 | 2;
      uVar28 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar36 = uVar23;
        uVar28 = uVar38;
      }
      local_140 = (uVar28 + uVar36) - 1;
    }
    else {
      local_140 = 0;
    }
    uVar23 = 0;
    if (local_98 != 0) {
      uVar23 = uVar25 / local_98;
    }
    uVar46 = NEON_cnt((ulong)uVar22,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar22;
      }
      uVar38 = (uint)bVar21;
      uVar36 = uVar38 << 4 | 8;
      uVar28 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar36 = uVar38 << 4;
        uVar28 = uVar25;
      }
      uVar25 = uVar36 | 4;
      uVar38 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar25 = uVar36;
        uVar38 = uVar28;
      }
      uVar36 = uVar25 | 2;
      uVar28 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar36 = uVar25;
        uVar28 = uVar38;
      }
      local_154 = (uVar28 + uVar36) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar25 = 0;
    if (local_94 != 0) {
      uVar25 = uVar26 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar23 & 0xffff0000) != 0;
      uVar26 = uVar23 >> 0x10;
      if (!bVar21) {
        uVar26 = uVar23;
      }
      uVar38 = (uint)bVar21;
      uVar36 = uVar38 << 4 | 8;
      uVar28 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar36 = uVar38 << 4;
        uVar28 = uVar26;
      }
      uVar26 = uVar36 | 4;
      uVar38 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar26 = uVar36;
        uVar38 = uVar28;
      }
      uVar36 = uVar26 | 2;
      uVar28 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar36 = uVar26;
        uVar28 = uVar38;
      }
      local_144 = (uVar28 + uVar36) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar25,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar25 & 0xffff0000) != 0;
      uVar26 = uVar25 >> 0x10;
      if (!bVar21) {
        uVar26 = uVar25;
      }
      uVar38 = (uint)bVar21;
      uVar36 = uVar38 << 4 | 8;
      uVar28 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar36 = uVar38 << 4;
        uVar28 = uVar26;
      }
      uVar26 = uVar36 | 4;
      uVar38 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar26 = uVar36;
        uVar38 = uVar28;
      }
      uVar36 = uVar26 | 2;
      uVar28 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar36 = uVar26;
        uVar28 = uVar38;
      }
      local_158 = (uVar28 + uVar36) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    uVar36 = *(uint *)(param_5 + 0x4c);
    if (uVar26 < uVar36) {
      if (uVar35 < 2) {
        uVar35 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar36 = *(uint *)(param_5 + 0x58);
        if (uVar36 < *(uint *)(param_5 + 0x5c)) {
LAB_00804390:
          uVar28 = 0;
          uVar38 = uVar36 << (ulong)(local_140 & 0x1f);
          do {
            uVar44 = 0;
            uVar42 = (ulong)*(uint *)(param_3 + 0x34);
            uVar3 = uVar28 + (uVar26 << (ulong)(local_154 & 0x1f));
            uVar2 = uVar38;
            do {
              uVar4 = uVar44 + uVar38;
              iVar15 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
              iVar41 = (int)uVar42;
              ppcVar33 = *(code ***)
                          (*(long *)(param_3 + 0x28) + (ulong)((iVar15 + (uVar4 >> 5)) * iVar41) * 8
                          );
              uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
              uVar30 = (**ppcVar33)(ppcVar33,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
              if (*(uint *)(param_3 + 0x34) < 2) {
                uVar42 = (ulong)*(uint *)(param_3 + 0x34);
                if (iVar32 != 2) goto LAB_008044c4;
LAB_008044e4:
                uVar4 = uVar30 >> (ulong)(uVar5 & 0x1f) & uVar16;
                if (((int)uVar4 < iVar29) || (iVar8 < (int)uVar4)) {
                  if (DVar13 != (DensityMapFilter)0x0) goto LAB_00804510;
                }
                else if (DVar13 == (DensityMapFilter)0x0) {
LAB_00804510:
                  if ((uVar7 == 0) || ((uVar4 & uVar7) != 0)) {
                    uVar28 = 0;
                    uVar38 = uVar36 << (ulong)(local_144 & 0x1f);
                    goto LAB_00804554;
                  }
                }
              }
              else {
                uVar39 = 1;
                puVar40 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar33 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar41 * (iVar15 + (uVar2 >> 5)) + (int)uVar39) * 8);
                  iVar31 = (**ppcVar33)(ppcVar33,uVar4,0,*puVar40);
                  puVar1 = puVar40 + -1;
                  uVar39 = uVar39 + 1;
                  uVar42 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar40 = puVar40 + 2;
                  uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
                } while (uVar39 < uVar42);
                if (iVar32 == 2) goto LAB_008044e4;
LAB_008044c4:
                if ((iVar32 == 0) != ((uVar30 & uVar17) != uVar6)) goto LAB_008044e4;
              }
              uVar44 = uVar44 + 1;
              uVar2 = uVar2 + 1;
            } while (uVar44 != uVar35);
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar22);
          goto LAB_0080436c;
        }
LAB_00804320:
        uVar36 = *(uint *)(param_5 + 0x4c);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar36);
    }
  }
  else {
    uVar35 = 0;
    if (uVar22 != 0) {
      uVar35 = local_98 / uVar22;
    }
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = local_94 / uVar23;
    }
    uVar46 = NEON_cnt((ulong)uVar35,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar35 & 0xffff0000) != 0;
      uVar23 = uVar35 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar35;
      }
      uVar28 = (uint)bVar21;
      uVar35 = uVar28 << 4 | 8;
      uVar36 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar35 = uVar28 << 4;
        uVar36 = uVar23;
      }
      uVar23 = uVar35 | 4;
      uVar28 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar23 = uVar35;
        uVar28 = uVar36;
      }
      uVar35 = uVar23 | 2;
      uVar36 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar35 = uVar23;
        uVar36 = uVar28;
      }
      local_9c = (uVar36 + uVar35) - 1;
    }
    else {
      local_9c = 0;
    }
    uVar23 = 0;
    if (uVar25 != 0) {
      uVar23 = local_98 / uVar25;
    }
    uVar46 = NEON_cnt((ulong)uVar22,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar22;
      }
      uVar36 = (uint)bVar21;
      uVar22 = uVar36 << 4 | 8;
      uVar35 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar22 = uVar36 << 4;
        uVar35 = uVar25;
      }
      uVar25 = uVar22 | 4;
      uVar36 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar25 = uVar22;
        uVar36 = uVar35;
      }
      uVar22 = uVar25 | 2;
      uVar35 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar22 = uVar25;
        uVar35 = uVar36;
      }
      local_114 = (uVar35 + uVar22) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar22 = 0;
    if (uVar26 != 0) {
      uVar22 = local_94 / uVar26;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar23 & 0xffff0000) != 0;
      uVar25 = uVar23 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar23;
      }
      uVar35 = (uint)bVar21;
      uVar23 = uVar35 << 4 | 8;
      uVar26 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar23 = uVar35 << 4;
        uVar26 = uVar25;
      }
      uVar25 = uVar23 | 4;
      uVar35 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar25 = uVar23;
        uVar35 = uVar26;
      }
      uVar23 = uVar25 | 2;
      uVar26 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar23 = uVar25;
        uVar26 = uVar35;
      }
      local_e0 = (uVar26 + uVar23) - 1;
    }
    else {
      local_e0 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar22,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar23 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar22;
      }
      uVar26 = (uint)bVar21;
      uVar22 = uVar26 << 4 | 8;
      uVar25 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar22 = uVar26 << 4;
        uVar25 = uVar23;
      }
      uVar23 = uVar22 | 4;
      uVar26 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar23 = uVar22;
        uVar26 = uVar25;
      }
      uVar22 = uVar23 | 2;
      uVar25 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar22 = uVar23;
        uVar25 = uVar26;
      }
      local_118 = (uVar25 + uVar22) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    uVar36 = *(uint *)(param_5 + 0x4c);
    if (uVar22 < uVar36) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar23 = *(uint *)(param_5 + 0x58);
        if (uVar23 < *(uint *)(param_5 + 0x5c)) {
          uVar25 = uVar22 >> (ulong)(local_114 & 0x1f);
          uVar26 = uVar22 >> (ulong)(local_118 & 0x1f);
          do {
            uVar35 = uVar23 >> (ulong)(local_9c & 0x1f);
            uVar36 = (((uVar25 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar35 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar33 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar36 * 8);
            uVar35 = uVar35 & 0x1f | (uVar25 & 0x1f) << 5;
            uVar28 = (**ppcVar33)(ppcVar33,uVar35,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar42 = 1;
              puVar40 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar33 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar36 + (int)uVar42) * 8);
                iVar29 = (**ppcVar33)(ppcVar33,uVar35,0,*puVar40);
                puVar1 = puVar40 + -1;
                uVar42 = uVar42 + 1;
                puVar40 = puVar40 + 2;
                uVar28 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar28;
              } while (uVar42 < *(uint *)(param_3 + 0x34));
            }
            if ((((iVar32 == 2) || ((iVar32 == 0) != ((uVar28 & uVar17) != uVar6))) &&
                (DVar13 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar28 >> (ulong)(uVar5 & 0x1f) & uVar16 & uVar7) != 0)))) {
              uVar35 = uVar23 >> (ulong)(local_e0 & 0x1f);
              uVar36 = (((uVar26 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar35 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar33 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar36 * 8);
              uVar35 = uVar35 & 0x1f | (uVar26 & 0x1f) << 5;
              uVar28 = (**ppcVar33)(ppcVar33,uVar35,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar42 = 1;
                puVar40 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar33 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar36 + (int)uVar42) * 8);
                  iVar29 = (**ppcVar33)(ppcVar33,uVar35,0,*puVar40);
                  puVar1 = puVar40 + -1;
                  uVar42 = uVar42 + 1;
                  puVar40 = puVar40 + 2;
                  uVar28 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar28;
                } while (uVar42 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar28 & uVar19) != uVar10))) ||
                 ((DVar14 != (DensityMapFilter)0x0 ||
                  ((uVar27 != 0 && ((uVar28 >> (ulong)(uVar24 & 0x1f) & uVar18 & uVar27) == 0))))))
              goto LAB_008040b4;
              lVar37 = *local_88;
              uVar35 = (uVar23 + local_98 * uVar22) * local_90;
              lVar34 = *(long *)(lVar37 + (ulong)(uVar35 >> 0x13) * 8);
              uVar42 = (ulong)(uVar35 >> 3) & 0xffff;
              if ((uint)uVar42 < 0xfffd) {
                uVar36 = *(uint *)(lVar34 + uVar42);
              }
              else {
                uVar36 = (uVar35 >> 3) + 1;
                uVar28 = (uVar35 >> 3) + 2;
                uVar36 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar37 + (ulong)(uVar28 >> 0x10) * 8) +
                                         ((ulong)uVar28 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar37 + (ulong)(uVar36 >> 0x10) * 8) +
                                                  ((ulong)uVar36 & 0xffff)),
                                                 *(undefined *)(lVar34 + uVar42)));
              }
              uVar35 = uVar36 >> (ulong)(uVar35 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar23;
              uStack_7c = uVar22;
              local_78 = uVar35;
              DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                        ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
              if (uVar35 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
LAB_008040b4:
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(uint *)(param_5 + 0x5c));
        }
        uVar36 = *(uint *)(param_5 + 0x4c);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar36);
    }
  }
  bVar21 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar36,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_008047c8:
  if (*(long *)(lVar20 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
LAB_00804554:
  do {
    uVar44 = 0;
    uVar42 = (ulong)*(uint *)(param_4 + 0x34);
    uVar3 = uVar28 + (uVar26 << (ulong)(local_158 & 0x1f));
    uVar2 = uVar38;
    do {
      uVar4 = uVar44 + uVar38;
      iVar15 = (uVar3 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar41 = (int)uVar42;
      ppcVar33 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar15 + (uVar4 >> 5)) * iVar41) * 8);
      uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
      uVar30 = (**ppcVar33)(ppcVar33,uVar4,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar42 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar9 != 2) goto LAB_00804660;
LAB_00804680:
        uVar4 = uVar30 >> (ulong)(uVar24 & 0x1f) & uVar18;
        if (((int)uVar4 < iVar11) || (iVar12 < (int)uVar4)) {
          if (DVar14 != (DensityMapFilter)0x0) goto LAB_008046ac;
        }
        else if (DVar14 == (DensityMapFilter)0x0) {
LAB_008046ac:
          if ((uVar27 == 0) || ((uVar4 & uVar27) != 0)) {
            lVar37 = *local_88;
            uVar28 = (uVar36 + local_98 * uVar26) * local_90;
            lVar34 = *(long *)(lVar37 + (ulong)(uVar28 >> 0x13) * 8);
            uVar42 = (ulong)(uVar28 >> 3) & 0xffff;
            if ((uint)uVar42 < 0xfffd) {
              uVar38 = *(uint *)(lVar34 + uVar42);
            }
            else {
              uVar38 = (uVar28 >> 3) + 1;
              uVar44 = (uVar28 >> 3) + 2;
              uVar38 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar37 + (ulong)(uVar44 >> 0x10) * 8) +
                                       ((ulong)uVar44 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar37 + (ulong)(uVar38 >> 0x10) * 8) +
                                                ((ulong)uVar38 & 0xffff)),
                                               *(undefined *)(lVar34 + uVar42)));
            }
            uVar28 = uVar38 >> (ulong)(uVar28 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            local_80 = uVar36;
            uStack_7c = uVar26;
            local_78 = uVar28;
            DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                      ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
            if (uVar28 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_00804380;
          }
        }
      }
      else {
        uVar39 = 1;
        puVar40 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar33 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar41 * (iVar15 + (uVar2 >> 5)) + (int)uVar39) * 8);
          iVar31 = (**ppcVar33)(ppcVar33,uVar4,0,*puVar40);
          puVar1 = puVar40 + -1;
          uVar39 = uVar39 + 1;
          uVar42 = (ulong)*(uint *)(param_4 + 0x34);
          puVar40 = puVar40 + 2;
          uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
        } while (uVar39 < uVar42);
        if (iVar9 == 2) goto LAB_00804680;
LAB_00804660:
        if ((iVar9 == 0) != ((uVar30 & uVar19) != uVar10)) goto LAB_00804680;
      }
      uVar44 = uVar44 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar44 != uVar23);
    uVar28 = uVar28 + 1;
  } while (uVar28 != uVar25);
LAB_0080436c:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_00804380:
  uVar36 = uVar36 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar36) goto LAB_00804320;
  goto LAB_00804390;
}


