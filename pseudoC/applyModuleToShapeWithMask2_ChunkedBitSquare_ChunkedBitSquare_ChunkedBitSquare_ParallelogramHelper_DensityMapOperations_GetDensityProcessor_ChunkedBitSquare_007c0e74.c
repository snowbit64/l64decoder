// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c0e74
// Size: 4356 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ChunkedBitSquare * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, ChunkedBitSquare,
   ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ChunkedBitSquare*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ChunkedBitSquare *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,GetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  DensityMapFilter DVar11;
  DensityMapFilter DVar12;
  GetDensityProcessor GVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
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
  uint uVar32;
  int iVar33;
  int iVar34;
  code **ppcVar35;
  int *piVar36;
  int *piVar37;
  uint uVar38;
  int iVar39;
  ulong uVar40;
  undefined4 *puVar41;
  ulong uVar42;
  long *plVar43;
  undefined2 uVar44;
  undefined8 uVar45;
  uint local_158;
  uint local_154;
  uint local_124;
  uint local_108;
  uint local_104;
  
  uVar20 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar21 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  uVar22 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar23 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar34 = *(int *)(param_7 + 8);
  plVar43 = *(long **)param_8;
  iVar29 = *(int *)(param_7 + 0x18);
  iVar6 = *(int *)(param_7 + 0x1c);
  DVar11 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0xc);
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar24 & 0x1f));
  uVar25 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar26 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  DVar12 = param_8[0x20];
  uVar17 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar27 = *(uint *)(param_8 + 0x24);
  if ((((uVar20 < uVar22) || (uVar21 < uVar23)) || (uVar20 < uVar25)) || (uVar21 < uVar26)) {
    if (((uVar22 < uVar20) || (uVar23 < uVar21)) || ((uVar25 < uVar20 || (uVar26 < uVar21)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 007c1f40 to 007c1f4b has its CatchHandler @ 007c1f78 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar22,(ulong)uVar23,(ulong)uVar25,(ulong)uVar26,(ulong)uVar20,
                         (ulong)uVar21);
      return false;
    }
    uVar18 = 0;
    if (uVar20 != 0) {
      uVar18 = uVar22 / uVar20;
    }
    uVar22 = 0;
    if (uVar21 != 0) {
      uVar22 = uVar23 / uVar21;
    }
    uVar45 = NEON_cnt((ulong)uVar18,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar23 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar18;
      }
      uVar38 = (uint)bVar19;
      uVar30 = uVar38 << 4 | 8;
      uVar28 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar30 = uVar38 << 4;
        uVar28 = uVar23;
      }
      uVar23 = uVar30 | 4;
      uVar38 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar23 = uVar30;
        uVar38 = uVar28;
      }
      uVar30 = uVar23 | 2;
      uVar28 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar30 = uVar23;
        uVar28 = uVar38;
      }
      uVar23 = (uVar28 + uVar30) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar30 = 0;
    if (uVar20 != 0) {
      uVar30 = uVar25 / uVar20;
    }
    uVar45 = NEON_cnt((ulong)uVar22,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar22;
      }
      uVar38 = (uint)bVar19;
      uVar25 = uVar38 << 4 | 8;
      uVar28 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar25 = uVar38 << 4;
        uVar28 = uVar20;
      }
      uVar20 = uVar25 | 4;
      uVar38 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar20 = uVar25;
        uVar38 = uVar28;
      }
      uVar25 = uVar20 | 2;
      uVar28 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar25 = uVar20;
        uVar28 = uVar38;
      }
      local_154 = (uVar28 + uVar25) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = uVar26 / uVar21;
    }
    uVar45 = NEON_cnt((ulong)uVar30,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar30 & 0xffff0000) != 0;
      uVar21 = uVar30 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar30;
      }
      uVar28 = (uint)bVar19;
      uVar25 = uVar28 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar25 = uVar28 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar25 | 4;
      uVar28 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar25;
        uVar28 = uVar26;
      }
      uVar25 = uVar21 | 2;
      uVar26 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar25 = uVar21;
        uVar26 = uVar28;
      }
      local_124 = (uVar26 + uVar25) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar20,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar28 = (uint)bVar19;
      uVar25 = uVar28 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar25 = uVar28 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar25 | 4;
      uVar28 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar25;
        uVar28 = uVar26;
      }
      uVar25 = uVar21 | 2;
      uVar26 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar25 = uVar21;
        uVar26 = uVar28;
      }
      local_158 = (uVar26 + uVar25) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar25 = *(uint *)(param_5 + 0x58);
        if (uVar25 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar26 = 0;
            uVar28 = uVar25 << (ulong)(uVar23 & 0x1f);
            do {
              uVar38 = 0;
              uVar40 = (ulong)*(uint *)(param_3 + 0x34);
              uVar3 = uVar26 + (uVar21 << (ulong)(local_154 & 0x1f));
              uVar2 = uVar28;
              do {
                uVar4 = uVar38 + uVar28;
                iVar31 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar39 = (int)uVar40;
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar31 + (uVar4 >> 5)) * iVar39) * 8);
                uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
                uVar32 = (**ppcVar35)(ppcVar35,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar40 = (ulong)*(uint *)(param_3 + 0x34);
                }
                else {
                  uVar42 = 1;
                  puVar41 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar35 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar39 * (iVar31 + (uVar2 >> 5)) + (int)uVar42) * 8);
                    iVar33 = (**ppcVar35)(ppcVar35,uVar4,0,*puVar41);
                    puVar1 = puVar41 + -1;
                    uVar42 = uVar42 + 1;
                    uVar40 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar41 = puVar41 + 2;
                    uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
                  } while (uVar42 < uVar40);
                }
                piVar37 = (int *)(param_6 + 4);
                if ((iVar34 == 2) || ((iVar34 == 0) != ((uVar32 & uVar15) != uVar7))) {
                  uVar4 = uVar32 >> (ulong)(uVar5 & 0x1f) & uVar14;
                  if (((int)uVar4 < iVar29) || (iVar6 < (int)uVar4)) {
                    if (DVar11 != (DensityMapFilter)0x0) goto LAB_007c1bec;
                  }
                  else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007c1bec:
                    if ((uVar8 == 0) || ((uVar4 & uVar8) != 0)) {
                      uVar26 = 0;
                      uVar28 = uVar25 << (ulong)(local_124 & 0x1f);
                      goto LAB_007c1c2c;
                    }
                  }
                }
                uVar38 = uVar38 + 1;
                uVar2 = uVar2 + 1;
              } while (uVar38 != uVar18);
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar22);
LAB_007c1a48:
            *piVar37 = *piVar37 + 1;
