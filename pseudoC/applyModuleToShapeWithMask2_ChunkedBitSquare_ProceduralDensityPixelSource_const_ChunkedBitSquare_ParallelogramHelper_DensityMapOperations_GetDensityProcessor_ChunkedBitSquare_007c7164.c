// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c7164
// Size: 4056 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,ChunkedBitSquare *param_4,
               ParallelogramHelper *param_5,GetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
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
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
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
  uint local_e4;
  uint local_dc;
  uint local_78;
  
  uVar19 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar20 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar42 = *(long **)param_7;
  uVar21 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar22 = (**(code **)(*plVar42 + 0x20))(plVar42);
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0xc);
  plVar42 = *(long **)param_8;
  iVar28 = *(int *)(param_7 + 0x18);
  iVar6 = *(int *)(param_7 + 0x1c);
  DVar11 = param_7[0x20];
  iVar7 = *(int *)(param_7 + 8);
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar24 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar25 = (**(code **)(*plVar42 + 0x20))(plVar42);
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar23 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  DVar12 = param_8[0x20];
  uVar17 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar26 = *(uint *)(param_8 + 0x24);
  if ((((uVar19 < uVar21) || (uVar20 < uVar22)) || (uVar19 < uVar24)) || (uVar20 < uVar25)) {
    if (((uVar21 < uVar19) || (uVar22 < uVar20)) || ((uVar24 < uVar19 || (uVar25 < uVar20)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar28 != 0
         )) {
                    /* try { // try from 007c8104 to 007c810f has its CatchHandler @ 007c813c */
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
    uVar27 = 0;
    if (uVar19 != 0) {
      uVar27 = uVar21 / uVar19;
    }
    uVar21 = 0;
    if (uVar20 != 0) {
      uVar21 = uVar22 / uVar20;
    }
    uVar44 = NEON_cnt((ulong)uVar27,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar27 & 0xffff0000) != 0;
      uVar22 = uVar27 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar27;
      }
      uVar37 = (uint)bVar18;
      uVar33 = uVar37 << 4 | 8;
      uVar30 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar33 = uVar37 << 4;
        uVar30 = uVar22;
      }
      uVar22 = uVar33 | 4;
      uVar37 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar22 = uVar33;
        uVar37 = uVar30;
      }
      uVar33 = uVar22 | 2;
      uVar30 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar33 = uVar22;
        uVar30 = uVar37;
      }
      local_11c = (uVar30 + uVar33) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar22 = 0;
    if (uVar19 != 0) {
      uVar22 = uVar24 / uVar19;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar18) {
        uVar19 = uVar21;
      }
      uVar30 = (uint)bVar18;
      uVar24 = uVar30 << 4 | 8;
      uVar33 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar24 = uVar30 << 4;
        uVar33 = uVar19;
      }
      uVar19 = uVar24 | 4;
      uVar30 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar19 = uVar24;
        uVar30 = uVar33;
      }
      uVar24 = uVar19 | 2;
      uVar33 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar24 = uVar19;
        uVar33 = uVar30;
      }
      local_14c = (uVar33 + uVar24) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar19 = 0;
    if (uVar20 != 0) {
      uVar19 = uVar25 / uVar20;
    }
    uVar44 = NEON_cnt((ulong)uVar22,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar22;
      }
      uVar33 = (uint)bVar18;
      uVar24 = uVar33 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar24 = uVar33 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar24 | 4;
      uVar33 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar24;
        uVar33 = uVar25;
      }
      uVar24 = uVar20 | 2;
      uVar25 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar24 = uVar20;
        uVar25 = uVar33;
      }
      local_120 = (uVar25 + uVar24) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar19,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar20 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar19;
      }
      uVar33 = (uint)bVar18;
      uVar24 = uVar33 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar24 = uVar33 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar24 | 4;
      uVar33 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar24;
        uVar33 = uVar25;
      }
      uVar24 = uVar20 | 2;
      uVar25 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar24 = uVar20;
        uVar25 = uVar33;
      }
      local_150 = (uVar25 + uVar24) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      if (uVar27 < 2) {
        uVar27 = 1;
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
LAB_007c7cdc:
          uVar25 = 0;
          do {
            uVar33 = 0;
            do {
              uVar30 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar24 << (ulong)(local_11c & 0x1f)) + uVar33,
                                  uVar25 + (uVar20 << (ulong)(local_14c & 0x1f)));
              piVar36 = (int *)(param_6 + 4);
              if ((iVar7 == 2) || ((iVar7 == 0) != ((uVar30 & uVar15) != uVar5))) {
                uVar30 = uVar30 >> (ulong)(uVar4 & 0x1f) & uVar14;
                if (((int)uVar30 < iVar28) || (iVar6 < (int)uVar30)) {
                  if (DVar11 != (DensityMapFilter)0x0) goto LAB_007c7d98;
                }
                else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007c7d98:
                  if ((uVar8 == 0) || ((uVar30 & uVar8) != 0)) {
                    uVar25 = 0;
                    uVar33 = uVar24 << (ulong)(local_120 & 0x1f);
                    goto LAB_007c7ddc;
                  }
                }
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 != uVar27);
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar21);
          goto LAB_007c7cbc;
        }
