// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c1f90
// Size: 4284 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ChunkedBitSquare * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, ChunkedBitSquare,
   BitVector, ParallelogramHelper, DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>
   >(IDensityPixelSource*, ChunkedBitSquare*, ChunkedBitSquare*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ChunkedBitSquare *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,GetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  DensityMapFilter DVar10;
  DensityMapFilter DVar11;
  GetDensityProcessor GVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  code **ppcVar35;
  int *piVar36;
  int *piVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  undefined4 *puVar43;
  ulong uVar44;
  int iVar45;
  long *plVar46;
  ulong uVar47;
  undefined2 uVar48;
  undefined8 uVar49;
  uint local_160;
  uint local_15c;
  uint local_128;
  uint local_cc;
  uint local_c8;
  uint local_a8;
  uint local_94;
  
  uVar18 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar19 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar46 = *(long **)param_7;
  uVar20 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar21 = (**(code **)(*plVar46 + 0x20))(plVar46);
  (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar22 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar34 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  plVar46 = *(long **)param_8;
  iVar28 = *(int *)(param_7 + 0x18);
  iVar6 = *(int *)(param_7 + 0x1c);
  DVar10 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar22 & 0x1f));
  uVar23 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar24 = (**(code **)(*plVar46 + 0x20))(plVar46);
  uVar25 = (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar22 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  uVar9 = *(uint *)(param_8 + 0xc);
  DVar11 = param_8[0x20];
  uVar16 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar26 = *(uint *)(param_8 + 0x24);
  if ((((uVar18 < uVar20) || (uVar19 < uVar21)) || (uVar18 < uVar23)) || (uVar19 < uVar24)) {
    if (((uVar20 < uVar18) || (uVar21 < uVar19)) || ((uVar23 < uVar18 || (uVar24 < uVar19)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 007c3014 to 007c301f has its CatchHandler @ 007c304c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar20,(ulong)uVar21,(ulong)uVar23,(ulong)uVar24,(ulong)uVar18,
                         (ulong)uVar19);
      return false;
    }
    uVar29 = 0;
    if (uVar18 != 0) {
      uVar29 = uVar20 / uVar18;
    }
    uVar20 = 0;
    if (uVar19 != 0) {
      uVar20 = uVar21 / uVar19;
    }
    uVar49 = NEON_cnt((ulong)uVar29,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar29 & 0xffff0000) != 0;
      uVar21 = uVar29 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar29;
      }
      uVar33 = (uint)bVar17;
      uVar27 = uVar33 << 4 | 8;
      uVar39 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar27 = uVar33 << 4;
        uVar39 = uVar21;
      }
      uVar21 = uVar27 | 4;
      uVar33 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar21 = uVar27;
        uVar33 = uVar39;
      }
      uVar27 = uVar21 | 2;
      uVar39 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar27 = uVar21;
        uVar39 = uVar33;
      }
      uVar21 = (uVar39 + uVar27) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar20,1);
    uVar27 = 0;
    if (uVar18 != 0) {
      uVar27 = uVar23 / uVar18;
    }
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar20 & 0xffff0000) != 0;
      uVar18 = uVar20 >> 0x10;
      if (!bVar17) {
        uVar18 = uVar20;
      }
      uVar41 = (uint)bVar17;
      uVar39 = uVar41 << 4 | 8;
      uVar33 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar39 = uVar41 << 4;
        uVar33 = uVar18;
      }
      uVar18 = uVar39 | 4;
      uVar41 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar18 = uVar39;
        uVar41 = uVar33;
      }
      uVar39 = uVar18 | 2;
      uVar33 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar39 = uVar18;
        uVar33 = uVar41;
      }
      local_15c = (uVar33 + uVar39) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = uVar24 / uVar19;
    }
    uVar49 = NEON_cnt((ulong)uVar27,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar27 & 0xffff0000) != 0;
      uVar19 = uVar27 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar27;
      }
      uVar33 = (uint)bVar17;
      uVar24 = uVar33 << 4 | 8;
      uVar39 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar24 = uVar33 << 4;
        uVar39 = uVar19;
      }
      uVar19 = uVar24 | 4;
      uVar33 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar19 = uVar24;
        uVar33 = uVar39;
      }
      uVar24 = uVar19 | 2;
      uVar39 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar24 = uVar19;
        uVar39 = uVar33;
      }
      local_128 = (uVar39 + uVar24) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar18,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar19 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar18;
      }
      uVar33 = (uint)bVar17;
      uVar24 = uVar33 << 4 | 8;
      uVar39 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar24 = uVar33 << 4;
        uVar39 = uVar19;
      }
      uVar19 = uVar24 | 4;
      uVar33 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar19 = uVar24;
        uVar33 = uVar39;
      }
      uVar24 = uVar19 | 2;
      uVar39 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar24 = uVar19;
        uVar39 = uVar33;
      }
      local_160 = (uVar39 + uVar24) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar19 = *(uint *)(param_5 + 0x48);
    if (uVar19 < *(uint *)(param_5 + 0x4c)) {
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar19);
        uVar24 = *(uint *)(param_5 + 0x58);
        if (uVar24 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar39 = 0;
            uVar33 = uVar24 << (ulong)(uVar21 & 0x1f);
            do {
              uVar41 = 0;
              uVar47 = (ulong)*(uint *)(param_3 + 0x34);
              uVar42 = uVar39 + (uVar19 << (ulong)(local_15c & 0x1f));
              uVar3 = uVar33;
              do {
                uVar2 = uVar41 + uVar33;
                iVar30 = (uVar42 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar45 = (int)uVar47;
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar30 + (uVar2 >> 5)) * iVar45) * 8);
                uVar2 = uVar2 & 0x1f | (uVar42 & 0x1f) << 5;
                uVar31 = (**ppcVar35)(ppcVar35,uVar2,0,*(undefined4 *)(param_3 + 0x3c));
                piVar37 = (int *)(param_6 + 4);
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar47 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar34 != 2) goto LAB_007c2ce4;
LAB_007c2d04:
                  uVar2 = uVar31 >> (ulong)(uVar4 & 0x1f) & uVar13;
                  if (((int)uVar2 < iVar28) || (iVar6 < (int)uVar2)) {
                    if (DVar10 != (DensityMapFilter)0x0) goto LAB_007c2d30;
                  }
                  else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007c2d30:
                    if ((uVar7 == 0) || ((uVar2 & uVar7) != 0)) {
                      uVar39 = 0;
                      uVar33 = uVar25 * (uVar23 * (uVar19 << (ulong)(local_160 & 0x1f)) +
                                        (uVar24 << (ulong)(local_128 & 0x1f)));
                      lVar38 = *(long *)param_4;
                      goto LAB_007c2dac;
                    }
                  }
                }
                else {
                  uVar44 = 1;
                  puVar43 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar35 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar45 * (iVar30 + (uVar3 >> 5)) + (int)uVar44) * 8);
                    iVar32 = (**ppcVar35)(ppcVar35,uVar2,0,*puVar43);
                    puVar1 = puVar43 + -1;
                    uVar44 = uVar44 + 1;
                    uVar47 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar43 = puVar43 + 2;
                    uVar31 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar31;
                  } while (uVar44 < uVar47);
                  if (iVar34 == 2) goto LAB_007c2d04;
