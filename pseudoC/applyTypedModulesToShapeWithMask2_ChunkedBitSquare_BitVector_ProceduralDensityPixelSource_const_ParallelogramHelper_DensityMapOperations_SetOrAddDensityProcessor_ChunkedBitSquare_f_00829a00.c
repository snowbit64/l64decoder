// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 00829a00
// Size: 4076 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, BitVector * param_4, IDensityPixelSource * param_5, ProceduralDensityPixelSource * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<ChunkedBitSquare, BitVector,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false> >(IDensityPixelSource*,
   ChunkedBitSquare*, IDensityPixelSource const*, BitVector*, IDensityPixelSource const*,
   ProceduralDensityPixelSource const*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,IDensityPixelSource *param_5,ProceduralDensityPixelSource *param_6
               ,ParallelogramHelper *param_7,uint param_8,TypedModules *param_9)

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
  int iVar15;
  uint uVar16;
  int iVar17;
  code **ppcVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  IDensityPixelSource *pIVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  long *plVar29;
  ulong uVar30;
  undefined2 uVar31;
  undefined8 uVar32;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  long *local_d8;
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
  local_d8 = (long *)param_6;
  if ((((uVar9 < uVar11) || (uVar10 < uVar12)) || (uVar9 < uVar13)) || (uVar10 < uVar14)) {
    if (((uVar11 < uVar9) || (uVar12 < uVar10)) || ((uVar13 < uVar9 || (uVar14 < uVar10)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar17 != 0
         )) {
                    /* try { // try from 0082a9b0 to 0082a9bb has its CatchHandler @ 0082a9ec */
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
      goto LAB_0082a96c;
    }
    uVar25 = 0;
    if (uVar9 != 0) {
      uVar25 = uVar11 / uVar9;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar12 / uVar10;
    }
    uVar32 = NEON_cnt((ulong)uVar25,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar25 & 0xffff0000) != 0;
      uVar12 = uVar25 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar25;
      }
      uVar19 = (uint)bVar5;
      uVar20 = uVar19 << 4 | 8;
      uVar16 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar20 = uVar19 << 4;
        uVar16 = uVar12;
      }
      uVar12 = uVar20 | 4;
      uVar19 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar12 = uVar20;
        uVar19 = uVar16;
      }
      uVar20 = uVar12 | 2;
      uVar16 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar20 = uVar12;
        uVar16 = uVar19;
      }
      local_14c = (uVar16 + uVar20) - 1;
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
      uVar16 = (uint)bVar5;
      uVar13 = uVar16 << 4 | 8;
      uVar20 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar16 << 4;
        uVar20 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar16 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar9 = uVar13;
        uVar16 = uVar20;
      }
      uVar13 = uVar9 | 2;
      uVar20 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar13 = uVar9;
        uVar20 = uVar16;
      }
      local_154 = (uVar20 + uVar13) - 1;
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
            iVar17 = ((uVar10 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar13 >> 5);
            ppcVar18 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar17 * uVar14) * 8);
            uVar20 = uVar13 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar13;
            uStack_7c = uVar10;
            uVar16 = (**ppcVar18)(ppcVar18,uVar20,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar28 = puVar4 + 0x11;
              uVar30 = 1;
              do {
                ppcVar18 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar14 * iVar17 + (int)uVar30) * 8);
                iVar15 = (**ppcVar18)(ppcVar18,uVar20,0,*puVar28);
                puVar1 = puVar28 + -1;
                uVar30 = uVar30 + 1;
                puVar28 = puVar28 + 2;
                uVar16 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar16;
              } while (uVar30 < puVar4[0xd]);
            }
            uVar14 = uVar16 & uVar6;
            uVar20 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar20 = uVar14;
            }
            plVar29 = (long *)(param_9 + (ulong)uVar20 * 0x18);
            lVar21 = *plVar29;
            uVar30 = (plVar29[1] - lVar21 >> 3) * 0x684bda13;
            local_78 = uVar16;
            if ((int)uVar30 != 0) {
              lVar27 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar21 + lVar27);
                bVar5 = checkTypedModuleMasks2<BitVector,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                                  (this,param_1,uVar14,uVar14,(HelperSource *)&local_c0,param_3,
                                   uVar7,uVar13 << (ulong)(local_14c & 0x1f),
                                   uVar10 << (ulong)(local_154 & 0x1f),uVar25,uVar11,
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
                if ((uVar30 & 0xffffffff) * 0xd8 + -0xd8 == lVar27) break;
                lVar21 = *plVar29;
                lVar27 = lVar27 + 0xd8;
              }
            }
            uVar20 = local_78;
            puVar4 = local_88;
            if (uVar14 != local_78) {
              uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar16 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar27 = (ulong)uVar16 * 8;
              lVar21 = *(long *)(*(long *)(local_88 + 10) + lVar27);
              uVar32 = (**(code **)(lVar21 + 8))(lVar21,uVar14,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar4 + 10) + lVar27) = uVar32;
              if (1 < puVar4[0xd]) {
                puVar28 = puVar4 + 0x11;
                uVar30 = 1;
                do {
                  lVar27 = (ulong)(uVar16 + (int)uVar30) * 8;
                  lVar21 = *(long *)(*(long *)(puVar4 + 10) + lVar27);
                  uVar32 = (**(code **)(lVar21 + 8))
                                     (lVar21,uVar14,0,*puVar28,uVar20 >> (ulong)(puVar28[-1] & 0x1f)
                                     );
                  uVar30 = uVar30 + 1;
                  puVar28 = puVar28 + 2;
                  *(undefined8 *)(*(long *)(puVar4 + 10) + lVar27) = uVar32;
                } while (uVar30 < puVar4[0xd]);
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
    uVar25 = 0;
    if (uVar11 != 0) {
      uVar25 = uVar9 / uVar11;
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar10 / uVar12;
    }
    uVar32 = NEON_cnt((ulong)uVar25,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar5 = (uVar25 & 0xffff0000) != 0;
      uVar12 = uVar25 >> 0x10;
      if (!bVar5) {
        uVar12 = uVar25;
      }
      uVar16 = (uint)bVar5;
      uVar25 = uVar16 << 4 | 8;
      uVar20 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar25 = uVar16 << 4;
        uVar20 = uVar12;
      }
      uVar12 = uVar25 | 4;
      uVar16 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar12 = uVar25;
        uVar16 = uVar20;
      }
      uVar25 = uVar12 | 2;
      uVar20 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar25 = uVar12;
        uVar20 = uVar16;
      }
      local_13c = (uVar20 + uVar25) - 1;
    }
    else {
      local_13c = 0;
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
      uVar25 = (uint)bVar5;
      uVar11 = uVar25 << 4 | 8;
      uVar13 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar11 = uVar25 << 4;
        uVar13 = uVar9;
      }
      uVar9 = uVar11 | 4;
      uVar25 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar9 = uVar11;
        uVar25 = uVar13;
      }
      uVar11 = uVar9 | 2;
      uVar13 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar11 = uVar9;
        uVar13 = uVar25;
      }
      local_144 = (uVar13 + uVar11) - 1;
    }
    else {
      local_144 = 0;
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
      local_140 = (uVar12 + uVar11) - 1;
    }
    else {
      local_140 = 0;
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
      local_148 = (uVar11 + uVar9) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar10 = *(uint *)(param_7 + 0x58);
        if (uVar10 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar9 >> (ulong)(local_144 & 0x1f);
          do {
            puVar4 = local_88;
            uVar12 = local_88[0xd];
            iVar17 = ((uVar9 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar10 >> 5);
            ppcVar18 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar17 * uVar12) * 8);
            uVar13 = uVar10 & 0x1f | (uVar9 & 0x1f) << 5;
            local_80 = uVar10;
            uStack_7c = uVar9;
            uVar14 = (**ppcVar18)(ppcVar18,uVar13,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar28 = puVar4 + 0x11;
              uVar30 = 1;
              do {
                ppcVar18 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar12 * iVar17 + (int)uVar30) * 8);
                iVar15 = (**ppcVar18)(ppcVar18,uVar13,0,*puVar28);
                puVar1 = puVar28 + -1;
                uVar30 = uVar30 + 1;
                puVar28 = puVar28 + 2;
                uVar14 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar14;
              } while (uVar30 < puVar4[0xd]);
            }
            uVar12 = uVar14 & uVar6;
            uVar13 = param_8 - 1;
            if (uVar12 <= param_8 - 1) {
              uVar13 = uVar12;
            }
            plVar29 = (long *)(param_9 + (ulong)uVar13 * 0x18);
            uVar30 = (plVar29[1] - *plVar29 >> 3) * 0x684bda13;
            local_78 = uVar14;
            if ((int)uVar30 != 0) {
              local_a8 = uVar10 >> (ulong)(local_13c & 0x1f);
              lVar27 = *local_b0;
              uVar13 = (local_a8 + local_c0 * uVar11) * local_b8;
              uVar26 = (ulong)(uVar13 >> 3) & 0xffff;
              lVar21 = *(long *)(lVar27 + (ulong)(uVar13 >> 0x13) * 8);
              if ((uint)uVar26 < 0xfffd) {
                uVar25 = *(uint *)(lVar21 + uVar26);
              }
              else {
                uVar25 = (uVar13 >> 3) + 1;
                uVar20 = (uVar13 >> 3) + 2;
                uVar25 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar27 + (ulong)(uVar20 >> 0x10) * 8) +
                                         ((ulong)uVar20 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar27 + (ulong)(uVar25 >> 0x10) * 8) +
                                                  ((ulong)uVar25 & 0xffff)),
                                                 *(undefined *)(lVar21 + uVar26)));
              }
              local_a0 = uVar25 >> (ulong)(uVar13 & 7) &
                         (-1 << (ulong)(local_b8 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_d0 = uVar10 >> (ulong)(local_140 & 0x1f);
              uStack_cc = uVar9 >> (ulong)(local_148 & 0x1f);
              uStack_a4 = uVar11;
              local_c8 = (**(code **)(*local_d8 + 0x58))();
              uVar30 = uVar30 & 0xffffffff;
              lVar21 = 0xcc;
              do {
                lVar27 = *plVar29;
                pIVar22 = *(IDensityPixelSource **)(lVar27 + lVar21 + -0x54);
                if (pIVar22 == (IDensityPixelSource *)0x0) {
LAB_0082a338:
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)
                             (lVar27 + lVar21 + -0xcc),(HelperSource *)&local_98);
                }
                else {
                  if (pIVar22 == param_1) {
                    lVar23 = lVar27 + lVar21;
                    if ((*(int *)(lVar23 + -0x4c) == 2) ||
                       ((*(int *)(lVar23 + -0x4c) == 0) != (*(uint *)(lVar23 + -0x48) != uVar12))) {
                      uVar13 = uVar14 >> (ulong)(*(uint *)(lVar23 + -0x44) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar23 + -0x40) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar13 < *(int *)(lVar23 + -0x3c)) goto LAB_0082a204;
LAB_0082a194:
                      cVar2 = *(char *)(lVar27 + lVar21 + -0x34);
                      goto joined_r0x0082a208;
                    }
                  }
                  else {
                    if (pIVar22 == param_3) {
                      iVar17 = *(int *)(lVar27 + lVar21 + -0x4c);
                      uVar13 = uVar7;
                      uVar25 = local_a0;
                    }
                    else {
                      iVar17 = *(int *)(lVar27 + lVar21 + -0x4c);
                      uVar13 = uVar8;
                      uVar25 = local_c8;
                    }
                    if ((iVar17 == 2) ||
                       ((iVar17 == 0) != (*(uint *)(lVar27 + lVar21 + -0x48) != (uVar25 & uVar13))))
                    {
                      lVar23 = lVar27 + lVar21;
                      uVar13 = uVar25 >> (ulong)(*(uint *)(lVar23 + -0x44) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar23 + -0x40) & 0x1f) ^ 0xffffffffU);
                      if (*(int *)(lVar23 + -0x3c) <= (int)uVar13) goto LAB_0082a194;
LAB_0082a204:
                      cVar2 = *(char *)(lVar27 + lVar21 + -0x34);
joined_r0x0082a208:
                      if ((cVar2 != '\0') &&
                         ((uVar25 = *(uint *)(lVar27 + lVar21 + -0x30), uVar25 == 0 ||
                          ((uVar25 & uVar13) != 0)))) {
                        pIVar22 = *(IDensityPixelSource **)(lVar27 + lVar21 + -0x24);
                        if (pIVar22 == (IDensityPixelSource *)0x0) goto LAB_0082a338;
                        if (pIVar22 == param_1) {
                          lVar23 = lVar27 + lVar21;
                          if ((*(int *)(lVar23 + -0x1c) == 2) ||
                             ((*(int *)(lVar23 + -0x1c) == 0) !=
                              (*(uint *)(lVar23 + -0x18) != uVar12))) {
                            uVar13 = uVar14 >> (ulong)(*(uint *)(lVar23 + -0x14) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar23 + -0x10) & 0x1f) ^ 0xffffffffU)
                            ;
                            if ((int)uVar13 < *(int *)(lVar23 + -0xc)) goto LAB_0082a318;
LAB_0082a2a8:
                            cVar2 = *(char *)(lVar27 + lVar21 + -4);
                            goto joined_r0x0082a31c;
                          }
                        }
                        else {
                          if (pIVar22 == param_3) {
                            iVar17 = *(int *)(lVar27 + lVar21 + -0x1c);
                            uVar13 = uVar7;
                            uVar25 = local_a0;
                          }
                          else {
                            iVar17 = *(int *)(lVar27 + lVar21 + -0x1c);
                            uVar13 = uVar8;
                            uVar25 = local_c8;
                          }
                          if ((iVar17 == 2) ||
                             ((iVar17 == 0) !=
                              (*(uint *)(lVar27 + lVar21 + -0x18) != (uVar25 & uVar13)))) {
                            lVar23 = lVar27 + lVar21;
                            uVar13 = uVar25 >> (ulong)(*(uint *)(lVar23 + -0x14) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar23 + -0x10) & 0x1f) ^ 0xffffffffU)
                            ;
                            if (*(int *)(lVar23 + -0xc) <= (int)uVar13) goto LAB_0082a2a8;
