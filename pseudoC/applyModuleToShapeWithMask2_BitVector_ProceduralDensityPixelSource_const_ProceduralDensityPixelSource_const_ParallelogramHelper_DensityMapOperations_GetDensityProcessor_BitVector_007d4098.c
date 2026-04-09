// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d4098
// Size: 3524 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ProceduralDensityPixelSource
   const, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*, BitVector*,
   ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,ProceduralDensityPixelSource *param_4,
               ParallelogramHelper *param_5,GetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  DensityMapFilter DVar10;
  DensityMapFilter DVar11;
  GetDensityProcessor GVar12;
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
  uint uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  int *piVar31;
  int *piVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  long *plVar37;
  undefined2 uVar38;
  undefined8 uVar39;
  uint local_118;
  uint local_114;
  uint local_e0;
  uint local_dc;
  uint local_cc;
  int local_bc;
  uint local_b8;
  uint local_b0;
  
  uVar19 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar20 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar21 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar37 = *(long **)param_7;
  uVar22 = (**(code **)(*plVar37 + 0x18))(plVar37);
  uVar23 = (**(code **)(*plVar37 + 0x20))(plVar37);
  (**(code **)(*plVar37 + 0x30))(plVar37);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar1 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar37 = *(long **)param_8;
  iVar5 = *(int *)(param_7 + 0x1c);
  iVar6 = *(int *)(param_7 + 0x18);
  DVar10 = param_7[0x20];
  iVar29 = *(int *)(param_7 + 8);
  uVar3 = *(uint *)(param_7 + 0xc);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar24 & 0x1f));
  uVar25 = (**(code **)(*plVar37 + 0x18))(plVar37);
  uVar26 = (**(code **)(*plVar37 + 0x20))(plVar37);
  (**(code **)(*plVar37 + 0x30))(plVar37);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 0x1c);
  iVar2 = *(int *)(param_8 + 8);
  uVar4 = *(uint *)(param_8 + 0xc);
  iVar9 = *(int *)(param_8 + 0x18);
  uVar16 = ~(-1 << (ulong)(uVar27 & 0x1f));
  DVar11 = param_8[0x20];
  uVar27 = *(uint *)(param_8 + 0x24);
  if ((((uVar19 < uVar22) || (uVar20 < uVar23)) || (uVar19 < uVar25)) || (uVar20 < uVar26)) {
    if (((uVar22 < uVar19) || (uVar23 < uVar20)) || ((uVar25 < uVar19 || (uVar26 < uVar20)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar29 != 0
         )) {
                    /* try { // try from 007d4e24 to 007d4e2f has its CatchHandler @ 007d4e5c */
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
    uVar17 = 0;
    if (uVar20 != 0) {
      uVar17 = uVar23 / uVar20;
    }
    uVar23 = 0;
    if (uVar19 != 0) {
      uVar23 = uVar22 / uVar19;
    }
    uVar39 = NEON_cnt((ulong)uVar23,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar23 & 0xffff0000) != 0;
      uVar22 = uVar23 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar23;
      }
      uVar28 = (uint)bVar18;
      uVar36 = uVar28 << 4 | 8;
      uVar35 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar36 = uVar28 << 4;
        uVar35 = uVar22;
      }
      uVar22 = uVar36 | 4;
      uVar28 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar22 = uVar36;
        uVar28 = uVar35;
      }
      uVar36 = uVar22 | 2;
      uVar35 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar36 = uVar22;
        uVar35 = uVar28;
      }
      local_cc = (uVar35 + uVar36) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar17,1);
    uVar22 = 0;
    if (uVar19 != 0) {
      uVar22 = uVar25 / uVar19;
    }
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar25 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar25 = uVar17;
      }
      uVar28 = (uint)bVar18;
      uVar36 = uVar28 << 4 | 8;
      uVar35 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar36 = uVar28 << 4;
        uVar35 = uVar25;
      }
      uVar25 = uVar36 | 4;
      uVar28 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar25 = uVar36;
        uVar28 = uVar35;
      }
      uVar36 = uVar25 | 2;
      uVar35 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar36 = uVar25;
        uVar35 = uVar28;
      }
      local_114 = (uVar35 + uVar36) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar25 = 0;
    if (uVar20 != 0) {
      uVar25 = uVar26 / uVar20;
    }
    uVar39 = NEON_cnt((ulong)uVar22,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar22;
      }
      uVar35 = (uint)bVar18;
      uVar26 = uVar35 << 4 | 8;
      uVar36 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar35 << 4;
        uVar36 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar35 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar20 = uVar26;
        uVar35 = uVar36;
      }
      uVar26 = uVar20 | 2;
      uVar36 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar26 = uVar20;
        uVar36 = uVar35;
      }
      local_dc = (uVar36 + uVar26) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar25,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar25 & 0xffff0000) != 0;
      uVar20 = uVar25 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar25;
      }
      uVar35 = (uint)bVar18;
      uVar26 = uVar35 << 4 | 8;
      uVar36 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar35 << 4;
        uVar36 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar35 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar20 = uVar26;
        uVar35 = uVar36;
      }
      uVar26 = uVar20 | 2;
      uVar36 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar26 = uVar20;
        uVar36 = uVar35;
      }
      local_118 = (uVar36 + uVar26) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
