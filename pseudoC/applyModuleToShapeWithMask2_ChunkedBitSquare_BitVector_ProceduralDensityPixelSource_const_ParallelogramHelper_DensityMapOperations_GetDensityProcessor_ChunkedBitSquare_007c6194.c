// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c6194
// Size: 4024 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, BitVector,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, BitVector*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  DensityMapFilter DVar10;
  DensityMapFilter DVar11;
  GetDensityProcessor GVar12;
  int iVar13;
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
  uint uVar31;
  int iVar32;
  int iVar33;
  code **ppcVar34;
  int *piVar35;
  int *piVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  long *plVar43;
  undefined4 *puVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_148;
  uint local_144;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_f4;
  uint local_bc;
  
  uVar20 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar21 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  uVar22 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar23 = (**(code **)(*plVar43 + 0x20))(plVar43);
  uVar24 = (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar33 = *(int *)(param_7 + 8);
  uVar4 = *(uint *)(param_7 + 0xc);
  plVar43 = *(long **)param_8;
  DVar10 = param_7[0x20];
  iVar5 = *(int *)(param_7 + 0x18);
  iVar6 = *(int *)(param_7 + 0x1c);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar26 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar27 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  uVar9 = *(uint *)(param_8 + 0xc);
  uVar17 = ~(-1 << (ulong)(uVar28 & 0x1f));
  DVar11 = param_8[0x20];
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((uVar20 < uVar22) || (uVar21 < uVar23)) || (uVar20 < uVar26)) || (uVar21 < uVar27)) {
    if (((uVar22 < uVar20) || (uVar23 < uVar21)) || ((uVar26 < uVar20 || (uVar27 < uVar21)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar33 != 0
         )) {
                    /* try { // try from 007c7114 to 007c711f has its CatchHandler @ 007c714c */
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
    uVar40 = 0;
    if (uVar21 != 0) {
      uVar40 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar20 != 0) {
      uVar23 = uVar22 / uVar20;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar23 & 0xffff0000) != 0;
      uVar18 = uVar23 >> 0x10;
      if (!bVar19) {
        uVar18 = uVar23;
      }
      uVar39 = (uint)bVar19;
      uVar31 = uVar39 << 4 | 8;
      uVar30 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar31 = uVar39 << 4;
        uVar30 = uVar18;
      }
      uVar18 = uVar31 | 4;
      uVar39 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar18 = uVar31;
        uVar39 = uVar30;
      }
      uVar31 = uVar18 | 2;
      uVar30 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar31 = uVar18;
        uVar30 = uVar39;
      }
      local_f4 = (uVar30 + uVar31) - 1;
    }
    else {
      local_f4 = 0;
    }
    uVar18 = 0;
    if (uVar20 != 0) {
      uVar18 = uVar26 / uVar20;
    }
    uVar46 = NEON_cnt((ulong)uVar40,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar40 & 0xffff0000) != 0;
      uVar20 = uVar40 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar40;
      }
      uVar30 = (uint)bVar19;
      uVar26 = uVar30 << 4 | 8;
      uVar31 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar30 << 4;
        uVar31 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar30 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar20 = uVar26;
        uVar30 = uVar31;
      }
      uVar26 = uVar20 | 2;
      uVar31 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar26 = uVar20;
        uVar31 = uVar30;
      }
      local_144 = (uVar31 + uVar26) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = uVar27 / uVar21;
    }
    uVar46 = NEON_cnt((ulong)uVar18,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar18;
      }
      uVar31 = (uint)bVar19;
      uVar26 = uVar31 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar31 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar31 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar31 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar31;
      }
      local_104 = (uVar27 + uVar26) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar20,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar31 = (uint)bVar19;
      uVar26 = uVar31 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar31 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar31 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar31 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar31;
      }
      local_148 = (uVar27 + uVar26) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar40 < 2) {
        uVar40 = 1;
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
          do {
            uVar27 = 0;
            uVar31 = uVar24 * (uVar22 * (uVar21 << (ulong)(local_144 & 0x1f)) +
                              (uVar26 << (ulong)(local_f4 & 0x1f)));
            lVar37 = *(long *)param_3;
            do {
              uVar30 = 0;
              uVar39 = uVar31;
              do {
                uVar38 = (ulong)(uVar39 >> 3) & 0xffff;
                lVar41 = *(long *)(lVar37 + (ulong)(uVar39 >> 0x13) * 8);
                if ((uint)uVar38 < 0xfffd) {
                  uVar42 = *(uint *)(lVar41 + uVar38);
                }
                else {
                  uVar42 = (uVar39 >> 3) + 1;
                  uVar2 = (uVar39 >> 3) + 2;
                  uVar42 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar37 + (ulong)(uVar2 >> 0x10) * 8) +
                                           ((ulong)uVar2 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar37 + (ulong)(uVar42 >> 0x10) * 8)
                                                    + ((ulong)uVar42 & 0xffff)),
                                                   *(undefined *)(lVar41 + uVar38)));
                }
                uVar42 = uVar42 >> (ulong)(uVar39 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
                piVar36 = (int *)(param_6 + 4);
                if ((iVar33 == 2) || ((iVar33 == 0) != ((uVar42 & uVar15) != uVar4))) {
                  uVar42 = uVar42 >> (ulong)(uVar3 & 0x1f) & uVar14;
                  if (((int)uVar42 < iVar5) || (iVar6 < (int)uVar42)) {
                    if (DVar10 != (DensityMapFilter)0x0) goto LAB_007c6e54;
                  }
                  else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007c6e54:
                    if ((uVar7 == 0) || ((uVar42 & uVar7) != 0)) {
                      uVar27 = 0;
                      goto LAB_007c6e84;
                    }
                  }
                }
                uVar30 = uVar30 + 1;
                uVar39 = uVar39 + uVar24;
              } while (uVar30 != uVar23);
              uVar27 = uVar27 + 1;
              uVar31 = uVar31 + uVar22 * uVar24;
            } while (uVar27 != uVar40);
