// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d63c0
// Size: 2332 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<BitVector, ProceduralDensityPixelSource
   const, ParallelogramHelper, DensityMapOperations::GetDensityProcessor<BitVector>
   >(IDensityPixelSource*, BitVector*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,ParallelogramHelper *param_4,
               GetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  DensityMapFilter DVar6;
  GetDensityProcessor GVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  Logger *this;
  long lVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  long *plVar26;
  undefined2 uVar27;
  undefined8 uVar28;
  uint local_d4;
  uint local_b4;
  uint local_9c;
  uint local_98;
  uint local_88;
  
  uVar10 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar11 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar12 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar26 = *(long **)param_6;
  uVar13 = (**(code **)(*plVar26 + 0x18))(plVar26);
  uVar14 = (**(code **)(*plVar26 + 0x20))(plVar26);
  (**(code **)(*plVar26 + 0x30))(plVar26);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar1 = *(uint *)(param_6 + 0x10);
  uVar8 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar15 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar18 = *(int *)(param_6 + 0x18);
  iVar3 = *(int *)(param_6 + 0x1c);
  iVar2 = *(int *)(param_6 + 8);
  uVar4 = *(uint *)(param_6 + 0xc);
  uVar5 = *(uint *)(param_6 + 0x24);
  DVar6 = param_6[0x20];
  uVar15 = ~(-1 << (ulong)(uVar15 & 0x1f));
  if ((uVar10 < uVar13) || (uVar11 < uVar14)) {
    if ((uVar13 < uVar10) || (uVar14 < uVar11)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 007d6c9c to 007d6ca3 has its CatchHandler @ 007d6cec */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007d6ca8 to 007d6cab has its CatchHandler @ 007d6cdc */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar13,(ulong)uVar14,(ulong)uVar10,(ulong)uVar11);
      return false;
    }
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = uVar14 / uVar11;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar13 / uVar10;
    }
    uVar28 = NEON_cnt((ulong)uVar11,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar9 = (uVar11 & 0xffff0000) != 0;
      uVar13 = uVar11 >> 0x10;
      if (!bVar9) {
        uVar13 = uVar11;
      }
      uVar25 = (uint)bVar9;
      uVar14 = uVar25 << 4 | 8;
      uVar24 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar14 = uVar25 << 4;
        uVar24 = uVar13;
      }
      uVar13 = uVar14 | 4;
      uVar25 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar13 = uVar14;
        uVar25 = uVar24;
      }
      uVar14 = uVar13 | 2;
      uVar24 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar14 = uVar13;
        uVar24 = uVar25;
      }
      local_9c = (uVar24 + uVar14) - 1;
    }
    else {
      local_9c = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar16,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar9 = (uVar16 & 0xffff0000) != 0;
      uVar13 = uVar16 >> 0x10;
      if (!bVar9) {
        uVar13 = uVar16;
      }
      uVar25 = (uint)bVar9;
      uVar14 = uVar25 << 4 | 8;
      uVar24 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar14 = uVar25 << 4;
        uVar24 = uVar13;
      }
      uVar13 = uVar14 | 4;
      uVar25 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar13 = uVar14;
        uVar25 = uVar24;
      }
      uVar14 = uVar13 | 2;
      uVar24 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar14 = uVar13;
        uVar24 = uVar25;
      }
      local_d4 = (uVar24 + uVar14) - 1;
    }
    else {
      local_d4 = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    if (uVar13 < *(uint *)(param_4 + 0x4c)) {
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar14 = *(uint *)(param_4 + 0x58);
        if (uVar14 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar24 = 0;
            do {
              uVar25 = 0;
              do {
                uVar17 = (**(code **)(*(long *)param_3 + 0x58))
                                   (param_3,(uVar14 << (ulong)(local_9c & 0x1f)) + uVar25,
                                    uVar24 + (uVar13 << (ulong)(local_d4 & 0x1f)));
                if ((iVar2 == 2) || ((iVar2 == 0) != ((uVar17 & uVar15) != uVar4))) {
                  uVar17 = uVar17 >> (ulong)(uVar1 & 0x1f) & uVar8;
                  if (((int)uVar17 < iVar18) || (iVar3 < (int)uVar17)) {
                    if (DVar6 != (DensityMapFilter)0x0) goto LAB_007d6b2c;
                  }
                  else if (DVar6 == (DensityMapFilter)0x0) {
LAB_007d6b2c:
                    if ((uVar5 == 0) || ((uVar17 & uVar5) != 0)) {
                      uVar24 = (uVar14 + uVar13 * uVar10) * uVar12;
                      lVar23 = *(long *)param_2;
                      uVar22 = (ulong)(uVar24 >> 3) & 0xffff;
                      lVar19 = *(long *)(lVar23 + (ulong)(uVar24 >> 0x13) * 8);
                      if ((uint)uVar22 < 0xfffd) {
                        uVar25 = *(uint *)(lVar19 + uVar22);
                      }
                      else {
                        uVar25 = (uVar24 >> 3) + 1;
                        uVar17 = (uVar24 >> 3) + 2;
                        uVar25 = (uint)CONCAT12(*(undefined *)
                                                 (*(long *)(lVar23 + (ulong)(uVar17 >> 0x10) * 8) +
                                                 ((ulong)uVar17 & 0xffff)),
                                                CONCAT11(*(undefined *)
                                                          (*(long *)(lVar23 + (ulong)(uVar25 >> 0x10
                                                                                     ) * 8) +
                                                          ((ulong)uVar25 & 0xffff)),
                                                         *(undefined *)(lVar19 + uVar22)));
                      }
                      uVar24 = uVar25 >> (ulong)(uVar24 & 7) &
                               ~(-1 << (ulong)(uVar12 & 0x1f)) & 0xffffU;
                      uVar25 = uVar24 & *(uint *)(param_5 + 0x20);
                      uVar24 = uVar24 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                               *(uint *)(param_5 + 0x1c);
                      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
                      *(uint *)(param_5 + 0x40) = uVar24;
                      *(uint *)(param_5 + 0x44) = uVar25;
                      if ((*(int *)(param_5 + 0x24) != 2) &&
                         ((*(int *)(param_5 + 0x24) == 0) == (*(uint *)(param_5 + 0x28) != uVar25)))
                      goto LAB_007d6a74;
                      if ((int)uVar24 < *(int *)(param_5 + 0x2c)) {
                        GVar7 = param_5[0x34];
joined_r0x007d6c38:
                        if (GVar7 == (GetDensityProcessor)0x0) goto LAB_007d6a74;
                      }
                      else {
                        GVar7 = param_5[0x34];
                        if (*(int *)(param_5 + 0x30) < (int)uVar24) goto joined_r0x007d6c38;
                        if (GVar7 != (GetDensityProcessor)0x0) goto LAB_007d6a74;
                      }
                      if ((*(uint *)(param_5 + 0x38) != 0) &&
                         ((*(uint *)(param_5 + 0x38) & uVar24) == 0)) goto LAB_007d6a74;
                      *(uint *)param_5 =
                           (*(int *)(param_5 + 0xc) + uVar24 &
                           ((int)(*(int *)(param_5 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                           *(int *)param_5;
                      piVar20 = (int *)(param_5 + 8);
                      goto LAB_007d6a68;
                    }
                  }
                }
                uVar25 = uVar25 + 1;
              } while (uVar25 != uVar11);
              uVar24 = uVar24 + 1;
              piVar20 = (int *)(param_5 + 4);
            } while (uVar24 != uVar16);
LAB_007d6a68:
            *piVar20 = *piVar20 + 1;
LAB_007d6a74:
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(param_4 + 0x5c));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar16 = 0;
    if (uVar13 != 0) {
      uVar16 = uVar10 / uVar13;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar11 / uVar14;
    }
    uVar28 = NEON_cnt((ulong)uVar16,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar9 = (uVar16 & 0xffff0000) != 0;
      uVar11 = uVar16 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar16;
      }
      uVar24 = (uint)bVar9;
      uVar14 = uVar24 << 4 | 8;
      uVar16 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar14 = uVar24 << 4;
        uVar16 = uVar11;
      }
      uVar11 = uVar14 | 4;
      uVar24 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar11 = uVar14;
        uVar24 = uVar16;
      }
      uVar14 = uVar11 | 2;
      uVar16 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar14 = uVar11;
        uVar16 = uVar24;
      }
      local_88 = (uVar16 + uVar14) - 1;
    }
    else {
      local_88 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar13,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar9 = (uVar13 & 0xffff0000) != 0;
      uVar11 = uVar13 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar13;
      }
      uVar16 = (uint)bVar9;
      uVar13 = uVar16 << 4 | 8;
      uVar14 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar13 = uVar16 << 4;
        uVar14 = uVar11;
      }
      uVar11 = uVar13 | 4;
      uVar16 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar11 = uVar13;
        uVar16 = uVar14;
      }
      uVar13 = uVar11 | 2;
      uVar14 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar13 = uVar11;
        uVar14 = uVar16;
      }
      local_b4 = (uVar14 + uVar13) - 1;
    }
    else {
      local_b4 = 0;
    }
    uVar11 = *(uint *)(param_4 + 0x48);
    if (uVar11 < *(uint *)(param_4 + 0x4c)) {
      piVar20 = (int *)(param_5 + 4);
      local_9c = uVar10 * uVar11;
      local_98 = ~(-1 << (ulong)(uVar12 & 0x1f)) & 0xffff;
      do {
        ParallelogramHelper::startXIteration(param_4,uVar11);
        uVar13 = *(uint *)(param_4 + 0x58);
        if (uVar13 < *(uint *)(param_4 + 0x5c)) {
          uVar14 = uVar12 * (uVar13 + local_9c);
          do {
            uVar16 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar13 >> (ulong)(local_88 & 0x1f),
                                uVar11 >> (ulong)(local_b4 & 0x1f));
            piVar21 = piVar20;
            if ((((iVar2 == 2) || ((iVar2 == 0) != ((uVar16 & uVar15) != uVar4))) &&
                (DVar6 == (DensityMapFilter)0x0)) &&
               ((uVar5 == 0 || ((uVar16 >> (ulong)(uVar1 & 0x1f) & uVar8 & uVar5) != 0)))) {
              lVar23 = *(long *)param_2;
              uVar22 = (ulong)(uVar14 >> 3) & 0xffff;
              lVar19 = *(long *)(lVar23 + (ulong)(uVar14 >> 0x13) * 8);
              if ((uint)uVar22 < 0xfffd) {
                uVar16 = *(uint *)(lVar19 + uVar22);
              }
              else {
                uVar16 = (uVar14 >> 3) + 1;
                uVar24 = (uVar14 >> 3) + 2;
                uVar16 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar23 + (ulong)(uVar24 >> 0x10) * 8) +
                                         ((ulong)uVar24 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar23 + (ulong)(uVar16 >> 0x10) * 8) +
                                                  ((ulong)uVar16 & 0xffff)),
                                                 *(undefined *)(lVar19 + uVar22)));
              }
              uVar16 = uVar16 >> (ulong)(uVar14 & 7) & local_98;
              uVar24 = uVar16 & *(uint *)(param_5 + 0x20);
              uVar16 = uVar16 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              *(uint *)(param_5 + 0x40) = uVar16;
              *(uint *)(param_5 + 0x44) = uVar24;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) != (*(uint *)(param_5 + 0x28) != uVar24))) {
                if ((int)uVar16 < *(int *)(param_5 + 0x2c)) {
                  GVar7 = param_5[0x34];
joined_r0x007d68e8:
                  if (GVar7 == (GetDensityProcessor)0x0) goto LAB_007d6774;
                }
                else {
                  GVar7 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar16) goto joined_r0x007d68e8;
                  if (GVar7 != (GetDensityProcessor)0x0) goto LAB_007d6774;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar16) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar16 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar16) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar21 = (int *)(param_5 + 8);
                  goto LAB_007d6768;
                }
              }
            }
            else {
LAB_007d6768:
              *piVar21 = *piVar21 + 1;
            }
LAB_007d6774:
            uVar13 = uVar13 + 1;
            uVar14 = uVar14 + uVar12;
          } while (uVar13 < *(uint *)(param_4 + 0x5c));
        }
        uVar11 = uVar11 + 1;
        local_9c = local_9c + uVar10;
      } while (uVar11 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
}