LAB_007d4b24:
          uVar36 = 0;
          do {
            uVar35 = 0;
            do {
              uVar28 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar26 << (ulong)(local_cc & 0x1f)) + uVar35,
                                  uVar36 + (uVar20 << (ulong)(local_114 & 0x1f)));
              piVar32 = (int *)(param_6 + 4);
              if ((iVar29 == 2) || ((iVar29 == 0) != ((uVar28 & uVar14) != uVar3))) {
                uVar28 = uVar28 >> (ulong)(uVar1 & 0x1f) & uVar13;
                if (((int)uVar28 < iVar6) || (iVar5 < (int)uVar28)) {
                  if (DVar10 != (DensityMapFilter)0x0) goto LAB_007d4bd8;
                }
                else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007d4bd8:
                  if ((uVar7 == 0) || ((uVar28 & uVar7) != 0)) {
                    uVar36 = 0;
                    goto LAB_007d4c10;
                  }
                }
              }
              uVar35 = uVar35 + 1;
            } while (uVar35 != uVar23);
            uVar36 = uVar36 + 1;
          } while (uVar36 != uVar17);
          goto LAB_007d4b08;
        }
LAB_007d4aa4:
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar17 = 0;
    if (uVar22 != 0) {
      uVar17 = uVar19 / uVar22;
    }
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = uVar20 / uVar23;
    }
    uVar39 = NEON_cnt((ulong)uVar17,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar23 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar23 = uVar17;
      }
      uVar35 = (uint)bVar18;
      uVar17 = uVar35 << 4 | 8;
      uVar36 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar17 = uVar35 << 4;
        uVar36 = uVar23;
      }
      uVar23 = uVar17 | 4;
      uVar35 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar23 = uVar17;
        uVar35 = uVar36;
      }
      uVar17 = uVar23 | 2;
      uVar36 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar17 = uVar23;
        uVar36 = uVar35;
      }
      local_b0 = (uVar36 + uVar17) - 1;
    }
    else {
      local_b0 = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar22,1);
    uVar23 = 0;
    if (uVar25 != 0) {
      uVar23 = uVar19 / uVar25;
    }
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar25 = uVar22;
      }
      uVar36 = (uint)bVar18;
      uVar22 = uVar36 << 4 | 8;
      uVar17 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar22 = uVar36 << 4;
        uVar17 = uVar25;
      }
      uVar25 = uVar22 | 4;
      uVar36 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar25 = uVar22;
        uVar36 = uVar17;
      }
      uVar22 = uVar25 | 2;
      uVar17 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar22 = uVar25;
        uVar17 = uVar36;
      }
      local_dc = (uVar17 + uVar22) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar22 = 0;
    if (uVar26 != 0) {
      uVar22 = uVar20 / uVar26;
    }
    uVar39 = NEON_cnt((ulong)uVar23,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar23 & 0xffff0000) != 0;
      uVar20 = uVar23 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar23;
      }
      uVar26 = (uint)bVar18;
      uVar23 = uVar26 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar23 = uVar26 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar23 | 4;
      uVar26 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar23;
        uVar26 = uVar25;
      }
      uVar23 = uVar20 | 2;
      uVar25 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar23 = uVar20;
        uVar25 = uVar26;
      }
      local_b8 = (uVar25 + uVar23) - 1;
    }
    else {
      local_b8 = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar22,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar22;
      }
      uVar25 = (uint)bVar18;
      uVar22 = uVar25 << 4 | 8;
      uVar23 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar22 = uVar25 << 4;
        uVar23 = uVar20;
      }
      uVar20 = uVar22 | 4;
      uVar25 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar20 = uVar22;
        uVar25 = uVar23;
      }
      uVar22 = uVar20 | 2;
      uVar23 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar22 = uVar20;
        uVar23 = uVar25;
      }
      local_e0 = (uVar23 + uVar22) - 1;
    }
    else {
      local_e0 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      piVar32 = (int *)(param_6 + 4);
      local_bc = uVar19 * uVar20;
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar22 = *(uint *)(param_5 + 0x58);
        if (uVar22 < *(uint *)(param_5 + 0x5c)) {
          uVar23 = uVar21 * (uVar22 + local_bc);
          do {
            uVar25 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar22 >> (ulong)(local_b0 & 0x1f),
                                uVar20 >> (ulong)(local_dc & 0x1f));
            piVar31 = piVar32;
            if ((((((iVar29 == 2) || ((iVar29 == 0) != ((uVar25 & uVar14) != uVar3))) &&
                  (DVar10 == (DensityMapFilter)0x0)) &&
                 (((uVar7 == 0 || ((uVar25 >> (ulong)(uVar1 & 0x1f) & uVar13 & uVar7) != 0)) &&
                  ((uVar25 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar22 >> (ulong)(local_b8 & 0x1f),
                                        uVar20 >> (ulong)(local_e0 & 0x1f)), iVar2 == 2 ||
                   ((iVar2 == 0) != ((uVar25 & uVar16) != uVar4))))))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar27 == 0 || ((uVar25 >> (ulong)(uVar24 & 0x1f) & uVar15 & uVar27) != 0)))) {
              lVar34 = *(long *)param_2;
              uVar33 = (ulong)(uVar23 >> 3) & 0xffff;
              lVar30 = *(long *)(lVar34 + (ulong)(uVar23 >> 0x13) * 8);
              if ((uint)uVar33 < 0xfffd) {
                uVar25 = *(uint *)(lVar30 + uVar33);
              }
              else {
                uVar25 = (uVar23 >> 3) + 1;
                uVar26 = (uVar23 >> 3) + 2;
                uVar25 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar34 + (ulong)(uVar26 >> 0x10) * 8) +
                                         ((ulong)uVar26 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar34 + (ulong)(uVar25 >> 0x10) * 8) +
                                                  ((ulong)uVar25 & 0xffff)),
                                                 *(undefined *)(lVar30 + uVar33)));
              }
              uVar25 = uVar25 >> (ulong)(uVar23 & 7) & ~(-1 << (ulong)(uVar21 & 0x1f)) & 0xffffU;
              uVar26 = uVar25 & *(uint *)(param_6 + 0x20);
              uVar25 = uVar25 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              *(uint *)(param_6 + 0x40) = uVar25;
              *(uint *)(param_6 + 0x44) = uVar26;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) != (*(uint *)(param_6 + 0x28) != uVar26))) {
                if ((int)uVar25 < *(int *)(param_6 + 0x2c)) {
                  GVar12 = param_6[0x34];
joined_r0x007d4874:
                  if (GVar12 == (GetDensityProcessor)0x0) goto LAB_007d47c4;
                }
                else {
                  GVar12 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar25) goto joined_r0x007d4874;
                  if (GVar12 != (GetDensityProcessor)0x0) goto LAB_007d47c4;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar25) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar25 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar25) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar31 = (int *)(param_6 + 8);
                  goto LAB_007d47b8;
                }
              }
            }
            else {
LAB_007d47b8:
              *piVar31 = *piVar31 + 1;
            }
