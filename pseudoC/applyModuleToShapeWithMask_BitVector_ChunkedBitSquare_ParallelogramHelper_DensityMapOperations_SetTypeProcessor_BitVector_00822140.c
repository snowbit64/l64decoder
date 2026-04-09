// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
// Entry Point: 00822140
// Size: 2464 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ChunkedBitSquare * param_3, ParallelogramHelper * param_4, SetTypeProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<BitVector, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::SetTypeProcessor<BitVector> >(IDensityPixelSource*,
   BitVector*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::SetTypeProcessor<BitVector>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,ChunkedBitSquare *param_3,
               ParallelogramHelper *param_4,SetTypeProcessor *param_5,DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  DensityMapFilter DVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  code **ppcVar24;
  Logger *this;
  long lVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  undefined4 *puVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  long *plVar33;
  undefined2 uVar34;
  undefined8 uVar35;
  uint local_104;
  uint local_ec;
  uint local_d8;
  uint local_b8;
  uint local_98;
  uint local_94;
  uint local_90;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  uVar14 = (**(code **)(*(long *)param_1 + 0x18))();
  local_98 = uVar14;
  uVar15 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar15;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar33 = *(long **)param_6;
  local_88 = (long *)param_2;
  uVar16 = (**(code **)(*plVar33 + 0x18))(plVar33);
  uVar17 = (**(code **)(*plVar33 + 0x20))(plVar33);
  (**(code **)(*plVar33 + 0x30))(plVar33);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar5 = *(uint *)(param_6 + 0x10);
  uVar10 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar18 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar23 = *(int *)(param_6 + 8);
  uVar6 = *(uint *)(param_6 + 0xc);
  DVar8 = param_6[0x20];
  iVar20 = *(int *)(param_6 + 0x18);
  iVar7 = *(int *)(param_6 + 0x1c);
  uVar11 = ~(-1 << (ulong)(uVar18 & 0x1f));
  uVar18 = *(uint *)(param_6 + 0x24);
  if ((uVar14 < uVar16) || (uVar15 < uVar17)) {
    if ((uVar16 < uVar14) || (uVar17 < uVar15)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar23 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar23 != 0
         )) {
                    /* try { // try from 00822a9c to 00822aa3 has its CatchHandler @ 00822af0 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00822aa8 to 00822aab has its CatchHandler @ 00822ae0 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar16,(ulong)uVar17,(ulong)local_98,(ulong)local_94);
      bVar13 = false;
      goto LAB_00822a54;
    }
    uVar26 = 0;
    if (uVar14 != 0) {
      uVar26 = uVar16 / uVar14;
    }
    uVar14 = 0;
    if (uVar15 != 0) {
      uVar14 = uVar17 / uVar15;
    }
    uVar35 = NEON_cnt((ulong)uVar26,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar26 & 0xffff0000) != 0;
      uVar15 = uVar26 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar26;
      }
      uVar19 = (uint)bVar13;
      uVar16 = uVar19 << 4 | 8;
      uVar17 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar17 = uVar15;
      }
      uVar15 = uVar16 | 4;
      uVar19 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar15 = uVar16;
        uVar19 = uVar17;
      }
      uVar16 = uVar15 | 2;
      uVar17 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar15;
        uVar17 = uVar19;
      }
      local_ec = (uVar17 + uVar16) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar14,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar14 & 0xffff0000) != 0;
      uVar15 = uVar14 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar14;
      }
      uVar19 = (uint)bVar13;
      uVar16 = uVar19 << 4 | 8;
      uVar17 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar17 = uVar15;
      }
      uVar15 = uVar16 | 4;
      uVar19 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar15 = uVar16;
        uVar19 = uVar17;
      }
      uVar16 = uVar15 | 2;
      uVar17 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar15;
        uVar17 = uVar19;
      }
      local_104 = (uVar17 + uVar16) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar15 = *(uint *)(param_4 + 0x48);
    uVar16 = *(uint *)(param_4 + 0x4c);
    if (uVar15 < uVar16) {
      if (uVar26 < 2) {
        uVar26 = 1;
      }
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar15);
        uVar16 = *(uint *)(param_4 + 0x58);
        if (uVar16 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar17 = 0;
            uVar19 = uVar16 << (ulong)(local_ec & 0x1f);
            do {
              uVar28 = 0;
              uVar31 = (ulong)*(uint *)(param_3 + 0x34);
              uVar3 = uVar17 + (uVar15 << (ulong)(local_104 & 0x1f));
              uVar2 = uVar19;
              do {
                uVar4 = uVar28 + uVar19;
                iVar9 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar30 = (int)uVar31;
                ppcVar24 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar9 + (uVar4 >> 5)) * iVar30) * 8);
                uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
                uVar21 = (**ppcVar24)(ppcVar24,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar31 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar23 != 2) goto LAB_008228f8;
LAB_00822918:
                  uVar4 = uVar21 >> (ulong)(uVar5 & 0x1f) & uVar10;
                  if (((int)uVar4 < iVar20) || (iVar7 < (int)uVar4)) {
                    if (DVar8 != (DensityMapFilter)0x0) goto LAB_00822944;
                  }
                  else if (DVar8 == (DensityMapFilter)0x0) {
LAB_00822944:
                    if ((uVar18 == 0) || ((uVar4 & uVar18) != 0)) {
                      lVar27 = *local_88;
                      uVar17 = (uVar16 + local_98 * uVar15) * local_90;
                      lVar25 = *(long *)(lVar27 + (ulong)(uVar17 >> 0x13) * 8);
                      uVar31 = (ulong)(uVar17 >> 3) & 0xffff;
                      if ((uint)uVar31 < 0xfffd) {
                        uVar19 = *(uint *)(lVar25 + uVar31);
                      }
                      else {
                        uVar19 = (uVar17 >> 3) + 1;
                        uVar28 = (uVar17 >> 3) + 2;
                        uVar19 = (uint)CONCAT12(*(undefined *)
                                                 (*(long *)(lVar27 + (ulong)(uVar28 >> 0x10) * 8) +
                                                 ((ulong)uVar28 & 0xffff)),
                                                CONCAT11(*(undefined *)
                                                          (*(long *)(lVar27 + (ulong)(uVar19 >> 0x10
                                                                                     ) * 8) +
                                                          ((ulong)uVar19 & 0xffff)),
                                                         *(undefined *)(lVar25 + uVar31)));
                      }
                      uVar17 = uVar19 >> (ulong)(uVar17 & 7) &
                               (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
                      local_80 = uVar16;
                      uStack_7c = uVar15;
                      local_78 = uVar17;
                      DensityMapOperations::SetTypeProcessor<BitVector>::process
                                ((SetTypeProcessor<BitVector> *)param_5,(HelperSource *)&local_98);
                      if (uVar17 != local_78) {
                        DensityMapAccessUtil::writeValue
                                  ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,
                                   local_78);
                      }
                      goto LAB_008227ac;
                    }
                  }
                }
                else {
                  uVar32 = 1;
                  puVar29 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar24 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar30 * (iVar9 + (uVar2 >> 5)) + (int)uVar32) * 8);
                    iVar22 = (**ppcVar24)(ppcVar24,uVar4,0,*puVar29);
                    puVar1 = puVar29 + -1;
                    uVar32 = uVar32 + 1;
                    uVar31 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar29 = puVar29 + 2;
                    uVar21 = iVar22 << (ulong)(*puVar1 & 0x1f) | uVar21;
                  } while (uVar32 < uVar31);
                  if (iVar23 == 2) goto LAB_00822918;
LAB_008228f8:
                  if ((iVar23 == 0) != ((uVar21 & uVar11) != uVar6)) goto LAB_00822918;
                }
                uVar28 = uVar28 + 1;
                uVar2 = uVar2 + 1;
              } while (uVar28 != uVar26);
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar14);
            *(int *)param_5 = *(int *)param_5 + 1;
LAB_008227ac:
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(param_4 + 0x5c));
        }
        uVar16 = *(uint *)(param_4 + 0x4c);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar16);
    }
  }
  else {
    uVar26 = 0;
    if (uVar16 != 0) {
      uVar26 = uVar14 / uVar16;
    }
    uVar14 = 0;
    if (uVar17 != 0) {
      uVar14 = uVar15 / uVar17;
    }
    uVar35 = NEON_cnt((ulong)uVar26,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar26 & 0xffff0000) != 0;
      uVar15 = uVar26 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar26;
      }
      uVar26 = (uint)bVar13;
      uVar16 = uVar26 << 4 | 8;
      uVar17 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar16 = uVar26 << 4;
        uVar17 = uVar15;
      }
      uVar15 = uVar16 | 4;
      uVar26 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar15 = uVar16;
        uVar26 = uVar17;
      }
      uVar16 = uVar15 | 2;
      uVar17 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar16 = uVar15;
        uVar17 = uVar26;
      }
      local_b8 = (uVar17 + uVar16) - 1;
    }
    else {
      local_b8 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar14,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar14 & 0xffff0000) != 0;
      uVar15 = uVar14 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar14;
      }
      uVar17 = (uint)bVar13;
      uVar14 = uVar17 << 4 | 8;
      uVar16 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar14 = uVar17 << 4;
        uVar16 = uVar15;
      }
      uVar15 = uVar14 | 4;
      uVar17 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar15 = uVar14;
        uVar17 = uVar16;
      }
      uVar14 = uVar15 | 2;
      uVar16 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar14 = uVar15;
        uVar16 = uVar17;
      }
      local_d8 = (uVar16 + uVar14) - 1;
    }
    else {
      local_d8 = 0;
    }
    uVar14 = *(uint *)(param_4 + 0x48);
    uVar16 = *(uint *)(param_4 + 0x4c);
    if (uVar14 < uVar16) {
      do {
        ParallelogramHelper::startXIteration(param_4,uVar14);
        uVar15 = *(uint *)(param_4 + 0x58);
        if (uVar15 < *(uint *)(param_4 + 0x5c)) {
          uVar16 = uVar14 >> (ulong)(local_d8 & 0x1f);
          do {
            uVar17 = uVar15 >> (ulong)(local_b8 & 0x1f);
            uVar26 = (((uVar16 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar17 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar24 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar26 * 8);
            uVar17 = uVar17 & 0x1f | (uVar16 & 0x1f) << 5;
            uVar19 = (**ppcVar24)(ppcVar24,uVar17,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar31 = 1;
              puVar29 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar24 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar26 + (int)uVar31) * 8);
                iVar20 = (**ppcVar24)(ppcVar24,uVar17,0,*puVar29);
                puVar1 = puVar29 + -1;
                uVar31 = uVar31 + 1;
                puVar29 = puVar29 + 2;
                uVar19 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar19;
              } while (uVar31 < *(uint *)(param_3 + 0x34));
            }
            if ((((iVar23 == 2) || ((iVar23 == 0) != ((uVar19 & uVar11) != uVar6))) &&
                (DVar8 == (DensityMapFilter)0x0)) &&
               ((uVar18 == 0 || ((uVar19 >> (ulong)(uVar5 & 0x1f) & uVar10 & uVar18) != 0)))) {
              lVar27 = *local_88;
              uVar17 = (uVar15 + local_98 * uVar14) * local_90;
              lVar25 = *(long *)(lVar27 + (ulong)(uVar17 >> 0x13) * 8);
              uVar31 = (ulong)(uVar17 >> 3) & 0xffff;
              if ((uint)uVar31 < 0xfffd) {
                uVar26 = *(uint *)(lVar25 + uVar31);
              }
              else {
                uVar26 = (uVar17 >> 3) + 1;
                uVar19 = (uVar17 >> 3) + 2;
                uVar26 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar27 + (ulong)(uVar19 >> 0x10) * 8) +
                                         ((ulong)uVar19 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar27 + (ulong)(uVar26 >> 0x10) * 8) +
                                                  ((ulong)uVar26 & 0xffff)),
                                                 *(undefined *)(lVar25 + uVar31)));
              }
              uVar17 = uVar26 >> (ulong)(uVar17 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar15;
              uStack_7c = uVar14;
              local_78 = uVar17;
              DensityMapOperations::SetTypeProcessor<BitVector>::process
                        ((SetTypeProcessor<BitVector> *)param_5,(HelperSource *)&local_98);
              if (uVar17 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
              *(int *)param_5 = *(int *)param_5 + 1;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(param_4 + 0x5c));
        }
        uVar16 = *(uint *)(param_4 + 0x4c);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar16);
    }
  }
  bVar13 = true;
  if (param_5[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_5 + 0x48),*(uint *)(param_4 + 0x50),*(uint *)(param_4 + 0x48),
               *(uint *)(param_4 + 0x54),uVar16,*(uint *)(param_5 + 0x14),*(uint *)(param_5 + 0x18),
               *(uint *)(param_5 + 0x60),(bool)param_5[0x5d],true,true);
  }
LAB_00822a54:
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return bVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


