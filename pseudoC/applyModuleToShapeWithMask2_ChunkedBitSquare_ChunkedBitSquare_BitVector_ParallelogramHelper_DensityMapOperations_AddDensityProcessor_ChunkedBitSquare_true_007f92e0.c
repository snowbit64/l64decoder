// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
// Entry Point: 007f92e0
// Size: 4312 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ChunkedBitSquare * param_3, BitVector * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, ChunkedBitSquare,
   BitVector, ParallelogramHelper, DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>
   >(IDensityPixelSource*, ChunkedBitSquare*, ChunkedBitSquare*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<ChunkedBitSquare, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ChunkedBitSquare *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,AddDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  DensityMapFilter DVar10;
  DensityMapFilter DVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  code **ppcVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  ulong uVar42;
  undefined4 *puVar43;
  uint *puVar44;
  long *plVar45;
  ulong uVar46;
  undefined2 uVar47;
  undefined8 uVar48;
  uint local_170;
  uint local_16c;
  uint local_154;
  uint local_14c;
  uint local_130;
  uint local_12c;
  uint local_e0;
  uint local_a0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar17 = tpidr_el0;
  local_70 = *(long *)(lVar17 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar45 = *(long **)param_7;
  local_88 = (uint *)param_2;
  uVar19 = (**(code **)(*plVar45 + 0x18))(plVar45);
  uVar20 = (**(code **)(*plVar45 + 0x20))(plVar45);
  (**(code **)(*plVar45 + 0x30))(plVar45);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar21 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar45 = *(long **)param_8;
  iVar27 = *(int *)(param_7 + 0x1c);
  iVar28 = *(int *)(param_7 + 0x18);
  DVar10 = param_7[0x20];
  iVar33 = *(int *)(param_7 + 8);
  uVar6 = *(uint *)(param_7 + 0xc);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar21 & 0x1f));
  uVar22 = (**(code **)(*plVar45 + 0x18))(plVar45);
  uVar23 = (**(code **)(*plVar45 + 0x20))(plVar45);
  uVar24 = (**(code **)(*plVar45 + 0x30))(plVar45);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar21 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  uVar9 = *(uint *)(param_8 + 0xc);
  DVar11 = param_8[0x20];
  uVar16 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar25 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar19) || (local_94 < uVar23)) || (local_94 < uVar20)) || (local_98 < uVar22))
  {
    if (((uVar19 < local_98) || (uVar23 < local_94)) || ((uVar20 < local_94 || (uVar22 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar33 != 0
         )) {
                    /* try { // try from 007fa37c to 007fa387 has its CatchHandler @ 007fa3b8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar19,(ulong)uVar20,(ulong)uVar22,(ulong)uVar23,(ulong)local_98,
                         (ulong)local_94);
      bVar18 = false;
      goto LAB_007fa334;
    }
    uVar35 = 0;
    if (local_98 != 0) {
      uVar35 = uVar19 / local_98;
    }
    uVar19 = 0;
    if (local_94 != 0) {
      uVar19 = uVar20 / local_94;
    }
    uVar48 = NEON_cnt((ulong)uVar35,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar35 & 0xffff0000) != 0;
      uVar20 = uVar35 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar35;
      }
      uVar38 = (uint)bVar18;
      uVar37 = uVar38 << 4 | 8;
      uVar26 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar37 = uVar38 << 4;
        uVar26 = uVar20;
      }
      uVar20 = uVar37 | 4;
      uVar38 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar20 = uVar37;
        uVar38 = uVar26;
      }
      uVar37 = uVar20 | 2;
      uVar26 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar37 = uVar20;
        uVar26 = uVar38;
      }
      local_14c = (uVar26 + uVar37) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar19,1);
    uVar20 = 0;
    if (local_98 != 0) {
      uVar20 = uVar22 / local_98;
    }
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar37 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar37 = uVar19;
      }
      uVar39 = (uint)bVar18;
      uVar26 = uVar39 << 4 | 8;
      uVar38 = uVar37 >> 8;
      if (uVar37 < 0x100) {
        uVar26 = uVar39 << 4;
        uVar38 = uVar37;
      }
      uVar37 = uVar26 | 4;
      uVar39 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar37 = uVar26;
        uVar39 = uVar38;
      }
      uVar26 = uVar37 | 2;
      uVar38 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar26 = uVar37;
        uVar38 = uVar39;
      }
      local_16c = (uVar38 + uVar26) - 1;
    }
    else {
      local_16c = 0;
    }
    uVar37 = 0;
    if (local_94 != 0) {
      uVar37 = uVar23 / local_94;
    }
    uVar48 = NEON_cnt((ulong)uVar20,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar20 & 0xffff0000) != 0;
      uVar23 = uVar20 >> 0x10;
      if (!bVar18) {
        uVar23 = uVar20;
      }
      uVar39 = (uint)bVar18;
      uVar26 = uVar39 << 4 | 8;
      uVar38 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar26 = uVar39 << 4;
        uVar38 = uVar23;
      }
      uVar23 = uVar26 | 4;
      uVar39 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar23 = uVar26;
        uVar39 = uVar38;
      }
      uVar26 = uVar23 | 2;
      uVar38 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar26 = uVar23;
        uVar38 = uVar39;
      }
      local_154 = (uVar38 + uVar26) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar37,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar37 & 0xffff0000) != 0;
      uVar23 = uVar37 >> 0x10;
      if (!bVar18) {
        uVar23 = uVar37;
      }
      uVar39 = (uint)bVar18;
      uVar26 = uVar39 << 4 | 8;
      uVar38 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar26 = uVar39 << 4;
        uVar38 = uVar23;
      }
      uVar23 = uVar26 | 4;
      uVar39 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar23 = uVar26;
        uVar39 = uVar38;
      }
      uVar26 = uVar23 | 2;
      uVar38 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar26 = uVar23;
        uVar38 = uVar39;
      }
      local_170 = (uVar38 + uVar26) - 1;
    }
    else {
      local_170 = 0;
    }
    uVar23 = *(uint *)(param_5 + 0x48);
    uVar26 = *(uint *)(param_5 + 0x4c);
    if (uVar23 < uVar26) {
      if (uVar35 < 2) {
        uVar35 = 1;
      }
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar37 < 2) {
        uVar37 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar23);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar38 = 0;
            uVar39 = uVar26 << (ulong)(local_14c & 0x1f);
            do {
              uVar31 = 0;
              uVar46 = (ulong)*(uint *)(param_3 + 0x34);
              uVar40 = uVar38 + (uVar23 << (ulong)(local_16c & 0x1f));
              uVar4 = uVar39;
              do {
                uVar3 = uVar31 + uVar39;
                iVar12 = (uVar40 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar32 = (int)uVar46;
                ppcVar34 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar12 + (uVar3 >> 5)) * iVar32) * 8);
                uVar3 = uVar3 & 0x1f | (uVar40 & 0x1f) << 5;
                uVar29 = (**ppcVar34)(ppcVar34,uVar3,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar46 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar33 != 2) goto LAB_007f9fe8;
LAB_007fa008:
                  puVar1 = local_88;
                  uVar3 = uVar29 >> (ulong)(uVar5 & 0x1f) & uVar13;
                  if (((int)uVar3 < iVar28) || (iVar27 < (int)uVar3)) {
                    if (DVar10 != (DensityMapFilter)0x0) goto LAB_007fa034;
                  }
                  else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007fa034:
                    if ((uVar7 == 0) || ((uVar3 & uVar7) != 0)) {
                      uVar38 = 0;
                      uVar39 = uVar24 * (uVar22 * (uVar23 << (ulong)(local_170 & 0x1f)) +
                                        (uVar26 << (ulong)(local_154 & 0x1f)));
                      lVar36 = *(long *)param_4;
                      goto LAB_007fa08c;
                    }
                  }
                }
                else {
                  uVar42 = 1;
                  puVar43 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar34 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar32 * (iVar12 + (uVar4 >> 5)) + (int)uVar42) * 8);
                    iVar30 = (**ppcVar34)(ppcVar34,uVar3,0,*puVar43);
                    puVar1 = puVar43 + -1;
                    uVar42 = uVar42 + 1;
                    uVar46 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar43 = puVar43 + 2;
                    uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                  } while (uVar42 < uVar46);
                  if (iVar33 == 2) goto LAB_007fa008;
LAB_007f9fe8:
                  if ((iVar33 == 0) != ((uVar29 & uVar14) != uVar6)) goto LAB_007fa008;
                }
                uVar31 = uVar31 + 1;
                uVar4 = uVar4 + 1;
              } while (uVar31 != uVar35);
              uVar38 = uVar38 + 1;
            } while (uVar38 != uVar19);
LAB_007f9e80:
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007f9e94:
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(param_5 + 0x5c));
        }
        uVar26 = *(uint *)(param_5 + 0x4c);
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar26);
    }
  }
  else {
    uVar35 = 0;
    if (uVar19 != 0) {
      uVar35 = local_98 / uVar19;
    }
    uVar19 = 0;
    if (uVar20 != 0) {
      uVar19 = local_94 / uVar20;
    }
    uVar48 = NEON_cnt((ulong)uVar35,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar35 & 0xffff0000) != 0;
      uVar20 = uVar35 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar35;
      }
      uVar26 = (uint)bVar18;
      uVar35 = uVar26 << 4 | 8;
      uVar37 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar35 = uVar26 << 4;
        uVar37 = uVar20;
      }
      uVar20 = uVar35 | 4;
      uVar26 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar20 = uVar35;
        uVar26 = uVar37;
      }
      uVar35 = uVar20 | 2;
      uVar37 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar35 = uVar20;
        uVar37 = uVar26;
      }
      local_a0 = (uVar37 + uVar35) - 1;
    }
    else {
      local_a0 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar19,1);
    uVar20 = 0;
    if (uVar22 != 0) {
      uVar20 = local_98 / uVar22;
    }
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar35 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar35 = uVar19;
      }
      uVar26 = (uint)bVar18;
      uVar19 = uVar26 << 4 | 8;
      uVar37 = uVar35 >> 8;
      if (uVar35 < 0x100) {
        uVar19 = uVar26 << 4;
        uVar37 = uVar35;
      }
      uVar35 = uVar19 | 4;
      uVar26 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar35 = uVar19;
        uVar26 = uVar37;
      }
      uVar19 = uVar35 | 2;
      uVar37 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar19 = uVar35;
        uVar37 = uVar26;
      }
      local_12c = (uVar37 + uVar19) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar19 = 0;
    if (uVar23 != 0) {
      uVar19 = local_94 / uVar23;
    }
    uVar48 = NEON_cnt((ulong)uVar20,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar20 & 0xffff0000) != 0;
      uVar23 = uVar20 >> 0x10;
      if (!bVar18) {
        uVar23 = uVar20;
      }
      uVar37 = (uint)bVar18;
      uVar20 = uVar37 << 4 | 8;
      uVar35 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar20 = uVar37 << 4;
        uVar35 = uVar23;
      }
      uVar23 = uVar20 | 4;
      uVar37 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar23 = uVar20;
        uVar37 = uVar35;
      }
      uVar20 = uVar23 | 2;
      uVar35 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar20 = uVar23;
        uVar35 = uVar37;
      }
      local_e0 = (uVar35 + uVar20) - 1;
    }
    else {
      local_e0 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar19,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar20 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar19;
      }
      uVar35 = (uint)bVar18;
      uVar19 = uVar35 << 4 | 8;
      uVar23 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar19 = uVar35 << 4;
        uVar23 = uVar20;
      }
      uVar20 = uVar19 | 4;
      uVar35 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar20 = uVar19;
        uVar35 = uVar23;
      }
      uVar19 = uVar20 | 2;
      uVar23 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar19 = uVar20;
        uVar23 = uVar35;
      }
      local_130 = (uVar23 + uVar19) - 1;
    }
    else {
      local_130 = 0;
    }
    uVar19 = *(uint *)(param_5 + 0x48);
    uVar26 = *(uint *)(param_5 + 0x4c);
    if (uVar19 < uVar26) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar19);
        uVar20 = *(uint *)(param_5 + 0x58);
        if (uVar20 < *(uint *)(param_5 + 0x5c)) {
          uVar23 = uVar19 >> (ulong)(local_12c & 0x1f);
          do {
            uVar35 = uVar20 >> (ulong)(local_a0 & 0x1f);
            uVar37 = (((uVar23 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar35 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar34 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar37 * 8);
            uVar35 = uVar35 & 0x1f | (uVar23 & 0x1f) << 5;
            uVar26 = (**ppcVar34)(ppcVar34,uVar35,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar46 = 1;
              puVar43 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar34 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar37 + (int)uVar46) * 8);
                iVar27 = (**ppcVar34)(ppcVar34,uVar35,0,*puVar43);
                puVar1 = puVar43 + -1;
                uVar46 = uVar46 + 1;
                puVar43 = puVar43 + 2;
                uVar26 = iVar27 << (ulong)(*puVar1 & 0x1f) | uVar26;
              } while (uVar46 < *(uint *)(param_3 + 0x34));
            }
            puVar1 = local_88;
            if (((iVar33 == 2) || ((iVar33 == 0) != ((uVar26 & uVar14) != uVar6))) &&
               ((DVar10 == (DensityMapFilter)0x0 &&
                ((uVar7 == 0 || ((uVar26 >> (ulong)(uVar5 & 0x1f) & uVar13 & uVar7) != 0)))))) {
              lVar41 = *(long *)param_4;
              uVar35 = ((uVar20 >> (ulong)(local_e0 & 0x1f)) +
                       (uVar19 >> (ulong)(local_130 & 0x1f)) * uVar22) * uVar24;
              uVar46 = (ulong)(uVar35 >> 3) & 0xffff;
              lVar36 = *(long *)(lVar41 + (ulong)(uVar35 >> 0x13) * 8);
              if ((uint)uVar46 < 0xfffd) {
                uVar37 = *(uint *)(lVar36 + uVar46);
              }
              else {
                uVar37 = (uVar35 >> 3) + 1;
                uVar26 = (uVar35 >> 3) + 2;
                uVar37 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar41 + (ulong)(uVar26 >> 0x10) * 8) +
                                         ((ulong)uVar26 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar41 + (ulong)(uVar37 >> 0x10) * 8) +
                                                  ((ulong)uVar37 & 0xffff)),
                                                 *(undefined *)(lVar36 + uVar46)));
              }
              uVar35 = uVar37 >> (ulong)(uVar35 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
              if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar35 & uVar16) != uVar9))) ||
                  (DVar11 != (DensityMapFilter)0x0)) ||
                 ((uVar25 != 0 && ((uVar35 >> (ulong)(uVar21 & 0x1f) & uVar15 & uVar25) == 0))))
              goto LAB_007f9c04;
              uVar35 = local_88[0xd];
              iVar27 = (uVar19 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar34 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar27 + (uVar20 >> 5)) * uVar35) * 8
                          );
              uVar37 = uVar20 & 0x1f | (uVar19 & 0x1f) << 5;
              local_80 = uVar20;
              uStack_7c = uVar19;
              uVar26 = (**ppcVar34)(ppcVar34,uVar37,0,local_88[0xf]);
              if (1 < puVar1[0xd]) {
                uVar46 = 1;
                puVar44 = puVar1 + 0x11;
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(puVar1 + 10) +
                              (ulong)(uVar35 * (iVar27 + (uVar20 >> 5)) + (int)uVar46) * 8);
                  iVar28 = (**ppcVar34)(ppcVar34,uVar37,0,*puVar44);
                  puVar2 = puVar44 + -1;
                  uVar46 = uVar46 + 1;
                  puVar44 = puVar44 + 2;
                  uVar26 = iVar28 << (ulong)(*puVar2 & 0x1f) | uVar26;
                } while (uVar46 < puVar1[0xd]);
              }
              local_78 = uVar26;
              DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
                        ((AddDensityProcessor<ChunkedBitSquare,true> *)param_6,
                         (HelperSource *)&local_98);
              uVar35 = local_78;
              puVar1 = local_88;
              if (uVar26 != local_78) {
                uVar37 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar26 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar41 = (ulong)uVar26 * 8;
                lVar36 = *(long *)(*(long *)(local_88 + 10) + lVar41);
                uVar48 = (**(code **)(lVar36 + 8))(lVar36,uVar37,0,local_88[0xf],local_78);
                *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
                if (1 < puVar1[0xd]) {
                  puVar44 = puVar1 + 0x11;
                  uVar46 = 1;
                  do {
                    lVar41 = (ulong)(uVar26 + (int)uVar46) * 8;
                    lVar36 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
                    uVar48 = (**(code **)(lVar36 + 8))
                                       (lVar36,uVar37,0,*puVar44,
                                        uVar35 >> (ulong)(puVar44[-1] & 0x1f));
                    uVar46 = uVar46 + 1;
                    puVar44 = puVar44 + 2;
                    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
                  } while (uVar46 < puVar1[0xd]);
                }
              }
            }
            else {
LAB_007f9c04:
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(uint *)(param_5 + 0x5c));
        }
        uVar26 = *(uint *)(param_5 + 0x4c);
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar26);
    }
  }
  bVar18 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar26,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_007fa334:
  if (*(long *)(lVar17 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar18;
LAB_007fa08c:
  uVar31 = 0;
  uVar4 = uVar39;
LAB_007fa0cc:
  uVar46 = (ulong)(uVar4 >> 3) & 0xffff;
  lVar41 = *(long *)(lVar36 + (ulong)(uVar4 >> 0x13) * 8);
  if ((uint)uVar46 < 0xfffd) {
    uVar40 = *(uint *)(lVar41 + uVar46);
  }
  else {
    uVar40 = (uVar4 >> 3) + 1;
    uVar3 = (uVar4 >> 3) + 2;
    uVar40 = (uint)CONCAT12(*(undefined *)
                             (*(long *)(lVar36 + (ulong)(uVar3 >> 0x10) * 8) +
                             ((ulong)uVar3 & 0xffff)),
                            CONCAT11(*(undefined *)
                                      (*(long *)(lVar36 + (ulong)(uVar40 >> 0x10) * 8) +
                                      ((ulong)uVar40 & 0xffff)),*(undefined *)(lVar41 + uVar46)));
  }
  uVar40 = uVar40 >> (ulong)(uVar4 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
  if ((((iVar8 != 2) && ((iVar8 == 0) == ((uVar40 & uVar16) != uVar9))) ||
      (DVar11 != (DensityMapFilter)0x0)) ||
     ((uVar25 != 0 && ((uVar40 >> (ulong)(uVar21 & 0x1f) & uVar15 & uVar25) == 0))))
  goto LAB_007fa0bc;
  uVar38 = local_88[0xd];
  iVar12 = (uVar23 >> 5) << (ulong)(*local_88 & 0x1f);
  ppcVar34 = *(code ***)(*(long *)(local_88 + 10) + (ulong)((iVar12 + (uVar26 >> 5)) * uVar38) * 8);
  uVar39 = uVar26 & 0x1f | (uVar23 & 0x1f) << 5;
  local_80 = uVar26;
  uStack_7c = uVar23;
  uVar31 = (**ppcVar34)(ppcVar34,uVar39,0,local_88[0xf]);
  if (1 < puVar1[0xd]) {
    puVar44 = puVar1 + 0x11;
    uVar46 = 1;
    do {
      ppcVar34 = *(code ***)
                  (*(long *)(puVar1 + 10) +
                  (ulong)(uVar38 * (iVar12 + (uVar26 >> 5)) + (int)uVar46) * 8);
      iVar32 = (**ppcVar34)(ppcVar34,uVar39,0,*puVar44);
      puVar2 = puVar44 + -1;
      uVar46 = uVar46 + 1;
      puVar44 = puVar44 + 2;
      uVar31 = iVar32 << (ulong)(*puVar2 & 0x1f) | uVar31;
    } while (uVar46 < puVar1[0xd]);
  }
  local_78 = uVar31;
  DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
            ((AddDensityProcessor<ChunkedBitSquare,true> *)param_6,(HelperSource *)&local_98);
  uVar38 = local_78;
  puVar1 = local_88;
  if (uVar31 != local_78) {
    uVar39 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
    uVar31 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) * local_88[0xd];
    lVar41 = (ulong)uVar31 * 8;
    lVar36 = *(long *)(*(long *)(local_88 + 10) + lVar41);
    uVar48 = (**(code **)(lVar36 + 8))(lVar36,uVar39,0,local_88[0xf],local_78);
    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
    if (1 < puVar1[0xd]) {
      puVar44 = puVar1 + 0x11;
      uVar46 = 1;
      do {
        lVar41 = (ulong)(uVar31 + (int)uVar46) * 8;
        lVar36 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
        uVar48 = (**(code **)(lVar36 + 8))
                           (lVar36,uVar39,0,*puVar44,uVar38 >> (ulong)(puVar44[-1] & 0x1f));
        uVar46 = uVar46 + 1;
        puVar44 = puVar44 + 2;
        *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
      } while (uVar46 < puVar1[0xd]);
    }
  }
  goto LAB_007f9e94;
LAB_007fa0bc:
  uVar31 = uVar31 + 1;
  uVar4 = uVar4 + uVar24;
  if (uVar31 == uVar20) goto LAB_007fa074;
  goto LAB_007fa0cc;
LAB_007fa074:
  uVar38 = uVar38 + 1;
  uVar39 = uVar39 + uVar22 * uVar24;
  if (uVar38 == uVar37) goto LAB_007f9e80;
  goto LAB_007fa08c;
}