LAB_007c7c48:
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar27 = 0;
    if (uVar21 != 0) {
      uVar27 = uVar19 / uVar21;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar20 / uVar22;
    }
    uVar44 = NEON_cnt((ulong)uVar27,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar27 & 0xffff0000) != 0;
      uVar22 = uVar27 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar27;
      }
      uVar30 = (uint)bVar18;
      uVar27 = uVar30 << 4 | 8;
      uVar33 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar30 << 4;
        uVar33 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar30 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar22 = uVar27;
        uVar30 = uVar33;
      }
      uVar27 = uVar22 | 2;
      uVar33 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar27 = uVar22;
        uVar33 = uVar30;
      }
      uVar22 = (uVar33 + uVar27) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar27 = 0;
    if (uVar24 != 0) {
      uVar27 = uVar19 / uVar24;
    }
    uVar44 = NEON_cnt((ulong)uVar21,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar18) {
        uVar19 = uVar21;
      }
      uVar33 = (uint)bVar18;
      uVar21 = uVar33 << 4 | 8;
      uVar24 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar21 = uVar33 << 4;
        uVar24 = uVar19;
      }
      uVar19 = uVar21 | 4;
      uVar33 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar19 = uVar21;
        uVar33 = uVar24;
      }
      uVar21 = uVar19 | 2;
      uVar24 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar21 = uVar19;
        uVar24 = uVar33;
      }
      local_dc = (uVar24 + uVar21) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar19 = 0;
    if (uVar25 != 0) {
      uVar19 = uVar20 / uVar25;
    }
    uVar44 = NEON_cnt((ulong)uVar27,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar27 & 0xffff0000) != 0;
      uVar20 = uVar27 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar27;
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
      local_78 = (uVar24 + uVar21) - 1;
    }
    else {
      local_78 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar19,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar20 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar19;
      }
      uVar24 = (uint)bVar18;
      uVar19 = uVar24 << 4 | 8;
      uVar21 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar19 = uVar24 << 4;
        uVar21 = uVar20;
      }
      uVar20 = uVar19 | 4;
      uVar24 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar20 = uVar19;
        uVar24 = uVar21;
      }
      uVar19 = uVar20 | 2;
      uVar21 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar19 = uVar20;
        uVar21 = uVar24;
      }
      local_e4 = (uVar21 + uVar19) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar19 = *(uint *)(param_5 + 0x48);
    if (uVar19 < *(uint *)(param_5 + 0x4c)) {
      piVar36 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar19);
        uVar20 = *(uint *)(param_5 + 0x58);
        if (uVar20 < *(uint *)(param_5 + 0x5c)) {
          uVar21 = uVar19 >> (ulong)(local_e4 & 0x1f);
          do {
            uVar24 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar20 >> (ulong)(uVar22 & 0x1f),
                                uVar19 >> (ulong)(local_dc & 0x1f));
            piVar35 = piVar36;
            if ((((iVar7 == 2) || ((iVar7 == 0) != ((uVar24 & uVar15) != uVar5))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar24 >> (ulong)(uVar4 & 0x1f) & uVar14 & uVar8) != 0)))) {
              uVar24 = uVar20 >> (ulong)(local_78 & 0x1f);
              uVar25 = (((uVar21 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar24 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar34 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar25 * 8);
              uVar24 = uVar24 & 0x1f | (uVar21 & 0x1f) << 5;
              uVar27 = (**ppcVar34)(ppcVar34,uVar24,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar40 = 1;
                puVar39 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar25 + (int)uVar40) * 8);
                  iVar28 = (**ppcVar34)(ppcVar34,uVar24,0,*puVar39);
                  puVar1 = puVar39 + -1;
                  uVar40 = uVar40 + 1;
                  puVar39 = puVar39 + 2;
                  uVar27 = iVar28 << (ulong)(*puVar1 & 0x1f) | uVar27;
                } while (uVar40 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar27 & uVar17) != uVar10))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar26 != 0 && ((uVar27 >> (ulong)(uVar23 & 0x1f) & uVar16 & uVar26) == 0))))))
              goto LAB_007c79c4;
              iVar28 = *(int *)(param_2 + 0x34);
              iVar6 = (uVar19 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar34 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar6 + (uVar20 >> 5)) * iVar28) * 8
                          );
              uVar24 = uVar20 & 0x1f | (uVar19 & 0x1f) << 5;
              uVar25 = (**ppcVar34)(ppcVar34,uVar24,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar40 = 1;
                puVar39 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar28 * (iVar6 + (uVar20 >> 5)) + (int)uVar40) * 8);
                  iVar29 = (**ppcVar34)(ppcVar34,uVar24,0,*puVar39);
                  puVar1 = puVar39 + -1;
                  uVar40 = uVar40 + 1;
                  puVar39 = puVar39 + 2;
                  uVar25 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar25;
                } while (uVar40 < *(uint *)(param_2 + 0x34));
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
                  GVar13 = param_6[0x34];
