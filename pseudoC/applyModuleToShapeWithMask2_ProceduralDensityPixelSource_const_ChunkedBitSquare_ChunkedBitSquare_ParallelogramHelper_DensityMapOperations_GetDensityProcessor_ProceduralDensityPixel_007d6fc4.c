// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007d6fc4
// Size: 4020 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ChunkedBitSquare * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   ChunkedBitSquare, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ChunkedBitSquare*,
   ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ChunkedBitSquare *param_3,ChunkedBitSquare *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
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
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  code **ppcVar35;
  int *piVar36;
  int *piVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 *puVar41;
  ulong uVar42;
  int iVar43;
  long *plVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_148;
  uint local_144;
  uint local_12c;
  uint local_120;
  uint local_fc;
  uint local_ec;
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
  iVar34 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  plVar44 = *(long **)param_8;
  DVar12 = param_7[0x20];
  uVar6 = *(uint *)(param_7 + 0x24);
  iVar30 = *(int *)(param_7 + 0x18);
  uVar17 = ~(-1 << (ulong)(uVar25 & 0x1f));
  iVar7 = *(int *)(param_7 + 0x1c);
  uVar26 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar27 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  uVar9 = *(uint *)(param_8 + 0xc);
  iVar10 = *(int *)(param_8 + 0x18);
  DVar13 = param_8[0x20];
  iVar11 = *(int *)(param_8 + 0x1c);
  uVar19 = ~(-1 << (ulong)(uVar28 & 0x1f));
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar23) || (uVar22 < uVar24)) || (uVar21 < uVar26)) || (uVar22 < uVar27)) {
    if (((uVar23 < uVar21) || (uVar24 < uVar22)) || ((uVar26 < uVar21 || (uVar27 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 007d7f40 to 007d7f4b has its CatchHandler @ 007d7f78 */
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
    uVar31 = 0;
    if (uVar21 != 0) {
      uVar31 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar22 != 0) {
      uVar23 = uVar24 / uVar22;
    }
    uVar46 = NEON_cnt((ulong)uVar31,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar31 & 0xffff0000) != 0;
      uVar24 = uVar31 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar31;
      }
      uVar39 = (uint)bVar20;
      uVar29 = uVar39 << 4 | 8;
      uVar38 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar29 = uVar39 << 4;
        uVar38 = uVar24;
      }
      uVar24 = uVar29 | 4;
      uVar39 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar24 = uVar29;
        uVar39 = uVar38;
      }
      uVar29 = uVar24 | 2;
      uVar38 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar29 = uVar24;
        uVar38 = uVar39;
      }
      local_120 = (uVar38 + uVar29) - 1;
    }
    else {
      local_120 = 0;
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
      uVar38 = (uint)bVar20;
      uVar26 = uVar38 << 4 | 8;
      uVar29 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar38 << 4;
        uVar29 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar38 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar21 = uVar26;
        uVar38 = uVar29;
      }
      uVar26 = uVar21 | 2;
      uVar29 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar26 = uVar21;
        uVar29 = uVar38;
      }
      local_144 = (uVar29 + uVar26) - 1;
    }
    else {
      local_144 = 0;
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
      uVar29 = (uint)bVar20;
      uVar26 = uVar29 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar26 = uVar29 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar26 | 4;
      uVar29 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar26;
        uVar29 = uVar27;
      }
      uVar26 = uVar22 | 2;
      uVar27 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar26 = uVar22;
        uVar27 = uVar29;
      }
      local_12c = (uVar27 + uVar26) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar29 = (uint)bVar20;
      uVar26 = uVar29 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar26 = uVar29 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar26 | 4;
      uVar29 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar26;
        uVar29 = uVar27;
      }
      uVar26 = uVar22 | 2;
      uVar27 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar26 = uVar22;
        uVar27 = uVar29;
      }
      local_148 = (uVar27 + uVar26) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar31 < 2) {
        uVar31 = 1;
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
LAB_007d7b00:
          uVar27 = 0;
          uVar29 = uVar26 << (ulong)(local_120 & 0x1f);
          do {
            uVar38 = 0;
            uVar40 = (ulong)*(uint *)(param_3 + 0x34);
            uVar2 = uVar27 + (uVar22 << (ulong)(local_144 & 0x1f));
            uVar39 = uVar29;
            do {
              uVar3 = uVar38 + uVar29;
              iVar15 = (uVar2 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
              iVar43 = (int)uVar40;
              ppcVar35 = *(code ***)
                          (*(long *)(param_3 + 0x28) + (ulong)((iVar15 + (uVar3 >> 5)) * iVar43) * 8
                          );
              uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
              uVar32 = (**ppcVar35)(ppcVar35,uVar3,0,*(undefined4 *)(param_3 + 0x3c));
              piVar37 = (int *)(param_6 + 4);
              if (*(uint *)(param_3 + 0x34) < 2) {
                uVar40 = (ulong)*(uint *)(param_3 + 0x34);
                if (iVar34 != 2) goto LAB_007d7c34;
LAB_007d7c54:
                uVar3 = uVar32 >> (ulong)(uVar4 & 0x1f) & uVar16;
                if (((int)uVar3 < iVar30) || (iVar7 < (int)uVar3)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007d7c80;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007d7c80:
                  if ((uVar6 == 0) || ((uVar3 & uVar6) != 0)) {
                    uVar27 = 0;
                    uVar29 = uVar26 << (ulong)(local_12c & 0x1f);
                    goto LAB_007d7cc4;
                  }
                }
              }
              else {
                uVar42 = 1;
                puVar41 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar43 * (iVar15 + (uVar39 >> 5)) + (int)uVar42) * 8);
                  iVar33 = (**ppcVar35)(ppcVar35,uVar3,0,*puVar41);
                  puVar1 = puVar41 + -1;
                  uVar42 = uVar42 + 1;
                  uVar40 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar41 = puVar41 + 2;
                  uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
                } while (uVar42 < uVar40);
                if (iVar34 == 2) goto LAB_007d7c54;
LAB_007d7c34:
                if ((iVar34 == 0) != ((uVar32 & uVar17) != uVar5)) goto LAB_007d7c54;
              }
              uVar38 = uVar38 + 1;
              uVar39 = uVar39 + 1;
            } while (uVar38 != uVar31);
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar23);
          goto LAB_007d7ae4;
        }
