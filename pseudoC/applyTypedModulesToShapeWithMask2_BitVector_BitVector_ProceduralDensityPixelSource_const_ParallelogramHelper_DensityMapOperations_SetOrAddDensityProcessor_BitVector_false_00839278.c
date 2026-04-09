// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 00839278
// Size: 3812 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, BitVector * param_4, IDensityPixelSource * param_5, ProceduralDensityPixelSource * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector, BitVector,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false> >(IDensityPixelSource*,
   BitVector*, IDensityPixelSource const*, BitVector*, IDensityPixelSource const*,
   ProceduralDensityPixelSource const*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,IDensityPixelSource *param_5,ProceduralDensityPixelSource *param_6
               ,ParallelogramHelper *param_7,uint param_8,TypedModules *param_9)

{
  long lVar1;
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
  ulong uVar22;
  ulong uVar23;
  IDensityPixelSource *pIVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  uint uVar28;
  undefined2 uVar29;
  undefined8 uVar30;
  uint local_170;
  uint local_16c;
  uint local_160;
  uint local_15c;
  uint local_148;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  ProceduralDensityPixelSource *local_d8;
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
  local_e0 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_d8 = param_6;
  if ((((uVar8 < uVar10) || (uVar9 < uVar11)) || (uVar8 < uVar13)) || (uVar9 < uVar14)) {
    if (((uVar10 < uVar8) || (uVar11 < uVar9)) || ((uVar13 < uVar8 || (uVar14 < uVar9)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar16 != 0
         )) {
                    /* try { // try from 0083a120 to 0083a12b has its CatchHandler @ 0083a15c */
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
      goto LAB_0083a0dc;
    }
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar11 / uVar9;
    }
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar10 / uVar8;
    }
    uVar30 = NEON_cnt((ulong)uVar11,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar11 & 0xffff0000) != 0;
      uVar10 = uVar11 >> 0x10;
      if (!bVar4) {
        uVar10 = uVar11;
      }
      uVar17 = (uint)bVar4;
      uVar28 = uVar17 << 4 | 8;
      uVar18 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar28 = uVar17 << 4;
        uVar18 = uVar10;
      }
      uVar10 = uVar28 | 4;
      uVar17 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar10 = uVar28;
        uVar17 = uVar18;
      }
      uVar28 = uVar10 | 2;
      uVar18 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar28 = uVar10;
        uVar18 = uVar17;
      }
      local_148 = (uVar18 + uVar28) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar13 / uVar8;
    }
    uVar30 = NEON_cnt((ulong)uVar12,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar12 & 0xffff0000) != 0;
      uVar8 = uVar12 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar12;
      }
      uVar18 = (uint)bVar4;
      uVar13 = uVar18 << 4 | 8;
      uVar28 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar13 = uVar18 << 4;
        uVar28 = uVar8;
      }
      uVar8 = uVar13 | 4;
      uVar18 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar8 = uVar13;
        uVar18 = uVar28;
      }
      uVar13 = uVar8 | 2;
      uVar28 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar13 = uVar8;
        uVar28 = uVar18;
      }
      uVar8 = (uVar28 + uVar13) - 1;
    }
    else {
      uVar8 = 0;
    }
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar14 / uVar9;
    }
    uVar30 = NEON_cnt((ulong)uVar10,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar10 & 0xffff0000) != 0;
      uVar9 = uVar10 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar10;
      }
      uVar18 = (uint)bVar4;
      uVar14 = uVar18 << 4 | 8;
      uVar28 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar14 = uVar18 << 4;
        uVar28 = uVar9;
      }
      uVar9 = uVar14 | 4;
      uVar18 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar9 = uVar14;
        uVar18 = uVar28;
      }
      uVar14 = uVar9 | 2;
      uVar28 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar14 = uVar9;
        uVar28 = uVar18;
      }
      uVar9 = (uVar28 + uVar14) - 1;
    }
    else {
      uVar9 = 0;
    }
    uVar30 = NEON_cnt((ulong)uVar13,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar13 & 0xffff0000) != 0;
      uVar14 = uVar13 >> 0x10;
      if (!bVar4) {
        uVar14 = uVar13;
      }
      uVar17 = (uint)bVar4;
      uVar28 = uVar17 << 4 | 8;
      uVar18 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar28 = uVar17 << 4;
        uVar18 = uVar14;
      }
      uVar14 = uVar28 | 4;
      uVar17 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar14 = uVar28;
        uVar17 = uVar18;
      }
      uVar28 = uVar14 | 2;
      uVar18 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar28 = uVar14;
        uVar18 = uVar17;
      }
      local_15c = (uVar18 + uVar28) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar14 = *(uint *)(param_7 + 0x48);
    if (uVar14 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar14);
        uVar28 = *(uint *)(param_7 + 0x58);
        if (uVar28 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar26 = *local_88;
            uVar18 = (uVar28 + local_98 * uVar14) * local_90;
            lVar20 = *(long *)(lVar26 + (ulong)(uVar18 >> 0x13) * 8);
            uVar23 = (ulong)(uVar18 >> 3) & 0xffff;
            if ((uint)uVar23 < 0xfffd) {
              uVar17 = *(uint *)(lVar20 + uVar23);
            }
            else {
              uVar17 = (uVar18 >> 3) + 1;
              uVar15 = (uVar18 >> 3) + 2;
              uVar17 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar15 >> 0x10) * 8) +
                                       ((ulong)uVar15 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar17 >> 0x10) * 8) +
                                                ((ulong)uVar17 & 0xffff)),
                                               *(undefined *)(lVar20 + uVar23)));
            }
            local_78 = uVar17 >> (ulong)(uVar18 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar18 = local_78 & uVar5;
            uVar17 = param_8 - 1;
            if (uVar18 <= param_8 - 1) {
              uVar17 = uVar18;
            }
            plVar27 = (long *)(param_9 + (ulong)uVar17 * 0x18);
            lVar20 = *plVar27;
            uVar23 = (plVar27[1] - lVar20 >> 3) * 0x684bda13;
            local_80 = uVar28;
            uStack_7c = uVar14;
            if ((int)uVar23 != 0) {
              lVar26 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar20 + lVar26);
                bVar4 = checkTypedModuleMasks2<BitVector,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar18,uVar18,(HelperSource *)&local_c0,param_3,
                                   uVar6,uVar28 << (ulong)(local_148 & 0x1f),
                                   uVar14 << (ulong)(uVar8 & 0x1f),uVar11,uVar12,
                                   (HelperSource *)&local_e8,param_5,uVar7,
                                   uVar28 << (ulong)(uVar9 & 0x1f),
                                   uVar14 << (ulong)(local_15c & 0x1f),uVar10,uVar13);
                if (bVar4) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar23 & 0xffffffff) * 0xd8 + -0xd8 == lVar26) break;
                lVar20 = *plVar27;
                lVar26 = lVar26 + 0xd8;
              }
            }
            if (uVar18 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(uint *)(param_7 + 0x5c));
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar28 = 0;
    if (uVar10 != 0) {
      uVar28 = uVar8 / uVar10;
    }
    uVar18 = 0;
    if (uVar11 != 0) {
      uVar18 = uVar9 / uVar11;
    }
    uVar30 = NEON_cnt((ulong)uVar28,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar28 & 0xffff0000) != 0;
      uVar11 = uVar28 >> 0x10;
      if (!bVar4) {
        uVar11 = uVar28;
      }
      uVar15 = (uint)bVar4;
      uVar28 = uVar15 << 4 | 8;
      uVar17 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar28 = uVar15 << 4;
        uVar17 = uVar11;
      }
      uVar11 = uVar28 | 4;
      uVar15 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar11 = uVar28;
        uVar15 = uVar17;
      }
      uVar28 = uVar11 | 2;
      uVar17 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar28 = uVar11;
        uVar17 = uVar15;
      }
      local_15c = (uVar17 + uVar28) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = uVar8 / uVar13;
    }
    uVar30 = NEON_cnt((ulong)uVar18,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar18 & 0xffff0000) != 0;
      uVar8 = uVar18 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar18;
      }
      uVar18 = (uint)bVar4;
      uVar13 = uVar18 << 4 | 8;
      uVar28 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar13 = uVar18 << 4;
        uVar28 = uVar8;
      }
      uVar8 = uVar13 | 4;
      uVar18 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar8 = uVar13;
        uVar18 = uVar28;
      }
      uVar13 = uVar8 | 2;
      uVar28 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar13 = uVar8;
        uVar28 = uVar18;
      }
      local_16c = (uVar28 + uVar13) - 1;
    }
    else {
      local_16c = 0;
    }
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = uVar9 / uVar14;
    }
    uVar30 = NEON_cnt((ulong)uVar11,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar11;
      }
      uVar14 = (uint)bVar4;
      uVar11 = uVar14 << 4 | 8;
      uVar13 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar11 = uVar14 << 4;
        uVar13 = uVar9;
      }
      uVar9 = uVar11 | 4;
      uVar14 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar9 = uVar11;
        uVar14 = uVar13;
      }
      uVar11 = uVar9 | 2;
      uVar13 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar11 = uVar9;
        uVar13 = uVar14;
      }
      local_160 = (uVar13 + uVar11) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar30 = NEON_cnt((ulong)uVar8,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    if ((int)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) == 1) {
      bVar4 = (uVar8 & 0xffff0000) != 0;
      uVar9 = uVar8 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar8;
      }
      uVar13 = (uint)bVar4;
      uVar8 = uVar13 << 4 | 8;
      uVar11 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar8 = uVar13 << 4;
        uVar11 = uVar9;
      }
      uVar9 = uVar8 | 4;
      uVar13 = uVar11 >> 4;
      if (uVar11 < 0x10) {
        uVar9 = uVar8;
        uVar13 = uVar11;
      }
      uVar8 = uVar9 | 2;
      uVar11 = uVar13 >> 2;
      if (uVar13 < 4) {
        uVar8 = uVar9;
        uVar11 = uVar13;
      }
      local_170 = (uVar11 + uVar8) - 1;
    }
    else {
      local_170 = 0;
    }
    uVar8 = *(uint *)(param_7 + 0x48);
    if (uVar8 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar8);
        uVar9 = *(uint *)(param_7 + 0x58);
        if (uVar9 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar8 >> (ulong)(local_16c & 0x1f);
          do {
            lVar26 = *local_88;
            uVar13 = (uVar9 + local_98 * uVar8) * local_90;
            lVar20 = *(long *)(lVar26 + (ulong)(uVar13 >> 0x13) * 8);
            uVar23 = (ulong)(uVar13 >> 3) & 0xffff;
            if ((uint)uVar23 < 0xfffd) {
              uVar14 = *(uint *)(lVar20 + uVar23);
            }
            else {
              uVar14 = (uVar13 >> 3) + 1;
              uVar28 = (uVar13 >> 3) + 2;
              uVar14 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar26 + (ulong)(uVar28 >> 0x10) * 8) +
                                       ((ulong)uVar28 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar26 + (ulong)(uVar14 >> 0x10) * 8) +
                                                ((ulong)uVar14 & 0xffff)),
                                               *(undefined *)(lVar20 + uVar23)));
            }
            uVar13 = uVar14 >> (ulong)(uVar13 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar14 = uVar13 & uVar5;
            uVar28 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar28 = uVar14;
            }
            plVar27 = (long *)(param_9 + (ulong)uVar28 * 0x18);
            uVar23 = (plVar27[1] - *plVar27 >> 3) * 0x684bda13;
            local_80 = uVar9;
            uStack_7c = uVar8;
            local_78 = uVar13;
            if ((int)uVar23 != 0) {
              local_a8 = uVar9 >> (ulong)(local_15c & 0x1f);
              lVar26 = *(long *)param_4;
              uVar28 = (uVar10 * uVar11 + local_a8) * uVar12;
              lVar20 = *(long *)(lVar26 + (ulong)(uVar28 >> 0x13) * 8);
              uVar21 = (ulong)(uVar28 >> 3) & 0xffff;
              if ((uint)uVar21 < 0xfffd) {
                uVar18 = *(uint *)(lVar20 + uVar21);
              }
              else {
                uVar18 = (uVar28 >> 3) + 1;
                uVar17 = (uVar28 >> 3) + 2;
                uVar18 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar26 + (ulong)(uVar17 >> 0x10) * 8) +
                                         ((ulong)uVar17 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar26 + (ulong)(uVar18 >> 0x10) * 8) +
                                                  ((ulong)uVar18 & 0xffff)),
                                                 *(undefined *)(lVar20 + uVar21)));
              }
              uVar28 = uVar18 >> (ulong)(uVar28 & 7) & ~(-1 << (ulong)(uVar12 & 0x1f)) & 0xffffU;
              local_d0 = uVar9 >> (ulong)(local_160 & 0x1f);
              uStack_cc = uVar8 >> (ulong)(local_170 & 0x1f);
              uStack_a4 = uVar11;
              local_a0 = uVar28;
              uVar15 = (**(code **)(*(long *)param_6 + 0x58))();
              uVar23 = uVar23 & 0xffffffff;
              lVar20 = 0xcc;
              uVar18 = uVar15 & uVar7;
              uVar17 = uVar28 & uVar6;
              local_c8 = uVar15;
              do {
                lVar26 = *plVar27;
                pIVar24 = *(IDensityPixelSource **)(lVar26 + lVar20 + -0x54);
                if (pIVar24 == (IDensityPixelSource *)0x0) {
LAB_00839c08:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)(lVar26 + lVar20 + -0xcc),
                             (HelperSource *)&local_98);
                }
                else {
                  lVar1 = lVar26 + lVar20;
                  if (pIVar24 == param_1) {
                    if ((*(int *)(lVar1 + -0x4c) != 2) &&
                       ((*(int *)(lVar1 + -0x4c) == 0) == (*(uint *)(lVar1 + -0x48) != uVar14)))
                    goto LAB_00839984;
                    uVar19 = uVar13 >> (ulong)(*(uint *)(lVar1 + -0x44) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar1 + -0x40) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar19 < *(int *)(lVar1 + -0x3c)) {
LAB_00839ab8:
                      cVar2 = *(char *)(lVar26 + lVar20 + -0x34);
                    }
                    else {
LAB_00839a54:
                      cVar2 = *(char *)(lVar26 + lVar20 + -0x34);
                    }
                    if ((cVar2 != '\0') &&
                       ((uVar25 = *(uint *)(lVar26 + lVar20 + -0x30), uVar25 == 0 ||
                        ((uVar25 & uVar19) != 0)))) {
                      pIVar24 = *(IDensityPixelSource **)(lVar26 + lVar20 + -0x24);
                      if (pIVar24 == (IDensityPixelSource *)0x0) goto LAB_00839c08;
                      lVar1 = lVar26 + lVar20;
                      if (pIVar24 == param_1) {
                        if ((*(int *)(lVar1 + -0x1c) != 2) &&
                           ((*(int *)(lVar1 + -0x1c) == 0) == (*(uint *)(lVar1 + -0x18) != uVar14)))
                        goto LAB_00839984;
                        uVar19 = uVar13 >> (ulong)(*(uint *)(lVar1 + -0x14) & 0x1f) &
                                 (-1 << (ulong)(*(uint *)(lVar1 + -0x10) & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar19 < *(int *)(lVar1 + -0xc)) goto LAB_00839be8;
LAB_00839b84:
                        cVar2 = *(char *)(lVar26 + lVar20 + -4);
joined_r0x00839bf4:
                        if ((cVar2 == '\0') &&
                           ((*(uint *)(lVar26 + lVar20) == 0 ||
                            ((*(uint *)(lVar26 + lVar20) & uVar19) != 0)))) goto LAB_00839c08;
                      }
                      else {
                        iVar16 = *(int *)(lVar1 + -0x1c);
                        if (pIVar24 == param_3) {
                          if ((iVar16 == 2) ||
                             ((iVar16 == 0) != (*(uint *)(lVar26 + lVar20 + -0x18) != uVar17))) {
                            lVar1 = lVar26 + lVar20;
                            uVar25 = *(uint *)(lVar1 + -0x10);
                            iVar16 = *(int *)(lVar1 + -0xc);
                            uVar19 = uVar28 >> (ulong)(*(uint *)(lVar1 + -0x14) & 0x1f);
                            goto LAB_00839bd8;
                          }
                        }
                        else if ((iVar16 == 2) ||
                                ((iVar16 == 0) != (*(uint *)(lVar26 + lVar20 + -0x18) != uVar18))) {
                          lVar1 = lVar26 + lVar20;
                          uVar25 = *(uint *)(lVar1 + -0x10);
                          iVar16 = *(int *)(lVar1 + -0xc);
                          uVar19 = uVar15 >> (ulong)(*(uint *)(lVar1 + -0x14) & 0x1f);
LAB_00839bd8:
                          uVar19 = uVar19 & (-1 << (ulong)(uVar25 & 0x1f) ^ 0xffffffffU);
                          if (iVar16 <= (int)uVar19) goto LAB_00839b84;
LAB_00839be8:
                          cVar2 = *(char *)(lVar26 + lVar20 + -4);
                          goto joined_r0x00839bf4;
                        }
                      }
                    }
                  }
                  else {
                    iVar16 = *(int *)(lVar1 + -0x4c);
                    if (pIVar24 == param_3) {
                      if ((iVar16 == 2) ||
                         ((iVar16 == 0) != (*(uint *)(lVar26 + lVar20 + -0x48) != uVar17))) {
                        lVar1 = lVar26 + lVar20;
                        uVar25 = *(uint *)(lVar1 + -0x40);
                        iVar16 = *(int *)(lVar1 + -0x3c);
                        uVar19 = uVar28 >> (ulong)(*(uint *)(lVar1 + -0x44) & 0x1f);
                        goto LAB_00839aa8;
                      }
                    }
                    else if ((iVar16 == 2) ||
                            ((iVar16 == 0) != (*(uint *)(lVar26 + lVar20 + -0x48) != uVar18))) {
                      lVar1 = lVar26 + lVar20;
                      uVar25 = *(uint *)(lVar1 + -0x40);
                      iVar16 = *(int *)(lVar1 + -0x3c);
                      uVar19 = uVar15 >> (ulong)(*(uint *)(lVar1 + -0x44) & 0x1f);
LAB_00839aa8:
                      uVar19 = uVar19 & (-1 << (ulong)(uVar25 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar19 < iVar16) goto LAB_00839ab8;
                      goto LAB_00839a54;
                    }
                  }
LAB_00839984:
                  *(int *)(lVar26 + lVar20 + -200) = *(int *)(lVar26 + lVar20 + -200) + 1;
                }
                lVar20 = lVar20 + 0xd8;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
              if (uVar13 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_7 + 0x5c));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_7 + 0x4c));
    }
  }
  if (param_8 != 0) {
    uVar23 = 0;
    do {
      plVar27 = (long *)(param_9 + uVar23 * 0x18);
      lVar20 = *plVar27;
      lVar26 = plVar27[1];
      if (lVar26 != lVar20) {
        uVar21 = 0;
        do {
          if (*(char *)(lVar20 + uVar21 * 0xd8 + 0x6c) != '\0') {
            lVar20 = lVar20 + uVar21 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar20 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar20 + 0x24),*(uint *)(lVar20 + 0x28),*(uint *)(lVar20 + 0x70),
                       *(bool *)(lVar20 + 0x6d),true,true);
            lVar26 = plVar27[1];
            lVar20 = *plVar27;
          }
          uVar21 = (ulong)((int)uVar21 + 1);
          uVar22 = (lVar26 - lVar20 >> 3) * -0x7b425ed097b425ed;
        } while (uVar21 <= uVar22 && uVar22 - uVar21 != 0);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != param_8);
  }
  bVar4 = true;
LAB_0083a0dc:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


