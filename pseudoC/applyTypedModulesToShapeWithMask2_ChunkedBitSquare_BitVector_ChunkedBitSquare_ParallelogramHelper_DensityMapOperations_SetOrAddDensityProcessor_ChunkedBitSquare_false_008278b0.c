// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 008278b0
// Size: 4260 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, BitVector * param_4, IDensityPixelSource * param_5, ChunkedBitSquare * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<ChunkedBitSquare, BitVector,
   ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false> >(IDensityPixelSource*,
   ChunkedBitSquare*, IDensityPixelSource const*, BitVector*, IDensityPixelSource const*,
   ChunkedBitSquare*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,IDensityPixelSource *param_5,ChunkedBitSquare *param_6,
               ParallelogramHelper *param_7,uint param_8,TypedModules *param_9)

{
  uint *puVar1;
  TypedModuleWithMasks *this;
  char cVar2;
  long lVar3;
  uint *puVar4;
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
  int iVar18;
  uint uVar19;
  code **ppcVar20;
  uint uVar21;
  IDensityPixelSource *pIVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  undefined2 uVar31;
  undefined8 uVar32;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  uint *local_d8;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
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
  local_88 = (uint *)param_2;
  uVar11 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar11;
  uVar12 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar12;
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = (long *)param_4;
  uVar13 = (**(code **)(*(long *)param_5 + 0x18))(param_5);
  local_e8 = uVar13;
  uVar14 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  local_e4 = uVar14;
  local_e0 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_d8 = (uint *)param_6;
  if ((((uVar9 < uVar11) || (uVar10 < uVar12)) || (uVar9 < uVar13)) || (uVar10 < uVar14)) {
    if (((uVar11 < uVar9) || (uVar12 < uVar10)) || ((uVar13 < uVar9 || (uVar14 < uVar10)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 00828918 to 00828923 has its CatchHandler @ 00828954 */
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
      goto LAB_008288d4;
    }
    uVar15 = 0;
    if (uVar9 != 0) {
      uVar15 = uVar11 / uVar9;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar12 / uVar10;
    }
    uVar32 = NEON_cnt((ulong)uVar15,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar15 & 0xffff0000) != 0;
      uVar12 = uVar15 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar15;
      }
      uVar17 = (uint)bVar5;
      uVar21 = uVar17 << 4 | 8;
      uVar19 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar21 = uVar17 << 4;
        uVar19 = uVar12;
      }
      uVar12 = uVar21 | 4;
      uVar17 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar12 = uVar21;
        uVar17 = uVar19;
      }
      uVar21 = uVar12 | 2;
      uVar19 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar21 = uVar12;
        uVar19 = uVar17;
      }
      local_14c = (uVar19 + uVar21) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar13 / uVar9;
    }
    uVar32 = NEON_cnt((ulong)uVar11,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar11;
      }
      uVar19 = (uint)bVar5;
      uVar13 = uVar19 << 4 | 8;
      uVar21 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar21 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar19 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar9 = uVar13;
        uVar19 = uVar21;
      }
      uVar13 = uVar9 | 2;
      uVar21 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar9;
        uVar21 = uVar19;
      }
      local_154 = (uVar21 + uVar13) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar14 / uVar10;
    }
    uVar32 = NEON_cnt((ulong)uVar12,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar12;
      }
      uVar21 = (uint)bVar5;
      uVar13 = uVar21 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar21 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar21 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar21 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar21;
      }
      local_150 = (uVar14 + uVar13) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar32 = NEON_cnt((ulong)uVar9,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar9 & 0xffff0000) != 0;
      uVar10 = uVar9 >> 0x10;
      if (!bVar5) {
        uVar10 = uVar9;
      }
      uVar21 = (uint)bVar5;
      uVar13 = uVar21 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar21 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar21 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar21 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar21;
      }
      local_158 = (uVar14 + uVar13) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar10 = *(uint *)(param_7 + 0x48);
    if (uVar10 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar10);
        uVar13 = *(uint *)(param_7 + 0x58);
        if (uVar13 < *(uint *)(param_7 + 0x5c)) {
          do {
            puVar4 = local_88;
            uVar14 = local_88[0xd];
            iVar18 = ((uVar10 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar13 >> 5);
            ppcVar20 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar18 * uVar14) * 8);
            uVar21 = uVar13 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar13;
            uStack_7c = uVar10;
            uVar19 = (**ppcVar20)(ppcVar20,uVar21,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar27 = puVar4 + 0x11;
              uVar28 = 1;
              do {
                ppcVar20 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar14 * iVar18 + (int)uVar28) * 8);
                iVar16 = (**ppcVar20)(ppcVar20,uVar21,0,*puVar27);
                puVar1 = puVar27 + -1;
                uVar28 = uVar28 + 1;
                puVar27 = puVar27 + 2;
                uVar19 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar19;
              } while (uVar28 < puVar4[0xd]);
            }
            uVar14 = uVar19 & uVar6;
            uVar21 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar21 = uVar14;
            }
            plVar29 = (long *)(param_9 + (ulong)uVar21 * 0x18);
            lVar24 = *plVar29;
            uVar28 = (plVar29[1] - lVar24 >> 3) * 0x684bda13;
            local_78 = uVar19;
            if ((int)uVar28 != 0) {
              lVar26 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar24 + lVar26);
                bVar5 = checkTypedModuleMasks2<BitVector,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                                  (this,param_1,uVar14,uVar14,(HelperSource *)&local_c0,param_3,
                                   uVar7,uVar13 << (ulong)(local_14c & 0x1f),
                                   uVar10 << (ulong)(local_154 & 0x1f),uVar15,uVar11,
                                   (HelperSource *)&local_e8,param_5,uVar8,
                                   uVar13 << (ulong)(local_150 & 0x1f),
                                   uVar10 << (ulong)(local_158 & 0x1f),uVar12,uVar9);
                if (bVar5) {
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar28 & 0xffffffff) * 0xd8 + -0xd8 == lVar26) break;
                lVar24 = *plVar29;
                lVar26 = lVar26 + 0xd8;
              }
            }
            uVar21 = local_78;
            puVar4 = local_88;
            if (uVar14 != local_78) {
              uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar19 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar26 = (ulong)uVar19 * 8;
              lVar24 = *(long *)(*(long *)(local_88 + 10) + lVar26);
              uVar32 = (**(code **)(lVar24 + 8))(lVar24,uVar14,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar4 + 10) + lVar26) = uVar32;
              if (1 < puVar4[0xd]) {
                puVar27 = puVar4 + 0x11;
                uVar28 = 1;
                do {
                  lVar26 = (ulong)(uVar19 + (int)uVar28) * 8;
                  lVar24 = *(long *)(*(long *)(puVar4 + 10) + lVar26);
                  uVar32 = (**(code **)(lVar24 + 8))
                                     (lVar24,uVar14,0,*puVar27,uVar21 >> (ulong)(puVar27[-1] & 0x1f)
                                     );
                  uVar28 = uVar28 + 1;
                  puVar27 = puVar27 + 2;
                  *(undefined8 *)(*(long *)(puVar4 + 10) + lVar26) = uVar32;
                } while (uVar28 < puVar4[0xd]);
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(param_7 + 0x5c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar15 = 0;
    if (uVar11 != 0) {
      uVar15 = uVar9 / uVar11;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar10 / uVar12;
    }
    uVar32 = NEON_cnt((ulong)uVar15,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar15 & 0xffff0000) != 0;
      uVar12 = uVar15 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar15;
      }
      uVar19 = (uint)bVar5;
      uVar15 = uVar19 << 4 | 8;
      uVar21 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar15 = uVar19 << 4;
        uVar21 = uVar12;
      }
      uVar12 = uVar15 | 4;
      uVar19 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar12 = uVar15;
        uVar19 = uVar21;
      }
      uVar15 = uVar12 | 2;
      uVar21 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar15 = uVar12;
        uVar21 = uVar19;
      }
      local_14c = (uVar21 + uVar15) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar9 / uVar13;
    }
    uVar32 = NEON_cnt((ulong)uVar11,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar11 & 0xffff0000) != 0;
      uVar9 = uVar11 >> 0x10;
      if (!bVar5) {
        uVar9 = uVar11;
      }
      uVar15 = (uint)bVar5;
      uVar11 = uVar15 << 4 | 8;
      uVar13 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar11 = uVar15 << 4;
        uVar13 = uVar9;
      }
      uVar9 = uVar11 | 4;
      uVar15 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar9 = uVar11;
        uVar15 = uVar13;
      }
      uVar11 = uVar9 | 2;
      uVar13 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar11 = uVar9;
        uVar13 = uVar15;
      }
      local_154 = (uVar13 + uVar11) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar9 = 0;
    if (uVar14 != 0) {
      uVar9 = uVar10 / uVar14;
    }
    uVar32 = NEON_cnt((ulong)uVar12,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
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
      local_150 = (uVar12 + uVar11) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar32 = NEON_cnt((ulong)uVar9,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
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
      local_158 = (uVar11 + uVar9) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar10 = *(uint *)(param_7 + 0x58);
        if (uVar10 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar9 >> (ulong)(local_154 & 0x1f);
          uVar12 = uVar9 >> (ulong)(local_158 & 0x1f);
          do {
            puVar4 = local_88;
            uVar13 = local_88[0xd];
            iVar18 = ((uVar9 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar10 >> 5);
            ppcVar20 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar18 * uVar13) * 8);
            uVar14 = uVar10 & 0x1f | (uVar9 & 0x1f) << 5;
            local_80 = uVar10;
            uStack_7c = uVar9;
            uVar15 = (**ppcVar20)(ppcVar20,uVar14,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar27 = puVar4 + 0x11;
              uVar28 = 1;
              do {
                ppcVar20 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar13 * iVar18 + (int)uVar28) * 8);
                iVar16 = (**ppcVar20)(ppcVar20,uVar14,0,*puVar27);
                puVar1 = puVar27 + -1;
                uVar28 = uVar28 + 1;
                puVar27 = puVar27 + 2;
                uVar15 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar15;
              } while (uVar28 < puVar4[0xd]);
            }
            puVar4 = local_d8;
            uVar13 = uVar15 & uVar6;
            uVar14 = param_8 - 1;
            if (uVar13 <= param_8 - 1) {
              uVar14 = uVar13;
            }
            plVar29 = (long *)(param_9 + (ulong)uVar14 * 0x18);
            uVar14 = (int)((ulong)(plVar29[1] - *plVar29) >> 3) * 0x684bda13;
            local_78 = uVar15;
            if (uVar14 != 0) {
              local_a8 = uVar10 >> (ulong)(local_14c & 0x1f);
              lVar26 = *local_b0;
              uVar21 = (local_a8 + local_c0 * uVar11) * local_b8;
              uVar28 = (ulong)(uVar21 >> 3) & 0xffff;
              lVar24 = *(long *)(lVar26 + (ulong)(uVar21 >> 0x13) * 8);
              if ((uint)uVar28 < 0xfffd) {
                uVar19 = *(uint *)(lVar24 + uVar28);
              }
              else {
                uVar19 = (uVar21 >> 3) + 1;
                uVar17 = (uVar21 >> 3) + 2;
                uVar19 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar26 + (ulong)(uVar17 >> 0x10) * 8) +
                                         ((ulong)uVar17 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar26 + (ulong)(uVar19 >> 0x10) * 8) +
                                                  ((ulong)uVar19 & 0xffff)),
                                                 *(undefined *)(lVar24 + uVar28)));
              }
              local_a0 = uVar19 >> (ulong)(uVar21 & 7) &
                         (-1 << (ulong)(local_b8 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_d0 = uVar10 >> (ulong)(local_150 & 0x1f);
              uVar21 = (((uVar12 >> 5) << (ulong)(*local_d8 & 0x1f)) + (local_d0 >> 5)) *
                       local_d8[0xd];
              ppcVar20 = *(code ***)(*(long *)(local_d8 + 10) + (ulong)uVar21 * 8);
              uVar19 = local_d0 & 0x1f | (uVar12 & 0x1f) << 5;
              uStack_cc = uVar12;
              uStack_a4 = uVar11;
              uVar17 = (**ppcVar20)(ppcVar20,uVar19,0,local_d8[0xf]);
              if (1 < puVar4[0xd]) {
                puVar27 = puVar4 + 0x11;
                uVar28 = 1;
                do {
                  ppcVar20 = *(code ***)(*(long *)(puVar4 + 10) + (ulong)(uVar21 + (int)uVar28) * 8)
                  ;
                  iVar18 = (**ppcVar20)(ppcVar20,uVar19,0,*puVar27);
                  puVar1 = puVar27 + -1;
                  uVar28 = uVar28 + 1;
                  puVar27 = puVar27 + 2;
                  uVar17 = iVar18 << (ulong)(*puVar1 & 0x1f) | uVar17;
                } while (uVar28 < puVar4[0xd]);
              }
              if (uVar14 < 2) {
                uVar14 = 1;
              }
              lVar24 = 0;
              local_c8 = uVar17;
              do {
                lVar26 = *plVar29;
                pIVar22 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar26 + lVar24) +
                           0x78);
                if (pIVar22 == (IDensityPixelSource *)0x0) {
LAB_0082829c:
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar26 + lVar24),
                             (HelperSource *)&local_98);
                }
                else {
                  if (pIVar22 == param_1) {
                    lVar23 = lVar26 + lVar24;
                    if ((*(int *)(lVar23 + 0x80) == 2) ||
                       ((*(int *)(lVar23 + 0x80) == 0) != (*(uint *)(lVar23 + 0x84) != uVar13))) {
                      uVar21 = uVar15 >> (ulong)(*(uint *)(lVar23 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar23 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar21 < *(int *)(lVar23 + 0x90)) goto LAB_00828164;
LAB_008280f4:
                      cVar2 = *(char *)(lVar26 + lVar24 + 0x98);
                      goto joined_r0x00828168;
                    }
                  }
                  else {
                    if (pIVar22 == param_3) {
                      iVar18 = *(int *)(lVar26 + lVar24 + 0x80);
                      uVar21 = uVar7;
                      uVar19 = local_a0;
                    }
                    else {
                      iVar18 = *(int *)(lVar26 + lVar24 + 0x80);
                      uVar21 = uVar8;
                      uVar19 = local_c8;
                    }
                    if ((iVar18 == 2) ||
                       ((iVar18 == 0) != (*(uint *)(lVar26 + lVar24 + 0x84) != (uVar19 & uVar21))))
                    {
                      lVar23 = lVar26 + lVar24;
                      uVar21 = uVar19 >> (ulong)(*(uint *)(lVar23 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar23 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if (*(int *)(lVar23 + 0x90) <= (int)uVar21) goto LAB_008280f4;
LAB_00828164:
                      cVar2 = *(char *)(lVar26 + lVar24 + 0x98);
joined_r0x00828168:
                      if ((cVar2 != '\0') &&
                         ((uVar19 = *(uint *)(lVar26 + lVar24 + 0x9c), uVar19 == 0 ||
                          ((uVar19 & uVar21) != 0)))) {
                        pIVar22 = *(IDensityPixelSource **)(lVar26 + lVar24 + 0xa8);
                        if (pIVar22 == (IDensityPixelSource *)0x0) goto LAB_0082829c;
                        if (pIVar22 == param_1) {
                          lVar23 = lVar26 + lVar24;
                          if ((*(int *)(lVar23 + 0xb0) == 2) ||
                             ((*(int *)(lVar23 + 0xb0) == 0) != (*(uint *)(lVar23 + 0xb4) != uVar13)
                             )) {
                            uVar21 = uVar15 >> (ulong)(*(uint *)(lVar23 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar23 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if ((int)uVar21 < *(int *)(lVar23 + 0xc0)) goto LAB_00828278;
LAB_00828208:
                            cVar2 = *(char *)(lVar26 + lVar24 + 200);
                            goto joined_r0x0082827c;
                          }
                        }
                        else {
                          if (pIVar22 == param_3) {
                            iVar18 = *(int *)(lVar26 + lVar24 + 0xb0);
                            uVar21 = uVar7;
                            uVar19 = local_a0;
                          }
                          else {
                            iVar18 = *(int *)(lVar26 + lVar24 + 0xb0);
                            uVar21 = uVar8;
                            uVar19 = local_c8;
                          }
                          if ((iVar18 == 2) ||
                             ((iVar18 == 0) !=
                              (*(uint *)(lVar26 + lVar24 + 0xb4) != (uVar19 & uVar21)))) {
                            lVar23 = lVar26 + lVar24;
                            uVar21 = uVar19 >> (ulong)(*(uint *)(lVar23 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar23 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if (*(int *)(lVar23 + 0xc0) <= (int)uVar21) goto LAB_00828208;
LAB_00828278:
                            cVar2 = *(char *)(lVar26 + lVar24 + 200);
joined_r0x0082827c:
                            if ((cVar2 != '\0') &&
                               ((uVar19 = *(uint *)(lVar26 + lVar24 + 0xcc), uVar19 == 0 ||
                                ((uVar19 & uVar21) != 0)))) goto LAB_0082829c;
                          }
                        }
                      }
                    }
                  }
                  *(int *)(lVar26 + lVar24 + 4) = *(int *)(lVar26 + lVar24 + 4) + 1;
                }
                uVar21 = local_78;
                puVar4 = local_88;
                lVar24 = lVar24 + 0xd8;
              } while ((ulong)uVar14 * 0xd8 - lVar24 != 0);
              if (uVar15 != local_78) {
                uVar13 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar14 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar26 = (ulong)uVar14 * 8;
                lVar24 = *(long *)(*(long *)(local_88 + 10) + lVar26);
                uVar32 = (**(code **)(lVar24 + 8))(lVar24,uVar13,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar4 + 10) + lVar26) = uVar32;
                if (1 < puVar4[0xd]) {
                  puVar27 = puVar4 + 0x11;
                  uVar28 = 1;
                  do {
                    lVar26 = (ulong)(uVar14 + (int)uVar28) * 8;
                    lVar24 = *(long *)(*(long *)(puVar4 + 10) + lVar26);
                    uVar32 = (**(code **)(lVar24 + 8))
                                       (lVar24,uVar13,0,*puVar27,
                                        uVar21 >> (ulong)(puVar27[-1] & 0x1f));
                    uVar28 = uVar28 + 1;
                    puVar27 = puVar27 + 2;
                    *(undefined8 *)(*(long *)(puVar4 + 10) + lVar26) = uVar32;
                  } while (uVar28 < puVar4[0xd]);
                }
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
      plVar29 = (long *)(param_9 + uVar28 * 0x18);
      lVar24 = *plVar29;
      lVar26 = plVar29[1];
      if (lVar26 != lVar24) {
        uVar30 = 0;
        do {
          if (*(char *)(lVar24 + uVar30 * 0xd8 + 0x6c) != '\0') {
            lVar24 = lVar24 + uVar30 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar24 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar24 + 0x24),*(uint *)(lVar24 + 0x28),*(uint *)(lVar24 + 0x70),
                       *(bool *)(lVar24 + 0x6d),true,true);
            lVar26 = plVar29[1];
            lVar24 = *plVar29;
          }
          uVar30 = (ulong)((int)uVar30 + 1);
          uVar25 = (lVar26 - lVar24 >> 3) * -0x7b425ed097b425ed;
        } while (uVar30 <= uVar25 && uVar25 - uVar30 != 0);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != param_8);
  }
  bVar5 = true;
LAB_008288d4:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


