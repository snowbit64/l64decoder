// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007d8ef4
// Size: 3632 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ChunkedBitSquare * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   ChunkedBitSquare, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ChunkedBitSquare*,
   ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ChunkedBitSquare *param_3,ProceduralDensityPixelSource *param_4,
               ParallelogramHelper *param_5,GetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
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
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  code **ppcVar35;
  int *piVar36;
  int *piVar37;
  uint uVar38;
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
  uint local_d0;
  uint local_cc;
  uint local_b0;
  uint local_70;
  
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
  plVar44 = *(long **)param_8;
  iVar29 = *(int *)(param_7 + 0x1c);
  iVar8 = *(int *)(param_7 + 0x18);
  DVar12 = param_7[0x20];
  iVar34 = *(int *)(param_7 + 8);
  uVar6 = *(uint *)(param_7 + 0xc);
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
  iVar5 = *(int *)(param_8 + 8);
  uVar7 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  uVar19 = ~(-1 << (ulong)(uVar28 & 0x1f));
  DVar13 = param_8[0x20];
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar23) || (uVar22 < uVar24)) || (uVar21 < uVar26)) || (uVar22 < uVar27)) {
    if (((uVar23 < uVar21) || (uVar24 < uVar22)) || ((uVar26 < uVar21 || (uVar27 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 007d9cec to 007d9cf7 has its CatchHandler @ 007d9d24 */
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
    uVar39 = 0;
    if (uVar21 != 0) {
      uVar39 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar22 != 0) {
      uVar23 = uVar24 / uVar22;
    }
    uVar46 = NEON_cnt((ulong)uVar39,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar39 & 0xffff0000) != 0;
      uVar24 = uVar39 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar39;
      }
      uVar38 = (uint)bVar20;
      uVar33 = uVar38 << 4 | 8;
      uVar32 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar33 = uVar38 << 4;
        uVar32 = uVar24;
      }
      uVar24 = uVar33 | 4;
      uVar38 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar24 = uVar33;
        uVar38 = uVar32;
      }
      uVar33 = uVar24 | 2;
      uVar32 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar33 = uVar24;
        uVar32 = uVar38;
      }
      local_110 = (uVar32 + uVar33) - 1;
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
      uVar32 = (uint)bVar20;
      uVar26 = uVar32 << 4 | 8;
      uVar33 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar32 << 4;
        uVar33 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar32 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar21 = uVar26;
        uVar32 = uVar33;
      }
      uVar26 = uVar21 | 2;
      uVar33 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar26 = uVar21;
        uVar33 = uVar32;
      }
      local_134 = (uVar33 + uVar26) - 1;
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
      uVar33 = (uint)bVar20;
      uVar26 = uVar33 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar26 = uVar33 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar26 | 4;
      uVar33 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar26;
        uVar33 = uVar27;
      }
      uVar26 = uVar22 | 2;
      uVar27 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar26 = uVar22;
        uVar27 = uVar33;
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
      uVar33 = (uint)bVar20;
      uVar26 = uVar33 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar26 = uVar33 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar26 | 4;
      uVar33 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar26;
        uVar33 = uVar27;
      }
      uVar26 = uVar22 | 2;
      uVar27 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar26 = uVar22;
        uVar27 = uVar33;
      }
      local_138 = (uVar27 + uVar26) - 1;
    }
    else {
      local_138 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar39 < 2) {
        uVar39 = 1;
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
LAB_007d9970:
          uVar27 = 0;
          uVar33 = uVar26 << (ulong)(local_110 & 0x1f);
          do {
            uVar32 = 0;
            uVar41 = (ulong)*(uint *)(param_3 + 0x34);
            uVar2 = uVar27 + (uVar22 << (ulong)(local_134 & 0x1f));
            uVar38 = uVar33;
            do {
              uVar3 = uVar32 + uVar33;
              iVar15 = (uVar2 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
              iVar43 = (int)uVar41;
              ppcVar35 = *(code ***)
                          (*(long *)(param_3 + 0x28) + (ulong)((iVar15 + (uVar3 >> 5)) * iVar43) * 8
                          );
              uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
              uVar30 = (**ppcVar35)(ppcVar35,uVar3,0,*(undefined4 *)(param_3 + 0x3c));
              piVar37 = (int *)(param_6 + 4);
              if (*(uint *)(param_3 + 0x34) < 2) {
                uVar41 = (ulong)*(uint *)(param_3 + 0x34);
                if (iVar34 != 2) goto LAB_007d9aa4;
LAB_007d9ac4:
                uVar3 = uVar30 >> (ulong)(uVar4 & 0x1f) & uVar16;
                if (((int)uVar3 < iVar8) || (iVar29 < (int)uVar3)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007d9af0;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007d9af0:
                  if ((uVar9 == 0) || ((uVar3 & uVar9) != 0)) {
                    uVar27 = 0;
                    goto LAB_007d9b34;
                  }
                }
              }
              else {
                uVar42 = 1;
                puVar40 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar43 * (iVar15 + (uVar38 >> 5)) + (int)uVar42) * 8);
                  iVar31 = (**ppcVar35)(ppcVar35,uVar3,0,*puVar40);
                  puVar1 = puVar40 + -1;
                  uVar42 = uVar42 + 1;
                  uVar41 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar40 = puVar40 + 2;
                  uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
                } while (uVar42 < uVar41);
                if (iVar34 == 2) goto LAB_007d9ac4;
LAB_007d9aa4:
                if ((iVar34 == 0) != ((uVar30 & uVar17) != uVar6)) goto LAB_007d9ac4;
              }
              uVar32 = uVar32 + 1;
              uVar38 = uVar38 + 1;
            } while (uVar32 != uVar39);
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar23);
          goto LAB_007d9954;
        }
