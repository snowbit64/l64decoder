// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007d7f90
// Size: 3916 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ChunkedBitSquare * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   ChunkedBitSquare, BitVector, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ChunkedBitSquare*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource
   const>&, DensityMapFilter const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ChunkedBitSquare *param_3,BitVector *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

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
  int iVar10;
  uint uVar11;
  DensityMapFilter DVar12;
  DensityMapFilter DVar13;
  GetDensityProcessor GVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  code **ppcVar36;
  int *piVar37;
  int *piVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  uint uVar43;
  undefined4 *puVar44;
  ulong uVar45;
  ulong uVar46;
  long *plVar47;
  int iVar48;
  undefined2 uVar49;
  undefined8 uVar50;
  uint local_150;
  uint local_14c;
  uint local_128;
  uint local_118;
  uint local_b8;
  uint local_b4;
  uint local_a8;
  uint local_94;
  uint local_6c;
  
  uVar21 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar22 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar47 = *(long **)param_7;
  uVar23 = (**(code **)(*plVar47 + 0x18))(plVar47);
  uVar24 = (**(code **)(*plVar47 + 0x20))(plVar47);
  (**(code **)(*plVar47 + 0x30))(plVar47);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar7 = *(int *)(param_7 + 8);
  uVar8 = *(uint *)(param_7 + 0xc);
  plVar47 = *(long **)param_8;
  iVar9 = *(int *)(param_7 + 0x18);
  iVar10 = *(int *)(param_7 + 0x1c);
  DVar12 = param_7[0x20];
  uVar11 = *(uint *)(param_7 + 0x24);
  uVar17 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar26 = (**(code **)(*plVar47 + 0x18))(plVar47);
  uVar27 = (**(code **)(*plVar47 + 0x20))(plVar47);
  uVar28 = (**(code **)(*plVar47 + 0x30))(plVar47);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar29 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar35 = *(int *)(param_8 + 8);
  uVar5 = *(uint *)(param_8 + 0xc);
  DVar13 = param_8[0x20];
  iVar31 = *(int *)(param_8 + 0x18);
  iVar6 = *(int *)(param_8 + 0x1c);
  uVar19 = ~(-1 << (ulong)(uVar29 & 0x1f));
  uVar29 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar23) || (uVar22 < uVar24)) || (uVar21 < uVar26)) || (uVar22 < uVar27)) {
    if (((uVar23 < uVar21) || (uVar24 < uVar22)) || ((uVar26 < uVar21 || (uVar27 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar35 != 0
         )) {
                    /* try { // try from 007d8ea4 to 007d8eaf has its CatchHandler @ 007d8edc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar23,(ulong)uVar24,(ulong)uVar26,(ulong)uVar27,(ulong)uVar21,
                         (ulong)uVar22);
      return false;
    }
    uVar30 = 0;
    if (uVar21 != 0) {
      uVar30 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar22 != 0) {
      uVar23 = uVar24 / uVar22;
    }
    uVar50 = NEON_cnt((ulong)uVar30,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar30 & 0xffff0000) != 0;
      uVar24 = uVar30 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar30;
      }
      uVar40 = (uint)bVar20;
      uVar41 = uVar40 << 4 | 8;
      uVar34 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar41 = uVar40 << 4;
        uVar34 = uVar24;
      }
      uVar24 = uVar41 | 4;
      uVar40 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar24 = uVar41;
        uVar40 = uVar34;
      }
      uVar41 = uVar24 | 2;
      uVar34 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar41 = uVar24;
        uVar34 = uVar40;
      }
      local_118 = (uVar34 + uVar41) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar23,1);
    uVar24 = 0;
    if (uVar21 != 0) {
      uVar24 = uVar26 / uVar21;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar40 = (uint)bVar20;
      uVar41 = uVar40 << 4 | 8;
      uVar34 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar41 = uVar40 << 4;
        uVar34 = uVar21;
      }
      uVar21 = uVar41 | 4;
      uVar40 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar21 = uVar41;
        uVar40 = uVar34;
      }
      uVar41 = uVar21 | 2;
      uVar34 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar41 = uVar21;
        uVar34 = uVar40;
      }
      local_14c = (uVar34 + uVar41) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar27 / uVar22;
    }
    uVar50 = NEON_cnt((ulong)uVar24,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar34 = (uint)bVar20;
      uVar27 = uVar34 << 4 | 8;
      uVar41 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar34 << 4;
        uVar41 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar34 = uVar41 >> 4;
      if (uVar41 < 0x10) {
        uVar22 = uVar27;
        uVar34 = uVar41;
      }
      uVar27 = uVar22 | 2;
      uVar41 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar27 = uVar22;
        uVar41 = uVar34;
      }
      local_128 = (uVar41 + uVar27) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar21,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar34 = (uint)bVar20;
      uVar27 = uVar34 << 4 | 8;
      uVar41 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar34 << 4;
        uVar41 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar34 = uVar41 >> 4;
      if (uVar41 < 0x10) {
        uVar22 = uVar27;
        uVar34 = uVar41;
      }
      uVar27 = uVar22 | 2;
      uVar41 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar27 = uVar22;
        uVar41 = uVar34;
      }
      local_150 = (uVar41 + uVar27) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar27 = *(uint *)(param_5 + 0x58);
        if (uVar27 < *(uint *)(param_5 + 0x5c)) {
LAB_007d8ae8:
          uVar41 = 0;
          uVar34 = uVar27 << (ulong)(local_118 & 0x1f);
          do {
            uVar40 = 0;
            uVar46 = (ulong)*(uint *)(param_3 + 0x34);
            uVar43 = uVar41 + (uVar22 << (ulong)(local_14c & 0x1f));
            uVar3 = uVar34;
            do {
              uVar2 = uVar40 + uVar34;
              iVar15 = (uVar43 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
              iVar48 = (int)uVar46;
              ppcVar36 = *(code ***)
                          (*(long *)(param_3 + 0x28) + (ulong)((iVar15 + (uVar2 >> 5)) * iVar48) * 8
                          );
              uVar2 = uVar2 & 0x1f | (uVar43 & 0x1f) << 5;
              uVar32 = (**ppcVar36)(ppcVar36,uVar2,0,*(undefined4 *)(param_3 + 0x3c));
              piVar38 = (int *)(param_6 + 4);
              if (*(uint *)(param_3 + 0x34) < 2) {
                uVar46 = (ulong)*(uint *)(param_3 + 0x34);
                if (iVar7 != 2) goto LAB_007d8c1c;
LAB_007d8c3c:
                uVar2 = uVar32 >> (ulong)(uVar4 & 0x1f) & uVar16;
                if (((int)uVar2 < iVar9) || (iVar10 < (int)uVar2)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007d8c68;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007d8c68:
                  if ((uVar11 == 0) || ((uVar2 & uVar11) != 0)) {
                    uVar41 = 0;
                    uVar34 = uVar28 * (uVar26 * (uVar22 << (ulong)(local_150 & 0x1f)) +
                                      (uVar27 << (ulong)(local_128 & 0x1f)));
                    lVar39 = *(long *)param_4;
                    goto LAB_007d8cdc;
                  }
                }
              }
              else {
                uVar45 = 1;
                puVar44 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar36 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar48 * (iVar15 + (uVar3 >> 5)) + (int)uVar45) * 8);
                  iVar33 = (**ppcVar36)(ppcVar36,uVar2,0,*puVar44);
                  puVar1 = puVar44 + -1;
                  uVar45 = uVar45 + 1;
                  uVar46 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar44 = puVar44 + 2;
                  uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
                } while (uVar45 < uVar46);
                if (iVar7 == 2) goto LAB_007d8c3c;
LAB_007d8c1c:
                if ((iVar7 == 0) != ((uVar32 & uVar17) != uVar8)) goto LAB_007d8c3c;
              }
              uVar40 = uVar40 + 1;
              uVar3 = uVar3 + 1;
            } while (uVar40 != uVar30);
            uVar41 = uVar41 + 1;
          } while (uVar41 != uVar23);
          goto LAB_007d8ac8;
        }
LAB_007d8a50:
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar30 = 0;
    if (uVar23 != 0) {
      uVar30 = uVar21 / uVar23;
    }
    uVar23 = 0;
    if (uVar24 != 0) {
      uVar23 = uVar22 / uVar24;
    }
    uVar50 = NEON_cnt((ulong)uVar30,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar30 & 0xffff0000) != 0;
      uVar24 = uVar30 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar30;
      }
      uVar34 = (uint)bVar20;
      uVar30 = uVar34 << 4 | 8;
      uVar41 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar30 = uVar34 << 4;
        uVar41 = uVar24;
      }
      uVar24 = uVar30 | 4;
      uVar34 = uVar41 >> 4;
      if (uVar41 < 0x10) {
        uVar24 = uVar30;
        uVar34 = uVar41;
      }
      uVar30 = uVar24 | 2;
      uVar41 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar30 = uVar24;
        uVar41 = uVar34;
      }
      local_6c = (uVar41 + uVar30) - 1;
    }
    else {
      local_6c = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar23,1);
    uVar24 = 0;
    if (uVar26 != 0) {
      uVar24 = uVar21 / uVar26;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar41 = (uint)bVar20;
      uVar23 = uVar41 << 4 | 8;
      uVar30 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar23 = uVar41 << 4;
        uVar30 = uVar21;
      }
      uVar21 = uVar23 | 4;
      uVar41 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar21 = uVar23;
        uVar41 = uVar30;
      }
      uVar23 = uVar21 | 2;
      uVar30 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar23 = uVar21;
        uVar30 = uVar41;
      }
      local_b4 = (uVar30 + uVar23) - 1;
    }
    else {
      local_b4 = 0;
    }
    uVar21 = 0;
    if (uVar27 != 0) {
      uVar21 = uVar22 / uVar27;
    }
    uVar50 = NEON_cnt((ulong)uVar24,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar27 = (uint)bVar20;
      uVar23 = uVar27 << 4 | 8;
      uVar24 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar23 = uVar27 << 4;
        uVar24 = uVar22;
      }
      uVar22 = uVar23 | 4;
      uVar27 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar22 = uVar23;
        uVar27 = uVar24;
      }
      uVar23 = uVar22 | 2;
      uVar24 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar23 = uVar22;
        uVar24 = uVar27;
      }
      local_94 = (uVar24 + uVar23) - 1;
    }
    else {
      local_94 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar21,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar24 = (uint)bVar20;
      uVar21 = uVar24 << 4 | 8;
      uVar23 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar21 = uVar24 << 4;
        uVar23 = uVar22;
      }
      uVar22 = uVar21 | 4;
      uVar24 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar22 = uVar21;
        uVar24 = uVar23;
      }
      uVar21 = uVar22 | 2;
      uVar23 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar21 = uVar22;
        uVar23 = uVar24;
      }
      local_b8 = (uVar23 + uVar21) - 1;
    }
    else {
      local_b8 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      piVar38 = (int *)(param_6 + 4);
      local_a8 = ~(-1 << (ulong)(uVar28 & 0x1f)) & 0xffff;
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar22 = *(uint *)(param_5 + 0x58);
        if (uVar22 < *(uint *)(param_5 + 0x5c)) {
          uVar23 = uVar21 >> (ulong)(local_b4 & 0x1f);
          do {
            uVar24 = uVar22 >> (ulong)(local_6c & 0x1f);
            uVar27 = (((uVar23 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar24 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar36 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar27 * 8);
            uVar24 = uVar24 & 0x1f | (uVar23 & 0x1f) << 5;
            uVar30 = (**ppcVar36)(ppcVar36,uVar24,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar46 = 1;
              puVar44 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar36 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar27 + (int)uVar46) * 8);
                iVar31 = (**ppcVar36)(ppcVar36,uVar24,0,*puVar44);
                puVar1 = puVar44 + -1;
                uVar46 = uVar46 + 1;
                puVar44 = puVar44 + 2;
                uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
              } while (uVar46 < *(uint *)(param_3 + 0x34));
            }
            piVar37 = piVar38;
            if ((((iVar7 == 2) || ((iVar7 == 0) != ((uVar30 & uVar17) != uVar8))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar11 == 0 || ((uVar30 >> (ulong)(uVar4 & 0x1f) & uVar16 & uVar11) != 0)))) {
              lVar42 = *(long *)param_4;
              uVar24 = ((uVar22 >> (ulong)(local_94 & 0x1f)) +
                       (uVar21 >> (ulong)(local_b8 & 0x1f)) * uVar26) * uVar28;
              uVar46 = (ulong)(uVar24 >> 3) & 0xffff;
              lVar39 = *(long *)(lVar42 + (ulong)(uVar24 >> 0x13) * 8);
              if ((uint)uVar46 < 0xfffd) {
                uVar27 = *(uint *)(lVar39 + uVar46);
              }
              else {
                uVar27 = (uVar24 >> 3) + 1;
                uVar30 = (uVar24 >> 3) + 2;
                uVar27 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar42 + (ulong)(uVar30 >> 0x10) * 8) +
                                         ((ulong)uVar30 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar42 + (ulong)(uVar27 >> 0x10) * 8) +
                                                  ((ulong)uVar27 & 0xffff)),
                                                 *(undefined *)(lVar39 + uVar46)));
              }
              uVar24 = uVar27 >> (ulong)(uVar24 & 7) & local_a8;
              if (((iVar35 != 2) && ((iVar35 == 0) == ((uVar24 & uVar19) != uVar5))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar29 != 0 && ((uVar24 >> (ulong)(uVar25 & 0x1f) & uVar18 & uVar29) == 0))))))
              goto LAB_007d8818;
              uVar27 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar22,uVar21);
              uVar24 = uVar27 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar24;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar27;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar27)))) {
                if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007d87d8:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d8824;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar24) goto joined_r0x007d87d8;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d8824;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar24) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar24 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar37 = (int *)(param_6 + 8);
                  goto LAB_007d8818;
                }
              }
            }
            else {
LAB_007d8818:
              *piVar37 = *piVar37 + 1;
            }
LAB_007d8824:
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d8cdc:
  do {
    uVar40 = 0;
    uVar3 = uVar34;
    do {
      uVar46 = (ulong)(uVar3 >> 3) & 0xffff;
      lVar42 = *(long *)(lVar39 + (ulong)(uVar3 >> 0x13) * 8);
      if ((uint)uVar46 < 0xfffd) {
        uVar43 = *(uint *)(lVar42 + uVar46);
      }
      else {
        uVar43 = (uVar3 >> 3) + 1;
        uVar2 = (uVar3 >> 3) + 2;
        uVar43 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar39 + (ulong)(uVar2 >> 0x10) * 8) +
                                 ((ulong)uVar2 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar39 + (ulong)(uVar43 >> 0x10) * 8) +
                                          ((ulong)uVar43 & 0xffff)),*(undefined *)(lVar42 + uVar46))
                               );
      }
      uVar43 = uVar43 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar28 & 0x1f)) & 0xffffU;
      if ((iVar35 == 2) || ((iVar35 == 0) != ((uVar43 & uVar19) != uVar5))) {
        uVar43 = uVar43 >> (ulong)(uVar25 & 0x1f) & uVar18;
        if (((int)uVar43 < iVar31) || (iVar6 < (int)uVar43)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007d8da4;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007d8da4:
          if ((uVar29 == 0) || ((uVar43 & uVar29) != 0)) {
            uVar34 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar27,uVar22);
            uVar41 = uVar34 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar41;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar34;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar34))))
            goto LAB_007d8ad4;
            if ((int)uVar41 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007d8e3c:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d8ad4;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar41) goto joined_r0x007d8e3c;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d8ad4;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar41) == 0))
            goto LAB_007d8ad4;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar41 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar41) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar38 = (int *)(param_6 + 8);
            goto LAB_007d8ac8;
          }
        }
      }
      uVar40 = uVar40 + 1;
      uVar3 = uVar3 + uVar28;
    } while (uVar40 != uVar24);
    uVar41 = uVar41 + 1;
    uVar34 = uVar34 + uVar26 * uVar28;
  } while (uVar41 != uVar21);
LAB_007d8ac8:
  *piVar38 = *piVar38 + 1;
LAB_007d8ad4:
  uVar27 = uVar27 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar27) goto LAB_007d8a50;
  goto LAB_007d8ae8;
}


