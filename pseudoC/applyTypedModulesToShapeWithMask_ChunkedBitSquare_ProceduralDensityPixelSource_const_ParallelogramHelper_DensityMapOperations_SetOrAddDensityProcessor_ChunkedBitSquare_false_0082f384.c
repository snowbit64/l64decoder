// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 0082f384
// Size: 3104 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, uint param_6, TypedModules * param_7)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false> >(IDensityPixelSource*,
   ChunkedBitSquare*, IDensityPixelSource const*, ProceduralDensityPixelSource const*,
   ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask<ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,uint param_6,
               TypedModules *param_7)

{
  uint *puVar1;
  long lVar2;
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
  uint uVar19;
  IDensityPixelSource *pIVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  undefined2 uVar27;
  undefined8 uVar28;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
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
                    /* try { // try from 0082ff60 to 0082ff67 has its CatchHandler @ 0082ffb4 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0082ff6c to 0082ff6f has its CatchHandler @ 0082ffa4 */
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
      goto LAB_0082ff1c;
    }
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar11 / uVar9;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar12 / uVar10;
    }
    uVar28 = NEON_cnt((ulong)uVar13,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar6 = (uVar13 & 0xffff0000) != 0;
      uVar10 = uVar13 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar13;
      }
      uVar19 = (uint)bVar6;
      uVar11 = uVar19 << 4 | 8;
      uVar12 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar11 = uVar19 << 4;
        uVar12 = uVar10;
      }
      uVar10 = uVar11 | 4;
      uVar19 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar10 = uVar11;
        uVar19 = uVar12;
      }
      uVar11 = uVar10 | 2;
      uVar12 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar11 = uVar10;
        uVar12 = uVar19;
      }
      local_104 = (uVar12 + uVar11) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar9,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar6 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar9;
      }
      uVar19 = (uint)bVar6;
      uVar11 = uVar19 << 4 | 8;
      uVar12 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar11 = uVar19 << 4;
        uVar12 = uVar10;
      }
      uVar10 = uVar11 | 4;
      uVar19 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar10 = uVar11;
        uVar19 = uVar12;
      }
      uVar11 = uVar10 | 2;
      uVar12 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar11 = uVar10;
        uVar12 = uVar19;
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
            uVar19 = uVar11 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar11;
            uStack_7c = uVar10;
            uVar15 = (**ppcVar17)(ppcVar17,uVar19,0,local_88[0xf]);
            if (1 < puVar5[0xd]) {
              puVar22 = puVar5 + 0x11;
              uVar23 = 1;
              do {
                ppcVar17 = *(code ***)
                            (*(long *)(puVar5 + 10) + (ulong)(uVar12 * iVar16 + (int)uVar23) * 8);
                iVar14 = (**ppcVar17)(ppcVar17,uVar19,0,*puVar22);
                puVar1 = puVar22 + -1;
                uVar23 = uVar23 + 1;
                puVar22 = puVar22 + 2;
                uVar15 = iVar14 << (ulong)(*puVar1 & 0x1f) | uVar15;
              } while (uVar23 < puVar5[0xd]);
            }
            uVar12 = uVar15 & uVar7;
            uVar19 = param_6 - 1;
            if (uVar12 <= param_6 - 1) {
              uVar19 = uVar12;
            }
            plVar25 = (long *)(param_7 + (ulong)uVar19 * 0x18);
            lVar24 = *plVar25;
            uVar23 = (plVar25[1] - lVar24 >> 3) * 0x684bda13;
            local_78 = uVar15;
            if ((int)uVar23 != 0) {
              lVar18 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar24 + lVar18);
                bVar6 = checkTypedModuleMasks<ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                                  (this,param_1,uVar12,uVar15,(HelperSource *)&local_c0,param_3,
                                   uVar8,uVar11 << (ulong)(local_104 & 0x1f),
                                   uVar10 << (ulong)(local_108 & 0x1f),uVar13,uVar9);
                if (bVar6) {
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar23 & 0xffffffff) * 0xd8 + -0xd8 == lVar18) break;
                lVar24 = *plVar25;
                lVar18 = lVar18 + 0xd8;
              }
            }
            uVar12 = local_78;
            puVar5 = local_88;
            if (uVar15 != local_78) {
              uVar19 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar15 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar18 = (ulong)uVar15 * 8;
              lVar24 = *(long *)(*(long *)(local_88 + 10) + lVar18);
              uVar28 = (**(code **)(lVar24 + 8))(lVar24,uVar19,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar5 + 10) + lVar18) = uVar28;
              if (1 < puVar5[0xd]) {
                puVar22 = puVar5 + 0x11;
                uVar23 = 1;
                do {
                  lVar18 = (ulong)(uVar15 + (int)uVar23) * 8;
                  lVar24 = *(long *)(*(long *)(puVar5 + 10) + lVar18);
                  uVar28 = (**(code **)(lVar24 + 8))
                                     (lVar24,uVar19,0,*puVar22,uVar12 >> (ulong)(puVar22[-1] & 0x1f)
                                     );
                  uVar23 = uVar23 + 1;
                  puVar22 = puVar22 + 2;
                  *(undefined8 *)(*(long *)(puVar5 + 10) + lVar18) = uVar28;
                } while (uVar23 < puVar5[0xd]);
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
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = uVar9 / uVar11;
    }
    uVar9 = 0;
    if (uVar12 != 0) {
      uVar9 = uVar10 / uVar12;
    }
    uVar28 = NEON_cnt((ulong)uVar13,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
      bVar6 = (uVar13 & 0xffff0000) != 0;
      uVar10 = uVar13 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar13;
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
      local_100 = (uVar12 + uVar11) - 1;
    }
    else {
      local_100 = 0;
    }
    uVar28 = NEON_cnt((ulong)uVar9,1);
    uVar27 = NEON_uaddlv(uVar28,1);
    if ((int)CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar27) == 1) {
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
          do {
            puVar5 = local_88;
            uVar11 = local_88[0xd];
            iVar16 = ((uVar9 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar10 >> 5);
            ppcVar17 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar16 * uVar11) * 8);
            uVar12 = uVar10 & 0x1f | (uVar9 & 0x1f) << 5;
            local_80 = uVar10;
            uStack_7c = uVar9;
            uVar13 = (**ppcVar17)(ppcVar17,uVar12,0,local_88[0xf]);
            if (1 < puVar5[0xd]) {
              puVar22 = puVar5 + 0x11;
              uVar23 = 1;
              do {
                ppcVar17 = *(code ***)
                            (*(long *)(puVar5 + 10) + (ulong)(uVar11 * iVar16 + (int)uVar23) * 8);
                iVar14 = (**ppcVar17)(ppcVar17,uVar12,0,*puVar22);
                puVar1 = puVar22 + -1;
                uVar23 = uVar23 + 1;
                puVar22 = puVar22 + 2;
                uVar13 = iVar14 << (ulong)(*puVar1 & 0x1f) | uVar13;
              } while (uVar23 < puVar5[0xd]);
            }
            uVar11 = uVar13 & uVar7;
            uVar12 = param_6 - 1;
            if (uVar11 <= param_6 - 1) {
              uVar12 = uVar11;
            }
            plVar25 = (long *)(param_7 + (ulong)uVar12 * 0x18);
            uVar23 = (plVar25[1] - *plVar25 >> 3) * 0x684bda13;
            local_78 = uVar13;
            if ((int)uVar23 != 0) {
              local_a8 = uVar10 >> (ulong)(local_100 & 0x1f);
              uStack_a4 = uVar9 >> (ulong)(local_104 & 0x1f);
              local_a0 = (**(code **)(*local_b0 + 0x58))();
              lVar24 = 0;
              do {
                lVar18 = *plVar25;
                pIVar20 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar18 + lVar24) +
                           0x78);
                if (pIVar20 == (IDensityPixelSource *)0x0) {
LAB_0082fa34:
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar18 + lVar24),
                             (HelperSource *)&local_98);
                }
                else {
                  if (pIVar20 == param_1) {
                    lVar2 = lVar18 + lVar24;
                    if ((*(int *)(lVar2 + 0x80) == 2) ||
                       ((*(int *)(lVar2 + 0x80) == 0) != (*(uint *)(lVar2 + 0x84) != uVar11))) {
                      uVar12 = uVar13 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if (*(int *)(lVar2 + 0x90) <= (int)uVar12) goto LAB_0082f918;
LAB_0082f8c0:
                      cVar3 = *(char *)(lVar18 + lVar24 + 0x98);
                      goto joined_r0x0082f830;
                    }
                  }
                  else {
                    lVar2 = lVar18 + lVar24;
                    if ((*(int *)(lVar2 + 0x80) == 2) ||
                       ((*(int *)(lVar2 + 0x80) == 0) !=
                        (*(uint *)(lVar2 + 0x84) != (local_a0 & uVar8)))) {
                      uVar12 = local_a0 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar12 < *(int *)(lVar2 + 0x90)) goto LAB_0082f8c0;
LAB_0082f918:
                      cVar3 = *(char *)(lVar18 + lVar24 + 0x98);
joined_r0x0082f830:
                      if ((cVar3 == '\0') &&
                         ((uVar19 = *(uint *)(lVar18 + lVar24 + 0x9c), uVar19 == 0 ||
                          ((uVar19 & uVar12) != 0)))) {
                        pIVar20 = *(IDensityPixelSource **)(lVar18 + lVar24 + 0xa8);
                        if (pIVar20 == (IDensityPixelSource *)0x0) goto LAB_0082fa34;
                        if (pIVar20 == param_1) {
                          lVar2 = lVar18 + lVar24;
                          if ((*(int *)(lVar2 + 0xb0) == 2) ||
                             ((*(int *)(lVar2 + 0xb0) == 0) != (*(uint *)(lVar2 + 0xb4) != uVar11)))
                          {
                            uVar12 = uVar13 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if (*(int *)(lVar2 + 0xc0) <= (int)uVar12) goto LAB_0082fa04;
LAB_0082f9ac:
                            cVar3 = *(char *)(lVar18 + lVar24 + 200);
                            goto joined_r0x0082fa14;
                          }
                        }
                        else {
                          lVar2 = lVar18 + lVar24;
                          if ((*(int *)(lVar2 + 0xb0) == 2) ||
                             ((*(int *)(lVar2 + 0xb0) == 0) !=
                              (*(uint *)(lVar2 + 0xb4) != (local_a0 & uVar8)))) {
                            uVar12 = local_a0 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if ((int)uVar12 < *(int *)(lVar2 + 0xc0)) goto LAB_0082f9ac;
LAB_0082fa04:
                            cVar3 = *(char *)(lVar18 + lVar24 + 200);
joined_r0x0082fa14:
                            if ((cVar3 != '\0') &&
                               ((uVar19 = *(uint *)(lVar18 + lVar24 + 0xcc), uVar19 == 0 ||
                                ((uVar19 & uVar12) != 0)))) goto LAB_0082fa34;
                          }
                        }
                      }
                    }
                  }
                  *(int *)(lVar18 + lVar24 + 4) = *(int *)(lVar18 + lVar24 + 4) + 1;
                }
                uVar12 = local_78;
                puVar5 = local_88;
                lVar24 = lVar24 + 0xd8;
              } while ((uVar23 & 0xffffffff) * 0xd8 - lVar24 != 0);
              if (uVar13 != local_78) {
                uVar11 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar13 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar18 = (ulong)uVar13 * 8;
                lVar24 = *(long *)(*(long *)(local_88 + 10) + lVar18);
                uVar28 = (**(code **)(lVar24 + 8))(lVar24,uVar11,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar5 + 10) + lVar18) = uVar28;
                if (1 < puVar5[0xd]) {
                  puVar22 = puVar5 + 0x11;
                  uVar23 = 1;
                  do {
                    lVar18 = (ulong)(uVar13 + (int)uVar23) * 8;
                    lVar24 = *(long *)(*(long *)(puVar5 + 10) + lVar18);
                    uVar28 = (**(code **)(lVar24 + 8))
                                       (lVar24,uVar11,0,*puVar22,
                                        uVar12 >> (ulong)(puVar22[-1] & 0x1f));
                    uVar23 = uVar23 + 1;
                    puVar22 = puVar22 + 2;
                    *(undefined8 *)(*(long *)(puVar5 + 10) + lVar18) = uVar28;
                  } while (uVar23 < puVar5[0xd]);
                }
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_5 + 0x5c));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_5 + 0x4c));
    }
  }
  if (param_6 != 0) {
    uVar23 = 0;
    do {
      plVar25 = (long *)(param_7 + uVar23 * 0x18);
      lVar24 = *plVar25;
      lVar18 = plVar25[1];
      if (lVar18 != lVar24) {
        uVar26 = 0;
        do {
          if (*(char *)(lVar24 + uVar26 * 0xd8 + 0x6c) != '\0') {
            lVar24 = lVar24 + uVar26 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar24 + 0x58),*(uint *)(param_5 + 0x50),
                       *(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x54),*(uint *)(param_5 + 0x4c)
                       ,*(uint *)(lVar24 + 0x24),*(uint *)(lVar24 + 0x28),*(uint *)(lVar24 + 0x70),
                       *(bool *)(lVar24 + 0x6d),true,true);
            lVar18 = plVar25[1];
            lVar24 = *plVar25;
          }
          uVar26 = (ulong)((int)uVar26 + 1);
          uVar21 = (lVar18 - lVar24 >> 3) * -0x7b425ed097b425ed;
        } while (uVar26 <= uVar21 && uVar21 - uVar26 != 0);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != param_6);
  }
  bVar6 = true;
LAB_0082ff1c:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