LAB_007d98ec:
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar39 = 0;
    if (uVar23 != 0) {
      uVar39 = uVar21 / uVar23;
    }
    uVar23 = 0;
    if (uVar24 != 0) {
      uVar23 = uVar22 / uVar24;
    }
    uVar46 = NEON_cnt((ulong)uVar39,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar39 & 0xffff0000) != 0;
      uVar24 = uVar39 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar39;
      }
      uVar32 = (uint)bVar20;
      uVar39 = uVar32 << 4 | 8;
      uVar33 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar39 = uVar32 << 4;
        uVar33 = uVar24;
      }
      uVar24 = uVar39 | 4;
      uVar32 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar24 = uVar39;
        uVar32 = uVar33;
      }
      uVar39 = uVar24 | 2;
      uVar33 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar39 = uVar24;
        uVar33 = uVar32;
      }
      local_70 = (uVar33 + uVar39) - 1;
    }
    else {
      local_70 = 0;
    }
    uVar24 = 0;
    if (uVar26 != 0) {
      uVar24 = uVar21 / uVar26;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar39 = (uint)bVar20;
      uVar23 = uVar39 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar23 = uVar39 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar23 | 4;
      uVar39 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar23;
        uVar39 = uVar26;
      }
      uVar23 = uVar21 | 2;
      uVar26 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar23 = uVar21;
        uVar26 = uVar39;
      }
      local_cc = (uVar26 + uVar23) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar21 = 0;
    if (uVar27 != 0) {
      uVar21 = uVar22 / uVar27;
    }
    uVar46 = NEON_cnt((ulong)uVar24,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar26 = (uint)bVar20;
      uVar23 = uVar26 << 4 | 8;
      uVar24 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar23 = uVar26 << 4;
        uVar24 = uVar22;
      }
      uVar22 = uVar23 | 4;
      uVar26 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar22 = uVar23;
        uVar26 = uVar24;
      }
      uVar23 = uVar22 | 2;
      uVar24 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar23 = uVar22;
        uVar24 = uVar26;
      }
      local_b0 = (uVar24 + uVar23) - 1;
    }
    else {
      local_b0 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar24 = (uint)bVar20;
      uVar21 = uVar24 << 4 | 8;
      uVar23 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar21 = uVar24 << 4;
        uVar23 = uVar22;
      }
      uVar22 = uVar21 | 4;
      uVar24 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar22 = uVar21;
        uVar24 = uVar23;
      }
      uVar21 = uVar22 | 2;
      uVar23 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar21 = uVar22;
        uVar23 = uVar24;
      }
      local_d0 = (uVar23 + uVar21) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      piVar37 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar22 = *(uint *)(param_5 + 0x58);
        if (uVar22 < *(uint *)(param_5 + 0x5c)) {
          uVar23 = uVar21 >> (ulong)(local_cc & 0x1f);
          do {
            uVar24 = uVar22 >> (ulong)(local_70 & 0x1f);
            uVar26 = (((uVar23 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar24 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar35 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar26 * 8);
            uVar24 = uVar24 & 0x1f | (uVar23 & 0x1f) << 5;
            uVar27 = (**ppcVar35)(ppcVar35,uVar24,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar41 = 1;
              puVar40 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar26 + (int)uVar41) * 8);
                iVar29 = (**ppcVar35)(ppcVar35,uVar24,0,*puVar40);
                puVar1 = puVar40 + -1;
                uVar41 = uVar41 + 1;
                puVar40 = puVar40 + 2;
                uVar27 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar27;
              } while (uVar41 < *(uint *)(param_3 + 0x34));
            }
            piVar36 = piVar37;
            if ((((((iVar34 == 2) || ((iVar34 == 0) != ((uVar27 & uVar17) != uVar6))) &&
                  (DVar12 == (DensityMapFilter)0x0)) &&
                 (((uVar9 == 0 || ((uVar27 >> (ulong)(uVar4 & 0x1f) & uVar16 & uVar9) != 0)) &&
                  ((uVar24 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar22 >> (ulong)(local_b0 & 0x1f),
                                        uVar21 >> (ulong)(local_d0 & 0x1f)), iVar5 == 2 ||
                   ((iVar5 == 0) != ((uVar24 & uVar19) != uVar7))))))) &&
                (DVar13 == (DensityMapFilter)0x0)) &&
               ((uVar28 == 0 || ((uVar24 >> (ulong)(uVar25 & 0x1f) & uVar18 & uVar28) != 0)))) {
              uVar26 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar22,uVar21);
              uVar24 = uVar26 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar24;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar26;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar26)))) {
                if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007d96c0:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d968c;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar24) goto joined_r0x007d96c0;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d968c;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar24) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar24 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar36 = (int *)(param_6 + 8);
                  goto LAB_007d9680;
                }
              }
            }
            else {
LAB_007d9680:
              *piVar36 = *piVar36 + 1;
            }
