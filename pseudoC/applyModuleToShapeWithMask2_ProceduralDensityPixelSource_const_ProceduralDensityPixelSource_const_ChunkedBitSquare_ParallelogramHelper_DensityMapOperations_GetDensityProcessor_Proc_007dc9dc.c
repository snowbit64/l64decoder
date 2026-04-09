// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007dc9dc
// Size: 3652 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ProceduralDensityPixelSource * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   ProceduralDensityPixelSource const, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*,
   ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ProceduralDensityPixelSource *param_3,ChunkedBitSquare *param_4,
               ParallelogramHelper *param_5,GetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  DensityMapFilter DVar12;
  DensityMapFilter DVar13;
  GetDensityProcessor GVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  code **ppcVar36;
  int *piVar37;
  int *piVar38;
  uint uVar39;
  undefined4 *puVar40;
  ulong uVar41;
  ulong uVar42;
  int iVar43;
  long *plVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_138;
  uint local_134;
  uint local_11c;
  uint local_110;
  uint local_cc;
  uint local_c4;
  uint local_74;
  
  uVar21 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar22 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar44 = *(long **)param_7;
  uVar23 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar24 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar6 = *(int *)(param_7 + 8);
  plVar44 = *(long **)param_8;
  iVar30 = *(int *)(param_7 + 0x18);
  iVar7 = *(int *)(param_7 + 0x1c);
  DVar12 = param_7[0x20];
  uVar8 = *(uint *)(param_7 + 0xc);
  uVar9 = *(uint *)(param_7 + 0x24);
  uVar17 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar26 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar27 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar10 = *(int *)(param_8 + 0x1c);
  iVar35 = *(int *)(param_8 + 8);
  uVar5 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  uVar19 = ~(-1 << (ulong)(uVar28 & 0x1f));
  DVar13 = param_8[0x20];
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar23) || (uVar22 < uVar24)) || (uVar21 < uVar26)) || (uVar22 < uVar27)) {
    if (((uVar23 < uVar21) || (uVar24 < uVar22)) || ((uVar26 < uVar21 || (uVar27 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar35 != 0
         )) {
                    /* try { // try from 007dd7e8 to 007dd7f3 has its CatchHandler @ 007dd820 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar23,(ulong)uVar24,(ulong)uVar26,(ulong)uVar27,(ulong)uVar21,
                         (ulong)uVar22);
      return false;
    }
    uVar29 = 0;
    if (uVar21 != 0) {
      uVar29 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar22 != 0) {
      uVar23 = uVar24 / uVar22;
    }
    uVar46 = NEON_cnt((ulong)uVar29,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar29 & 0xffff0000) != 0;
      uVar24 = uVar29 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar29;
      }
      uVar39 = (uint)bVar20;
      uVar34 = uVar39 << 4 | 8;
      uVar31 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar34 = uVar39 << 4;
        uVar31 = uVar24;
      }
      uVar24 = uVar34 | 4;
      uVar39 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar24 = uVar34;
        uVar39 = uVar31;
      }
      uVar34 = uVar24 | 2;
      uVar31 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar34 = uVar24;
        uVar31 = uVar39;
      }
      local_110 = (uVar31 + uVar34) - 1;
    }
    else {
      local_110 = 0;
    }
    uVar24 = 0;
    if (uVar21 != 0) {
      uVar24 = uVar26 / uVar21;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar31 = (uint)bVar20;
      uVar26 = uVar31 << 4 | 8;
      uVar34 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar31 << 4;
        uVar34 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar31 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar21 = uVar26;
        uVar31 = uVar34;
      }
      uVar26 = uVar21 | 2;
      uVar34 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar26 = uVar21;
        uVar34 = uVar31;
      }
      local_134 = (uVar34 + uVar26) - 1;
    }
    else {
      local_134 = 0;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar27 / uVar22;
    }
    uVar46 = NEON_cnt((ulong)uVar24,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar34 = (uint)bVar20;
      uVar26 = uVar34 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar26 = uVar34 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar26 | 4;
      uVar34 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar26;
        uVar34 = uVar27;
      }
      uVar26 = uVar22 | 2;
      uVar27 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar26 = uVar22;
        uVar27 = uVar34;
      }
      local_11c = (uVar27 + uVar26) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar34 = (uint)bVar20;
      uVar26 = uVar34 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar26 = uVar34 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar26 | 4;
      uVar34 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar26;
        uVar34 = uVar27;
      }
      uVar26 = uVar22 | 2;
      uVar27 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar26 = uVar22;
        uVar27 = uVar34;
      }
      local_138 = (uVar27 + uVar26) - 1;
    }
    else {
      local_138 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
LAB_007dd46c:
          uVar27 = 0;
          do {
            uVar34 = 0;
            do {
              uVar31 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar26 << (ulong)(local_110 & 0x1f)) + uVar34,
                                  uVar27 + (uVar22 << (ulong)(local_134 & 0x1f)));
              piVar38 = (int *)(param_6 + 4);
              if ((iVar6 == 2) || ((iVar6 == 0) != ((uVar31 & uVar17) != uVar8))) {
                uVar31 = uVar31 >> (ulong)(uVar4 & 0x1f) & uVar16;
                if (((int)uVar31 < iVar30) || (iVar7 < (int)uVar31)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007dd520;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007dd520:
                  if ((uVar9 == 0) || ((uVar31 & uVar9) != 0)) {
                    uVar27 = 0;
                    uVar34 = uVar26 << (ulong)(local_11c & 0x1f);
                    goto LAB_007dd55c;
                  }
                }
              }
              uVar34 = uVar34 + 1;
            } while (uVar34 != uVar29);
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar23);
          goto LAB_007dd450;
        }
LAB_007dd3e8:
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar29 = 0;
    if (uVar23 != 0) {
      uVar29 = uVar21 / uVar23;
    }
    uVar23 = 0;
    if (uVar24 != 0) {
      uVar23 = uVar22 / uVar24;
    }
    uVar46 = NEON_cnt((ulong)uVar29,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar29 & 0xffff0000) != 0;
      uVar24 = uVar29 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar29;
      }
      uVar31 = (uint)bVar20;
      uVar29 = uVar31 << 4 | 8;
      uVar34 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar29 = uVar31 << 4;
        uVar34 = uVar24;
      }
      uVar24 = uVar29 | 4;
      uVar31 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar24 = uVar29;
        uVar31 = uVar34;
      }
      uVar29 = uVar24 | 2;
      uVar34 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar29 = uVar24;
        uVar34 = uVar31;
      }
      uVar24 = (uVar34 + uVar29) - 1;
    }
    else {
      uVar24 = 0;
    }
    uVar29 = 0;
    if (uVar26 != 0) {
      uVar29 = uVar21 / uVar26;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar34 = (uint)bVar20;
      uVar23 = uVar34 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar23 = uVar34 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar23 | 4;
      uVar34 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar23;
        uVar34 = uVar26;
      }
      uVar23 = uVar21 | 2;
      uVar26 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar23 = uVar21;
        uVar26 = uVar34;
      }
      local_c4 = (uVar26 + uVar23) - 1;
    }
    else {
      local_c4 = 0;
    }
    uVar21 = 0;
    if (uVar27 != 0) {
      uVar21 = uVar22 / uVar27;
    }
    uVar46 = NEON_cnt((ulong)uVar29,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar29 & 0xffff0000) != 0;
      uVar22 = uVar29 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar29;
      }
      uVar27 = (uint)bVar20;
      uVar23 = uVar27 << 4 | 8;
      uVar26 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar23 = uVar27 << 4;
        uVar26 = uVar22;
      }
      uVar22 = uVar23 | 4;
      uVar27 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar22 = uVar23;
        uVar27 = uVar26;
      }
      uVar23 = uVar22 | 2;
      uVar26 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar23 = uVar22;
        uVar26 = uVar27;
      }
      local_74 = (uVar26 + uVar23) - 1;
    }
    else {
      local_74 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar26 = (uint)bVar20;
      uVar21 = uVar26 << 4 | 8;
      uVar23 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar21 = uVar26 << 4;
        uVar23 = uVar22;
      }
      uVar22 = uVar21 | 4;
      uVar26 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar22 = uVar21;
        uVar26 = uVar23;
      }
      uVar21 = uVar22 | 2;
      uVar23 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar21 = uVar22;
        uVar23 = uVar26;
      }
      local_cc = (uVar23 + uVar21) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      piVar38 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar22 = *(uint *)(param_5 + 0x58);
        if (uVar22 < *(uint *)(param_5 + 0x5c)) {
          uVar23 = uVar21 >> (ulong)(local_cc & 0x1f);
          do {
            uVar26 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar22 >> (ulong)(uVar24 & 0x1f),
                                uVar21 >> (ulong)(local_c4 & 0x1f));
            piVar37 = piVar38;
            if ((((iVar6 == 2) || ((iVar6 == 0) != ((uVar26 & uVar17) != uVar8))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar9 == 0 || ((uVar26 >> (ulong)(uVar4 & 0x1f) & uVar16 & uVar9) != 0)))) {
              uVar26 = uVar22 >> (ulong)(local_74 & 0x1f);
              uVar27 = (((uVar23 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar26 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar36 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar27 * 8);
              uVar26 = uVar26 & 0x1f | (uVar23 & 0x1f) << 5;
              uVar29 = (**ppcVar36)(ppcVar36,uVar26,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar41 = 1;
                puVar40 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar36 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar27 + (int)uVar41) * 8);
                  iVar30 = (**ppcVar36)(ppcVar36,uVar26,0,*puVar40);
                  puVar1 = puVar40 + -1;
                  uVar41 = uVar41 + 1;
                  puVar40 = puVar40 + 2;
                  uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                } while (uVar41 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar35 != 2) && ((iVar35 == 0) == ((uVar29 & uVar19) != uVar5))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar28 != 0 && ((uVar29 >> (ulong)(uVar25 & 0x1f) & uVar18 & uVar28) == 0))))))
              goto LAB_007dd170;
              uVar27 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar22,uVar21);
              uVar26 = uVar27 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar26;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar27;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar27)))) {
                if ((int)uVar26 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007dd1b4:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007dd17c;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar26) goto joined_r0x007dd1b4;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007dd17c;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar26) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar26 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar26) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar37 = (int *)(param_6 + 8);
                  goto LAB_007dd170;
                }
              }
            }
            else {
LAB_007dd170:
              *piVar37 = *piVar37 + 1;
            }
LAB_007dd17c:
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007dd55c:
  do {
    uVar31 = 0;
    uVar41 = (ulong)*(uint *)(param_4 + 0x34);
    uVar2 = uVar27 + (uVar22 << (ulong)(local_138 & 0x1f));
    uVar39 = uVar34;
    do {
      uVar3 = uVar31 + uVar34;
      iVar15 = (uVar2 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar43 = (int)uVar41;
      ppcVar36 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar15 + (uVar3 >> 5)) * iVar43) * 8);
      uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
      uVar32 = (**ppcVar36)(ppcVar36,uVar3,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar41 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar35 != 2) goto LAB_007dd668;
LAB_007dd688:
        uVar3 = uVar32 >> (ulong)(uVar25 & 0x1f) & uVar18;
        if (((int)uVar3 < iVar11) || (iVar10 < (int)uVar3)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007dd6b4;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007dd6b4:
          if ((uVar28 == 0) || ((uVar3 & uVar28) != 0)) {
            uVar34 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar26,uVar22);
            uVar27 = uVar34 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar27;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar34;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar34))))
            goto LAB_007dd45c;
            if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007dd768:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007dd45c;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar27) goto joined_r0x007dd768;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007dd45c;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar27) == 0))
            goto LAB_007dd45c;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar27 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar38 = (int *)(param_6 + 8);
            goto LAB_007dd450;
          }
        }
      }
      else {
        uVar42 = 1;
        puVar40 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar36 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar43 * (iVar15 + (uVar39 >> 5)) + (int)uVar42) * 8);
          iVar33 = (**ppcVar36)(ppcVar36,uVar3,0,*puVar40);
          puVar1 = puVar40 + -1;
          uVar42 = uVar42 + 1;
          uVar41 = (ulong)*(uint *)(param_4 + 0x34);
          puVar40 = puVar40 + 2;
          uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
        } while (uVar42 < uVar41);
        if (iVar35 == 2) goto LAB_007dd688;
LAB_007dd668:
        if ((iVar35 == 0) != ((uVar32 & uVar19) != uVar5)) goto LAB_007dd688;
      }
      uVar31 = uVar31 + 1;
      uVar39 = uVar39 + 1;
    } while (uVar31 != uVar24);
    uVar27 = uVar27 + 1;
  } while (uVar27 != uVar21);
LAB_007dd450:
  *piVar38 = *piVar38 + 1;
LAB_007dd45c:
  uVar26 = uVar26 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar26) goto LAB_007dd3e8;
  goto LAB_007dd46c;
}


