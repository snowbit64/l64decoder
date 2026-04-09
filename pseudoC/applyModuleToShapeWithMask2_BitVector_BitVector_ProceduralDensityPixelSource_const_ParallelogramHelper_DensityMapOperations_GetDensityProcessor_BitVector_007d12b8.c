// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d12b8
// Size: 3892 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, BitVector,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*, BitVector*,
   BitVector*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  DensityMapFilter DVar12;
  DensityMapFilter DVar13;
  GetDensityProcessor GVar14;
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
  uint uVar31;
  int iVar32;
  int *piVar33;
  int *piVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  long *plVar43;
  undefined2 uVar44;
  undefined8 uVar45;
  uint local_128;
  uint local_124;
  uint local_d0;
  int local_a4;
  uint local_a0;
  
  uVar20 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar21 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar22 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  uVar23 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar24 = (**(code **)(*plVar43 + 0x20))(plVar43);
  uVar25 = (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar32 = *(int *)(param_7 + 8);
  uVar4 = *(uint *)(param_7 + 0xc);
  plVar43 = *(long **)param_8;
  iVar5 = *(int *)(param_7 + 0x18);
  iVar6 = *(int *)(param_7 + 0x1c);
  DVar12 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar16 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar27 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar28 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar26 = *(uint *)(param_8 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar29 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 0x1c);
  uVar9 = *(uint *)(param_8 + 0xc);
  iVar10 = *(int *)(param_8 + 8);
  uVar18 = ~(-1 << (ulong)(uVar29 & 0x1f));
  iVar11 = *(int *)(param_8 + 0x18);
  DVar13 = param_8[0x20];
  uVar29 = *(uint *)(param_8 + 0x24);
  if ((((uVar20 < uVar23) || (uVar21 < uVar24)) || (uVar20 < uVar27)) || (uVar21 < uVar28)) {
    if (((uVar23 < uVar20) || (uVar24 < uVar21)) || ((uVar27 < uVar20 || (uVar28 < uVar21)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar32 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar32 != 0
         )) {
                    /* try { // try from 007d21b4 to 007d21bf has its CatchHandler @ 007d21ec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar23,(ulong)uVar24,(ulong)uVar27,(ulong)uVar28,(ulong)uVar20,
                         (ulong)uVar21);
      return false;
    }
    uVar37 = 0;
    if (uVar20 != 0) {
      uVar37 = uVar23 / uVar20;
    }
    uVar30 = 0;
    if (uVar21 != 0) {
      uVar30 = uVar24 / uVar21;
    }
    uVar45 = NEON_cnt((ulong)uVar37,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar24 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar37;
      }
      uVar40 = (uint)bVar19;
      uVar35 = uVar40 << 4 | 8;
      uVar39 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar35 = uVar40 << 4;
        uVar39 = uVar24;
      }
      uVar24 = uVar35 | 4;
      uVar40 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar24 = uVar35;
        uVar40 = uVar39;
      }
      uVar35 = uVar24 | 2;
      uVar39 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar35 = uVar24;
        uVar39 = uVar40;
      }
      local_d0 = (uVar39 + uVar35) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar30,1);
    uVar24 = 0;
    if (uVar20 != 0) {
      uVar24 = uVar27 / uVar20;
    }
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar30 & 0xffff0000) != 0;
      uVar27 = uVar30 >> 0x10;
      if (!bVar19) {
        uVar27 = uVar30;
      }
      uVar40 = (uint)bVar19;
      uVar35 = uVar40 << 4 | 8;
      uVar39 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar35 = uVar40 << 4;
        uVar39 = uVar27;
      }
      uVar27 = uVar35 | 4;
      uVar40 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar27 = uVar35;
        uVar40 = uVar39;
      }
      uVar35 = uVar27 | 2;
      uVar39 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar35 = uVar27;
        uVar39 = uVar40;
      }
      local_124 = (uVar39 + uVar35) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar27 = 0;
    if (uVar21 != 0) {
      uVar27 = uVar28 / uVar21;
    }
    uVar45 = NEON_cnt((ulong)uVar24,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar24 & 0xffff0000) != 0;
      uVar21 = uVar24 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar24;
      }
      uVar39 = (uint)bVar19;
      uVar28 = uVar39 << 4 | 8;
      uVar35 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar28 = uVar39 << 4;
        uVar35 = uVar21;
      }
      uVar21 = uVar28 | 4;
      uVar39 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar21 = uVar28;
        uVar39 = uVar35;
      }
      uVar28 = uVar21 | 2;
      uVar35 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar28 = uVar21;
        uVar35 = uVar39;
      }
      uVar21 = (uVar35 + uVar28) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar27,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar28 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar28 = uVar27;
      }
      uVar40 = (uint)bVar19;
      uVar35 = uVar40 << 4 | 8;
      uVar39 = uVar28 >> 8;
      if (uVar28 < 0x100) {
        uVar35 = uVar40 << 4;
        uVar39 = uVar28;
      }
      uVar28 = uVar35 | 4;
      uVar40 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar28 = uVar35;
        uVar40 = uVar39;
      }
      uVar35 = uVar28 | 2;
      uVar39 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar35 = uVar28;
        uVar39 = uVar40;
      }
      local_128 = (uVar39 + uVar35) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar28 = *(uint *)(param_5 + 0x48);
    if (uVar28 < *(uint *)(param_5 + 0x4c)) {
      if (uVar37 < 2) {
        uVar37 = 1;
      }
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar28);
        uVar35 = *(uint *)(param_5 + 0x58);
        if (uVar35 < *(uint *)(param_5 + 0x5c)) {
LAB_007d1e3c:
          uVar39 = 0;
          lVar36 = *(long *)param_3;
          uVar40 = uVar25 * (uVar23 * (uVar28 << (ulong)(local_124 & 0x1f)) +
                            (uVar35 << (ulong)(local_d0 & 0x1f)));
          do {
            uVar31 = 0;
            uVar2 = uVar40;
            do {
              uVar38 = (ulong)(uVar2 >> 3) & 0xffff;
              lVar41 = *(long *)(lVar36 + (ulong)(uVar2 >> 0x13) * 8);
              if ((uint)uVar38 < 0xfffd) {
                uVar42 = *(uint *)(lVar41 + uVar38);
              }
              else {
                uVar42 = (uVar2 >> 3) + 1;
                uVar1 = (uVar2 >> 3) + 2;
                uVar42 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar36 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar36 + (ulong)(uVar42 >> 0x10) * 8) +
                                                  ((ulong)uVar42 & 0xffff)),
                                                 *(undefined *)(lVar41 + uVar38)));
              }
              uVar42 = uVar42 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
              piVar34 = (int *)(param_6 + 4);
              if ((iVar32 == 2) || ((iVar32 == 0) != ((uVar42 & uVar16) != uVar4))) {
                uVar42 = uVar42 >> (ulong)(uVar3 & 0x1f) & uVar15;
                if (((int)uVar42 < iVar5) || (iVar6 < (int)uVar42)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007d1f3c;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007d1f3c:
                  if ((uVar7 == 0) || ((uVar42 & uVar7) != 0)) {
                    uVar39 = 0;
                    goto LAB_007d1f68;
                  }
                }
              }
              uVar31 = uVar31 + 1;
              uVar2 = uVar2 + uVar25;
            } while (uVar31 != uVar37);
            uVar39 = uVar39 + 1;
            uVar40 = uVar40 + uVar23 * uVar25;
          } while (uVar39 != uVar30);
          goto LAB_007d1e20;
        }
LAB_007d1d8c:
        uVar28 = uVar28 + 1;
      } while (uVar28 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar37 = 0;
    if (uVar23 != 0) {
      uVar37 = uVar20 / uVar23;
    }
    uVar30 = 0;
    if (uVar24 != 0) {
      uVar30 = uVar21 / uVar24;
    }
    uVar45 = NEON_cnt((ulong)uVar37,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar24 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar37;
      }
      uVar39 = (uint)bVar19;
      uVar37 = uVar39 << 4 | 8;
      uVar35 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar37 = uVar39 << 4;
        uVar35 = uVar24;
      }
      uVar24 = uVar37 | 4;
      uVar39 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar24 = uVar37;
        uVar39 = uVar35;
      }
      uVar37 = uVar24 | 2;
      uVar35 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar37 = uVar24;
        uVar35 = uVar39;
      }
      uVar24 = (uVar35 + uVar37) - 1;
    }
    else {
      uVar24 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar30,1);
    uVar37 = 0;
    if (uVar27 != 0) {
      uVar37 = uVar20 / uVar27;
    }
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar30 & 0xffff0000) != 0;
      uVar27 = uVar30 >> 0x10;
      if (!bVar19) {
        uVar27 = uVar30;
      }
      uVar39 = (uint)bVar19;
      uVar30 = uVar39 << 4 | 8;
      uVar35 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar30 = uVar39 << 4;
        uVar35 = uVar27;
      }
      uVar27 = uVar30 | 4;
      uVar39 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar27 = uVar30;
        uVar39 = uVar35;
      }
      uVar30 = uVar27 | 2;
      uVar35 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar30 = uVar27;
        uVar35 = uVar39;
      }
      local_d0 = (uVar35 + uVar30) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar27 = 0;
    if (uVar28 != 0) {
      uVar27 = uVar21 / uVar28;
    }
    uVar45 = NEON_cnt((ulong)uVar37,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar21 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar37;
      }
      uVar30 = (uint)bVar19;
      uVar28 = uVar30 << 4 | 8;
      uVar37 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar28 = uVar30 << 4;
        uVar37 = uVar21;
      }
      uVar21 = uVar28 | 4;
      uVar30 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar21 = uVar28;
        uVar30 = uVar37;
      }
      uVar28 = uVar21 | 2;
      uVar37 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar28 = uVar21;
        uVar37 = uVar30;
      }
      local_a0 = (uVar37 + uVar28) - 1;
    }
    else {
      local_a0 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar27,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar21 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar27;
      }
      uVar37 = (uint)bVar19;
      uVar27 = uVar37 << 4 | 8;
      uVar28 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar27 = uVar37 << 4;
        uVar28 = uVar21;
      }
      uVar21 = uVar27 | 4;
      uVar37 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar21 = uVar27;
        uVar37 = uVar28;
      }
      uVar27 = uVar21 | 2;
      uVar28 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar27 = uVar21;
        uVar28 = uVar37;
      }
      uVar21 = (uVar28 + uVar27) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar27 = *(uint *)(param_5 + 0x48);
    if (uVar27 < *(uint *)(param_5 + 0x4c)) {
      piVar34 = (int *)(param_6 + 4);
      local_a4 = uVar20 * uVar27;
      do {
        ParallelogramHelper::startXIteration(param_5,uVar27);
        uVar28 = *(uint *)(param_5 + 0x58);
        if (uVar28 < *(uint *)(param_5 + 0x5c)) {
          uVar37 = uVar22 * (uVar28 + local_a4);
          do {
            lVar41 = *(long *)param_3;
            uVar30 = ((uVar28 >> (ulong)(uVar24 & 0x1f)) +
                     (uVar27 >> (ulong)(local_d0 & 0x1f)) * uVar23) * uVar25;
            uVar38 = (ulong)(uVar30 >> 3) & 0xffff;
            lVar36 = *(long *)(lVar41 + (ulong)(uVar30 >> 0x13) * 8);
            if ((uint)uVar38 < 0xfffd) {
              uVar35 = *(uint *)(lVar36 + uVar38);
            }
            else {
              uVar35 = (uVar30 >> 3) + 1;
              uVar39 = (uVar30 >> 3) + 2;
              uVar35 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar41 + (ulong)(uVar39 >> 0x10) * 8) +
                                       ((ulong)uVar39 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar41 + (ulong)(uVar35 >> 0x10) * 8) +
                                                ((ulong)uVar35 & 0xffff)),
                                               *(undefined *)(lVar36 + uVar38)));
            }
            uVar30 = uVar35 >> (ulong)(uVar30 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
            piVar33 = piVar34;
            if ((((((iVar32 == 2) || ((iVar32 == 0) != ((uVar30 & uVar16) != uVar4))) &&
                  (DVar12 == (DensityMapFilter)0x0)) &&
                 (((uVar7 == 0 || ((uVar30 >> (ulong)(uVar3 & 0x1f) & uVar15 & uVar7) != 0)) &&
                  ((uVar30 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar28 >> (ulong)(local_a0 & 0x1f),
                                        uVar27 >> (ulong)(uVar21 & 0x1f)), iVar10 == 2 ||
                   ((iVar10 == 0) != ((uVar30 & uVar18) != uVar9))))))) &&
                (DVar13 == (DensityMapFilter)0x0)) &&
               ((uVar29 == 0 || ((uVar30 >> (ulong)(uVar26 & 0x1f) & uVar17 & uVar29) != 0)))) {
              lVar41 = *(long *)param_2;
              uVar38 = (ulong)(uVar37 >> 3) & 0xffff;
              lVar36 = *(long *)(lVar41 + (ulong)(uVar37 >> 0x13) * 8);
              if ((uint)uVar38 < 0xfffd) {
                uVar30 = *(uint *)(lVar36 + uVar38);
              }
              else {
                uVar30 = (uVar37 >> 3) + 1;
                uVar35 = (uVar37 >> 3) + 2;
                uVar30 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar41 + (ulong)(uVar35 >> 0x10) * 8) +
                                         ((ulong)uVar35 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar41 + (ulong)(uVar30 >> 0x10) * 8) +
                                                  ((ulong)uVar30 & 0xffff)),
                                                 *(undefined *)(lVar36 + uVar38)));
              }
              uVar30 = uVar30 >> (ulong)(uVar37 & 7) & ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
              uVar35 = uVar30 & *(uint *)(param_6 + 0x20);
              uVar30 = uVar30 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              *(uint *)(param_6 + 0x40) = uVar30;
              *(uint *)(param_6 + 0x44) = uVar35;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) != (*(uint *)(param_6 + 0x28) != uVar35))) {
                if ((int)uVar30 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007d1b38:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d1a84;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar30) goto joined_r0x007d1b38;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d1a84;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar30) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar30 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar30) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar33 = (int *)(param_6 + 8);
                  goto LAB_007d1a78;
                }
              }
            }
            else {
LAB_007d1a78:
              *piVar33 = *piVar33 + 1;
            }
LAB_007d1a84:
            uVar28 = uVar28 + 1;
            uVar37 = uVar37 + uVar22;
          } while (uVar28 < *(uint *)(param_5 + 0x5c));
        }
        uVar27 = uVar27 + 1;
        local_a4 = local_a4 + uVar20;
      } while (uVar27 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d1f68:
  do {
    uVar40 = 0;
    do {
      uVar31 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar35 << (ulong)(uVar21 & 0x1f)) + uVar40,
                          uVar39 + (uVar28 << (ulong)(local_128 & 0x1f)));
      if ((iVar10 == 2) || ((iVar10 == 0) != ((uVar31 & uVar18) != uVar9))) {
        uVar31 = uVar31 >> (ulong)(uVar26 & 0x1f) & uVar17;
        if (((int)uVar31 < iVar11) || (iVar8 < (int)uVar31)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007d2000;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007d2000:
          if ((uVar29 == 0) || ((uVar31 & uVar29) != 0)) {
            uVar39 = (uVar35 + uVar28 * uVar20) * uVar22;
            lVar41 = *(long *)param_2;
            uVar38 = (ulong)(uVar39 >> 3) & 0xffff;
            lVar36 = *(long *)(lVar41 + (ulong)(uVar39 >> 0x13) * 8);
            if ((uint)uVar38 < 0xfffd) {
              uVar40 = *(uint *)(lVar36 + uVar38);
            }
            else {
              uVar40 = (uVar39 >> 3) + 1;
              uVar31 = (uVar39 >> 3) + 2;
              uVar40 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar41 + (ulong)(uVar31 >> 0x10) * 8) +
                                       ((ulong)uVar31 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar41 + (ulong)(uVar40 >> 0x10) * 8) +
                                                ((ulong)uVar40 & 0xffff)),
                                               *(undefined *)(lVar36 + uVar38)));
            }
            uVar39 = uVar40 >> (ulong)(uVar39 & 7) & ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
            uVar40 = uVar39 & *(uint *)(param_6 + 0x20);
            uVar39 = uVar39 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            *(uint *)(param_6 + 0x40) = uVar39;
            *(uint *)(param_6 + 0x44) = uVar40;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) == (*(uint *)(param_6 + 0x28) != uVar40)))
            goto LAB_007d1e2c;
            if ((int)uVar39 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007d212c:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d1e2c;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar39) goto joined_r0x007d212c;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d1e2c;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar39) == 0))
            goto LAB_007d1e2c;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar39 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar39) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar34 = (int *)(param_6 + 8);
            goto LAB_007d1e20;
          }
        }
      }
      uVar40 = uVar40 + 1;
    } while (uVar40 != uVar24);
    uVar39 = uVar39 + 1;
  } while (uVar39 != uVar27);
LAB_007d1e20:
  *piVar34 = *piVar34 + 1;
LAB_007d1e2c:
  uVar35 = uVar35 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar35) goto LAB_007d1d8c;
  goto LAB_007d1e3c;
}


