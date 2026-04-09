// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007cb4cc
// Size: 2448 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ProceduralDensityPixelSource * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,
               ProceduralDensityPixelSource *param_3,ParallelogramHelper *param_4,
               GetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  DensityMapFilter DVar5;
  GetDensityProcessor GVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  code **ppcVar21;
  Logger *this;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  long *plVar25;
  undefined4 *puVar26;
  undefined2 uVar27;
  undefined8 uVar28;
  uint local_e4;
  uint local_d4;
  uint local_ac;
  
  uVar11 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar12 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar25 = *(long **)param_6;
  uVar13 = (**(code **)(*plVar25 + 0x18))(plVar25);
  uVar14 = (**(code **)(*plVar25 + 0x20))(plVar25);
  (**(code **)(*plVar25 + 0x30))(plVar25);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar2 = *(uint *)(param_6 + 0x10);
  uVar8 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar15 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar20 = *(int *)(param_6 + 8);
  uVar3 = *(uint *)(param_6 + 0xc);
  DVar5 = param_6[0x20];
  uVar9 = ~(-1 << (ulong)(uVar15 & 0x1f));
  uVar15 = *(uint *)(param_6 + 0x24);
  if ((uVar11 < uVar13) || (uVar12 < uVar14)) {
    if ((uVar13 < uVar11) || (uVar14 < uVar12)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar20 != 0
         )) {
                    /* try { // try from 007cbe14 to 007cbe1f has its CatchHandler @ 007cbe6c */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007cbe24 to 007cbe27 has its CatchHandler @ 007cbe5c */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar13,(ulong)uVar14,(ulong)uVar11,(ulong)uVar12);
      return false;
    }
    uVar16 = 0;
    if (uVar11 != 0) {
      uVar16 = uVar13 / uVar11;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar14 / uVar12;
    }
    uVar28 = NEON_cnt((ulong)uVar16,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar16 & 0xffff0000) != 0;
      uVar12 = uVar16 >> 0x10;
      if (!bVar10) {
        uVar12 = uVar16;
      }
      uVar19 = (uint)bVar10;
      uVar13 = uVar19 << 4 | 8;
      uVar14 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar14 = uVar12;
      }
      uVar12 = uVar13 | 4;
      uVar19 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar12 = uVar13;
        uVar19 = uVar14;
      }
      uVar13 = uVar12 | 2;
      uVar14 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar12;
        uVar14 = uVar19;
      }
      local_ac = (uVar14 + uVar13) - 1;
    }
    else {
      local_ac = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar11,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar11 & 0xffff0000) != 0;
      uVar12 = uVar11 >> 0x10;
      if (!bVar10) {
        uVar12 = uVar11;
      }
      uVar19 = (uint)bVar10;
      uVar13 = uVar19 << 4 | 8;
      uVar14 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar14 = uVar12;
      }
      uVar12 = uVar13 | 4;
      uVar19 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar12 = uVar13;
        uVar19 = uVar14;
      }
      uVar13 = uVar12 | 2;
      uVar14 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar12;
        uVar14 = uVar19;
      }
      local_e4 = (uVar14 + uVar13) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar12 = *(uint *)(param_4 + 0x48);
    if (uVar12 < *(uint *)(param_4 + 0x4c)) {
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar12);
        uVar13 = *(uint *)(param_4 + 0x58);
        if (uVar13 < *(uint *)(param_4 + 0x5c)) {
LAB_007cbbb8:
          uVar14 = 0;
LAB_007cbbe4:
          uVar19 = 0;
LAB_007cbc08:
          uVar18 = (**(code **)(*(long *)param_3 + 0x58))
                             (param_3,(uVar13 << (ulong)(local_ac & 0x1f)) + uVar19,
                              uVar14 + (uVar12 << (ulong)(local_e4 & 0x1f)));
          if ((((iVar20 != 2) && ((iVar20 == 0) == ((uVar18 & uVar9) != uVar3))) ||
              (DVar5 != (DensityMapFilter)0x0)) ||
             ((uVar15 != 0 && ((uVar18 >> (ulong)(uVar2 & 0x1f) & uVar8 & uVar15) == 0))))
          goto LAB_007cbbfc;
          iVar4 = *(int *)(param_2 + 0x34);
          iVar7 = (uVar12 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
          ppcVar21 = *(code ***)
                      (*(long *)(param_2 + 0x28) + (ulong)((iVar7 + (uVar13 >> 5)) * iVar4) * 8);
          uVar14 = uVar13 & 0x1f | (uVar12 & 0x1f) << 5;
          uVar19 = (**ppcVar21)(ppcVar21,uVar14,0,*(undefined4 *)(param_2 + 0x3c));
          if (1 < *(uint *)(param_2 + 0x34)) {
            uVar24 = 1;
            puVar26 = (undefined4 *)(param_2 + 0x44);
            do {
              ppcVar21 = *(code ***)
                          (*(long *)(param_2 + 0x28) +
                          (ulong)(iVar4 * (iVar7 + (uVar13 >> 5)) + (int)uVar24) * 8);
              iVar17 = (**ppcVar21)(ppcVar21,uVar14,0,*puVar26);
              puVar1 = puVar26 + -1;
              uVar24 = uVar24 + 1;
              puVar26 = puVar26 + 2;
              uVar19 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar19;
            } while (uVar24 < *(uint *)(param_2 + 0x34));
          }
          uVar14 = uVar19 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) & *(uint *)(param_5 + 0x1c);
          *(uint *)(param_5 + 0x40) = uVar14;
          *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar19;
          *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
          if ((*(int *)(param_5 + 0x24) == 2) ||
             ((*(int *)(param_5 + 0x24) == 0) !=
              (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar19)))) {
            if ((int)uVar14 < *(int *)(param_5 + 0x2c)) {
              GVar6 = param_5[0x34];
            }
            else {
              GVar6 = param_5[0x34];
            }
            if ((GVar6 == (GetDensityProcessor)0x0) ||
               ((*(uint *)(param_5 + 0x38) != 0 && ((*(uint *)(param_5 + 0x38) & uVar14) == 0))))
            goto LAB_007cbba8;
            *(uint *)param_5 =
                 (*(int *)(param_5 + 0xc) + uVar14 &
                 ((int)(*(int *)(param_5 + 0xc) + uVar14) >> 0x1f ^ 0xffffffffU)) + *(int *)param_5;
            piVar22 = (int *)(param_5 + 8);
            goto LAB_007cbb9c;
          }
          goto LAB_007cbba8;
        }
