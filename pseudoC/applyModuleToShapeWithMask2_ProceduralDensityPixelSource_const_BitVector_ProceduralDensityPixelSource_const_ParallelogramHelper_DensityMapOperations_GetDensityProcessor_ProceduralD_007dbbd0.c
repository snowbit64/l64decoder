// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007dbbd0
// Size: 3572 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, BitVector * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   BitVector, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, BitVector*,
   ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               BitVector *param_3,ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5
               ,GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
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
  uint uVar29;
  uint uVar30;
  int iVar31;
  int *piVar32;
  int *piVar33;
  long lVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  long *plVar40;
  undefined2 uVar41;
  undefined8 uVar42;
  uint local_120;
  uint local_11c;
  uint local_f4;
  uint local_d8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  
  uVar20 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar21 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar40 = *(long **)param_7;
  uVar22 = (**(code **)(*plVar40 + 0x18))(plVar40);
  uVar23 = (**(code **)(*plVar40 + 0x20))(plVar40);
  uVar24 = (**(code **)(*plVar40 + 0x30))(plVar40);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar2 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar31 = *(int *)(param_7 + 8);
  uVar3 = *(uint *)(param_7 + 0xc);
  plVar40 = *(long **)param_8;
  iVar4 = *(int *)(param_7 + 0x18);
  iVar5 = *(int *)(param_7 + 0x1c);
  DVar11 = param_7[0x20];
  uVar6 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar26 = (**(code **)(*plVar40 + 0x18))(plVar40);
  uVar27 = (**(code **)(*plVar40 + 0x20))(plVar40);
  (**(code **)(*plVar40 + 0x30))(plVar40);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar7 = *(int *)(param_8 + 0x1c);
  uVar8 = *(uint *)(param_8 + 0xc);
  iVar9 = *(int *)(param_8 + 8);
  uVar17 = ~(-1 << (ulong)(uVar28 & 0x1f));
  iVar10 = *(int *)(param_8 + 0x18);
  DVar12 = param_8[0x20];
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((uVar20 < uVar22) || (uVar21 < uVar23)) || (uVar20 < uVar26)) || (uVar21 < uVar27)) {
    if (((uVar22 < uVar20) || (uVar23 < uVar21)) || ((uVar26 < uVar20 || (uVar27 < uVar21)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar31 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar31 != 0
         )) {
                    /* try { // try from 007dc98c to 007dc997 has its CatchHandler @ 007dc9c4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar22,(ulong)uVar23,(ulong)uVar26,(ulong)uVar27,(ulong)uVar20,
                         (ulong)uVar21);
      return false;
    }
    uVar37 = 0;
    if (uVar21 != 0) {
      uVar37 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar20 != 0) {
      uVar23 = uVar22 / uVar20;
    }
    uVar42 = NEON_cnt((ulong)uVar23,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar23 & 0xffff0000) != 0;
      uVar18 = uVar23 >> 0x10;
      if (!bVar19) {
        uVar18 = uVar23;
      }
      uVar36 = (uint)bVar19;
      uVar30 = uVar36 << 4 | 8;
      uVar29 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar30 = uVar36 << 4;
        uVar29 = uVar18;
      }
      uVar18 = uVar30 | 4;
      uVar36 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar18 = uVar30;
        uVar36 = uVar29;
      }
      uVar30 = uVar18 | 2;
      uVar29 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar30 = uVar18;
        uVar29 = uVar36;
      }
      local_d8 = (uVar29 + uVar30) - 1;
    }
    else {
      local_d8 = 0;
    }
    uVar18 = 0;
    if (uVar20 != 0) {
      uVar18 = uVar26 / uVar20;
    }
    uVar42 = NEON_cnt((ulong)uVar37,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar20 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar37;
      }
      uVar29 = (uint)bVar19;
      uVar26 = uVar29 << 4 | 8;
      uVar30 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar29 << 4;
        uVar30 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar29 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar20 = uVar26;
        uVar29 = uVar30;
      }
      uVar26 = uVar20 | 2;
      uVar30 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar26 = uVar20;
        uVar30 = uVar29;
      }
      local_11c = (uVar30 + uVar26) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = uVar27 / uVar21;
    }
    uVar42 = NEON_cnt((ulong)uVar18,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar18;
      }
      uVar30 = (uint)bVar19;
      uVar26 = uVar30 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar30 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar30 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar30 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar30;
      }
      local_f4 = (uVar27 + uVar26) - 1;
    }
    else {
      local_f4 = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar20,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar30 = (uint)bVar19;
      uVar26 = uVar30 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar30 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar30 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar30 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar30;
      }
      local_120 = (uVar27 + uVar26) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar37 < 2) {
        uVar37 = 1;
      }
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
LAB_007dc67c:
          uVar27 = 0;
          lVar34 = *(long *)param_3;
          uVar30 = uVar24 * (uVar22 * (uVar21 << (ulong)(local_11c & 0x1f)) +
                            (uVar26 << (ulong)(local_d8 & 0x1f)));
          do {
            uVar29 = 0;
            uVar36 = uVar30;
            do {
              uVar35 = (ulong)(uVar36 >> 3) & 0xffff;
              lVar38 = *(long *)(lVar34 + (ulong)(uVar36 >> 0x13) * 8);
              if ((uint)uVar35 < 0xfffd) {
                uVar39 = *(uint *)(lVar38 + uVar35);
              }
              else {
                uVar39 = (uVar36 >> 3) + 1;
                uVar1 = (uVar36 >> 3) + 2;
                uVar39 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar34 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar34 + (ulong)(uVar39 >> 0x10) * 8) +
                                                  ((ulong)uVar39 & 0xffff)),
                                                 *(undefined *)(lVar38 + uVar35)));
              }
              uVar39 = uVar39 >> (ulong)(uVar36 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
              piVar33 = (int *)(param_6 + 4);
              if ((iVar31 == 2) || ((iVar31 == 0) != ((uVar39 & uVar15) != uVar3))) {
                uVar39 = uVar39 >> (ulong)(uVar2 & 0x1f) & uVar14;
                if (((int)uVar39 < iVar4) || (iVar5 < (int)uVar39)) {
                  if (DVar11 != (DensityMapFilter)0x0) goto LAB_007dc780;
                }
                else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007dc780:
                  if ((uVar6 == 0) || ((uVar39 & uVar6) != 0)) {
                    uVar27 = 0;
                    goto LAB_007dc7ac;
                  }
                }
              }
              uVar29 = uVar29 + 1;
              uVar36 = uVar36 + uVar24;
            } while (uVar29 != uVar23);
            uVar27 = uVar27 + 1;
            uVar30 = uVar30 + uVar22 * uVar24;
          } while (uVar27 != uVar37);
          goto LAB_007dc660;
        }
LAB_007dc5d8:
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar37 = 0;
    if (uVar22 != 0) {
      uVar37 = uVar20 / uVar22;
    }
    uVar18 = 0;
    if (uVar23 != 0) {
      uVar18 = uVar21 / uVar23;
    }
    uVar42 = NEON_cnt((ulong)uVar37,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar23 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar37;
      }
      uVar29 = (uint)bVar19;
      uVar37 = uVar29 << 4 | 8;
      uVar30 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar37 = uVar29 << 4;
        uVar30 = uVar23;
      }
      uVar23 = uVar37 | 4;
      uVar29 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar23 = uVar37;
        uVar29 = uVar30;
      }
      uVar37 = uVar23 | 2;
      uVar30 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar37 = uVar23;
        uVar30 = uVar29;
      }
      uVar23 = (uVar30 + uVar37) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar37 = 0;
    if (uVar26 != 0) {
      uVar37 = uVar20 / uVar26;
    }
    uVar42 = NEON_cnt((ulong)uVar18,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar20 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar18;
      }
      uVar30 = (uint)bVar19;
      uVar26 = uVar30 << 4 | 8;
      uVar18 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar30 << 4;
        uVar18 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar30 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar20 = uVar26;
        uVar30 = uVar18;
      }
      uVar26 = uVar20 | 2;
      uVar18 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar26 = uVar20;
        uVar18 = uVar30;
      }
      local_9c = (uVar18 + uVar26) - 1;
    }
    else {
      local_9c = 0;
    }
    uVar20 = 0;
    if (uVar27 != 0) {
      uVar20 = uVar21 / uVar27;
    }
    uVar42 = NEON_cnt((ulong)uVar37,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar21 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar37;
      }
      uVar37 = (uint)bVar19;
      uVar26 = uVar37 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar37 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar37 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar37 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar37;
      }
      local_98 = (uVar27 + uVar26) - 1;
    }
    else {
      local_98 = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar20,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar27 = (uint)bVar19;
      uVar20 = uVar27 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar20 = uVar27 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar20 | 4;
      uVar27 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar20;
        uVar27 = uVar26;
      }
      uVar20 = uVar21 | 2;
      uVar26 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar20 = uVar21;
        uVar26 = uVar27;
      }
      local_a0 = (uVar26 + uVar20) - 1;
    }
    else {
      local_a0 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      piVar33 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar21 = *(uint *)(param_5 + 0x58);
        if (uVar21 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar38 = *(long *)param_3;
            uVar26 = ((uVar21 >> (ulong)(uVar23 & 0x1f)) +
                     (uVar20 >> (ulong)(local_9c & 0x1f)) * uVar22) * uVar24;
            uVar35 = (ulong)(uVar26 >> 3) & 0xffff;
            lVar34 = *(long *)(lVar38 + (ulong)(uVar26 >> 0x13) * 8);
            if ((uint)uVar35 < 0xfffd) {
              uVar27 = *(uint *)(lVar34 + uVar35);
            }
            else {
              uVar27 = (uVar26 >> 3) + 1;
              uVar37 = (uVar26 >> 3) + 2;
              uVar27 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar38 + (ulong)(uVar37 >> 0x10) * 8) +
                                       ((ulong)uVar37 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar38 + (ulong)(uVar27 >> 0x10) * 8) +
                                                ((ulong)uVar27 & 0xffff)),
                                               *(undefined *)(lVar34 + uVar35)));
            }
            uVar26 = uVar27 >> (ulong)(uVar26 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
            piVar32 = piVar33;
            if ((((((iVar31 == 2) || ((iVar31 == 0) != ((uVar26 & uVar15) != uVar3))) &&
                  (DVar11 == (DensityMapFilter)0x0)) &&
                 (((uVar6 == 0 || ((uVar26 >> (ulong)(uVar2 & 0x1f) & uVar14 & uVar6) != 0)) &&
                  ((uVar26 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar21 >> (ulong)(local_98 & 0x1f),
                                        uVar20 >> (ulong)(local_a0 & 0x1f)), iVar9 == 2 ||
                   ((iVar9 == 0) != ((uVar26 & uVar17) != uVar8))))))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar28 == 0 || ((uVar26 >> (ulong)(uVar25 & 0x1f) & uVar16 & uVar28) != 0)))) {
              uVar27 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar21,uVar20);
              uVar26 = uVar27 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar26;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar27;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar27)))) {
                if ((int)uVar26 < *(int *)(param_6 + 0x2c)) {
                  GVar13 = param_6[0x34];
joined_r0x007dc3a0:
                  if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007dc36c;
                }
                else {
                  GVar13 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar26) goto joined_r0x007dc3a0;
                  if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007dc36c;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar26) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar26 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar26) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar32 = (int *)(param_6 + 8);
                  goto LAB_007dc360;
                }
              }
            }
            else {
LAB_007dc360:
              *piVar32 = *piVar32 + 1;
            }
LAB_007dc36c:
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(param_5 + 0x5c));
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007dc7ac:
  do {
    uVar30 = 0;
    do {
      uVar29 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar26 << (ulong)(local_f4 & 0x1f)) + uVar30,
                          uVar27 + (uVar21 << (ulong)(local_120 & 0x1f)));
      if ((iVar9 == 2) || ((iVar9 == 0) != ((uVar29 & uVar17) != uVar8))) {
        uVar29 = uVar29 >> (ulong)(uVar25 & 0x1f) & uVar16;
        if (((int)uVar29 < iVar10) || (iVar7 < (int)uVar29)) {
          if (DVar12 != (DensityMapFilter)0x0) goto LAB_007dc844;
        }
        else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007dc844:
          if ((uVar28 == 0) || ((uVar29 & uVar28) != 0)) {
            uVar30 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar26,uVar21);
            uVar27 = uVar30 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar27;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar30;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar30))))
            goto LAB_007dc66c;
            if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
              GVar13 = param_6[0x34];
joined_r0x007dc908:
              if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007dc66c;
            }
            else {
              GVar13 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar27) goto joined_r0x007dc908;
              if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007dc66c;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar27) == 0))
            goto LAB_007dc66c;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar27 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar33 = (int *)(param_6 + 8);
            goto LAB_007dc660;
          }
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar18);
    uVar27 = uVar27 + 1;
  } while (uVar27 != uVar20);
LAB_007dc660:
  *piVar33 = *piVar33 + 1;
LAB_007dc66c:
  uVar26 = uVar26 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar26) goto LAB_007dc5d8;
  goto LAB_007dc67c;
}


