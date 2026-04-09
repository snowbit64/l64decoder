// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083e450
// Size: 2660 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, uint param_6, TypedModules * param_7)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask<BitVector, ProceduralDensityPixelSource
   const, ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(IDensityPixelSource*, BitVector*, IDensityPixelSource const*, ProceduralDensityPixelSource
   const*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask<BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,uint param_6,
               TypedModules *param_7)

{
  SetOrAddDensityProcessor<BitVector,false> *this;
  TypedModuleWithMasks *this_00;
  char cVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  Logger *this_01;
  uint uVar12;
  long lVar13;
  IDensityPixelSource *pIVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  undefined2 uVar23;
  undefined8 uVar24;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  ProceduralDensityPixelSource *local_b0;
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
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*(long *)param_1 + 0x28))();
  uVar4 = ~(-1 << (ulong)(uVar4 & 0x1f));
  uVar5 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  uVar5 = ~(-1 << (ulong)(uVar5 & 0x1f));
  uVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_98 = uVar6;
  uVar7 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar7;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  local_88 = (long *)param_2;
  uVar8 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar8;
  uVar9 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar9;
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = param_4;
  if ((uVar6 < uVar8) || (uVar7 < uVar9)) {
    if ((uVar8 < uVar6) || (uVar9 < uVar7)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0
         )) {
                    /* try { // try from 0083ee70 to 0083ee77 has its CatchHandler @ 0083eec4 */
        this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 0083ee7c to 0083ee7f has its CatchHandler @ 0083eeb4 */
        Logger::Logger(this_01);
        LogManager::getInstance()::singletonLogManager = this_01;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_98,(ulong)local_94);
      bVar3 = false;
      goto LAB_0083ee2c;
    }
    uVar17 = 0;
    if (uVar6 != 0) {
      uVar17 = uVar8 / uVar6;
    }
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = uVar9 / uVar7;
    }
    uVar24 = NEON_cnt((ulong)uVar17,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar3 = (uVar17 & 0xffff0000) != 0;
      uVar7 = uVar17 >> 0x10;
      if (!bVar3) {
        uVar7 = uVar17;
      }
      uVar10 = (uint)bVar3;
      uVar8 = uVar10 << 4 | 8;
      uVar9 = uVar7 >> 8;
      if (uVar7 < 0x100) {
        uVar8 = uVar10 << 4;
        uVar9 = uVar7;
      }
      uVar7 = uVar8 | 4;
      uVar10 = uVar9 >> 4;
      if (uVar9 < 0x10) {
        uVar7 = uVar8;
        uVar10 = uVar9;
      }
      uVar8 = uVar7 | 2;
      uVar9 = uVar10 >> 2;
      if (uVar10 < 4) {
        uVar8 = uVar7;
        uVar9 = uVar10;
      }
      local_108 = (uVar9 + uVar8) - 1;
    }
    else {
      local_108 = 0;
    }
    uVar24 = NEON_cnt((ulong)uVar6,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar3 = (uVar6 & 0xffff0000) != 0;
      uVar7 = uVar6 >> 0x10;
      if (!bVar3) {
        uVar7 = uVar6;
      }
      uVar10 = (uint)bVar3;
      uVar8 = uVar10 << 4 | 8;
      uVar9 = uVar7 >> 8;
      if (uVar7 < 0x100) {
        uVar8 = uVar10 << 4;
        uVar9 = uVar7;
      }
      uVar7 = uVar8 | 4;
      uVar10 = uVar9 >> 4;
      if (uVar9 < 0x10) {
        uVar7 = uVar8;
        uVar10 = uVar9;
      }
      uVar8 = uVar7 | 2;
      uVar9 = uVar10 >> 2;
      if (uVar10 < 4) {
        uVar8 = uVar7;
        uVar9 = uVar10;
      }
      local_10c = (uVar9 + uVar8) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar7 = *(uint *)(param_5 + 0x48);
    if (uVar7 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar7);
        uVar8 = *(uint *)(param_5 + 0x58);
        if (uVar8 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar20 = *local_88;
            uVar9 = (uVar8 + local_98 * uVar7) * local_90;
            lVar13 = *(long *)(lVar20 + (ulong)(uVar9 >> 0x13) * 8);
            uVar19 = (ulong)(uVar9 >> 3) & 0xffff;
            if ((uint)uVar19 < 0xfffd) {
              uVar10 = *(uint *)(lVar13 + uVar19);
            }
            else {
              uVar10 = (uVar9 >> 3) + 1;
              uVar12 = (uVar9 >> 3) + 2;
              uVar10 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar20 + (ulong)(uVar12 >> 0x10) * 8) +
                                       ((ulong)uVar12 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar20 + (ulong)(uVar10 >> 0x10) * 8) +
                                                ((ulong)uVar10 & 0xffff)),
                                               *(undefined *)(lVar13 + uVar19)));
            }
            uVar9 = uVar10 >> (ulong)(uVar9 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) &
                    0xffff;
            uVar10 = uVar9 & uVar4;
            uVar12 = param_6 - 1;
            if (uVar10 <= param_6 - 1) {
              uVar12 = uVar10;
            }
            plVar22 = (long *)(param_7 + (ulong)uVar12 * 0x18);
            lVar13 = *plVar22;
            uVar19 = (plVar22[1] - lVar13 >> 3) * 0x684bda13;
            local_80 = uVar8;
            uStack_7c = uVar7;
            local_78 = uVar9;
            if ((int)uVar19 != 0) {
              lVar20 = 0;
              while( true ) {
                this_00 = (TypedModuleWithMasks *)(lVar13 + lVar20);
                bVar3 = checkTypedModuleMasks<ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this_00,param_1,uVar10,uVar9,(HelperSource *)&local_c0,param_3,
                                   uVar5,uVar8 << (ulong)(local_108 & 0x1f),
                                   uVar7 << (ulong)(local_10c & 0x1f),uVar17,uVar6);
                if (bVar3) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this_00,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
                }
                if ((uVar19 & 0xffffffff) * 0xd8 + -0xd8 == lVar20) break;
                lVar13 = *plVar22;
                lVar20 = lVar20 + 0xd8;
              }
              if (uVar9 != local_78) {
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
  else {
    uVar17 = 0;
    if (uVar8 != 0) {
      uVar17 = uVar6 / uVar8;
    }
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar7 / uVar9;
    }
    uVar24 = NEON_cnt((ulong)uVar17,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar3 = (uVar17 & 0xffff0000) != 0;
      uVar7 = uVar17 >> 0x10;
      if (!bVar3) {
        uVar7 = uVar17;
      }
      uVar17 = (uint)bVar3;
      uVar8 = uVar17 << 4 | 8;
      uVar9 = uVar7 >> 8;
      if (uVar7 < 0x100) {
        uVar8 = uVar17 << 4;
        uVar9 = uVar7;
      }
      uVar7 = uVar8 | 4;
      uVar17 = uVar9 >> 4;
      if (uVar9 < 0x10) {
        uVar7 = uVar8;
        uVar17 = uVar9;
      }
      uVar8 = uVar7 | 2;
      uVar9 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar8 = uVar7;
        uVar9 = uVar17;
      }
      local_104 = (uVar9 + uVar8) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar24 = NEON_cnt((ulong)uVar6,1);
    uVar23 = NEON_uaddlv(uVar24,1);
    if ((int)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) == 1) {
      bVar3 = (uVar6 & 0xffff0000) != 0;
      uVar7 = uVar6 >> 0x10;
      if (!bVar3) {
        uVar7 = uVar6;
      }
      uVar9 = (uint)bVar3;
      uVar6 = uVar9 << 4 | 8;
      uVar8 = uVar7 >> 8;
      if (uVar7 < 0x100) {
        uVar6 = uVar9 << 4;
        uVar8 = uVar7;
      }
      uVar7 = uVar6 | 4;
      uVar9 = uVar8 >> 4;
      if (uVar8 < 0x10) {
        uVar7 = uVar6;
        uVar9 = uVar8;
      }
      uVar6 = uVar7 | 2;
      uVar8 = uVar9 >> 2;
      if (uVar9 < 4) {
        uVar6 = uVar7;
        uVar8 = uVar9;
      }
      local_108 = (uVar8 + uVar6) - 1;
    }
    else {
      local_108 = 0;
    }
    uVar6 = *(uint *)(param_5 + 0x48);
    if (uVar6 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar6);
        uVar7 = *(uint *)(param_5 + 0x58);
        if (uVar7 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar20 = *local_88;
            uVar8 = (uVar7 + local_98 * uVar6) * local_90;
            lVar13 = *(long *)(lVar20 + (ulong)(uVar8 >> 0x13) * 8);
            uVar19 = (ulong)(uVar8 >> 3) & 0xffff;
            if ((uint)uVar19 < 0xfffd) {
              uVar9 = *(uint *)(lVar13 + uVar19);
            }
            else {
              uVar9 = (uVar8 >> 3) + 1;
              uVar17 = (uVar8 >> 3) + 2;
              uVar9 = (uint)CONCAT12(*(undefined *)
                                      (*(long *)(lVar20 + (ulong)(uVar17 >> 0x10) * 8) +
                                      ((ulong)uVar17 & 0xffff)),
                                     CONCAT11(*(undefined *)
                                               (*(long *)(lVar20 + (ulong)(uVar9 >> 0x10) * 8) +
                                               ((ulong)uVar9 & 0xffff)),
                                              *(undefined *)(lVar13 + uVar19)));
            }
            uVar8 = uVar9 >> (ulong)(uVar8 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) &
                    0xffff;
            uVar9 = uVar8 & uVar4;
            uVar17 = param_6 - 1;
            if (uVar9 <= param_6 - 1) {
              uVar17 = uVar9;
            }
            plVar22 = (long *)(param_7 + (ulong)uVar17 * 0x18);
            uVar19 = (plVar22[1] - *plVar22 >> 3) * 0x684bda13;
            local_80 = uVar7;
            uStack_7c = uVar6;
            local_78 = uVar8;
            if ((int)uVar19 != 0) {
              local_a8 = uVar7 >> (ulong)(local_104 & 0x1f);
              uStack_a4 = uVar6 >> (ulong)(local_108 & 0x1f);
              uVar10 = (**(code **)(*(long *)param_4 + 0x58))();
              lVar13 = 0;
              uVar17 = uVar10 & uVar5;
              local_a0 = uVar10;
              do {
                lVar20 = *plVar22;
                this = (SetOrAddDensityProcessor<BitVector,false> *)(lVar20 + lVar13);
                if (*(IDensityPixelSource **)(this + 0x78) == (IDensityPixelSource *)0x0) {
LAB_0083eaac:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            (this,(HelperSource *)&local_98);
                }
                else {
                  iVar11 = *(int *)(this + 0x80);
                  if (*(IDensityPixelSource **)(this + 0x78) == param_1) {
                    if ((iVar11 == 2) ||
                       ((iVar11 == 0) != (*(uint *)(lVar20 + lVar13 + 0x84) != uVar9))) {
                      lVar15 = lVar20 + lVar13;
                      uVar18 = *(uint *)(lVar15 + 0x8c);
                      iVar11 = *(int *)(lVar15 + 0x90);
                      uVar12 = uVar8 >> (ulong)(*(uint *)(lVar15 + 0x88) & 0x1f);
                      goto LAB_0083e98c;
                    }
                  }
                  else if ((iVar11 == 2) ||
                          ((iVar11 == 0) != (*(uint *)(lVar20 + lVar13 + 0x84) != uVar17))) {
                    lVar15 = lVar20 + lVar13;
                    uVar18 = *(uint *)(lVar15 + 0x8c);
                    iVar11 = *(int *)(lVar15 + 0x90);
                    uVar12 = uVar10 >> (ulong)(*(uint *)(lVar15 + 0x88) & 0x1f);
LAB_0083e98c:
                    lVar15 = lVar20 + lVar13;
                    uVar12 = uVar12 & (-1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar12 < iVar11) {
                      cVar1 = *(char *)(lVar15 + 0x98);
joined_r0x0083e9b8:
                      if (cVar1 == '\0') goto LAB_0083e8dc;
                    }
                    else {
                      cVar1 = *(char *)(lVar15 + 0x98);
                      if (*(int *)(lVar15 + 0x94) < (int)uVar12) goto joined_r0x0083e9b8;
                      if (cVar1 != '\0') goto LAB_0083e8dc;
                    }
                    uVar18 = *(uint *)(lVar20 + lVar13 + 0x9c);
                    if ((uVar18 == 0) || ((uVar18 & uVar12) != 0)) {
                      pIVar14 = *(IDensityPixelSource **)(lVar20 + lVar13 + 0xa8);
                      if (pIVar14 == (IDensityPixelSource *)0x0) goto LAB_0083eaac;
                      iVar11 = *(int *)(lVar20 + lVar13 + 0xb0);
                      if (pIVar14 == param_1) {
                        if ((iVar11 == 2) ||
                           ((iVar11 == 0) != (*(uint *)(lVar20 + lVar13 + 0xb4) != uVar9))) {
                          lVar15 = lVar20 + lVar13;
                          uVar18 = *(uint *)(lVar15 + 0xbc);
                          iVar11 = *(int *)(lVar15 + 0xc0);
                          uVar12 = uVar8 >> (ulong)(*(uint *)(lVar15 + 0xb8) & 0x1f);
                          goto LAB_0083ea60;
                        }
                      }
                      else if ((iVar11 == 2) ||
                              ((iVar11 == 0) != (*(uint *)(lVar20 + lVar13 + 0xb4) != uVar17))) {
                        lVar15 = lVar20 + lVar13;
                        uVar18 = *(uint *)(lVar15 + 0xbc);
                        iVar11 = *(int *)(lVar15 + 0xc0);
                        uVar12 = uVar10 >> (ulong)(*(uint *)(lVar15 + 0xb8) & 0x1f);
LAB_0083ea60:
                        lVar15 = lVar20 + lVar13;
                        uVar12 = uVar12 & (-1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar12 < iVar11) {
                          cVar1 = *(char *)(lVar15 + 200);
joined_r0x0083ea8c:
                          if (cVar1 == '\0') goto LAB_0083e8dc;
                        }
                        else {
                          cVar1 = *(char *)(lVar15 + 200);
                          if (*(int *)(lVar15 + 0xc4) < (int)uVar12) goto joined_r0x0083ea8c;
                          if (cVar1 != '\0') goto LAB_0083e8dc;
                        }
                        uVar18 = *(uint *)(lVar20 + lVar13 + 0xcc);
                        if ((uVar18 == 0) || ((uVar18 & uVar12) != 0)) goto LAB_0083eaac;
                      }
                    }
                  }
LAB_0083e8dc:
                  *(int *)(lVar20 + lVar13 + 4) = *(int *)(lVar20 + lVar13 + 4) + 1;
                }
                lVar13 = lVar13 + 0xd8;
              } while ((uVar19 & 0xffffffff) * 0xd8 - lVar13 != 0);
              if (uVar8 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_5 + 0x5c));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_5 + 0x4c));
    }
  }
  if (param_6 != 0) {
    uVar19 = 0;
    do {
      plVar22 = (long *)(param_7 + uVar19 * 0x18);
      lVar13 = *plVar22;
      lVar20 = plVar22[1];
      if (lVar20 != lVar13) {
        uVar21 = 0;
        do {
          if (*(char *)(lVar13 + uVar21 * 0xd8 + 0x6c) != '\0') {
            lVar13 = lVar13 + uVar21 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar13 + 0x58),*(uint *)(param_5 + 0x50),
                       *(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x54),*(uint *)(param_5 + 0x4c)
                       ,*(uint *)(lVar13 + 0x24),*(uint *)(lVar13 + 0x28),*(uint *)(lVar13 + 0x70),
                       *(bool *)(lVar13 + 0x6d),true,true);
            lVar20 = plVar22[1];
            lVar13 = *plVar22;
          }
          uVar21 = (ulong)((int)uVar21 + 1);
          uVar16 = (lVar20 - lVar13 >> 3) * -0x7b425ed097b425ed;
        } while (uVar21 <= uVar16 && uVar16 - uVar21 != 0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != param_6);
  }
  bVar3 = true;
LAB_0083ee2c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


