// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c8154
// Size: 3884 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare,
   ProceduralDensityPixelSource const, BitVector, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,BitVector *param_4,ParallelogramHelper *param_5
               ,GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

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
  int iVar14;
  uint uVar15;
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
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  code **ppcVar35;
  int *piVar36;
  int *piVar37;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  long *plVar43;
  undefined4 *puVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_138;
  uint local_134;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_f8;
  uint local_dc;
  uint local_9c;
  
  uVar21 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar22 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  uVar23 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar24 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar43 = *(long **)param_8;
  iVar34 = *(int *)(param_7 + 0x18);
  uVar5 = *(uint *)(param_7 + 0xc);
  DVar11 = param_7[0x20];
  iVar6 = *(int *)(param_7 + 8);
  iVar7 = *(int *)(param_7 + 0x1c);
  uVar16 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar26 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar27 = (**(code **)(*plVar43 + 0x20))(plVar43);
  uVar28 = (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar29 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  uVar18 = ~(-1 << (ulong)(uVar29 & 0x1f));
  DVar12 = param_8[0x20];
  uVar29 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar23) || (uVar22 < uVar24)) || (uVar21 < uVar26)) || (uVar22 < uVar27)) {
    if (((uVar23 < uVar21) || (uVar24 < uVar22)) || ((uVar26 < uVar21 || (uVar27 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 007c9048 to 007c9053 has its CatchHandler @ 007c9080 */
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
    uVar19 = 0;
    if (uVar21 != 0) {
      uVar19 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar22 != 0) {
      uVar23 = uVar24 / uVar22;
    }
    uVar46 = NEON_cnt((ulong)uVar19,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar19 & 0xffff0000) != 0;
      uVar24 = uVar19 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar19;
      }
      uVar31 = (uint)bVar20;
      uVar40 = uVar31 << 4 | 8;
      uVar32 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar40 = uVar31 << 4;
        uVar32 = uVar24;
      }
      uVar24 = uVar40 | 4;
      uVar31 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar24 = uVar40;
        uVar31 = uVar32;
      }
      uVar40 = uVar24 | 2;
      uVar32 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar40 = uVar24;
        uVar32 = uVar31;
      }
      local_dc = (uVar32 + uVar40) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar24 = 0;
    if (uVar21 != 0) {
      uVar24 = uVar26 / uVar21;
    }
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar31 = (uint)bVar20;
      uVar40 = uVar31 << 4 | 8;
      uVar32 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar40 = uVar31 << 4;
        uVar32 = uVar21;
      }
      uVar21 = uVar40 | 4;
      uVar31 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar21 = uVar40;
        uVar31 = uVar32;
      }
      uVar40 = uVar21 | 2;
      uVar32 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar40 = uVar21;
        uVar32 = uVar31;
      }
      local_134 = (uVar32 + uVar40) - 1;
    }
    else {
      local_134 = 0;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar27 / uVar22;
    }
    uVar46 = NEON_cnt((ulong)uVar24,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar32 = (uint)bVar20;
      uVar27 = uVar32 << 4 | 8;
      uVar40 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar32 << 4;
        uVar40 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar32 = uVar40 >> 4;
      if (uVar40 < 0x10) {
        uVar22 = uVar27;
        uVar32 = uVar40;
      }
      uVar27 = uVar22 | 2;
      uVar40 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar27 = uVar22;
        uVar40 = uVar32;
      }
      local_f8 = (uVar40 + uVar27) - 1;
    }
    else {
      local_f8 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar32 = (uint)bVar20;
      uVar27 = uVar32 << 4 | 8;
      uVar40 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar32 << 4;
        uVar40 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar32 = uVar40 >> 4;
      if (uVar40 < 0x10) {
        uVar22 = uVar27;
        uVar32 = uVar40;
      }
      uVar27 = uVar22 | 2;
      uVar40 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar27 = uVar22;
        uVar40 = uVar32;
      }
      local_138 = (uVar40 + uVar27) - 1;
    }
    else {
      local_138 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar19 < 2) {
        uVar19 = 1;
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
          do {
            uVar40 = 0;
            do {
              uVar32 = 0;
              do {
                uVar31 = (**(code **)(*(long *)param_3 + 0x58))
                                   (param_3,(uVar27 << (ulong)(local_dc & 0x1f)) + uVar32,
                                    uVar40 + (uVar22 << (ulong)(local_134 & 0x1f)));
                piVar37 = (int *)(param_6 + 4);
                if ((iVar6 == 2) || ((iVar6 == 0) != ((uVar31 & uVar16) != uVar5))) {
                  uVar31 = uVar31 >> (ulong)(uVar4 & 0x1f) & uVar15;
                  if (((int)uVar31 < iVar34) || (iVar7 < (int)uVar31)) {
                    if (DVar11 != (DensityMapFilter)0x0) goto LAB_007c8d70;
                  }
                  else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007c8d70:
                    if ((uVar8 == 0) || ((uVar31 & uVar8) != 0)) {
                      uVar40 = 0;
                      uVar32 = uVar28 * (uVar26 * (uVar22 << (ulong)(local_138 & 0x1f)) +
                                        (uVar27 << (ulong)(local_f8 & 0x1f)));
                      lVar38 = *(long *)param_4;
                      goto LAB_007c8dd8;
                    }
                  }
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 != uVar19);
              uVar40 = uVar40 + 1;
            } while (uVar40 != uVar23);
LAB_007c8c90:
            *piVar37 = *piVar37 + 1;
LAB_007c8c9c:
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(uint *)(param_5 + 0x5c));
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar19 = 0;
    if (uVar23 != 0) {
      uVar19 = uVar21 / uVar23;
    }
    uVar23 = 0;
    if (uVar24 != 0) {
      uVar23 = uVar22 / uVar24;
    }
    uVar46 = NEON_cnt((ulong)uVar19,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar19 & 0xffff0000) != 0;
      uVar24 = uVar19 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar19;
      }
      uVar32 = (uint)bVar20;
      uVar19 = uVar32 << 4 | 8;
      uVar40 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar19 = uVar32 << 4;
        uVar40 = uVar24;
      }
      uVar24 = uVar19 | 4;
      uVar32 = uVar40 >> 4;
      if (uVar40 < 0x10) {
        uVar24 = uVar19;
        uVar32 = uVar40;
      }
      uVar19 = uVar24 | 2;
      uVar40 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar19 = uVar24;
        uVar40 = uVar32;
      }
      local_100 = (uVar40 + uVar19) - 1;
    }
    else {
      local_100 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar24 = 0;
    if (uVar26 != 0) {
      uVar24 = uVar21 / uVar26;
    }
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar40 = (uint)bVar20;
      uVar23 = uVar40 << 4 | 8;
      uVar19 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar23 = uVar40 << 4;
        uVar19 = uVar21;
      }
      uVar21 = uVar23 | 4;
      uVar40 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar21 = uVar23;
        uVar40 = uVar19;
      }
      uVar23 = uVar21 | 2;
      uVar19 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar23 = uVar21;
        uVar19 = uVar40;
      }
      local_104 = (uVar19 + uVar23) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar21 = 0;
    if (uVar27 != 0) {
      uVar21 = uVar22 / uVar27;
    }
    uVar46 = NEON_cnt((ulong)uVar24,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
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
      local_9c = (uVar24 + uVar23) - 1;
    }
    else {
      local_9c = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
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
      local_108 = (uVar23 + uVar21) - 1;
    }
    else {
      local_108 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      piVar37 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar22 = *(uint *)(param_5 + 0x58);
        if (uVar22 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar23 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar22 >> (ulong)(local_100 & 0x1f),
                                uVar21 >> (ulong)(local_104 & 0x1f));
            piVar36 = piVar37;
            if ((((iVar6 == 2) || ((iVar6 == 0) != ((uVar23 & uVar16) != uVar5))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar23 >> (ulong)(uVar4 & 0x1f) & uVar15 & uVar8) != 0)))) {
              lVar41 = *(long *)param_4;
              uVar23 = ((uVar22 >> (ulong)(local_9c & 0x1f)) +
                       (uVar21 >> (ulong)(local_108 & 0x1f)) * uVar26) * uVar28;
              uVar39 = (ulong)(uVar23 >> 3) & 0xffff;
              lVar38 = *(long *)(lVar41 + (ulong)(uVar23 >> 0x13) * 8);
              if ((uint)uVar39 < 0xfffd) {
                uVar24 = *(uint *)(lVar38 + uVar39);
              }
              else {
                uVar24 = (uVar23 >> 3) + 1;
                uVar27 = (uVar23 >> 3) + 2;
                uVar24 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar41 + (ulong)(uVar27 >> 0x10) * 8) +
                                         ((ulong)uVar27 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar41 + (ulong)(uVar24 >> 0x10) * 8) +
                                                  ((ulong)uVar24 & 0xffff)),
                                                 *(undefined *)(lVar38 + uVar39)));
              }
              uVar23 = uVar24 >> (ulong)(uVar23 & 7) & ~(-1 << (ulong)(uVar28 & 0x1f)) & 0xffffU;
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar23 & uVar18) != uVar10))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar29 != 0 && ((uVar23 >> (ulong)(uVar25 & 0x1f) & uVar17 & uVar29) == 0))))))
              goto LAB_007c8a00;
              iVar34 = *(int *)(param_2 + 0x34);
              iVar7 = (uVar21 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar35 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar7 + (uVar22 >> 5)) * iVar34) * 8
                          );
              uVar23 = uVar22 & 0x1f | (uVar21 & 0x1f) << 5;
              uVar24 = (**ppcVar35)(ppcVar35,uVar23,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar39 = 1;
                puVar44 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar34 * (iVar7 + (uVar22 >> 5)) + (int)uVar39) * 8);
                  iVar30 = (**ppcVar35)(ppcVar35,uVar23,0,*puVar44);
                  puVar1 = puVar44 + -1;
                  uVar39 = uVar39 + 1;
                  puVar44 = puVar44 + 2;
                  uVar24 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar24;
                } while (uVar39 < *(uint *)(param_2 + 0x34));
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
                  GVar13 = param_6[0x34];