LAB_007d7a7c:
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar31 = 0;
    if (uVar23 != 0) {
      uVar31 = uVar21 / uVar23;
    }
    uVar23 = 0;
    if (uVar24 != 0) {
      uVar23 = uVar22 / uVar24;
    }
    uVar46 = NEON_cnt((ulong)uVar31,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar31 & 0xffff0000) != 0;
      uVar24 = uVar31 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar31;
      }
      uVar38 = (uint)bVar20;
      uVar31 = uVar38 << 4 | 8;
      uVar29 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar31 = uVar38 << 4;
        uVar29 = uVar24;
      }
      uVar24 = uVar31 | 4;
      uVar38 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar24 = uVar31;
        uVar38 = uVar29;
      }
      uVar31 = uVar24 | 2;
      uVar29 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar31 = uVar24;
        uVar29 = uVar38;
      }
      local_70 = (uVar29 + uVar31) - 1;
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
      uVar31 = (uint)bVar20;
      uVar23 = uVar31 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar23 = uVar31 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar23 | 4;
      uVar31 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar23;
        uVar31 = uVar26;
      }
      uVar23 = uVar21 | 2;
      uVar26 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar23 = uVar21;
        uVar26 = uVar31;
      }
      local_ec = (uVar26 + uVar23) - 1;
    }
    else {
      local_ec = 0;
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
      uVar22 = (uVar24 + uVar23) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar21,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar23 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar23 = uVar21;
      }
      uVar26 = (uint)bVar20;
      uVar21 = uVar26 << 4 | 8;
      uVar24 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar21 = uVar26 << 4;
        uVar24 = uVar23;
      }
      uVar23 = uVar21 | 4;
      uVar26 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar23 = uVar21;
        uVar26 = uVar24;
      }
      uVar21 = uVar23 | 2;
      uVar24 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar21 = uVar23;
        uVar24 = uVar26;
      }
      local_fc = (uVar24 + uVar21) - 1;
    }
    else {
      local_fc = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      piVar37 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar23 = *(uint *)(param_5 + 0x58);
        if (uVar23 < *(uint *)(param_5 + 0x5c)) {
          uVar24 = uVar21 >> (ulong)(local_ec & 0x1f);
          uVar26 = uVar21 >> (ulong)(local_fc & 0x1f);
          do {
            uVar27 = uVar23 >> (ulong)(local_70 & 0x1f);
            uVar31 = (((uVar24 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar27 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar35 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar31 * 8);
            uVar27 = uVar27 & 0x1f | (uVar24 & 0x1f) << 5;
            uVar29 = (**ppcVar35)(ppcVar35,uVar27,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar40 = 1;
              puVar41 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar31 + (int)uVar40) * 8);
                iVar30 = (**ppcVar35)(ppcVar35,uVar27,0,*puVar41);
                puVar1 = puVar41 + -1;
                uVar40 = uVar40 + 1;
                puVar41 = puVar41 + 2;
                uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
              } while (uVar40 < *(uint *)(param_3 + 0x34));
            }
            piVar36 = piVar37;
            if ((((iVar34 == 2) || ((iVar34 == 0) != ((uVar29 & uVar17) != uVar5))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar6 == 0 || ((uVar29 >> (ulong)(uVar4 & 0x1f) & uVar16 & uVar6) != 0)))) {
              uVar27 = uVar23 >> (ulong)(uVar22 & 0x1f);
              uVar31 = (((uVar26 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar27 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar35 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar31 * 8);
              uVar27 = uVar27 & 0x1f | (uVar26 & 0x1f) << 5;
              uVar29 = (**ppcVar35)(ppcVar35,uVar27,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar40 = 1;
                puVar41 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar31 + (int)uVar40) * 8);
                  iVar30 = (**ppcVar35)(ppcVar35,uVar27,0,*puVar41);
                  puVar1 = puVar41 + -1;
                  uVar40 = uVar40 + 1;
                  puVar41 = puVar41 + 2;
                  uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                } while (uVar40 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar8 != 2) && ((iVar8 == 0) == ((uVar29 & uVar19) != uVar9))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar28 != 0 && ((uVar29 >> (ulong)(uVar25 & 0x1f) & uVar18 & uVar28) == 0))))))
              goto LAB_007d77fc;
              uVar31 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar23,uVar21);
              uVar27 = uVar31 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar27;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar31;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar31)))) {
                if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007d7840:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d780c;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar27) goto joined_r0x007d7840;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d780c;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar27) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar27 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar36 = (int *)(param_6 + 8);
                  goto LAB_007d77fc;
                }
              }
            }
            else {
LAB_007d77fc:
              *piVar36 = *piVar36 + 1;
            }