LAB_007c1a54:
            uVar25 = uVar25 + 1;
          } while (uVar25 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar18 = 0;
    if (uVar22 != 0) {
      uVar18 = uVar20 / uVar22;
    }
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = uVar21 / uVar23;
    }
    uVar45 = NEON_cnt((ulong)uVar18,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar23 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar18;
      }
      uVar28 = (uint)bVar19;
      uVar18 = uVar28 << 4 | 8;
      uVar30 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar18 = uVar28 << 4;
        uVar30 = uVar23;
      }
      uVar23 = uVar18 | 4;
      uVar28 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar23 = uVar18;
        uVar28 = uVar30;
      }
      uVar18 = uVar23 | 2;
      uVar30 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar18 = uVar23;
        uVar30 = uVar28;
      }
      uVar23 = (uVar30 + uVar18) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar18 = 0;
    if (uVar25 != 0) {
      uVar18 = uVar20 / uVar25;
    }
    uVar45 = NEON_cnt((ulong)uVar22,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar22;
      }
      uVar30 = (uint)bVar19;
      uVar22 = uVar30 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar22 = uVar30 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar22 | 4;
      uVar30 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar22;
        uVar30 = uVar25;
      }
      uVar22 = uVar20 | 2;
      uVar25 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar22 = uVar20;
        uVar25 = uVar30;
      }
      local_104 = (uVar25 + uVar22) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar20 = 0;
    if (uVar26 != 0) {
      uVar20 = uVar21 / uVar26;
    }
    uVar45 = NEON_cnt((ulong)uVar18,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar18;
      }
      uVar26 = (uint)bVar19;
      uVar22 = uVar26 << 4 | 8;
      uVar25 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar22 = uVar26 << 4;
        uVar25 = uVar21;
      }
      uVar21 = uVar22 | 4;
      uVar26 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar21 = uVar22;
        uVar26 = uVar25;
      }
      uVar22 = uVar21 | 2;
      uVar25 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar22 = uVar21;
        uVar25 = uVar26;
      }
      uVar21 = (uVar25 + uVar22) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar20,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar22 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar22 = uVar20;
      }
      uVar26 = (uint)bVar19;
      uVar20 = uVar26 << 4 | 8;
      uVar25 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar20 = uVar26 << 4;
        uVar25 = uVar22;
      }
      uVar22 = uVar20 | 4;
      uVar26 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar22 = uVar20;
        uVar26 = uVar25;
      }
      uVar20 = uVar22 | 2;
      uVar25 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar20 = uVar22;
        uVar25 = uVar26;
      }
      local_108 = (uVar25 + uVar20) - 1;
    }
    else {
      local_108 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      piVar37 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar22 = *(uint *)(param_5 + 0x58);
        if (uVar22 < *(uint *)(param_5 + 0x5c)) {
          uVar25 = uVar20 >> (ulong)(local_104 & 0x1f);
          uVar26 = uVar20 >> (ulong)(local_108 & 0x1f);
          do {
            uVar18 = uVar22 >> (ulong)(uVar23 & 0x1f);
            uVar30 = (((uVar25 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar18 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar35 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar30 * 8);
            uVar18 = uVar18 & 0x1f | (uVar25 & 0x1f) << 5;
            uVar28 = (**ppcVar35)(ppcVar35,uVar18,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar40 = 1;
              puVar41 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar30 + (int)uVar40) * 8);
                iVar29 = (**ppcVar35)(ppcVar35,uVar18,0,*puVar41);
                puVar1 = puVar41 + -1;
                uVar40 = uVar40 + 1;
                puVar41 = puVar41 + 2;
                uVar28 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar28;
              } while (uVar40 < *(uint *)(param_3 + 0x34));
            }
            piVar36 = piVar37;
            if ((((iVar34 == 2) || ((iVar34 == 0) != ((uVar28 & uVar15) != uVar7))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar28 >> (ulong)(uVar5 & 0x1f) & uVar14 & uVar8) != 0)))) {
              uVar18 = uVar22 >> (ulong)(uVar21 & 0x1f);
              uVar30 = (((uVar26 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar18 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar35 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar30 * 8);
              uVar18 = uVar18 & 0x1f | (uVar26 & 0x1f) << 5;
              uVar28 = (**ppcVar35)(ppcVar35,uVar18,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar40 = 1;
                puVar41 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar30 + (int)uVar40) * 8);
                  iVar29 = (**ppcVar35)(ppcVar35,uVar18,0,*puVar41);
                  puVar1 = puVar41 + -1;
                  uVar40 = uVar40 + 1;
                  puVar41 = puVar41 + 2;
                  uVar28 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar28;
                } while (uVar40 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar28 & uVar17) != uVar10))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar27 != 0 && ((uVar28 >> (ulong)(uVar24 & 0x1f) & uVar16 & uVar27) == 0))))))
              goto LAB_007c1758;
              iVar29 = *(int *)(param_2 + 0x34);
              iVar6 = (uVar20 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar35 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar6 + (uVar22 >> 5)) * iVar29) * 8
                          );
              uVar18 = uVar22 & 0x1f | (uVar20 & 0x1f) << 5;
              uVar30 = (**ppcVar35)(ppcVar35,uVar18,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar40 = 1;
                puVar41 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar29 * (iVar6 + (uVar22 >> 5)) + (int)uVar40) * 8);
                  iVar31 = (**ppcVar35)(ppcVar35,uVar18,0,*puVar41);
                  puVar1 = puVar41 + -1;
                  uVar40 = uVar40 + 1;
                  puVar41 = puVar41 + 2;
                  uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
                } while (uVar40 < *(uint *)(param_2 + 0x34));
              }
              uVar18 = uVar30 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar18;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar30;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar30)))) {
                if ((int)uVar18 < *(int *)(param_6 + 0x2c)) {
                  GVar13 = param_6[0x34];
joined_r0x007c17a0:
                  if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007c1768;
                }
                else {
                  GVar13 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar18) goto joined_r0x007c17a0;
                  if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007c1768;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar18) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar18 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar18) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar36 = (int *)(param_6 + 8);
                  goto LAB_007c1758;
                }
              }
            }
            else {
LAB_007c1758:
              *piVar36 = *piVar36 + 1;
            }