LAB_007cbb34:
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar16 = 0;
    if (uVar13 != 0) {
      uVar16 = uVar11 / uVar13;
    }
    uVar11 = 0;
    if (uVar14 != 0) {
      uVar11 = uVar12 / uVar14;
    }
    uVar28 = NEON_cnt((ulong)uVar16,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar16 & 0xffff0000) != 0;
      uVar12 = uVar16 >> 0x10;
      if (!bVar10) {
        uVar12 = uVar16;
      }
      uVar16 = (uint)bVar10;
      uVar13 = uVar16 << 4 | 8;
      uVar14 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar13 = uVar16 << 4;
        uVar14 = uVar12;
      }
      uVar12 = uVar13 | 4;
      uVar16 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar12 = uVar13;
        uVar16 = uVar14;
      }
      uVar13 = uVar12 | 2;
      uVar14 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar13 = uVar12;
        uVar14 = uVar16;
      }
      uVar12 = (uVar14 + uVar13) - 1;
    }
    else {
      uVar12 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar11,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar10 = (uVar11 & 0xffff0000) != 0;
      uVar13 = uVar11 >> 0x10;
      if (!bVar10) {
        uVar13 = uVar11;
      }
      uVar16 = (uint)bVar10;
      uVar11 = uVar16 << 4 | 8;
      uVar14 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar11 = uVar16 << 4;
        uVar14 = uVar13;
      }
      uVar13 = uVar11 | 4;
      uVar16 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar13 = uVar11;
        uVar16 = uVar14;
      }
      uVar11 = uVar13 | 2;
      uVar14 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar11 = uVar13;
        uVar14 = uVar16;
      }
      local_d4 = (uVar14 + uVar11) - 1;
    }
    else {
      local_d4 = 0;
    }
    uVar11 = *(uint *)(param_4 + 0x48);
    if (uVar11 < *(uint *)(param_4 + 0x4c)) {
      piVar22 = (int *)(param_5 + 4);
      do {
        ParallelogramHelper::startXIteration(param_4,uVar11);
        uVar13 = *(uint *)(param_4 + 0x58);
        if (uVar13 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar14 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar13 >> (ulong)(uVar12 & 0x1f),
                                uVar11 >> (ulong)(local_d4 & 0x1f));
            piVar23 = piVar22;
            if ((((iVar20 == 2) || ((iVar20 == 0) != ((uVar14 & uVar9) != uVar3))) &&
                (DVar5 == (DensityMapFilter)0x0)) &&
               ((uVar15 == 0 || ((uVar14 >> (ulong)(uVar2 & 0x1f) & uVar8 & uVar15) != 0)))) {
              iVar4 = *(int *)(param_2 + 0x34);
              iVar7 = (uVar11 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar21 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar7 + (uVar13 >> 5)) * iVar4) * 8)
              ;
              uVar14 = uVar13 & 0x1f | (uVar11 & 0x1f) << 5;
              uVar16 = (**ppcVar21)(ppcVar21,uVar14,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar24 = 1;
                puVar26 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar21 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar4 * (iVar7 + (uVar13 >> 5)) + (int)uVar24) * 8);
                  iVar17 = (**ppcVar21)(ppcVar21,uVar14,0,*puVar26);
                  puVar1 = puVar26 + -1;
                  uVar24 = uVar24 + 1;
                  puVar26 = puVar26 + 2;
                  uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
                } while (uVar24 < *(uint *)(param_2 + 0x34));
              }
              uVar14 = uVar16 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(uint *)(param_5 + 0x40) = uVar14;
              *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar16;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) !=
                  (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar16)))) {
                if ((int)uVar14 < *(int *)(param_5 + 0x2c)) {
                  GVar6 = param_5[0x34];
joined_r0x007cba28:
                  if (GVar6 == (GetDensityProcessor)0x0) goto LAB_007cb854;
                }
                else {
                  GVar6 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar14) goto joined_r0x007cba28;
                  if (GVar6 != (GetDensityProcessor)0x0) goto LAB_007cb854;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar14) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar14 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar14) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar23 = (int *)(param_5 + 8);
                  goto LAB_007cb848;
                }
              }
            }
            else {
LAB_007cb848:
              *piVar23 = *piVar23 + 1;
            }
LAB_007cb854:
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(param_4 + 0x5c));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
LAB_007cbbfc:
  uVar19 = uVar19 + 1;
  if (uVar19 == uVar16) goto LAB_007cbbd4;
  goto LAB_007cbc08;
LAB_007cbbd4:
  uVar14 = uVar14 + 1;
  piVar22 = (int *)(param_5 + 4);
  if (uVar14 == uVar11) goto LAB_007cbb9c;
  goto LAB_007cbbe4;
LAB_007cbb9c:
  *piVar22 = *piVar22 + 1;
LAB_007cbba8:
  uVar13 = uVar13 + 1;
  if (*(uint *)(param_4 + 0x5c) <= uVar13) goto LAB_007cbb34;
  goto LAB_007cbbb8;
}