LAB_0082a318:
                            cVar2 = *(char *)(lVar27 + lVar21 + -4);
joined_r0x0082a31c:
                            if ((cVar2 != '\0') &&
                               ((*(uint *)(lVar27 + lVar21) == 0 ||
                                ((*(uint *)(lVar27 + lVar21) & uVar13) != 0)))) goto LAB_0082a338;
                          }
                        }
                      }
                    }
                  }
                  *(int *)(lVar27 + lVar21 + -200) = *(int *)(lVar27 + lVar21 + -200) + 1;
                }
                uVar13 = local_78;
                puVar4 = local_88;
                lVar21 = lVar21 + 0xd8;
                uVar30 = uVar30 - 1;
              } while (uVar30 != 0);
              if (uVar14 != local_78) {
                uVar12 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar14 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar27 = (ulong)uVar14 * 8;
                lVar21 = *(long *)(*(long *)(local_88 + 10) + lVar27);
                uVar32 = (**(code **)(lVar21 + 8))(lVar21,uVar12,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar4 + 10) + lVar27) = uVar32;
                if (1 < puVar4[0xd]) {
                  puVar28 = puVar4 + 0x11;
                  uVar30 = 1;
                  do {
                    lVar27 = (ulong)(uVar14 + (int)uVar30) * 8;
                    lVar21 = *(long *)(*(long *)(puVar4 + 10) + lVar27);
                    uVar32 = (**(code **)(lVar21 + 8))
                                       (lVar21,uVar12,0,*puVar28,
                                        uVar13 >> (ulong)(puVar28[-1] & 0x1f));
                    uVar30 = uVar30 + 1;
                    puVar28 = puVar28 + 2;
                    *(undefined8 *)(*(long *)(puVar4 + 10) + lVar27) = uVar32;
                  } while (uVar30 < puVar4[0xd]);
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
    uVar30 = 0;
    do {
      plVar29 = (long *)(param_9 + uVar30 * 0x18);
      lVar21 = *plVar29;
      lVar27 = plVar29[1];
      if (lVar27 != lVar21) {
        uVar26 = 0;
        do {
          if (*(char *)(lVar21 + uVar26 * 0xd8 + 0x6c) != '\0') {
            lVar21 = lVar21 + uVar26 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar21 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar21 + 0x24),*(uint *)(lVar21 + 0x28),*(uint *)(lVar21 + 0x70),
                       *(bool *)(lVar21 + 0x6d),true,true);
            lVar27 = plVar29[1];
            lVar21 = *plVar29;
          }
          uVar26 = (ulong)((int)uVar26 + 1);
          uVar24 = (lVar27 - lVar21 >> 3) * -0x7b425ed097b425ed;
        } while (uVar26 <= uVar24 && uVar24 - uVar26 != 0);
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != param_8);
  }
  bVar5 = true;
LAB_0082a96c:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


