// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083cdf8
// Size: 2824 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, uint param_6, TypedModules * param_7)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask<BitVector, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(IDensityPixelSource*, BitVector*, IDensityPixelSource const*, ChunkedBitSquare*,
   ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask<BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,uint param_6,
               TypedModules *param_7)

{
  uint *puVar1;
  SetOrAddDensityProcessor<BitVector,false> *this;
  TypedModuleWithMasks *this_00;
  char cVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  code **ppcVar13;
  Logger *this_01;
  uint uVar14;
  uint uVar15;
  long lVar16;
  IDensityPixelSource *pIVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined2 uVar27;
  undefined8 uVar28;
  uint local_11c;
  uint local_10c;
  uint local_104;
  uint local_100;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  ChunkedBitSquare *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar5 = (**(code **)(*(long *)param_1 + 0x28))();
  uVar5 = ~(-1 << (ulong)(uVar5 & 0x1f));
  uVar6 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  uVar6 = ~(-1 << (ulong)(uVar6 & 0x1f));
  uVar7 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_98 = uVar7;
  uVar8 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar8;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  local_88 = (long *)param_2;
  uVar9 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar9;
  uVar10 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar10;
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = param_4;
  if ((uVar7 < uVar9) || (uVar8 < uVar10)) {
    if ((uVar9 < uVar7) || (uVar10 < uVar8)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar12 != 0
         )) {
                    /* try { // try from 0083d8bc to 0083d8c3 has its CatchHandler @ 0083d910 */
        this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 0083d8c8 to 0083d8cb has its CatchHandler @ 0083d900 */
        Logger::Logger(this_01);
        LogManager::getInstance()::singletonLogManager = this_01;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_98,(ulong)local_94);
      bVar4 = false;
      goto LAB_0083d878;
    }
    uVar20 = 0;
    if (uVar7 != 0) {
      uVar20 = uVar9 / uVar7;
    }
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = uVar10 / uVar8;
    }
    uVar28 = NEON_cnt((ulong)uVar20,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar20 & 0xffff0000) != 0;
      uVar8 = uVar20 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar20;
      }
      uVar14 = (uint)bVar4;
      uVar9 = uVar14 << 4 | 8;
      uVar10 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar9 = uVar14 << 4;
        uVar10 = uVar8;
      }
      uVar8 = uVar9 | 4;
      uVar14 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar8 = uVar9;
        uVar14 = uVar10;
      }
      uVar9 = uVar8 | 2;
      uVar10 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar9 = uVar8;
        uVar10 = uVar14;
      }
      local_100 = (uVar10 + uVar9) - 1;
    }
    else {
      local_100 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar7,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar7 & 0xffff0000) != 0;
      uVar8 = uVar7 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar7;
      }
      uVar14 = (uint)bVar4;
      uVar9 = uVar14 << 4 | 8;
      uVar10 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar9 = uVar14 << 4;
        uVar10 = uVar8;
      }
      uVar8 = uVar9 | 4;
      uVar14 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar8 = uVar9;
        uVar14 = uVar10;
      }
      uVar9 = uVar8 | 2;
      uVar10 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar9 = uVar8;
        uVar10 = uVar14;
      }
      local_104 = (uVar10 + uVar9) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar8 = *(uint *)(param_5 + 0x48);
    if (uVar8 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar8);
        uVar9 = *(uint *)(param_5 + 0x58);
        if (uVar9 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar23 = *local_88;
            uVar10 = (uVar9 + local_98 * uVar8) * local_90;
            lVar16 = *(long *)(lVar23 + (ulong)(uVar10 >> 0x13) * 8);
            uVar22 = (ulong)(uVar10 >> 3) & 0xffff;
            if ((uint)uVar22 < 0xfffd) {
              uVar14 = *(uint *)(lVar16 + uVar22);
            }
            else {
              uVar14 = (uVar10 >> 3) + 1;
              uVar15 = (uVar10 >> 3) + 2;
              uVar14 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar23 + (ulong)(uVar15 >> 0x10) * 8) +
                                       ((ulong)uVar15 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar23 + (ulong)(uVar14 >> 0x10) * 8) +
                                                ((ulong)uVar14 & 0xffff)),
                                               *(undefined *)(lVar16 + uVar22)));
            }
            uVar10 = uVar14 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar14 = uVar10 & uVar5;
            uVar15 = param_6 - 1;
            if (uVar14 <= param_6 - 1) {
              uVar15 = uVar14;
            }
            plVar24 = (long *)(param_7 + (ulong)uVar15 * 0x18);
            lVar16 = *plVar24;
            uVar22 = (plVar24[1] - lVar16 >> 3) * 0x684bda13;
            local_80 = uVar9;
            uStack_7c = uVar8;
            local_78 = uVar10;
            if ((int)uVar22 != 0) {
              lVar23 = 0;
              while( true ) {
                this_00 = (TypedModuleWithMasks *)(lVar16 + lVar23);
                bVar4 = checkTypedModuleMasks<ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this_00,param_1,uVar14,uVar10,(HelperSource *)&local_c0,param_3,
                                   uVar6,uVar9 << (ulong)(local_100 & 0x1f),
                                   uVar8 << (ulong)(local_104 & 0x1f),uVar20,uVar7);
                if (bVar4) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this_00,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
                }
                if ((uVar22 & 0xffffffff) * 0xd8 + -0xd8 == lVar23) break;
                lVar16 = *plVar24;
                lVar23 = lVar23 + 0xd8;
              }
              if (uVar10 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_5 + 0x5c));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar20 = 0;
    if (uVar9 != 0) {
      uVar20 = uVar7 / uVar9;
    }
    uVar7 = 0;
    if (uVar10 != 0) {
      uVar7 = uVar8 / uVar10;
    }
    uVar28 = NEON_cnt((ulong)uVar20,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar20 & 0xffff0000) != 0;
      uVar8 = uVar20 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar20;
      }
      uVar20 = (uint)bVar4;
      uVar9 = uVar20 << 4 | 8;
      uVar10 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar9 = uVar20 << 4;
        uVar10 = uVar8;
      }
      uVar8 = uVar9 | 4;
      uVar20 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar8 = uVar9;
        uVar20 = uVar10;
      }
      uVar9 = uVar8 | 2;
      uVar10 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar9 = uVar8;
        uVar10 = uVar20;
      }
      local_10c = (uVar10 + uVar9) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar7,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar7 & 0xffff0000) != 0;
      uVar8 = uVar7 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar7;
      }
      uVar10 = (uint)bVar4;
      uVar7 = uVar10 << 4 | 8;
      uVar9 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar7 = uVar10 << 4;
        uVar9 = uVar8;
      }
      uVar8 = uVar7 | 4;
      uVar10 = uVar9 >> 4;
      if (uVar9 < 0x10) {
        uVar8 = uVar7;
        uVar10 = uVar9;
      }
      uVar7 = uVar8 | 2;
      uVar9 = uVar10 >> 2;
      if (uVar10 < 4) {
        uVar7 = uVar8;
        uVar9 = uVar10;
      }
      local_11c = (uVar9 + uVar7) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar7 = *(uint *)(param_5 + 0x48);
    if (uVar7 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar7);
        uVar8 = *(uint *)(param_5 + 0x58);
        if (uVar8 < *(uint *)(param_5 + 0x5c)) {
          uVar9 = uVar7 >> (ulong)(local_11c & 0x1f);
          do {
            lVar23 = *local_88;
            uVar10 = (uVar8 + local_98 * uVar7) * local_90;
            lVar16 = *(long *)(lVar23 + (ulong)(uVar10 >> 0x13) * 8);
            uVar22 = (ulong)(uVar10 >> 3) & 0xffff;
            if ((uint)uVar22 < 0xfffd) {
              uVar20 = *(uint *)(lVar16 + uVar22);
            }
            else {
              uVar20 = (uVar10 >> 3) + 1;
              uVar14 = (uVar10 >> 3) + 2;
              uVar20 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar23 + (ulong)(uVar14 >> 0x10) * 8) +
                                       ((ulong)uVar14 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar23 + (ulong)(uVar20 >> 0x10) * 8) +
                                                ((ulong)uVar20 & 0xffff)),
                                               *(undefined *)(lVar16 + uVar22)));
            }
            uVar10 = uVar20 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar20 = uVar10 & uVar5;
            uVar14 = param_6 - 1;
            if (uVar20 <= param_6 - 1) {
              uVar14 = uVar20;
            }
            plVar24 = (long *)(param_7 + (ulong)uVar14 * 0x18);
            uVar14 = (int)((ulong)(plVar24[1] - *plVar24) >> 3) * 0x684bda13;
            local_80 = uVar8;
            uStack_7c = uVar7;
            local_78 = uVar10;
            if (uVar14 != 0) {
              local_a8 = uVar8 >> (ulong)(local_10c & 0x1f);
              uVar15 = (((uVar9 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (local_a8 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar13 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar15 * 8);
              uVar21 = local_a8 & 0x1f | (uVar9 & 0x1f) << 5;
              uStack_a4 = uVar9;
              uVar11 = (**ppcVar13)(ppcVar13,uVar21,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar22 = 1;
                puVar25 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar13 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar15 + (int)uVar22) * 8);
                  iVar12 = (**ppcVar13)(ppcVar13,uVar21,0,*puVar25);
                  puVar1 = puVar25 + -1;
                  uVar22 = uVar22 + 1;
                  puVar25 = puVar25 + 2;
                  uVar11 = iVar12 << (ulong)(*puVar1 & 0x1f) | uVar11;
                } while (uVar22 < *(uint *)(param_4 + 0x34));
              }
              if (uVar14 < 2) {
                uVar14 = 1;
              }
              lVar16 = 0;
              local_a0 = uVar11;
              do {
                lVar23 = *plVar24;
                this = (SetOrAddDensityProcessor<BitVector,false> *)(lVar23 + lVar16);
                if (*(IDensityPixelSource **)(this + 0x78) == (IDensityPixelSource *)0x0) {
LAB_0083d500:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            (this,(HelperSource *)&local_98);
                }
                else {
                  iVar12 = *(int *)(this + 0x80);
                  if (*(IDensityPixelSource **)(this + 0x78) == param_1) {
                    if ((iVar12 == 2) ||
                       ((iVar12 == 0) != (*(uint *)(lVar23 + lVar16 + 0x84) != uVar20))) {
                      lVar18 = lVar23 + lVar16;
                      uVar21 = *(uint *)(lVar18 + 0x8c);
                      iVar12 = *(int *)(lVar18 + 0x90);
                      uVar15 = uVar10 >> (ulong)(*(uint *)(lVar18 + 0x88) & 0x1f);
                      goto LAB_0083d3e0;
                    }
                  }
                  else if ((iVar12 == 2) ||
                          ((iVar12 == 0) != (*(uint *)(lVar23 + lVar16 + 0x84) != (uVar11 & uVar6)))
                          ) {
                    lVar18 = lVar23 + lVar16;
                    uVar21 = *(uint *)(lVar18 + 0x8c);
                    iVar12 = *(int *)(lVar18 + 0x90);
                    uVar15 = uVar11 >> (ulong)(*(uint *)(lVar18 + 0x88) & 0x1f);
LAB_0083d3e0:
                    lVar18 = lVar23 + lVar16;
                    uVar15 = uVar15 & (-1 << (ulong)(uVar21 & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar15 < iVar12) {
                      cVar2 = *(char *)(lVar18 + 0x98);
joined_r0x0083d40c:
                      if (cVar2 == '\0') goto LAB_0083d32c;
                    }
                    else {
                      cVar2 = *(char *)(lVar18 + 0x98);
                      if (*(int *)(lVar18 + 0x94) < (int)uVar15) goto joined_r0x0083d40c;
                      if (cVar2 != '\0') goto LAB_0083d32c;
                    }
                    uVar21 = *(uint *)(lVar23 + lVar16 + 0x9c);
                    if ((uVar21 == 0) || ((uVar21 & uVar15) != 0)) {
                      pIVar17 = *(IDensityPixelSource **)(lVar23 + lVar16 + 0xa8);
                      if (pIVar17 == (IDensityPixelSource *)0x0) goto LAB_0083d500;
                      iVar12 = *(int *)(lVar23 + lVar16 + 0xb0);
                      if (pIVar17 == param_1) {
                        if ((iVar12 == 2) ||
                           ((iVar12 == 0) != (*(uint *)(lVar23 + lVar16 + 0xb4) != uVar20))) {
                          lVar18 = lVar23 + lVar16;
                          uVar21 = *(uint *)(lVar18 + 0xbc);
                          iVar12 = *(int *)(lVar18 + 0xc0);
                          uVar15 = uVar10 >> (ulong)(*(uint *)(lVar18 + 0xb8) & 0x1f);
                          goto LAB_0083d4b4;
                        }
                      }
                      else if ((iVar12 == 2) ||
                              ((iVar12 == 0) !=
                               (*(uint *)(lVar23 + lVar16 + 0xb4) != (uVar11 & uVar6)))) {
                        lVar18 = lVar23 + lVar16;
                        uVar21 = *(uint *)(lVar18 + 0xbc);
                        iVar12 = *(int *)(lVar18 + 0xc0);
                        uVar15 = uVar11 >> (ulong)(*(uint *)(lVar18 + 0xb8) & 0x1f);
LAB_0083d4b4:
                        lVar18 = lVar23 + lVar16;
                        uVar15 = uVar15 & (-1 << (ulong)(uVar21 & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar15 < iVar12) {
                          cVar2 = *(char *)(lVar18 + 200);
joined_r0x0083d4e0:
                          if (cVar2 == '\0') goto LAB_0083d32c;
                        }
                        else {
                          cVar2 = *(char *)(lVar18 + 200);
                          if (*(int *)(lVar18 + 0xc4) < (int)uVar15) goto joined_r0x0083d4e0;
                          if (cVar2 != '\0') goto LAB_0083d32c;
                        }
                        uVar21 = *(uint *)(lVar23 + lVar16 + 0xcc);
                        if ((uVar21 == 0) || ((uVar21 & uVar15) != 0)) goto LAB_0083d500;
                      }
                    }
                  }
LAB_0083d32c:
                  *(int *)(lVar23 + lVar16 + 4) = *(int *)(lVar23 + lVar16 + 4) + 1;
                }
                lVar16 = lVar16 + 0xd8;
              } while ((ulong)uVar14 * 0xd8 - lVar16 != 0);
              if (uVar10 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_5 + 0x5c));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_5 + 0x4c));
    }
  }
  if (param_6 != 0) {
    uVar22 = 0;
    do {
      plVar24 = (long *)(param_7 + uVar22 * 0x18);
      lVar16 = *plVar24;
      lVar23 = plVar24[1];
      if (lVar23 != lVar16) {
        uVar26 = 0;
        do {
          if (*(char *)(lVar16 + uVar26 * 0xd8 + 0x6c) != '\0') {
            lVar16 = lVar16 + uVar26 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar16 + 0x58),*(uint *)(param_5 + 0x50),
                       *(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x54),*(uint *)(param_5 + 0x4c)
                       ,*(uint *)(lVar16 + 0x24),*(uint *)(lVar16 + 0x28),*(uint *)(lVar16 + 0x70),
                       *(bool *)(lVar16 + 0x6d),true,true);
            lVar23 = plVar24[1];
            lVar16 = *plVar24;
          }
          uVar26 = (ulong)((int)uVar26 + 1);
          uVar19 = (lVar23 - lVar16 >> 3) * -0x7b425ed097b425ed;
        } while (uVar26 <= uVar19 && uVar19 - uVar26 != 0);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_6);
  }
  bVar4 = true;
LAB_0083d878:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