LAB_007c2ce4:
                  if ((iVar34 == 0) != ((uVar31 & uVar14) != uVar5)) goto LAB_007c2d04;
                }
                uVar41 = uVar41 + 1;
                uVar3 = uVar3 + 1;
              } while (uVar41 != uVar29);
              uVar39 = uVar39 + 1;
            } while (uVar39 != uVar20);
LAB_007c2b8c:
            *piVar37 = *piVar37 + 1;
LAB_007c2b98:
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)(param_5 + 0x5c));
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar29 = 0;
    if (uVar20 != 0) {
      uVar29 = uVar18 / uVar20;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = uVar19 / uVar21;
    }
    uVar49 = NEON_cnt((ulong)uVar29,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar29 & 0xffff0000) != 0;
      uVar21 = uVar29 >> 0x10;
      if (!bVar17) {
        uVar21 = uVar29;
      }
      uVar39 = (uint)bVar17;
      uVar29 = uVar39 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar29 = uVar39 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar29 | 4;
      uVar39 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar29;
        uVar39 = uVar27;
      }
      uVar29 = uVar21 | 2;
      uVar27 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar29 = uVar21;
        uVar27 = uVar39;
      }
      uVar21 = (uVar27 + uVar29) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar20,1);
    uVar29 = 0;
    if (uVar23 != 0) {
      uVar29 = uVar18 / uVar23;
    }
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar20 & 0xffff0000) != 0;
      uVar18 = uVar20 >> 0x10;
      if (!bVar17) {
        uVar18 = uVar20;
      }
      uVar39 = (uint)bVar17;
      uVar20 = uVar39 << 4 | 8;
      uVar27 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar20 = uVar39 << 4;
        uVar27 = uVar18;
      }
      uVar18 = uVar20 | 4;
      uVar39 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar18 = uVar20;
        uVar39 = uVar27;
      }
      uVar20 = uVar18 | 2;
      uVar27 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar20 = uVar18;
        uVar27 = uVar39;
      }
      local_c8 = (uVar27 + uVar20) - 1;
    }
    else {
      local_c8 = 0;
    }
    uVar18 = 0;
    if (uVar24 != 0) {
      uVar18 = uVar19 / uVar24;
    }
    uVar49 = NEON_cnt((ulong)uVar29,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar29 & 0xffff0000) != 0;
      uVar19 = uVar29 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar29;
      }
      uVar29 = (uint)bVar17;
      uVar20 = uVar29 << 4 | 8;
      uVar24 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar20 = uVar29 << 4;
        uVar24 = uVar19;
      }
      uVar19 = uVar20 | 4;
      uVar29 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar19 = uVar20;
        uVar29 = uVar24;
      }
      uVar20 = uVar19 | 2;
      uVar24 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar20 = uVar19;
        uVar24 = uVar29;
      }
      local_94 = (uVar24 + uVar20) - 1;
    }
    else {
      local_94 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar18,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar17 = (uVar18 & 0xffff0000) != 0;
      uVar19 = uVar18 >> 0x10;
      if (!bVar17) {
        uVar19 = uVar18;
      }
      uVar24 = (uint)bVar17;
      uVar18 = uVar24 << 4 | 8;
      uVar20 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar18 = uVar24 << 4;
        uVar20 = uVar19;
      }
      uVar19 = uVar18 | 4;
      uVar24 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar19 = uVar18;
        uVar24 = uVar20;
      }
      uVar18 = uVar19 | 2;
      uVar20 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar18 = uVar19;
        uVar20 = uVar24;
      }
      local_cc = (uVar20 + uVar18) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar18 = *(uint *)(param_5 + 0x48);
    if (uVar18 < *(uint *)(param_5 + 0x4c)) {
      piVar37 = (int *)(param_6 + 4);
      local_a8 = ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffff;
      do {
        ParallelogramHelper::startXIteration(param_5,uVar18);
        uVar19 = *(uint *)(param_5 + 0x58);
        if (uVar19 < *(uint *)(param_5 + 0x5c)) {
          uVar20 = uVar18 >> (ulong)(local_c8 & 0x1f);
          do {
            uVar24 = uVar19 >> (ulong)(uVar21 & 0x1f);
            uVar29 = (((uVar20 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar24 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar35 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar29 * 8);
            uVar24 = uVar24 & 0x1f | (uVar20 & 0x1f) << 5;
            uVar27 = (**ppcVar35)(ppcVar35,uVar24,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar47 = 1;
              puVar43 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar35 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar29 + (int)uVar47) * 8);
                iVar28 = (**ppcVar35)(ppcVar35,uVar24,0,*puVar43);
                puVar1 = puVar43 + -1;
                uVar47 = uVar47 + 1;
                puVar43 = puVar43 + 2;
                uVar27 = iVar28 << (ulong)(*puVar1 & 0x1f) | uVar27;
              } while (uVar47 < *(uint *)(param_3 + 0x34));
            }
            piVar36 = piVar37;
            if ((((iVar34 == 2) || ((iVar34 == 0) != ((uVar27 & uVar14) != uVar5))) &&
                (DVar10 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar27 >> (ulong)(uVar4 & 0x1f) & uVar13 & uVar7) != 0)))) {
              lVar40 = *(long *)param_4;
              uVar24 = ((uVar19 >> (ulong)(local_94 & 0x1f)) +
                       (uVar18 >> (ulong)(local_cc & 0x1f)) * uVar23) * uVar25;
              uVar47 = (ulong)(uVar24 >> 3) & 0xffff;
              lVar38 = *(long *)(lVar40 + (ulong)(uVar24 >> 0x13) * 8);
              if ((uint)uVar47 < 0xfffd) {
                uVar29 = *(uint *)(lVar38 + uVar47);
              }
              else {
                uVar29 = (uVar24 >> 3) + 1;
                uVar27 = (uVar24 >> 3) + 2;
                uVar29 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar40 + (ulong)(uVar27 >> 0x10) * 8) +
                                         ((ulong)uVar27 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar40 + (ulong)(uVar29 >> 0x10) * 8) +
                                                  ((ulong)uVar29 & 0xffff)),
                                                 *(undefined *)(lVar38 + uVar47)));
              }
              uVar24 = uVar29 >> (ulong)(uVar24 & 7) & local_a8;
              if (((iVar8 != 2) && ((iVar8 == 0) == ((uVar24 & uVar16) != uVar9))) ||
                 ((DVar11 == (DensityMapFilter)0x0 ||
                  ((uVar26 != 0 && ((uVar24 >> (ulong)(uVar22 & 0x1f) & uVar15 & uVar26) == 0))))))
              goto LAB_007c2768;
              iVar28 = *(int *)(param_2 + 0x34);
              iVar6 = (uVar18 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar35 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar6 + (uVar19 >> 5)) * iVar28) * 8
                          );
              uVar24 = uVar19 & 0x1f | (uVar18 & 0x1f) << 5;
              uVar29 = (**ppcVar35)(ppcVar35,uVar24,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar47 = 1;
                puVar43 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar28 * (iVar6 + (uVar19 >> 5)) + (int)uVar47) * 8);
                  iVar30 = (**ppcVar35)(ppcVar35,uVar24,0,*puVar43);
                  puVar1 = puVar43 + -1;
                  uVar47 = uVar47 + 1;
                  puVar43 = puVar43 + 2;
                  uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                } while (uVar47 < *(uint *)(param_2 + 0x34));
              }
              uVar24 = uVar29 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar24;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar29;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar29)))) {
                if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
                  GVar12 = param_6[0x34];
joined_r0x007c28bc:
                  if (GVar12 == (GetDensityProcessor)0x0) goto LAB_007c2774;
                }
                else {
                  GVar12 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar24) goto joined_r0x007c28bc;
                  if (GVar12 != (GetDensityProcessor)0x0) goto LAB_007c2774;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar24) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar24 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar36 = (int *)(param_6 + 8);
                  goto LAB_007c2768;
                }
              }
            }
            else {
LAB_007c2768:
              *piVar36 = *piVar36 + 1;
            }
