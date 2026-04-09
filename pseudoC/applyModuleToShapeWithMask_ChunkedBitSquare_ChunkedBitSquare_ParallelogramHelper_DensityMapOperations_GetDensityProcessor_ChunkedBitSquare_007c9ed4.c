// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c9ed4
// Size: 2800 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ChunkedBitSquare * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ChunkedBitSquare, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>
   >(IDensityPixelSource*, ChunkedBitSquare*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ChunkedBitSquare *param_3,
               ParallelogramHelper *param_4,GetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  DensityMapFilter DVar7;
  GetDensityProcessor GVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  code **ppcVar23;
  Logger *this;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  undefined4 *puVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  long *plVar31;
  undefined2 uVar32;
  undefined8 uVar33;
  uint local_10c;
  uint local_d4;
  uint local_88;
  
  uVar12 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar13 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar31 = *(long **)param_6;
  uVar14 = (**(code **)(*plVar31 + 0x18))(plVar31);
  uVar15 = (**(code **)(*plVar31 + 0x20))(plVar31);
  (**(code **)(*plVar31 + 0x30))(plVar31);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar5 = *(uint *)(param_6 + 0x10);
  uVar9 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar16 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar22 = *(int *)(param_6 + 8);
  uVar6 = *(uint *)(param_6 + 0xc);
  uVar10 = ~(-1 << (ulong)(uVar16 & 0x1f));
  DVar7 = param_6[0x20];
  uVar16 = *(uint *)(param_6 + 0x24);
  if ((uVar12 < uVar14) || (uVar13 < uVar15)) {
    if ((uVar14 < uVar12) || (uVar15 < uVar13)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar22 != 0
         )) {
                    /* try { // try from 007ca984 to 007ca98b has its CatchHandler @ 007ca9d4 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007ca990 to 007ca993 has its CatchHandler @ 007ca9c4 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar14,(ulong)uVar15,(ulong)uVar12,(ulong)uVar13);
      return false;
    }
    uVar19 = 0;
    if (uVar12 != 0) {
      uVar19 = uVar14 / uVar12;
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar15 / uVar13;
    }
    uVar33 = NEON_cnt((ulong)uVar19,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar11 = (uVar19 & 0xffff0000) != 0;
      uVar13 = uVar19 >> 0x10;
      if (!bVar11) {
        uVar13 = uVar19;
      }
      uVar17 = (uint)bVar11;
      uVar14 = uVar17 << 4 | 8;
      uVar15 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar14 = uVar17 << 4;
        uVar15 = uVar13;
      }
      uVar13 = uVar14 | 4;
      uVar17 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar13 = uVar14;
        uVar17 = uVar15;
      }
      uVar14 = uVar13 | 2;
      uVar15 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar14 = uVar13;
        uVar15 = uVar17;
      }
      local_d4 = (uVar15 + uVar14) - 1;
    }
    else {
      local_d4 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar12,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar11 = (uVar12 & 0xffff0000) != 0;
      uVar13 = uVar12 >> 0x10;
      if (!bVar11) {
        uVar13 = uVar12;
      }
      uVar17 = (uint)bVar11;
      uVar14 = uVar17 << 4 | 8;
      uVar15 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar14 = uVar17 << 4;
        uVar15 = uVar13;
      }
      uVar13 = uVar14 | 4;
      uVar17 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar13 = uVar14;
        uVar17 = uVar15;
      }
      uVar14 = uVar13 | 2;
      uVar15 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar14 = uVar13;
        uVar15 = uVar17;
      }
      local_10c = (uVar15 + uVar14) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    if (uVar13 < *(uint *)(param_4 + 0x4c)) {
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar14 = *(uint *)(param_4 + 0x58);
        if (uVar14 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar15 = 0;
            uVar17 = uVar14 << (ulong)(local_d4 & 0x1f);
            do {
              uVar26 = 0;
              uVar28 = (ulong)*(uint *)(param_3 + 0x34);
              uVar3 = uVar15 + (uVar13 << (ulong)(local_10c & 0x1f));
              uVar2 = uVar17;
              do {
                uVar4 = uVar26 + uVar17;
                iVar18 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar30 = (int)uVar28;
                ppcVar23 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar18 + (uVar4 >> 5)) * iVar30) * 8);
                uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
                uVar21 = (**ppcVar23)(ppcVar23,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar28 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar22 != 2) goto LAB_007ca78c;
LAB_007ca7ac:
                  if ((DVar7 != (DensityMapFilter)0x0) ||
                     ((uVar16 != 0 && ((uVar21 >> (ulong)(uVar5 & 0x1f) & uVar9 & uVar16) == 0))))
                  goto LAB_007ca6b4;
                  iVar18 = *(int *)(param_2 + 0x34);
                  iVar30 = (uVar13 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
                  ppcVar23 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)((iVar30 + (uVar14 >> 5)) * iVar18) * 8);
                  uVar15 = uVar14 & 0x1f | (uVar13 & 0x1f) << 5;
                  uVar17 = (**ppcVar23)(ppcVar23,uVar15,0,*(undefined4 *)(param_2 + 0x3c));
                  if (1 < *(uint *)(param_2 + 0x34)) {
                    uVar28 = 1;
                    puVar27 = (undefined4 *)(param_2 + 0x44);
                    do {
                      ppcVar23 = *(code ***)
                                  (*(long *)(param_2 + 0x28) +
                                  (ulong)(iVar18 * (iVar30 + (uVar14 >> 5)) + (int)uVar28) * 8);
                      iVar20 = (**ppcVar23)(ppcVar23,uVar15,0,*puVar27);
                      puVar1 = puVar27 + -1;
                      uVar28 = uVar28 + 1;
                      puVar27 = puVar27 + 2;
                      uVar17 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar17;
                    } while (uVar28 < *(uint *)(param_2 + 0x34));
                  }
                  uVar15 = uVar17 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                           *(uint *)(param_5 + 0x1c);
                  *(uint *)(param_5 + 0x40) = uVar15;
                  *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar17;
                  *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
                  if ((*(int *)(param_5 + 0x24) == 2) ||
                     ((*(int *)(param_5 + 0x24) == 0) !=
                      (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar17)))) {
                    if ((int)uVar15 < *(int *)(param_5 + 0x2c)) {
                      GVar8 = param_5[0x34];
                    }
                    else {
                      GVar8 = param_5[0x34];
                    }
                    if ((GVar8 == (GetDensityProcessor)0x0) ||
                       ((*(uint *)(param_5 + 0x38) != 0 &&
                        ((*(uint *)(param_5 + 0x38) & uVar15) == 0)))) goto LAB_007ca640;
                    *(uint *)param_5 =
                         (*(int *)(param_5 + 0xc) + uVar15 &
                         ((int)(*(int *)(param_5 + 0xc) + uVar15) >> 0x1f ^ 0xffffffffU)) +
                         *(int *)param_5;
                    piVar24 = (int *)(param_5 + 8);
                    goto LAB_007ca634;
                  }
                  goto LAB_007ca640;
                }
                uVar29 = 1;
                puVar27 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar23 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar30 * (iVar18 + (uVar2 >> 5)) + (int)uVar29) * 8);
                  iVar20 = (**ppcVar23)(ppcVar23,uVar4,0,*puVar27);
                  puVar1 = puVar27 + -1;
                  uVar29 = uVar29 + 1;
                  uVar28 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar27 = puVar27 + 2;
                  uVar21 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar21;
                } while (uVar29 < uVar28);
                if (iVar22 == 2) goto LAB_007ca7ac;
LAB_007ca78c:
                if ((iVar22 == 0) != ((uVar21 & uVar10) != uVar6)) goto LAB_007ca7ac;
LAB_007ca6b4:
                uVar26 = uVar26 + 1;
                uVar2 = uVar2 + 1;
              } while (uVar26 != uVar19);
              uVar15 = uVar15 + 1;
              piVar24 = (int *)(param_5 + 4);
            } while (uVar15 != uVar12);
LAB_007ca634:
            *piVar24 = *piVar24 + 1;
LAB_007ca640:
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(param_4 + 0x5c));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar19 = 0;
    if (uVar14 != 0) {
      uVar19 = uVar12 / uVar14;
    }
    uVar12 = 0;
    if (uVar15 != 0) {
      uVar12 = uVar13 / uVar15;
    }
    uVar33 = NEON_cnt((ulong)uVar19,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar11 = (uVar19 & 0xffff0000) != 0;
      uVar13 = uVar19 >> 0x10;
      if (!bVar11) {
        uVar13 = uVar19;
      }
      uVar19 = (uint)bVar11;
      uVar14 = uVar19 << 4 | 8;
      uVar15 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar14 = uVar19 << 4;
        uVar15 = uVar13;
      }
      uVar13 = uVar14 | 4;
      uVar19 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar13 = uVar14;
        uVar19 = uVar15;
      }
      uVar14 = uVar13 | 2;
      uVar15 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar14 = uVar13;
        uVar15 = uVar19;
      }
      local_88 = (uVar15 + uVar14) - 1;
    }
    else {
      local_88 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar12,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar11 = (uVar12 & 0xffff0000) != 0;
      uVar13 = uVar12 >> 0x10;
      if (!bVar11) {
        uVar13 = uVar12;
      }
      uVar15 = (uint)bVar11;
      uVar12 = uVar15 << 4 | 8;
      uVar14 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar12 = uVar15 << 4;
        uVar14 = uVar13;
      }
      uVar13 = uVar12 | 4;
      uVar15 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar13 = uVar12;
        uVar15 = uVar14;
      }
      uVar12 = uVar13 | 2;
      uVar14 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar12 = uVar13;
        uVar14 = uVar15;
      }
      local_d4 = (uVar14 + uVar12) - 1;
    }
    else {
      local_d4 = 0;
    }
    uVar12 = *(uint *)(param_4 + 0x48);
    if (uVar12 < *(uint *)(param_4 + 0x4c)) {
      piVar24 = (int *)(param_5 + 4);
      do {
        ParallelogramHelper::startXIteration(param_4,uVar12);
        uVar13 = *(uint *)(param_4 + 0x58);
        if (uVar13 < *(uint *)(param_4 + 0x5c)) {
          uVar14 = uVar12 >> (ulong)(local_d4 & 0x1f);
          do {
            uVar15 = uVar13 >> (ulong)(local_88 & 0x1f);
            uVar19 = (((uVar14 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar15 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar23 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar19 * 8);
            uVar15 = uVar15 & 0x1f | (uVar14 & 0x1f) << 5;
            uVar17 = (**ppcVar23)(ppcVar23,uVar15,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar28 = 1;
              puVar27 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar23 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar19 + (int)uVar28) * 8);
                iVar18 = (**ppcVar23)(ppcVar23,uVar15,0,*puVar27);
                puVar1 = puVar27 + -1;
                uVar28 = uVar28 + 1;
                puVar27 = puVar27 + 2;
                uVar17 = iVar18 << (ulong)(*puVar1 & 0x1f) | uVar17;
              } while (uVar28 < *(uint *)(param_3 + 0x34));
            }
            piVar25 = piVar24;
            if ((((iVar22 == 2) || ((iVar22 == 0) != ((uVar17 & uVar10) != uVar6))) &&
                (DVar7 == (DensityMapFilter)0x0)) &&
               ((uVar16 == 0 || ((uVar17 >> (ulong)(uVar5 & 0x1f) & uVar9 & uVar16) != 0)))) {
              iVar18 = *(int *)(param_2 + 0x34);
              iVar30 = (uVar12 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar23 = *(code ***)
                          (*(long *)(param_2 + 0x28) +
                          (ulong)((iVar30 + (uVar13 >> 5)) * iVar18) * 8);
              uVar15 = uVar13 & 0x1f | (uVar12 & 0x1f) << 5;
              uVar19 = (**ppcVar23)(ppcVar23,uVar15,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar28 = 1;
                puVar27 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar23 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar18 * (iVar30 + (uVar13 >> 5)) + (int)uVar28) * 8);
                  iVar20 = (**ppcVar23)(ppcVar23,uVar15,0,*puVar27);
                  puVar1 = puVar27 + -1;
                  uVar28 = uVar28 + 1;
                  puVar27 = puVar27 + 2;
                  uVar19 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar19;
                } while (uVar28 < *(uint *)(param_2 + 0x34));
              }
              uVar15 = uVar19 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(uint *)(param_5 + 0x40) = uVar15;
              *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar19;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) !=
                  (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar19)))) {
                if ((int)uVar15 < *(int *)(param_5 + 0x2c)) {
                  GVar8 = param_5[0x34];
joined_r0x007ca4b8:
                  if (GVar8 == (GetDensityProcessor)0x0) goto LAB_007ca270;
                }
                else {
                  GVar8 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar15) goto joined_r0x007ca4b8;
                  if (GVar8 != (GetDensityProcessor)0x0) goto LAB_007ca270;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar15) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar15 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar15) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar25 = (int *)(param_5 + 8);
                  goto LAB_007ca264;
                }
              }
            }
            else {
LAB_007ca264:
              *piVar25 = *piVar25 + 1;
            }
LAB_007ca270:
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(param_4 + 0x5c));
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
}


