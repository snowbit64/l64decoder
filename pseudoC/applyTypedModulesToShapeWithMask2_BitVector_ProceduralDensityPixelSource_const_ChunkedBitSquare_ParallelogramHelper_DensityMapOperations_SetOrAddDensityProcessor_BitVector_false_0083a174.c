// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083a174
// Size: 3844 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, IDensityPixelSource * param_5, ChunkedBitSquare * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector,
   ProceduralDensityPixelSource const, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false> >(IDensityPixelSource*,
   BitVector*, IDensityPixelSource const*, ProceduralDensityPixelSource const*, IDensityPixelSource
   const*, ChunkedBitSquare*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               ProceduralDensityPixelSource *param_4,IDensityPixelSource *param_5,
               ChunkedBitSquare *param_6,ParallelogramHelper *param_7,uint param_8,
               TypedModules *param_9)

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
  long lVar20;
  IDensityPixelSource *pIVar21;
  ulong uVar22;
  uint uVar23;
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
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 0083b03c to 0083b047 has its CatchHandler @ 0083b078 */
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
      goto LAB_0083aff8;
    }
    uVar23 = 0;
    if (uVar9 != 0) {
      uVar23 = uVar11 / uVar9;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar12 / uVar10;
    }
    uVar31 = NEON_cnt((ulong)uVar23,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar23 & 0xffff0000) != 0;
      uVar12 = uVar23 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar23;
      }
      uVar15 = (uint)bVar5;
      uVar19 = uVar15 << 4 | 8;
      uVar16 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar19 = uVar15 << 4;
        uVar16 = uVar12;
      }
      uVar12 = uVar19 | 4;
      uVar15 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar12 = uVar19;
        uVar15 = uVar16;
      }
      uVar19 = uVar12 | 2;
      uVar16 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar19 = uVar12;
        uVar16 = uVar15;
      }
      local_14c = (uVar16 + uVar19) - 1;
    }
    else {
      local_14c = 0;
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
      uVar16 = (uint)bVar5;
      uVar13 = uVar16 << 4 | 8;
      uVar19 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar16 << 4;
        uVar19 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar16 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar9 = uVar13;
        uVar16 = uVar19;
      }
      uVar13 = uVar9 | 2;
      uVar19 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar13 = uVar9;
        uVar19 = uVar16;
      }
      local_154 = (uVar19 + uVar13) - 1;
    }
    else {
      local_154 = 0;
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
      uVar19 = (uint)bVar5;
      uVar13 = uVar19 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar19 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar19 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar19;
      }
      local_150 = (uVar14 + uVar13) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar31 = NEON_cnt((ulong)uVar9,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar9;
      }
      uVar19 = (uint)bVar5;
      uVar13 = uVar19 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar19 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar19 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar19;
      }
      uVar10 = (uVar14 + uVar13) - 1;
    }
    else {
      uVar10 = 0;
    }
    uVar13 = *(uint *)(param_7 + 0x48);
    if (uVar13 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar13);
        uVar14 = *(uint *)(param_7 + 0x58);
        if (uVar14 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar26 = *local_88;
            uVar19 = (uVar14 + local_98 * uVar13) * local_90;
            lVar20 = *(long *)(lVar26 + (ulong)(uVar19 >> 0x13) * 8);
            uVar25 = (ulong)(uVar19 >> 3) & 0xffff;
            if ((uint)uVar25 < 0xfffd) {
              uVar16 = *(uint *)(lVar20 + uVar25);
            }
            else {
              uVar16 = (uVar19 >> 3) + 1;
              uVar15 = (uVar19 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar15 >> 0x10) * 8) +
                                       ((ulong)uVar15 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar20 + uVar25)));
            }
            local_78 = uVar16 >> (ulong)(uVar19 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar19 = local_78 & uVar6;
            uVar16 = param_8 - 1;
            if (uVar19 <= param_8 - 1) {
              uVar16 = uVar19;
            }
            plVar28 = (long *)(param_9 + (ulong)uVar16 * 0x18);
            lVar20 = *plVar28;
            uVar25 = (plVar28[1] - lVar20 >> 3) * 0x684bda13;
            local_80 = uVar14;
            uStack_7c = uVar13;
            if ((int)uVar25 != 0) {
              lVar26 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar20 + lVar26);
                bVar5 = checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar19,uVar19,(HelperSource *)&local_c0,param_3,
                                   uVar7,uVar14 << (ulong)(local_14c & 0x1f),
                                   uVar13 << (ulong)(local_154 & 0x1f),uVar23,uVar11,
                                   (HelperSource *)&local_e8,param_5,uVar8,
                                   uVar14 << (ulong)(local_150 & 0x1f),
                                   uVar13 << (ulong)(uVar10 & 0x1f),uVar12,uVar9);
                if (bVar5) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar25 & 0xffffffff) * 0xd8 + -0xd8 == lVar26) break;
                lVar20 = *plVar28;
                lVar26 = lVar26 + 0xd8;
              }
            }
            if (uVar19 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(param_7 + 0x5c));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_7 + 0x4c));
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
    uVar31 = NEON_cnt((ulong)uVar23,1);
    uVar30 = NEON_uaddlv(uVar31,1);
    if ((int)CONCAT62((int6)((ulong)uVar31 >> 0x10),uVar30) == 1) {
      bVar5 = (uVar23 & 0xffff0000) != 0;
      uVar12 = uVar23 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar23;
      }
      uVar16 = (uint)bVar5;
      uVar23 = uVar16 << 4 | 8;
      uVar19 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar23 = uVar16 << 4;
        uVar19 = uVar12;
      }
      uVar12 = uVar23 | 4;
      uVar16 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar12 = uVar23;
        uVar16 = uVar19;
      }
      uVar23 = uVar12 | 2;
      uVar19 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar23 = uVar12;
        uVar19 = uVar16;
      }
      local_164 = (uVar19 + uVar23) - 1;
    }
    else {
      local_164 = 0;
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
      uVar23 = (uint)bVar5;
      uVar11 = uVar23 << 4 | 8;
      uVar13 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar11 = uVar23 << 4;
        uVar13 = uVar9;
      }
      uVar9 = uVar11 | 4;
      uVar23 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar9 = uVar11;
        uVar23 = uVar13;
      }
      uVar11 = uVar9 | 2;
      uVar13 = uVar23 >> 2;
      if (uVar23 < 4) {
        uVar11 = uVar9;
        uVar13 = uVar23;
      }
      local_174 = (uVar13 + uVar11) - 1;
    }
    else {
      local_174 = 0;
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
      local_168 = (uVar12 + uVar11) - 1;
    }
    else {
      local_168 = 0;
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
      local_178 = (uVar11 + uVar9) - 1;
    }
    else {
      local_178 = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar10 = *(uint *)(param_7 + 0x58);
        if (uVar10 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar9 >> (ulong)(local_178 & 0x1f);
          do {
            lVar26 = *local_88;
            uVar12 = (uVar10 + local_98 * uVar9) * local_90;
            lVar20 = *(long *)(lVar26 + (ulong)(uVar12 >> 0x13) * 8);
            uVar25 = (ulong)(uVar12 >> 3) & 0xffff;
            if ((uint)uVar25 < 0xfffd) {
              uVar13 = *(uint *)(lVar20 + uVar25);
            }
            else {
              uVar13 = (uVar12 >> 3) + 1;
              uVar14 = (uVar12 >> 3) + 2;
              uVar13 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar14 >> 0x10) * 8) +
                                       ((ulong)uVar14 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar13 >> 0x10) * 8) +
                                                ((ulong)uVar13 & 0xffff)),
                                               *(undefined *)(lVar20 + uVar25)));
            }
            uVar12 = uVar13 >> (ulong)(uVar12 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar13 = uVar12 & uVar6;
            uVar14 = param_8 - 1;
            if (uVar13 <= param_8 - 1) {
              uVar14 = uVar13;
            }
            plVar28 = (long *)(param_9 + (ulong)uVar14 * 0x18);
            uVar14 = (int)((ulong)(plVar28[1] - *plVar28) >> 3) * 0x684bda13;
            local_80 = uVar10;
            uStack_7c = uVar9;
            local_78 = uVar12;
            if (uVar14 != 0) {
              local_a8 = uVar10 >> (ulong)(local_164 & 0x1f);
              uStack_a4 = uVar9 >> (ulong)(local_174 & 0x1f);
              uVar15 = (**(code **)(*(long *)param_4 + 0x58))();
              local_d0 = uVar10 >> (ulong)(local_168 & 0x1f);
              uVar23 = (((uVar11 >> 5) << (ulong)(*(uint *)param_6 & 0x1f)) + (local_d0 >> 5)) *
                       *(int *)(param_6 + 0x34);
              ppcVar18 = *(code ***)(*(long *)(param_6 + 0x28) + (ulong)uVar23 * 8);
              uVar19 = local_d0 & 0x1f | (uVar11 & 0x1f) << 5;
              uStack_cc = uVar11;
              local_a0 = uVar15;
              uVar16 = (**ppcVar18)(ppcVar18,uVar19,0,*(undefined4 *)(param_6 + 0x3c));
              if (1 < *(uint *)(param_6 + 0x34)) {
                uVar25 = 1;
                puVar27 = (undefined4 *)(param_6 + 0x44);
                do {
                  ppcVar18 = *(code ***)
                              (*(long *)(param_6 + 0x28) + (ulong)(uVar23 + (int)uVar25) * 8);
                  iVar17 = (**ppcVar18)(ppcVar18,uVar19,0,*puVar27);
                  puVar1 = puVar27 + -1;
                  uVar25 = uVar25 + 1;
                  puVar27 = puVar27 + 2;
                  uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
                } while (uVar25 < *(uint *)(param_6 + 0x34));
              }
              if (uVar14 < 2) {
                uVar14 = 1;
              }
              lVar20 = 0;
              uVar23 = uVar15 & uVar7;
              local_c8 = uVar16;
              do {
                lVar26 = *plVar28;
                pIVar21 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<BitVector,false> *)(lVar26 + lVar20) + 0x78);
                if (pIVar21 == (IDensityPixelSource *)0x0) {
LAB_0083ab28:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)(lVar26 + lVar20),
                             (HelperSource *)&local_98);
                }
                else {
                  lVar2 = lVar26 + lVar20;
                  if (pIVar21 == param_1) {
                    if ((*(int *)(lVar2 + 0x80) != 2) &&
                       ((*(int *)(lVar2 + 0x80) == 0) == (*(uint *)(lVar2 + 0x84) != uVar13)))
                    goto LAB_0083a88c;
                    uVar19 = uVar12 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar2 + 0x8c) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar19 < *(int *)(lVar2 + 0x90)) {
LAB_0083a9cc:
                      cVar3 = *(char *)(lVar26 + lVar20 + 0x98);
                    }
                    else {
LAB_0083a964:
                      cVar3 = *(char *)(lVar26 + lVar20 + 0x98);
                    }
                    if ((cVar3 != '\0') &&
                       ((uVar24 = *(uint *)(lVar26 + lVar20 + 0x9c), uVar24 == 0 ||
                        ((uVar24 & uVar19) != 0)))) {
                      pIVar21 = *(IDensityPixelSource **)(lVar26 + lVar20 + 0xa8);
                      if (pIVar21 == (IDensityPixelSource *)0x0) goto LAB_0083ab28;
                      lVar2 = lVar26 + lVar20;
                      if (pIVar21 == param_1) {
                        if ((*(int *)(lVar2 + 0xb0) != 2) &&
                           ((*(int *)(lVar2 + 0xb0) == 0) == (*(uint *)(lVar2 + 0xb4) != uVar13)))
                        goto LAB_0083a88c;
                        uVar19 = uVar12 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f) &
                                 (-1 << (ulong)(*(uint *)(lVar2 + 0xbc) & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar19 < *(int *)(lVar2 + 0xc0)) goto LAB_0083ab04;
LAB_0083aa9c:
                        cVar3 = *(char *)(lVar26 + lVar20 + 200);
joined_r0x0083ab10:
                        if ((cVar3 == '\0') &&
                           ((uVar24 = *(uint *)(lVar26 + lVar20 + 0xcc), uVar24 == 0 ||
                            ((uVar24 & uVar19) != 0)))) goto LAB_0083ab28;
                      }
                      else {
                        iVar17 = *(int *)(lVar2 + 0xb0);
                        if (pIVar21 == param_3) {
                          if ((iVar17 == 2) ||
                             ((iVar17 == 0) != (*(uint *)(lVar26 + lVar20 + 0xb4) != uVar23))) {
                            lVar2 = lVar26 + lVar20;
                            uVar24 = *(uint *)(lVar2 + 0xbc);
                            iVar17 = *(int *)(lVar2 + 0xc0);
                            uVar19 = uVar15 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
                            goto LAB_0083aaf4;
                          }
                        }
                        else if ((iVar17 == 2) ||
                                ((iVar17 == 0) !=
                                 (*(uint *)(lVar26 + lVar20 + 0xb4) != (uVar16 & uVar8)))) {
                          lVar2 = lVar26 + lVar20;
                          uVar24 = *(uint *)(lVar2 + 0xbc);
                          iVar17 = *(int *)(lVar2 + 0xc0);
                          uVar19 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0xb8) & 0x1f);
LAB_0083aaf4:
                          uVar19 = uVar19 & (-1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
                          if (iVar17 <= (int)uVar19) goto LAB_0083aa9c;
LAB_0083ab04:
                          cVar3 = *(char *)(lVar26 + lVar20 + 200);
                          goto joined_r0x0083ab10;
                        }
                      }
                    }
                  }
                  else {
                    iVar17 = *(int *)(lVar2 + 0x80);
                    if (pIVar21 == param_3) {
                      if ((iVar17 == 2) ||
                         ((iVar17 == 0) != (*(uint *)(lVar26 + lVar20 + 0x84) != uVar23))) {
                        lVar2 = lVar26 + lVar20;
                        uVar24 = *(uint *)(lVar2 + 0x8c);
                        iVar17 = *(int *)(lVar2 + 0x90);
                        uVar19 = uVar15 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
                        goto LAB_0083a9bc;
                      }
                    }
                    else if ((iVar17 == 2) ||
                            ((iVar17 == 0) !=
                             (*(uint *)(lVar26 + lVar20 + 0x84) != (uVar16 & uVar8)))) {
                      lVar2 = lVar26 + lVar20;
                      uVar24 = *(uint *)(lVar2 + 0x8c);
                      iVar17 = *(int *)(lVar2 + 0x90);
                      uVar19 = uVar16 >> (ulong)(*(uint *)(lVar2 + 0x88) & 0x1f);
LAB_0083a9bc:
                      uVar19 = uVar19 & (-1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar19 < iVar17) goto LAB_0083a9cc;
                      goto LAB_0083a964;
                    }
                  }
