// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083731c
// Size: 4008 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, BitVector * param_4, IDensityPixelSource * param_5, ChunkedBitSquare * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector, BitVector,
   ChunkedBitSquare, ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> >(IDensityPixelSource*, BitVector*, IDensityPixelSource const*, BitVector*,
   IDensityPixelSource const*, ChunkedBitSquare*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,IDensityPixelSource *param_5,ChunkedBitSquare *param_6,
               ParallelogramHelper *param_7,uint param_8,TypedModules *param_9)

{
  uint *puVar1;
  long lVar2;
  TypedModuleWithMasks *this;
  char cVar3;
  long lVar4;
  bool bVar5;
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
  uint uVar16;
  int iVar17;
  code **ppcVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  IDensityPixelSource *pIVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  undefined4 *puVar30;
  long *plVar31;
  ulong uVar32;
  undefined2 uVar33;
  undefined8 uVar34;
  uint local_18c;
  uint local_188;
  uint local_170;
  uint local_16c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  ChunkedBitSquare *local_d8;
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
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar6 = (**(code **)(*(long *)param_1 + 0x28))();
  uVar6 = ~(-1 << (ulong)(uVar6 & 0x1f));
  uVar7 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  uVar7 = ~(-1 << (ulong)(uVar7 & 0x1f));
  uVar8 = (**(code **)(*(long *)param_5 + 0x28))(param_5);
  uVar8 = ~(-1 << (ulong)(uVar8 & 0x1f));
  uVar9 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_98 = uVar9;
  uVar10 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar10;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  local_88 = (long *)param_2;
  uVar11 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar11;
  uVar12 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar12;
  uVar13 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b8 = uVar13;
  local_b0 = param_4;
  uVar14 = (**(code **)(*(long *)param_5 + 0x18))(param_5);
  local_e8 = uVar14;
  uVar15 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  local_e4 = uVar15;
  local_e0 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_d8 = param_6;
  if ((((uVar9 < uVar11) || (uVar10 < uVar12)) || (uVar9 < uVar14)) || (uVar10 < uVar15)) {
    if (((uVar11 < uVar9) || (uVar12 < uVar10)) || ((uVar14 < uVar9 || (uVar15 < uVar10)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 00838288 to 00838293 has its CatchHandler @ 008382c4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_e8,(ulong)local_e4,
                         (ulong)local_98,(ulong)local_94);
      bVar5 = false;
      goto LAB_00838244;
    }
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar12 / uVar10;
    }
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar11 / uVar9;
    }
    uVar34 = NEON_cnt((ulong)uVar12,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar12 & 0xffff0000) != 0;
      uVar11 = uVar12 >> 0x10;
      if (!bVar5) {
        uVar11 = uVar12;
      }
      uVar19 = (uint)bVar5;
      uVar22 = uVar19 << 4 | 8;
      uVar21 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar22 = uVar19 << 4;
        uVar21 = uVar11;
      }
      uVar11 = uVar22 | 4;
      uVar19 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar11 = uVar22;
        uVar19 = uVar21;
      }
      uVar22 = uVar11 | 2;
      uVar21 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar22 = uVar11;
        uVar21 = uVar19;
      }
      local_14c = (uVar21 + uVar22) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar11 = 0;
    if (uVar9 != 0) {
      uVar11 = uVar14 / uVar9;
    }
    uVar34 = NEON_cnt((ulong)uVar13,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar13 & 0xffff0000) != 0;
      uVar9 = uVar13 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar13;
      }
      uVar21 = (uint)bVar5;
      uVar14 = uVar21 << 4 | 8;
      uVar22 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar14 = uVar21 << 4;
        uVar22 = uVar9;
      }
      uVar9 = uVar14 | 4;
      uVar21 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar9 = uVar14;
        uVar21 = uVar22;
      }
      uVar14 = uVar9 | 2;
      uVar22 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar14 = uVar9;
        uVar22 = uVar21;
      }
      local_154 = (uVar22 + uVar14) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar15 / uVar10;
    }
    uVar34 = NEON_cnt((ulong)uVar11,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar11 & 0xffff0000) != 0;
      uVar10 = uVar11 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar11;
      }
      uVar22 = (uint)bVar5;
      uVar14 = uVar22 << 4 | 8;
      uVar15 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar14 = uVar22 << 4;
        uVar15 = uVar10;
      }
      uVar10 = uVar14 | 4;
      uVar22 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar10 = uVar14;
        uVar22 = uVar15;
      }
      uVar14 = uVar10 | 2;
      uVar15 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar14 = uVar10;
        uVar15 = uVar22;
      }
      local_150 = (uVar15 + uVar14) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar34 = NEON_cnt((ulong)uVar9,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar9;
      }
      uVar22 = (uint)bVar5;
      uVar14 = uVar22 << 4 | 8;
      uVar15 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar14 = uVar22 << 4;
        uVar15 = uVar10;
      }
      uVar10 = uVar14 | 4;
      uVar22 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar10 = uVar14;
        uVar22 = uVar15;
      }
      uVar14 = uVar10 | 2;
      uVar15 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar14 = uVar10;
        uVar15 = uVar22;
      }
      local_158 = (uVar15 + uVar14) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar10 = *(uint *)(param_7 + 0x48);
    if (uVar10 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar10);
        uVar14 = *(uint *)(param_7 + 0x58);
        if (uVar14 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar29 = *local_88;
            uVar15 = (uVar14 + local_98 * uVar10) * local_90;
            lVar23 = *(long *)(lVar29 + (ulong)(uVar15 >> 0x13) * 8);
            uVar28 = (ulong)(uVar15 >> 3) & 0xffff;
            if ((uint)uVar28 < 0xfffd) {
              uVar22 = *(uint *)(lVar23 + uVar28);
            }
            else {
              uVar22 = (uVar15 >> 3) + 1;
              uVar21 = (uVar15 >> 3) + 2;
              uVar22 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar29 + (ulong)(uVar21 >> 0x10) * 8) +
                                       ((ulong)uVar21 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar29 + (ulong)(uVar22 >> 0x10) * 8) +
                                                ((ulong)uVar22 & 0xffff)),
                                               *(undefined *)(lVar23 + uVar28)));
            }
            local_78 = uVar22 >> (ulong)(uVar15 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar15 = local_78 & uVar6;
            uVar22 = param_8 - 1;
            if (uVar15 <= param_8 - 1) {
              uVar22 = uVar15;
            }
            plVar31 = (long *)(param_9 + (ulong)uVar22 * 0x18);
            lVar23 = *plVar31;
            uVar28 = (plVar31[1] - lVar23 >> 3) * 0x684bda13;
            local_80 = uVar14;
            uStack_7c = uVar10;
            if ((int)uVar28 != 0) {
              lVar29 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar23 + lVar29);
                bVar5 = checkTypedModuleMasks2<BitVector,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar15,uVar15,(HelperSource *)&local_c0,param_3,
                                   uVar7,uVar14 << (ulong)(local_14c & 0x1f),
                                   uVar10 << (ulong)(local_154 & 0x1f),uVar12,uVar13,
                                   (HelperSource *)&local_e8,param_5,uVar8,
                                   uVar14 << (ulong)(local_150 & 0x1f),
                                   uVar10 << (ulong)(local_158 & 0x1f),uVar11,uVar9);
                if (bVar5) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar28 & 0xffffffff) * 0xd8 + -0xd8 == lVar29) break;
                lVar23 = *plVar31;
                lVar29 = lVar29 + 0xd8;
              }
            }
            if (uVar15 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(param_7 + 0x5c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar22 = 0;
    if (uVar11 != 0) {
      uVar22 = uVar9 / uVar11;
    }
    uVar21 = 0;
    if (uVar12 != 0) {
      uVar21 = uVar10 / uVar12;
    }
    uVar34 = NEON_cnt((ulong)uVar22,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar22 & 0xffff0000) != 0;
      uVar12 = uVar22 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar22;
      }
      uVar26 = (uint)bVar5;
      uVar22 = uVar26 << 4 | 8;
      uVar19 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar22 = uVar26 << 4;
        uVar19 = uVar12;
      }
      uVar12 = uVar22 | 4;
      uVar26 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar12 = uVar22;
        uVar26 = uVar19;
      }
      uVar22 = uVar12 | 2;
      uVar19 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar22 = uVar12;
        uVar19 = uVar26;
      }
      local_16c = (uVar19 + uVar22) - 1;
    }
    else {
      local_16c = 0;
    }
    uVar12 = 0;
    if (uVar14 != 0) {
      uVar12 = uVar9 / uVar14;
    }
    uVar34 = NEON_cnt((ulong)uVar21,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar21 & 0xffff0000) != 0;
      uVar9 = uVar21 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar21;
      }
      uVar21 = (uint)bVar5;
      uVar14 = uVar21 << 4 | 8;
      uVar22 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar14 = uVar21 << 4;
        uVar22 = uVar9;
      }
      uVar9 = uVar14 | 4;
      uVar21 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar9 = uVar14;
        uVar21 = uVar22;
      }
      uVar14 = uVar9 | 2;
      uVar22 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar14 = uVar9;
        uVar22 = uVar21;
      }
      local_188 = (uVar22 + uVar14) - 1;
    }
    else {
      local_188 = 0;
    }
    uVar9 = 0;
    if (uVar15 != 0) {
      uVar9 = uVar10 / uVar15;
    }
    uVar34 = NEON_cnt((ulong)uVar12,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar12;
      }
      uVar15 = (uint)bVar5;
      uVar12 = uVar15 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar12 = uVar15 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar12 | 4;
      uVar15 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar12;
        uVar15 = uVar14;
      }
      uVar12 = uVar10 | 2;
      uVar14 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar12 = uVar10;
        uVar14 = uVar15;
      }
      local_170 = (uVar14 + uVar12) - 1;
    }
    else {
      local_170 = 0;
    }
    uVar34 = NEON_cnt((ulong)uVar9,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar9;
      }
      uVar14 = (uint)bVar5;
      uVar9 = uVar14 << 4 | 8;
      uVar12 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar9 = uVar14 << 4;
        uVar12 = uVar10;
      }
      uVar10 = uVar9 | 4;
      uVar14 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar10 = uVar9;
        uVar14 = uVar12;
      }
      uVar9 = uVar10 | 2;
      uVar12 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar9 = uVar10;
        uVar12 = uVar14;
      }
      local_18c = (uVar12 + uVar9) - 1;
    }
    else {
      local_18c = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar10 = *(uint *)(param_7 + 0x58);
        if (uVar10 < *(uint *)(param_7 + 0x5c)) {
          uVar12 = uVar9 >> (ulong)(local_188 & 0x1f);
          uVar14 = uVar9 >> (ulong)(local_18c & 0x1f);
          do {
            lVar29 = *local_88;
            uVar15 = (uVar10 + local_98 * uVar9) * local_90;
            lVar23 = *(long *)(lVar29 + (ulong)(uVar15 >> 0x13) * 8);
            uVar28 = (ulong)(uVar15 >> 3) & 0xffff;
            if ((uint)uVar28 < 0xfffd) {
              uVar22 = *(uint *)(lVar23 + uVar28);
            }
            else {
              uVar22 = (uVar15 >> 3) + 1;
              uVar21 = (uVar15 >> 3) + 2;
              uVar22 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar29 + (ulong)(uVar21 >> 0x10) * 8) +
                                       ((ulong)uVar21 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar29 + (ulong)(uVar22 >> 0x10) * 8) +
                                                ((ulong)uVar22 & 0xffff)),
                                               *(undefined *)(lVar23 + uVar28)));
            }
            uVar15 = uVar22 >> (ulong)(uVar15 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar22 = uVar15 & uVar6;
            uVar21 = param_8 - 1;
            if (uVar22 <= param_8 - 1) {
              uVar21 = uVar22;
            }
            plVar31 = (long *)(param_9 + (ulong)uVar21 * 0x18);
            uVar21 = (int)((ulong)(plVar31[1] - *plVar31) >> 3) * 0x684bda13;
            local_80 = uVar10;
            uStack_7c = uVar9;
            local_78 = uVar15;
            if (uVar21 != 0) {
              local_a8 = uVar10 >> (ulong)(local_16c & 0x1f);
              lVar29 = *(long *)param_4;
              uVar19 = (uVar11 * uVar12 + local_a8) * uVar13;
              lVar23 = *(long *)(lVar29 + (ulong)(uVar19 >> 0x13) * 8);
              uVar28 = (ulong)(uVar19 >> 3) & 0xffff;
              if ((uint)uVar28 < 0xfffd) {
                uVar26 = *(uint *)(lVar23 + uVar28);
              }
              else {
                uVar26 = (uVar19 >> 3) + 1;
                uVar20 = (uVar19 >> 3) + 2;
                uVar26 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar29 + (ulong)(uVar20 >> 0x10) * 8) +
                                         ((ulong)uVar20 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar29 + (ulong)(uVar26 >> 0x10) * 8) +
                                                  ((ulong)uVar26 & 0xffff)),
                                                 *(undefined *)(lVar23 + uVar28)));
              }
              local_d0 = uVar10 >> (ulong)(local_170 & 0x1f);
              uVar19 = uVar26 >> (ulong)(uVar19 & 7) & ~(-1 << (ulong)(uVar13 & 0x1f)) & 0xffffU;
              uVar26 = (((uVar14 >> 5) << (ulong)(*(uint *)param_6 & 0x1f)) + (local_d0 >> 5)) *
                       *(int *)(param_6 + 0x34);
              ppcVar18 = *(code ***)(*(long *)(param_6 + 0x28) + (ulong)uVar26 * 8);
              uVar20 = local_d0 & 0x1f | (uVar14 & 0x1f) << 5;
              uStack_cc = uVar14;
              uStack_a4 = uVar12;
              local_a0 = uVar19;
              uVar16 = (**ppcVar18)(ppcVar18,uVar20,0,*(undefined4 *)(param_6 + 0x3c));
              if (1 < *(uint *)(param_6 + 0x34)) {
                uVar28 = 1;
                puVar30 = (undefined4 *)(param_6 + 0x44);
                do {
                  ppcVar18 = *(code ***)
                              (*(long *)(param_6 + 0x28) + (ulong)(uVar26 + (int)uVar28) * 8);
                  iVar17 = (**ppcVar18)(ppcVar18,uVar20,0,*puVar30);
                  puVar1 = puVar30 + -1;
                  uVar28 = uVar28 + 1;
                  puVar30 = puVar30 + 2;
                  uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
                } while (uVar28 < *(uint *)(param_6 + 0x34));
              }
              if (uVar21 < 2) {
                uVar21 = 1;
              }
              lVar23 = 0;
              uVar26 = uVar19 & uVar7;
              local_c8 = uVar16;
              do {
                lVar29 = *plVar31;
                pIVar24 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<BitVector,false> *)(lVar29 + lVar23) + 0x78);
                if (pIVar24 == (IDensityPixelSource *)0x0) {
LAB_00837d70:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)(lVar29 + lVar23),
                             (HelperSource *)&local_98);
                }
                else {
                  lVar2 = lVar29 + lVar23;
                  if (pIVar24 == param_1) {
                    if ((*(int *)(lVar2 + 0x80) != 2) &&
                       ((*(int *)(lVar2 + 0x80) == 0) == (*(uint *)(lVar2 + 0x84) != uVar22)))
                    goto LAB_00837adc;
                    uVar20 = uVar15 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar20 < *(int *)(lVar2 + 0x90)) {
LAB_00837c18:
                      cVar3 = *(char *)(lVar29 + lVar23 + 0x98);
                    }
                    else {
LAB_00837bb0:
                      cVar3 = *(char *)(lVar29 + lVar23 + 0x98);
                    }
                    if ((cVar3 != '\0') &&
                       ((uVar27 = *(uint *)(lVar29 + lVar23 + 0x9c), uVar27 == 0 ||
                        ((uVar27 & uVar20) != 0)))) {
                      pIVar24 = *(IDensityPixelSource **)(lVar29 + lVar23 + 0xa8);
                      if (pIVar24 == (IDensityPixelSource *)0x0) goto LAB_00837d70;
                      lVar2 = lVar29 + lVar23;
                      if (pIVar24 == param_1) {
                        if ((*(int *)(lVar2 + 0xb0) != 2) &&
                           ((*(int *)(lVar2 + 0xb0) == 0) == (*(uint *)(lVar2 + 0xb4) != uVar22)))
                        goto LAB_00837adc;
                        uVar20 = uVar15 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                 (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar20 < *(int *)(lVar2 + 0xc0)) goto LAB_00837d4c;
LAB_00837ce4:
                        cVar3 = *(char *)(lVar29 + lVar23 + 200);
joined_r0x00837d58:
                        if ((cVar3 == '\0') &&
                           ((uVar27 = *(uint *)(lVar29 + lVar23 + 0xcc), uVar27 == 0 ||
                            ((uVar27 & uVar20) != 0)))) goto LAB_00837d70;
                      }
                      else {
                        iVar17 = *(int *)(lVar2 + 0xb0);
                        if (pIVar24 == param_3) {
                          if ((iVar17 == 2) ||
                             ((iVar17 == 0) != (*(uint *)(lVar29 + lVar23 + 0xb4) != uVar26))) {
                            lVar2 = lVar29 + lVar23;
                            uVar27 = *(uint *)(lVar2 + 0xbc);
                            iVar17 = *(int *)(lVar2 + 0xc0);
                            uVar20 = uVar19 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
                            goto LAB_00837d3c;
                          }
                        }
                        else if ((iVar17 == 2) ||
                                ((iVar17 == 0) !=
                                 (*(uint *)(lVar29 + lVar23 + 0xb4) != (uVar16 & uVar8)))) {
                          lVar2 = lVar29 + lVar23;
                          uVar27 = *(uint *)(lVar2 + 0xbc);
                          iVar17 = *(int *)(lVar2 + 0xc0);
                          uVar20 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
LAB_00837d3c:
                          uVar20 = uVar20 & (-1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
                          if (iVar17 <= (int)uVar20) goto LAB_00837ce4;
LAB_00837d4c:
                          cVar3 = *(char *)(lVar29 + lVar23 + 200);
                          goto joined_r0x00837d58;
                        }
                      }
                    }
                  }
                  else {
                    iVar17 = *(int *)(lVar2 + 0x80);
                    if (pIVar24 == param_3) {
                      if ((iVar17 == 2) ||
                         ((iVar17 == 0) != (*(uint *)(lVar29 + lVar23 + 0x84) != uVar26))) {
                        lVar2 = lVar29 + lVar23;
                        uVar27 = *(uint *)(lVar2 + 0x8c);
                        iVar17 = *(int *)(lVar2 + 0x90);
                        uVar20 = uVar19 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
                        goto LAB_00837c08;
                      }
                    }
                    else if ((iVar17 == 2) ||
                            ((iVar17 == 0) !=
                             (*(uint *)(lVar29 + lVar23 + 0x84) != (uVar16 & uVar8)))) {
                      lVar2 = lVar29 + lVar23;
                      uVar27 = *(uint *)(lVar2 + 0x8c);
                      iVar17 = *(int *)(lVar2 + 0x90);
                      uVar20 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
LAB_00837c08:
                      uVar20 = uVar20 & (-1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar20 < iVar17) goto LAB_00837c18;
                      goto LAB_00837bb0;
                    }
                  }
LAB_00837adc:
                  *(int *)(lVar29 + lVar23 + 4) = *(int *)(lVar29 + lVar23 + 4) + 1;
                }
                lVar23 = lVar23 + 0xd8;
              } while ((ulong)uVar21 * 0xd8 - lVar23 != 0);
              if (uVar15 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_7 + 0x5c));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_7 + 0x4c));
    }
  }
  if (param_8 != 0) {
    uVar28 = 0;
    do {
      plVar31 = (long *)(param_9 + uVar28 * 0x18);
      lVar23 = *plVar31;
      lVar29 = plVar31[1];
      if (lVar29 != lVar23) {
        uVar32 = 0;
        do {
          if (*(char *)(lVar23 + uVar32 * 0xd8 + 0x6c) != '\0') {
            lVar23 = lVar23 + uVar32 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar23 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar23 + 0x24),*(uint *)(lVar23 + 0x28),*(uint *)(lVar23 + 0x70),
                       *(bool *)(lVar23 + 0x6d),true,true);
            lVar29 = plVar31[1];
            lVar23 = *plVar31;
          }
          uVar32 = (ulong)((int)uVar32 + 1);
          uVar25 = (lVar29 - lVar23 >> 3) * -0x7b425ed097b425ed;
        } while (uVar32 <= uVar25 && uVar25 - uVar32 != 0);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != param_8);
  }
  bVar5 = true;
LAB_00838244:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


