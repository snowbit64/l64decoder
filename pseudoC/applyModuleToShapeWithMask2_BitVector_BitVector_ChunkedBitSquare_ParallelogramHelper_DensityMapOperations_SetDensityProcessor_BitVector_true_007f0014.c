// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>
// Entry Point: 007f0014
// Size: 4000 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, SetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, BitVector, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::SetDensityProcessor<BitVector, true>
   >(IDensityPixelSource*, BitVector*, BitVector*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::SetDensityProcessor<BitVector, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,SetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  DensityMapFilter DVar11;
  DensityMapFilter DVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
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
  int iVar32;
  code **ppcVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  uint uVar42;
  int iVar43;
  undefined4 *puVar44;
  uint uVar45;
  long *plVar46;
  undefined2 uVar47;
  undefined8 uVar48;
  uint local_160;
  uint local_15c;
  uint local_148;
  uint local_144;
  uint local_fc;
  uint local_f8;
  uint local_98;
  uint local_94;
  uint local_90;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar19 = tpidr_el0;
  local_70 = *(long *)(lVar19 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar46 = *(long **)param_7;
  local_88 = (long *)param_2;
  uVar21 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar22 = (**(code **)(*plVar46 + 0x20))(plVar46);
  uVar23 = (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar32 = *(int *)(param_7 + 8);
  uVar4 = *(uint *)(param_7 + 0xc);
  plVar46 = *(long **)param_8;
  iVar29 = *(int *)(param_7 + 0x18);
  DVar11 = param_7[0x20];
  uVar5 = *(uint *)(param_7 + 0x24);
  iVar6 = *(int *)(param_7 + 0x1c);
  uVar15 = ~(-1 << (ulong)(uVar24 & 0x1f));
  uVar25 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar26 = (**(code **)(*plVar46 + 0x20))(plVar46);
  (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar7 = *(int *)(param_8 + 8);
  iVar8 = *(int *)(param_8 + 0x1c);
  uVar9 = *(uint *)(param_8 + 0xc);
  iVar10 = *(int *)(param_8 + 0x18);
  uVar17 = ~(-1 << (ulong)(uVar27 & 0x1f));
  DVar12 = param_8[0x20];
  uVar27 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar21) || (local_94 < uVar26)) || (local_94 < uVar22)) || (local_98 < uVar25))
  {
    if (((uVar21 < local_98) || (uVar26 < local_94)) || ((uVar22 < local_94 || (uVar25 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar32 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar32 != 0
         )) {
                    /* try { // try from 007f0f78 to 007f0f83 has its CatchHandler @ 007f0fb4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar21,(ulong)uVar22,(ulong)uVar25,(ulong)uVar26,(ulong)local_98,
                         (ulong)local_94);
      bVar20 = false;
      goto LAB_007f0f30;
    }
    uVar42 = 0;
    if (local_94 != 0) {
      uVar42 = uVar22 / local_94;
    }
    uVar22 = 0;
    if (local_98 != 0) {
      uVar22 = uVar21 / local_98;
    }
    uVar48 = NEON_cnt((ulong)uVar22,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar22 & 0xffff0000) != 0;
      uVar18 = uVar22 >> 0x10;
      if (!bVar20) {
        uVar18 = uVar22;
      }
      uVar28 = (uint)bVar20;
      uVar34 = uVar28 << 4 | 8;
      uVar37 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar34 = uVar28 << 4;
        uVar37 = uVar18;
      }
      uVar18 = uVar34 | 4;
      uVar28 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar18 = uVar34;
        uVar28 = uVar37;
      }
      uVar34 = uVar18 | 2;
      uVar37 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar34 = uVar18;
        uVar37 = uVar28;
      }
      local_144 = (uVar37 + uVar34) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar18 = 0;
    if (local_98 != 0) {
      uVar18 = uVar25 / local_98;
    }
    uVar48 = NEON_cnt((ulong)uVar42,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar42 & 0xffff0000) != 0;
      uVar25 = uVar42 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar42;
      }
      uVar28 = (uint)bVar20;
      uVar34 = uVar28 << 4 | 8;
      uVar37 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar34 = uVar28 << 4;
        uVar37 = uVar25;
      }
      uVar25 = uVar34 | 4;
      uVar28 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar25 = uVar34;
        uVar28 = uVar37;
      }
      uVar34 = uVar25 | 2;
      uVar37 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar34 = uVar25;
        uVar37 = uVar28;
      }
      local_15c = (uVar37 + uVar34) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar25 = 0;
    if (local_94 != 0) {
      uVar25 = uVar26 / local_94;
    }
    uVar48 = NEON_cnt((ulong)uVar18,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar26 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar18;
      }
      uVar28 = (uint)bVar20;
      uVar34 = uVar28 << 4 | 8;
      uVar37 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar34 = uVar28 << 4;
        uVar37 = uVar26;
      }
      uVar26 = uVar34 | 4;
      uVar28 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar26 = uVar34;
        uVar28 = uVar37;
      }
      uVar34 = uVar26 | 2;
      uVar37 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar34 = uVar26;
        uVar37 = uVar28;
      }
      local_148 = (uVar37 + uVar34) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar25,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar25 & 0xffff0000) != 0;
      uVar26 = uVar25 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar25;
      }
      uVar28 = (uint)bVar20;
      uVar34 = uVar28 << 4 | 8;
      uVar37 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar34 = uVar28 << 4;
        uVar37 = uVar26;
      }
      uVar26 = uVar34 | 4;
      uVar28 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar26 = uVar34;
        uVar28 = uVar37;
      }
      uVar34 = uVar26 | 2;
      uVar37 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar34 = uVar26;
        uVar37 = uVar28;
      }
      local_160 = (uVar37 + uVar34) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    uVar34 = *(uint *)(param_5 + 0x4c);
    if (uVar26 < uVar34) {
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar42 < 2) {
        uVar42 = 1;
      }
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar34 = *(uint *)(param_5 + 0x58);
        if (uVar34 < *(uint *)(param_5 + 0x5c)) {
LAB_007f0b60:
          uVar37 = 0;
          uVar28 = uVar23 * (uVar21 * (uVar26 << (ulong)(local_15c & 0x1f)) +
                            (uVar34 << (ulong)(local_144 & 0x1f)));
          lVar35 = *(long *)param_3;
          do {
            uVar36 = 0;
            uVar45 = uVar28;
            do {
              uVar40 = (ulong)(uVar45 >> 3) & 0xffff;
              lVar39 = *(long *)(lVar35 + (ulong)(uVar45 >> 0x13) * 8);
              if ((uint)uVar40 < 0xfffd) {
                uVar38 = *(uint *)(lVar39 + uVar40);
              }
              else {
                uVar38 = (uVar45 >> 3) + 1;
                uVar2 = (uVar45 >> 3) + 2;
                uVar38 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar35 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar35 + (ulong)(uVar38 >> 0x10) * 8) +
                                                  ((ulong)uVar38 & 0xffff)),
                                                 *(undefined *)(lVar39 + uVar40)));
              }
              uVar38 = uVar38 >> (ulong)(uVar45 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
              if ((iVar32 == 2) || ((iVar32 == 0) != ((uVar38 & uVar15) != uVar4))) {
                uVar38 = uVar38 >> (ulong)(uVar3 & 0x1f) & uVar14;
                if (((int)uVar38 < iVar29) || (iVar6 < (int)uVar38)) {
                  if (DVar11 != (DensityMapFilter)0x0) goto LAB_007f0c6c;
                }
                else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007f0c6c:
                  if ((uVar5 == 0) || ((uVar38 & uVar5) != 0)) {
                    uVar28 = uVar34 << (ulong)(local_148 & 0x1f);
                    uVar37 = 0;
                    goto LAB_007f0cb8;
                  }
                }
              }
              uVar36 = uVar36 + 1;
              uVar45 = uVar45 + uVar23;
            } while (uVar36 != uVar22);
            uVar37 = uVar37 + 1;
            uVar28 = uVar28 + uVar21 * uVar23;
          } while (uVar37 != uVar42);
          goto LAB_007f0b38;
        }
LAB_007f0adc:
        uVar34 = *(uint *)(param_5 + 0x4c);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar34);
    }
  }
  else {
    uVar42 = 0;
    if (uVar21 != 0) {
      uVar42 = local_98 / uVar21;
    }
    uVar18 = 0;
    if (uVar22 != 0) {
      uVar18 = local_94 / uVar22;
    }
    uVar48 = NEON_cnt((ulong)uVar42,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar42 & 0xffff0000) != 0;
      uVar22 = uVar42 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar42;
      }
      uVar37 = (uint)bVar20;
      uVar42 = uVar37 << 4 | 8;
      uVar34 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar42 = uVar37 << 4;
        uVar34 = uVar22;
      }
      uVar22 = uVar42 | 4;
      uVar37 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar22 = uVar42;
        uVar37 = uVar34;
      }
      uVar42 = uVar22 | 2;
      uVar34 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar42 = uVar22;
        uVar34 = uVar37;
      }
      uVar22 = (uVar34 + uVar42) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar42 = 0;
    if (uVar25 != 0) {
      uVar42 = local_98 / uVar25;
    }
    uVar48 = NEON_cnt((ulong)uVar18,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar25 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar18;
      }
      uVar37 = (uint)bVar20;
      uVar18 = uVar37 << 4 | 8;
      uVar34 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar18 = uVar37 << 4;
        uVar34 = uVar25;
      }
      uVar25 = uVar18 | 4;
      uVar37 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar25 = uVar18;
        uVar37 = uVar34;
      }
      uVar18 = uVar25 | 2;
      uVar34 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar18 = uVar25;
        uVar34 = uVar37;
      }
      local_f8 = (uVar34 + uVar18) - 1;
    }
    else {
      local_f8 = 0;
    }
    uVar25 = 0;
    if (uVar26 != 0) {
      uVar25 = local_94 / uVar26;
    }
    uVar48 = NEON_cnt((ulong)uVar42,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar42 & 0xffff0000) != 0;
      uVar26 = uVar42 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar42;
      }
      uVar34 = (uint)bVar20;
      uVar42 = uVar34 << 4 | 8;
      uVar18 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar42 = uVar34 << 4;
        uVar18 = uVar26;
      }
      uVar26 = uVar42 | 4;
      uVar34 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar26 = uVar42;
        uVar34 = uVar18;
      }
      uVar42 = uVar26 | 2;
      uVar18 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar42 = uVar26;
        uVar18 = uVar34;
      }
      uVar26 = (uVar18 + uVar42) - 1;
    }
    else {
      uVar26 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar25,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar25 & 0xffff0000) != 0;
      uVar42 = uVar25 >> 0x10;
      if (!bVar20) {
        uVar42 = uVar25;
      }
      uVar34 = (uint)bVar20;
      uVar25 = uVar34 << 4 | 8;
      uVar18 = uVar42 >> 8;
      if (uVar42 < 0x100) {
        uVar25 = uVar34 << 4;
        uVar18 = uVar42;
      }
      uVar42 = uVar25 | 4;
      uVar34 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar42 = uVar25;
        uVar34 = uVar18;
      }
      uVar25 = uVar42 | 2;
      uVar18 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar25 = uVar42;
        uVar18 = uVar34;
      }
      local_fc = (uVar18 + uVar25) - 1;
    }
    else {
      local_fc = 0;
    }
    uVar25 = *(uint *)(param_5 + 0x48);
    uVar34 = *(uint *)(param_5 + 0x4c);
    if (uVar25 < uVar34) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar25);
        uVar42 = *(uint *)(param_5 + 0x58);
        if (uVar42 < *(uint *)(param_5 + 0x5c)) {
          uVar18 = uVar25 >> (ulong)(local_fc & 0x1f);
          do {
            uVar34 = ((uVar42 >> (ulong)(uVar22 & 0x1f)) +
                     (uVar25 >> (ulong)(local_f8 & 0x1f)) * uVar21) * uVar23;
            lVar39 = *(long *)param_3;
            uVar40 = (ulong)(uVar34 >> 3) & 0xffff;
            lVar35 = *(long *)(lVar39 + (ulong)(uVar34 >> 0x13) * 8);
            if ((uint)uVar40 < 0xfffd) {
              uVar37 = *(uint *)(lVar35 + uVar40);
            }
            else {
              uVar37 = (uVar34 >> 3) + 1;
              uVar28 = (uVar34 >> 3) + 2;
              uVar37 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar39 + (ulong)(uVar28 >> 0x10) * 8) +
                                       ((ulong)uVar28 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar39 + (ulong)(uVar37 >> 0x10) * 8) +
                                                ((ulong)uVar37 & 0xffff)),
                                               *(undefined *)(lVar35 + uVar40)));
            }
            uVar34 = uVar37 >> (ulong)(uVar34 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
            if ((((iVar32 == 2) || ((iVar32 == 0) != ((uVar34 & uVar15) != uVar4))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar5 == 0 || ((uVar34 >> (ulong)(uVar3 & 0x1f) & uVar14 & uVar5) != 0)))) {
              uVar34 = uVar42 >> (ulong)(uVar26 & 0x1f);
              uVar37 = (((uVar18 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar34 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar33 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar37 * 8);
              uVar34 = uVar34 & 0x1f | (uVar18 & 0x1f) << 5;
              uVar28 = (**ppcVar33)(ppcVar33,uVar34,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar40 = 1;
                puVar44 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar33 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar37 + (int)uVar40) * 8);
                  iVar29 = (**ppcVar33)(ppcVar33,uVar34,0,*puVar44);
                  puVar1 = puVar44 + -1;
                  uVar40 = uVar40 + 1;
                  puVar44 = puVar44 + 2;
                  uVar28 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar28;
                } while (uVar40 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar7 != 2) && ((iVar7 == 0) == ((uVar28 & uVar17) != uVar9))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar27 != 0 && ((uVar28 >> (ulong)(uVar24 & 0x1f) & uVar16 & uVar27) == 0))))))
              {
                iVar29 = *(int *)(param_6 + 4);
                goto LAB_007f0828;
              }
              lVar39 = *local_88;
              uVar34 = (uVar42 + local_98 * uVar25) * local_90;
              lVar35 = *(long *)(lVar39 + (ulong)(uVar34 >> 0x13) * 8);
              uVar40 = (ulong)(uVar34 >> 3) & 0xffff;
              if ((uint)uVar40 < 0xfffd) {
                uVar37 = *(uint *)(lVar35 + uVar40);
              }
              else {
                uVar37 = (uVar34 >> 3) + 1;
                uVar28 = (uVar34 >> 3) + 2;
                uVar37 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar39 + (ulong)(uVar28 >> 0x10) * 8) +
                                         ((ulong)uVar28 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar39 + (ulong)(uVar37 >> 0x10) * 8) +
                                                  ((ulong)uVar37 & 0xffff)),
                                                 *(undefined *)(lVar35 + uVar40)));
              }
              uVar34 = uVar37 >> (ulong)(uVar34 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar42;
              uStack_7c = uVar25;
              local_78 = uVar34;
              DensityMapOperations::SetDensityProcessor<BitVector,true>::process
                        ((SetDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
              if (uVar34 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
              iVar29 = *(int *)(param_6 + 4);
LAB_007f0828:
              *(int *)(param_6 + 4) = iVar29 + 1;
            }
            uVar42 = uVar42 + 1;
          } while (uVar42 < *(uint *)(param_5 + 0x5c));
        }
        uVar34 = *(uint *)(param_5 + 0x4c);
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar34);
    }
  }
  bVar20 = true;
  if (param_6[100] != (SetDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x50),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar34,*(uint *)(param_6 + 0x1c),*(uint *)(param_6 + 0x20),
               *(uint *)(param_6 + 0x68),(bool)param_6[0x65],true,true);
  }
LAB_007f0f30:
  if (*(long *)(lVar19 + 0x28) == local_70) {
    return bVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_007f0cb8:
  do {
    uVar36 = 0;
    uVar40 = (ulong)*(uint *)(param_4 + 0x34);
    uVar38 = uVar37 + (uVar26 << (ulong)(local_160 & 0x1f));
    uVar45 = uVar28;
    do {
      uVar2 = uVar36 + uVar28;
      iVar13 = (uVar38 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar43 = (int)uVar40;
      ppcVar33 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar13 + (uVar2 >> 5)) * iVar43) * 8);
      uVar2 = uVar2 & 0x1f | (uVar38 & 0x1f) << 5;
      uVar30 = (**ppcVar33)(ppcVar33,uVar2,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar40 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar7 != 2) goto LAB_007f0dc0;
LAB_007f0de0:
        uVar2 = uVar30 >> (ulong)(uVar24 & 0x1f) & uVar16;
        if (((int)uVar2 < iVar10) || (iVar8 < (int)uVar2)) {
          if (DVar12 != (DensityMapFilter)0x0) goto LAB_007f0e0c;
        }
        else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007f0e0c:
          if ((uVar27 == 0) || ((uVar2 & uVar27) != 0)) {
            lVar39 = *local_88;
            uVar37 = (uVar34 + local_98 * uVar26) * local_90;
            lVar35 = *(long *)(lVar39 + (ulong)(uVar37 >> 0x13) * 8);
            uVar40 = (ulong)(uVar37 >> 3) & 0xffff;
            if ((uint)uVar40 < 0xfffd) {
              uVar28 = *(uint *)(lVar35 + uVar40);
            }
            else {
              uVar28 = (uVar37 >> 3) + 1;
              uVar36 = (uVar37 >> 3) + 2;
              uVar28 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar39 + (ulong)(uVar36 >> 0x10) * 8) +
                                       ((ulong)uVar36 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar39 + (ulong)(uVar28 >> 0x10) * 8) +
                                                ((ulong)uVar28 & 0xffff)),
                                               *(undefined *)(lVar35 + uVar40)));
            }
            uVar37 = uVar28 >> (ulong)(uVar37 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            local_80 = uVar34;
            uStack_7c = uVar26;
            local_78 = uVar37;
            DensityMapOperations::SetDensityProcessor<BitVector,true>::process
                      ((SetDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
            if (uVar37 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_007f0b48;
          }
        }
      }
      else {
        uVar41 = 1;
        puVar44 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar33 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar43 * (iVar13 + (uVar45 >> 5)) + (int)uVar41) * 8);
          iVar31 = (**ppcVar33)(ppcVar33,uVar2,0,*puVar44);
          puVar1 = puVar44 + -1;
          uVar41 = uVar41 + 1;
          uVar40 = (ulong)*(uint *)(param_4 + 0x34);
          puVar44 = puVar44 + 2;
          uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
        } while (uVar41 < uVar40);
        if (iVar7 == 2) goto LAB_007f0de0;
LAB_007f0dc0:
        if ((iVar7 == 0) != ((uVar30 & uVar17) != uVar9)) goto LAB_007f0de0;
      }
      uVar36 = uVar36 + 1;
      uVar45 = uVar45 + 1;
    } while (uVar36 != uVar18);
    uVar37 = uVar37 + 1;
  } while (uVar37 != uVar25);
LAB_007f0b38:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007f0b48:
  uVar34 = uVar34 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar34) goto LAB_007f0adc;
  goto LAB_007f0b60;
}