joined_r0x007c7a04:
                  if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007c79d0;
                }
                else {
                  GVar13 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar24) goto joined_r0x007c7a04;
                  if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007c79d0;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar24) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar24 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar35 = (int *)(param_6 + 8);
                  goto LAB_007c79c4;
                }
              }
            }
            else {
LAB_007c79c4:
              *piVar35 = *piVar35 + 1;
            }
LAB_007c79d0:
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(uint *)(param_5 + 0x5c));
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c7ddc:
  do {
    uVar30 = 0;
    uVar40 = (ulong)*(uint *)(param_4 + 0x34);
    uVar2 = uVar25 + (uVar20 << (ulong)(local_150 & 0x1f));
    uVar37 = uVar33;
    do {
      uVar3 = uVar30 + uVar33;
      iVar29 = (uVar2 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar38 = (int)uVar40;
      ppcVar34 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar29 + (uVar3 >> 5)) * iVar38) * 8);
      uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
      uVar31 = (**ppcVar34)(ppcVar34,uVar3,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar40 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar9 != 2) goto LAB_007c7ee0;
LAB_007c7f00:
        if ((DVar12 != (DensityMapFilter)0x0) ||
           ((uVar26 != 0 && ((uVar31 >> (ulong)(uVar23 & 0x1f) & uVar16 & uVar26) == 0))))
        goto LAB_007c7e0c;
        iVar29 = *(int *)(param_2 + 0x34);
        iVar38 = (uVar20 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
        ppcVar34 = *(code ***)
                    (*(long *)(param_2 + 0x28) + (ulong)((iVar38 + (uVar24 >> 5)) * iVar29) * 8);
        uVar25 = uVar24 & 0x1f | (uVar20 & 0x1f) << 5;
        uVar33 = (**ppcVar34)(ppcVar34,uVar25,0,*(undefined4 *)(param_2 + 0x3c));
        if (1 < *(uint *)(param_2 + 0x34)) {
          uVar40 = 1;
          puVar39 = (undefined4 *)(param_2 + 0x44);
          do {
            ppcVar34 = *(code ***)
                        (*(long *)(param_2 + 0x28) +
                        (ulong)(iVar29 * (iVar38 + (uVar24 >> 5)) + (int)uVar40) * 8);
            iVar32 = (**ppcVar34)(ppcVar34,uVar25,0,*puVar39);
            puVar1 = puVar39 + -1;
            uVar40 = uVar40 + 1;
            puVar39 = puVar39 + 2;
            uVar33 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar33;
          } while (uVar40 < *(uint *)(param_2 + 0x34));
        }
        uVar25 = uVar33 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
        *(uint *)(param_6 + 0x40) = uVar25;
        *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar33;
        *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
        if ((*(int *)(param_6 + 0x24) == 2) ||
           ((*(int *)(param_6 + 0x24) == 0) !=
            (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar33)))) {
          if ((int)uVar25 < *(int *)(param_6 + 0x2c)) {
            GVar13 = param_6[0x34];
          }
          else {
            GVar13 = param_6[0x34];
          }
          if ((GVar13 == (GetDensityProcessor)0x0) ||
             ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar25) == 0))))
          goto LAB_007c7cc8;
          *(uint *)param_6 =
               (*(int *)(param_6 + 0xc) + uVar25 &
               ((int)(*(int *)(param_6 + 0xc) + uVar25) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
          piVar36 = (int *)(param_6 + 8);
          goto LAB_007c7cbc;
        }
        goto LAB_007c7cc8;
      }
      uVar41 = 1;
      puVar39 = (undefined4 *)(param_4 + 0x44);
      do {
        ppcVar34 = *(code ***)
                    (*(long *)(param_4 + 0x28) +
                    (ulong)(iVar38 * (iVar29 + (uVar37 >> 5)) + (int)uVar41) * 8);
        iVar32 = (**ppcVar34)(ppcVar34,uVar3,0,*puVar39);
        puVar1 = puVar39 + -1;
        uVar41 = uVar41 + 1;
        uVar40 = (ulong)*(uint *)(param_4 + 0x34);
        puVar39 = puVar39 + 2;
        uVar31 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar31;
      } while (uVar41 < uVar40);
      if (iVar9 == 2) goto LAB_007c7f00;
LAB_007c7ee0:
      if ((iVar9 == 0) != ((uVar31 & uVar17) != uVar10)) goto LAB_007c7f00;
LAB_007c7e0c:
      uVar30 = uVar30 + 1;
      uVar37 = uVar37 + 1;
    } while (uVar30 != uVar22);
    uVar25 = uVar25 + 1;
  } while (uVar25 != uVar19);
LAB_007c7cbc:
  *piVar36 = *piVar36 + 1;
LAB_007c7cc8:
  uVar24 = uVar24 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar24) goto LAB_007c7c48;
  goto LAB_007c7cdc;
}


