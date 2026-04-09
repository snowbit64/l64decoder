// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d4e74
// Size: 2748 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ChunkedBitSquare * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<BitVector, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*,
   BitVector*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,ChunkedBitSquare *param_3,
               ParallelogramHelper *param_4,GetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  DensityMapFilter DVar8;
  GetDensityProcessor GVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  code **ppcVar26;
  Logger *this;
  ulong uVar27;
  int *piVar28;
  uint uVar29;
  int *piVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  long *plVar34;
  undefined4 *puVar35;
  int iVar36;
  ulong uVar37;
  undefined2 uVar38;
  undefined8 uVar39;
  uint local_114;
  uint local_ec;
  uint local_bc;
  uint local_a8;
  
  uVar15 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar16 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar17 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar34 = *(long **)param_6;
  uVar18 = (**(code **)(*plVar34 + 0x18))(plVar34);
  uVar19 = (**(code **)(*plVar34 + 0x20))(plVar34);
  (**(code **)(*plVar34 + 0x30))(plVar34);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar5 = *(uint *)(param_6 + 0x10);
  uVar11 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar20 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar22 = *(int *)(param_6 + 0x1c);
  iVar25 = *(int *)(param_6 + 8);
  uVar6 = *(uint *)(param_6 + 0xc);
  iVar7 = *(int *)(param_6 + 0x18);
  uVar12 = ~(-1 << (ulong)(uVar20 & 0x1f));
  DVar8 = param_6[0x20];
  uVar20 = *(uint *)(param_6 + 0x24);
  if ((uVar15 < uVar18) || (uVar16 < uVar19)) {
    if ((uVar18 < uVar15) || (uVar19 < uVar16)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar25 != 0
         )) {
                    /* try { // try from 007d58f0 to 007d58f7 has its CatchHandler @ 007d5940 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007d58fc to 007d58ff has its CatchHandler @ 007d5930 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar18,(ulong)uVar19,(ulong)uVar15,(ulong)uVar16);
      return false;
    }
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = uVar19 / uVar16;
    }
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = uVar18 / uVar15;
    }
    uVar39 = NEON_cnt((ulong)uVar16,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar14 = (uVar16 & 0xffff0000) != 0;
      uVar18 = uVar16 >> 0x10;
      if (!bVar14) {
        uVar18 = uVar16;
      }
      uVar32 = (uint)bVar14;
      uVar19 = uVar32 << 4 | 8;
      uVar29 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar19 = uVar32 << 4;
        uVar29 = uVar18;
      }
      uVar18 = uVar19 | 4;
      uVar32 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar18 = uVar19;
        uVar32 = uVar29;
      }
      uVar19 = uVar18 | 2;
      uVar29 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar19 = uVar18;
        uVar29 = uVar32;
      }
      local_ec = (uVar29 + uVar19) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar13,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar14 = (uVar13 & 0xffff0000) != 0;
      uVar18 = uVar13 >> 0x10;
      if (!bVar14) {
        uVar18 = uVar13;
      }
      uVar32 = (uint)bVar14;
      uVar19 = uVar32 << 4 | 8;
      uVar29 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar19 = uVar32 << 4;
        uVar29 = uVar18;
      }
      uVar18 = uVar19 | 4;
      uVar32 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar18 = uVar19;
        uVar32 = uVar29;
      }
      uVar19 = uVar18 | 2;
      uVar29 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar19 = uVar18;
        uVar29 = uVar32;
      }
      local_114 = (uVar29 + uVar19) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar18 = *(uint *)(param_4 + 0x48);
    if (uVar18 < *(uint *)(param_4 + 0x4c)) {
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar18);
        uVar19 = *(uint *)(param_4 + 0x58);
        if (uVar19 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar29 = 0;
            uVar32 = uVar19 << (ulong)(local_ec & 0x1f);
            do {
              uVar21 = 0;
              uVar27 = (ulong)*(uint *)(param_3 + 0x34);
              uVar3 = uVar29 + (uVar18 << (ulong)(local_114 & 0x1f));
              uVar2 = uVar32;
              do {
                uVar4 = uVar21 + uVar32;
                iVar10 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar36 = (int)uVar27;
                ppcVar26 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar10 + (uVar4 >> 5)) * iVar36) * 8);
                uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
                uVar23 = (**ppcVar26)(ppcVar26,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar27 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar25 != 2) goto LAB_007d572c;
LAB_007d574c:
                  uVar4 = uVar23 >> (ulong)(uVar5 & 0x1f) & uVar11;
                  if (((int)uVar4 < iVar7) || (iVar22 < (int)uVar4)) {
                    if (DVar8 != (DensityMapFilter)0x0) goto LAB_007d5778;
                  }
                  else if (DVar8 == (DensityMapFilter)0x0) {
LAB_007d5778:
                    if ((uVar20 == 0) || ((uVar4 & uVar20) != 0)) {
                      uVar29 = (uVar19 + uVar18 * uVar15) * uVar17;
                      lVar33 = *(long *)param_2;
                      uVar27 = (ulong)(uVar29 >> 3) & 0xffff;
                      lVar31 = *(long *)(lVar33 + (ulong)(uVar29 >> 0x13) * 8);
                      if ((uint)uVar27 < 0xfffd) {
                        uVar32 = *(uint *)(lVar31 + uVar27);
                      }
                      else {
                        uVar32 = (uVar29 >> 3) + 1;
                        uVar21 = (uVar29 >> 3) + 2;
                        uVar32 = (uint)CONCAT12(*(undefined *)
                                                 (*(long *)(lVar33 + (ulong)(uVar21 >> 0x10) * 8) +
                                                 ((ulong)uVar21 & 0xffff)),
                                                CONCAT11(*(undefined *)
                                                          (*(long *)(lVar33 + (ulong)(uVar32 >> 0x10
                                                                                     ) * 8) +
                                                          ((ulong)uVar32 & 0xffff)),
                                                         *(undefined *)(lVar31 + uVar27)));
                      }
                      uVar29 = uVar32 >> (ulong)(uVar29 & 7) &
                               ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
                      uVar32 = uVar29 & *(uint *)(param_5 + 0x20);
                      uVar29 = uVar29 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                               *(uint *)(param_5 + 0x1c);
                      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
                      *(uint *)(param_5 + 0x40) = uVar29;
                      *(uint *)(param_5 + 0x44) = uVar32;
                      if ((*(int *)(param_5 + 0x24) != 2) &&
                         ((*(int *)(param_5 + 0x24) == 0) == (*(uint *)(param_5 + 0x28) != uVar32)))
                      goto LAB_007d55e0;
                      if ((int)uVar29 < *(int *)(param_5 + 0x2c)) {
                        GVar9 = param_5[0x34];
joined_r0x007d588c:
                        if (GVar9 == (GetDensityProcessor)0x0) goto LAB_007d55e0;
                      }
                      else {
                        GVar9 = param_5[0x34];
                        if (*(int *)(param_5 + 0x30) < (int)uVar29) goto joined_r0x007d588c;
                        if (GVar9 != (GetDensityProcessor)0x0) goto LAB_007d55e0;
                      }
                      if ((*(uint *)(param_5 + 0x38) != 0) &&
                         ((*(uint *)(param_5 + 0x38) & uVar29) == 0)) goto LAB_007d55e0;
                      *(uint *)param_5 =
                           (*(int *)(param_5 + 0xc) + uVar29 &
                           ((int)(*(int *)(param_5 + 0xc) + uVar29) >> 0x1f ^ 0xffffffffU)) +
                           *(int *)param_5;
                      piVar28 = (int *)(param_5 + 8);
                      goto LAB_007d55d4;
                    }
                  }
                }
                else {
                  uVar37 = 1;
                  puVar35 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar26 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar36 * (iVar10 + (uVar2 >> 5)) + (int)uVar37) * 8);
                    iVar24 = (**ppcVar26)(ppcVar26,uVar4,0,*puVar35);
                    puVar1 = puVar35 + -1;
                    uVar37 = uVar37 + 1;
                    uVar27 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar35 = puVar35 + 2;
                    uVar23 = iVar24 << (ulong)(*puVar1 & 0x1f) | uVar23;
                  } while (uVar37 < uVar27);
                  if (iVar25 == 2) goto LAB_007d574c;
LAB_007d572c:
                  if ((iVar25 == 0) != ((uVar23 & uVar12) != uVar6)) goto LAB_007d574c;
                }
                uVar21 = uVar21 + 1;
                uVar2 = uVar2 + 1;
              } while (uVar21 != uVar16);
              uVar29 = uVar29 + 1;
              piVar28 = (int *)(param_5 + 4);
            } while (uVar29 != uVar13);
LAB_007d55d4:
            *piVar28 = *piVar28 + 1;
LAB_007d55e0:
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(param_4 + 0x5c));
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar13 = 0;
    if (uVar18 != 0) {
      uVar13 = uVar15 / uVar18;
    }
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = uVar16 / uVar19;
    }
    uVar39 = NEON_cnt((ulong)uVar13,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar14 = (uVar13 & 0xffff0000) != 0;
      uVar16 = uVar13 >> 0x10;
      if (!bVar14) {
        uVar16 = uVar13;
      }
      uVar29 = (uint)bVar14;
      uVar19 = uVar29 << 4 | 8;
      uVar13 = uVar16 >> 8;
      if (uVar16 < 0x100) {
        uVar19 = uVar29 << 4;
        uVar13 = uVar16;
      }
      uVar16 = uVar19 | 4;
      uVar29 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar16 = uVar19;
        uVar29 = uVar13;
      }
      uVar19 = uVar16 | 2;
      uVar13 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar19 = uVar16;
        uVar13 = uVar29;
      }
      uVar16 = (uVar13 + uVar19) - 1;
    }
    else {
      uVar16 = 0;
    }
    uVar39 = NEON_cnt((ulong)uVar18,1);
    uVar38 = NEON_uaddlv(uVar39,1);
    if ((int)CONCAT62((int6)((ulong)uVar39 >> 0x10),uVar38) == 1) {
      bVar14 = (uVar18 & 0xffff0000) != 0;
      uVar19 = uVar18 >> 0x10;
      if (!bVar14) {
        uVar19 = uVar18;
      }
      uVar29 = (uint)bVar14;
      uVar18 = uVar29 << 4 | 8;
      uVar13 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar18 = uVar29 << 4;
        uVar13 = uVar19;
      }
      uVar19 = uVar18 | 4;
      uVar29 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar19 = uVar18;
        uVar29 = uVar13;
      }
      uVar18 = uVar19 | 2;
      uVar13 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar18 = uVar19;
        uVar13 = uVar29;
      }
      local_bc = (uVar13 + uVar18) - 1;
    }
    else {
      local_bc = 0;
    }
    uVar18 = *(uint *)(param_4 + 0x48);
    if (uVar18 < *(uint *)(param_4 + 0x4c)) {
      piVar28 = (int *)(param_5 + 4);
      local_a8 = ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffff;
      do {
        ParallelogramHelper::startXIteration(param_4,uVar18);
        uVar19 = *(uint *)(param_4 + 0x58);
        if (uVar19 < *(uint *)(param_4 + 0x5c)) {
          uVar13 = uVar18 >> (ulong)(local_bc & 0x1f);
          uVar27 = (ulong)*(uint *)(param_3 + 0x34);
          do {
            uVar29 = uVar19 >> (ulong)(uVar16 & 0x1f);
            uVar32 = (((uVar13 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar29 >> 5)) *
                     (int)uVar27;
            ppcVar26 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar32 * 8);
            uVar29 = uVar29 & 0x1f | (uVar13 & 0x1f) << 5;
            uVar21 = (**ppcVar26)(ppcVar26,uVar29,0,*(undefined4 *)(param_3 + 0x3c));
            uVar27 = (ulong)*(uint *)(param_3 + 0x34);
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar37 = 1;
              puVar35 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar26 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar32 + (int)uVar37) * 8);
                iVar22 = (**ppcVar26)(ppcVar26,uVar29,0,*puVar35);
                puVar1 = puVar35 + -1;
                uVar37 = uVar37 + 1;
                uVar27 = (ulong)*(uint *)(param_3 + 0x34);
                puVar35 = puVar35 + 2;
                uVar21 = iVar22 << (ulong)(*puVar1 & 0x1f) | uVar21;
              } while (uVar37 < uVar27);
            }
            piVar30 = piVar28;
            if ((((iVar25 == 2) || ((iVar25 == 0) != ((uVar21 & uVar12) != uVar6))) &&
                (DVar8 == (DensityMapFilter)0x0)) &&
               ((uVar20 == 0 || ((uVar21 >> (ulong)(uVar5 & 0x1f) & uVar11 & uVar20) != 0)))) {
              uVar29 = (uVar19 + uVar18 * uVar15) * uVar17;
              lVar33 = *(long *)param_2;
              uVar37 = (ulong)(uVar29 >> 3) & 0xffff;
              lVar31 = *(long *)(lVar33 + (ulong)(uVar29 >> 0x13) * 8);
              if ((uint)uVar37 < 0xfffd) {
                uVar32 = *(uint *)(lVar31 + uVar37);
              }
              else {
                uVar32 = (uVar29 >> 3) + 1;
                uVar21 = (uVar29 >> 3) + 2;
                uVar32 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar33 + (ulong)(uVar21 >> 0x10) * 8) +
                                         ((ulong)uVar21 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar33 + (ulong)(uVar32 >> 0x10) * 8) +
                                                  ((ulong)uVar32 & 0xffff)),
                                                 *(undefined *)(lVar31 + uVar37)));
              }
              uVar29 = uVar32 >> (ulong)(uVar29 & 7) & local_a8;
              uVar32 = uVar29 & *(uint *)(param_5 + 0x20);
              uVar29 = uVar29 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              *(uint *)(param_5 + 0x40) = uVar29;
              *(uint *)(param_5 + 0x44) = uVar32;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) != (*(uint *)(param_5 + 0x28) != uVar32))) {
                if ((int)uVar29 < *(int *)(param_5 + 0x2c)) {
                  GVar9 = param_5[0x34];
joined_r0x007d5450:
                  if (GVar9 == (GetDensityProcessor)0x0) goto LAB_007d5228;
                }
                else {
                  GVar9 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar29) goto joined_r0x007d5450;
                  if (GVar9 != (GetDensityProcessor)0x0) goto LAB_007d5228;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar29) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar29 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar29) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar30 = (int *)(param_5 + 8);
                  goto LAB_007d521c;
                }
              }
            }
            else {
LAB_007d521c:
              *piVar30 = *piVar30 + 1;
            }
LAB_007d5228:
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(param_4 + 0x5c));
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
}