LAB_007c6d38:
            *piVar36 = *piVar36 + 1;
LAB_007c6d44:
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar40 = 0;
    if (uVar22 != 0) {
      uVar40 = uVar20 / uVar22;
    }
    uVar18 = 0;
    if (uVar23 != 0) {
      uVar18 = uVar21 / uVar23;
    }
    uVar46 = NEON_cnt((ulong)uVar40,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar40 & 0xffff0000) != 0;
      uVar23 = uVar40 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar40;
      }
      uVar30 = (uint)bVar19;
      uVar40 = uVar30 << 4 | 8;
      uVar31 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar40 = uVar30 << 4;
        uVar31 = uVar23;
      }
      uVar23 = uVar40 | 4;
      uVar30 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar23 = uVar40;
        uVar30 = uVar31;
      }
      uVar40 = uVar23 | 2;
      uVar31 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar40 = uVar23;
        uVar31 = uVar30;
      }
      uVar23 = (uVar31 + uVar40) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar40 = 0;
    if (uVar26 != 0) {
      uVar40 = uVar20 / uVar26;
    }
    uVar46 = NEON_cnt((ulong)uVar18,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar20 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar18;
      }
      uVar31 = (uint)bVar19;
      uVar26 = uVar31 << 4 | 8;
      uVar18 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar31 << 4;
        uVar18 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar31 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar20 = uVar26;
        uVar31 = uVar18;
      }
      uVar26 = uVar20 | 2;
      uVar18 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar26 = uVar20;
        uVar18 = uVar31;
      }
      local_108 = (uVar18 + uVar26) - 1;
    }
    else {
      local_108 = 0;
    }
    uVar20 = 0;
    if (uVar27 != 0) {
      uVar20 = uVar21 / uVar27;
    }
    uVar46 = NEON_cnt((ulong)uVar40,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar19 = (uVar40 & 0xffff0000) != 0;
      uVar21 = uVar40 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar40;
      }
      uVar40 = (uint)bVar19;
      uVar26 = uVar40 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar40 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar40 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar40 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar40;
      }
      local_bc = (uVar27 + uVar26) - 1;
    }
    else {
      local_bc = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar20,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
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
      local_10c = (uVar26 + uVar20) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      piVar36 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar21 = *(uint *)(param_5 + 0x58);
        if (uVar21 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar41 = *(long *)param_3;
            uVar26 = ((uVar21 >> (ulong)(uVar23 & 0x1f)) +
                     (uVar20 >> (ulong)(local_108 & 0x1f)) * uVar22) * uVar24;
            uVar38 = (ulong)(uVar26 >> 3) & 0xffff;
            lVar37 = *(long *)(lVar41 + (ulong)(uVar26 >> 0x13) * 8);
            if ((uint)uVar38 < 0xfffd) {
              uVar27 = *(uint *)(lVar37 + uVar38);
            }
            else {
              uVar27 = (uVar26 >> 3) + 1;
              uVar40 = (uVar26 >> 3) + 2;
              uVar27 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar41 + (ulong)(uVar40 >> 0x10) * 8) +
                                       ((ulong)uVar40 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar41 + (ulong)(uVar27 >> 0x10) * 8) +
                                                ((ulong)uVar27 & 0xffff)),
                                               *(undefined *)(lVar37 + uVar38)));
            }
            uVar26 = uVar27 >> (ulong)(uVar26 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
            piVar35 = piVar36;
            if (((((iVar33 == 2) || ((iVar33 == 0) != ((uVar26 & uVar15) != uVar4))) &&
                 (DVar10 == (DensityMapFilter)0x0)) &&
                ((((uVar7 == 0 || ((uVar26 >> (ulong)(uVar3 & 0x1f) & uVar14 & uVar7) != 0)) &&
                  ((uVar26 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar21 >> (ulong)(local_bc & 0x1f),
                                        uVar20 >> (ulong)(local_10c & 0x1f)), iVar8 == 2 ||
                   ((iVar8 == 0) != ((uVar26 & uVar17) != uVar9))))) &&
                 (DVar11 == (DensityMapFilter)0x0)))) &&
               ((uVar28 == 0 || ((uVar26 >> (ulong)(uVar25 & 0x1f) & uVar16 & uVar28) != 0)))) {
              iVar5 = *(int *)(param_2 + 0x34);
              iVar6 = (uVar20 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar34 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar6 + (uVar21 >> 5)) * iVar5) * 8)
              ;
              uVar26 = uVar21 & 0x1f | (uVar20 & 0x1f) << 5;
              uVar27 = (**ppcVar34)(ppcVar34,uVar26,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar38 = 1;
                puVar44 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar5 * (iVar6 + (uVar21 >> 5)) + (int)uVar38) * 8);
                  iVar29 = (**ppcVar34)(ppcVar34,uVar26,0,*puVar44);
                  puVar1 = puVar44 + -1;
                  uVar38 = uVar38 + 1;
                  puVar44 = puVar44 + 2;
                  uVar27 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar27;
                } while (uVar38 < *(uint *)(param_2 + 0x34));
              }
              uVar26 = uVar27 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar26;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar27;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar27)))) {
                if ((int)uVar26 < *(int *)(param_6 + 0x2c)) {
                  GVar12 = param_6[0x34];
joined_r0x007c6a60:
                  if (GVar12 == (GetDensityProcessor)0x0) goto LAB_007c698c;
                }
                else {
                  GVar12 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar26) goto joined_r0x007c6a60;
                  if (GVar12 != (GetDensityProcessor)0x0) goto LAB_007c698c;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar26) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar26 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar26) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar35 = (int *)(param_6 + 8);
                  goto LAB_007c6980;
                }
              }
            }
            else {
LAB_007c6980:
              *piVar35 = *piVar35 + 1;
            }
