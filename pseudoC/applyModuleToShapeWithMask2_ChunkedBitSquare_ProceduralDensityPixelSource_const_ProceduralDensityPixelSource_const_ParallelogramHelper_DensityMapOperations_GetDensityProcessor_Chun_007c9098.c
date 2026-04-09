// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c9098
// Size: 3620 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&,
   DensityMapFilter const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,ProceduralDensityPixelSource *param_4,
               ParallelogramHelper *param_5,GetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  DensityMapFilter DVar9;
  DensityMapFilter DVar10;
  GetDensityProcessor GVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  code **ppcVar32;
  int *piVar33;
  int *piVar34;
  uint uVar35;
  undefined4 *puVar36;
  long *plVar37;
  ulong uVar38;
  undefined2 uVar39;
  undefined8 uVar40;
  uint local_128;
  uint local_124;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_dc;
  
  uVar19 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar20 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar37 = *(long **)param_7;
  uVar21 = (**(code **)(*plVar37 + 0x18))(plVar37);
  uVar22 = (**(code **)(*plVar37 + 0x20))(plVar37);
  (**(code **)(*plVar37 + 0x30))(plVar37);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar2 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar31 = *(int *)(param_7 + 8);
  plVar37 = *(long **)param_8;
  iVar3 = *(int *)(param_7 + 0x18);
  iVar4 = *(int *)(param_7 + 0x1c);
  DVar9 = param_7[0x20];
  uVar5 = *(uint *)(param_7 + 0xc);
  uVar6 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar24 = (**(code **)(*plVar37 + 0x18))(plVar37);
  uVar25 = (**(code **)(*plVar37 + 0x20))(plVar37);
  (**(code **)(*plVar37 + 0x30))(plVar37);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar23 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar7 = *(int *)(param_8 + 8);
  uVar8 = *(uint *)(param_8 + 0xc);
  DVar10 = param_8[0x20];
  uVar16 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar26 = *(uint *)(param_8 + 0x24);
  if ((((uVar19 < uVar21) || (uVar20 < uVar22)) || (uVar19 < uVar24)) || (uVar20 < uVar25)) {
    if (((uVar21 < uVar19) || (uVar22 < uVar20)) || ((uVar24 < uVar19 || (uVar25 < uVar20)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar31 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar31 != 0
         )) {
                    /* try { // try from 007c9e84 to 007c9e8f has its CatchHandler @ 007c9ebc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar21,(ulong)uVar22,(ulong)uVar24,(ulong)uVar25,(ulong)uVar19,
                         (ulong)uVar20);
      return false;
    }
    uVar17 = 0;
    if (uVar19 != 0) {
      uVar17 = uVar21 / uVar19;
    }
    uVar21 = 0;
    if (uVar20 != 0) {
      uVar21 = uVar22 / uVar20;
    }
    uVar40 = NEON_cnt((ulong)uVar17,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar22 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar17;
      }
      uVar35 = (uint)bVar18;
      uVar29 = uVar35 << 4 | 8;
      uVar28 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar29 = uVar35 << 4;
        uVar28 = uVar22;
      }
      uVar22 = uVar29 | 4;
      uVar35 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar22 = uVar29;
        uVar35 = uVar28;
      }
      uVar29 = uVar22 | 2;
      uVar28 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar29 = uVar22;
        uVar28 = uVar35;
      }
      local_dc = (uVar28 + uVar29) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar22 = 0;
    if (uVar19 != 0) {
      uVar22 = uVar24 / uVar19;
    }
    uVar40 = NEON_cnt((ulong)uVar21,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar18) {
        uVar19 = uVar21;
      }
      uVar28 = (uint)bVar18;
      uVar24 = uVar28 << 4 | 8;
      uVar29 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar24 = uVar28 << 4;
        uVar29 = uVar19;
      }
      uVar19 = uVar24 | 4;
      uVar28 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar19 = uVar24;
        uVar28 = uVar29;
      }
      uVar24 = uVar19 | 2;
      uVar29 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar24 = uVar19;
        uVar29 = uVar28;
      }
      local_124 = (uVar29 + uVar24) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar19 = 0;
    if (uVar20 != 0) {
      uVar19 = uVar25 / uVar20;
    }
    uVar40 = NEON_cnt((ulong)uVar22,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar22;
      }
      uVar29 = (uint)bVar18;
      uVar24 = uVar29 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar24 = uVar29 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar24 | 4;
      uVar29 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar24;
        uVar29 = uVar25;
      }
      uVar24 = uVar20 | 2;
      uVar25 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar24 = uVar20;
        uVar25 = uVar29;
      }
      local_f0 = (uVar25 + uVar24) - 1;
    }
    else {
      local_f0 = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar19,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar20 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar19;
      }
      uVar29 = (uint)bVar18;
      uVar24 = uVar29 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar24 = uVar29 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar24 | 4;
      uVar29 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar24;
        uVar29 = uVar25;
      }
      uVar24 = uVar20 | 2;
      uVar25 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar24 = uVar20;
        uVar25 = uVar29;
      }
      local_128 = (uVar25 + uVar24) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar24 = *(uint *)(param_5 + 0x58);
        if (uVar24 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar25 = 0;
            do {
              uVar29 = 0;
              do {
                uVar28 = (**(code **)(*(long *)param_3 + 0x58))
                                   (param_3,(uVar24 << (ulong)(local_dc & 0x1f)) + uVar29,
                                    uVar25 + (uVar20 << (ulong)(local_124 & 0x1f)));
                piVar34 = (int *)(param_6 + 4);
                if ((iVar31 == 2) || ((iVar31 == 0) != ((uVar28 & uVar14) != uVar5))) {
                  uVar28 = uVar28 >> (ulong)(uVar2 & 0x1f) & uVar13;
                  if (((int)uVar28 < iVar3) || (iVar4 < (int)uVar28)) {
                    if (DVar9 != (DensityMapFilter)0x0) goto LAB_007c9bf8;
                  }
                  else if (DVar9 == (DensityMapFilter)0x0) {
LAB_007c9bf8:
                    if ((uVar6 == 0) || ((uVar28 & uVar6) != 0)) {
                      uVar25 = 0;
                      goto LAB_007c9c30;
                    }
                  }
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 != uVar17);
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar21);
LAB_007c9b1c:
            *piVar34 = *piVar34 + 1;
LAB_007c9b28:
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)(param_5 + 0x5c));
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar17 = 0;
    if (uVar21 != 0) {
      uVar17 = uVar19 / uVar21;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar20 / uVar22;
    }
    uVar40 = NEON_cnt((ulong)uVar17,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar22 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar17;
      }
      uVar28 = (uint)bVar18;
      uVar17 = uVar28 << 4 | 8;
      uVar29 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar17 = uVar28 << 4;
        uVar29 = uVar22;
      }
      uVar22 = uVar17 | 4;
      uVar28 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar22 = uVar17;
        uVar28 = uVar29;
      }
      uVar17 = uVar22 | 2;
      uVar29 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar17 = uVar22;
        uVar29 = uVar28;
      }
      uVar22 = (uVar29 + uVar17) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar17 = 0;
    if (uVar24 != 0) {
      uVar17 = uVar19 / uVar24;
    }
    uVar40 = NEON_cnt((ulong)uVar21,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar18) {
        uVar19 = uVar21;
      }
      uVar29 = (uint)bVar18;
      uVar21 = uVar29 << 4 | 8;
      uVar24 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar21 = uVar29 << 4;
        uVar24 = uVar19;
      }
      uVar19 = uVar21 | 4;
      uVar29 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar19 = uVar21;
        uVar29 = uVar24;
      }
      uVar21 = uVar19 | 2;
      uVar24 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar21 = uVar19;
        uVar24 = uVar29;
      }
      local_f4 = (uVar24 + uVar21) - 1;
    }
    else {
      local_f4 = 0;
    }
    uVar19 = 0;
    if (uVar25 != 0) {
      uVar19 = uVar20 / uVar25;
    }
    uVar40 = NEON_cnt((ulong)uVar17,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar20 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar17;
      }
      uVar25 = (uint)bVar18;
      uVar21 = uVar25 << 4 | 8;
      uVar24 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar21 = uVar25 << 4;
        uVar24 = uVar20;
      }
      uVar20 = uVar21 | 4;
      uVar25 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar20 = uVar21;
        uVar25 = uVar24;
      }
      uVar21 = uVar20 | 2;
      uVar24 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar21 = uVar20;
        uVar24 = uVar25;
      }
      uVar20 = (uVar24 + uVar21) - 1;
    }
    else {
      uVar20 = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar19,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar21 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar21 = uVar19;
      }
      uVar25 = (uint)bVar18;
      uVar19 = uVar25 << 4 | 8;
      uVar24 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar19 = uVar25 << 4;
        uVar24 = uVar21;
      }
      uVar21 = uVar19 | 4;
      uVar25 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar21 = uVar19;
        uVar25 = uVar24;
      }
      uVar19 = uVar21 | 2;
      uVar24 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar19 = uVar21;
        uVar24 = uVar25;
      }
      local_f8 = (uVar24 + uVar19) - 1;
    }
    else {
      local_f8 = 0;
    }
    uVar19 = *(uint *)(param_5 + 0x48);
    if (uVar19 < *(uint *)(param_5 + 0x4c)) {
      piVar34 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar19);
        uVar21 = *(uint *)(param_5 + 0x58);
        if (uVar21 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar24 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar21 >> (ulong)(uVar22 & 0x1f),
                                uVar19 >> (ulong)(local_f4 & 0x1f));
            piVar33 = piVar34;
            if (((((iVar31 == 2) || ((iVar31 == 0) != ((uVar24 & uVar14) != uVar5))) &&
                 (DVar9 == (DensityMapFilter)0x0)) &&
                ((((uVar6 == 0 || ((uVar24 >> (ulong)(uVar2 & 0x1f) & uVar13 & uVar6) != 0)) &&
                  ((uVar24 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar21 >> (ulong)(uVar20 & 0x1f),
                                        uVar19 >> (ulong)(local_f8 & 0x1f)), iVar7 == 2 ||
                   ((iVar7 == 0) != ((uVar24 & uVar16) != uVar8))))) &&
                 (DVar10 == (DensityMapFilter)0x0)))) &&
               ((uVar26 == 0 || ((uVar24 >> (ulong)(uVar23 & 0x1f) & uVar15 & uVar26) != 0)))) {
              iVar3 = *(int *)(param_2 + 0x34);
              iVar4 = (uVar19 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar32 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar4 + (uVar21 >> 5)) * iVar3) * 8)
              ;
              uVar24 = uVar21 & 0x1f | (uVar19 & 0x1f) << 5;
              uVar25 = (**ppcVar32)(ppcVar32,uVar24,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar38 = 1;
                puVar36 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar32 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar3 * (iVar4 + (uVar21 >> 5)) + (int)uVar38) * 8);
                  iVar27 = (**ppcVar32)(ppcVar32,uVar24,0,*puVar36);
                  puVar1 = puVar36 + -1;
                  uVar38 = uVar38 + 1;
                  puVar36 = puVar36 + 2;
                  uVar25 = iVar27 << (ulong)(*puVar1 & 0x1f) | uVar25;
                } while (uVar38 < *(uint *)(param_2 + 0x34));
              }
              uVar24 = uVar25 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar24;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar25;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar25)))) {
                if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
                  GVar11 = param_6[0x34];
joined_r0x007c9894:
                  if (GVar11 == (GetDensityProcessor)0x0) goto LAB_007c97e0;
                }
                else {
                  GVar11 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar24) goto joined_r0x007c9894;
                  if (GVar11 != (GetDensityProcessor)0x0) goto LAB_007c97e0;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar24) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar24 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar33 = (int *)(param_6 + 8);
                  goto LAB_007c97d4;
                }
              }
            }
            else {
LAB_007c97d4:
              *piVar33 = *piVar33 + 1;
            }
LAB_007c97e0:
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(param_5 + 0x5c));
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c9c30:
  uVar29 = 0;
LAB_007c9c54:
  uVar28 = (**(code **)(*(long *)param_4 + 0x58))
                     (param_4,(uVar24 << (ulong)(local_f0 & 0x1f)) + uVar29,
                      uVar25 + (uVar20 << (ulong)(local_128 & 0x1f)));
  if ((((iVar7 != 2) && ((iVar7 == 0) == ((uVar28 & uVar16) != uVar8))) ||
      (DVar10 != (DensityMapFilter)0x0)) ||
     ((uVar26 != 0 && ((uVar28 >> (ulong)(uVar23 & 0x1f) & uVar15 & uVar26) == 0))))
  goto LAB_007c9c48;
  iVar27 = *(int *)(param_2 + 0x34);
  iVar12 = (uVar20 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar32 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar12 + (uVar24 >> 5)) * iVar27) * 8)
  ;
  uVar25 = uVar24 & 0x1f | (uVar20 & 0x1f) << 5;
  uVar29 = (**ppcVar32)(ppcVar32,uVar25,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar38 = 1;
    puVar36 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar32 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar27 * (iVar12 + (uVar24 >> 5)) + (int)uVar38) * 8);
      iVar30 = (**ppcVar32)(ppcVar32,uVar25,0,*puVar36);
      puVar1 = puVar36 + -1;
      uVar38 = uVar38 + 1;
      puVar36 = puVar36 + 2;
      uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
    } while (uVar38 < *(uint *)(param_2 + 0x34));
  }
  uVar25 = uVar29 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar25;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar29;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar29)))) {
    if ((int)uVar25 < *(int *)(param_6 + 0x2c)) {
      GVar11 = param_6[0x34];
    }
    else {
      GVar11 = param_6[0x34];
    }
    if ((GVar11 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar25) == 0))))
    goto LAB_007c9b28;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar25 &
         ((int)(*(int *)(param_6 + 0xc) + uVar25) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar34 = (int *)(param_6 + 8);
    goto LAB_007c9b1c;
  }
  goto LAB_007c9b28;
LAB_007c9c48:
  uVar29 = uVar29 + 1;
  if (uVar29 == uVar22) goto LAB_007c9c20;
  goto LAB_007c9c54;
LAB_007c9c20:
  uVar25 = uVar25 + 1;
  if (uVar25 == uVar19) goto LAB_007c9b1c;
  goto LAB_007c9c30;
}


