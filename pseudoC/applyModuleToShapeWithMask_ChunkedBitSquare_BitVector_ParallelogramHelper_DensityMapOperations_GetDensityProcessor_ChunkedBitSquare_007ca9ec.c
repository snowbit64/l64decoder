// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007ca9ec
// Size: 2744 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ChunkedBitSquare, BitVector,
   ParallelogramHelper, DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>
   >(IDensityPixelSource*, ChunkedBitSquare*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               ParallelogramHelper *param_4,GetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  DensityMapFilter DVar7;
  GetDensityProcessor GVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  code **ppcVar22;
  Logger *this;
  int *piVar23;
  int *piVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  undefined4 *puVar31;
  long *plVar32;
  uint uVar33;
  undefined2 uVar34;
  undefined8 uVar35;
  uint local_10c;
  uint local_b8;
  
  uVar13 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar14 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar32 = *(long **)param_6;
  uVar15 = (**(code **)(*plVar32 + 0x18))(plVar32);
  uVar16 = (**(code **)(*plVar32 + 0x20))(plVar32);
  uVar17 = (**(code **)(*plVar32 + 0x30))(plVar32);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar4 = *(uint *)(param_6 + 0x10);
  uVar10 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar18 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar21 = *(int *)(param_6 + 8);
  uVar5 = *(uint *)(param_6 + 0xc);
  uVar11 = ~(-1 << (ulong)(uVar18 & 0x1f));
  DVar7 = param_6[0x20];
  uVar18 = *(uint *)(param_6 + 0x24);
  if ((uVar13 < uVar15) || (uVar14 < uVar16)) {
    if ((uVar15 < uVar13) || (uVar16 < uVar14)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar21 != 0
         )) {
                    /* try { // try from 007cb464 to 007cb46b has its CatchHandler @ 007cb4b4 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007cb470 to 007cb473 has its CatchHandler @ 007cb4a4 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar15,(ulong)uVar16,(ulong)uVar13,(ulong)uVar14);
      return false;
    }
    uVar33 = 0;
    if (uVar14 != 0) {
      uVar33 = uVar16 / uVar14;
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = uVar15 / uVar13;
    }
    uVar35 = NEON_cnt((ulong)uVar14,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar14 & 0xffff0000) != 0;
      uVar13 = uVar14 >> 0x10;
      if (!bVar12) {
        uVar13 = uVar14;
      }
      uVar19 = (uint)bVar12;
      uVar16 = uVar19 << 4 | 8;
      uVar26 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar26 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar19 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar13 = uVar16;
        uVar19 = uVar26;
      }
      uVar16 = uVar13 | 2;
      uVar26 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar13;
        uVar26 = uVar19;
      }
      local_b8 = (uVar26 + uVar16) - 1;
    }
    else {
      local_b8 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar33,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar33 & 0xffff0000) != 0;
      uVar13 = uVar33 >> 0x10;
      if (!bVar12) {
        uVar13 = uVar33;
      }
      uVar19 = (uint)bVar12;
      uVar16 = uVar19 << 4 | 8;
      uVar26 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar26 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar19 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar13 = uVar16;
        uVar19 = uVar26;
      }
      uVar16 = uVar13 | 2;
      uVar26 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar13;
        uVar26 = uVar19;
      }
      local_10c = (uVar26 + uVar16) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    if (uVar13 < *(uint *)(param_4 + 0x4c)) {
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      if (uVar33 < 2) {
        uVar33 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar16 = *(uint *)(param_4 + 0x58);
        if (uVar16 < *(uint *)(param_4 + 0x5c)) {
LAB_007cb1ac:
          uVar26 = 0;
          uVar19 = uVar17 * (uVar15 * (uVar13 << (ulong)(local_10c & 0x1f)) +
                            (uVar16 << (ulong)(local_b8 & 0x1f)));
          lVar25 = *(long *)param_3;
LAB_007cb1e8:
          uVar28 = 0;
          uVar3 = uVar19;
LAB_007cb208:
          uVar27 = (ulong)(uVar3 >> 3) & 0xffff;
          lVar29 = *(long *)(lVar25 + (ulong)(uVar3 >> 0x13) * 8);
          if ((uint)uVar27 < 0xfffd) {
            uVar30 = *(uint *)(lVar29 + uVar27);
          }
          else {
            uVar30 = (uVar3 >> 3) + 1;
            uVar2 = (uVar3 >> 3) + 2;
            uVar30 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar25 + (ulong)(uVar2 >> 0x10) * 8) +
                                     ((ulong)uVar2 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar25 + (ulong)(uVar30 >> 0x10) * 8) +
                                              ((ulong)uVar30 & 0xffff)),
                                             *(undefined *)(lVar29 + uVar27)));
          }
          uVar30 = uVar30 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
          if ((((iVar21 != 2) && ((iVar21 == 0) == ((uVar30 & uVar11) != uVar5))) ||
              (DVar7 != (DensityMapFilter)0x0)) ||
             ((uVar18 != 0 && ((uVar30 >> (ulong)(uVar4 & 0x1f) & uVar10 & uVar18) == 0))))
          goto LAB_007cb1f8;
          iVar6 = *(int *)(param_2 + 0x34);
          iVar9 = (uVar13 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
          ppcVar22 = *(code ***)
                      (*(long *)(param_2 + 0x28) + (ulong)((iVar9 + (uVar16 >> 5)) * iVar6) * 8);
          uVar26 = uVar16 & 0x1f | (uVar13 & 0x1f) << 5;
          uVar19 = (**ppcVar22)(ppcVar22,uVar26,0,*(undefined4 *)(param_2 + 0x3c));
          if (1 < *(uint *)(param_2 + 0x34)) {
            uVar27 = 1;
            puVar31 = (undefined4 *)(param_2 + 0x44);
            do {
              ppcVar22 = *(code ***)
                          (*(long *)(param_2 + 0x28) +
                          (ulong)(iVar6 * (iVar9 + (uVar16 >> 5)) + (int)uVar27) * 8);
              iVar20 = (**ppcVar22)(ppcVar22,uVar26,0,*puVar31);
              puVar1 = puVar31 + -1;
              uVar27 = uVar27 + 1;
              puVar31 = puVar31 + 2;
              uVar19 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar19;
            } while (uVar27 < *(uint *)(param_2 + 0x34));
          }
          uVar26 = uVar19 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) & *(uint *)(param_5 + 0x1c);
          *(uint *)(param_5 + 0x40) = uVar26;
          *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar19;
          *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
          if ((*(int *)(param_5 + 0x24) == 2) ||
             ((*(int *)(param_5 + 0x24) == 0) !=
              (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar19)))) {
            if ((int)uVar26 < *(int *)(param_5 + 0x2c)) {
              GVar8 = param_5[0x34];
            }
            else {
              GVar8 = param_5[0x34];
            }
            if ((GVar8 == (GetDensityProcessor)0x0) ||
               ((*(uint *)(param_5 + 0x38) != 0 && ((*(uint *)(param_5 + 0x38) & uVar26) == 0))))
            goto LAB_007cb19c;
            *(uint *)param_5 =
                 (*(int *)(param_5 + 0xc) + uVar26 &
                 ((int)(*(int *)(param_5 + 0xc) + uVar26) >> 0x1f ^ 0xffffffffU)) + *(int *)param_5;
            piVar23 = (int *)(param_5 + 8);
            goto LAB_007cb190;
          }
          goto LAB_007cb19c;
        }
LAB_007cb10c:
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar33 = 0;
    if (uVar15 != 0) {
      uVar33 = uVar13 / uVar15;
    }
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = uVar14 / uVar16;
    }
    uVar35 = NEON_cnt((ulong)uVar33,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar33 & 0xffff0000) != 0;
      uVar14 = uVar33 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar33;
      }
      uVar26 = (uint)bVar12;
      uVar16 = uVar26 << 4 | 8;
      uVar33 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar16 = uVar26 << 4;
        uVar33 = uVar14;
      }
      uVar14 = uVar16 | 4;
      uVar26 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar14 = uVar16;
        uVar26 = uVar33;
      }
      uVar16 = uVar14 | 2;
      uVar33 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar16 = uVar14;
        uVar33 = uVar26;
      }
      uVar14 = (uVar33 + uVar16) - 1;
    }
    else {
      uVar14 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar13,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar12 = (uVar13 & 0xffff0000) != 0;
      uVar16 = uVar13 >> 0x10;
      if (!bVar12) {
        uVar16 = uVar13;
      }
      uVar26 = (uint)bVar12;
      uVar13 = uVar26 << 4 | 8;
      uVar33 = uVar16 >> 8;
      if (uVar16 < 0x100) {
        uVar13 = uVar26 << 4;
        uVar33 = uVar16;
      }
      uVar16 = uVar13 | 4;
      uVar26 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar16 = uVar13;
        uVar26 = uVar33;
      }
      uVar13 = uVar16 | 2;
      uVar33 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar13 = uVar16;
        uVar33 = uVar26;
      }
      uVar13 = (uVar33 + uVar13) - 1;
    }
    else {
      uVar13 = 0;
    }
    uVar16 = *(uint *)(param_4 + 0x48);
    if (uVar16 < *(uint *)(param_4 + 0x4c)) {
      piVar23 = (int *)(param_5 + 4);
      do {
        ParallelogramHelper::startXIteration(param_4,uVar16);
        uVar33 = *(uint *)(param_4 + 0x58);
        if (uVar33 < *(uint *)(param_4 + 0x5c)) {
          do {
            lVar29 = *(long *)param_3;
            uVar26 = ((uVar33 >> (ulong)(uVar14 & 0x1f)) +
                     (uVar16 >> (ulong)(uVar13 & 0x1f)) * uVar15) * uVar17;
            uVar27 = (ulong)(uVar26 >> 3) & 0xffff;
            lVar25 = *(long *)(lVar29 + (ulong)(uVar26 >> 0x13) * 8);
            if ((uint)uVar27 < 0xfffd) {
              uVar19 = *(uint *)(lVar25 + uVar27);
            }
            else {
              uVar19 = (uVar26 >> 3) + 1;
              uVar28 = (uVar26 >> 3) + 2;
              uVar19 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar29 + (ulong)(uVar28 >> 0x10) * 8) +
                                       ((ulong)uVar28 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar29 + (ulong)(uVar19 >> 0x10) * 8) +
                                                ((ulong)uVar19 & 0xffff)),
                                               *(undefined *)(lVar25 + uVar27)));
            }
            uVar26 = uVar19 >> (ulong)(uVar26 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
            piVar24 = piVar23;
            if ((((iVar21 == 2) || ((iVar21 == 0) != ((uVar26 & uVar11) != uVar5))) &&
                (DVar7 == (DensityMapFilter)0x0)) &&
               ((uVar18 == 0 || ((uVar26 >> (ulong)(uVar4 & 0x1f) & uVar10 & uVar18) != 0)))) {
              iVar6 = *(int *)(param_2 + 0x34);
              iVar9 = (uVar16 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar22 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar9 + (uVar33 >> 5)) * iVar6) * 8)
              ;
              uVar26 = uVar33 & 0x1f | (uVar16 & 0x1f) << 5;
              uVar19 = (**ppcVar22)(ppcVar22,uVar26,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar27 = 1;
                puVar31 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar22 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar6 * (iVar9 + (uVar33 >> 5)) + (int)uVar27) * 8);
                  iVar20 = (**ppcVar22)(ppcVar22,uVar26,0,*puVar31);
                  puVar1 = puVar31 + -1;
                  uVar27 = uVar27 + 1;
                  puVar31 = puVar31 + 2;
                  uVar19 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar19;
                } while (uVar27 < *(uint *)(param_2 + 0x34));
              }
              uVar26 = uVar19 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(uint *)(param_5 + 0x40) = uVar26;
              *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar19;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) !=
                  (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar19)))) {
                if ((int)uVar26 < *(int *)(param_5 + 0x2c)) {
                  GVar8 = param_5[0x34];
joined_r0x007cafe4:
                  if (GVar8 == (GetDensityProcessor)0x0) goto LAB_007cadc0;
                }
                else {
                  GVar8 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar26) goto joined_r0x007cafe4;
                  if (GVar8 != (GetDensityProcessor)0x0) goto LAB_007cadc0;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar26) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar26 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar26) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar24 = (int *)(param_5 + 8);
                  goto LAB_007cadb4;
                }
              }
            }
            else {
LAB_007cadb4:
              *piVar24 = *piVar24 + 1;
            }
LAB_007cadc0:
            uVar33 = uVar33 + 1;
          } while (uVar33 < *(uint *)(param_4 + 0x5c));
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
LAB_007cb1f8:
  uVar28 = uVar28 + 1;
  uVar3 = uVar3 + uVar17;
  if (uVar28 == uVar14) goto LAB_007cb1d8;
  goto LAB_007cb208;
LAB_007cb1d8:
  uVar26 = uVar26 + 1;
  uVar19 = uVar19 + uVar15 * uVar17;
  piVar23 = (int *)(param_5 + 4);
  if (uVar26 == uVar33) goto LAB_007cb190;
  goto LAB_007cb1e8;
LAB_007cb190:
  *piVar23 = *piVar23 + 1;
LAB_007cb19c:
  uVar16 = uVar16 + 1;
  if (*(uint *)(param_4 + 0x5c) <= uVar16) goto LAB_007cb10c;
  goto LAB_007cb1ac;
}


