// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d3198
// Size: 3816 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ProceduralDensityPixelSource
   const, BitVector, ParallelogramHelper, DensityMapOperations::GetDensityProcessor<BitVector>
   >(IDensityPixelSource*, BitVector*, ProceduralDensityPixelSource const*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,BitVector *param_4,ParallelogramHelper *param_5
               ,GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
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
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int *piVar32;
  int *piVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  long *plVar43;
  undefined2 uVar44;
  undefined8 uVar45;
  uint local_128;
  uint local_124;
  uint local_e4;
  uint local_d4;
  uint local_98;
  uint local_8c;
  
  uVar19 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar20 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar21 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  uVar22 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar23 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar43 = *(long **)param_8;
  iVar42 = *(int *)(param_7 + 0x18);
  iVar31 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  DVar11 = param_7[0x20];
  iVar7 = *(int *)(param_7 + 0x1c);
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar24 & 0x1f));
  uVar25 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar26 = (**(code **)(*plVar43 + 0x20))(plVar43);
  uVar27 = (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar4 = *(int *)(param_8 + 8);
  uVar6 = *(uint *)(param_8 + 0xc);
  DVar12 = param_8[0x20];
  iVar9 = *(int *)(param_8 + 0x18);
  iVar10 = *(int *)(param_8 + 0x1c);
  uVar17 = ~(-1 << (ulong)(uVar28 & 0x1f));
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((uVar19 < uVar22) || (uVar20 < uVar23)) || (uVar19 < uVar25)) || (uVar20 < uVar26)) {
    if (((uVar22 < uVar19) || (uVar23 < uVar20)) || ((uVar25 < uVar19 || (uVar26 < uVar20)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar31 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar31 != 0
         )) {
                    /* try { // try from 007d4048 to 007d4053 has its CatchHandler @ 007d4080 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar22,(ulong)uVar23,(ulong)uVar25,(ulong)uVar26,(ulong)uVar19,
                         (ulong)uVar20);
      return false;
    }
    uVar29 = 0;
    if (uVar20 != 0) {
      uVar29 = uVar23 / uVar20;
    }
    uVar23 = 0;
    if (uVar19 != 0) {
      uVar23 = uVar22 / uVar19;
    }
    uVar45 = NEON_cnt((ulong)uVar23,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar23 & 0xffff0000) != 0;
      uVar22 = uVar23 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar23;
      }
      uVar38 = (uint)bVar18;
      uVar34 = uVar38 << 4 | 8;
      uVar37 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar34 = uVar38 << 4;
        uVar37 = uVar22;
      }
      uVar22 = uVar34 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar22 = uVar34;
        uVar38 = uVar37;
      }
      uVar34 = uVar22 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar34 = uVar22;
        uVar37 = uVar38;
      }
      local_d4 = (uVar37 + uVar34) - 1;
    }
    else {
      local_d4 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar29,1);
    uVar22 = 0;
    if (uVar19 != 0) {
      uVar22 = uVar25 / uVar19;
    }
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar29 & 0xffff0000) != 0;
      uVar34 = uVar29 >> 0x10;
      if (!bVar18) {
        uVar34 = uVar29;
      }
      uVar40 = (uint)bVar18;
      uVar37 = uVar40 << 4 | 8;
      uVar38 = uVar34 >> 8;
      if (uVar34 < 0x100) {
        uVar37 = uVar40 << 4;
        uVar38 = uVar34;
      }
      uVar34 = uVar37 | 4;
      uVar40 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar34 = uVar37;
        uVar40 = uVar38;
      }
      uVar37 = uVar34 | 2;
      uVar38 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar37 = uVar34;
        uVar38 = uVar40;
      }
      local_124 = (uVar38 + uVar37) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar34 = 0;
    if (uVar20 != 0) {
      uVar34 = uVar26 / uVar20;
    }
    uVar45 = NEON_cnt((ulong)uVar22,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar22;
      }
      uVar38 = (uint)bVar18;
      uVar26 = uVar38 << 4 | 8;
      uVar37 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar38 << 4;
        uVar37 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar20 = uVar26;
        uVar38 = uVar37;
      }
      uVar26 = uVar20 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar26 = uVar20;
        uVar37 = uVar38;
      }
      uVar20 = (uVar37 + uVar26) - 1;
    }
    else {
      uVar20 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar34,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar34 & 0xffff0000) != 0;
      uVar26 = uVar34 >> 0x10;
      if (!bVar18) {
        uVar26 = uVar34;
      }
      uVar40 = (uint)bVar18;
      uVar37 = uVar40 << 4 | 8;
      uVar38 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar37 = uVar40 << 4;
        uVar38 = uVar26;
      }
      uVar26 = uVar37 | 4;
      uVar40 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar26 = uVar37;
        uVar40 = uVar38;
      }
      uVar37 = uVar26 | 2;
      uVar38 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar37 = uVar26;
        uVar38 = uVar40;
      }
      local_128 = (uVar38 + uVar37) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    if (uVar26 < *(uint *)(param_5 + 0x4c)) {
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar34 < 2) {
        uVar34 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar37 = *(uint *)(param_5 + 0x58);
        if (uVar37 < *(uint *)(param_5 + 0x5c)) {
LAB_007d3cf0:
          uVar38 = 0;
          do {
            uVar40 = 0;
            do {
              uVar30 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar37 << (ulong)(local_d4 & 0x1f)) + uVar40,
                                  uVar38 + (uVar26 << (ulong)(local_124 & 0x1f)));
              piVar33 = (int *)(param_6 + 4);
              if ((iVar31 == 2) || ((iVar31 == 0) != ((uVar30 & uVar15) != uVar5))) {
                uVar30 = uVar30 >> (ulong)(uVar3 & 0x1f) & uVar14;
                if (((int)uVar30 < iVar42) || (iVar7 < (int)uVar30)) {
                  if (DVar11 != (DensityMapFilter)0x0) goto LAB_007d3da4;
                }
                else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007d3da4:
                  if ((uVar8 == 0) || ((uVar30 & uVar8) != 0)) {
                    uVar38 = 0;
                    uVar40 = uVar27 * (uVar25 * (uVar26 << (ulong)(local_128 & 0x1f)) +
                                      (uVar37 << (ulong)(uVar20 & 0x1f)));
                    lVar35 = *(long *)param_4;
                    goto LAB_007d3e14;
                  }
                }
              }
              uVar40 = uVar40 + 1;
            } while (uVar40 != uVar23);
            uVar38 = uVar38 + 1;
          } while (uVar38 != uVar29);
          goto LAB_007d3cd4;
        }
LAB_007d3c58:
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar29 = 0;
    if (uVar22 != 0) {
      uVar29 = uVar19 / uVar22;
    }
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = uVar20 / uVar23;
    }
    uVar45 = NEON_cnt((ulong)uVar29,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar29 & 0xffff0000) != 0;
      uVar23 = uVar29 >> 0x10;
      if (!bVar18) {
        uVar23 = uVar29;
      }
      uVar37 = (uint)bVar18;
      uVar29 = uVar37 << 4 | 8;
      uVar34 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar29 = uVar37 << 4;
        uVar34 = uVar23;
      }
      uVar23 = uVar29 | 4;
      uVar37 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar23 = uVar29;
        uVar37 = uVar34;
      }
      uVar29 = uVar23 | 2;
      uVar34 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar29 = uVar23;
        uVar34 = uVar37;
      }
      local_8c = (uVar34 + uVar29) - 1;
    }
    else {
      local_8c = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar22,1);
    uVar23 = 0;
    if (uVar25 != 0) {
      uVar23 = uVar19 / uVar25;
    }
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar29 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar29 = uVar22;
      }
      uVar37 = (uint)bVar18;
      uVar22 = uVar37 << 4 | 8;
      uVar34 = uVar29 >> 8;
      if (uVar29 < 0x100) {
        uVar22 = uVar37 << 4;
        uVar34 = uVar29;
      }
      uVar29 = uVar22 | 4;
      uVar37 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar29 = uVar22;
        uVar37 = uVar34;
      }
      uVar22 = uVar29 | 2;
      uVar34 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar22 = uVar29;
        uVar34 = uVar37;
      }
      local_e4 = (uVar34 + uVar22) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar22 = 0;
    if (uVar26 != 0) {
      uVar22 = uVar20 / uVar26;
    }
    uVar45 = NEON_cnt((ulong)uVar23,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar23 & 0xffff0000) != 0;
      uVar20 = uVar23 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar23;
      }
      uVar29 = (uint)bVar18;
      uVar23 = uVar29 << 4 | 8;
      uVar26 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar23 = uVar29 << 4;
        uVar26 = uVar20;
      }
      uVar20 = uVar23 | 4;
      uVar29 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar20 = uVar23;
        uVar29 = uVar26;
      }
      uVar23 = uVar20 | 2;
      uVar26 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar23 = uVar20;
        uVar26 = uVar29;
      }
      local_98 = (uVar26 + uVar23) - 1;
    }
    else {
      local_98 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar22,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar22;
      }
      uVar26 = (uint)bVar18;
      uVar22 = uVar26 << 4 | 8;
      uVar23 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar22 = uVar26 << 4;
        uVar23 = uVar20;
      }
      uVar20 = uVar22 | 4;
      uVar26 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar20 = uVar22;
        uVar26 = uVar23;
      }
      uVar22 = uVar20 | 2;
      uVar23 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar22 = uVar20;
        uVar23 = uVar26;
      }
      uVar20 = (uVar23 + uVar22) - 1;
    }
    else {
      uVar20 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      piVar33 = (int *)(param_6 + 4);
      iVar42 = uVar19 * uVar22;
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar23 = *(uint *)(param_5 + 0x58);
        if (uVar23 < *(uint *)(param_5 + 0x5c)) {
          uVar26 = uVar21 * (uVar23 + iVar42);
          do {
            uVar29 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar23 >> (ulong)(local_8c & 0x1f),
                                uVar22 >> (ulong)(local_e4 & 0x1f));
            piVar32 = piVar33;
            if ((((iVar31 == 2) || ((iVar31 == 0) != ((uVar29 & uVar15) != uVar5))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar29 >> (ulong)(uVar3 & 0x1f) & uVar14 & uVar8) != 0)))) {
              lVar39 = *(long *)param_4;
              uVar29 = ((uVar23 >> (ulong)(local_98 & 0x1f)) +
                       (uVar22 >> (ulong)(uVar20 & 0x1f)) * uVar25) * uVar27;
              uVar36 = (ulong)(uVar29 >> 3) & 0xffff;
              lVar35 = *(long *)(lVar39 + (ulong)(uVar29 >> 0x13) * 8);
              if ((uint)uVar36 < 0xfffd) {
                uVar34 = *(uint *)(lVar35 + uVar36);
              }
              else {
                uVar34 = (uVar29 >> 3) + 1;
                uVar37 = (uVar29 >> 3) + 2;
                uVar34 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar39 + (ulong)(uVar37 >> 0x10) * 8) +
                                         ((ulong)uVar37 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar39 + (ulong)(uVar34 >> 0x10) * 8) +
                                                  ((ulong)uVar34 & 0xffff)),
                                                 *(undefined *)(lVar35 + uVar36)));
              }
              uVar29 = uVar34 >> (ulong)(uVar29 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
              if (((iVar4 != 2) && ((iVar4 == 0) == ((uVar29 & uVar17) != uVar6))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar28 != 0 && ((uVar29 >> (ulong)(uVar24 & 0x1f) & uVar16 & uVar28) == 0))))))
              goto LAB_007d3a1c;
              lVar39 = *(long *)param_2;
              uVar36 = (ulong)(uVar26 >> 3) & 0xffff;
              lVar35 = *(long *)(lVar39 + (ulong)(uVar26 >> 0x13) * 8);
              if ((uint)uVar36 < 0xfffd) {
                uVar29 = *(uint *)(lVar35 + uVar36);
              }
              else {
                uVar29 = (uVar26 >> 3) + 1;
                uVar34 = (uVar26 >> 3) + 2;
                uVar29 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar39 + (ulong)(uVar34 >> 0x10) * 8) +
                                         ((ulong)uVar34 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar39 + (ulong)(uVar29 >> 0x10) * 8) +
                                                  ((ulong)uVar29 & 0xffff)),
                                                 *(undefined *)(lVar35 + uVar36)));
              }
              uVar29 = uVar29 >> (ulong)(uVar26 & 7) & ~(-1 << (ulong)(uVar21 & 0x1f)) & 0xffffU;
              uVar34 = uVar29 & *(uint *)(param_6 + 0x20);
              uVar29 = uVar29 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              *(uint *)(param_6 + 0x40) = uVar29;
              *(uint *)(param_6 + 0x44) = uVar34;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) != (*(uint *)(param_6 + 0x28) != uVar34))) {
                if ((int)uVar29 < *(int *)(param_6 + 0x2c)) {
                  GVar13 = param_6[0x34];
joined_r0x007d39e4:
                  if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007d3a28;
                }
                else {
                  GVar13 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar29) goto joined_r0x007d39e4;
                  if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007d3a28;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar29) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar29 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar29) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar32 = (int *)(param_6 + 8);
                  goto LAB_007d3a1c;
                }
              }
            }
            else {
LAB_007d3a1c:
              *piVar32 = *piVar32 + 1;
            }
LAB_007d3a28:
            uVar23 = uVar23 + 1;
            uVar26 = uVar26 + uVar21;
          } while (uVar23 < *(uint *)(param_5 + 0x5c));
        }
        uVar22 = uVar22 + 1;
        iVar42 = iVar42 + uVar19;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d3e14:
  do {
    uVar30 = 0;
    uVar2 = uVar40;
    do {
      uVar36 = (ulong)(uVar2 >> 3) & 0xffff;
      lVar39 = *(long *)(lVar35 + (ulong)(uVar2 >> 0x13) * 8);
      if ((uint)uVar36 < 0xfffd) {
        uVar41 = *(uint *)(lVar39 + uVar36);
      }
      else {
        uVar41 = (uVar2 >> 3) + 1;
        uVar1 = (uVar2 >> 3) + 2;
        uVar41 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar35 + (ulong)(uVar1 >> 0x10) * 8) +
                                 ((ulong)uVar1 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar35 + (ulong)(uVar41 >> 0x10) * 8) +
                                          ((ulong)uVar41 & 0xffff)),*(undefined *)(lVar39 + uVar36))
                               );
      }
      uVar41 = uVar41 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
      if ((iVar4 == 2) || ((iVar4 == 0) != ((uVar41 & uVar17) != uVar6))) {
        uVar41 = uVar41 >> (ulong)(uVar24 & 0x1f) & uVar16;
        if (((int)uVar41 < iVar9) || (iVar10 < (int)uVar41)) {
          if (DVar12 != (DensityMapFilter)0x0) goto LAB_007d3ed8;
        }
        else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007d3ed8:
          if ((uVar28 == 0) || ((uVar41 & uVar28) != 0)) {
            lVar39 = *(long *)param_2;
            uVar38 = (uVar37 + uVar26 * uVar19) * uVar21;
            uVar36 = (ulong)(uVar38 >> 3) & 0xffff;
            lVar35 = *(long *)(lVar39 + (ulong)(uVar38 >> 0x13) * 8);
            if ((uint)uVar36 < 0xfffd) {
              uVar40 = *(uint *)(lVar35 + uVar36);
            }
            else {
              uVar40 = (uVar38 >> 3) + 1;
              uVar30 = (uVar38 >> 3) + 2;
              uVar40 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar39 + (ulong)(uVar30 >> 0x10) * 8) +
                                       ((ulong)uVar30 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar39 + (ulong)(uVar40 >> 0x10) * 8) +
                                                ((ulong)uVar40 & 0xffff)),
                                               *(undefined *)(lVar35 + uVar36)));
            }
            uVar38 = uVar40 >> (ulong)(uVar38 & 7) & ~(-1 << (ulong)(uVar21 & 0x1f)) & 0xffffU;
            uVar40 = uVar38 & *(uint *)(param_6 + 0x20);
            uVar38 = uVar38 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            *(uint *)(param_6 + 0x40) = uVar38;
            *(uint *)(param_6 + 0x44) = uVar40;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) == (*(uint *)(param_6 + 0x28) != uVar40)))
            goto LAB_007d3ce0;
            if ((int)uVar38 < *(int *)(param_6 + 0x2c)) {
              GVar13 = param_6[0x34];
joined_r0x007d3fd8:
              if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007d3ce0;
            }
            else {
              GVar13 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar38) goto joined_r0x007d3fd8;
              if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007d3ce0;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar38) == 0))
            goto LAB_007d3ce0;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar38 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar38) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar33 = (int *)(param_6 + 8);
            goto LAB_007d3cd4;
          }
        }
      }
      uVar30 = uVar30 + 1;
      uVar2 = uVar2 + uVar27;
    } while (uVar30 != uVar22);
    uVar38 = uVar38 + 1;
    uVar40 = uVar40 + uVar25 * uVar27;
  } while (uVar38 != uVar34);
LAB_007d3cd4:
  *piVar33 = *piVar33 + 1;
LAB_007d3ce0:
  uVar37 = uVar37 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar37) goto LAB_007d3c58;
  goto LAB_007d3cf0;
}


