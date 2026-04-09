// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083449c
// Size: 4008 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, ChunkedBitSquare * param_4, IDensityPixelSource * param_5, ChunkedBitSquare * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector, ChunkedBitSquare,
   ChunkedBitSquare, ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> >(IDensityPixelSource*, BitVector*, IDensityPixelSource const*, ChunkedBitSquare*,
   IDensityPixelSource const*, ChunkedBitSquare*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               ChunkedBitSquare *param_4,IDensityPixelSource *param_5,ChunkedBitSquare *param_6,
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
  int iVar16;
  uint uVar17;
  code **ppcVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  IDensityPixelSource *pIVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  undefined4 *puVar28;
  ulong uVar29;
  undefined2 uVar30;
  undefined8 uVar31;
  uint local_180;
  uint local_17c;
  uint local_164;
  uint local_160;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  ChunkedBitSquare *local_d8;
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
  local_e0 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_d8 = param_6;
  if ((((uVar9 < uVar11) || (uVar10 < uVar12)) || (uVar9 < uVar13)) || (uVar10 < uVar14)) {
    if (((uVar11 < uVar9) || (uVar12 < uVar10)) || ((uVar13 < uVar9 || (uVar14 < uVar10)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar16 != 0
         )) {
                    /* try { // try from 00835408 to 00835413 has its CatchHandler @ 00835444 */
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
      goto LAB_008353c4;
    }
    uVar24 = 0;
    if (uVar9 != 0) {
      uVar24 = uVar11 / uVar9;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar12 / uVar10;
    }
    uVar31 = NEON_cnt((ulong)uVar24,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar24 & 0xffff0000) != 0;
      uVar12 = uVar24 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar24;
      }
      uVar15 = (uint)bVar5;
      uVar20 = uVar15 << 4 | 8;
      uVar19 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar20 = uVar15 << 4;
        uVar19 = uVar12;
      }
      uVar12 = uVar20 | 4;
      uVar15 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar12 = uVar20;
        uVar15 = uVar19;
      }
      uVar20 = uVar12 | 2;
      uVar19 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar20 = uVar12;
        uVar19 = uVar15;
      }
      local_148 = (uVar19 + uVar20) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar13 / uVar9;
    }
    uVar31 = NEON_cnt((ulong)uVar11,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar11;
      }
      uVar19 = (uint)bVar5;
      uVar13 = uVar19 << 4 | 8;
      uVar20 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar20 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar19 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar9 = uVar13;
        uVar19 = uVar20;
      }
      uVar13 = uVar9 | 2;
      uVar20 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar9;
        uVar20 = uVar19;
      }
      local_150 = (uVar20 + uVar13) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar14 / uVar10;
    }
    uVar31 = NEON_cnt((ulong)uVar12,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar12;
      }
      uVar20 = (uint)bVar5;
      uVar13 = uVar20 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar20 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar20 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar20 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar20;
      }
      local_14c = (uVar14 + uVar13) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar31 = NEON_cnt((ulong)uVar9,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar9;
      }
      uVar20 = (uint)bVar5;
      uVar13 = uVar20 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar20 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar20 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar20 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar20;
      }
      local_154 = (uVar14 + uVar13) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar10 = *(uint *)(param_7 + 0x48);
    if (uVar10 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar10);
        uVar13 = *(uint *)(param_7 + 0x58);
        if (uVar13 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar26 = *local_88;
            uVar14 = (uVar13 + local_98 * uVar10) * local_90;
            lVar21 = *(long *)(lVar26 + (ulong)(uVar14 >> 0x13) * 8);
            uVar25 = (ulong)(uVar14 >> 3) & 0xffff;
            if ((uint)uVar25 < 0xfffd) {
              uVar20 = *(uint *)(lVar21 + uVar25);
            }
            else {
              uVar20 = (uVar14 >> 3) + 1;
              uVar19 = (uVar14 >> 3) + 2;
              uVar20 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar19 >> 0x10) * 8) +
                                       ((ulong)uVar19 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar20 >> 0x10) * 8) +
                                                ((ulong)uVar20 & 0xffff)),
                                               *(undefined *)(lVar21 + uVar25)));
            }
            local_78 = uVar20 >> (ulong)(uVar14 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar14 = local_78 & uVar6;
            uVar20 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar20 = uVar14;
            }
            plVar27 = (long *)(param_9 + (ulong)uVar20 * 0x18);
            lVar21 = *plVar27;
            uVar25 = (plVar27[1] - lVar21 >> 3) * 0x684bda13;
            local_80 = uVar13;
            uStack_7c = uVar10;
            if ((int)uVar25 != 0) {
              lVar26 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar21 + lVar26);
                bVar5 = checkTypedModuleMasks2<ChunkedBitSquare,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar14,uVar14,(HelperSource *)&local_c0,param_3,
                                   uVar7,uVar13 << (ulong)(local_148 & 0x1f),
                                   uVar10 << (ulong)(local_150 & 0x1f),uVar24,uVar11,
                                   (HelperSource *)&local_e8,param_5,uVar8,
                                   uVar13 << (ulong)(local_14c & 0x1f),
                                   uVar10 << (ulong)(local_154 & 0x1f),uVar12,uVar9);
                if (bVar5) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar25 & 0xffffffff) * 0xd8 + -0xd8 == lVar26) break;
                lVar21 = *plVar27;
                lVar26 = lVar26 + 0xd8;
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
    uVar24 = 0;
    if (uVar11 != 0) {
      uVar24 = uVar9 / uVar11;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar10 / uVar12;
    }
    uVar31 = NEON_cnt((ulong)uVar24,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar24 & 0xffff0000) != 0;
      uVar12 = uVar24 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar24;
      }
      uVar19 = (uint)bVar5;
      uVar24 = uVar19 << 4 | 8;
      uVar20 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar24 = uVar19 << 4;
        uVar20 = uVar12;
      }
      uVar12 = uVar24 | 4;
      uVar19 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar12 = uVar24;
        uVar19 = uVar20;
      }
      uVar24 = uVar12 | 2;
      uVar20 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar24 = uVar12;
        uVar20 = uVar19;
      }
      local_160 = (uVar20 + uVar24) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar9 / uVar13;
    }
    uVar31 = NEON_cnt((ulong)uVar11,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar11;
      }
      uVar24 = (uint)bVar5;
      uVar11 = uVar24 << 4 | 8;
      uVar13 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar11 = uVar24 << 4;
        uVar13 = uVar9;
      }
      uVar9 = uVar11 | 4;
      uVar24 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar9 = uVar11;
        uVar24 = uVar13;
      }
      uVar11 = uVar9 | 2;
      uVar13 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar11 = uVar9;
        uVar13 = uVar24;
      }
      local_17c = (uVar13 + uVar11) - 1;
    }
    else {
      local_17c = 0;
    }
    uVar9 = 0;
    if (uVar14 != 0) {
      uVar9 = uVar10 / uVar14;
    }
    uVar31 = NEON_cnt((ulong)uVar12,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar12;
      }
      uVar13 = (uint)bVar5;
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
      local_164 = (uVar12 + uVar11) - 1;
    }
    else {
      local_164 = 0;
    }
    uVar31 = NEON_cnt((ulong)uVar9,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
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
      local_180 = (uVar11 + uVar9) - 1;
    }
    else {
      local_180 = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar10 = *(uint *)(param_7 + 0x58);
        if (uVar10 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar9 >> (ulong)(local_17c & 0x1f);
          uVar12 = uVar9 >> (ulong)(local_180 & 0x1f);
          do {
            lVar26 = *local_88;
            uVar13 = (uVar10 + local_98 * uVar9) * local_90;
            lVar21 = *(long *)(lVar26 + (ulong)(uVar13 >> 0x13) * 8);
            uVar25 = (ulong)(uVar13 >> 3) & 0xffff;
            if ((uint)uVar25 < 0xfffd) {
              uVar14 = *(uint *)(lVar21 + uVar25);
            }
            else {
              uVar14 = (uVar13 >> 3) + 1;
              uVar24 = (uVar13 >> 3) + 2;
              uVar14 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar24 >> 0x10) * 8) +
                                       ((ulong)uVar24 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar14 >> 0x10) * 8) +
                                                ((ulong)uVar14 & 0xffff)),
                                               *(undefined *)(lVar21 + uVar25)));
            }
            uVar14 = uVar14 >> (ulong)(uVar13 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU);
            local_78 = uVar14 & 0xffff;
            uVar13 = local_78 & uVar6;
            uVar14 = uVar14 & 0xffff;
            uVar24 = param_8 - 1;
            if (uVar13 <= param_8 - 1) {
              uVar24 = uVar13;
            }
            plVar27 = (long *)(param_9 + (ulong)uVar24 * 0x18);
            uVar24 = (int)((ulong)(plVar27[1] - *plVar27) >> 3) * 0x684bda13;
            local_80 = uVar10;
            uStack_7c = uVar9;
            if (uVar24 != 0) {
              local_a8 = uVar10 >> (ulong)(local_160 & 0x1f);
              uVar20 = (((uVar11 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (local_a8 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar18 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar20 * 8);
              uVar19 = local_a8 & 0x1f | (uVar11 & 0x1f) << 5;
              uStack_a4 = uVar11;
              uVar15 = (**ppcVar18)(ppcVar18,uVar19,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar25 = 1;
                puVar28 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar18 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar20 + (int)uVar25) * 8);
                  iVar16 = (**ppcVar18)(ppcVar18,uVar19,0,*puVar28);
                  puVar1 = puVar28 + -1;
                  uVar25 = uVar25 + 1;
                  puVar28 = puVar28 + 2;
                  uVar15 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar15;
                } while (uVar25 < *(uint *)(param_4 + 0x34));
              }
              local_d0 = uVar10 >> (ulong)(local_164 & 0x1f);
              uVar20 = (((uVar12 >> 5) << (ulong)(*(uint *)param_6 & 0x1f)) + (local_d0 >> 5)) *
                       *(int *)(param_6 + 0x34);
              ppcVar18 = *(code ***)(*(long *)(param_6 + 0x28) + (ulong)uVar20 * 8);
              uVar19 = local_d0 & 0x1f | (uVar12 & 0x1f) << 5;
              uStack_cc = uVar12;
              local_a0 = uVar15;
              uVar17 = (**ppcVar18)(ppcVar18,uVar19,0,*(undefined4 *)(param_6 + 0x3c));
              if (1 < *(uint *)(param_6 + 0x34)) {
                uVar25 = 1;
                puVar28 = (undefined4 *)(param_6 + 0x44);
                do {
                  ppcVar18 = *(code ***)
                              (*(long *)(param_6 + 0x28) + (ulong)(uVar20 + (int)uVar25) * 8);
                  iVar16 = (**ppcVar18)(ppcVar18,uVar19,0,*puVar28);
                  puVar1 = puVar28 + -1;
                  uVar25 = uVar25 + 1;
                  puVar28 = puVar28 + 2;
                  uVar17 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar17;
                } while (uVar25 < *(uint *)(param_6 + 0x34));
              }
              if (uVar24 < 2) {
                uVar24 = 1;
              }
              lVar21 = 0;
              local_c8 = uVar17;
              do {
                lVar26 = *plVar27;
                pIVar22 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<BitVector,false> *)(lVar26 + lVar21) + 0x78);
                if (pIVar22 == (IDensityPixelSource *)0x0) {
LAB_00834ee4:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)(lVar26 + lVar21),
                             (HelperSource *)&local_98);
                }
                else {
                  lVar2 = lVar26 + lVar21;
                  if (pIVar22 == param_1) {
                    if ((*(int *)(lVar2 + 0x80) != 2) &&
                       ((*(int *)(lVar2 + 0x80) == 0) == (*(uint *)(lVar2 + 0x84) != uVar13)))
                    goto LAB_00834c44;
                    uVar20 = uVar14 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar20 < *(int *)(lVar2 + 0x90)) {
LAB_00834d88:
                      cVar3 = *(char *)(lVar26 + lVar21 + 0x98);
                    }
                    else {
LAB_00834d20:
                      cVar3 = *(char *)(lVar26 + lVar21 + 0x98);
                    }
                    if ((cVar3 != '\0') &&
                       ((uVar19 = *(uint *)(lVar26 + lVar21 + 0x9c), uVar19 == 0 ||
                        ((uVar19 & uVar20) != 0)))) {
                      pIVar22 = *(IDensityPixelSource **)(lVar26 + lVar21 + 0xa8);
                      if (pIVar22 == (IDensityPixelSource *)0x0) goto LAB_00834ee4;
                      lVar2 = lVar26 + lVar21;
                      if (pIVar22 == param_1) {
                        if ((*(int *)(lVar2 + 0xb0) != 2) &&
                           ((*(int *)(lVar2 + 0xb0) == 0) == (*(uint *)(lVar2 + 0xb4) != uVar13)))
                        goto LAB_00834c44;
                        uVar20 = uVar14 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                 (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar20 < *(int *)(lVar2 + 0xc0)) goto LAB_00834ec0;
LAB_00834e5c:
                        cVar3 = *(char *)(lVar26 + lVar21 + 200);
joined_r0x00834ecc:
                        if ((cVar3 == '\0') &&
                           ((uVar19 = *(uint *)(lVar26 + lVar21 + 0xcc), uVar19 == 0 ||
                            ((uVar19 & uVar20) != 0)))) goto LAB_00834ee4;
                      }
                      else {
                        iVar16 = *(int *)(lVar2 + 0xb0);
                        if (pIVar22 == param_3) {
                          if ((iVar16 == 2) ||
                             ((iVar16 == 0) !=
                              (*(uint *)(lVar26 + lVar21 + 0xb4) != (uVar15 & uVar7)))) {
                            lVar2 = lVar26 + lVar21;
                            uVar19 = *(uint *)(lVar2 + 0xbc);
                            iVar16 = *(int *)(lVar2 + 0xc0);
                            uVar20 = uVar15 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
                            goto LAB_00834eb0;
                          }
                        }
                        else if ((iVar16 == 2) ||
                                ((iVar16 == 0) !=
                                 (*(uint *)(lVar26 + lVar21 + 0xb4) != (uVar17 & uVar8)))) {
                          lVar2 = lVar26 + lVar21;
                          uVar19 = *(uint *)(lVar2 + 0xbc);
                          iVar16 = *(int *)(lVar2 + 0xc0);
                          uVar20 = uVar17 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
LAB_00834eb0:
                          uVar20 = uVar20 & (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
                          if (iVar16 <= (int)uVar20) goto LAB_00834e5c;
LAB_00834ec0:
                          cVar3 = *(char *)(lVar26 + lVar21 + 200);
                          goto joined_r0x00834ecc;
                        }
                      }
                    }
                  }
                  else {
                    iVar16 = *(int *)(lVar2 + 0x80);
                    if (pIVar22 == param_3) {
                      if ((iVar16 == 2) ||
                         ((iVar16 == 0) != (*(uint *)(lVar26 + lVar21 + 0x84) != (uVar15 & uVar7))))
                      {
                        lVar2 = lVar26 + lVar21;
                        uVar19 = *(uint *)(lVar2 + 0x8c);
                        iVar16 = *(int *)(lVar2 + 0x90);
                        uVar20 = uVar15 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
                        goto LAB_00834d78;
                      }
                    }
                    else if ((iVar16 == 2) ||
                            ((iVar16 == 0) !=
                             (*(uint *)(lVar26 + lVar21 + 0x84) != (uVar17 & uVar8)))) {
                      lVar2 = lVar26 + lVar21;
                      uVar19 = *(uint *)(lVar2 + 0x8c);
                      iVar16 = *(int *)(lVar2 + 0x90);
                      uVar20 = uVar17 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
LAB_00834d78:
                      uVar20 = uVar20 & (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar20 < iVar16) goto LAB_00834d88;
                      goto LAB_00834d20;
                    }
                  }
LAB_00834c44:
                  *(int *)(lVar26 + lVar21 + 4) = *(int *)(lVar26 + lVar21 + 4) + 1;
                }
                lVar21 = lVar21 + 0xd8;
              } while ((ulong)uVar24 * 0xd8 - lVar21 != 0);
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
    uVar25 = 0;
    do {
      plVar27 = (long *)(param_9 + uVar25 * 0x18);
      lVar21 = *plVar27;
      lVar26 = plVar27[1];
      if (lVar26 != lVar21) {
        uVar29 = 0;
        do {
          if (*(char *)(lVar21 + uVar29 * 0xd8 + 0x6c) != '\0') {
            lVar21 = lVar21 + uVar29 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar21 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar21 + 0x24),*(uint *)(lVar21 + 0x28),*(uint *)(lVar21 + 0x70),
                       *(bool *)(lVar21 + 0x6d),true,true);
            lVar26 = plVar27[1];
            lVar21 = *plVar27;
          }
          uVar29 = (ulong)((int)uVar29 + 1);
          uVar23 = (lVar26 - lVar21 >> 3) * -0x7b425ed097b425ed;
        } while (uVar29 <= uVar23 && uVar23 - uVar29 != 0);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != param_8);
  }
  bVar5 = true;
LAB_008353c4:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


