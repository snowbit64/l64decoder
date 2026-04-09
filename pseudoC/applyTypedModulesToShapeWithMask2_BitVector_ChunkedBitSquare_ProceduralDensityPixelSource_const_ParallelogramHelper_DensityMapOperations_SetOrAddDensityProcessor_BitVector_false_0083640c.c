// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083640c
// Size: 3832 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, ChunkedBitSquare * param_4, IDensityPixelSource * param_5, ProceduralDensityPixelSource * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector, ChunkedBitSquare,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false> >(IDensityPixelSource*,
   BitVector*, IDensityPixelSource const*, ChunkedBitSquare*, IDensityPixelSource const*,
   ProceduralDensityPixelSource const*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               ChunkedBitSquare *param_4,IDensityPixelSource *param_5,
               ProceduralDensityPixelSource *param_6,ParallelogramHelper *param_7,uint param_8,
               TypedModules *param_9)

{
  uint *puVar1;
  long lVar2;
  TypedModuleWithMasks *this;
  char cVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
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
  uint uVar18;
  code **ppcVar19;
  uint uVar20;
  long lVar21;
  IDensityPixelSource *pIVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  undefined4 *puVar27;
  long *plVar28;
  ulong uVar29;
  undefined2 uVar30;
  undefined8 uVar31;
  uint local_178;
  uint local_174;
  uint local_168;
  uint local_164;
  uint local_154;
  uint local_150;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  ProceduralDensityPixelSource *local_d8;
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
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar7 = (**(code **)(*(long *)param_1 + 0x28))();
  uVar7 = ~(-1 << (ulong)(uVar7 & 0x1f));
  uVar8 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  uVar8 = ~(-1 << (ulong)(uVar8 & 0x1f));
  uVar9 = (**(code **)(*(long *)param_5 + 0x28))(param_5);
  uVar9 = ~(-1 << (ulong)(uVar9 & 0x1f));
  uVar10 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  local_98 = uVar10;
  uVar11 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_94 = uVar11;
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  local_88 = (long *)param_2;
  uVar12 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar12;
  uVar13 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar13;
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = param_4;
  uVar14 = (**(code **)(*(long *)param_5 + 0x18))(param_5);
  local_e8 = uVar14;
  uVar15 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  local_e4 = uVar15;
  local_e0 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_d8 = param_6;
  if ((((uVar10 < uVar12) || (uVar11 < uVar13)) || (uVar10 < uVar14)) || (uVar11 < uVar15)) {
    if (((uVar12 < uVar10) || (uVar13 < uVar11)) || ((uVar14 < uVar10 || (uVar15 < uVar11)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 008372c8 to 008372d3 has its CatchHandler @ 00837304 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)local_c0,(ulong)local_bc,(ulong)local_e8,(ulong)local_e4,
                         (ulong)local_98,(ulong)local_94);
      bVar6 = false;
      goto LAB_00837284;
    }
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar18 = uVar12 / uVar10;
    }
    uVar12 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar13 / uVar11;
    }
    uVar31 = NEON_cnt((ulong)uVar18,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar18 & 0xffff0000) != 0;
      uVar13 = uVar18 >> 0x10;
      if (!bVar6) {
        uVar13 = uVar18;
      }
      uVar20 = (uint)bVar6;
      uVar4 = uVar20 << 4 | 8;
      uVar16 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar4 = uVar20 << 4;
        uVar16 = uVar13;
      }
      uVar13 = uVar4 | 4;
      uVar20 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar13 = uVar4;
        uVar20 = uVar16;
      }
      uVar4 = uVar13 | 2;
      uVar16 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar4 = uVar13;
        uVar16 = uVar20;
      }
      local_150 = (uVar16 + uVar4) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar14 / uVar10;
    }
    uVar31 = NEON_cnt((ulong)uVar12,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar12;
      }
      uVar16 = (uint)bVar6;
      uVar14 = uVar16 << 4 | 8;
      uVar4 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar14 = uVar16 << 4;
        uVar4 = uVar10;
      }
      uVar10 = uVar14 | 4;
      uVar16 = uVar4 >> 4;
      if (uVar4 < 0x10) {
        uVar10 = uVar14;
        uVar16 = uVar4;
      }
      uVar14 = uVar10 | 2;
      uVar4 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar14 = uVar10;
        uVar4 = uVar16;
      }
      uVar10 = (uVar4 + uVar14) - 1;
    }
    else {
      uVar10 = 0;
    }
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar15 / uVar11;
    }
    uVar31 = NEON_cnt((ulong)uVar13,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar13 & 0xffff0000) != 0;
      uVar11 = uVar13 >> 0x10;
      if (!bVar6) {
        uVar11 = uVar13;
      }
      uVar16 = (uint)bVar6;
      uVar15 = uVar16 << 4 | 8;
      uVar4 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar15 = uVar16 << 4;
        uVar4 = uVar11;
      }
      uVar11 = uVar15 | 4;
      uVar16 = uVar4 >> 4;
      if (uVar4 < 0x10) {
        uVar11 = uVar15;
        uVar16 = uVar4;
      }
      uVar15 = uVar11 | 2;
      uVar4 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar15 = uVar11;
        uVar4 = uVar16;
      }
      local_154 = (uVar4 + uVar15) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar31 = NEON_cnt((ulong)uVar14,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar14 & 0xffff0000) != 0;
      uVar11 = uVar14 >> 0x10;
      if (!bVar6) {
        uVar11 = uVar14;
      }
      uVar16 = (uint)bVar6;
      uVar15 = uVar16 << 4 | 8;
      uVar4 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar15 = uVar16 << 4;
        uVar4 = uVar11;
      }
      uVar11 = uVar15 | 4;
      uVar16 = uVar4 >> 4;
      if (uVar4 < 0x10) {
        uVar11 = uVar15;
        uVar16 = uVar4;
      }
      uVar15 = uVar11 | 2;
      uVar4 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar15 = uVar11;
        uVar4 = uVar16;
      }
      local_164 = (uVar4 + uVar15) - 1;
    }
    else {
      local_164 = 0;
    }
    uVar11 = *(uint *)(param_7 + 0x48);
    if (uVar11 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar11);
        uVar15 = *(uint *)(param_7 + 0x58);
        if (uVar15 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar26 = *local_88;
            uVar4 = (uVar15 + local_98 * uVar11) * local_90;
            lVar21 = *(long *)(lVar26 + (ulong)(uVar4 >> 0x13) * 8);
            uVar25 = (ulong)(uVar4 >> 3) & 0xffff;
            if ((uint)uVar25 < 0xfffd) {
              uVar16 = *(uint *)(lVar21 + uVar25);
            }
            else {
              uVar16 = (uVar4 >> 3) + 1;
              uVar20 = (uVar4 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar20 >> 0x10) * 8) +
                                       ((ulong)uVar20 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar21 + uVar25)));
            }
            local_78 = uVar16 >> (ulong)(uVar4 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                       & 0xffff;
            uVar4 = local_78 & uVar7;
            uVar16 = param_8 - 1;
            if (uVar4 <= param_8 - 1) {
              uVar16 = uVar4;
            }
            plVar28 = (long *)(param_9 + (ulong)uVar16 * 0x18);
            lVar21 = *plVar28;
            uVar25 = (plVar28[1] - lVar21 >> 3) * 0x684bda13;
            local_80 = uVar15;
            uStack_7c = uVar11;
            if ((int)uVar25 != 0) {
              lVar26 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar21 + lVar26);
                bVar6 = checkTypedModuleMasks2<ChunkedBitSquare,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar4,uVar4,(HelperSource *)&local_c0,param_3,uVar8,
                                   uVar15 << (ulong)(local_150 & 0x1f),
                                   uVar11 << (ulong)(uVar10 & 0x1f),uVar18,uVar12,
                                   (HelperSource *)&local_e8,param_5,uVar9,
                                   uVar15 << (ulong)(local_154 & 0x1f),
                                   uVar11 << (ulong)(local_164 & 0x1f),uVar13,uVar14);
                if (bVar6) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar25 & 0xffffffff) * 0xd8 + -0xd8 == lVar26) break;
                lVar21 = *plVar28;
                lVar26 = lVar26 + 0xd8;
              }
            }
            if (uVar4 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(param_7 + 0x5c));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar18 = 0;
    if (uVar12 != 0) {
      uVar18 = uVar10 / uVar12;
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar11 / uVar13;
    }
    uVar31 = NEON_cnt((ulong)uVar18,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar18 & 0xffff0000) != 0;
      uVar13 = uVar18 >> 0x10;
      if (!bVar6) {
        uVar13 = uVar18;
      }
      uVar16 = (uint)bVar6;
      uVar18 = uVar16 << 4 | 8;
      uVar4 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar18 = uVar16 << 4;
        uVar4 = uVar13;
      }
      uVar13 = uVar18 | 4;
      uVar16 = uVar4 >> 4;
      if (uVar4 < 0x10) {
        uVar13 = uVar18;
        uVar16 = uVar4;
      }
      uVar18 = uVar13 | 2;
      uVar4 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar18 = uVar13;
        uVar4 = uVar16;
      }
      local_164 = (uVar4 + uVar18) - 1;
    }
    else {
      local_164 = 0;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar10 / uVar14;
    }
    uVar31 = NEON_cnt((ulong)uVar12,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar12;
      }
      uVar18 = (uint)bVar6;
      uVar12 = uVar18 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar12 = uVar18 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar12 | 4;
      uVar18 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar12;
        uVar18 = uVar14;
      }
      uVar12 = uVar10 | 2;
      uVar14 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar12 = uVar10;
        uVar14 = uVar18;
      }
      local_174 = (uVar14 + uVar12) - 1;
    }
    else {
      local_174 = 0;
    }
    uVar10 = 0;
    if (uVar15 != 0) {
      uVar10 = uVar11 / uVar15;
    }
    uVar31 = NEON_cnt((ulong)uVar13,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar13 & 0xffff0000) != 0;
      uVar11 = uVar13 >> 0x10;
      if (!bVar6) {
        uVar11 = uVar13;
      }
      uVar14 = (uint)bVar6;
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
      local_168 = (uVar13 + uVar12) - 1;
    }
    else {
      local_168 = 0;
    }
    uVar31 = NEON_cnt((ulong)uVar10,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar6 = (uVar10 & 0xffff0000) != 0;
      uVar11 = uVar10 >> 0x10;
      if (!bVar6) {
        uVar11 = uVar10;
      }
      uVar13 = (uint)bVar6;
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
      local_178 = (uVar12 + uVar10) - 1;
    }
    else {
      local_178 = 0;
    }
    uVar10 = *(uint *)(param_7 + 0x48);
    if (uVar10 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar10);
        uVar11 = *(uint *)(param_7 + 0x58);
        if (uVar11 < *(uint *)(param_7 + 0x5c)) {
          uVar12 = uVar10 >> (ulong)(local_174 & 0x1f);
          do {
            lVar26 = *local_88;
            uVar13 = (uVar11 + local_98 * uVar10) * local_90;
            lVar21 = *(long *)(lVar26 + (ulong)(uVar13 >> 0x13) * 8);
            uVar25 = (ulong)(uVar13 >> 3) & 0xffff;
            if ((uint)uVar25 < 0xfffd) {
              uVar14 = *(uint *)(lVar21 + uVar25);
            }
            else {
              uVar14 = (uVar13 >> 3) + 1;
              uVar15 = (uVar13 >> 3) + 2;
              uVar14 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar15 >> 0x10) * 8) +
                                       ((ulong)uVar15 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar14 >> 0x10) * 8) +
                                                ((ulong)uVar14 & 0xffff)),
                                               *(undefined *)(lVar21 + uVar25)));
            }
            uVar13 = uVar14 >> (ulong)(uVar13 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar14 = uVar13 & uVar7;
            uVar15 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar15 = uVar14;
            }
            plVar28 = (long *)(param_9 + (ulong)uVar15 * 0x18);
            uVar15 = (int)((ulong)(plVar28[1] - *plVar28) >> 3) * 0x684bda13;
            local_80 = uVar11;
            uStack_7c = uVar10;
            local_78 = uVar13;
            if (uVar15 != 0) {
              local_a8 = uVar11 >> (ulong)(local_164 & 0x1f);
              uVar18 = (((uVar12 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (local_a8 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar19 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar18 * 8);
              uVar4 = local_a8 & 0x1f | (uVar12 & 0x1f) << 5;
              uStack_a4 = uVar12;
              uVar16 = (**ppcVar19)(ppcVar19,uVar4,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar25 = 1;
                puVar27 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar19 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar18 + (int)uVar25) * 8);
                  iVar17 = (**ppcVar19)(ppcVar19,uVar4,0,*puVar27);
                  puVar1 = puVar27 + -1;
                  uVar25 = uVar25 + 1;
                  puVar27 = puVar27 + 2;
                  uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
                } while (uVar25 < *(uint *)(param_4 + 0x34));
              }
              local_d0 = uVar11 >> (ulong)(local_168 & 0x1f);
              uStack_cc = uVar10 >> (ulong)(local_178 & 0x1f);
              local_a0 = uVar16;
              uVar18 = (**(code **)(*(long *)param_6 + 0x58))();
              if (uVar15 < 2) {
                uVar15 = 1;
              }
              lVar21 = 0;
              uVar4 = uVar18 & uVar9;
              local_c8 = uVar18;
              do {
                lVar26 = *plVar28;
                pIVar22 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<BitVector,false> *)(lVar26 + lVar21) + 0x78);
                if (pIVar22 == (IDensityPixelSource *)0x0) {
LAB_00836db0:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)(lVar26 + lVar21),
                             (HelperSource *)&local_98);
                }
                else {
                  lVar2 = lVar26 + lVar21;
                  if (pIVar22 == param_1) {
                    if ((*(int *)(lVar2 + 0x80) != 2) &&
                       ((*(int *)(lVar2 + 0x80) == 0) == (*(uint *)(lVar2 + 0x84) != uVar14)))
                    goto LAB_00836b1c;
                    uVar20 = uVar13 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar20 < *(int *)(lVar2 + 0x90)) {
LAB_00836c58:
                      cVar3 = *(char *)(lVar26 + lVar21 + 0x98);
                    }
                    else {
LAB_00836bf0:
                      cVar3 = *(char *)(lVar26 + lVar21 + 0x98);
                    }
                    if ((cVar3 != '\0') &&
                       ((uVar24 = *(uint *)(lVar26 + lVar21 + 0x9c), uVar24 == 0 ||
                        ((uVar24 & uVar20) != 0)))) {
                      pIVar22 = *(IDensityPixelSource **)(lVar26 + lVar21 + 0xa8);
                      if (pIVar22 == (IDensityPixelSource *)0x0) goto LAB_00836db0;
                      lVar2 = lVar26 + lVar21;
                      if (pIVar22 == param_1) {
                        if ((*(int *)(lVar2 + 0xb0) != 2) &&
                           ((*(int *)(lVar2 + 0xb0) == 0) == (*(uint *)(lVar2 + 0xb4) != uVar14)))
                        goto LAB_00836b1c;
                        uVar20 = uVar13 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                 (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar20 < *(int *)(lVar2 + 0xc0)) goto LAB_00836d8c;
LAB_00836d28:
                        cVar3 = *(char *)(lVar26 + lVar21 + 200);
joined_r0x00836d98:
                        if ((cVar3 == '\0') &&
                           ((uVar24 = *(uint *)(lVar26 + lVar21 + 0xcc), uVar24 == 0 ||
                            ((uVar24 & uVar20) != 0)))) goto LAB_00836db0;
                      }
                      else {
                        iVar17 = *(int *)(lVar2 + 0xb0);
                        if (pIVar22 == param_3) {
                          if ((iVar17 == 2) ||
                             ((iVar17 == 0) !=
                              (*(uint *)(lVar26 + lVar21 + 0xb4) != (uVar16 & uVar8)))) {
                            lVar2 = lVar26 + lVar21;
                            uVar24 = *(uint *)(lVar2 + 0xbc);
                            iVar17 = *(int *)(lVar2 + 0xc0);
                            uVar20 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
                            goto LAB_00836d7c;
                          }
                        }
                        else if ((iVar17 == 2) ||
                                ((iVar17 == 0) != (*(uint *)(lVar26 + lVar21 + 0xb4) != uVar4))) {
                          lVar2 = lVar26 + lVar21;
                          uVar24 = *(uint *)(lVar2 + 0xbc);
                          iVar17 = *(int *)(lVar2 + 0xc0);
                          uVar20 = uVar18 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
LAB_00836d7c:
                          uVar20 = uVar20 & (-1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
                          if (iVar17 <= (int)uVar20) goto LAB_00836d28;
LAB_00836d8c:
                          cVar3 = *(char *)(lVar26 + lVar21 + 200);
                          goto joined_r0x00836d98;
                        }
                      }
                    }
                  }
                  else {
                    iVar17 = *(int *)(lVar2 + 0x80);
                    if (pIVar22 == param_3) {
                      if ((iVar17 == 2) ||
                         ((iVar17 == 0) != (*(uint *)(lVar26 + lVar21 + 0x84) != (uVar16 & uVar8))))
                      {
                        lVar2 = lVar26 + lVar21;
                        uVar24 = *(uint *)(lVar2 + 0x8c);
                        iVar17 = *(int *)(lVar2 + 0x90);
                        uVar20 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
                        goto LAB_00836c48;
                      }
                    }
                    else if ((iVar17 == 2) ||
                            ((iVar17 == 0) != (*(uint *)(lVar26 + lVar21 + 0x84) != uVar4))) {
                      lVar2 = lVar26 + lVar21;
                      uVar24 = *(uint *)(lVar2 + 0x8c);
                      iVar17 = *(int *)(lVar2 + 0x90);
                      uVar20 = uVar18 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
LAB_00836c48:
                      uVar20 = uVar20 & (-1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar20 < iVar17) goto LAB_00836c58;
                      goto LAB_00836bf0;
                    }
                  }
LAB_00836b1c:
                  *(int *)(lVar26 + lVar21 + 4) = *(int *)(lVar26 + lVar21 + 4) + 1;
                }
                lVar21 = lVar21 + 0xd8;
              } while ((ulong)uVar15 * 0xd8 - lVar21 != 0);
              if (uVar13 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(param_7 + 0x5c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_7 + 0x4c));
    }
  }
  if (param_8 != 0) {
    uVar25 = 0;
    do {
      plVar28 = (long *)(param_9 + uVar25 * 0x18);
      lVar21 = *plVar28;
      lVar26 = plVar28[1];
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
            lVar26 = plVar28[1];
            lVar21 = *plVar28;
          }
          uVar29 = (ulong)((int)uVar29 + 1);
          uVar23 = (lVar26 - lVar21 >> 3) * -0x7b425ed097b425ed;
        } while (uVar29 <= uVar23 && uVar23 - uVar29 != 0);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != param_8);
  }
  bVar6 = true;
LAB_00837284:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


