// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083545c
// Size: 3992 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, ChunkedBitSquare * param_4, IDensityPixelSource * param_5, BitVector * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector, ChunkedBitSquare,
   BitVector, ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(IDensityPixelSource*, BitVector*, IDensityPixelSource const*, ChunkedBitSquare*,
   IDensityPixelSource const*, BitVector*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               ChunkedBitSquare *param_4,IDensityPixelSource *param_5,BitVector *param_6,
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
  uint uVar23;
  long lVar24;
  IDensityPixelSource *pIVar25;
  ulong uVar26;
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
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  BitVector *local_d8;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
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
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = param_4;
  uVar13 = (**(code **)(*(long *)param_5 + 0x18))(param_5);
  local_e8 = uVar13;
  uVar14 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  local_e4 = uVar14;
  uVar15 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_e0 = uVar15;
  local_d8 = param_6;
  if ((((uVar9 < uVar11) || (uVar10 < uVar12)) || (uVar9 < uVar13)) || (uVar10 < uVar14)) {
    if (((uVar11 < uVar9) || (uVar12 < uVar10)) || ((uVar13 < uVar9 || (uVar14 < uVar10)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 008363b8 to 008363c3 has its CatchHandler @ 008363f4 */
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
      goto LAB_00836374;
    }
    uVar15 = 0;
    if (uVar9 != 0) {
      uVar15 = uVar11 / uVar9;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar12 / uVar10;
    }
    uVar34 = NEON_cnt((ulong)uVar15,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar15 & 0xffff0000) != 0;
      uVar12 = uVar15 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar15;
      }
      uVar19 = (uint)bVar5;
      uVar23 = uVar19 << 4 | 8;
      uVar22 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar23 = uVar19 << 4;
        uVar22 = uVar12;
      }
      uVar12 = uVar23 | 4;
      uVar19 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar12 = uVar23;
        uVar19 = uVar22;
      }
      uVar23 = uVar12 | 2;
      uVar22 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar23 = uVar12;
        uVar22 = uVar19;
      }
      local_150 = (uVar22 + uVar23) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar34 = NEON_cnt((ulong)uVar11,1);
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar13 / uVar9;
    }
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar11;
      }
      uVar22 = (uint)bVar5;
      uVar13 = uVar22 << 4 | 8;
      uVar23 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar22 << 4;
        uVar23 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar22 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar9 = uVar13;
        uVar22 = uVar23;
      }
      uVar13 = uVar9 | 2;
      uVar23 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar13 = uVar9;
        uVar23 = uVar22;
      }
      local_158 = (uVar23 + uVar13) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar14 / uVar10;
    }
    uVar34 = NEON_cnt((ulong)uVar12,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar12;
      }
      uVar23 = (uint)bVar5;
      uVar13 = uVar23 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar23 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar23 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar23 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar23;
      }
      local_154 = (uVar14 + uVar13) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar34 = NEON_cnt((ulong)uVar9,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar9;
      }
      uVar23 = (uint)bVar5;
      uVar13 = uVar23 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar23 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar23 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar23 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar23;
      }
      local_15c = (uVar14 + uVar13) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar10 = *(uint *)(param_7 + 0x48);
    if (uVar10 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar10);
        uVar13 = *(uint *)(param_7 + 0x58);
        if (uVar13 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar29 = *local_88;
            uVar14 = (uVar13 + local_98 * uVar10) * local_90;
            lVar24 = *(long *)(lVar29 + (ulong)(uVar14 >> 0x13) * 8);
            uVar28 = (ulong)(uVar14 >> 3) & 0xffff;
            if ((uint)uVar28 < 0xfffd) {
              uVar23 = *(uint *)(lVar24 + uVar28);
            }
            else {
              uVar23 = (uVar14 >> 3) + 1;
              uVar22 = (uVar14 >> 3) + 2;
              uVar23 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar29 + (ulong)(uVar22 >> 0x10) * 8) +
                                       ((ulong)uVar22 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar29 + (ulong)(uVar23 >> 0x10) * 8) +
                                                ((ulong)uVar23 & 0xffff)),
                                               *(undefined *)(lVar24 + uVar28)));
            }
            local_78 = uVar23 >> (ulong)(uVar14 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar14 = local_78 & uVar6;
            uVar23 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar23 = uVar14;
            }
            plVar31 = (long *)(param_9 + (ulong)uVar23 * 0x18);
            lVar24 = *plVar31;
            uVar28 = (plVar31[1] - lVar24 >> 3) * 0x684bda13;
            local_80 = uVar13;
            uStack_7c = uVar10;
            if ((int)uVar28 != 0) {
              lVar29 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar24 + lVar29);
                bVar5 = checkTypedModuleMasks2<ChunkedBitSquare,BitVector,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar14,uVar14,(HelperSource *)&local_c0,param_3,
                                   uVar7,uVar13 << (ulong)(local_150 & 0x1f),
                                   uVar10 << (ulong)(local_158 & 0x1f),uVar15,uVar11,
                                   (HelperSource *)&local_e8,param_5,uVar8,
                                   uVar13 << (ulong)(local_154 & 0x1f),
                                   uVar10 << (ulong)(local_15c & 0x1f),uVar12,uVar9);
                if (bVar5) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar28 & 0xffffffff) * 0xd8 + -0xd8 == lVar29) break;
                lVar24 = *plVar31;
                lVar29 = lVar29 + 0xd8;
              }
            }
            if (uVar14 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(param_7 + 0x5c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar23 = 0;
    if (uVar11 != 0) {
      uVar23 = uVar9 / uVar11;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar10 / uVar12;
    }
    uVar34 = NEON_cnt((ulong)uVar23,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar23 & 0xffff0000) != 0;
      uVar12 = uVar23 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar23;
      }
      uVar19 = (uint)bVar5;
      uVar23 = uVar19 << 4 | 8;
      uVar22 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar23 = uVar19 << 4;
        uVar22 = uVar12;
      }
      uVar12 = uVar23 | 4;
      uVar19 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar12 = uVar23;
        uVar19 = uVar22;
      }
      uVar23 = uVar12 | 2;
      uVar22 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar23 = uVar12;
        uVar22 = uVar19;
      }
      local_16c = (uVar22 + uVar23) - 1;
    }
    else {
      local_16c = 0;
    }
    uVar34 = NEON_cnt((ulong)uVar11,1);
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar9 / uVar13;
    }
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar11;
      }
      uVar22 = (uint)bVar5;
      uVar11 = uVar22 << 4 | 8;
      uVar23 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar11 = uVar22 << 4;
        uVar23 = uVar9;
      }
      uVar9 = uVar11 | 4;
      uVar22 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar9 = uVar11;
        uVar22 = uVar23;
      }
      uVar11 = uVar9 | 2;
      uVar23 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar11 = uVar9;
        uVar23 = uVar22;
      }
      local_188 = (uVar23 + uVar11) - 1;
    }
    else {
      local_188 = 0;
    }
    uVar9 = 0;
    if (uVar14 != 0) {
      uVar9 = uVar10 / uVar14;
    }
    uVar34 = NEON_cnt((ulong)uVar12,1);
    uVar33 = NEON_uaddlv(uVar34,1);
    if ((int)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) == 1) {
      bVar5 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar12;
      }
      uVar14 = (uint)bVar5;
      uVar11 = uVar14 << 4 | 8;
      uVar12 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar11 = uVar14 << 4;
        uVar12 = uVar10;
      }
      uVar10 = uVar11 | 4;
      uVar14 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar10 = uVar11;
        uVar14 = uVar12;
      }
      uVar11 = uVar10 | 2;
      uVar12 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar11 = uVar10;
        uVar12 = uVar14;
      }
      local_170 = (uVar12 + uVar11) - 1;
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
      uVar12 = (uint)bVar5;
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
      local_18c = (uVar11 + uVar9) - 1;
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
          uVar11 = uVar9 >> (ulong)(local_18c & 0x1f);
          uVar12 = uVar9 >> (ulong)(local_188 & 0x1f);
          do {
            lVar29 = *local_88;
            uVar14 = (uVar10 + local_98 * uVar9) * local_90;
            lVar24 = *(long *)(lVar29 + (ulong)(uVar14 >> 0x13) * 8);
            uVar28 = (ulong)(uVar14 >> 3) & 0xffff;
            if ((uint)uVar28 < 0xfffd) {
              uVar23 = *(uint *)(lVar24 + uVar28);
            }
            else {
              uVar23 = (uVar14 >> 3) + 1;
              uVar22 = (uVar14 >> 3) + 2;
              uVar23 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar29 + (ulong)(uVar22 >> 0x10) * 8) +
                                       ((ulong)uVar22 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar29 + (ulong)(uVar23 >> 0x10) * 8) +
                                                ((ulong)uVar23 & 0xffff)),
                                               *(undefined *)(lVar24 + uVar28)));
            }
            uVar14 = uVar23 >> (ulong)(uVar14 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar23 = uVar14 & uVar6;
            uVar22 = param_8 - 1;
            if (uVar23 <= param_8 - 1) {
              uVar22 = uVar23;
            }
            plVar31 = (long *)(param_9 + (ulong)uVar22 * 0x18);
            uVar22 = (int)((ulong)(plVar31[1] - *plVar31) >> 3) * 0x684bda13;
            local_80 = uVar10;
            uStack_7c = uVar9;
            local_78 = uVar14;
            if (uVar22 != 0) {
              local_a8 = uVar10 >> (ulong)(local_16c & 0x1f);
              uVar19 = (((uVar12 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (local_a8 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar18 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar19 * 8);
              uVar20 = local_a8 & 0x1f | (uVar12 & 0x1f) << 5;
              uStack_a4 = uVar12;
              uVar16 = (**ppcVar18)(ppcVar18,uVar20,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar28 = 1;
                puVar30 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar18 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar19 + (int)uVar28) * 8);
                  iVar17 = (**ppcVar18)(ppcVar18,uVar20,0,*puVar30);
                  puVar1 = puVar30 + -1;
                  uVar28 = uVar28 + 1;
                  puVar30 = puVar30 + 2;
                  uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
                } while (uVar28 < *(uint *)(param_4 + 0x34));
              }
              local_d0 = uVar10 >> (ulong)(local_170 & 0x1f);
              lVar29 = *(long *)param_6;
              uVar19 = (uVar13 * uVar11 + local_d0) * uVar15;
              lVar24 = *(long *)(lVar29 + (ulong)(uVar19 >> 0x13) * 8);
              uVar28 = (ulong)(uVar19 >> 3) & 0xffff;
              if ((uint)uVar28 < 0xfffd) {
                uVar20 = *(uint *)(lVar24 + uVar28);
              }
              else {
                uVar20 = (uVar19 >> 3) + 1;
                uVar21 = (uVar19 >> 3) + 2;
                uVar20 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar29 + (ulong)(uVar21 >> 0x10) * 8) +
                                         ((ulong)uVar21 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar29 + (ulong)(uVar20 >> 0x10) * 8) +
                                                  ((ulong)uVar20 & 0xffff)),
                                                 *(undefined *)(lVar24 + uVar28)));
              }
              if (uVar22 < 2) {
                uVar22 = 1;
              }
              lVar24 = 0;
              uVar19 = uVar20 >> (ulong)(uVar19 & 7) & ~(-1 << (ulong)(uVar15 & 0x1f)) & 0xffffU;
              uVar20 = uVar19 & uVar8;
              uStack_cc = uVar11;
              local_c8 = uVar19;
              local_a0 = uVar16;
              do {
                lVar29 = *plVar31;
                pIVar25 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<BitVector,false> *)(lVar29 + lVar24) + 0x78);
                if (pIVar25 == (IDensityPixelSource *)0x0) {
LAB_00835e9c:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)(lVar29 + lVar24),
                             (HelperSource *)&local_98);
                }
                else {
                  lVar2 = lVar29 + lVar24;
                  if (pIVar25 == param_1) {
                    if ((*(int *)(lVar2 + 0x80) != 2) &&
                       ((*(int *)(lVar2 + 0x80) == 0) == (*(uint *)(lVar2 + 0x84) != uVar23)))
                    goto LAB_00835c08;
                    uVar21 = uVar14 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar21 < *(int *)(lVar2 + 0x90)) {
LAB_00835d44:
                      cVar3 = *(char *)(lVar29 + lVar24 + 0x98);
                    }
                    else {
LAB_00835cdc:
                      cVar3 = *(char *)(lVar29 + lVar24 + 0x98);
                    }
                    if ((cVar3 != '\0') &&
                       ((uVar27 = *(uint *)(lVar29 + lVar24 + 0x9c), uVar27 == 0 ||
                        ((uVar27 & uVar21) != 0)))) {
                      pIVar25 = *(IDensityPixelSource **)(lVar29 + lVar24 + 0xa8);
                      if (pIVar25 == (IDensityPixelSource *)0x0) goto LAB_00835e9c;
                      lVar2 = lVar29 + lVar24;
                      if (pIVar25 == param_1) {
                        if ((*(int *)(lVar2 + 0xb0) != 2) &&
                           ((*(int *)(lVar2 + 0xb0) == 0) == (*(uint *)(lVar2 + 0xb4) != uVar23)))
                        goto LAB_00835c08;
                        uVar21 = uVar14 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                 (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar21 < *(int *)(lVar2 + 0xc0)) goto LAB_00835e78;
LAB_00835e14:
                        cVar3 = *(char *)(lVar29 + lVar24 + 200);
joined_r0x00835e84:
                        if ((cVar3 == '\0') &&
                           ((uVar27 = *(uint *)(lVar29 + lVar24 + 0xcc), uVar27 == 0 ||
                            ((uVar27 & uVar21) != 0)))) goto LAB_00835e9c;
                      }
                      else {
                        iVar17 = *(int *)(lVar2 + 0xb0);
                        if (pIVar25 == param_3) {
                          if ((iVar17 == 2) ||
                             ((iVar17 == 0) !=
                              (*(uint *)(lVar29 + lVar24 + 0xb4) != (uVar16 & uVar7)))) {
                            lVar2 = lVar29 + lVar24;
                            uVar27 = *(uint *)(lVar2 + 0xbc);
                            iVar17 = *(int *)(lVar2 + 0xc0);
                            uVar21 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
                            goto LAB_00835e68;
                          }
                        }
                        else if ((iVar17 == 2) ||
                                ((iVar17 == 0) != (*(uint *)(lVar29 + lVar24 + 0xb4) != uVar20))) {
                          lVar2 = lVar29 + lVar24;
                          uVar27 = *(uint *)(lVar2 + 0xbc);
                          iVar17 = *(int *)(lVar2 + 0xc0);
                          uVar21 = uVar19 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
LAB_00835e68:
                          uVar21 = uVar21 & (-1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
                          if (iVar17 <= (int)uVar21) goto LAB_00835e14;
LAB_00835e78:
                          cVar3 = *(char *)(lVar29 + lVar24 + 200);
                          goto joined_r0x00835e84;
                        }
                      }
                    }
                  }
                  else {
                    iVar17 = *(int *)(lVar2 + 0x80);
                    if (pIVar25 == param_3) {
                      if ((iVar17 == 2) ||
                         ((iVar17 == 0) != (*(uint *)(lVar29 + lVar24 + 0x84) != (uVar16 & uVar7))))
                      {
                        lVar2 = lVar29 + lVar24;
                        uVar27 = *(uint *)(lVar2 + 0x8c);
                        iVar17 = *(int *)(lVar2 + 0x90);
                        uVar21 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
                        goto LAB_00835d34;
                      }
                    }
                    else if ((iVar17 == 2) ||
                            ((iVar17 == 0) != (*(uint *)(lVar29 + lVar24 + 0x84) != uVar20))) {
                      lVar2 = lVar29 + lVar24;
                      uVar27 = *(uint *)(lVar2 + 0x8c);
                      iVar17 = *(int *)(lVar2 + 0x90);
                      uVar21 = uVar19 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
LAB_00835d34:
                      uVar21 = uVar21 & (-1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar21 < iVar17) goto LAB_00835d44;
                      goto LAB_00835cdc;
                    }
                  }
LAB_00835c08:
                  *(int *)(lVar29 + lVar24 + 4) = *(int *)(lVar29 + lVar24 + 4) + 1;
                }
                lVar24 = lVar24 + 0xd8;
              } while ((ulong)uVar22 * 0xd8 - lVar24 != 0);
              if (uVar14 != local_78) {
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
      lVar24 = *plVar31;
      lVar29 = plVar31[1];
      if (lVar29 != lVar24) {
        uVar32 = 0;
        do {
          if (*(char *)(lVar24 + uVar32 * 0xd8 + 0x6c) != '\0') {
            lVar24 = lVar24 + uVar32 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar24 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar24 + 0x24),*(uint *)(lVar24 + 0x28),*(uint *)(lVar24 + 0x70),
                       *(bool *)(lVar24 + 0x6d),true,true);
            lVar29 = plVar31[1];
            lVar24 = *plVar31;
          }
          uVar32 = (ulong)((int)uVar32 + 1);
          uVar26 = (lVar29 - lVar24 >> 3) * -0x7b425ed097b425ed;
        } while (uVar32 <= uVar26 && uVar26 - uVar32 != 0);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != param_8);
  }
  bVar5 = true;
LAB_00836374:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