LAB_007c1768:
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(param_5 + 0x5c));
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c1c2c:
  uVar38 = 0;
  uVar40 = (ulong)*(uint *)(param_4 + 0x34);
  uVar3 = uVar26 + (uVar21 << (ulong)(local_158 & 0x1f));
  uVar2 = uVar28;
LAB_007c1c74:
  uVar4 = uVar38 + uVar28;
  iVar31 = (uVar3 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
  iVar39 = (int)uVar40;
  ppcVar35 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)((iVar31 + (uVar4 >> 5)) * iVar39) * 8);
  uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
  uVar32 = (**ppcVar35)(ppcVar35,uVar4,0,*(undefined4 *)(param_4 + 0x3c));
  if (*(uint *)(param_4 + 0x34) < 2) {
    uVar40 = (ulong)*(uint *)(param_4 + 0x34);
  }
  else {
    uVar42 = 1;
    puVar41 = (undefined4 *)(param_4 + 0x44);
    do {
      ppcVar35 = *(code ***)
                  (*(long *)(param_4 + 0x28) +
                  (ulong)(iVar39 * (iVar31 + (uVar2 >> 5)) + (int)uVar42) * 8);
      iVar33 = (**ppcVar35)(ppcVar35,uVar4,0,*puVar41);
      puVar1 = puVar41 + -1;
      uVar42 = uVar42 + 1;
      uVar40 = (ulong)*(uint *)(param_4 + 0x34);
      puVar41 = puVar41 + 2;
      uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
    } while (uVar42 < uVar40);
  }
  if ((((iVar9 != 2) && ((iVar9 == 0) == ((uVar32 & uVar17) != uVar10))) ||
      (DVar12 != (DensityMapFilter)0x0)) ||
     ((uVar27 != 0 && ((uVar32 >> (ulong)(uVar24 & 0x1f) & uVar16 & uVar27) == 0))))
  goto LAB_007c1c60;
  iVar31 = *(int *)(param_2 + 0x34);
  iVar39 = (uVar21 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar35 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar39 + (uVar25 >> 5)) * iVar31) * 8)
  ;
  uVar26 = uVar25 & 0x1f | (uVar21 & 0x1f) << 5;
  uVar28 = (**ppcVar35)(ppcVar35,uVar26,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar40 = 1;
    puVar41 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar35 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar31 * (iVar39 + (uVar25 >> 5)) + (int)uVar40) * 8);
      iVar33 = (**ppcVar35)(ppcVar35,uVar26,0,*puVar41);
      puVar1 = puVar41 + -1;
      uVar40 = uVar40 + 1;
      puVar41 = puVar41 + 2;
      uVar28 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar28;
    } while (uVar40 < *(uint *)(param_2 + 0x34));
  }
  uVar26 = uVar28 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar26;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar28;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar28)))) {
    if ((int)uVar26 < *(int *)(param_6 + 0x2c)) {
      GVar13 = param_6[0x34];
    }
    else {
      GVar13 = param_6[0x34];
    }
    if ((GVar13 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar26) == 0))))
    goto LAB_007c1a54;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar26 &
         ((int)(*(int *)(param_6 + 0xc) + uVar26) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar37 = (int *)(param_6 + 8);
    goto LAB_007c1a48;
  }
  goto LAB_007c1a54;
LAB_007c1c60:
  uVar38 = uVar38 + 1;
  uVar2 = uVar2 + 1;
  if (uVar38 == uVar30) goto LAB_007c1c18;
  goto LAB_007c1c74;
LAB_007c1c18:
  uVar26 = uVar26 + 1;
  if (uVar26 == uVar20) goto LAB_007c1a48;
  goto LAB_007c1c2c;
}


