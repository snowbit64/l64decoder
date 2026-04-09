// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083d928
// Size: 2816 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, BitVector * param_4, ParallelogramHelper * param_5, uint param_6, TypedModules * param_7)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask<BitVector, BitVector,
   ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(IDensityPixelSource*, BitVector*, IDensityPixelSource const*, BitVector*, ParallelogramHelper&,
   unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,uint param_6,TypedModules *param_7)

{
  uint uVar1;
  TypedModuleWithMasks *this;
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
  Logger *this_00;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  IDensityPixelSource *pIVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  undefined2 uVar27;
  undefined8 uVar28;
  uint local_118;
  uint local_104;
  uint local_f4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  BitVector *local_b0;
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
  uVar11 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b8 = uVar11;
  local_b0 = param_4;
  if ((uVar7 < uVar9) || (uVar8 < uVar10)) {
    if ((uVar9 < uVar7) || (uVar10 < uVar8)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar12 != 0
         )) {
                    /* try { // try from 0083e3e4 to 0083e3eb has its CatchHandler @ 0083e438 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0083e3f0 to 0083e3f3 has its CatchHandler @ 0083e428 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_98,(ulong)local_94);
      bVar4 = false;
      goto LAB_0083e3a0;
    }
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar10 / uVar8;
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = uVar9 / uVar7;
    }
    uVar28 = NEON_cnt((ulong)uVar8,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar8 & 0xffff0000) != 0;
      uVar7 = uVar8 >> 0x10;
      if (!bVar4) {
        uVar7 = uVar8;
      }
      uVar13 = (uint)bVar4;
      uVar9 = uVar13 << 4 | 8;
      uVar10 = uVar7 >> 8;
      if (uVar7 < 0x100) {
        uVar9 = uVar13 << 4;
        uVar10 = uVar7;
      }
      uVar7 = uVar9 | 4;
      uVar13 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar7 = uVar9;
        uVar13 = uVar10;
      }
      uVar9 = uVar7 | 2;
      uVar10 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar9 = uVar7;
        uVar10 = uVar13;
      }
      local_f4 = (uVar10 + uVar9) - 1;
    }
    else {
      local_f4 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar11,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar11 & 0xffff0000) != 0;
      uVar7 = uVar11 >> 0x10;
      if (!bVar4) {
        uVar7 = uVar11;
      }
      uVar13 = (uint)bVar4;
      uVar9 = uVar13 << 4 | 8;
      uVar10 = uVar7 >> 8;
      if (uVar7 < 0x100) {
        uVar9 = uVar13 << 4;
        uVar10 = uVar7;
      }
      uVar7 = uVar9 | 4;
      uVar13 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar7 = uVar9;
        uVar13 = uVar10;
      }
      uVar9 = uVar7 | 2;
      uVar10 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar9 = uVar7;
        uVar10 = uVar13;
      }
      uVar7 = (uVar10 + uVar9) - 1;
    }
    else {
      uVar7 = 0;
    }
    uVar9 = *(uint *)(param_5 + 0x48);
    if (uVar9 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar9);
        uVar10 = *(uint *)(param_5 + 0x58);
        if (uVar10 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar23 = *local_88;
            uVar13 = (uVar10 + local_98 * uVar9) * local_90;
            lVar15 = *(long *)(lVar23 + (ulong)(uVar13 >> 0x13) * 8);
            uVar19 = (ulong)(uVar13 >> 3) & 0xffff;
            if ((uint)uVar19 < 0xfffd) {
              uVar17 = *(uint *)(lVar15 + uVar19);
            }
            else {
              uVar17 = (uVar13 >> 3) + 1;
              uVar1 = (uVar13 >> 3) + 2;
              uVar17 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar23 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar23 + (ulong)(uVar17 >> 0x10) * 8) +
                                                ((ulong)uVar17 & 0xffff)),
                                               *(undefined *)(lVar15 + uVar19)));
            }
            uVar13 = uVar17 >> (ulong)(uVar13 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar17 = uVar13 & uVar5;
            uVar1 = param_6 - 1;
            if (uVar17 <= param_6 - 1) {
              uVar1 = uVar17;
            }
            plVar26 = (long *)(param_7 + (ulong)uVar1 * 0x18);
            lVar15 = *plVar26;
            uVar19 = (plVar26[1] - lVar15 >> 3) * 0x684bda13;
            local_80 = uVar10;
            uStack_7c = uVar9;
            local_78 = uVar13;
            if ((int)uVar19 != 0) {
              lVar23 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar15 + lVar23);
                bVar4 = checkTypedModuleMasks<BitVector,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar17,uVar13,(HelperSource *)&local_c0,param_3,
                                   uVar6,uVar10 << (ulong)(local_f4 & 0x1f),
                                   uVar9 << (ulong)(uVar7 & 0x1f),uVar8,uVar11);
                if (bVar4) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar19 & 0xffffffff) * 0xd8 + -0xd8 == lVar23) break;
                lVar15 = *plVar26;
                lVar23 = lVar23 + 0xd8;
              }
              if (uVar13 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_5 + 0x5c));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar7 / uVar9;
    }
    uVar7 = 0;
    if (uVar10 != 0) {
      uVar7 = uVar8 / uVar10;
    }
    uVar28 = NEON_cnt((ulong)uVar13,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar13 & 0xffff0000) != 0;
      uVar8 = uVar13 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar13;
      }
      uVar17 = (uint)bVar4;
      uVar10 = uVar17 << 4 | 8;
      uVar13 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar10 = uVar17 << 4;
        uVar13 = uVar8;
      }
      uVar8 = uVar10 | 4;
      uVar17 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar8 = uVar10;
        uVar17 = uVar13;
      }
      uVar10 = uVar8 | 2;
      uVar13 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar10 = uVar8;
        uVar13 = uVar17;
      }
      local_104 = (uVar13 + uVar10) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar7,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar4 = (uVar7 & 0xffff0000) != 0;
      uVar8 = uVar7 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar7;
      }
      uVar13 = (uint)bVar4;
      uVar7 = uVar13 << 4 | 8;
      uVar10 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar7 = uVar13 << 4;
        uVar10 = uVar8;
      }
      uVar8 = uVar7 | 4;
      uVar13 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar8 = uVar7;
        uVar13 = uVar10;
      }
      uVar7 = uVar8 | 2;
      uVar10 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar7 = uVar8;
        uVar10 = uVar13;
      }
      local_118 = (uVar10 + uVar7) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar7 = *(uint *)(param_5 + 0x48);
    if (uVar7 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar7);
        uVar8 = *(uint *)(param_5 + 0x58);
        if (uVar8 < *(uint *)(param_5 + 0x5c)) {
          uVar10 = uVar7 >> (ulong)(local_118 & 0x1f);
LAB_0083dcd4:
          lVar23 = *local_88;
          uVar13 = (uVar8 + local_98 * uVar7) * local_90;
          lVar15 = *(long *)(lVar23 + (ulong)(uVar13 >> 0x13) * 8);
          uVar19 = (ulong)(uVar13 >> 3) & 0xffff;
          if ((uint)uVar19 < 0xfffd) {
            uVar17 = *(uint *)(lVar15 + uVar19);
          }
          else {
            uVar17 = (uVar13 >> 3) + 1;
            uVar1 = (uVar13 >> 3) + 2;
            uVar17 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar23 + (ulong)(uVar1 >> 0x10) * 8) +
                                     ((ulong)uVar1 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar23 + (ulong)(uVar17 >> 0x10) * 8) +
                                              ((ulong)uVar17 & 0xffff)),
                                             *(undefined *)(lVar15 + uVar19)));
          }
          uVar13 = uVar17 >> (ulong)(uVar13 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) &
                   0xffff;
          uVar17 = uVar13 & uVar5;
          uVar1 = param_6 - 1;
          if (uVar17 <= param_6 - 1) {
            uVar1 = uVar17;
          }
          plVar26 = (long *)(param_7 + (ulong)uVar1 * 0x18);
          lVar15 = *plVar26;
          uVar19 = (plVar26[1] - lVar15 >> 3) * 0x684bda13;
          local_80 = uVar8;
          uStack_7c = uVar7;
          local_78 = uVar13;
          if ((int)uVar19 != 0) {
            local_a8 = uVar8 >> (ulong)(local_104 & 0x1f);
            lVar25 = *(long *)param_4;
            uVar1 = (uVar9 * uVar10 + local_a8) * uVar11;
            lVar23 = *(long *)(lVar25 + (ulong)(uVar1 >> 0x13) * 8);
            uVar24 = (ulong)(uVar1 >> 3) & 0xffff;
            if ((uint)uVar24 < 0xfffd) {
              uVar18 = *(uint *)(lVar23 + uVar24);
            }
            else {
              uVar18 = (uVar1 >> 3) + 1;
              uVar14 = (uVar1 >> 3) + 2;
              uVar18 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar25 + (ulong)(uVar14 >> 0x10) * 8) +
                                       ((ulong)uVar14 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar25 + (ulong)(uVar18 >> 0x10) * 8) +
                                                ((ulong)uVar18 & 0xffff)),
                                               *(undefined *)(lVar23 + uVar24)));
            }
            uVar19 = uVar19 & 0xffffffff;
            lVar23 = 0xcc;
            uVar1 = uVar18 >> (ulong)(uVar1 & 7) & ~(-1 << (ulong)(uVar11 & 0x1f)) & 0xffffU;
            uVar18 = uVar1 & uVar6;
            uStack_a4 = uVar10;
            local_a0 = uVar1;
            do {
              uVar19 = uVar19 - 1;
              lVar25 = lVar15 + lVar23;
              if (*(IDensityPixelSource **)(lVar25 + -0x54) == (IDensityPixelSource *)0x0) {
LAB_0083e010:
                DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                          ((SetOrAddDensityProcessor<BitVector,false> *)(lVar25 + -0xcc),
                           (HelperSource *)&local_98);
              }
              else {
                iVar12 = *(int *)(lVar25 + -0x4c);
                if (*(IDensityPixelSource **)(lVar25 + -0x54) == param_1) {
                  if ((iVar12 == 2) ||
                     ((iVar12 == 0) != (*(uint *)(lVar15 + lVar23 + -0x48) != uVar17))) {
                    lVar21 = lVar15 + lVar23;
                    uVar22 = *(uint *)(lVar21 + -0x40);
                    iVar12 = *(int *)(lVar21 + -0x3c);
                    uVar14 = uVar13 >> (ulong)(*(uint *)(lVar21 + -0x44) & 0x1f);
                    goto LAB_0083def4;
                  }
                }
                else if ((iVar12 == 2) ||
                        ((iVar12 == 0) != (*(uint *)(lVar15 + lVar23 + -0x48) != uVar18))) {
                  lVar21 = lVar15 + lVar23;
                  uVar22 = *(uint *)(lVar21 + -0x40);
                  iVar12 = *(int *)(lVar21 + -0x3c);
                  uVar14 = uVar1 >> (ulong)(*(uint *)(lVar21 + -0x44) & 0x1f);
LAB_0083def4:
                  lVar21 = lVar15 + lVar23;
                  uVar14 = uVar14 & (-1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU);
                  if ((int)uVar14 < iVar12) {
                    cVar2 = *(char *)(lVar21 + -0x34);
joined_r0x0083df20:
                    if (cVar2 == '\0') goto LAB_0083de44;
                  }
                  else {
                    cVar2 = *(char *)(lVar21 + -0x34);
                    if (*(int *)(lVar21 + -0x38) < (int)uVar14) goto joined_r0x0083df20;
                    if (cVar2 != '\0') goto LAB_0083de44;
                  }
                  uVar22 = *(uint *)(lVar15 + lVar23 + -0x30);
                  if ((uVar22 == 0) || ((uVar22 & uVar14) != 0)) {
                    pIVar20 = *(IDensityPixelSource **)(lVar15 + lVar23 + -0x24);
                    if (pIVar20 == (IDensityPixelSource *)0x0) goto LAB_0083e010;
                    iVar12 = *(int *)(lVar15 + lVar23 + -0x1c);
                    if (pIVar20 == param_1) {
                      if ((iVar12 == 2) ||
                         ((iVar12 == 0) != (*(uint *)(lVar15 + lVar23 + -0x18) != uVar17))) {
                        lVar21 = lVar15 + lVar23;
                        uVar22 = *(uint *)(lVar21 + -0x10);
                        iVar12 = *(int *)(lVar21 + -0xc);
                        uVar14 = uVar13 >> (ulong)(*(uint *)(lVar21 + -0x14) & 0x1f);
                        goto LAB_0083dfc8;
                      }
                    }
                    else if ((iVar12 == 2) ||
                            ((iVar12 == 0) != (*(uint *)(lVar15 + lVar23 + -0x18) != uVar18))) {
                      lVar21 = lVar15 + lVar23;
                      uVar22 = *(uint *)(lVar21 + -0x10);
                      iVar12 = *(int *)(lVar21 + -0xc);
                      uVar14 = uVar1 >> (ulong)(*(uint *)(lVar21 + -0x14) & 0x1f);
LAB_0083dfc8:
                      lVar21 = lVar15 + lVar23;
                      uVar14 = uVar14 & (-1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar14 < iVar12) {
                        cVar2 = *(char *)(lVar21 + -4);
joined_r0x0083dff4:
                        if (cVar2 == '\0') goto LAB_0083de44;
                      }
                      else {
                        cVar2 = *(char *)(lVar21 + -4);
                        if (*(int *)(lVar21 + -8) < (int)uVar14) goto joined_r0x0083dff4;
                        if (cVar2 != '\0') goto LAB_0083de44;
                      }
                      if ((*(uint *)(lVar15 + lVar23) == 0) ||
                         ((*(uint *)(lVar15 + lVar23) & uVar14) != 0)) goto LAB_0083e010;
                    }
                  }
                }
LAB_0083de44:
                *(int *)(lVar15 + lVar23 + -200) = *(int *)(lVar15 + lVar23 + -200) + 1;
              }
              if (uVar19 == 0) goto LAB_0083e020;
              lVar15 = *plVar26;
              lVar23 = lVar23 + 0xd8;
            } while( true );
          }
          goto LAB_0083dcc4;
        }
LAB_0083dc80:
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_5 + 0x4c));
    }
  }
  if (param_6 != 0) {
    uVar19 = 0;
    do {
      plVar26 = (long *)(param_7 + uVar19 * 0x18);
      lVar15 = *plVar26;
      lVar23 = plVar26[1];
      if (lVar23 != lVar15) {
        uVar24 = 0;
        do {
          if (*(char *)(lVar15 + uVar24 * 0xd8 + 0x6c) != '\0') {
            lVar15 = lVar15 + uVar24 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar15 + 0x58),*(uint *)(param_5 + 0x50),
                       *(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x54),*(uint *)(param_5 + 0x4c)
                       ,*(uint *)(lVar15 + 0x24),*(uint *)(lVar15 + 0x28),*(uint *)(lVar15 + 0x70),
                       *(bool *)(lVar15 + 0x6d),true,true);
            lVar23 = plVar26[1];
            lVar15 = *plVar26;
          }
          uVar24 = (ulong)((int)uVar24 + 1);
          uVar16 = (lVar23 - lVar15 >> 3) * -0x7b425ed097b425ed;
        } while (uVar24 <= uVar16 && uVar16 - uVar24 != 0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != param_6);
  }
  bVar4 = true;
LAB_0083e3a0:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
LAB_0083e020:
  if (uVar13 != local_78) {
    DensityMapAccessUtil::writeValue
              ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
  }
LAB_0083dcc4:
  uVar8 = uVar8 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar8) goto LAB_0083dc80;
  goto LAB_0083dcd4;
}


