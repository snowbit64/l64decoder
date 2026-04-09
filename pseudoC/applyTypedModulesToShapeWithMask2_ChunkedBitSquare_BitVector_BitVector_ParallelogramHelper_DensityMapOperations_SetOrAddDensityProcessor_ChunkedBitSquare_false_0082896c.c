// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 0082896c
// Size: 4220 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, BitVector * param_4, IDensityPixelSource * param_5, BitVector * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<ChunkedBitSquare, BitVector,
   BitVector, ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >(IDensityPixelSource*, ChunkedBitSquare*, IDensityPixelSource const*, BitVector*,
   IDensityPixelSource const*, BitVector*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               BitVector *param_4,IDensityPixelSource *param_5,BitVector *param_6,
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
  code **ppcVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  IDensityPixelSource *pIVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  ulong uVar29;
  long *plVar30;
  undefined2 uVar31;
  undefined8 uVar32;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_13c;
  uint local_138;
  uint local_e8;
  uint local_e4;
  uint local_e0;
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
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 008299ac to 008299b7 has its CatchHandler @ 008299e8 */
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
      goto LAB_00829968;
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
      uVar21 = (uint)bVar5;
      uVar22 = uVar21 << 4 | 8;
      uVar17 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar22 = uVar21 << 4;
        uVar17 = uVar12;
      }
      uVar12 = uVar22 | 4;
      uVar21 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar12 = uVar22;
        uVar21 = uVar17;
      }
      uVar22 = uVar12 | 2;
      uVar17 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar22 = uVar12;
        uVar17 = uVar21;
      }
      local_150 = (uVar17 + uVar22) - 1;
    }
    else {
      local_150 = 0;
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
      uVar17 = (uint)bVar5;
      uVar13 = uVar17 << 4 | 8;
      uVar22 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar17 << 4;
        uVar22 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar17 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar9 = uVar13;
        uVar17 = uVar22;
      }
      uVar13 = uVar9 | 2;
      uVar22 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar13 = uVar9;
        uVar22 = uVar17;
      }
      local_158 = (uVar22 + uVar13) - 1;
    }
    else {
      local_158 = 0;
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
      local_154 = (uVar14 + uVar13) - 1;
    }
    else {
      local_154 = 0;
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
            puVar4 = local_88;
            uVar14 = local_88[0xd];
            iVar18 = ((uVar10 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar13 >> 5);
            ppcVar19 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar18 * uVar14) * 8);
            uVar22 = uVar13 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar13;
            uStack_7c = uVar10;
            uVar17 = (**ppcVar19)(ppcVar19,uVar22,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar28 = puVar4 + 0x11;
              uVar29 = 1;
              do {
                ppcVar19 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar14 * iVar18 + (int)uVar29) * 8);
                iVar16 = (**ppcVar19)(ppcVar19,uVar22,0,*puVar28);
                puVar1 = puVar28 + -1;
                uVar29 = uVar29 + 1;
                puVar28 = puVar28 + 2;
                uVar17 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar17;
              } while (uVar29 < puVar4[0xd]);
            }
            uVar14 = uVar17 & uVar6;
            uVar22 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar22 = uVar14;
            }
            plVar30 = (long *)(param_9 + (ulong)uVar22 * 0x18);
            lVar20 = *plVar30;
            uVar29 = (plVar30[1] - lVar20 >> 3) * 0x684bda13;
            local_78 = uVar17;
            if ((int)uVar29 != 0) {
              lVar25 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar20 + lVar25);
                bVar5 = checkTypedModuleMasks2<BitVector,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                                  (this,param_1,uVar14,uVar14,(HelperSource *)&local_c0,param_3,
                                   uVar7,uVar13 << (ulong)(local_150 & 0x1f),
                                   uVar10 << (ulong)(local_158 & 0x1f),uVar15,uVar11,
                                   (HelperSource *)&local_e8,param_5,uVar8,
                                   uVar13 << (ulong)(local_154 & 0x1f),
                                   uVar10 << (ulong)(local_15c & 0x1f),uVar12,uVar9);
                if (bVar5) {
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar29 & 0xffffffff) * 0xd8 + -0xd8 == lVar25) break;
                lVar20 = *plVar30;
                lVar25 = lVar25 + 0xd8;
              }
            }
            uVar22 = local_78;
            puVar4 = local_88;
            if (uVar14 != local_78) {
              uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar17 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar25 = (ulong)uVar17 * 8;
              lVar20 = *(long *)(*(long *)(local_88 + 10) + lVar25);
              uVar32 = (**(code **)(lVar20 + 8))(lVar20,uVar14,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar4 + 10) + lVar25) = uVar32;
              if (1 < puVar4[0xd]) {
                puVar28 = puVar4 + 0x11;
                uVar29 = 1;
                do {
                  lVar25 = (ulong)(uVar17 + (int)uVar29) * 8;
                  lVar20 = *(long *)(*(long *)(puVar4 + 10) + lVar25);
                  uVar32 = (**(code **)(lVar20 + 8))
                                     (lVar20,uVar14,0,*puVar28,uVar22 >> (ulong)(puVar28[-1] & 0x1f)
                                     );
                  uVar29 = uVar29 + 1;
                  puVar28 = puVar28 + 2;
                  *(undefined8 *)(*(long *)(puVar4 + 10) + lVar25) = uVar32;
                } while (uVar29 < puVar4[0xd]);
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
      uVar17 = (uint)bVar5;
      uVar15 = uVar17 << 4 | 8;
      uVar22 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar15 = uVar17 << 4;
        uVar22 = uVar12;
      }
      uVar12 = uVar15 | 4;
      uVar17 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar12 = uVar15;
        uVar17 = uVar22;
      }
      uVar15 = uVar12 | 2;
      uVar22 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar15 = uVar12;
        uVar22 = uVar17;
      }
      local_138 = (uVar22 + uVar15) - 1;
    }
    else {
      local_138 = 0;
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
      local_14c = (uVar13 + uVar11) - 1;
    }
    else {
      local_14c = 0;
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
      local_13c = (uVar12 + uVar11) - 1;
    }
    else {
      local_13c = 0;
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
      local_150 = (uVar11 + uVar9) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar9 = *(uint *)(param_7 + 0x48);
    if (uVar9 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar9);
        uVar10 = *(uint *)(param_7 + 0x58);
        if (uVar10 < *(uint *)(param_7 + 0x5c)) {
          uVar11 = uVar9 >> (ulong)(local_14c & 0x1f);
          uVar12 = uVar9 >> (ulong)(local_150 & 0x1f);
LAB_00828ea8:
          puVar4 = local_88;
          uVar13 = local_88[0xd];
          iVar18 = ((uVar9 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar10 >> 5);
          ppcVar19 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar18 * uVar13) * 8);
          uVar14 = uVar10 & 0x1f | (uVar9 & 0x1f) << 5;
          local_80 = uVar10;
          uStack_7c = uVar9;
          uVar15 = (**ppcVar19)(ppcVar19,uVar14,0,local_88[0xf]);
          if (1 < puVar4[0xd]) {
            puVar28 = puVar4 + 0x11;
            uVar29 = 1;
            do {
              ppcVar19 = *(code ***)
                          (*(long *)(puVar4 + 10) + (ulong)(uVar13 * iVar18 + (int)uVar29) * 8);
              iVar16 = (**ppcVar19)(ppcVar19,uVar14,0,*puVar28);
              puVar1 = puVar28 + -1;
              uVar29 = uVar29 + 1;
              puVar28 = puVar28 + 2;
              uVar15 = iVar16 << (ulong)(*puVar1 & 0x1f) | uVar15;
            } while (uVar29 < puVar4[0xd]);
          }
          uVar13 = uVar15 & uVar6;
          uVar14 = param_8 - 1;
          if (uVar13 <= param_8 - 1) {
            uVar14 = uVar13;
          }
          plVar30 = (long *)(param_9 + (ulong)uVar14 * 0x18);
          lVar20 = *plVar30;
          uVar29 = (plVar30[1] - lVar20 >> 3) * 0x684bda13;
          local_78 = uVar15;
          if ((int)uVar29 != 0) {
            local_a8 = uVar10 >> (ulong)(local_138 & 0x1f);
            lVar27 = *local_b0;
            uVar14 = (local_a8 + local_c0 * uVar11) * local_b8;
            uVar26 = (ulong)(uVar14 >> 3) & 0xffff;
            lVar25 = *(long *)(lVar27 + (ulong)(uVar14 >> 0x13) * 8);
            if ((uint)uVar26 < 0xfffd) {
              uVar22 = *(uint *)(lVar25 + uVar26);
            }
            else {
              uVar22 = (uVar14 >> 3) + 1;
              uVar17 = (uVar14 >> 3) + 2;
              uVar22 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar27 + (ulong)(uVar17 >> 0x10) * 8) +
                                       ((ulong)uVar17 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar27 + (ulong)(uVar22 >> 0x10) * 8) +
                                                ((ulong)uVar22 & 0xffff)),
                                               *(undefined *)(lVar25 + uVar26)));
            }
            local_d0 = uVar10 >> (ulong)(local_13c & 0x1f);
            local_a0 = uVar22 >> (ulong)(uVar14 & 7) &
                       (-1 << (ulong)(local_b8 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uVar14 = (local_d0 + local_e8 * uVar12) * local_e0;
            lVar27 = *local_d8;
            uVar26 = (ulong)(uVar14 >> 3) & 0xffff;
            lVar25 = *(long *)(lVar27 + (ulong)(uVar14 >> 0x13) * 8);
            if ((uint)uVar26 < 0xfffd) {
              uVar22 = *(uint *)(lVar25 + uVar26);
            }
            else {
              uVar22 = (uVar14 >> 3) + 1;
              uVar17 = (uVar14 >> 3) + 2;
              uVar22 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar27 + (ulong)(uVar17 >> 0x10) * 8) +
                                       ((ulong)uVar17 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar27 + (ulong)(uVar22 >> 0x10) * 8) +
                                                ((ulong)uVar22 & 0xffff)),
                                               *(undefined *)(lVar25 + uVar26)));
            }
            uVar29 = uVar29 & 0xffffffff;
            lVar25 = 0xcc;
            local_c8 = uVar22 >> (ulong)(uVar14 & 7) &
                       (-1 << (ulong)(local_e0 & 0x1f) ^ 0xffffffffU) & 0xffff;
            uStack_cc = uVar12;
            uStack_a4 = uVar11;
            do {
              uVar29 = uVar29 - 1;
              pIVar23 = *(IDensityPixelSource **)(lVar20 + lVar25 + -0x54);
              if (pIVar23 == (IDensityPixelSource *)0x0) {
LAB_0082932c:
                DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                          ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)
                           (lVar20 + lVar25 + -0xcc),(HelperSource *)&local_98);
                puVar4 = local_88;
                uVar14 = local_78;
              }
              else {
                if (pIVar23 == param_1) {
                  lVar27 = lVar20 + lVar25;
                  if ((*(int *)(lVar27 + -0x4c) == 2) ||
                     ((*(int *)(lVar27 + -0x4c) == 0) != (*(uint *)(lVar27 + -0x48) != uVar13))) {
                    uVar14 = uVar15 >> (ulong)(*(uint *)(lVar27 + -0x44) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar27 + -0x40) & 0x1f) ^ 0xffffffffU);
                    if ((int)uVar14 < *(int *)(lVar27 + -0x3c)) goto LAB_008291f8;
LAB_00829188:
                    cVar2 = *(char *)(lVar20 + lVar25 + -0x34);
                    goto joined_r0x008291fc;
                  }
                }
                else {
                  if (pIVar23 == param_3) {
                    iVar18 = *(int *)(lVar20 + lVar25 + -0x4c);
                    uVar14 = uVar7;
                    uVar22 = local_a0;
                  }
                  else {
                    iVar18 = *(int *)(lVar20 + lVar25 + -0x4c);
                    uVar14 = uVar8;
                    uVar22 = local_c8;
                  }
                  if ((iVar18 == 2) ||
                     ((iVar18 == 0) != (*(uint *)(lVar20 + lVar25 + -0x48) != (uVar22 & uVar14)))) {
                    lVar27 = lVar20 + lVar25;
                    uVar14 = uVar22 >> (ulong)(*(uint *)(lVar27 + -0x44) & 0x1f) &
                             (-1 << (ulong)(*(uint *)(lVar27 + -0x40) & 0x1f) ^ 0xffffffffU);
                    if (*(int *)(lVar27 + -0x3c) <= (int)uVar14) goto LAB_00829188;
LAB_008291f8:
                    cVar2 = *(char *)(lVar20 + lVar25 + -0x34);
joined_r0x008291fc:
                    if ((cVar2 != '\0') &&
                       ((uVar22 = *(uint *)(lVar20 + lVar25 + -0x30), uVar22 == 0 ||
                        ((uVar22 & uVar14) != 0)))) {
                      pIVar23 = *(IDensityPixelSource **)(lVar20 + lVar25 + -0x24);
                      if (pIVar23 == (IDensityPixelSource *)0x0) goto LAB_0082932c;
                      if (pIVar23 == param_1) {
                        lVar27 = lVar20 + lVar25;
                        if ((*(int *)(lVar27 + -0x1c) == 2) ||
                           ((*(int *)(lVar27 + -0x1c) == 0) != (*(uint *)(lVar27 + -0x18) != uVar13)
                           )) {
                          uVar14 = uVar15 >> (ulong)(*(uint *)(lVar27 + -0x14) & 0x1f) &
                                   (-1 << (ulong)(*(uint *)(lVar27 + -0x10) & 0x1f) ^ 0xffffffffU);
                          if ((int)uVar14 < *(int *)(lVar27 + -0xc)) goto LAB_0082930c;
LAB_0082929c:
                          cVar2 = *(char *)(lVar20 + lVar25 + -4);
                          goto joined_r0x00829310;
                        }
                      }
                      else {
                        if (pIVar23 == param_3) {
                          iVar18 = *(int *)(lVar20 + lVar25 + -0x1c);
                          uVar14 = uVar7;
                          uVar22 = local_a0;
                        }
                        else {
                          iVar18 = *(int *)(lVar20 + lVar25 + -0x1c);
                          uVar14 = uVar8;
                          uVar22 = local_c8;
                        }
                        if ((iVar18 == 2) ||
                           ((iVar18 == 0) !=
                            (*(uint *)(lVar20 + lVar25 + -0x18) != (uVar22 & uVar14)))) {
                          lVar27 = lVar20 + lVar25;
                          uVar14 = uVar22 >> (ulong)(*(uint *)(lVar27 + -0x14) & 0x1f) &
                                   (-1 << (ulong)(*(uint *)(lVar27 + -0x10) & 0x1f) ^ 0xffffffffU);
                          if (*(int *)(lVar27 + -0xc) <= (int)uVar14) goto LAB_0082929c;
LAB_0082930c:
                          cVar2 = *(char *)(lVar20 + lVar25 + -4);
joined_r0x00829310:
                          if ((cVar2 != '\0') &&
                             ((*(uint *)(lVar20 + lVar25) == 0 ||
                              ((*(uint *)(lVar20 + lVar25) & uVar14) != 0)))) goto LAB_0082932c;
                        }
                      }
                    }
                  }
                }
                *(int *)(lVar20 + lVar25 + -200) = *(int *)(lVar20 + lVar25 + -200) + 1;
                puVar4 = local_88;
                uVar14 = local_78;
              }
              local_88 = puVar4;
              local_78 = uVar14;
              if (uVar29 == 0) goto LAB_0082933c;
              lVar20 = *plVar30;
              lVar25 = lVar25 + 0xd8;
            } while( true );
          }
          goto LAB_00828e94;
        }
