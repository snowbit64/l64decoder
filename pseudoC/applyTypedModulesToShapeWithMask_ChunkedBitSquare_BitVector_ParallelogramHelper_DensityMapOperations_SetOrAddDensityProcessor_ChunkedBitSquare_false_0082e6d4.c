// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 0082e6d4
// Size: 3208 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, BitVector * param_4, ParallelogramHelper * param_5, uint param_6, TypedModules * param_7)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask<ChunkedBitSquare, BitVector,
   ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(IDensityPixelSource*, ChunkedBitSquare*, IDensityPixelSource const*, BitVector*,
   ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask<ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,uint param_6,TypedModules *param_7)

{
  uint *puVar1;
  uint uVar2;
  TypedModuleWithMasks *this;
  char cVar3;
  long lVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  code **ppcVar17;
  Logger *this_00;
  long lVar18;
  IDensityPixelSource *pIVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  uint *puVar26;
  ulong uVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  long *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar7 = (**(code **)(*(long *)param_1 + 0x28))();
  uVar7 = ~(-1 << (ulong)(uVar7 & 0x1f));
  uVar8 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  uVar8 = ~(-1 << (ulong)(uVar8 & 0x1f));
  uVar9 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_98 = uVar9;
  uVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar10;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  local_88 = (uint *)param_2;
  uVar11 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar11;
  uVar12 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar12;
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = (long *)param_4;
  if ((uVar9 < uVar11) || (uVar10 < uVar12)) {
    if ((uVar11 < uVar9) || (uVar12 < uVar10)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar16 != 0
         )) {
                    /* try { // try from 0082f318 to 0082f31f has its CatchHandler @ 0082f36c */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0082f324 to 0082f327 has its CatchHandler @ 0082f35c */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_98,(ulong)local_94);
      bVar6 = false;
      goto LAB_0082f2d4;
    }
    uVar21 = 0;
    if (uVar9 != 0) {
      uVar21 = uVar11 / uVar9;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar12 / uVar10;
    }
    uVar29 = NEON_cnt((ulong)uVar21,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar6 = (uVar21 & 0xffff0000) != 0;
      uVar10 = uVar21 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar21;
      }
      uVar13 = (uint)bVar6;
      uVar11 = uVar13 << 4 | 8;
      uVar12 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar11 = uVar13 << 4;
        uVar12 = uVar10;
      }
      uVar10 = uVar11 | 4;
      uVar13 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar10 = uVar11;
        uVar13 = uVar12;
      }
      uVar11 = uVar10 | 2;
      uVar12 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar11 = uVar10;
        uVar12 = uVar13;
      }
      local_104 = (uVar12 + uVar11) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar29 = NEON_cnt((ulong)uVar9,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar6 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar9;
      }
      uVar13 = (uint)bVar6;
      uVar11 = uVar13 << 4 | 8;
      uVar12 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar11 = uVar13 << 4;
        uVar12 = uVar10;
      }
      uVar10 = uVar11 | 4;
      uVar13 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar10 = uVar11;
        uVar13 = uVar12;
      }
      uVar11 = uVar10 | 2;
      uVar12 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar11 = uVar10;
        uVar12 = uVar13;
      }
      local_108 = (uVar12 + uVar11) - 1;
    }
    else {
      local_108 = 0;
    }
    uVar10 = *(uint *)(param_5 + 0x48);
    if (uVar10 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar10);
        uVar11 = *(uint *)(param_5 + 0x58);
        if (uVar11 < *(uint *)(param_5 + 0x5c)) {
          do {
            puVar5 = local_88;
            uVar12 = local_88[0xd];
            iVar16 = ((uVar10 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar11 >> 5);
            ppcVar17 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar16 * uVar12) * 8);
            uVar13 = uVar11 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar11;
            uStack_7c = uVar10;
            uVar15 = (**ppcVar17)(ppcVar17,uVar13,0,local_88[0xf]);
            if (1 < puVar5[0xd]) {
              puVar26 = puVar5 + 0x11;
              uVar27 = 1;
              do {
                ppcVar17 = *(code ***)
                            (*(long *)(puVar5 + 10) + (ulong)(uVar12 * iVar16 + (int)uVar27) * 8);
                iVar14 = (**ppcVar17)(ppcVar17,uVar13,0,*puVar26);
                puVar1 = puVar26 + -1;
                uVar27 = uVar27 + 1;
                puVar26 = puVar26 + 2;
                uVar15 = iVar14 << (ulong)(*puVar1 & 0x1f) | uVar15;
              } while (uVar27 < puVar5[0xd]);
            }
            uVar12 = uVar15 & uVar7;
            uVar13 = param_6 - 1;
            if (uVar12 <= param_6 - 1) {
              uVar13 = uVar12;
            }
            plVar25 = (long *)(param_7 + (ulong)uVar13 * 0x18);
            lVar18 = *plVar25;
            uVar27 = (plVar25[1] - lVar18 >> 3) * 0x684bda13;
            local_78 = uVar15;
            if ((int)uVar27 != 0) {
              lVar22 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar18 + lVar22);
                bVar6 = checkTypedModuleMasks<BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                                  (this,param_1,uVar12,uVar15,(HelperSource *)&local_c0,param_3,
                                   uVar8,uVar11 << (ulong)(local_104 & 0x1f),
                                   uVar10 << (ulong)(local_108 & 0x1f),uVar21,uVar9);
                if (bVar6) {
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar27 & 0xffffffff) * 0xd8 + -0xd8 == lVar22) break;
                lVar18 = *plVar25;
                lVar22 = lVar22 + 0xd8;
              }
            }
            uVar12 = local_78;
            puVar5 = local_88;
            if (uVar15 != local_78) {
              uVar13 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar15 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar22 = (ulong)uVar15 * 8;
              lVar18 = *(long *)(*(long *)(local_88 + 10) + lVar22);
              uVar29 = (**(code **)(lVar18 + 8))(lVar18,uVar13,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar5 + 10) + lVar22) = uVar29;
              if (1 < puVar5[0xd]) {
                puVar26 = puVar5 + 0x11;
                uVar27 = 1;
                do {
                  lVar22 = (ulong)(uVar15 + (int)uVar27) * 8;
                  lVar18 = *(long *)(*(long *)(puVar5 + 10) + lVar22);
                  uVar29 = (**(code **)(lVar18 + 8))
                                     (lVar18,uVar13,0,*puVar26,uVar12 >> (ulong)(puVar26[-1] & 0x1f)
                                     );
                  uVar27 = uVar27 + 1;
                  puVar26 = puVar26 + 2;
                  *(undefined8 *)(*(long *)(puVar5 + 10) + lVar22) = uVar29;
                } while (uVar27 < puVar5[0xd]);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(param_5 + 0x5c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar21 = 0;
    if (uVar11 != 0) {
      uVar21 = uVar9 / uVar11;
    }
    uVar9 = 0;
    if (uVar12 != 0) {
      uVar9 = uVar10 / uVar12;
    }
    uVar29 = NEON_cnt((ulong)uVar21,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar6 = (uVar21 & 0xffff0000) != 0;
      uVar10 = uVar21 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar21;
      }
      uVar21 = (uint)bVar6;
      uVar11 = uVar21 << 4 | 8;
      uVar12 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar11 = uVar21 << 4;
        uVar12 = uVar10;
      }
      uVar10 = uVar11 | 4;
      uVar21 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar10 = uVar11;
        uVar21 = uVar12;
      }
      uVar11 = uVar10 | 2;
      uVar12 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar11 = uVar10;
        uVar12 = uVar21;
      }
      local_100 = (uVar12 + uVar11) - 1;
    }
    else {
      local_100 = 0;
    }
    uVar29 = NEON_cnt((ulong)uVar9,1);
    uVar28 = NEON_uaddlv(uVar29,1);
    if ((int)CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) == 1) {
      bVar6 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar9;
      }
      uVar12 = (uint)bVar6;
      uVar9 = uVar12 << 4 | 8;
      uVar11 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar9 = uVar12 << 4;
        uVar11 = uVar10;
      }
      uVar10 = uVar9 | 4;
      uVar12 = uVar11 >> 4;
      if (uVar11 < 0x10) {
        uVar10 = uVar9;
        uVar12 = uVar11;
      }
      uVar9 = uVar10 | 2;
      uVar11 = uVar12 >> 2;
      if (uVar12 < 4) {
        uVar9 = uVar10;
        uVar11 = uVar12;
      }
      local_104 = (uVar11 + uVar9) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar9 = *(uint *)(param_5 + 0x48);
    if (uVar9 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar9);
        uVar10 = *(uint *)(param_5 + 0x58);
        if (uVar10 < *(uint *)(param_5 + 0x5c)) {
          uVar11 = uVar9 >> (ulong)(local_104 & 0x1f);
LAB_0082ea54:
          puVar5 = local_88;
          uVar12 = local_88[0xd];
          iVar16 = ((uVar9 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar10 >> 5);
          ppcVar17 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar16 * uVar12) * 8);
          uVar21 = uVar10 & 0x1f | (uVar9 & 0x1f) << 5;
          local_80 = uVar10;
          uStack_7c = uVar9;
          uVar13 = (**ppcVar17)(ppcVar17,uVar21,0,local_88[0xf]);
          if (1 < puVar5[0xd]) {
            puVar26 = puVar5 + 0x11;
            uVar27 = 1;
            do {
              ppcVar17 = *(code ***)
                          (*(long *)(puVar5 + 10) + (ulong)(uVar12 * iVar16 + (int)uVar27) * 8);
              iVar14 = (**ppcVar17)(ppcVar17,uVar21,0,*puVar26);
              puVar1 = puVar26 + -1;
              uVar27 = uVar27 + 1;
              puVar26 = puVar26 + 2;
              uVar13 = iVar14 << (ulong)(*puVar1 & 0x1f) | uVar13;
            } while (uVar27 < puVar5[0xd]);
          }
          uVar12 = uVar13 & uVar7;
          uVar21 = param_6 - 1;
          if (uVar12 <= param_6 - 1) {
            uVar21 = uVar12;
          }
          plVar25 = (long *)(param_7 + (ulong)uVar21 * 0x18);
          lVar18 = *plVar25;
          uVar27 = (plVar25[1] - lVar18 >> 3) * 0x684bda13;
          local_78 = uVar13;
          if ((int)uVar27 != 0) {
            local_a8 = uVar10 >> (ulong)(local_100 & 0x1f);
            uVar21 = (local_a8 + local_c0 * uVar11) * local_b8;
            lVar24 = *local_b0;
            uVar23 = (ulong)(uVar21 >> 3) & 0xffff;
            lVar22 = *(long *)(lVar24 + (ulong)(uVar21 >> 0x13) * 8);
            if ((uint)uVar23 < 0xfffd) {
              uVar15 = *(uint *)(lVar22 + uVar23);
            }
            else {
              uVar15 = (uVar21 >> 3) + 1;
              uVar2 = (uVar21 >> 3) + 2;
              uVar15 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar24 + (ulong)(uVar2 >> 0x10) * 8) +
                                       ((ulong)uVar2 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar24 + (ulong)(uVar15 >> 0x10) * 8) +
                                                ((ulong)uVar15 & 0xffff)),
                                               *(undefined *)(lVar22 + uVar23)));
            }
            uVar27 = uVar27 & 0xffffffff;
            lVar22 = 0xcc;
            local_a0 = uVar15 >> (ulong)(uVar21 & 7) &
                       (-1 << (ulong)(local_b8 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uStack_a4 = uVar11;
            do {
              uVar27 = uVar27 - 1;
              pIVar19 = *(IDensityPixelSource **)(lVar18 + lVar22 + -0x54);
              if (pIVar19 == (IDensityPixelSource *)0x0) {
LAB_0082edec:
                DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                          ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)
                           (lVar18 + lVar22 + -0xcc),(HelperSource *)&local_98);
                puVar5 = local_88;
                uVar21 = local_78;
              }
              else {
                if (pIVar19 == param_1) {
                  lVar24 = lVar18 + lVar22;
                  if ((*(int *)(lVar24 + -0x4c) == 2) ||
                     ((*(int *)(lVar24 + -0x4c) == 0) != (*(uint *)(lVar24 + -0x48) != uVar12))) {
                    uVar21 = uVar13 >> (ulong)(*(uint *)(lVar24 + -0x44) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar24 + -0x40) & 0x1f) ^ 0xffffffffU);
                    if (*(int *)(lVar24 + -0x3c) <= (int)uVar21) goto LAB_0082ecd4;
LAB_0082ec7c:
                    cVar3 = *(char *)(lVar18 + lVar22 + -0x34);
                    goto joined_r0x0082ebec;
                  }
                }
                else {
                  lVar24 = lVar18 + lVar22;
                  if ((*(int *)(lVar24 + -0x4c) == 2) ||
                     ((*(int *)(lVar24 + -0x4c) == 0) !=
                      (*(uint *)(lVar24 + -0x48) != (local_a0 & uVar8)))) {
                    uVar21 = local_a0 >> (ulong)(*(uint *)(lVar24 + -0x44) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar24 + -0x40) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar21 < *(int *)(lVar24 + -0x3c)) goto LAB_0082ec7c;
LAB_0082ecd4:
                    cVar3 = *(char *)(lVar18 + lVar22 + -0x34);
joined_r0x0082ebec:
                    if ((cVar3 == '\0') &&
                       ((uVar15 = *(uint *)(lVar18 + lVar22 + -0x30), uVar15 == 0 ||
                        ((uVar15 & uVar21) != 0)))) {
                      pIVar19 = *(IDensityPixelSource **)(lVar18 + lVar22 + -0x24);
                      if (pIVar19 == (IDensityPixelSource *)0x0) goto LAB_0082edec;
                      if (pIVar19 == param_1) {
                        lVar24 = lVar18 + lVar22;
                        if ((*(int *)(lVar24 + -0x1c) == 2) ||
                           ((*(int *)(lVar24 + -0x1c) == 0) != (*(uint *)(lVar24 + -0x18) != uVar12)
                           )) {
                          uVar21 = uVar13 >> (ulong)(*(uint *)(lVar24 + -0x14) & 0x1f) &
                                   (-1 << (ulong)(*(uint *)(lVar24 + -0x10) & 0x1f) ^ 0xffffffffU);
                          if (*(int *)(lVar24 + -0xc) <= (int)uVar21) goto LAB_0082edc0;
LAB_0082ed68:
                          cVar3 = *(char *)(lVar18 + lVar22 + -4);
                          goto joined_r0x0082edd0;
                        }
                      }
                      else {
                        lVar24 = lVar18 + lVar22;
                        if ((*(int *)(lVar24 + -0x1c) == 2) ||
                           ((*(int *)(lVar24 + -0x1c) == 0) !=
                            (*(uint *)(lVar24 + -0x18) != (local_a0 & uVar8)))) {
                          uVar21 = local_a0 >> (ulong)(*(uint *)(lVar24 + -0x14) & 0x1f) &
                                   (-1 << (ulong)(*(uint *)(lVar24 + -0x10) & 0x1f) ^ 0xffffffffU);
                          if ((int)uVar21 < *(int *)(lVar24 + -0xc)) goto LAB_0082ed68;
LAB_0082edc0:
                          cVar3 = *(char *)(lVar18 + lVar22 + -4);
joined_r0x0082edd0:
                          if ((cVar3 != '\0') &&
                             ((*(uint *)(lVar18 + lVar22) == 0 ||
                              ((*(uint *)(lVar18 + lVar22) & uVar21) != 0)))) goto LAB_0082edec;
                        }
                      }
                    }
                  }
                }
                *(int *)(lVar18 + lVar22 + -200) = *(int *)(lVar18 + lVar22 + -200) + 1;
                puVar5 = local_88;
                uVar21 = local_78;
              }
              local_88 = puVar5;
              local_78 = uVar21;
              if (uVar27 == 0) goto LAB_0082edfc;
              lVar18 = *plVar25;
              lVar22 = lVar22 + 0xd8;
            } while( true );
          }
          goto LAB_0082ea40;
        }