LAB_007d47c4:
            uVar22 = uVar22 + 1;
            uVar23 = uVar23 + uVar21;
          } while (uVar22 < *(uint *)(param_5 + 0x5c));
        }
        uVar20 = uVar20 + 1;
        local_bc = local_bc + uVar19;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d4c10:
  do {
    uVar35 = 0;
    do {
      uVar28 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar26 << (ulong)(local_dc & 0x1f)) + uVar35,
                          uVar36 + (uVar20 << (ulong)(local_118 & 0x1f)));
      if ((iVar2 == 2) || ((iVar2 == 0) != ((uVar28 & uVar16) != uVar4))) {
        uVar28 = uVar28 >> (ulong)(uVar24 & 0x1f) & uVar15;
        if (((int)uVar28 < iVar9) || (iVar8 < (int)uVar28)) {
          if (DVar11 != (DensityMapFilter)0x0) goto LAB_007d4ca0;
        }
        else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007d4ca0:
          if ((uVar27 == 0) || ((uVar28 & uVar27) != 0)) {
            uVar36 = (uVar26 + uVar20 * uVar19) * uVar21;
            lVar34 = *(long *)param_2;
            uVar33 = (ulong)(uVar36 >> 3) & 0xffff;
            lVar30 = *(long *)(lVar34 + (ulong)(uVar36 >> 0x13) * 8);
            if ((uint)uVar33 < 0xfffd) {
              uVar35 = *(uint *)(lVar30 + uVar33);
            }
            else {
              uVar35 = (uVar36 >> 3) + 1;
              uVar28 = (uVar36 >> 3) + 2;
              uVar35 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar34 + (ulong)(uVar28 >> 0x10) * 8) +
                                       ((ulong)uVar28 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar34 + (ulong)(uVar35 >> 0x10) * 8) +
                                                ((ulong)uVar35 & 0xffff)),
                                               *(undefined *)(lVar30 + uVar33)));
            }
            uVar36 = uVar35 >> (ulong)(uVar36 & 7) & ~(-1 << (ulong)(uVar21 & 0x1f)) & 0xffffU;
            uVar35 = uVar36 & *(uint *)(param_6 + 0x20);
            uVar36 = uVar36 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            *(uint *)(param_6 + 0x40) = uVar36;
            *(uint *)(param_6 + 0x44) = uVar35;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) == (*(uint *)(param_6 + 0x28) != uVar35)))
            goto LAB_007d4b14;
            if ((int)uVar36 < *(int *)(param_6 + 0x2c)) {
              GVar12 = param_6[0x34];
joined_r0x007d4db4:
              if (GVar12 == (GetDensityProcessor)0x0) goto LAB_007d4b14;
            }
            else {
              GVar12 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar36) goto joined_r0x007d4db4;
              if (GVar12 != (GetDensityProcessor)0x0) goto LAB_007d4b14;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar36) == 0))
            goto LAB_007d4b14;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar36 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar36) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar32 = (int *)(param_6 + 8);
            goto LAB_007d4b08;
          }
        }
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != uVar22);
    uVar36 = uVar36 + 1;
  } while (uVar36 != uVar25);
LAB_007d4b08:
  *piVar32 = *piVar32 + 1;
LAB_007d4b14:
  uVar26 = uVar26 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar26) goto LAB_007d4aa4;
  goto LAB_007d4b24;
}


