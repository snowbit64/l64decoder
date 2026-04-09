// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c3064
// Size: 3964 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ChunkedBitSquare * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, ChunkedBitSquare,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ChunkedBitSquare*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ChunkedBitSquare *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

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
  GetDensityProcessor GVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
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
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  code **ppcVar34;
  int *piVar35;
  int *piVar36;
  uint uVar37;
  int iVar38;
  undefined4 *puVar39;
  ulong uVar40;
  ulong uVar41;
  long *plVar42;
  undefined2 uVar43;
  undefined8 uVar44;
  uint local_150;
  uint local_14c;
  uint local_120;
  uint local_11c;
  uint local_f8;
  uint local_f4;
  uint local_70;
  
  uVar18 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar19 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar42 = *(long **)param_7;
  uVar20 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar21 = (**(code **)(*plVar42 + 0x20))(plVar42);
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar22 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar42 = *(long **)param_8;
  iVar27 = *(int *)(param_7 + 0x1c);
  iVar8 = *(int *)(param_7 + 0x18);
  DVar10 = param_7[0x20];
  iVar33 = *(int *)(param_7 + 8);
  uVar6 = *(uint *)(param_7 + 0xc);
  uVar9 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar22 & 0x1f));
  uVar23 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar24 = (**(code **)(*plVar42 + 0x20))(plVar42);
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar22 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_8 + 0x28))();
  DVar11 = param_8[0x20];
  iVar5 = *(int *)(param_8 + 8);
  uVar7 = *(uint *)(param_8 + 0xc);
  uVar16 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar25 = *(uint *)(param_8 + 0x24);
  if ((((uVar18 < uVar20) || (uVar19 < uVar21)) || (uVar18 < uVar23)) || (uVar19 < uVar24)) {
    if (((uVar20 < uVar18) || (uVar21 < uVar19)) || ((uVar23 < uVar18 || (uVar24 < uVar19)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar33 != 0
         )) {
                    /* try { // try from 007c3fa8 to 007c3fb3 has its CatchHandler @ 007c3fe0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar20,(ulong)uVar21,(ulong)uVar23,(ulong)uVar24,(ulong)uVar18,
                         (ulong)uVar19);
      return false;
    }
    uVar26 = 0;
    if (uVar18 != 0) {
      uVar26 = uVar20 / uVar18;
    }
    uVar20 = 0;
    if (uVar19 != 0) {
      uVar20 = uVar21 / uVar19;
    }
    uVar44 = NEON_cnt((ulong)uVar26,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar26 & 0xffff0000) != 0;
      uVar21 = uVar26 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar26;
      }
      uVar37 = (uint)bVar17;
      uVar32 = uVar37 << 4 | 8;
      uVar31 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar32 = uVar37 << 4;
        uVar31 = uVar21;
      }
      uVar21 = uVar32 | 4;
      uVar37 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar21 = uVar32;
        uVar37 = uVar31;
      }
      uVar32 = uVar21 | 2;
      uVar31 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar32 = uVar21;
        uVar31 = uVar37;
      }
      local_11c = (uVar31 + uVar32) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar21 = 0;
    if (uVar18 != 0) {
      uVar21 = uVar23 / uVar18;
    }
    uVar44 = NEON_cnt((ulong)uVar20,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar20 & 0xffff0000) != 0;
      uVar18 = uVar20 >> 0x10;
      if (!bVar17) {
        uVar18 = uVar20;
      }
      uVar31 = (uint)bVar17;
      uVar23 = uVar31 << 4 | 8;
      uVar32 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar23 = uVar31 << 4;
        uVar32 = uVar18;
      }
      uVar18 = uVar23 | 4;
      uVar31 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar18 = uVar23;
        uVar31 = uVar32;
      }
      uVar23 = uVar18 | 2;
      uVar32 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar23 = uVar18;
        uVar32 = uVar31;
      }
      local_14c = (uVar32 + uVar23) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = uVar24 / uVar19;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar21;
      }
      uVar32 = (uint)bVar17;
      uVar23 = uVar32 << 4 | 8;
      uVar24 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar23 = uVar32 << 4;
        uVar24 = uVar19;
      }
      uVar19 = uVar23 | 4;
      uVar32 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar19 = uVar23;
        uVar32 = uVar24;
      }
      uVar23 = uVar19 | 2;
      uVar24 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar23 = uVar19;
        uVar24 = uVar32;
      }
      local_120 = (uVar24 + uVar23) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar18,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar19 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar18;
      }
      uVar32 = (uint)bVar17;
      uVar23 = uVar32 << 4 | 8;
      uVar24 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar23 = uVar32 << 4;
        uVar24 = uVar19;
      }
      uVar19 = uVar23 | 4;
      uVar32 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar19 = uVar23;
        uVar32 = uVar24;
      }
      uVar23 = uVar19 | 2;
      uVar24 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar23 = uVar19;
        uVar24 = uVar32;
      }
      local_150 = (uVar24 + uVar23) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar19 = *(uint *)(param_5 + 0x48);
    if (uVar19 < *(uint *)(param_5 + 0x4c)) {
      if (uVar26 < 2) {
        uVar26 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar19);
        uVar23 = *(uint *)(param_5 + 0x58);
        if (uVar23 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar24 = 0;
            uVar32 = uVar23 << (ulong)(local_11c & 0x1f);
            do {
              uVar31 = 0;
              uVar40 = (ulong)*(uint *)(param_3 + 0x34);
              uVar2 = uVar24 + (uVar19 << (ulong)(local_14c & 0x1f));
              uVar37 = uVar32;
              do {
                uVar3 = uVar31 + uVar32;
                iVar28 = (uVar2 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar38 = (int)uVar40;
                ppcVar34 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar28 + (uVar3 >> 5)) * iVar38) * 8);
                uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
                uVar29 = (**ppcVar34)(ppcVar34,uVar3,0,*(undefined4 *)(param_3 + 0x3c));
                piVar36 = (int *)(param_6 + 4);
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar40 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar33 != 2) goto LAB_007c3cdc;
LAB_007c3cfc:
                  uVar3 = uVar29 >> (ulong)(uVar4 & 0x1f) & uVar13;
                  if (((int)uVar3 < iVar8) || (iVar27 < (int)uVar3)) {
                    if (DVar10 != (DensityMapFilter)0x0) goto LAB_007c3d28;
                  }
                  else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007c3d28:
                    if ((uVar9 == 0) || ((uVar3 & uVar9) != 0)) {
                      uVar24 = 0;
                      goto LAB_007c3d64;
                    }
                  }
                }
                else {
                  uVar41 = 1;
                  puVar39 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar34 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar38 * (iVar28 + (uVar37 >> 5)) + (int)uVar41) * 8);
                    iVar30 = (**ppcVar34)(ppcVar34,uVar3,0,*puVar39);
                    puVar1 = puVar39 + -1;
                    uVar41 = uVar41 + 1;
                    uVar40 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar39 = puVar39 + 2;
                    uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                  } while (uVar41 < uVar40);
                  if (iVar33 == 2) goto LAB_007c3cfc;
LAB_007c3cdc:
                  if ((iVar33 == 0) != ((uVar29 & uVar14) != uVar6)) goto LAB_007c3cfc;
                }
                uVar31 = uVar31 + 1;
                uVar37 = uVar37 + 1;
              } while (uVar31 != uVar26);
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar20);
LAB_007c3b84:
            *piVar36 = *piVar36 + 1;
LAB_007c3b90:
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(uint *)(param_5 + 0x5c));
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar26 = 0;
    if (uVar20 != 0) {
      uVar26 = uVar18 / uVar20;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = uVar19 / uVar21;
    }
    uVar44 = NEON_cnt((ulong)uVar26,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar26 & 0xffff0000) != 0;
      uVar21 = uVar26 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar26;
      }
      uVar31 = (uint)bVar17;
      uVar26 = uVar31 << 4 | 8;
      uVar32 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar31 << 4;
        uVar32 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar31 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar21 = uVar26;
        uVar31 = uVar32;
      }
      uVar26 = uVar21 | 2;
      uVar32 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar26 = uVar21;
        uVar32 = uVar31;
      }
      local_70 = (uVar32 + uVar26) - 1;
    }
    else {
      local_70 = 0;
    }
    uVar21 = 0;
    if (uVar23 != 0) {
      uVar21 = uVar18 / uVar23;
    }
    uVar44 = NEON_cnt((ulong)uVar20,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar20 & 0xffff0000) != 0;
      uVar18 = uVar20 >> 0x10;
      if (!bVar17) {
        uVar18 = uVar20;
      }
      uVar26 = (uint)bVar17;
      uVar20 = uVar26 << 4 | 8;
      uVar23 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar20 = uVar26 << 4;
        uVar23 = uVar18;
      }
      uVar18 = uVar20 | 4;
      uVar26 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar18 = uVar20;
        uVar26 = uVar23;
      }
      uVar20 = uVar18 | 2;
      uVar23 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar20 = uVar18;
        uVar23 = uVar26;
      }
      local_f4 = (uVar23 + uVar20) - 1;
    }
    else {
      local_f4 = 0;
    }
    uVar18 = 0;
    if (uVar24 != 0) {
      uVar18 = uVar19 / uVar24;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar21;
      }
      uVar23 = (uint)bVar17;
      uVar20 = uVar23 << 4 | 8;
      uVar21 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar20 = uVar23 << 4;
        uVar21 = uVar19;
      }
      uVar19 = uVar20 | 4;
      uVar23 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar19 = uVar20;
        uVar23 = uVar21;
      }
      uVar20 = uVar19 | 2;
      uVar21 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar20 = uVar19;
        uVar21 = uVar23;
      }
      uVar19 = (uVar21 + uVar20) - 1;
    }
    else {
      uVar19 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar18,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar20 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar20 = uVar18;
      }
      uVar23 = (uint)bVar17;
      uVar18 = uVar23 << 4 | 8;
      uVar21 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar18 = uVar23 << 4;
        uVar21 = uVar20;
      }
      uVar20 = uVar18 | 4;
      uVar23 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar20 = uVar18;
        uVar23 = uVar21;
      }
      uVar18 = uVar20 | 2;
      uVar21 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar18 = uVar20;
        uVar21 = uVar23;
      }
      local_f8 = (uVar21 + uVar18) - 1;
    }
    else {
      local_f8 = 0;
    }
    uVar18 = *(uint *)(param_5 + 0x48);
    if (uVar18 < *(uint *)(param_5 + 0x4c)) {
      piVar36 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar18);
        uVar20 = *(uint *)(param_5 + 0x58);
        if (uVar20 < *(uint *)(param_5 + 0x5c)) {
          uVar21 = uVar18 >> (ulong)(local_f4 & 0x1f);
          do {
            uVar23 = uVar20 >> (ulong)(local_70 & 0x1f);
            uVar24 = (((uVar21 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar23 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar34 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar24 * 8);
            uVar23 = uVar23 & 0x1f | (uVar21 & 0x1f) << 5;
            uVar26 = (**ppcVar34)(ppcVar34,uVar23,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar40 = 1;
              puVar39 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar34 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar24 + (int)uVar40) * 8);
                iVar27 = (**ppcVar34)(ppcVar34,uVar23,0,*puVar39);
                puVar1 = puVar39 + -1;
                uVar40 = uVar40 + 1;
                puVar39 = puVar39 + 2;
                uVar26 = iVar27 << (ulong)(*puVar1 & 0x1f) | uVar26;
              } while (uVar40 < *(uint *)(param_3 + 0x34));
            }
            piVar35 = piVar36;
            if (((((iVar33 == 2) || ((iVar33 == 0) != ((uVar26 & uVar14) != uVar6))) &&
                 (DVar10 == (DensityMapFilter)0x0)) &&
                ((((uVar9 == 0 || ((uVar26 >> (ulong)(uVar4 & 0x1f) & uVar13 & uVar9) != 0)) &&
                  ((uVar23 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar20 >> (ulong)(uVar19 & 0x1f),
                                        uVar18 >> (ulong)(local_f8 & 0x1f)), iVar5 == 2 ||
                   ((iVar5 == 0) != ((uVar23 & uVar16) != uVar7))))) &&
                 (DVar11 == (DensityMapFilter)0x0)))) &&
               ((uVar25 == 0 || ((uVar23 >> (ulong)(uVar22 & 0x1f) & uVar15 & uVar25) != 0)))) {
              iVar27 = *(int *)(param_2 + 0x34);
              iVar8 = (uVar18 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar34 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar8 + (uVar20 >> 5)) * iVar27) * 8
                          );
              uVar23 = uVar20 & 0x1f | (uVar18 & 0x1f) << 5;
              uVar24 = (**ppcVar34)(ppcVar34,uVar23,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar40 = 1;
                puVar39 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar27 * (iVar8 + (uVar20 >> 5)) + (int)uVar40) * 8);
                  iVar28 = (**ppcVar34)(ppcVar34,uVar23,0,*puVar39);
                  puVar1 = puVar39 + -1;
                  uVar40 = uVar40 + 1;
                  puVar39 = puVar39 + 2;
                  uVar24 = iVar28 << (ulong)(*puVar1 & 0x1f) | uVar24;
                } while (uVar40 < *(uint *)(param_2 + 0x34));
              }
              uVar23 = uVar24 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar23;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar24;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar24)))) {
                if ((int)uVar23 < *(int *)(param_6 + 0x2c)) {
                  GVar12 = param_6[0x34];
joined_r0x007c38ec:
                  if (GVar12 == (GetDensityProcessor)0x0) goto LAB_007c38b8;
                }
                else {
                  GVar12 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar23) goto joined_r0x007c38ec;
                  if (GVar12 != (GetDensityProcessor)0x0) goto LAB_007c38b8;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar23) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar23 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar23) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar35 = (int *)(param_6 + 8);
                  goto LAB_007c38ac;
                }
              }
            }
            else {
LAB_007c38ac:
              *piVar35 = *piVar35 + 1;
            }
LAB_007c38b8:
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(uint *)(param_5 + 0x5c));
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c3d64:
  uVar32 = 0;
LAB_007c3d8c:
  uVar31 = (**(code **)(*(long *)param_4 + 0x58))
                     (param_4,(uVar23 << (ulong)(local_120 & 0x1f)) + uVar32,
                      uVar24 + (uVar19 << (ulong)(local_150 & 0x1f)));
  if ((((iVar5 != 2) && ((iVar5 == 0) == ((uVar31 & uVar16) != uVar7))) ||
      (DVar11 != (DensityMapFilter)0x0)) ||
     ((uVar25 != 0 && ((uVar31 >> (ulong)(uVar22 & 0x1f) & uVar15 & uVar25) == 0))))
  goto LAB_007c3d7c;
  iVar28 = *(int *)(param_2 + 0x34);
  iVar38 = (uVar19 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar34 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar38 + (uVar23 >> 5)) * iVar28) * 8)
  ;
  uVar24 = uVar23 & 0x1f | (uVar19 & 0x1f) << 5;
  uVar32 = (**ppcVar34)(ppcVar34,uVar24,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar40 = 1;
    puVar39 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar34 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar28 * (iVar38 + (uVar23 >> 5)) + (int)uVar40) * 8);
      iVar30 = (**ppcVar34)(ppcVar34,uVar24,0,*puVar39);
      puVar1 = puVar39 + -1;
      uVar40 = uVar40 + 1;
      puVar39 = puVar39 + 2;
      uVar32 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar32;
    } while (uVar40 < *(uint *)(param_2 + 0x34));
  }
  uVar24 = uVar32 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar24;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar32;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar32)))) {
    if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
      GVar12 = param_6[0x34];
    }
    else {
      GVar12 = param_6[0x34];
    }
    if ((GVar12 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar24) == 0))))
    goto LAB_007c3b90;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar24 &
         ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar36 = (int *)(param_6 + 8);
    goto LAB_007c3b84;
  }
  goto LAB_007c3b90;
LAB_007c3d7c:
  uVar32 = uVar32 + 1;
  if (uVar32 == uVar21) goto LAB_007c3d54;
  goto LAB_007c3d8c;
LAB_007c3d54:
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar18) goto LAB_007c3b84;
  goto LAB_007c3d64;
}