LAB_007c2774:
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(param_5 + 0x5c));
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c2dac:
  uVar41 = 0;
  uVar3 = uVar33;
LAB_007c2dd0:
  uVar47 = (ulong)(uVar3 >> 3) & 0xffff;
  lVar40 = *(long *)(lVar38 + (ulong)(uVar3 >> 0x13) * 8);
  if ((uint)uVar47 < 0xfffd) {
    uVar42 = *(uint *)(lVar40 + uVar47);
  }
  else {
    uVar42 = (uVar3 >> 3) + 1;
    uVar2 = (uVar3 >> 3) + 2;
    uVar42 = (uint)CONCAT12(*(undefined *)
                             (*(long *)(lVar38 + (ulong)(uVar2 >> 0x10) * 8) +
                             ((ulong)uVar2 & 0xffff)),
                            CONCAT11(*(undefined *)
                                      (*(long *)(lVar38 + (ulong)(uVar42 >> 0x10) * 8) +
                                      ((ulong)uVar42 & 0xffff)),*(undefined *)(lVar40 + uVar47)));
  }
  uVar42 = uVar42 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
  if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar42 & uVar16) != uVar9))) ||
      (DVar11 != (DensityMapFilter)0x0)) ||
     ((uVar26 != 0 && ((uVar42 >> (ulong)(uVar22 & 0x1f) & uVar15 & uVar26) == 0))))
  goto LAB_007c2dbc;
  iVar30 = *(int *)(param_2 + 0x34);
  iVar45 = (uVar19 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar35 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar45 + (uVar24 >> 5)) * iVar30) * 8)
  ;
  uVar39 = uVar24 & 0x1f | (uVar19 & 0x1f) << 5;
  uVar33 = (**ppcVar35)(ppcVar35,uVar39,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar47 = 1;
    puVar43 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar35 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar30 * (iVar45 + (uVar24 >> 5)) + (int)uVar47) * 8);
      iVar32 = (**ppcVar35)(ppcVar35,uVar39,0,*puVar43);
      puVar1 = puVar43 + -1;
      uVar47 = uVar47 + 1;
      puVar43 = puVar43 + 2;
      uVar33 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar33;
    } while (uVar47 < *(uint *)(param_2 + 0x34));
  }
  uVar39 = uVar33 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar39;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar33;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar33)))) {
    if ((int)uVar39 < *(int *)(param_6 + 0x2c)) {
      GVar12 = param_6[0x34];
    }
    else {
      GVar12 = param_6[0x34];
    }
    if ((GVar12 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar39) == 0))))
    goto LAB_007c2b98;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar39 &
         ((int)(*(int *)(param_6 + 0xc) + uVar39) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar37 = (int *)(param_6 + 8);
    goto LAB_007c2b8c;
  }
  goto LAB_007c2b98;
LAB_007c2dbc:
  uVar41 = uVar41 + 1;
  uVar3 = uVar3 + uVar25;
  if (uVar41 == uVar27) goto LAB_007c2d94;
  goto LAB_007c2dd0;
LAB_007c2d94:
  uVar39 = uVar39 + 1;
  uVar33 = uVar33 + uVar23 * uVar25;
  if (uVar39 == uVar18) goto LAB_007c2b8c;
  goto LAB_007c2dac;
}


