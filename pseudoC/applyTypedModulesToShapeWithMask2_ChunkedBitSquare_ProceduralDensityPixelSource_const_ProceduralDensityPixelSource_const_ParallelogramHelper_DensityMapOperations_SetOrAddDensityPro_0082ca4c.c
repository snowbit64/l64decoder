// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 0082ca4c
// Size: 3972 bytes
// Signature: bool __cdecl applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, IDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, IDensityPixelSource * param_5, ProceduralDensityPixelSource * param_6, ParallelogramHelper * param_7, uint param_8, TypedModules * param_9)


/* bool DensityMapModifier::applyTypedModulesToShapeWithMask2<ChunkedBitSquare,
   ProceduralDensityPixelSource const, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false> >(IDensityPixelSource*,
   ChunkedBitSquare*, IDensityPixelSource const*, ProceduralDensityPixelSource const*,
   IDensityPixelSource const*, ProceduralDensityPixelSource const*, ParallelogramHelper&, unsigned
   int, 
   DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> >*) */

bool DensityMapModifier::
     applyTypedModulesToShapeWithMask2<ChunkedBitSquare,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,IDensityPixelSource *param_3,
               ProceduralDensityPixelSource *param_4,IDensityPixelSource *param_5,
               ProceduralDensityPixelSource *param_6,ParallelogramHelper *param_7,uint param_8,
               TypedModules *param_9)

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
  long lVar19;
  uint uVar20;
  uint uVar21;
  IDensityPixelSource *pIVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint *puVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
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
  undefined4 local_b8;
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
                    /* try { // try from 0082d994 to 0082d99f has its CatchHandler @ 0082d9d0 */
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
      goto LAB_0082d950;
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
      uVar20 = (uint)bVar5;
      uVar21 = uVar20 << 4 | 8;
      uVar16 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar21 = uVar20 << 4;
        uVar16 = uVar12;
      }
      uVar12 = uVar21 | 4;
      uVar20 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar12 = uVar21;
        uVar20 = uVar16;
      }
      uVar21 = uVar12 | 2;
      uVar16 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar21 = uVar12;
        uVar16 = uVar20;
      }
      local_14c = (uVar16 + uVar21) - 1;
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
      uVar21 = uVar9 >> 8;
      if (uVar9 < 0x100) {
        uVar13 = uVar16 << 4;
        uVar21 = uVar9;
      }
      uVar9 = uVar13 | 4;
      uVar16 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar9 = uVar13;
        uVar16 = uVar21;
      }
      uVar13 = uVar9 | 2;
      uVar21 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar13 = uVar9;
        uVar21 = uVar16;
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
            iVar17 = ((uVar10 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar13 >> 5);
            ppcVar18 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar17 * uVar14) * 8);
            uVar21 = uVar13 & 0x1f | (uVar10 & 0x1f) << 5;
            local_80 = uVar13;
            uStack_7c = uVar10;
            uVar16 = (**ppcVar18)(ppcVar18,uVar21,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar26 = puVar4 + 0x11;
              uVar28 = 1;
              do {
                ppcVar18 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar14 * iVar17 + (int)uVar28) * 8);
                iVar15 = (**ppcVar18)(ppcVar18,uVar21,0,*puVar26);
                puVar1 = puVar26 + -1;
                uVar28 = uVar28 + 1;
                puVar26 = puVar26 + 2;
                uVar16 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar16;
              } while (uVar28 < puVar4[0xd]);
            }
            uVar14 = uVar16 & uVar6;
            uVar21 = param_8 - 1;
            if (uVar14 <= param_8 - 1) {
              uVar21 = uVar14;
            }
            plVar27 = (long *)(param_9 + (ulong)uVar21 * 0x18);
            lVar30 = *plVar27;
            uVar28 = (plVar27[1] - lVar30 >> 3) * 0x684bda13;
            local_78 = uVar16;
            if ((int)uVar28 != 0) {
              lVar19 = 0;
              while( true ) {
                this = (TypedModuleWithMasks *)(lVar30 + lVar19);
                bVar5 = checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
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
                if ((uVar28 & 0xffffffff) * 0xd8 + -0xd8 == lVar19) break;
                lVar30 = *plVar27;
                lVar19 = lVar19 + 0xd8;
              }
            }
            uVar21 = local_78;
            puVar4 = local_88;
            if (uVar14 != local_78) {
              uVar14 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
              uVar16 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                       local_88[0xd];
              lVar19 = (ulong)uVar16 * 8;
              lVar30 = *(long *)(*(long *)(local_88 + 10) + lVar19);
              uVar32 = (**(code **)(lVar30 + 8))(lVar30,uVar14,0,local_88[0xf],local_78);
              *(undefined8 *)(*(long *)(puVar4 + 10) + lVar19) = uVar32;
              if (1 < puVar4[0xd]) {
                puVar26 = puVar4 + 0x11;
                uVar28 = 1;
                do {
                  lVar19 = (ulong)(uVar16 + (int)uVar28) * 8;
                  lVar30 = *(long *)(*(long *)(puVar4 + 10) + lVar19);
                  uVar32 = (**(code **)(lVar30 + 8))
                                     (lVar30,uVar14,0,*puVar26,uVar21 >> (ulong)(puVar26[-1] & 0x1f)
                                     );
                  uVar28 = uVar28 + 1;
                  puVar26 = puVar26 + 2;
                  *(undefined8 *)(*(long *)(puVar4 + 10) + lVar19) = uVar32;
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
      uVar21 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar25 = uVar16 << 4;
        uVar21 = uVar12;
      }
      uVar12 = uVar25 | 4;
      uVar16 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar12 = uVar25;
        uVar16 = uVar21;
      }
      uVar25 = uVar12 | 2;
      uVar21 = uVar16 >> 2;
      if (uVar16 < 4) {
        uVar25 = uVar12;
        uVar21 = uVar16;
      }
      local_13c = (uVar21 + uVar25) - 1;
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
          do {
            puVar4 = local_88;
            uVar11 = local_88[0xd];
            iVar17 = ((uVar9 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar10 >> 5);
            ppcVar18 = *(code ***)(*(long *)(local_88 + 10) + (ulong)(iVar17 * uVar11) * 8);
            uVar12 = uVar10 & 0x1f | (uVar9 & 0x1f) << 5;
            local_80 = uVar10;
            uStack_7c = uVar9;
            uVar13 = (**ppcVar18)(ppcVar18,uVar12,0,local_88[0xf]);
            if (1 < puVar4[0xd]) {
              puVar26 = puVar4 + 0x11;
              uVar28 = 1;
              do {
                ppcVar18 = *(code ***)
                            (*(long *)(puVar4 + 10) + (ulong)(uVar11 * iVar17 + (int)uVar28) * 8);
                iVar15 = (**ppcVar18)(ppcVar18,uVar12,0,*puVar26);
                puVar1 = puVar26 + -1;
                uVar28 = uVar28 + 1;
                puVar26 = puVar26 + 2;
                uVar13 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar13;
              } while (uVar28 < puVar4[0xd]);
            }
            uVar11 = uVar13 & uVar6;
            uVar12 = param_8 - 1;
            if (uVar11 <= param_8 - 1) {
              uVar12 = uVar11;
            }
            plVar27 = (long *)(param_9 + (ulong)uVar12 * 0x18);
            uVar28 = (plVar27[1] - *plVar27 >> 3) * 0x684bda13;
            local_78 = uVar13;
            if ((int)uVar28 != 0) {
              local_a8 = uVar10 >> (ulong)(local_13c & 0x1f);
              uStack_a4 = uVar9 >> (ulong)(local_144 & 0x1f);
              local_a0 = (**(code **)(*local_b0 + 0x58))();
              local_d0 = uVar10 >> (ulong)(local_140 & 0x1f);
              uStack_cc = uVar9 >> (ulong)(local_148 & 0x1f);
              local_c8 = (**(code **)(*local_d8 + 0x58))(local_d8);
              lVar30 = 0;
              do {
                lVar19 = *plVar27;
                pIVar22 = *(IDensityPixelSource **)
                           ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar19 + lVar30) +
                           0x78);
                if (pIVar22 == (IDensityPixelSource *)0x0) {
LAB_0082d320:
                  DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>::process
                            ((SetOrAddDensityProcessor<ChunkedBitSquare,false> *)(lVar19 + lVar30),
                             (HelperSource *)&local_98);
                }
                else {
                  if (pIVar22 == param_1) {
                    lVar23 = lVar19 + lVar30;
                    if ((*(int *)(lVar23 + 0x80) == 2) ||
                       ((*(int *)(lVar23 + 0x80) == 0) != (*(uint *)(lVar23 + 0x84) != uVar11))) {
                      uVar12 = uVar13 >> (ulong)(*(uint *)(lVar23 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar23 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if ((int)uVar12 < *(int *)(lVar23 + 0x90)) goto LAB_0082d1e8;
LAB_0082d178:
                      cVar2 = *(char *)(lVar19 + lVar30 + 0x98);
                      goto joined_r0x0082d1ec;
                    }
                  }
                  else {
                    if (pIVar22 == param_3) {
                      iVar17 = *(int *)(lVar19 + lVar30 + 0x80);
                      uVar12 = uVar7;
                      uVar14 = local_a0;
                    }
                    else {
                      iVar17 = *(int *)(lVar19 + lVar30 + 0x80);
                      uVar12 = uVar8;
                      uVar14 = local_c8;
                    }
                    if ((iVar17 == 2) ||
                       ((iVar17 == 0) != (*(uint *)(lVar19 + lVar30 + 0x84) != (uVar14 & uVar12))))
                    {
                      lVar23 = lVar19 + lVar30;
                      uVar12 = uVar14 >> (ulong)(*(uint *)(lVar23 + 0x88) & 0x1f) &
                               (-1 << (ulong)(*(uint *)(lVar23 + 0x8c) & 0x1f) ^ 0xffffffffU);
                      if (*(int *)(lVar23 + 0x90) <= (int)uVar12) goto LAB_0082d178;
LAB_0082d1e8:
                      cVar2 = *(char *)(lVar19 + lVar30 + 0x98);
joined_r0x0082d1ec:
                      if ((cVar2 != '\0') &&
                         ((uVar14 = *(uint *)(lVar19 + lVar30 + 0x9c), uVar14 == 0 ||
                          ((uVar14 & uVar12) != 0)))) {
                        pIVar22 = *(IDensityPixelSource **)(lVar19 + lVar30 + 0xa8);
                        if (pIVar22 == (IDensityPixelSource *)0x0) goto LAB_0082d320;
                        if (pIVar22 == param_1) {
                          lVar23 = lVar19 + lVar30;
                          if ((*(int *)(lVar23 + 0xb0) == 2) ||
                             ((*(int *)(lVar23 + 0xb0) == 0) != (*(uint *)(lVar23 + 0xb4) != uVar11)
                             )) {
                            uVar12 = uVar13 >> (ulong)(*(uint *)(lVar23 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar23 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if ((int)uVar12 < *(int *)(lVar23 + 0xc0)) goto LAB_0082d2fc;
LAB_0082d28c:
                            cVar2 = *(char *)(lVar19 + lVar30 + 200);
                            goto joined_r0x0082d300;
                          }
                        }
                        else {
                          if (pIVar22 == param_3) {
                            iVar17 = *(int *)(lVar19 + lVar30 + 0xb0);
                            uVar12 = uVar7;
                            uVar14 = local_a0;
                          }
                          else {
                            iVar17 = *(int *)(lVar19 + lVar30 + 0xb0);
                            uVar12 = uVar8;
                            uVar14 = local_c8;
                          }
                          if ((iVar17 == 2) ||
                             ((iVar17 == 0) !=
                              (*(uint *)(lVar19 + lVar30 + 0xb4) != (uVar14 & uVar12)))) {
                            lVar23 = lVar19 + lVar30;
                            uVar12 = uVar14 >> (ulong)(*(uint *)(lVar23 + 0xb8) & 0x1f) &
                                     (-1 << (ulong)(*(uint *)(lVar23 + 0xbc) & 0x1f) ^ 0xffffffffU);
                            if (*(int *)(lVar23 + 0xc0) <= (int)uVar12) goto LAB_0082d28c;
LAB_0082d2fc:
                            cVar2 = *(char *)(lVar19 + lVar30 + 200);
joined_r0x0082d300:
                            if ((cVar2 != '\0') &&
                               ((uVar14 = *(uint *)(lVar19 + lVar30 + 0xcc), uVar14 == 0 ||
                                ((uVar14 & uVar12) != 0)))) goto LAB_0082d320;
                          }
                        }
                      }
                    }
                  }
                  *(int *)(lVar19 + lVar30 + 4) = *(int *)(lVar19 + lVar30 + 4) + 1;
                }
                uVar12 = local_78;
                puVar4 = local_88;
                lVar30 = lVar30 + 0xd8;
              } while ((uVar28 & 0xffffffff) * 0xd8 - lVar30 != 0);
              if (uVar13 != local_78) {
                uVar11 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar13 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar19 = (ulong)uVar13 * 8;
                lVar30 = *(long *)(*(long *)(local_88 + 10) + lVar19);
                uVar32 = (**(code **)(lVar30 + 8))(lVar30,uVar11,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar4 + 10) + lVar19) = uVar32;
                if (1 < puVar4[0xd]) {
                  puVar26 = puVar4 + 0x11;
                  uVar28 = 1;
                  do {
                    lVar19 = (ulong)(uVar13 + (int)uVar28) * 8;
                    lVar30 = *(long *)(*(long *)(puVar4 + 10) + lVar19);
                    uVar32 = (**(code **)(lVar30 + 8))
                                       (lVar30,uVar11,0,*puVar26,
                                        uVar12 >> (ulong)(puVar26[-1] & 0x1f));
                    uVar28 = uVar28 + 1;
                    puVar26 = puVar26 + 2;
                    *(undefined8 *)(*(long *)(puVar4 + 10) + lVar19) = uVar32;
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
      plVar27 = (long *)(param_9 + uVar28 * 0x18);
      lVar30 = *plVar27;
      lVar19 = plVar27[1];
      if (lVar19 != lVar30) {
        uVar29 = 0;
        do {
          if (*(char *)(lVar30 + uVar29 * 0xd8 + 0x6c) != '\0') {
            lVar30 = lVar30 + uVar29 * 0xd8;
            DensityMap::markDensityRegionDirty
                      (*(DensityMap **)(lVar30 + 0x58),*(uint *)(param_7 + 0x50),
                       *(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x54),*(uint *)(param_7 + 0x4c)
                       ,*(uint *)(lVar30 + 0x24),*(uint *)(lVar30 + 0x28),*(uint *)(lVar30 + 0x70),
                       *(bool *)(lVar30 + 0x6d),true,true);
            lVar19 = plVar27[1];
            lVar30 = *plVar27;
          }
          uVar29 = (ulong)((int)uVar29 + 1);
          uVar24 = (lVar19 - lVar30 >> 3) * -0x7b425ed097b425ed;
        } while (uVar29 <= uVar24 && uVar24 - uVar29 != 0);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != param_8);
  }
  bVar5 = true;
LAB_0082d950:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