joined_r0x007c89c8:
                  if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007c8a0c;
                }
                else {
                  GVar13 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar23) goto joined_r0x007c89c8;
                  if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007c8a0c;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar23) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar23 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar23) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar36 = (int *)(param_6 + 8);
                  goto LAB_007c8a00;
                }
              }
            }
            else {
LAB_007c8a00:
              *piVar36 = *piVar36 + 1;
            }
LAB_007c8a0c:
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c8dd8:
  uVar31 = 0;
  uVar3 = uVar32;
LAB_007c8df8:
  uVar39 = (ulong)(uVar3 >> 3) & 0xffff;
  lVar41 = *(long *)(lVar38 + (ulong)(uVar3 >> 0x13) * 8);
  if ((uint)uVar39 < 0xfffd) {
    uVar42 = *(uint *)(lVar41 + uVar39);
  }
  else {
    uVar42 = (uVar3 >> 3) + 1;
    uVar2 = (uVar3 >> 3) + 2;
    uVar42 = (uint)CONCAT12(*(undefined *)
                             (*(long *)(lVar38 + (ulong)(uVar2 >> 0x10) * 8) +
                             ((ulong)uVar2 & 0xffff)),
                            CONCAT11(*(undefined *)
                                      (*(long *)(lVar38 + (ulong)(uVar42 >> 0x10) * 8) +
                                      ((ulong)uVar42 & 0xffff)),*(undefined *)(lVar41 + uVar39)));
  }
  uVar42 = uVar42 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar28 & 0x1f)) & 0xffffU;
  if ((((iVar9 != 2) && ((iVar9 == 0) == ((uVar42 & uVar18) != uVar10))) ||
      (DVar12 != (DensityMapFilter)0x0)) ||
     ((uVar29 != 0 && ((uVar42 >> (ulong)(uVar25 & 0x1f) & uVar17 & uVar29) == 0))))
  goto LAB_007c8de8;
  iVar30 = *(int *)(param_2 + 0x34);
  iVar14 = (uVar22 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar35 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar14 + (uVar27 >> 5)) * iVar30) * 8)
  ;
  uVar40 = uVar27 & 0x1f | (uVar22 & 0x1f) << 5;
  uVar32 = (**ppcVar35)(ppcVar35,uVar40,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar39 = 1;
    puVar44 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar35 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar30 * (iVar14 + (uVar27 >> 5)) + (int)uVar39) * 8);
      iVar33 = (**ppcVar35)(ppcVar35,uVar40,0,*puVar44);
      puVar1 = puVar44 + -1;
      uVar39 = uVar39 + 1;
      puVar44 = puVar44 + 2;
      uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
    } while (uVar39 < *(uint *)(param_2 + 0x34));
  }
  uVar40 = uVar32 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar40;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar32;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar32)))) {
    if ((int)uVar40 < *(int *)(param_6 + 0x2c)) {
      GVar13 = param_6[0x34];
    }
    else {
      GVar13 = param_6[0x34];
    }
    if ((GVar13 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar40) == 0))))
    goto LAB_007c8c9c;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar40 &
         ((int)(*(int *)(param_6 + 0xc) + uVar40) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar37 = (int *)(param_6 + 8);
    goto LAB_007c8c90;
  }
  goto LAB_007c8c9c;
LAB_007c8de8:
  uVar31 = uVar31 + 1;
  uVar3 = uVar3 + uVar28;
  if (uVar31 == uVar24) goto LAB_007c8dc8;
  goto LAB_007c8df8;
LAB_007c8dc8:
  uVar40 = uVar40 + 1;
  uVar32 = uVar32 + uVar26 * uVar28;
  if (uVar40 == uVar21) goto LAB_007c8c90;
  goto LAB_007c8dd8;
}


