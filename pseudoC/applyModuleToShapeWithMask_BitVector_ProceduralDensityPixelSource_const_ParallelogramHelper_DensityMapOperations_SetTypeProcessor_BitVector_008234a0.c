// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
// Entry Point: 008234a0
// Size: 2068 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, ParallelogramHelper * param_4, SetTypeProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<BitVector, ProceduralDensityPixelSource
   const, ParallelogramHelper, DensityMapOperations::SetTypeProcessor<BitVector>
   >(IDensityPixelSource*, BitVector*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::SetTypeProcessor<BitVector>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,ParallelogramHelper *param_4,
               SetTypeProcessor *param_5,DensityMapFilter *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  DensityMapFilter DVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  Logger *this;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined2 uVar23;
  undefined8 uVar24;
  uint local_d4;
  uint local_c0;
  uint local_ac;
  uint local_a8;
  uint local_90;
  uint local_8c;
  uint local_88;
  long *local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar10 = (**(code **)(*(long *)param_1 + 0x18))();
  local_90 = uVar10;
  uVar11 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_8c = uVar11;
  local_88 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar22 = *(long **)param_6;
  local_80 = (long *)param_2;
  uVar12 = (**(code **)(*plVar22 + 0x18))(plVar22);
  uVar13 = (**(code **)(*plVar22 + 0x20))(plVar22);
  (**(code **)(*plVar22 + 0x30))(plVar22);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar1 = *(uint *)(param_6 + 0x10);
  uVar7 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar14 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar16 = *(int *)(param_6 + 0x18);
  iVar3 = *(int *)(param_6 + 0x1c);
  iVar2 = *(int *)(param_6 + 8);
  uVar4 = *(uint *)(param_6 + 0xc);
  uVar5 = *(uint *)(param_6 + 0x24);
  DVar6 = param_6[0x20];
  uVar14 = ~(-1 << (ulong)(uVar14 & 0x1f));
  if ((uVar10 < uVar12) || (uVar11 < uVar13)) {
    if ((uVar12 < uVar10) || (uVar13 < uVar11)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar16 != 0
         )) {
                    /* try { // try from 00823c70 to 00823c77 has its CatchHandler @ 00823cc4 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00823c7c to 00823c7f has its CatchHandler @ 00823cb4 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar12,(ulong)uVar13,(ulong)local_90,(ulong)local_8c);
      bVar9 = false;
      goto LAB_00823c2c;
    }
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar18 = uVar12 / uVar10;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar13 / uVar11;
    }
    uVar24 = NEON_cnt((ulong)uVar18,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar9 = (uVar18 & 0xffff0000) != 0;
      uVar11 = uVar18 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar18;
      }
      uVar19 = (uint)bVar9;
      uVar12 = uVar19 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar19 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar19 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar19 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar19;
      }
      local_c0 = (uVar13 + uVar12) - 1;
    }
    else {
      local_c0 = 0;
    }
    uVar24 = NEON_cnt((ulong)uVar10,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar9 = (uVar10 & 0xffff0000) != 0;
      uVar11 = uVar10 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar10;
      }
      uVar19 = (uint)bVar9;
      uVar12 = uVar19 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar19 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar19 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar19 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar19;
      }
      local_d4 = (uVar13 + uVar12) - 1;
    }
    else {
      local_d4 = 0;
    }
    uVar11 = *(uint *)(param_4 + 0x48);
    uVar12 = *(uint *)(param_4 + 0x4c);
    if (uVar11 < uVar12) {
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar11);
        uVar12 = *(uint *)(param_4 + 0x58);
        if (uVar12 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar13 = 0;
            do {
              uVar19 = 0;
              do {
                uVar15 = (**(code **)(*(long *)param_3 + 0x58))
                                   (param_3,(uVar12 << (ulong)(local_c0 & 0x1f)) + uVar19,
                                    uVar13 + (uVar11 << (ulong)(local_d4 & 0x1f)));
                if ((iVar2 == 2) || ((iVar2 == 0) != ((uVar15 & uVar14) != uVar4))) {
                  uVar15 = uVar15 >> (ulong)(uVar1 & 0x1f) & uVar7;
                  if (((int)uVar15 < iVar16) || (iVar3 < (int)uVar15)) {
                    if (DVar6 != (DensityMapFilter)0x0) goto LAB_00823b1c;
                  }
                  else if (DVar6 == (DensityMapFilter)0x0) {
LAB_00823b1c:
                    if ((uVar5 == 0) || ((uVar15 & uVar5) != 0)) {
                      lVar21 = *local_80;
                      uVar13 = (uVar12 + local_90 * uVar11) * local_88;
                      lVar17 = *(long *)(lVar21 + (ulong)(uVar13 >> 0x13) * 8);
                      uVar20 = (ulong)(uVar13 >> 3) & 0xffff;
                      if ((uint)uVar20 < 0xfffd) {
                        uVar19 = *(uint *)(lVar17 + uVar20);
                      }
                      else {
                        uVar19 = (uVar13 >> 3) + 1;
                        uVar15 = (uVar13 >> 3) + 2;
                        uVar19 = (uint)CONCAT12(*(undefined *)
                                                 (*(long *)(lVar21 + (ulong)(uVar15 >> 0x10) * 8) +
                                                 ((ulong)uVar15 & 0xffff)),
                                                CONCAT11(*(undefined *)
                                                          (*(long *)(lVar21 + (ulong)(uVar19 >> 0x10
                                                                                     ) * 8) +
                                                          ((ulong)uVar19 & 0xffff)),
                                                         *(undefined *)(lVar17 + uVar20)));
                      }
                      uVar13 = uVar19 >> (ulong)(uVar13 & 7) &
                               (-1 << (ulong)(local_88 & 0x1f) ^ 0xffffffffU) & 0xffff;
                      local_78 = uVar12;
                      uStack_74 = uVar11;
                      local_70 = uVar13;
                      DensityMapOperations::SetTypeProcessor<BitVector>::process
                                ((SetTypeProcessor<BitVector> *)param_5,(HelperSource *)&local_90);
                      if (uVar13 != local_70) {
                        DensityMapAccessUtil::writeValue
                                  ((BitVector *)local_80,local_88,local_90,local_78,uStack_74,
                                   local_70);
                      }
                      goto LAB_00823a60;
                    }
                  }
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 != uVar18);
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar10);
            *(int *)param_5 = *(int *)param_5 + 1;
LAB_00823a60:
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_4 + 0x5c));
        }
        uVar12 = *(uint *)(param_4 + 0x4c);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
  }
  else {
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = uVar10 / uVar12;
    }
    uVar10 = 0;
    if (uVar13 != 0) {
      uVar10 = uVar11 / uVar13;
    }
    uVar24 = NEON_cnt((ulong)uVar18,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar9 = (uVar18 & 0xffff0000) != 0;
      uVar11 = uVar18 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar18;
      }
      uVar18 = (uint)bVar9;
      uVar12 = uVar18 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar18 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar18 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar18 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar18;
      }
      local_a8 = (uVar13 + uVar12) - 1;
    }
    else {
      local_a8 = 0;
    }
    uVar24 = NEON_cnt((ulong)uVar10,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar9 = (uVar10 & 0xffff0000) != 0;
      uVar11 = uVar10 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar10;
      }
      uVar13 = (uint)bVar9;
      uVar10 = uVar13 << 4 | 8;
      uVar12 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar10 = uVar13 << 4;
        uVar12 = uVar11;
      }
      uVar11 = uVar10 | 4;
      uVar13 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar11 = uVar10;
        uVar13 = uVar12;
      }
      uVar10 = uVar11 | 2;
      uVar12 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar10 = uVar11;
        uVar12 = uVar13;
      }
      local_ac = (uVar12 + uVar10) - 1;
    }
    else {
      local_ac = 0;
    }
    uVar10 = *(uint *)(param_4 + 0x48);
    uVar12 = *(uint *)(param_4 + 0x4c);
    if (uVar10 < uVar12) {
      do {
        ParallelogramHelper::startXIteration(param_4,uVar10);
        uVar11 = *(uint *)(param_4 + 0x58);
        if (uVar11 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar12 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar11 >> (ulong)(local_a8 & 0x1f),
                                uVar10 >> (ulong)(local_ac & 0x1f));
            if ((((iVar2 == 2) || ((iVar2 == 0) != ((uVar12 & uVar14) != uVar4))) &&
                (DVar6 == (DensityMapFilter)0x0)) &&
               ((uVar5 == 0 || ((uVar12 >> (ulong)(uVar1 & 0x1f) & uVar7 & uVar5) != 0)))) {
              lVar21 = *local_80;
              uVar12 = (uVar11 + uVar10 * local_90) * local_88;
              lVar17 = *(long *)(lVar21 + (ulong)(uVar12 >> 0x13) * 8);
              uVar20 = (ulong)(uVar12 >> 3) & 0xffff;
              if ((uint)uVar20 < 0xfffd) {
                uVar13 = *(uint *)(lVar17 + uVar20);
              }
              else {
                uVar13 = (uVar12 >> 3) + 1;
                uVar18 = (uVar12 >> 3) + 2;
                uVar13 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar21 + (ulong)(uVar18 >> 0x10) * 8) +
                                         ((ulong)uVar18 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar21 + (ulong)(uVar13 >> 0x10) * 8) +
                                                  ((ulong)uVar13 & 0xffff)),
                                                 *(undefined *)(lVar17 + uVar20)));
              }
              uVar12 = uVar13 >> (ulong)(uVar12 & 7) &
                       (-1 << (ulong)(local_88 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_78 = uVar11;
              uStack_74 = uVar10;
              local_70 = uVar12;
              DensityMapOperations::SetTypeProcessor<BitVector>::process
                        ((SetTypeProcessor<BitVector> *)param_5,(HelperSource *)&local_90);
              if (uVar12 != local_70) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_80,local_88,local_90,local_78,uStack_74,local_70);
              }
            }
            else {
              *(int *)param_5 = *(int *)param_5 + 1;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(param_4 + 0x5c));
        }
        uVar12 = *(uint *)(param_4 + 0x4c);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
    }
  }
  bVar9 = true;
  if (param_5[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_5 + 0x48),*(uint *)(param_4 + 0x50),*(uint *)(param_4 + 0x48),
               *(uint *)(param_4 + 0x54),uVar12,*(uint *)(param_5 + 0x14),*(uint *)(param_5 + 0x18),
               *(uint *)(param_5 + 0x60),(bool)param_5[0x5d],true,true);
  }
LAB_00823c2c:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