LAB_007d968c:
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d9b34:
  do {
    uVar33 = 0;
    do {
      uVar32 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar26 << (ulong)(local_11c & 0x1f)) + uVar33,
                          uVar27 + (uVar22 << (ulong)(local_138 & 0x1f)));
      if ((iVar5 == 2) || ((iVar5 == 0) != ((uVar32 & uVar19) != uVar7))) {
        uVar32 = uVar32 >> (ulong)(uVar25 & 0x1f) & uVar18;
        if (((int)uVar32 < iVar11) || (iVar10 < (int)uVar32)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007d9bc8;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007d9bc8:
          if ((uVar28 == 0) || ((uVar32 & uVar28) != 0)) {
            uVar33 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar26,uVar22);
            uVar27 = uVar33 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar27;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar33;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar33))))
            goto LAB_007d9960;
            if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007d9c74:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d9960;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar27) goto joined_r0x007d9c74;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d9960;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar27) == 0))
            goto LAB_007d9960;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar27 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar37 = (int *)(param_6 + 8);
            goto LAB_007d9954;
          }
        }
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 != uVar24);
    uVar27 = uVar27 + 1;
  } while (uVar27 != uVar21);
LAB_007d9954:
  *piVar37 = *piVar37 + 1;
LAB_007d9960:
  uVar26 = uVar26 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar26) goto LAB_007d98ec;
  goto LAB_007d9970;
}