LAB_007c698c:
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(param_5 + 0x5c));
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c6e84:
  uVar31 = 0;
LAB_007c6ea8:
  uVar30 = (**(code **)(*(long *)param_4 + 0x58))
                     (param_4,(uVar26 << (ulong)(local_104 & 0x1f)) + uVar31,
                      uVar27 + (uVar21 << (ulong)(local_148 & 0x1f)));
  if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar30 & uVar17) != uVar9))) ||
      (DVar11 != (DensityMapFilter)0x0)) ||
     ((uVar28 != 0 && ((uVar30 >> (ulong)(uVar25 & 0x1f) & uVar16 & uVar28) == 0))))
  goto LAB_007c6e9c;
  iVar29 = *(int *)(param_2 + 0x34);
  iVar13 = (uVar21 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar34 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar13 + (uVar26 >> 5)) * iVar29) * 8)
  ;
  uVar27 = uVar26 & 0x1f | (uVar21 & 0x1f) << 5;
  uVar31 = (**ppcVar34)(ppcVar34,uVar27,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar38 = 1;
    puVar44 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar34 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar29 * (iVar13 + (uVar26 >> 5)) + (int)uVar38) * 8);
      iVar32 = (**ppcVar34)(ppcVar34,uVar27,0,*puVar44);
      puVar1 = puVar44 + -1;
      uVar38 = uVar38 + 1;
      puVar44 = puVar44 + 2;
      uVar31 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar31;
    } while (uVar38 < *(uint *)(param_2 + 0x34));
  }
  uVar27 = uVar31 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar27;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar31;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar31)))) {
    if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
      GVar12 = param_6[0x34];
    }
    else {
      GVar12 = param_6[0x34];
    }
    if ((GVar12 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar27) == 0))))
    goto LAB_007c6d44;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar27 &
         ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar36 = (int *)(param_6 + 8);
    goto LAB_007c6d38;
  }
  goto LAB_007c6d44;
LAB_007c6e9c:
  uVar31 = uVar31 + 1;
  if (uVar31 == uVar18) goto LAB_007c6e74;
  goto LAB_007c6ea8;
LAB_007c6e74:
  uVar27 = uVar27 + 1;
  if (uVar27 == uVar20) goto LAB_007c6d38;
  goto LAB_007c6e84;
}


