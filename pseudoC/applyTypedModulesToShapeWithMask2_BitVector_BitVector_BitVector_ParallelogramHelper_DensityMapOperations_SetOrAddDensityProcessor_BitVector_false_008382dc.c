// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 008382dc
// Size: 3972 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, BitVector * param_4, IDensityPixelSource * param_5, BitVector * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector, BitVector, BitVector,
   ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(IDensityPixelSource*, BitVector*, IDensityPixelSource const*, BitVector*, IDensityPixelSource
   const*, BitVector*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,IDensityPixelSource *param_5,BitVector *param_6,
               ParallelogramHelper *param_7,uint param_8,TypedModules *param_9)

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
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  IDensityPixelSource *pIVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  undefined2 uVar32;
  undefined8 uVar33;
  uint local_180;
  uint local_17c;
  uint local_168;
  uint local_164;
  uint local_14c;
  uint local_148;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  BitVector *local_d8;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
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
  uVar7 = (**(code **)(*(long *)param_5 + 0x28))(param_5);
  uVar7 = ~(-1 << (ulong)(uVar7 & 0x1f));
  uVar8 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_98 = uVar8;
  uVar9 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar9;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  local_88 = (long *)param_2;
  uVar10 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar10;
  uVar11 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar11;
  uVar12 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b8 = uVar12;
  local_b0 = param_4;
  uVar13 = (**(code **)(*(long *)param_5 + 0x18))(param_5);
  local_e8 = uVar13;
  uVar14 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  local_e4 = uVar14;
  uVar15 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_e0 = uVar15;
  local_d8 = param_6;
  if ((((uVar8 < uVar10) || (uVar9 < uVar11)) || (uVar8 < uVar13)) || (uVar9 < uVar14)) {
    if (((uVar10 < uVar8) || (uVar11 < uVar9)) || ((uVar13 < uVar8 || (uVar14 < uVar9)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar16 != 0
         )) {
                    /* try { // try from 00839224 to 0083922f has its CatchHandler @ 00839260 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_e8,(ulong)local_e4,
                         (ulong)local_98,(ulong)local_94);
      bVar4 = false;
      goto LAB_008391e0;
    }
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar11 / uVar9;
    }
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar10 / uVar8;
    }
    uVar33 = NEON_cnt((ulong)uVar11,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar11 & 0xffff0000) != 0;
      uVar10 = uVar11 >> 0x10;
      if (!bVar4) {
        uVar10 = uVar11;
      }
      uVar17 = (uint)bVar4;
      uVar15 = uVar17 << 4 | 8;
      uVar18 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar15 = uVar17 << 4;
        uVar18 = uVar10;
      }
      uVar10 = uVar15 | 4;
      uVar17 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar10 = uVar15;
        uVar17 = uVar18;
      }
      uVar15 = uVar10 | 2;
      uVar18 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar15 = uVar10;
        uVar18 = uVar17;
      }
      local_148 = (uVar18 + uVar15) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar12,1);
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar13 / uVar8;
    }
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar12 & 0xffff0000) != 0;
      uVar8 = uVar12 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar12;
      }
      uVar18 = (uint)bVar4;
      uVar13 = uVar18 << 4 | 8;
      uVar15 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar13 = uVar18 << 4;
        uVar15 = uVar8;
      }
      uVar8 = uVar13 | 4;
      uVar18 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar8 = uVar13;
        uVar18 = uVar15;
      }
      uVar13 = uVar8 | 2;
      uVar15 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar13 = uVar8;
        uVar15 = uVar18;
      }
      uVar8 = (uVar15 + uVar13) - 1;
    }
    else {
      uVar8 = 0;
    }
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar14 / uVar9;
    }
    uVar33 = NEON_cnt((ulong)uVar10,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar10 & 0xffff0000) != 0;
      uVar9 = uVar10 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar10;
      }
      uVar18 = (uint)bVar4;
      uVar14 = uVar18 << 4 | 8;
      uVar15 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar14 = uVar18 << 4;
        uVar15 = uVar9;
      }
      uVar9 = uVar14 | 4;
      uVar18 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar9 = uVar14;
        uVar18 = uVar15;
      }
      uVar14 = uVar9 | 2;
      uVar15 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar14 = uVar9;
        uVar15 = uVar18;
      }
      local_14c = (uVar15 + uVar14) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar13,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar13 & 0xffff0000) != 0;
      uVar9 = uVar13 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar13;
      }
      uVar18 = (uint)bVar4;
      uVar14 = uVar18 << 4 | 8;
      uVar15 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar14 = uVar18 << 4;
        uVar15 = uVar9;
      }
      uVar9 = uVar14 | 4;
      uVar18 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar9 = uVar14;
        uVar18 = uVar15;
      }
      uVar14 = uVar9 | 2;
      uVar15 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar14 = uVar9;
        uVar15 = uVar18;
      }
      uVar9 = (uVar15 + uVar14) - 1;
    }
    else {
      uVar9 = 0;
    }
    uVar14 = *(uint *)(param_7 + 0x48);
    if (uVar14 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar14);
        uVar15 = *(uint *)(param_7 + 0x58);
        if (uVar15 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar28 = *local_88;
            uVar18 = (uVar15 + local_98 * uVar14) * local_90;
            lVar20 = *(long *)(lVar28 + (ulong)(uVar18 >> 0x13) * 8);
            uVar25 = (ulong)(uVar18 >> 3) & 0xffff;
            if ((uint)uVar25 < 0xfffd) {
              uVar17 = *(uint *)(lVar20 + uVar25);
            }
            else {
              uVar17 = (uVar18 >> 3) + 1;
              uVar23 = (uVar18 >> 3) + 2;
              uVar17 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar28 + (ulong)(uVar23 >> 0x10) * 8) +
                                       ((ulong)uVar23 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar28 + (ulong)(uVar17 >> 0x10) * 8) +
                                                ((ulong)uVar17 & 0xffff)),
                                               *(undefined *)(lVar20 + uVar25)));
            }
            local_78 = uVar17 >> (ulong)(uVar18 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar18 = local_78 & uVar5;
            uVar17 = param_8 - 1;
            if (uVar18 <= param_8 - 1) {
              uVar17 = uVar18;
            }
            plVar31 = (long *)(param_9 + (ulong)uVar17 * 0x18);
            lVar20 = *plVar31;
            uVar25 = (plVar31[1] - lVar20 >> 3) * 0x684bda13;
            local_80 = uVar15;
            uStack_7c = uVar14;
            if ((int)uVar25 != 0) {
              lVar28 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar20 + lVar28);
                bVar4 = checkTypedModuleMasks2<BitVector,BitVector,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar18,uVar18,(HelperSource *)&local_c0,param_3,
                                   uVar6,uVar15 << (ulong)(local_148 & 0x1f),
                                   uVar14 << (ulong)(uVar8 & 0x1f),uVar11,uVar12,
                                   (HelperSource *)&local_e8,param_5,uVar7,
                                   uVar15 << (ulong)(local_14c & 0x1f),
                                   uVar14 << (ulong)(uVar9 & 0x1f),uVar10,uVar13);
                if (bVar4) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar25 & 0xffffffff) * 0xd8 + -0xd8 == lVar28) break;
                lVar20 = *plVar31;
                lVar28 = lVar28 + 0xd8;
              }
            }
            if (uVar18 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(param_7 + 0x5c));
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar18 = uVar8 / uVar10;
    }
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar17 = uVar9 / uVar11;
    }
    uVar33 = NEON_cnt((ulong)uVar18,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar18 & 0xffff0000) != 0;
      uVar11 = uVar18 >> 0x10;
      if (!bVar4) {
        uVar11 = uVar18;
      }
      uVar22 = (uint)bVar4;
      uVar18 = uVar22 << 4 | 8;
      uVar23 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar18 = uVar22 << 4;
        uVar23 = uVar11;
      }
      uVar11 = uVar18 | 4;
      uVar22 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar11 = uVar18;
        uVar22 = uVar23;
      }
      uVar18 = uVar11 | 2;
      uVar23 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar18 = uVar11;
        uVar23 = uVar22;
      }
      local_164 = (uVar23 + uVar18) - 1;
    }
    else {
      local_164 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar17,1);
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = uVar8 / uVar13;
    }
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar17 & 0xffff0000) != 0;
      uVar8 = uVar17 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar17;
      }
      uVar23 = (uint)bVar4;
      uVar18 = uVar23 << 4 | 8;
      uVar17 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar18 = uVar23 << 4;
        uVar17 = uVar8;
      }
      uVar8 = uVar18 | 4;
      uVar23 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar8 = uVar18;
        uVar23 = uVar17;
      }
      uVar18 = uVar8 | 2;
      uVar17 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar18 = uVar8;
        uVar17 = uVar23;
      }
      local_17c = (uVar17 + uVar18) - 1;
    }
    else {
      local_17c = 0;
    }
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = uVar9 / uVar14;
    }
    uVar33 = NEON_cnt((ulong)uVar11,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar11;
      }
      uVar18 = (uint)bVar4;
      uVar11 = uVar18 << 4 | 8;
      uVar14 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar11 = uVar18 << 4;
        uVar14 = uVar9;
      }
      uVar9 = uVar11 | 4;
      uVar18 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar9 = uVar11;
        uVar18 = uVar14;
      }
      uVar11 = uVar9 | 2;
      uVar14 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar11 = uVar9;
        uVar14 = uVar18;
      }
      local_168 = (uVar14 + uVar11) - 1;
    }
    else {
      local_168 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar8,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar4 = (uVar8 & 0xffff0000) != 0;
      uVar9 = uVar8 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar8;
      }
      uVar14 = (uint)bVar4;
      uVar8 = uVar14 << 4 | 8;
      uVar11 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar8 = uVar14 << 4;
        uVar11 = uVar9;
      }
      uVar9 = uVar8 | 4;
      uVar14 = uVar11 >> 4;
      if (uVar11 < 0x10) {
        uVar9 = uVar8;
        uVar14 = uVar11;
      }
      uVar8 = uVar9 | 2;
      uVar11 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar8 = uVar9;
        uVar11 = uVar14;
      }
      local_180 = (uVar11 + uVar8) - 1;
    }
    else {
      local_180 = 0;
    }
    uVar8 = *(uint *)(param_7 + 0x48);
    if (uVar8 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar8);
        uVar9 = *(uint *)(param_7 + 0x58);
        if (uVar9 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar8 >> (ulong)(local_17c & 0x1f);
          uVar14 = uVar8 >> (ulong)(local_180 & 0x1f);
LAB_00838864:
          lVar28 = *local_88;
          uVar18 = (uVar9 + local_98 * uVar8) * local_90;
          lVar20 = *(long *)(lVar28 + (ulong)(uVar18 >> 0x13) * 8);
          uVar25 = (ulong)(uVar18 >> 3) & 0xffff;
          if ((uint)uVar25 < 0xfffd) {
            uVar17 = *(uint *)(lVar20 + uVar25);
          }
          else {
            uVar17 = (uVar18 >> 3) + 1;
            uVar23 = (uVar18 >> 3) + 2;
            uVar17 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar28 + (ulong)(uVar23 >> 0x10) * 8) +
                                     ((ulong)uVar23 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar28 + (ulong)(uVar17 >> 0x10) * 8) +
                                              ((ulong)uVar17 & 0xffff)),
                                             *(undefined *)(lVar20 + uVar25)));
          }
          uVar18 = uVar17 >> (ulong)(uVar18 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) &
                   0xffff;
          uVar17 = uVar18 & uVar5;
          uVar23 = param_8 - 1;
          if (uVar17 <= param_8 - 1) {
            uVar23 = uVar17;
          }
          plVar31 = (long *)(param_9 + (ulong)uVar23 * 0x18);
          lVar20 = *plVar31;
          uVar25 = (plVar31[1] - lVar20 >> 3) * 0x684bda13;
          local_80 = uVar9;
          uStack_7c = uVar8;
          local_78 = uVar18;
          if ((int)uVar25 != 0) {
            local_a8 = uVar9 >> (ulong)(local_164 & 0x1f);
            lVar30 = *(long *)param_4;
            uVar23 = (uVar10 * uVar11 + local_a8) * uVar12;
            lVar28 = *(long *)(lVar30 + (ulong)(uVar23 >> 0x13) * 8);
            uVar29 = (ulong)(uVar23 >> 3) & 0xffff;
            if ((uint)uVar29 < 0xfffd) {
              uVar22 = *(uint *)(lVar28 + uVar29);
            }
            else {
              uVar22 = (uVar23 >> 3) + 1;
              uVar24 = (uVar23 >> 3) + 2;
              uVar22 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar30 + (ulong)(uVar24 >> 0x10) * 8) +
                                       ((ulong)uVar24 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar30 + (ulong)(uVar22 >> 0x10) * 8) +
                                                ((ulong)uVar22 & 0xffff)),
                                               *(undefined *)(lVar28 + uVar29)));
            }
            local_d0 = uVar9 >> (ulong)(local_168 & 0x1f);
            uVar23 = uVar22 >> (ulong)(uVar23 & 7) & ~(-1 << (ulong)(uVar12 & 0x1f)) & 0xffffU;
            uVar22 = (uVar13 * uVar14 + local_d0) * uVar15;
            uVar29 = (ulong)(uVar22 >> 3) & 0xffff;
            lVar30 = *(long *)param_6;
            lVar28 = *(long *)(lVar30 + (ulong)(uVar22 >> 0x13) * 8);
            if ((uint)uVar29 < 0xfffd) {
              uVar24 = *(uint *)(lVar28 + uVar29);
            }
            else {
              uVar24 = (uVar22 >> 3) + 1;
              uVar1 = (uVar22 >> 3) + 2;
              uVar24 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar30 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar30 + (ulong)(uVar24 >> 0x10) * 8) +
                                                ((ulong)uVar24 & 0xffff)),
                                               *(undefined *)(lVar28 + uVar29)));
            }
            uVar25 = uVar25 & 0xffffffff;
            lVar28 = 0xcc;
            uVar22 = uVar24 >> (ulong)(uVar22 & 7) & ~(-1 << (ulong)(uVar15 & 0x1f)) & 0xffffU;
            uVar24 = uVar23 & uVar6;
            uVar1 = uVar22 & uVar7;
            uStack_cc = uVar14;
            local_c8 = uVar22;
            uStack_a4 = uVar11;
            local_a0 = uVar23;
            do {
              uVar25 = uVar25 - 1;
              pIVar26 = *(IDensityPixelSource **)(lVar20 + lVar28 + -0x54);
              if (pIVar26 == (IDensityPixelSource *)0x0) {
LAB_00838d00:
                DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                          ((SetOrAddDensityProcessor<BitVector,false> *)(lVar20 + lVar28 + -0xcc),
                           (HelperSource *)&local_98);
              }
              else {
                lVar30 = lVar20 + lVar28;
                if (pIVar26 == param_1) {
                  if ((*(int *)(lVar30 + -0x4c) != 2) &&
                     ((*(int *)(lVar30 + -0x4c) == 0) == (*(uint *)(lVar30 + -0x48) != uVar17)))
                  goto LAB_00838a7c;
                  uVar19 = uVar18 >> (ulong)(*(uint *)(lVar30 + -0x44) & 0x1f) &
                           (-1 << (ulong)(*(uint *)(lVar30 + -0x40) & 0x1f) ^ 0xffffffffU);
                  if ((int)uVar19 < *(int *)(lVar30 + -0x3c)) {
LAB_00838bb0:
                    cVar2 = *(char *)(lVar20 + lVar28 + -0x34);
                  }
                  else {
LAB_00838b4c:
                    cVar2 = *(char *)(lVar20 + lVar28 + -0x34);
                  }
                  if ((cVar2 != '\0') &&
                     ((uVar27 = *(uint *)(lVar20 + lVar28 + -0x30), uVar27 == 0 ||
                      ((uVar27 & uVar19) != 0)))) {
                    pIVar26 = *(IDensityPixelSource **)(lVar20 + lVar28 + -0x24);
                    if (pIVar26 == (IDensityPixelSource *)0x0) goto LAB_00838d00;
                    lVar30 = lVar20 + lVar28;
                    if (pIVar26 == param_1) {
                      if ((*(int *)(lVar30 + -0x1c) != 2) &&
                         ((*(int *)(lVar30 + -0x1c) == 0) == (*(uint *)(lVar30 + -0x18) != uVar17)))
                      goto LAB_00838a7c;
                      uVar19 = uVar18 >> (ulong)(*(uint *)(lVar30 + -0x14) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar30 + -0x10) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar19 < *(int *)(lVar30 + -0xc)) goto LAB_00838ce0;
LAB_00838c7c:
                      cVar2 = *(char *)(lVar20 + lVar28 + -4);
joined_r0x00838cec:
                      if ((cVar2 == '\0') &&
                         ((*(uint *)(lVar20 + lVar28) == 0 ||
                          ((*(uint *)(lVar20 + lVar28) & uVar19) != 0)))) goto LAB_00838d00;
                    }
                    else {
                      iVar16 = *(int *)(lVar30 + -0x1c);
                      if (pIVar26 == param_3) {
                        if ((iVar16 == 2) ||
                           ((iVar16 == 0) != (*(uint *)(lVar20 + lVar28 + -0x18) != uVar24))) {
                          lVar30 = lVar20 + lVar28;
                          uVar27 = *(uint *)(lVar30 + -0x10);
                          iVar16 = *(int *)(lVar30 + -0xc);
                          uVar19 = uVar23 >> (ulong)(*(uint *)(lVar30 + -0x14) & 0x1f);
                          goto LAB_00838cd0;
                        }
                      }
                      else if ((iVar16 == 2) ||
                              ((iVar16 == 0) != (*(uint *)(lVar20 + lVar28 + -0x18) != uVar1))) {
                        lVar30 = lVar20 + lVar28;
                        uVar27 = *(uint *)(lVar30 + -0x10);
                        iVar16 = *(int *)(lVar30 + -0xc);
                        uVar19 = uVar22 >> (ulong)(*(uint *)(lVar30 + -0x14) & 0x1f);
LAB_00838cd0:
                        uVar19 = uVar19 & (-1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
                        if (iVar16 <= (int)uVar19) goto LAB_00838c7c;
LAB_00838ce0:
                        cVar2 = *(char *)(lVar20 + lVar28 + -4);
                        goto joined_r0x00838cec;
                      }
                    }
                  }
                }
                else {
                  iVar16 = *(int *)(lVar30 + -0x4c);
                  if (pIVar26 == param_3) {
                    if ((iVar16 == 2) ||
                       ((iVar16 == 0) != (*(uint *)(lVar20 + lVar28 + -0x48) != uVar24))) {
                      lVar30 = lVar20 + lVar28;
                      uVar27 = *(uint *)(lVar30 + -0x40);
                      iVar16 = *(int *)(lVar30 + -0x3c);
                      uVar19 = uVar23 >> (ulong)(*(uint *)(lVar30 + -0x44) & 0x1f);
                      goto LAB_00838ba0;
                    }
                  }
                  else if ((iVar16 == 2) ||
                          ((iVar16 == 0) != (*(uint *)(lVar20 + lVar28 + -0x48) != uVar1))) {
                    lVar30 = lVar20 + lVar28;
                    uVar27 = *(uint *)(lVar30 + -0x40);
                    iVar16 = *(int *)(lVar30 + -0x3c);
                    uVar19 = uVar22 >> (ulong)(*(uint *)(lVar30 + -0x44) & 0x1f);
LAB_00838ba0:
                    uVar19 = uVar19 & (-1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar19 < iVar16) goto LAB_00838bb0;
                    goto LAB_00838b4c;
                  }
                }
LAB_00838a7c:
                *(int *)(lVar20 + lVar28 + -200) = *(int *)(lVar20 + lVar28 + -200) + 1;
              }
              if (uVar25 == 0) goto LAB_00838d10;
              lVar20 = *plVar31;
              lVar28 = lVar28 + 0xd8;
            } while( true );
          }
          goto LAB_00838854;
        }
LAB_008387f8:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_7 + 0x4c));
    }
  }
  if (param_8 != 0) {
    uVar25 = 0;
    do {
      plVar31 = (long *)(param_9 + uVar25 * 0x18);
      lVar20 = *plVar31;
      lVar28 = plVar31[1];
      if (lVar28 != lVar20) {
        uVar29 = 0;
        do {
          if (*(char *)(lVar20 + uVar29 * 0xd8 + 0x6c) != '\0') {
            lVar20 = lVar20 + uVar29 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar20 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar20 + 0x24),*(uint *)(lVar20 + 0x28),*(uint *)(lVar20 + 0x70),
                       *(bool *)(lVar20 + 0x6d),true,true);
            lVar28 = plVar31[1];
            lVar20 = *plVar31;
          }
          uVar29 = (ulong)((int)uVar29 + 1);
          uVar21 = (lVar28 - lVar20 >> 3) * -0x7b425ed097b425ed;
        } while (uVar29 <= uVar21 && uVar21 - uVar29 != 0);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != param_8);
  }
  bVar4 = true;
LAB_008391e0:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
LAB_00838d10:
  if (uVar18 != local_78) {
    DensityMapAccessUtil::writeValue
              ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
  }
LAB_00838854:
  uVar9 = uVar9 + 1;
  if (*(uint *)(param_7 + 0x5c) <= uVar9) goto LAB_008387f8;
  goto LAB_00838864;
}


