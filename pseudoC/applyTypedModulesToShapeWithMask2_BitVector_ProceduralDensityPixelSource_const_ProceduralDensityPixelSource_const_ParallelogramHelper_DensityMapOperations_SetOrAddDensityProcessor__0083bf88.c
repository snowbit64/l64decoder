// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083bf88
// Size: 3672 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(IDensityPixelSource * param_1, BitVector * param_2, IDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, IDensityPixelSource * param_5, ProceduralDensityPixelSource * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<BitVector,
   ProceduralDensityPixelSource const, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false> >(IDensityPixelSource*,
   BitVector*, IDensityPixelSource const*, ProceduralDensityPixelSource const*, IDensityPixelSource
   const*, ProceduralDensityPixelSource const*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (IDensityPixelSource *param_1,BitVector *param_2,IDensityPixelSource *param_3,
               ProceduralDensityPixelSource *param_4,IDensityPixelSource *param_5,
               ProceduralDensityPixelSource *param_6,ParallelogramHelper *param_7,uint param_8,
               TypedModules *param_9)

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
  long lVar19;
  IDensityPixelSource *pIVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined2 uVar26;
  undefined8 uVar27;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
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
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = param_4;
  uVar12 = (**(code **)(*(long *)param_5 + 0x18))(param_5);
  local_e8 = uVar12;
  uVar13 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  local_e4 = uVar13;
  local_e0 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_d8 = param_6;
  if ((((uVar8 < uVar10) || (uVar9 < uVar11)) || (uVar8 < uVar12)) || (uVar9 < uVar13)) {
    if (((uVar10 < uVar8) || (uVar11 < uVar9)) || ((uVar12 < uVar8 || (uVar13 < uVar9)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar16 != 0
         )) {
                    /* try { // try from 0083cda4 to 0083cdaf has its CatchHandler @ 0083cde0 */
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
      goto LAB_0083cd60;
    }
    uVar14 = 0;
    if (uVar8 != 0) {
      uVar14 = uVar10 / uVar8;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = uVar11 / uVar9;
    }
    uVar27 = NEON_cnt((ulong)uVar14,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar14 & 0xffff0000) != 0;
      uVar11 = uVar14 >> 0x10;
      if (!bVar4) {
        uVar11 = uVar14;
      }
      uVar17 = (uint)bVar4;
      uVar15 = uVar17 << 4 | 8;
      uVar18 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar15 = uVar17 << 4;
        uVar18 = uVar11;
      }
      uVar11 = uVar15 | 4;
      uVar17 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar11 = uVar15;
        uVar17 = uVar18;
      }
      uVar15 = uVar11 | 2;
      uVar18 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar15 = uVar11;
        uVar18 = uVar17;
      }
      local_154 = (uVar18 + uVar15) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar12 / uVar8;
    }
    uVar27 = NEON_cnt((ulong)uVar10,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar10 & 0xffff0000) != 0;
      uVar8 = uVar10 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar10;
      }
      uVar18 = (uint)bVar4;
      uVar12 = uVar18 << 4 | 8;
      uVar15 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar12 = uVar18 << 4;
        uVar15 = uVar8;
      }
      uVar8 = uVar12 | 4;
      uVar18 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar8 = uVar12;
        uVar18 = uVar15;
      }
      uVar12 = uVar8 | 2;
      uVar15 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar12 = uVar8;
        uVar15 = uVar18;
      }
      local_15c = (uVar15 + uVar12) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar8 = 0;
    if (uVar9 != 0) {
      uVar8 = uVar13 / uVar9;
    }
    uVar27 = NEON_cnt((ulong)uVar11,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar11;
      }
      uVar15 = (uint)bVar4;
      uVar12 = uVar15 << 4 | 8;
      uVar13 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar12 = uVar15 << 4;
        uVar13 = uVar9;
      }
      uVar9 = uVar12 | 4;
      uVar15 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar9 = uVar12;
        uVar15 = uVar13;
      }
      uVar12 = uVar9 | 2;
      uVar13 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar12 = uVar9;
        uVar13 = uVar15;
      }
      local_158 = (uVar13 + uVar12) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar27 = NEON_cnt((ulong)uVar8,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar8 & 0xffff0000) != 0;
      uVar9 = uVar8 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar8;
      }
      uVar15 = (uint)bVar4;
      uVar12 = uVar15 << 4 | 8;
      uVar13 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar12 = uVar15 << 4;
        uVar13 = uVar9;
      }
      uVar9 = uVar12 | 4;
      uVar15 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar9 = uVar12;
        uVar15 = uVar13;
      }
      uVar12 = uVar9 | 2;
      uVar13 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar12 = uVar9;
        uVar13 = uVar15;
      }
      local_160 = (uVar13 + uVar12) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar12 = *(uint *)(param_7 + 0x58);
        if (uVar12 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar23 = *local_88;
            uVar13 = (uVar12 + local_98 * uVar9) * local_90;
            lVar19 = *(long *)(lVar23 + (ulong)(uVar13 >> 0x13) * 8);
            uVar22 = (ulong)(uVar13 >> 3) & 0xffff;
            if ((uint)uVar22 < 0xfffd) {
              uVar15 = *(uint *)(lVar19 + uVar22);
            }
            else {
              uVar15 = (uVar13 >> 3) + 1;
              uVar18 = (uVar13 >> 3) + 2;
              uVar15 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar23 + (ulong)(uVar18 >> 0x10) * 8) +
                                       ((ulong)uVar18 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar23 + (ulong)(uVar15 >> 0x10) * 8) +
                                                ((ulong)uVar15 & 0xffff)),
                                               *(undefined *)(lVar19 + uVar22)));
            }
            local_78 = uVar15 >> (ulong)(uVar13 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar13 = local_78 & uVar5;
            uVar15 = param_8 - 1;
            if (uVar13 <= param_8 - 1) {
              uVar15 = uVar13;
            }
            plVar25 = (long *)(param_9 + (ulong)uVar15 * 0x18);
            lVar19 = *plVar25;
            uVar22 = (plVar25[1] - lVar19 >> 3) * 0x684bda13;
            local_80 = uVar12;
            uStack_7c = uVar9;
            if ((int)uVar22 != 0) {
              lVar23 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar19 + lVar23);
                bVar4 = checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
                                  (this,param_1,uVar13,uVar13,(HelperSource *)&local_c0,param_3,
                                   uVar6,uVar12 << (ulong)(local_154 & 0x1f),
                                   uVar9 << (ulong)(local_15c & 0x1f),uVar14,uVar10,
                                   (HelperSource *)&local_e8,param_5,uVar7,
                                   uVar12 << (ulong)(local_158 & 0x1f),
                                   uVar9 << (ulong)(local_160 & 0x1f),uVar11,uVar8);
                if (bVar4) {
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar22 & 0xffffffff) * 0xd8 + -0xd8 == lVar23) break;
                lVar19 = *plVar25;
                lVar23 = lVar23 + 0xd8;
              }
            }
            if (uVar13 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_7 + 0x5c));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar14 = 0;
    if (uVar10 != 0) {
      uVar14 = uVar8 / uVar10;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar9 / uVar11;
    }
    uVar27 = NEON_cnt((ulong)uVar14,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar14 & 0xffff0000) != 0;
      uVar11 = uVar14 >> 0x10;
      if (!bVar4) {
        uVar11 = uVar14;
      }
      uVar18 = (uint)bVar4;
      uVar14 = uVar18 << 4 | 8;
      uVar15 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar14 = uVar18 << 4;
        uVar15 = uVar11;
      }
      uVar11 = uVar14 | 4;
      uVar18 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar11 = uVar14;
        uVar18 = uVar15;
      }
      uVar14 = uVar11 | 2;
      uVar15 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar14 = uVar11;
        uVar15 = uVar18;
      }
      local_154 = (uVar15 + uVar14) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar8 / uVar12;
    }
    uVar27 = NEON_cnt((ulong)uVar10,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar10 & 0xffff0000) != 0;
      uVar8 = uVar10 >> 0x10;
      if (!bVar4) {
        uVar8 = uVar10;
      }
      uVar14 = (uint)bVar4;
      uVar10 = uVar14 << 4 | 8;
      uVar12 = uVar8 >> 8;
      if (uVar8 < 0x100) {
        uVar10 = uVar14 << 4;
        uVar12 = uVar8;
      }
      uVar8 = uVar10 | 4;
      uVar14 = uVar12 >> 4;
      if (uVar12 < 0x10) {
        uVar8 = uVar10;
        uVar14 = uVar12;
      }
      uVar10 = uVar8 | 2;
      uVar12 = uVar14 >> 2;
      if (uVar14 < 4) {
        uVar10 = uVar8;
        uVar12 = uVar14;
      }
      local_15c = (uVar12 + uVar10) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar8 = 0;
    if (uVar13 != 0) {
      uVar8 = uVar9 / uVar13;
    }
    uVar27 = NEON_cnt((ulong)uVar11,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar11;
      }
      uVar12 = (uint)bVar4;
      uVar10 = uVar12 << 4 | 8;
      uVar11 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar10 = uVar12 << 4;
        uVar11 = uVar9;
      }
      uVar9 = uVar10 | 4;
      uVar12 = uVar11 >> 4;
      if (uVar11 < 0x10) {
        uVar9 = uVar10;
        uVar12 = uVar11;
      }
      uVar10 = uVar9 | 2;
      uVar11 = uVar12 >> 2;
      if (uVar12 < 4) {
        uVar10 = uVar9;
        uVar11 = uVar12;
      }
      local_158 = (uVar11 + uVar10) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar27 = NEON_cnt((ulong)uVar8,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    if ((int)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) == 1) {
      bVar4 = (uVar8 & 0xffff0000) != 0;
      uVar9 = uVar8 >> 0x10;
      if (!bVar4) {
        uVar9 = uVar8;
      }
      uVar11 = (uint)bVar4;
      uVar8 = uVar11 << 4 | 8;
      uVar10 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar8 = uVar11 << 4;
        uVar10 = uVar9;
      }
      uVar9 = uVar8 | 4;
      uVar11 = uVar10 >> 4;
      if (uVar10 < 0x10) {
        uVar9 = uVar8;
        uVar11 = uVar10;
      }
      uVar8 = uVar9 | 2;
      uVar10 = uVar11 >> 2;
      if (uVar11 < 4) {
        uVar8 = uVar9;
        uVar10 = uVar11;
      }
      local_160 = (uVar10 + uVar8) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar8 = *(uint *)(param_7 + 0x48);
    if (uVar8 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar8);
        uVar9 = *(uint *)(param_7 + 0x58);
        if (uVar9 < *(uint *)(param_7 + 0x5c)) {
          do {
            lVar23 = *local_88;
            uVar10 = (uVar9 + local_98 * uVar8) * local_90;
            lVar19 = *(long *)(lVar23 + (ulong)(uVar10 >> 0x13) * 8);
            uVar22 = (ulong)(uVar10 >> 3) & 0xffff;
            if ((uint)uVar22 < 0xfffd) {
              uVar11 = *(uint *)(lVar19 + uVar22);
            }
            else {
              uVar11 = (uVar10 >> 3) + 1;
              uVar12 = (uVar10 >> 3) + 2;
              uVar11 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar23 + (ulong)(uVar12 >> 0x10) * 8) +
                                       ((ulong)uVar12 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar23 + (ulong)(uVar11 >> 0x10) * 8) +
                                                ((ulong)uVar11 & 0xffff)),
                                               *(undefined *)(lVar19 + uVar22)));
            }
            uVar10 = uVar11 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            uVar11 = uVar10 & uVar5;
            uVar12 = param_8 - 1;
            if (uVar11 <= param_8 - 1) {
              uVar12 = uVar11;
            }
            plVar25 = (long *)(param_9 + (ulong)uVar12 * 0x18);
            uVar22 = (plVar25[1] - *plVar25 >> 3) * 0x684bda13;
            local_80 = uVar9;
            uStack_7c = uVar8;
            local_78 = uVar10;
            if ((int)uVar22 != 0) {
              local_a8 = uVar9 >> (ulong)(local_154 & 0x1f);
              uStack_a4 = uVar8 >> (ulong)(local_15c & 0x1f);
              uVar14 = (**(code **)(*(long *)param_4 + 0x58))();
              local_d0 = uVar9 >> (ulong)(local_158 & 0x1f);
              uStack_cc = uVar8 >> (ulong)(local_160 & 0x1f);
              local_a0 = uVar14;
              uVar15 = (**(code **)(*(long *)param_6 + 0x58))();
              lVar19 = 0;
              uVar12 = uVar15 & uVar7;
              uVar13 = uVar14 & uVar6;
              local_c8 = uVar15;
              do {
                lVar23 = *plVar25;
                pIVar20 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<BitVector,false> *)(lVar23 + lVar19) + 0x78);
                if (pIVar20 == (IDensityPixelSource *)0x0) {
LAB_0083c8a0:
                  DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
                            ((SetOrAddDensityProcessor<BitVector,false> *)(lVar23 + lVar19),
                             (HelperSource *)&local_98);
                }
                else {
                  lVar1 = lVar23 + lVar19;
                  if (pIVar20 == param_1) {
                    if ((*(int *)(lVar1 + 0x80) != 2) &&
                       ((*(int *)(lVar1 + 0x80) == 0) == (*(uint *)(lVar1 + 0x84) != uVar11)))
                    goto LAB_0083c600;
                    uVar18 = uVar10 >> (ulong)(*(uint *)(lVar1 + 0x88) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar1 + 0x8c) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar18 < *(int *)(lVar1 + 0x90)) {
LAB_0083c740:
                      cVar2 = *(char *)(lVar23 + lVar19 + 0x98);
                    }
                    else {
LAB_0083c6d8:
                      cVar2 = *(char *)(lVar23 + lVar19 + 0x98);
                    }
                    if ((cVar2 != '\0') &&
                       ((uVar17 = *(uint *)(lVar23 + lVar19 + 0x9c), uVar17 == 0 ||
                        ((uVar17 & uVar18) != 0)))) {
                      pIVar20 = *(IDensityPixelSource **)(lVar23 + lVar19 + 0xa8);
                      if (pIVar20 == (IDensityPixelSource *)0x0) goto LAB_0083c8a0;
                      lVar1 = lVar23 + lVar19;
                      if (pIVar20 == param_1) {
                        if ((*(int *)(lVar1 + 0xb0) != 2) &&
                           ((*(int *)(lVar1 + 0xb0) == 0) == (*(uint *)(lVar1 + 0xb4) != uVar11)))
                        goto LAB_0083c600;
                        uVar18 = uVar10 >> (ulong)(*(uint *)(lVar1 + 0xb8) & 0x1f) &
                                 (-1 << (ulong)(*(uint *)(lVar1 + 0xbc) & 0x1f) ^ 0xffffffffU);
                        if ((int)uVar18 < *(int *)(lVar1 + 0xc0)) goto LAB_0083c87c;
LAB_0083c814:
                        cVar2 = *(char *)(lVar23 + lVar19 + 200);
joined_r0x0083c888:
                        if ((cVar2 == '\0') &&
                           ((uVar17 = *(uint *)(lVar23 + lVar19 + 0xcc), uVar17 == 0 ||
                            ((uVar17 & uVar18) != 0)))) goto LAB_0083c8a0;
                      }
                      else {
                        iVar16 = *(int *)(lVar1 + 0xb0);
                        if (pIVar20 == param_3) {
                          if ((iVar16 == 2) ||
                             ((iVar16 == 0) != (*(uint *)(lVar23 + lVar19 + 0xb4) != uVar13))) {
                            lVar1 = lVar23 + lVar19;
                            uVar17 = *(uint *)(lVar1 + 0xbc);
                            iVar16 = *(int *)(lVar1 + 0xc0);
                            uVar18 = uVar14 >> (ulong)(*(uint *)(lVar1 + 0xb8) & 0x1f);
                            goto LAB_0083c86c;
                          }
                        }
                        else if ((iVar16 == 2) ||
                                ((iVar16 == 0) != (*(uint *)(lVar23 + lVar19 + 0xb4) != uVar12))) {
                          lVar1 = lVar23 + lVar19;
                          uVar17 = *(uint *)(lVar1 + 0xbc);
                          iVar16 = *(int *)(lVar1 + 0xc0);
                          uVar18 = uVar15 >> (ulong)(*(uint *)(lVar1 + 0xb8) & 0x1f);
LAB_0083c86c:
                          uVar18 = uVar18 & (-1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
                          if (iVar16 <= (int)uVar18) goto LAB_0083c814;
LAB_0083c87c:
                          cVar2 = *(char *)(lVar23 + lVar19 + 200);
                          goto joined_r0x0083c888;
                        }
                      }
                    }
                  }
                  else {
                    iVar16 = *(int *)(lVar1 + 0x80);
                    if (pIVar20 == param_3) {
                      if ((iVar16 == 2) ||
                         ((iVar16 == 0) != (*(uint *)(lVar23 + lVar19 + 0x84) != uVar13))) {
                        lVar1 = lVar23 + lVar19;
                        uVar17 = *(uint *)(lVar1 + 0x8c);
                        iVar16 = *(int *)(lVar1 + 0x90);
                        uVar18 = uVar14 >> (ulong)(*(uint *)(lVar1 + 0x88) & 0x1f);
                        goto LAB_0083c730;
                      }
                    }
                    else if ((iVar16 == 2) ||
                            ((iVar16 == 0) != (*(uint *)(lVar23 + lVar19 + 0x84) != uVar12))) {
                      lVar1 = lVar23 + lVar19;
                      uVar17 = *(uint *)(lVar1 + 0x8c);
                      iVar16 = *(int *)(lVar1 + 0x90);
                      uVar18 = uVar15 >> (ulong)(*(uint *)(lVar1 + 0x88) & 0x1f);
LAB_0083c730:
                      uVar18 = uVar18 & (-1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar18 < iVar16) goto LAB_0083c740;
                      goto LAB_0083c6d8;
                    }
                  }
LAB_0083c600:
                  *(int *)(lVar23 + lVar19 + 4) = *(int *)(lVar23 + lVar19 + 4) + 1;
                }
                lVar19 = lVar19 + 0xd8;
              } while ((uVar22 & 0xffffffff) * 0xd8 - lVar19 != 0);
              if (uVar10 != local_78) {
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
    uVar22 = 0;
    do {
      plVar25 = (long *)(param_9 + uVar22 * 0x18);
      lVar19 = *plVar25;
      lVar23 = plVar25[1];
      if (lVar23 != lVar19) {
        uVar24 = 0;
        do {
          if (*(char *)(lVar19 + uVar24 * 0xd8 + 0x6c) != '\0') {
            lVar19 = lVar19 + uVar24 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar19 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar19 + 0x24),*(uint *)(lVar19 + 0x28),*(uint *)(lVar19 + 0x70),
                       *(bool *)(lVar19 + 0x6d),true,true);
            lVar23 = plVar25[1];
            lVar19 = *plVar25;
          }
          uVar24 = (ulong)((int)uVar24 + 1);
          uVar21 = (lVar23 - lVar19 >> 3) * -0x7b425ed097b425ed;
        } while (uVar24 <= uVar21 && uVar21 - uVar24 != 0);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_8);
  }
  bVar4 = true;
LAB_0083cd60:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