LAB_007d780c:
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d7cc4:
  do {
    uVar38 = 0;
    uVar40 = (ulong)*(uint *)(param_4 + 0x34);
    uVar2 = uVar27 + (uVar22 << (ulong)(local_148 & 0x1f));
    uVar39 = uVar29;
    do {
      uVar3 = uVar38 + uVar29;
      iVar15 = (uVar2 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar43 = (int)uVar40;
      ppcVar35 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar15 + (uVar3 >> 5)) * iVar43) * 8);
      uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
      uVar32 = (**ppcVar35)(ppcVar35,uVar3,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar40 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar8 != 2) goto LAB_007d7dcc;
LAB_007d7dec:
        uVar3 = uVar32 >> (ulong)(uVar25 & 0x1f) & uVar18;
        if (((int)uVar3 < iVar10) || (iVar11 < (int)uVar3)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007d7e18;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007d7e18:
          if ((uVar28 == 0) || ((uVar3 & uVar28) != 0)) {
            uVar29 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar26,uVar22);
            uVar27 = uVar29 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar27;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar29;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar29))))
            goto LAB_007d7af0;
            if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007d7ec8:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d7af0;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar27) goto joined_r0x007d7ec8;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d7af0;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar27) == 0))
            goto LAB_007d7af0;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar27 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar37 = (int *)(param_6 + 8);
            goto LAB_007d7ae4;
          }
        }
      }
      else {
        uVar42 = 1;
        puVar41 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar35 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar43 * (iVar15 + (uVar39 >> 5)) + (int)uVar42) * 8);
          iVar33 = (**ppcVar35)(ppcVar35,uVar3,0,*puVar41);
          puVar1 = puVar41 + -1;
          uVar42 = uVar42 + 1;
          uVar40 = (ulong)*(uint *)(param_4 + 0x34);
          puVar41 = puVar41 + 2;
          uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
        } while (uVar42 < uVar40);
        if (iVar8 == 2) goto LAB_007d7dec;
LAB_007d7dcc:
        if ((iVar8 == 0) != ((uVar32 & uVar19) != uVar9)) goto LAB_007d7dec;
      }
      uVar38 = uVar38 + 1;
      uVar39 = uVar39 + 1;
    } while (uVar38 != uVar24);
    uVar27 = uVar27 + 1;
  } while (uVar27 != uVar21);
LAB_007d7ae4:
  *piVar37 = *piVar37 + 1;
LAB_007d7af0:
  uVar26 = uVar26 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar26) goto LAB_007d7a7c;
  goto LAB_007d7b00;
}