LAB_00828e38:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_7 + 0x4c));
    }
  }
  if (param_8 != 0) {
    uVar29 = 0;
    do {
      plVar30 = (long *)(param_9 + uVar29 * 0x18);
      lVar20 = *plVar30;
      lVar25 = plVar30[1];
      if (lVar25 != lVar20) {
        uVar26 = 0;
        do {
          if (*(char *)(lVar20 + uVar26 * 0xd8 + 0x6c) != '\0') {
            lVar20 = lVar20 + uVar26 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar20 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar20 + 0x24),*(uint *)(lVar20 + 0x28),*(uint *)(lVar20 + 0x70),
                       *(bool *)(lVar20 + 0x6d),true,true);
            lVar25 = plVar30[1];
            lVar20 = *plVar30;
          }
          uVar26 = (ulong)((int)uVar26 + 1);
          uVar24 = (lVar25 - lVar20 >> 3) * -0x7b425ed097b425ed;
        } while (uVar26 <= uVar24 && uVar24 - uVar26 != 0);
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != param_8);
  }
  bVar5 = true;
LAB_00829968:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
LAB_0082933c:
  if (uVar15 != uVar14) {
    uVar13 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
    uVar15 = (((uStack_7c >> 5) << (ulong)(*puVar4 & 0x1f)) + (local_80 >> 5)) * puVar4[0xd];
    lVar25 = (ulong)uVar15 * 8;
    lVar20 = *(long *)(*(long *)(puVar4 + 10) + lVar25);
    uVar32 = (**(code **)(lVar20 + 8))(lVar20,uVar13,0,puVar4[0xf],uVar14);
    *(undefined8 *)(*(long *)(puVar4 + 10) + lVar25) = uVar32;
    if (1 < puVar4[0xd]) {
      puVar28 = puVar4 + 0x11;
      uVar29 = 1;
      do {
        lVar25 = (ulong)(uVar15 + (int)uVar29) * 8;
        lVar20 = *(long *)(*(long *)(puVar4 + 10) + lVar25);
        uVar32 = (**(code **)(lVar20 + 8))
                           (lVar20,uVar13,0,*puVar28,uVar14 >> (ulong)(puVar28[-1] & 0x1f));
        uVar29 = uVar29 + 1;
        puVar28 = puVar28 + 2;
        *(undefined8 *)(*(long *)(puVar4 + 10) + lVar25) = uVar32;
      } while (uVar29 < puVar4[0xd]);
    }
  }
LAB_00828e94:
  uVar10 = uVar10 + 1;
  if (*(uint *)(param_7 + 0x5c) <= uVar10) goto LAB_00828e38;
  goto LAB_00828ea8;
}


