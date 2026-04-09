// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 0082d9e8
// Size: 3268 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, uint param_6, TypedModules * param_7)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask<ChunkedBitSquare, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(IDensityPixelSource*, ChunkedBitSquare*, IDensityPixelSource const*, ChunkedBitSquare*,
   ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask<ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,uint param_6,
               TypedModules *param_7)

{
  uint *puVar1;
  long lVar2;
  TypedModuleWithMasks *this;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  code **ppcVar19;
  Logger *this_00;
  long lVar20;
  IDensityPixelSource *pIVar21;
  ulong uVar22;
  uint uVar23;
  uint *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  undefined2 uVar29;
  undefined8 uVar30;
  uint local_118;
  uint local_114;
  uint local_104;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint *local_b0;
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
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar8 = (**(code **)(*(long *)param_1 + 0x28))();
  uVar8 = ~(-1 << (ulong)(uVar8 & 0x1f));
  uVar9 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  uVar9 = ~(-1 << (ulong)(uVar9 & 0x1f));
  uVar10 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_98 = uVar10;
  uVar11 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar11;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  local_88 = (uint *)param_2;
  uVar12 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar12;
  uVar13 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar13;
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = (uint *)param_4;
  if ((uVar10 < uVar12) || (uVar11 < uVar13)) {
    if ((uVar12 < uVar10) || (uVar13 < uVar11)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 0082e668 to 0082e66f has its CatchHandler @ 0082e6bc */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0082e674 to 0082e677 has its CatchHandler @ 0082e6ac */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_98,(ulong)local_94);
      bVar7 = false;
      goto LAB_0082e624;
    }
    uVar23 = 0;
    if (uVar10 != 0) {
      uVar23 = uVar12 / uVar10;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar13 / uVar11;
    }
    uVar30 = NEON_cnt((ulong)uVar23,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar7 = (uVar23 & 0xffff0000) != 0;
      uVar11 = uVar23 >> 0x10;
      if (!bVar7) {
        uVar11 = uVar23;
      }
      uVar14 = (uint)bVar7;
      uVar12 = uVar14 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar14 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar14 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar14 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar14;
      }
      local_104 = (uVar13 + uVar12) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar30 = NEON_cnt((ulong)uVar10,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar7 = (uVar10 & 0xffff0000) != 0;
      uVar11 = uVar10 >> 0x10;
      if (!bVar7) {
        uVar11 = uVar10;
      }
      uVar14 = (uint)bVar7;
      uVar12 = uVar14 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar14 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar14 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar14 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar14;
      }
      local_114 = (uVar13 + uVar12) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar11 = *(uint *)(param_5 + 0x48);
    if (uVar11 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar11);
        uVar12 = *(uint *)(param_5 + 0x58);
        if (uVar12 < *(uint *)(param_5 + 0x5c)) {
          do {
            puVar6 = local_88;
            uVar13 = local_88[0xd];
            iVar17 = ((uVar11 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar12 >> 5);
            ppcVar19 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar17 * uVar13) * 8);
            uVar14 = uVar12 & 0x1f | (uVar11 & 0x1f) << 5;
            local_80 = uVar12;
            uStack_7c = uVar11;
            uVar18 = (**ppcVar19)(ppcVar19,uVar14,0,local_88[0xf]);
            if (1 < puVar6[0xd]) {
              puVar24 = puVar6 + 0x11;
              uVar25 = 1;
              do {
                ppcVar19 = *(code ***)
                            (*(long *)(puVar6 + 10) + (ulong)(uVar13 * iVar17 + (int)uVar25) * 8);
                iVar15 = (**ppcVar19)(ppcVar19,uVar14,0,*puVar24);
                puVar1 = puVar24 + -1;
                uVar25 = uVar25 + 1;
                puVar24 = puVar24 + 2;
                uVar18 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar18;
              } while (uVar25 < puVar6[0xd]);
            }
            uVar13 = uVar18 & uVar8;
            uVar14 = param_6 - 1;
            if (uVar13 <= param_6 - 1) {
              uVar14 = uVar13;
            }
            plVar28 = (long *)(param_7 + (ulong)uVar14 * 0x18);
            lVar26 = *plVar28;
            uVar25 = (plVar28[1] - lVar26 >> 3) * 0x684bda13;
            local_78 = uVar18;
            if ((int)uVar25 != 0) {
              lVar20 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar26 + lVar20);
                bVar7 = checkTypedModuleMasks<ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                                  (this,param_1,uVar13,uVar18,(HelperSource *)&local_c0,param_3,
                                   uVar9,uVar12 << (ulong)(local_104 & 0x1f),
                                   uVar11 << (ulong)(local_114 & 0x1f),uVar23,uVar10);
                if (bVar7) {
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar25 & 0xffffffff) * 0xd8 + -0xd8 == lVar20) break;
                lVar26 = *plVar28;
                lVar20 = lVar20 + 0xd8;
              }
            }
            uVar13 = local_78;
            puVar6 = local_88;
            if (uVar18 != local_78) {
              uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar18 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar20 = (ulong)uVar18 * 8;
              lVar26 = *(long *)(*(long *)(local_88 + 10) + lVar20);
              uVar30 = (**(code **)(lVar26 + 8))(lVar26,uVar14,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar6 + 10) + lVar20) = uVar30;
              if (1 < puVar6[0xd]) {
                puVar24 = puVar6 + 0x11;
                uVar25 = 1;
                do {
                  lVar20 = (ulong)(uVar18 + (int)uVar25) * 8;
                  lVar26 = *(long *)(*(long *)(puVar6 + 10) + lVar20);
                  uVar30 = (**(code **)(lVar26 + 8))
                                     (lVar26,uVar14,0,*puVar24,uVar13 >> (ulong)(puVar24[-1] & 0x1f)
                                     );
                  uVar25 = uVar25 + 1;
                  puVar24 = puVar24 + 2;
                  *(undefined8 *)(*(long *)(puVar6 + 10) + lVar20) = uVar30;
                } while (uVar25 < puVar6[0xd]);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_5 + 0x5c));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar23 = 0;
    if (uVar12 != 0) {
      uVar23 = uVar10 / uVar12;
    }
    uVar10 = 0;
    if (uVar13 != 0) {
      uVar10 = uVar11 / uVar13;
    }
    uVar30 = NEON_cnt((ulong)uVar23,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar7 = (uVar23 & 0xffff0000) != 0;
      uVar11 = uVar23 >> 0x10;
      if (!bVar7) {
        uVar11 = uVar23;
      }
      uVar23 = (uint)bVar7;
      uVar12 = uVar23 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar23 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar23 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar23 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar23;
      }
      local_114 = (uVar13 + uVar12) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar30 = NEON_cnt((ulong)uVar10,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar7 = (uVar10 & 0xffff0000) != 0;
      uVar11 = uVar10 >> 0x10;
      if (!bVar7) {
        uVar11 = uVar10;
      }
      uVar13 = (uint)bVar7;
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
      local_118 = (uVar12 + uVar10) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar10 = *(uint *)(param_5 + 0x48);
    if (uVar10 < *(uint *)(param_5 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar10);
        uVar11 = *(uint *)(param_5 + 0x58);
        if (uVar11 < *(uint *)(param_5 + 0x5c)) {
          uVar12 = uVar10 >> (ulong)(local_118 & 0x1f);
          do {
            puVar6 = local_88;
            uVar13 = local_88[0xd];
            iVar17 = ((uVar10 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar11 >> 5);
            ppcVar19 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar17 * uVar13) * 8);
            uVar23 = uVar11 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar11;
            uStack_7c = uVar10;
            uVar14 = (**ppcVar19)(ppcVar19,uVar23,0,local_88[0xf]);
            if (1 < puVar6[0xd]) {
              puVar24 = puVar6 + 0x11;
              uVar25 = 1;
              do {
                ppcVar19 = *(code ***)
                            (*(long *)(puVar6 + 10) + (ulong)(uVar13 * iVar17 + (int)uVar25) * 8);
                iVar15 = (**ppcVar19)(ppcVar19,uVar23,0,*puVar24);
                puVar1 = puVar24 + -1;
                uVar25 = uVar25 + 1;
                puVar24 = puVar24 + 2;
                uVar14 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar14;
              } while (uVar25 < puVar6[0xd]);
            }
            puVar6 = local_b0;
            uVar13 = uVar14 & uVar8;
            uVar23 = param_6 - 1;
            if (uVar13 <= param_6 - 1) {
              uVar23 = uVar13;
            }
            plVar28 = (long *)(param_7 + (ulong)uVar23 * 0x18);
            uVar23 = (int)((ulong)(plVar28[1] - *plVar28) >> 3) * 0x684bda13;
            local_78 = uVar14;
            if (uVar23 != 0) {
              local_a8 = uVar11 >> (ulong)(local_114 & 0x1f);
              uVar18 = (((uVar12 >> 5) << (ulong)(*local_b0 & 0x1f)) + (local_a8 >> 5)) *
                       local_b0[0xd];
              ppcVar19 = *(code ***)(*(long *)(local_b0 + 10) + (ulong)uVar18 * 8);
              uVar4 = local_a8 & 0x1f | (uVar12 & 0x1f) << 5;
              uStack_a4 = uVar12;
              uVar16 = (**ppcVar19)(ppcVar19,uVar4,0,local_b0[0xf]);
              if (1 < puVar6[0xd]) {
                puVar24 = puVar6 + 0x11;
                uVar25 = 1;
                do {
                  ppcVar19 = *(code ***)(*(long *)(puVar6 + 10) + (ulong)(uVar18 + (int)uVar25) * 8)
                  ;
                  iVar17 = (**ppcVar19)(ppcVar19,uVar4,0,*puVar24);
                  puVar1 = puVar24 + -1;
                  uVar25 = uVar25 + 1;
                  puVar24 = puVar24 + 2;
                  uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
                } while (uVar25 < puVar6[0xd]);
              }
              if (uVar23 < 2) {
                uVar23 = 1;
              }
              lVar26 = 0;
              local_a0 = uVar16;
              do {
                lVar20 = *plVar28;
                pIVar21 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar20 + lVar26) +
                           0x78);
                if (pIVar21 == (IDensityPixelSource *)0x0) {
LAB_0082e134:
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar20 + lVar26),
                             (HelperSource *)&local_98);
                }
                else {
                  if (pIVar21 == param_1) {
                    lVar2 = lVar20 + lVar26;
                    if ((*(int *)(lVar2 + 0x80) == 2) ||
                       ((*(int *)(lVar2 + 0x80) == 0) != (*(uint *)(lVar2 + 0x84) != uVar13))) {
                      uVar18 = uVar14 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if (*(int *)(lVar2 + 0x90) <= (int)uVar18) goto LAB_0082e018;
LAB_0082dfc0:
                      cVar3 = *(char *)(lVar20 + lVar26 + 0x98);
                      goto joined_r0x0082df30;
                    }
                  }
                  else {
                    lVar2 = lVar20 + lVar26;
                    if ((*(int *)(lVar2 + 0x80) == 2) ||
                       ((*(int *)(lVar2 + 0x80) == 0) !=
                        (*(uint *)(lVar2 + 0x84) != (local_a0 & uVar9)))) {
                      uVar18 = local_a0 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar18 < *(int *)(lVar2 + 0x90)) goto LAB_0082dfc0;
LAB_0082e018:
                      cVar3 = *(char *)(lVar20 + lVar26 + 0x98);
joined_r0x0082df30:
                      if ((cVar3 == '\0') &&
                         ((uVar4 = *(uint *)(lVar20 + lVar26 + 0x9c), uVar4 == 0 ||
                          ((uVar4 & uVar18) != 0)))) {
                        pIVar21 = *(IDensityPixelSource **)(lVar20 + lVar26 + 0xa8);
                        if (pIVar21 == (IDensityPixelSource *)0x0) goto LAB_0082e134;
                        if (pIVar21 == param_1) {
                          lVar2 = lVar20 + lVar26;
                          if ((*(int *)(lVar2 + 0xb0) == 2) ||
                             ((*(int *)(lVar2 + 0xb0) == 0) != (*(uint *)(lVar2 + 0xb4) != uVar13)))
                          {
                            uVar18 = uVar14 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if (*(int *)(lVar2 + 0xc0) <= (int)uVar18) goto LAB_0082e104;
LAB_0082e0ac:
                            cVar3 = *(char *)(lVar20 + lVar26 + 200);
                            goto joined_r0x0082e114;
                          }
                        }
                        else {
                          lVar2 = lVar20 + lVar26;
                          if ((*(int *)(lVar2 + 0xb0) == 2) ||
                             ((*(int *)(lVar2 + 0xb0) == 0) !=
                              (*(uint *)(lVar2 + 0xb4) != (local_a0 & uVar9)))) {
                            uVar18 = local_a0 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if ((int)uVar18 < *(int *)(lVar2 + 0xc0)) goto LAB_0082e0ac;
LAB_0082e104:
                            cVar3 = *(char *)(lVar20 + lVar26 + 200);
joined_r0x0082e114:
                            if ((cVar3 != '\0') &&
                               ((uVar4 = *(uint *)(lVar20 + lVar26 + 0xcc), uVar4 == 0 ||
                                ((uVar4 & uVar18) != 0)))) goto LAB_0082e134;
                          }
                        }
                      }
                    }
                  }
                  *(int *)(lVar20 + lVar26 + 4) = *(int *)(lVar20 + lVar26 + 4) + 1;
                }
                uVar18 = local_78;
                puVar6 = local_88;
                lVar26 = lVar26 + 0xd8;
              } while ((ulong)uVar23 * 0xd8 - lVar26 != 0);
              if (uVar14 != local_78) {
                uVar13 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar23 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar20 = (ulong)uVar23 * 8;
                lVar26 = *(long *)(*(long *)(local_88 + 10) + lVar20);
                uVar30 = (**(code **)(lVar26 + 8))(lVar26,uVar13,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar6 + 10) + lVar20) = uVar30;
                if (1 < puVar6[0xd]) {
                  puVar24 = puVar6 + 0x11;
                  uVar25 = 1;
                  do {
                    lVar20 = (ulong)(uVar23 + (int)uVar25) * 8;
                    lVar26 = *(long *)(*(long *)(puVar6 + 10) + lVar20);
                    uVar30 = (**(code **)(lVar26 + 8))
                                       (lVar26,uVar13,0,*puVar24,
                                        uVar18 >> (ulong)(puVar24[-1] & 0x1f));
                    uVar25 = uVar25 + 1;
                    puVar24 = puVar24 + 2;
                    *(undefined8 *)(*(long *)(puVar6 + 10) + lVar20) = uVar30;
                  } while (uVar25 < puVar6[0xd]);
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(param_5 + 0x5c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_5 + 0x4c));
    }
  }
  if (param_6 != 0) {
    uVar25 = 0;
    do {
      plVar28 = (long *)(param_7 + uVar25 * 0x18);
      lVar26 = *plVar28;
      lVar20 = plVar28[1];
      if (lVar20 != lVar26) {
        uVar27 = 0;
        do {
          if (*(char *)(lVar26 + uVar27 * 0xd8 + 0x6c) != '\0') {
            lVar26 = lVar26 + uVar27 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar26 + 0x58),*(uint *)(param_5 + 0x50),
                       *(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x54),*(uint *)(param_5 + 0x4c)
                       ,*(uint *)(lVar26 + 0x24),*(uint *)(lVar26 + 0x28),*(uint *)(lVar26 + 0x70),
                       *(bool *)(lVar26 + 0x6d),true,true);
            lVar20 = plVar28[1];
            lVar26 = *plVar28;
          }
          uVar27 = (ulong)((int)uVar27 + 1);
          uVar22 = (lVar20 - lVar26 >> 3) * -0x7b425ed097b425ed;
        } while (uVar27 <= uVar22 && uVar22 - uVar27 != 0);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != param_6);
  }
  bVar7 = true;
LAB_0082e624:
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