LAB_0083a88c:
                  *(int *)(lVar26 + lVar20 + 4) = *(int *)(lVar26 + lVar20 + 4) + 1;
                }
                lVar20 = lVar20 + 0xd8;
              } while ((ulong)uVar14 * 0xd8 - lVar20 != 0);
              if (uVar12 != local_78) {
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
      plVar28 = (long *)(param_9 + uVar25 * 0x18);
      lVar20 = *plVar28;
      lVar26 = plVar28[1];
      if (lVar26 != lVar20) {
        uVar29 = 0;
        do {
          if (*(char *)(lVar20 + uVar29 * 0xd8 + 0x6c) != '\0') {
            lVar20 = lVar20 + uVar29 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar20 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar20 + 0x24),*(uint *)(lVar20 + 0x28),*(uint *)(lVar20 + 0x70),
                       *(bool *)(lVar20 + 0x6d),true,true);
            lVar26 = plVar28[1];
            lVar20 = *plVar28;
          }
          uVar29 = (ulong)((int)uVar29 + 1);
          uVar22 = (lVar26 - lVar20 >> 3) * -0x7b425ed097b425ed;
        } while (uVar29 <= uVar22 && uVar22 - uVar29 != 0);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != param_8);
  }
  bVar5 = true;
LAB_0083aff8:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


