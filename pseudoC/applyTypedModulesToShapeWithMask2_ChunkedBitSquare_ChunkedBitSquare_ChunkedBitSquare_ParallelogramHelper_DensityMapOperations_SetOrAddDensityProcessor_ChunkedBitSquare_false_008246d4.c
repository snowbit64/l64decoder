// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 008246d4
// Size: 4292 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, ChunkedBitSquare * param_4, IDensityPixelSource * param_5, ChunkedBitSquare * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<ChunkedBitSquare, ChunkedBitSquare,
   ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false> >(IDensityPixelSource*,
   ChunkedBitSquare*, IDensityPixelSource const*, ChunkedBitSquare*, IDensityPixelSource const*,
   ChunkedBitSquare*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               ChunkedBitSquare *param_4,IDensityPixelSource *param_5,ChunkedBitSquare *param_6,
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
  long lVar21;
  uint uVar22;
  IDensityPixelSource *pIVar23;
  long lVar24;
  ulong uVar25;
  uint *puVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  undefined2 uVar31;
  undefined8 uVar32;
  uint local_160;
  uint local_15c;
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
  local_b0 = (uint *)param_4;
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
                    /* try { // try from 0082575c to 00825767 has its CatchHandler @ 00825798 */
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
      goto LAB_00825718;
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
      uVar22 = uVar17 << 4 | 8;
      uVar19 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar22 = uVar17 << 4;
        uVar19 = uVar12;
      }
      uVar12 = uVar22 | 4;
      uVar17 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar12 = uVar22;
        uVar17 = uVar19;
      }
      uVar22 = uVar12 | 2;
      uVar19 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar22 = uVar12;
        uVar19 = uVar17;
      }
      local_14c = (uVar19 + uVar22) - 1;
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
      uVar22 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar22 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar19 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar9 = uVar13;
        uVar19 = uVar22;
      }
      uVar13 = uVar9 | 2;
      uVar22 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar9;
        uVar22 = uVar19;
      }
      local_154 = (uVar22 + uVar13) - 1;
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
      uVar22 = (uint)bVar5;
      uVar13 = uVar22 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar22 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar22 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar22 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar22;
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
      uVar22 = (uint)bVar5;
      uVar13 = uVar22 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar13 = uVar22 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar13 | 4;
      uVar22 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar13;
        uVar22 = uVar14;
      }
      uVar13 = uVar10 | 2;
      uVar14 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar13 = uVar10;
        uVar14 = uVar22;
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
            uVar22 = uVar13 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar13;
            uStack_7c = uVar10;
            uVar19 = (**ppcVar20)(ppcVar20,uVar22,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar26 = puVar4 + 0x11;
              uVar27 = 1;
              do {
                ppcVar20 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar14 * iVar18 + (int)uVar27) * 8);
                iVar16 = (**ppcVar20)(ppcVar20,uVar22,0,*puVar26);
                puVar1 = puVar26 + -1;
                uVar27 = uVar27 + 1;
                puVar26 = puVar26 + 2;
                uVar19 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar19;
              } while (uVar27 < puVar4[0xd]);
            }
            uVar14 = uVar19 & uVar6;
            uVar22 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar22 = uVar14;
            }
            plVar28 = (long *)(param_9 + (ulong)uVar22 * 0x18);
            lVar29 = *plVar28;
            uVar27 = (plVar28[1] - lVar29 >> 3) * 0x684bda13;
            local_78 = uVar19;
            if ((int)uVar27 != 0) {
              lVar21 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar29 + lVar21);
                bVar5 = checkTypedModuleMasks2<ChunkedBitSquare,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
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
                if ((uVar27 & 0xffffffff) * 0xd8 + -0xd8 == lVar21) break;
                lVar29 = *plVar28;
                lVar21 = lVar21 + 0xd8;
              }
            }
            uVar22 = local_78;
            puVar4 = local_88;
            if (uVar14 != local_78) {
              uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar19 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar21 = (ulong)uVar19 * 8;
              lVar29 = *(long *)(*(long *)(local_88 + 10) + lVar21);
              uVar32 = (**(code **)(lVar29 + 8))(lVar29,uVar14,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar4 + 10) + lVar21) = uVar32;
              if (1 < puVar4[0xd]) {
                puVar26 = puVar4 + 0x11;
                uVar27 = 1;
                do {
                  lVar21 = (ulong)(uVar19 + (int)uVar27) * 8;
                  lVar29 = *(long *)(*(long *)(puVar4 + 10) + lVar21);
                  uVar32 = (**(code **)(lVar29 + 8))
                                     (lVar29,uVar14,0,*puVar26,uVar22 >> (ulong)(puVar26[-1] & 0x1f)
                                     );
                  uVar27 = uVar27 + 1;
                  puVar26 = puVar26 + 2;
                  *(undefined8 *)(*(long *)(puVar4 + 10) + lVar21) = uVar32;
                } while (uVar27 < puVar4[0xd]);
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
      uVar22 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar15 = uVar19 << 4;
        uVar22 = uVar12;
      }
      uVar12 = uVar15 | 4;
      uVar19 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar12 = uVar15;
        uVar19 = uVar22;
      }
      uVar15 = uVar12 | 2;
      uVar22 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar15 = uVar12;
        uVar22 = uVar19;
      }
      local_154 = (uVar22 + uVar15) - 1;
    }
    else {
      local_154 = 0;
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
      local_15c = (uVar13 + uVar11) - 1;
    }
    else {
      local_15c = 0;
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
      local_158 = (uVar12 + uVar11) - 1;
    }
    else {
      local_158 = 0;
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
      local_160 = (uVar11 + uVar9) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar10 = *(uint *)(param_7 + 0x58);
        if (uVar10 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar9 >> (ulong)(local_15c & 0x1f);
          uVar12 = uVar9 >> (ulong)(local_160 & 0x1f);
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
              puVar26 = puVar4 + 0x11;
              uVar27 = 1;
              do {
                ppcVar20 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar13 * iVar18 + (int)uVar27) * 8);
                iVar16 = (**ppcVar20)(ppcVar20,uVar14,0,*puVar26);
                puVar1 = puVar26 + -1;
                uVar27 = uVar27 + 1;
                puVar26 = puVar26 + 2;
                uVar15 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar15;
              } while (uVar27 < puVar4[0xd]);
            }
            puVar4 = local_b0;
            uVar13 = uVar15 & uVar6;
            uVar14 = param_8 - 1;
            if (uVar13 <= param_8 - 1) {
              uVar14 = uVar13;
            }
            plVar28 = (long *)(param_9 + (ulong)uVar14 * 0x18);
            uVar14 = (int)((ulong)(plVar28[1] - *plVar28) >> 3) * 0x684bda13;
            local_78 = uVar15;
            if (uVar14 != 0) {
              local_a8 = uVar10 >> (ulong)(local_154 & 0x1f);
              uVar22 = (((uVar11 >> 5) << (ulong)(*local_b0 & 0x1f)) + (local_a8 >> 5)) *
                       local_b0[0xd];
              ppcVar20 = *(code ***)(*(long *)(local_b0 + 10) + (ulong)uVar22 * 8);
              uVar19 = local_a8 & 0x1f | (uVar11 & 0x1f) << 5;
              uStack_a4 = uVar11;
              uVar17 = (**ppcVar20)(ppcVar20,uVar19,0,local_b0[0xf]);
              if (1 < puVar4[0xd]) {
                puVar26 = puVar4 + 0x11;
                uVar27 = 1;
                do {
                  ppcVar20 = *(code ***)(*(long *)(puVar4 + 10) + (ulong)(uVar22 + (int)uVar27) * 8)
                  ;
                  iVar18 = (**ppcVar20)(ppcVar20,uVar19,0,*puVar26);
                  puVar1 = puVar26 + -1;
                  uVar27 = uVar27 + 1;
                  puVar26 = puVar26 + 2;
                  uVar17 = iVar18 << (ulong)(*puVar1 & 0x1f) | uVar17;
                } while (uVar27 < puVar4[0xd]);
              }
              puVar4 = local_d8;
              local_d0 = uVar10 >> (ulong)(local_158 & 0x1f);
              uVar22 = (((uVar12 >> 5) << (ulong)(*local_d8 & 0x1f)) + (local_d0 >> 5)) *
                       local_d8[0xd];
              ppcVar20 = *(code ***)(*(long *)(local_d8 + 10) + (ulong)uVar22 * 8);
              uVar19 = local_d0 & 0x1f | (uVar12 & 0x1f) << 5;
              uStack_cc = uVar12;
              local_a0 = uVar17;
              uVar17 = (**ppcVar20)(ppcVar20,uVar19,0,local_d8[0xf]);
              if (1 < puVar4[0xd]) {
                puVar26 = puVar4 + 0x11;
                uVar27 = 1;
                do {
                  ppcVar20 = *(code ***)(*(long *)(puVar4 + 10) + (ulong)(uVar22 + (int)uVar27) * 8)
                  ;
                  iVar18 = (**ppcVar20)(ppcVar20,uVar19,0,*puVar26);
                  puVar1 = puVar26 + -1;
                  uVar27 = uVar27 + 1;
                  puVar26 = puVar26 + 2;
                  uVar17 = iVar18 << (ulong)(*puVar1 & 0x1f) | uVar17;
                } while (uVar27 < puVar4[0xd]);
              }
              if (uVar14 < 2) {
                uVar14 = 1;
              }
              lVar29 = 0;
              local_c8 = uVar17;
              do {
                lVar21 = *plVar28;
                pIVar23 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar21 + lVar29) +
                           0x78);
                if (pIVar23 == (IDensityPixelSource *)0x0) {
LAB_008250e0:
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar21 + lVar29),
                             (HelperSource *)&local_98);
                }
                else {
                  if (pIVar23 == param_1) {
                    lVar24 = lVar21 + lVar29;
                    if ((*(int *)(lVar24 + 0x80) == 2) ||
                       ((*(int *)(lVar24 + 0x80) == 0) != (*(uint *)(lVar24 + 0x84) != uVar13))) {
                      uVar22 = uVar15 >> (ulong)(*(uint *)(lVar24 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar24 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar22 < *(int *)(lVar24 + 0x90)) goto LAB_00824fa8;
LAB_00824f38:
                      cVar2 = *(char *)(lVar21 + lVar29 + 0x98);
                      goto joined_r0x00824fac;
                    }
                  }
                  else {
                    if (pIVar23 == param_3) {
                      iVar18 = *(int *)(lVar21 + lVar29 + 0x80);
                      uVar22 = uVar7;
                      uVar19 = local_a0;
                    }
                    else {
                      iVar18 = *(int *)(lVar21 + lVar29 + 0x80);
                      uVar22 = uVar8;
                      uVar19 = local_c8;
                    }
                    if ((iVar18 == 2) ||
                       ((iVar18 == 0) != (*(uint *)(lVar21 + lVar29 + 0x84) != (uVar19 & uVar22))))
                    {
                      lVar24 = lVar21 + lVar29;
                      uVar22 = uVar19 >> (ulong)(*(uint *)(lVar24 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar24 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if (*(int *)(lVar24 + 0x90) <= (int)uVar22) goto LAB_00824f38;
LAB_00824fa8:
                      cVar2 = *(char *)(lVar21 + lVar29 + 0x98);
joined_r0x00824fac:
                      if ((cVar2 != '\0') &&
                         ((uVar19 = *(uint *)(lVar21 + lVar29 + 0x9c), uVar19 == 0 ||
                          ((uVar19 & uVar22) != 0)))) {
                        pIVar23 = *(IDensityPixelSource **)(lVar21 + lVar29 + 0xa8);
                        if (pIVar23 == (IDensityPixelSource *)0x0) goto LAB_008250e0;
                        if (pIVar23 == param_1) {
                          lVar24 = lVar21 + lVar29;
                          if ((*(int *)(lVar24 + 0xb0) == 2) ||
                             ((*(int *)(lVar24 + 0xb0) == 0) != (*(uint *)(lVar24 + 0xb4) != uVar13)
                             )) {
                            uVar22 = uVar15 >> (ulong)(*(uint *)(lVar24 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar24 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if ((int)uVar22 < *(int *)(lVar24 + 0xc0)) goto LAB_008250bc;
LAB_0082504c:
                            cVar2 = *(char *)(lVar21 + lVar29 + 200);
                            goto joined_r0x008250c0;
                          }
                        }
                        else {
                          if (pIVar23 == param_3) {
                            iVar18 = *(int *)(lVar21 + lVar29 + 0xb0);
                            uVar22 = uVar7;
                            uVar19 = local_a0;
                          }
                          else {
                            iVar18 = *(int *)(lVar21 + lVar29 + 0xb0);
                            uVar22 = uVar8;
                            uVar19 = local_c8;
                          }
                          if ((iVar18 == 2) ||
                             ((iVar18 == 0) !=
                              (*(uint *)(lVar21 + lVar29 + 0xb4) != (uVar19 & uVar22)))) {
                            lVar24 = lVar21 + lVar29;
                            uVar22 = uVar19 >> (ulong)(*(uint *)(lVar24 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar24 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if (*(int *)(lVar24 + 0xc0) <= (int)uVar22) goto LAB_0082504c;
LAB_008250bc:
                            cVar2 = *(char *)(lVar21 + lVar29 + 200);
joined_r0x008250c0:
                            if ((cVar2 != '\0') &&
                               ((uVar19 = *(uint *)(lVar21 + lVar29 + 0xcc), uVar19 == 0 ||
                                ((uVar19 & uVar22) != 0)))) goto LAB_008250e0;
                          }
                        }
                      }
                    }
                  }
                  *(int *)(lVar21 + lVar29 + 4) = *(int *)(lVar21 + lVar29 + 4) + 1;
                }
                uVar22 = local_78;
                puVar4 = local_88;
                lVar29 = lVar29 + 0xd8;
              } while ((ulong)uVar14 * 0xd8 - lVar29 != 0);
              if (uVar15 != local_78) {
                uVar13 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar14 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar21 = (ulong)uVar14 * 8;
                lVar29 = *(long *)(*(long *)(local_88 + 10) + lVar21);
                uVar32 = (**(code **)(lVar29 + 8))(lVar29,uVar13,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar4 + 10) + lVar21) = uVar32;
                if (1 < puVar4[0xd]) {
                  puVar26 = puVar4 + 0x11;
                  uVar27 = 1;
                  do {
                    lVar21 = (ulong)(uVar14 + (int)uVar27) * 8;
                    lVar29 = *(long *)(*(long *)(puVar4 + 10) + lVar21);
                    uVar32 = (**(code **)(lVar29 + 8))
                                       (lVar29,uVar13,0,*puVar26,
                                        uVar22 >> (ulong)(puVar26[-1] & 0x1f));
                    uVar27 = uVar27 + 1;
                    puVar26 = puVar26 + 2;
                    *(undefined8 *)(*(long *)(puVar4 + 10) + lVar21) = uVar32;
                  } while (uVar27 < puVar4[0xd]);
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
    uVar27 = 0;
    do {
      plVar28 = (long *)(param_9 + uVar27 * 0x18);
      lVar29 = *plVar28;
      lVar21 = plVar28[1];
      if (lVar21 != lVar29) {
        uVar30 = 0;
        do {
          if (*(char *)(lVar29 + uVar30 * 0xd8 + 0x6c) != '\0') {
            lVar29 = lVar29 + uVar30 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar29 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar29 + 0x24),*(uint *)(lVar29 + 0x28),*(uint *)(lVar29 + 0x70),
                       *(bool *)(lVar29 + 0x6d),true,true);
            lVar21 = plVar28[1];
            lVar29 = *plVar28;
          }
          uVar30 = (ulong)((int)uVar30 + 1);
          uVar25 = (lVar21 - lVar29 >> 3) * -0x7b425ed097b425ed;
        } while (uVar30 <= uVar25 && uVar25 - uVar30 != 0);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != param_8);
  }
  bVar5 = true;
LAB_00825718:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