LAB_0082e9f4:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_5 + 0x4c));
    }
  }
  if (param_6 != 0) {
    uVar27 = 0;
    do {
      plVar25 = (long *)(param_7 + uVar27 * 0x18);
      lVar18 = *plVar25;
      lVar22 = plVar25[1];
      if (lVar22 != lVar18) {
        uVar23 = 0;
        do {
          if (*(char *)(lVar18 + uVar23 * 0xd8 + 0x6c) != '\0') {
            lVar18 = lVar18 + uVar23 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar18 + 0x58),*(uint *)(param_5 + 0x50),
                       *(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x54),*(uint *)(param_5 + 0x4c)
                       ,*(uint *)(lVar18 + 0x24),*(uint *)(lVar18 + 0x28),*(uint *)(lVar18 + 0x70),
                       *(bool *)(lVar18 + 0x6d),true,true);
            lVar22 = plVar25[1];
            lVar18 = *plVar25;
          }
          uVar23 = (ulong)((int)uVar23 + 1);
          uVar20 = (lVar22 - lVar18 >> 3) * -0x7b425ed097b425ed;
        } while (uVar23 <= uVar20 && uVar20 - uVar23 != 0);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != param_6);
  }
  bVar6 = true;
LAB_0082f2d4:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0082edfc:
  if (uVar13 != uVar21) {
    uVar12 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
    uVar13 = (((uStack_7c >> 5) << (ulong)(*puVar5 & 0x1f)) + (local_80 >> 5)) * puVar5[0xd];
    lVar22 = (ulong)uVar13 * 8;
    lVar18 = *(long *)(*(long *)(puVar5 + 10) + lVar22);
    uVar29 = (**(code **)(lVar18 + 8))(lVar18,uVar12,0,puVar5[0xf],uVar21);
    *(undefined8 *)(*(long *)(puVar5 + 10) + lVar22) = uVar29;
    if (1 < puVar5[0xd]) {
      puVar26 = puVar5 + 0x11;
      uVar27 = 1;
      do {
        lVar22 = (ulong)(uVar13 + (int)uVar27) * 8;
        lVar18 = *(long *)(*(long *)(puVar5 + 10) + lVar22);
        uVar29 = (**(code **)(lVar18 + 8))
                           (lVar18,uVar12,0,*puVar26,uVar21 >> (ulong)(puVar26[-1] & 0x1f));
        uVar27 = uVar27 + 1;
        puVar26 = puVar26 + 2;
        *(undefined8 *)(*(long *)(puVar5 + 10) + lVar22) = uVar29;
      } while (uVar27 < puVar5[0xd]);
    }
  }
LAB_0082ea40:
  uVar10 = uVar10 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar10) goto LAB_0082e9f4;
  goto LAB_0082ea54;
}


