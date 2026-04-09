// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
// Entry Point: 00822b08
// Size: 2416 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, ParallelogramHelper * param_4, SetTypeProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<BitVector, BitVector, ParallelogramHelper,
   DensityMapOperations::SetTypeProcessor<BitVector> >(IDensityPixelSource*, BitVector*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::SetTypeProcessor<BitVector>&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               ParallelogramHelper *param_4,SetTypeProcessor *param_5,DensityMapFilter *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  DensityMapFilter DVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  Logger *this;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  uint local_e4;
  uint local_cc;
  uint local_c8;
  uint local_90;
  uint local_8c;
  uint local_88;
  long *local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  uVar13 = (**(code **)(*(long *)param_1 + 0x18))();
  local_90 = uVar13;
  uVar14 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_8c = uVar14;
  local_88 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar27 = *(long **)param_6;
  local_80 = (long *)param_2;
  uVar15 = (**(code **)(*plVar27 + 0x18))(plVar27);
  uVar16 = (**(code **)(*plVar27 + 0x20))(plVar27);
  uVar17 = (**(code **)(*plVar27 + 0x30))(plVar27);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar3 = *(uint *)(param_6 + 0x10);
  uVar9 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar18 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar19 = *(int *)(param_6 + 0x18);
  iVar5 = *(int *)(param_6 + 0x1c);
  iVar4 = *(int *)(param_6 + 8);
  uVar6 = *(uint *)(param_6 + 0xc);
  DVar8 = param_6[0x20];
  uVar7 = *(uint *)(param_6 + 0x24);
  uVar18 = ~(-1 << (ulong)(uVar18 & 0x1f));
  if ((uVar13 < uVar15) || (uVar14 < uVar16)) {
    if ((uVar15 < uVar13) || (uVar16 < uVar14)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0
         )) {
                    /* try { // try from 0082342c to 00823437 has its CatchHandler @ 00823488 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 0082343c to 0082343f has its CatchHandler @ 00823478 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar15,(ulong)uVar16,(ulong)local_90,(ulong)local_8c);
      bVar12 = false;
      goto LAB_008233e8;
    }
    uVar10 = 0;
    if (uVar14 != 0) {
      uVar10 = uVar16 / uVar14;
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = uVar15 / uVar13;
    }
    uVar29 = NEON_cnt((ulong)uVar14,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar12 = (uVar14 & 0xffff0000) != 0;
      uVar13 = uVar14 >> 0x10;
      if (!bVar12) {
        uVar13 = uVar14;
      }
      uVar23 = (uint)bVar12;
      uVar16 = uVar23 << 4 | 8;
      uVar21 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar23 << 4;
        uVar21 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar23 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar13 = uVar16;
        uVar23 = uVar21;
      }
      uVar16 = uVar13 | 2;
      uVar21 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar16 = uVar13;
        uVar21 = uVar23;
      }
      local_cc = (uVar21 + uVar16) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar29 = NEON_cnt((ulong)uVar10,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar12 = (uVar10 & 0xffff0000) != 0;
      uVar13 = uVar10 >> 0x10;
      if (!bVar12) {
        uVar13 = uVar10;
      }
      uVar23 = (uint)bVar12;
      uVar16 = uVar23 << 4 | 8;
      uVar21 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar23 << 4;
        uVar21 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar23 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar13 = uVar16;
        uVar23 = uVar21;
      }
      uVar16 = uVar13 | 2;
      uVar21 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar16 = uVar13;
        uVar21 = uVar23;
      }
      local_e4 = (uVar21 + uVar16) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    uVar16 = *(uint *)(param_4 + 0x4c);
    if (uVar13 < uVar16) {
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar16 = *(uint *)(param_4 + 0x58);
        if (uVar16 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar21 = 0;
            uVar23 = uVar17 * (uVar15 * (uVar13 << (ulong)(local_e4 & 0x1f)) +
                              (uVar16 << (ulong)(local_cc & 0x1f)));
            lVar20 = *(long *)param_3;
            do {
              uVar24 = 0;
              uVar2 = uVar23;
              do {
                uVar22 = (ulong)(uVar2 >> 3) & 0xffff;
                lVar25 = *(long *)(lVar20 + (ulong)(uVar2 >> 0x13) * 8);
                if ((uint)uVar22 < 0xfffd) {
                  uVar26 = *(uint *)(lVar25 + uVar22);
                }
                else {
                  uVar26 = (uVar2 >> 3) + 1;
                  uVar1 = (uVar2 >> 3) + 2;
                  uVar26 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar20 + (ulong)(uVar1 >> 0x10) * 8) +
                                           ((ulong)uVar1 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar20 + (ulong)(uVar26 >> 0x10) * 8)
                                                    + ((ulong)uVar26 & 0xffff)),
                                                   *(undefined *)(lVar25 + uVar22)));
                }
                uVar26 = uVar26 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
                if ((iVar4 == 2) || ((iVar4 == 0) != ((uVar26 & uVar18) != uVar6))) {
                  uVar26 = uVar26 >> (ulong)(uVar3 & 0x1f) & uVar9;
                  if (((int)uVar26 < iVar19) || (iVar5 < (int)uVar26)) {
                    if (DVar8 != (DensityMapFilter)0x0) goto LAB_008232dc;
                  }
                  else if (DVar8 == (DensityMapFilter)0x0) {
LAB_008232dc:
                    if ((uVar7 == 0) || ((uVar26 & uVar7) != 0)) {
                      lVar25 = *local_80;
                      uVar21 = (uVar16 + local_90 * uVar13) * local_88;
                      lVar20 = *(long *)(lVar25 + (ulong)(uVar21 >> 0x13) * 8);
                      uVar22 = (ulong)(uVar21 >> 3) & 0xffff;
                      if ((uint)uVar22 < 0xfffd) {
                        uVar23 = *(uint *)(lVar20 + uVar22);
                      }
                      else {
                        uVar23 = (uVar21 >> 3) + 1;
                        uVar24 = (uVar21 >> 3) + 2;
                        uVar23 = (uint)CONCAT12(*(undefined *)
                                                 (*(long *)(lVar25 + (ulong)(uVar24 >> 0x10) * 8) +
                                                 ((ulong)uVar24 & 0xffff)),
                                                CONCAT11(*(undefined *)
                                                          (*(long *)(lVar25 + (ulong)(uVar23 >> 0x10
                                                                                     ) * 8) +
                                                          ((ulong)uVar23 & 0xffff)),
                                                         *(undefined *)(lVar20 + uVar22)));
                      }
                      uVar21 = uVar23 >> (ulong)(uVar21 & 7) &
                               (-1 << (ulong)(local_88 & 0x1f) ^ 0xffffffffU) & 0xffff;
                      local_78 = uVar16;
                      uStack_74 = uVar13;
                      local_70 = uVar21;
                      DensityMapOperations::SetTypeProcessor<BitVector>::process
                                ((SetTypeProcessor<BitVector> *)param_5,(HelperSource *)&local_90);
                      if (uVar21 != local_70) {
                        DensityMapAccessUtil::writeValue
                                  ((BitVector *)local_80,local_88,local_90,local_78,uStack_74,
                                   local_70);
                      }
                      goto LAB_008231c0;
                    }
                  }
                }
                uVar24 = uVar24 + 1;
                uVar2 = uVar2 + uVar17;
              } while (uVar24 != uVar14);
              uVar21 = uVar21 + 1;
              uVar23 = uVar23 + uVar15 * uVar17;
            } while (uVar21 != uVar10);
            *(int *)param_5 = *(int *)param_5 + 1;
LAB_008231c0:
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(param_4 + 0x5c));
        }
        uVar16 = *(uint *)(param_4 + 0x4c);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar16);
    }
  }
  else {
    uVar10 = 0;
    if (uVar15 != 0) {
      uVar10 = uVar13 / uVar15;
    }
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = uVar14 / uVar16;
    }
    uVar29 = NEON_cnt((ulong)uVar10,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar12 = (uVar10 & 0xffff0000) != 0;
      uVar14 = uVar10 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar10;
      }
      uVar21 = (uint)bVar12;
      uVar16 = uVar21 << 4 | 8;
      uVar10 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar16 = uVar21 << 4;
        uVar10 = uVar14;
      }
      uVar14 = uVar16 | 4;
      uVar21 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar14 = uVar16;
        uVar21 = uVar10;
      }
      uVar16 = uVar14 | 2;
      uVar10 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar16 = uVar14;
        uVar10 = uVar21;
      }
      uVar14 = (uVar10 + uVar16) - 1;
    }
    else {
      uVar14 = 0;
    }
    uVar29 = NEON_cnt((ulong)uVar13,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar12 = (uVar13 & 0xffff0000) != 0;
      uVar16 = uVar13 >> 0x10;
      if (!bVar12) {
        uVar16 = uVar13;
      }
      uVar21 = (uint)bVar12;
      uVar13 = uVar21 << 4 | 8;
      uVar10 = uVar16 >> 8;
      if (uVar16 < 0x100) {
        uVar13 = uVar21 << 4;
        uVar10 = uVar16;
      }
      uVar16 = uVar13 | 4;
      uVar21 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar16 = uVar13;
        uVar21 = uVar10;
      }
      uVar13 = uVar16 | 2;
      uVar10 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar13 = uVar16;
        uVar10 = uVar21;
      }
      local_c8 = (uVar10 + uVar13) - 1;
    }
    else {
      local_c8 = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    uVar16 = *(uint *)(param_4 + 0x4c);
    if (uVar13 < uVar16) {
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar16 = *(uint *)(param_4 + 0x58);
        if (uVar16 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar10 = ((uVar16 >> (ulong)(uVar14 & 0x1f)) +
                     (uVar13 >> (ulong)(local_c8 & 0x1f)) * uVar15) * uVar17;
            lVar25 = *(long *)param_3;
            uVar22 = (ulong)(uVar10 >> 3) & 0xffff;
            lVar20 = *(long *)(lVar25 + (ulong)(uVar10 >> 0x13) * 8);
            if ((uint)uVar22 < 0xfffd) {
              uVar21 = *(uint *)(lVar20 + uVar22);
            }
            else {
              uVar21 = (uVar10 >> 3) + 1;
              uVar23 = (uVar10 >> 3) + 2;
              uVar21 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar25 + (ulong)(uVar23 >> 0x10) * 8) +
                                       ((ulong)uVar23 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar25 + (ulong)(uVar21 >> 0x10) * 8) +
                                                ((ulong)uVar21 & 0xffff)),
                                               *(undefined *)(lVar20 + uVar22)));
            }
            uVar10 = uVar21 >> (ulong)(uVar10 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
            if ((((iVar4 == 2) || ((iVar4 == 0) != ((uVar10 & uVar18) != uVar6))) &&
                (DVar8 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar10 >> (ulong)(uVar3 & 0x1f) & uVar9 & uVar7) != 0)))) {
              lVar25 = *local_80;
              uVar10 = (uVar16 + uVar13 * local_90) * local_88;
              lVar20 = *(long *)(lVar25 + (ulong)(uVar10 >> 0x13) * 8);
              uVar22 = (ulong)(uVar10 >> 3) & 0xffff;
              if ((uint)uVar22 < 0xfffd) {
                uVar21 = *(uint *)(lVar20 + uVar22);
              }
              else {
                uVar21 = (uVar10 >> 3) + 1;
                uVar23 = (uVar10 >> 3) + 2;
                uVar21 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar25 + (ulong)(uVar23 >> 0x10) * 8) +
                                         ((ulong)uVar23 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar25 + (ulong)(uVar21 >> 0x10) * 8) +
                                                  ((ulong)uVar21 & 0xffff)),
                                                 *(undefined *)(lVar20 + uVar22)));
              }
              uVar10 = uVar21 >> (ulong)(uVar10 & 7) &
                       (-1 << (ulong)(local_88 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_78 = uVar16;
              uStack_74 = uVar13;
              local_70 = uVar10;
              DensityMapOperations::SetTypeProcessor<BitVector>::process
                        ((SetTypeProcessor<BitVector> *)param_5,(HelperSource *)&local_90);
              if (uVar10 != local_70) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_80,local_88,local_90,local_78,uStack_74,local_70);
              }
            }
            else {
              *(int *)param_5 = *(int *)param_5 + 1;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(param_4 + 0x5c));
        }
        uVar16 = *(uint *)(param_4 + 0x4c);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar16);
    }
  }
  bVar12 = true;
  if (param_5[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_5 + 0x48),*(uint *)(param_4 + 0x50),*(uint *)(param_4 + 0x48),
               *(uint *)(param_4 + 0x54),uVar16,*(uint *)(param_5 + 0x14),*(uint *)(param_5 + 0x18),
               *(uint *)(param_5 + 0x60),(bool)param_5[0x5d],true,true);
  }
LAB_008233e8:
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return bVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


