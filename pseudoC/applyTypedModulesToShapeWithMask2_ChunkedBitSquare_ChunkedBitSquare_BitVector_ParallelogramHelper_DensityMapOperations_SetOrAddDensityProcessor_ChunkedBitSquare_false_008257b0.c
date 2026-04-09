// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 008257b0
// Size: 4260 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, ChunkedBitSquare * param_4, IDensityPixelSource * param_5, BitVector * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<ChunkedBitSquare, ChunkedBitSquare,
   BitVector, ParallelogramHelper, DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >(IDensityPixelSource*, ChunkedBitSquare*, IDensityPixelSource const*, ChunkedBitSquare*,
   IDensityPixelSource const*, BitVector*, ParallelogramHelper&, unsigned int,
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               ChunkedBitSquare *param_4,IDensityPixelSource *param_5,BitVector *param_6,
               ParallelogramHelper *param_7,uint param_8,TypedModules *param_9)

{
  uint *puVar1;
  uint uVar2;
  TypedModuleWithMasks *this;
  char cVar3;
  long lVar4;
  uint *puVar5;
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
  int iVar19;
  uint uVar20;
  code **ppcVar21;
  uint uVar22;
  IDensityPixelSource *pIVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  undefined2 uVar32;
  undefined8 uVar33;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  long *local_d8;
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
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
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
  local_88 = (uint *)param_2;
  uVar12 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  local_c0 = uVar12;
  uVar13 = (**(code **)(*(long *)param_3 + 0x20))(param_3);
  local_bc = uVar13;
  local_b8 = (**(code **)(*(long *)param_3 + 0x30))(param_3);
  local_b0 = (uint *)param_4;
  uVar14 = (**(code **)(*(long *)param_5 + 0x18))(param_5);
  local_e8 = uVar14;
  uVar15 = (**(code **)(*(long *)param_5 + 0x20))(param_5);
  local_e4 = uVar15;
  local_e0 = (**(code **)(*(long *)param_5 + 0x30))(param_5);
  local_d8 = (long *)param_6;
  if ((((uVar10 < uVar12) || (uVar11 < uVar13)) || (uVar10 < uVar14)) || (uVar11 < uVar15)) {
    if (((uVar12 < uVar10) || (uVar13 < uVar11)) || ((uVar14 < uVar10 || (uVar15 < uVar11)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0
         )) {
                    /* try { // try from 00826818 to 00826823 has its CatchHandler @ 00826854 */
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
      goto LAB_008267d4;
    }
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar16 = uVar12 / uVar10;
    }
    uVar12 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar13 / uVar11;
    }
    uVar33 = NEON_cnt((ulong)uVar16,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar6 = (uVar16 & 0xffff0000) != 0;
      uVar13 = uVar16 >> 0x10;
      if (!bVar6) {
        uVar13 = uVar16;
      }
      uVar18 = (uint)bVar6;
      uVar22 = uVar18 << 4 | 8;
      uVar20 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar22 = uVar18 << 4;
        uVar20 = uVar13;
      }
      uVar13 = uVar22 | 4;
      uVar18 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar13 = uVar22;
        uVar18 = uVar20;
      }
      uVar22 = uVar13 | 2;
      uVar20 = uVar18 >> 2;
      if (uVar18 < 4) {
        uVar22 = uVar13;
        uVar20 = uVar18;
      }
      local_14c = (uVar20 + uVar22) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar14 / uVar10;
    }
    uVar33 = NEON_cnt((ulong)uVar12,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar6 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar12;
      }
      uVar20 = (uint)bVar6;
      uVar14 = uVar20 << 4 | 8;
      uVar22 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar14 = uVar20 << 4;
        uVar22 = uVar10;
      }
      uVar10 = uVar14 | 4;
      uVar20 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar10 = uVar14;
        uVar20 = uVar22;
      }
      uVar14 = uVar10 | 2;
      uVar22 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar14 = uVar10;
        uVar22 = uVar20;
      }
      local_154 = (uVar22 + uVar14) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar15 / uVar11;
    }
    uVar33 = NEON_cnt((ulong)uVar13,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar6 = (uVar13 & 0xffff0000) != 0;
      uVar11 = uVar13 >> 0x10;
      if (!bVar6) {
        uVar11 = uVar13;
      }
      uVar22 = (uint)bVar6;
      uVar14 = uVar22 << 4 | 8;
      uVar15 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar14 = uVar22 << 4;
        uVar15 = uVar11;
      }
      uVar11 = uVar14 | 4;
      uVar22 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar11 = uVar14;
        uVar22 = uVar15;
      }
      uVar14 = uVar11 | 2;
      uVar15 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar14 = uVar11;
        uVar15 = uVar22;
      }
      local_150 = (uVar15 + uVar14) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar10,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar6 = (uVar10 & 0xffff0000) != 0;
      uVar11 = uVar10 >> 0x10;
      if (!bVar6) {
        uVar11 = uVar10;
      }
      uVar22 = (uint)bVar6;
      uVar14 = uVar22 << 4 | 8;
      uVar15 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar14 = uVar22 << 4;
        uVar15 = uVar11;
      }
      uVar11 = uVar14 | 4;
      uVar22 = uVar15 >> 4;
      if (uVar15 < 0x10) {
        uVar11 = uVar14;
        uVar22 = uVar15;
      }
      uVar14 = uVar11 | 2;
      uVar15 = uVar22 >> 2;
      if (uVar22 < 4) {
        uVar14 = uVar11;
        uVar15 = uVar22;
      }
      local_158 = (uVar15 + uVar14) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar11 = *(uint *)(param_7 + 0x48);
    if (uVar11 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar11);
        uVar14 = *(uint *)(param_7 + 0x58);
        if (uVar14 < *(uint *)(param_7 + 0x5c)) {
          do {
            puVar5 = local_88;
            uVar15 = local_88[0xd];
            iVar19 = ((uVar11 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar14 >> 5);
            ppcVar21 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar19 * uVar15) * 8);
            uVar22 = uVar14 & 0x1f | (uVar11 & 0x1f) << 5;
            local_80 = uVar14;
            uStack_7c = uVar11;
            uVar20 = (**ppcVar21)(ppcVar21,uVar22,0,local_88[0xf]);
            if (1 < puVar5[0xd]) {
              puVar28 = puVar5 + 0x11;
              uVar29 = 1;
              do {
                ppcVar21 = *(code ***)
                            (*(long *)(puVar5 + 10) + (ulong)(uVar15 * iVar19 + (int)uVar29) * 8);
                iVar17 = (**ppcVar21)(ppcVar21,uVar22,0,*puVar28);
                puVar1 = puVar28 + -1;
                uVar29 = uVar29 + 1;
                puVar28 = puVar28 + 2;
                uVar20 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar20;
              } while (uVar29 < puVar5[0xd]);
            }
            uVar15 = uVar20 & uVar7;
            uVar22 = param_8 - 1;
            if (uVar15 <= param_8 - 1) {
              uVar22 = uVar15;
            }
            plVar30 = (long *)(param_9 + (ulong)uVar22 * 0x18);
            lVar25 = *plVar30;
            uVar29 = (plVar30[1] - lVar25 >> 3) * 0x684bda13;
            local_78 = uVar20;
            if ((int)uVar29 != 0) {
              lVar27 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar25 + lVar27);
                bVar6 = checkTypedModuleMasks2<ChunkedBitSquare,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
                                  (this,param_1,uVar15,uVar15,(HelperSource *)&local_c0,param_3,
                                   uVar8,uVar14 << (ulong)(local_14c & 0x1f),
                                   uVar11 << (ulong)(local_154 & 0x1f),uVar16,uVar12,
                                   (HelperSource *)&local_e8,param_5,uVar9,
                                   uVar14 << (ulong)(local_150 & 0x1f),
                                   uVar11 << (ulong)(local_158 & 0x1f),uVar13,uVar10);
                if (bVar6) {
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)this,
                             (HelperSource *)&local_98);
                }
                else {
                  *(int *)(this + 4) = *(int *)(this + 4) + 1;
                }
                if ((uVar29 & 0xffffffff) * 0xd8 + -0xd8 == lVar27) break;
                lVar25 = *plVar30;
                lVar27 = lVar27 + 0xd8;
              }
            }
            uVar22 = local_78;
            puVar5 = local_88;
            if (uVar15 != local_78) {
              uVar15 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar20 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar27 = (ulong)uVar20 * 8;
              lVar25 = *(long *)(*(long *)(local_88 + 10) + lVar27);
              uVar33 = (**(code **)(lVar25 + 8))(lVar25,uVar15,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar5 + 10) + lVar27) = uVar33;
              if (1 < puVar5[0xd]) {
                puVar28 = puVar5 + 0x11;
                uVar29 = 1;
                do {
                  lVar27 = (ulong)(uVar20 + (int)uVar29) * 8;
                  lVar25 = *(long *)(*(long *)(puVar5 + 10) + lVar27);
                  uVar33 = (**(code **)(lVar25 + 8))
                                     (lVar25,uVar15,0,*puVar28,uVar22 >> (ulong)(puVar28[-1] & 0x1f)
                                     );
                  uVar29 = uVar29 + 1;
                  puVar28 = puVar28 + 2;
                  *(undefined8 *)(*(long *)(puVar5 + 10) + lVar27) = uVar33;
                } while (uVar29 < puVar5[0xd]);
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(param_7 + 0x5c));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_7 + 0x4c));
    }
  }
  else {
    uVar16 = 0;
    if (uVar12 != 0) {
      uVar16 = uVar10 / uVar12;
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar11 / uVar13;
    }
    uVar33 = NEON_cnt((ulong)uVar16,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar6 = (uVar16 & 0xffff0000) != 0;
      uVar13 = uVar16 >> 0x10;
      if (!bVar6) {
        uVar13 = uVar16;
      }
      uVar20 = (uint)bVar6;
      uVar16 = uVar20 << 4 | 8;
      uVar22 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar20 << 4;
        uVar22 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar20 = uVar22 >> 4;
      if (uVar22 < 0x10) {
        uVar13 = uVar16;
        uVar20 = uVar22;
      }
      uVar16 = uVar13 | 2;
      uVar22 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar16 = uVar13;
        uVar22 = uVar20;
      }
      local_14c = (uVar22 + uVar16) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar10 / uVar14;
    }
    uVar33 = NEON_cnt((ulong)uVar12,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
      bVar6 = (uVar12 & 0xffff0000) != 0;
      uVar10 = uVar12 >> 0x10;
      if (!bVar6) {
        uVar10 = uVar12;
      }
      uVar16 = (uint)bVar6;
      uVar12 = uVar16 << 4 | 8;
      uVar14 = uVar10 >> 8;
      if (uVar10 < 0x100) {
        uVar12 = uVar16 << 4;
        uVar14 = uVar10;
      }
      uVar10 = uVar12 | 4;
      uVar16 = uVar14 >> 4;
      if (uVar14 < 0x10) {
        uVar10 = uVar12;
        uVar16 = uVar14;
      }
      uVar12 = uVar10 | 2;
      uVar14 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar12 = uVar10;
        uVar14 = uVar16;
      }
      local_154 = (uVar14 + uVar12) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar10 = 0;
    if (uVar15 != 0) {
      uVar10 = uVar11 / uVar15;
    }
    uVar33 = NEON_cnt((ulong)uVar13,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
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
      local_150 = (uVar13 + uVar12) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar33 = NEON_cnt((ulong)uVar10,1);
    uVar32 = NEON_uaddlv(uVar33,1);
    if ((int)CONCAT62((int6)((ulong)uVar33 >> 0x10),uVar32) == 1) {
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
      local_158 = (uVar12 + uVar10) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar10 = *(uint *)(param_7 + 0x48);
    if (uVar10 < *(uint *)(param_7 + 0x4c)) {
      do {
        ParallelogramHelper::startXIteration(param_7,uVar10);
        uVar11 = *(uint *)(param_7 + 0x58);
        if (uVar11 < *(uint *)(param_7 + 0x5c)) {
          uVar12 = uVar10 >> (ulong)(local_154 & 0x1f);
          uVar13 = uVar10 >> (ulong)(local_158 & 0x1f);
          do {
            puVar5 = local_88;
            uVar14 = local_88[0xd];
            iVar19 = ((uVar10 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar11 >> 5);
            ppcVar21 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar19 * uVar14) * 8);
            uVar15 = uVar11 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar11;
            uStack_7c = uVar10;
            uVar16 = (**ppcVar21)(ppcVar21,uVar15,0,local_88[0xf]);
            if (1 < puVar5[0xd]) {
              puVar28 = puVar5 + 0x11;
              uVar29 = 1;
              do {
                ppcVar21 = *(code ***)
                            (*(long *)(puVar5 + 10) + (ulong)(uVar14 * iVar19 + (int)uVar29) * 8);
                iVar17 = (**ppcVar21)(ppcVar21,uVar15,0,*puVar28);
                puVar1 = puVar28 + -1;
                uVar29 = uVar29 + 1;
                puVar28 = puVar28 + 2;
                uVar16 = iVar17 << (ulong)(*puVar1 & 0x1f) | uVar16;
              } while (uVar29 < puVar5[0xd]);
            }
            puVar5 = local_b0;
            uVar14 = uVar16 & uVar7;
            uVar15 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar15 = uVar14;
            }
            plVar30 = (long *)(param_9 + (ulong)uVar15 * 0x18);
            uVar15 = (int)((ulong)(plVar30[1] - *plVar30) >> 3) * 0x684bda13;
            local_78 = uVar16;
            if (uVar15 != 0) {
              local_a8 = uVar11 >> (ulong)(local_14c & 0x1f);
              uVar22 = (((uVar12 >> 5) << (ulong)(*local_b0 & 0x1f)) + (local_a8 >> 5)) *
                       local_b0[0xd];
              ppcVar21 = *(code ***)(*(long *)(local_b0 + 10) + (ulong)uVar22 * 8);
              uVar20 = local_a8 & 0x1f | (uVar12 & 0x1f) << 5;
              uStack_a4 = uVar12;
              uVar18 = (**ppcVar21)(ppcVar21,uVar20,0,local_b0[0xf]);
              if (1 < puVar5[0xd]) {
                puVar28 = puVar5 + 0x11;
                uVar29 = 1;
                do {
                  ppcVar21 = *(code ***)(*(long *)(puVar5 + 10) + (ulong)(uVar22 + (int)uVar29) * 8)
                  ;
                  iVar19 = (**ppcVar21)(ppcVar21,uVar20,0,*puVar28);
                  puVar1 = puVar28 + -1;
                  uVar29 = uVar29 + 1;
                  puVar28 = puVar28 + 2;
                  uVar18 = iVar19 << (ulong)(*puVar1 & 0x1f) | uVar18;
                } while (uVar29 < puVar5[0xd]);
              }
              local_d0 = uVar11 >> (ulong)(local_150 & 0x1f);
              lVar27 = *local_d8;
              uVar22 = (local_d0 + local_e8 * uVar13) * local_e0;
              uVar29 = (ulong)(uVar22 >> 3) & 0xffff;
              lVar25 = *(long *)(lVar27 + (ulong)(uVar22 >> 0x13) * 8);
              if ((uint)uVar29 < 0xfffd) {
                uVar20 = *(uint *)(lVar25 + uVar29);
              }
              else {
                uVar20 = (uVar22 >> 3) + 1;
                uVar2 = (uVar22 >> 3) + 2;
                uVar20 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar27 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar27 + (ulong)(uVar20 >> 0x10) * 8) +
                                                  ((ulong)uVar20 & 0xffff)),
                                                 *(undefined *)(lVar25 + uVar29)));
              }
              lVar25 = 0;
              if (uVar15 < 2) {
                uVar15 = 1;
              }
              local_c8 = uVar20 >> (ulong)(uVar22 & 7) &
                         (-1 << (ulong)(local_e0 & 0x1f) ^ 0xffffffffU) & 0xffff;
              uStack_cc = uVar13;
              local_a0 = uVar18;
              do {
                lVar27 = *plVar30;
                pIVar23 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar27 + lVar25) +
                           0x78);
                if (pIVar23 == (IDensityPixelSource *)0x0) {
LAB_008261a0:
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar27 + lVar25),
                             (HelperSource *)&local_98);
                }
                else {
                  if (pIVar23 == param_1) {
                    lVar24 = lVar27 + lVar25;
                    if ((*(int *)(lVar24 + 0x80) == 2) ||
                       ((*(int *)(lVar24 + 0x80) == 0) != (*(uint *)(lVar24 + 0x84) != uVar14))) {
                      uVar22 = uVar16 >> (ulong)(*(uint *)(lVar24 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar24 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar22 < *(int *)(lVar24 + 0x90)) goto LAB_00826068;
LAB_00825ff8:
                      cVar3 = *(char *)(lVar27 + lVar25 + 0x98);
                      goto joined_r0x0082606c;
                    }
                  }
                  else {
                    if (pIVar23 == param_3) {
                      iVar19 = *(int *)(lVar27 + lVar25 + 0x80);
                      uVar22 = uVar8;
                      uVar20 = local_a0;
                    }
                    else {
                      iVar19 = *(int *)(lVar27 + lVar25 + 0x80);
                      uVar22 = uVar9;
                      uVar20 = local_c8;
                    }
                    if ((iVar19 == 2) ||
                       ((iVar19 == 0) != (*(uint *)(lVar27 + lVar25 + 0x84) != (uVar20 & uVar22))))
                    {
                      lVar24 = lVar27 + lVar25;
                      uVar22 = uVar20 >> (ulong)(*(uint *)(lVar24 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar24 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if (*(int *)(lVar24 + 0x90) <= (int)uVar22) goto LAB_00825ff8;
LAB_00826068:
                      cVar3 = *(char *)(lVar27 + lVar25 + 0x98);
joined_r0x0082606c:
                      if ((cVar3 != '\0') &&
                         ((uVar20 = *(uint *)(lVar27 + lVar25 + 0x9c), uVar20 == 0 ||
                          ((uVar20 & uVar22) != 0)))) {
                        pIVar23 = *(IDensityPixelSource **)(lVar27 + lVar25 + 0xa8);
                        if (pIVar23 == (IDensityPixelSource *)0x0) goto LAB_008261a0;
                        if (pIVar23 == param_1) {
                          lVar24 = lVar27 + lVar25;
                          if ((*(int *)(lVar24 + 0xb0) == 2) ||
                             ((*(int *)(lVar24 + 0xb0) == 0) != (*(uint *)(lVar24 + 0xb4) != uVar14)
                             )) {
                            uVar22 = uVar16 >> (ulong)(*(uint *)(lVar24 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar24 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if ((int)uVar22 < *(int *)(lVar24 + 0xc0)) goto LAB_0082617c;
LAB_0082610c:
                            cVar3 = *(char *)(lVar27 + lVar25 + 200);
                            goto joined_r0x00826180;
                          }
                        }
                        else {
                          if (pIVar23 == param_3) {
                            iVar19 = *(int *)(lVar27 + lVar25 + 0xb0);
                            uVar22 = uVar8;
                            uVar20 = local_a0;
                          }
                          else {
                            iVar19 = *(int *)(lVar27 + lVar25 + 0xb0);
                            uVar22 = uVar9;
                            uVar20 = local_c8;
                          }
                          if ((iVar19 == 2) ||
                             ((iVar19 == 0) !=
                              (*(uint *)(lVar27 + lVar25 + 0xb4) != (uVar20 & uVar22)))) {
                            lVar24 = lVar27 + lVar25;
                            uVar22 = uVar20 >> (ulong)(*(uint *)(lVar24 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar24 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if (*(int *)(lVar24 + 0xc0) <= (int)uVar22) goto LAB_0082610c;
LAB_0082617c:
                            cVar3 = *(char *)(lVar27 + lVar25 + 200);
joined_r0x00826180:
                            if ((cVar3 != '\0') &&
                               ((uVar20 = *(uint *)(lVar27 + lVar25 + 0xcc), uVar20 == 0 ||
                                ((uVar20 & uVar22) != 0)))) goto LAB_008261a0;
                          }
                        }
                      }
                    }
                  }
                  *(int *)(lVar27 + lVar25 + 4) = *(int *)(lVar27 + lVar25 + 4) + 1;
                }
                uVar22 = local_78;
                puVar5 = local_88;
                lVar25 = lVar25 + 0xd8;
              } while ((ulong)uVar15 * 0xd8 - lVar25 != 0);
              if (uVar16 != local_78) {
                uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar15 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar27 = (ulong)uVar15 * 8;
                lVar25 = *(long *)(*(long *)(local_88 + 10) + lVar27);
                uVar33 = (**(code **)(lVar25 + 8))(lVar25,uVar14,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar5 + 10) + lVar27) = uVar33;
                if (1 < puVar5[0xd]) {
                  puVar28 = puVar5 + 0x11;
                  uVar29 = 1;
                  do {
                    lVar27 = (ulong)(uVar15 + (int)uVar29) * 8;
                    lVar25 = *(long *)(*(long *)(puVar5 + 10) + lVar27);
                    uVar33 = (**(code **)(lVar25 + 8))
                                       (lVar25,uVar14,0,*puVar28,
                                        uVar22 >> (ulong)(puVar28[-1] & 0x1f));
                    uVar29 = uVar29 + 1;
                    puVar28 = puVar28 + 2;
                    *(undefined8 *)(*(long *)(puVar5 + 10) + lVar27) = uVar33;
                  } while (uVar29 < puVar5[0xd]);
                }
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
    uVar29 = 0;
    do {
      plVar30 = (long *)(param_9 + uVar29 * 0x18);
      lVar25 = *plVar30;
      lVar27 = plVar30[1];
      if (lVar27 != lVar25) {
        uVar31 = 0;
        do {
          if (*(char *)(lVar25 + uVar31 * 0xd8 + 0x6c) != '\0') {
            lVar25 = lVar25 + uVar31 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar25 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar25 + 0x24),*(uint *)(lVar25 + 0x28),*(uint *)(lVar25 + 0x70),
                       *(bool *)(lVar25 + 0x6d),true,true);
            lVar27 = plVar30[1];
            lVar25 = *plVar30;
          }
          uVar31 = (ulong)((int)uVar31 + 1);
          uVar26 = (lVar27 - lVar25 >> 3) * -0x7b425ed097b425ed;
        } while (uVar31 <= uVar26 && uVar26 - uVar31 != 0);
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != param_8);
  }
  bVar6 = true;
LAB_008267d4:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


