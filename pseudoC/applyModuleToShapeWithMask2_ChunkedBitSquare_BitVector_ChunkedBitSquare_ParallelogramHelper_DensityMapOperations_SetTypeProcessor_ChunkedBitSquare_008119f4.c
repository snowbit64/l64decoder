// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
// Entry Point: 008119f4
// Size: 4396 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, SetTypeProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, BitVector,
   ChunkedBitSquare, ParallelogramHelper, DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>
   >(IDensityPixelSource*, ChunkedBitSquare*, BitVector*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,SetTypeProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
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
  uint uVar32;
  int iVar33;
  int iVar34;
  code **ppcVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  ulong uVar42;
  undefined4 *puVar43;
  uint *puVar44;
  ulong uVar45;
  long *plVar46;
  undefined2 uVar47;
  undefined8 uVar48;
  uint local_170;
  uint local_16c;
  uint local_150;
  uint local_148;
  uint local_114;
  uint local_110;
  uint local_d8;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint *local_88;
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
  local_88 = (uint *)param_2;
  uVar21 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar22 = (**(code **)(*plVar46 + 0x20))(plVar46);
  uVar23 = (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar46 = *(long **)param_8;
  iVar34 = *(int *)(param_7 + 0x18);
  iVar29 = *(int *)(param_7 + 0x1c);
  DVar11 = param_7[0x20];
  iVar6 = *(int *)(param_7 + 8);
  uVar7 = *(uint *)(param_7 + 0xc);
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar24 & 0x1f));
  uVar25 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar26 = (**(code **)(*plVar46 + 0x20))(plVar46);
  (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_8 + 0x28))();
  uVar9 = *(uint *)(param_8 + 0xc);
  iVar10 = *(int *)(param_8 + 8);
  DVar12 = param_8[0x20];
  uVar17 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar27 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar21) || (local_94 < uVar26)) || (local_94 < uVar22)) || (local_98 < uVar25))
  {
    if (((uVar21 < local_98) || (uVar26 < local_94)) || ((uVar22 < local_94 || (uVar25 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 00812ae4 to 00812aef has its CatchHandler @ 00812b20 */
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
      goto LAB_00812a9c;
    }
    uVar18 = 0;
    if (local_94 != 0) {
      uVar18 = uVar22 / local_94;
    }
    uVar22 = 0;
    if (local_98 != 0) {
      uVar22 = uVar21 / local_98;
    }
    uVar48 = NEON_cnt((ulong)uVar22,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar22 & 0xffff0000) != 0;
      uVar36 = uVar22 >> 0x10;
      if (!bVar20) {
        uVar36 = uVar22;
      }
      uVar39 = (uint)bVar20;
      uVar38 = uVar39 << 4 | 8;
      uVar28 = uVar36 >> 8;
      if (uVar36 < 0x100) {
        uVar38 = uVar39 << 4;
        uVar28 = uVar36;
      }
      uVar36 = uVar38 | 4;
      uVar39 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar36 = uVar38;
        uVar39 = uVar28;
      }
      uVar38 = uVar36 | 2;
      uVar28 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar38 = uVar36;
        uVar28 = uVar39;
      }
      local_148 = (uVar28 + uVar38) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar36 = 0;
    if (local_98 != 0) {
      uVar36 = uVar25 / local_98;
    }
    uVar48 = NEON_cnt((ulong)uVar18,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar25 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar18;
      }
      uVar39 = (uint)bVar20;
      uVar38 = uVar39 << 4 | 8;
      uVar28 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar38 = uVar39 << 4;
        uVar28 = uVar25;
      }
      uVar25 = uVar38 | 4;
      uVar39 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar25 = uVar38;
        uVar39 = uVar28;
      }
      uVar38 = uVar25 | 2;
      uVar28 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar38 = uVar25;
        uVar28 = uVar39;
      }
      local_16c = (uVar28 + uVar38) - 1;
    }
    else {
      local_16c = 0;
    }
    uVar25 = 0;
    if (local_94 != 0) {
      uVar25 = uVar26 / local_94;
    }
    uVar48 = NEON_cnt((ulong)uVar36,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar36 & 0xffff0000) != 0;
      uVar26 = uVar36 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar36;
      }
      uVar39 = (uint)bVar20;
      uVar38 = uVar39 << 4 | 8;
      uVar28 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar38 = uVar39 << 4;
        uVar28 = uVar26;
      }
      uVar26 = uVar38 | 4;
      uVar39 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar26 = uVar38;
        uVar39 = uVar28;
      }
      uVar38 = uVar26 | 2;
      uVar28 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar38 = uVar26;
        uVar28 = uVar39;
      }
      local_150 = (uVar28 + uVar38) - 1;
    }
    else {
      local_150 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar25,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar25 & 0xffff0000) != 0;
      uVar26 = uVar25 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar25;
      }
      uVar39 = (uint)bVar20;
      uVar38 = uVar39 << 4 | 8;
      uVar28 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar38 = uVar39 << 4;
        uVar28 = uVar26;
      }
      uVar26 = uVar38 | 4;
      uVar39 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar26 = uVar38;
        uVar39 = uVar28;
      }
      uVar38 = uVar26 | 2;
      uVar28 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar38 = uVar26;
        uVar28 = uVar39;
      }
      local_170 = (uVar28 + uVar38) - 1;
    }
    else {
      local_170 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    uVar38 = *(uint *)(param_5 + 0x4c);
    if (uVar26 < uVar38) {
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar36 < 2) {
        uVar36 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar38 = *(uint *)(param_5 + 0x58);
        if (uVar38 < *(uint *)(param_5 + 0x5c)) {
LAB_0081260c:
          uVar28 = 0;
          uVar39 = uVar23 * (uVar21 * (uVar26 << (ulong)(local_16c & 0x1f)) +
                            (uVar38 << (ulong)(local_148 & 0x1f)));
          lVar37 = *(long *)param_3;
          do {
            uVar32 = 0;
            uVar4 = uVar39;
            do {
              uVar42 = (ulong)(uVar4 >> 3) & 0xffff;
              lVar41 = *(long *)(lVar37 + (ulong)(uVar4 >> 0x13) * 8);
              if ((uint)uVar42 < 0xfffd) {
                uVar40 = *(uint *)(lVar41 + uVar42);
              }
              else {
                uVar40 = (uVar4 >> 3) + 1;
                uVar3 = (uVar4 >> 3) + 2;
                uVar40 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar37 + (ulong)(uVar3 >> 0x10) * 8) +
                                         ((ulong)uVar3 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar37 + (ulong)(uVar40 >> 0x10) * 8) +
                                                  ((ulong)uVar40 & 0xffff)),
                                                 *(undefined *)(lVar41 + uVar42)));
              }
              uVar40 = uVar40 >> (ulong)(uVar4 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
              if ((iVar6 == 2) || ((iVar6 == 0) != ((uVar40 & uVar15) != uVar7))) {
                uVar40 = uVar40 >> (ulong)(uVar5 & 0x1f) & uVar14;
                if (((int)uVar40 < iVar34) || (iVar29 < (int)uVar40)) {
                  if (DVar11 != (DensityMapFilter)0x0) goto LAB_00812724;
                }
                else if (DVar11 == (DensityMapFilter)0x0) {
LAB_00812724:
                  if ((uVar8 == 0) || ((uVar40 & uVar8) != 0)) {
                    uVar28 = 0;
                    uVar39 = uVar38 << (ulong)(local_150 & 0x1f);
                    goto LAB_0081275c;
                  }
                }
              }
              uVar32 = uVar32 + 1;
              uVar4 = uVar4 + uVar23;
            } while (uVar32 != uVar22);
            uVar28 = uVar28 + 1;
            uVar39 = uVar39 + uVar21 * uVar23;
          } while (uVar28 != uVar18);
          goto LAB_008125d4;
        }
LAB_00812574:
        uVar38 = *(uint *)(param_5 + 0x4c);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar38);
    }
  }
  else {
    uVar18 = 0;
    if (uVar21 != 0) {
      uVar18 = local_98 / uVar21;
    }
    uVar36 = 0;
    if (uVar22 != 0) {
      uVar36 = local_94 / uVar22;
    }
    uVar48 = NEON_cnt((ulong)uVar18,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar22 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar18;
      }
      uVar28 = (uint)bVar20;
      uVar18 = uVar28 << 4 | 8;
      uVar38 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar18 = uVar28 << 4;
        uVar38 = uVar22;
      }
      uVar22 = uVar18 | 4;
      uVar28 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar22 = uVar18;
        uVar28 = uVar38;
      }
      uVar18 = uVar22 | 2;
      uVar38 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar18 = uVar22;
        uVar38 = uVar28;
      }
      uVar22 = (uVar38 + uVar18) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar18 = 0;
    if (uVar25 != 0) {
      uVar18 = local_98 / uVar25;
    }
    uVar48 = NEON_cnt((ulong)uVar36,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar36 & 0xffff0000) != 0;
      uVar25 = uVar36 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar36;
      }
      uVar28 = (uint)bVar20;
      uVar36 = uVar28 << 4 | 8;
      uVar38 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar36 = uVar28 << 4;
        uVar38 = uVar25;
      }
      uVar25 = uVar36 | 4;
      uVar28 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar25 = uVar36;
        uVar28 = uVar38;
      }
      uVar36 = uVar25 | 2;
      uVar38 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar36 = uVar25;
        uVar38 = uVar28;
      }
      local_110 = (uVar38 + uVar36) - 1;
    }
    else {
      local_110 = 0;
    }
    uVar25 = 0;
    if (uVar26 != 0) {
      uVar25 = local_94 / uVar26;
    }
    uVar48 = NEON_cnt((ulong)uVar18,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar26 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar18;
      }
      uVar38 = (uint)bVar20;
      uVar18 = uVar38 << 4 | 8;
      uVar36 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar18 = uVar38 << 4;
        uVar36 = uVar26;
      }
      uVar26 = uVar18 | 4;
      uVar38 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar26 = uVar18;
        uVar38 = uVar36;
      }
      uVar18 = uVar26 | 2;
      uVar36 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar18 = uVar26;
        uVar36 = uVar38;
      }
      local_d8 = (uVar36 + uVar18) - 1;
    }
    else {
      local_d8 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar25,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar25 & 0xffff0000) != 0;
      uVar26 = uVar25 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar25;
      }
      uVar36 = (uint)bVar20;
      uVar25 = uVar36 << 4 | 8;
      uVar18 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar25 = uVar36 << 4;
        uVar18 = uVar26;
      }
      uVar26 = uVar25 | 4;
      uVar36 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar26 = uVar25;
        uVar36 = uVar18;
      }
      uVar25 = uVar26 | 2;
      uVar18 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar25 = uVar26;
        uVar18 = uVar36;
      }
      local_114 = (uVar18 + uVar25) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar25 = *(uint *)(param_5 + 0x48);
    uVar38 = *(uint *)(param_5 + 0x4c);
    if (uVar25 < uVar38) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar25);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
          uVar18 = uVar25 >> (ulong)(local_114 & 0x1f);
          do {
            lVar41 = *(long *)param_3;
            uVar36 = ((uVar26 >> (ulong)(uVar22 & 0x1f)) +
                     (uVar25 >> (ulong)(local_110 & 0x1f)) * uVar21) * uVar23;
            uVar42 = (ulong)(uVar36 >> 3) & 0xffff;
            lVar37 = *(long *)(lVar41 + (ulong)(uVar36 >> 0x13) * 8);
            if ((uint)uVar42 < 0xfffd) {
              uVar38 = *(uint *)(lVar37 + uVar42);
            }
            else {
              uVar38 = (uVar36 >> 3) + 1;
              uVar28 = (uVar36 >> 3) + 2;
              uVar38 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar41 + (ulong)(uVar28 >> 0x10) * 8) +
                                       ((ulong)uVar28 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar41 + (ulong)(uVar38 >> 0x10) * 8) +
                                                ((ulong)uVar38 & 0xffff)),
                                               *(undefined *)(lVar37 + uVar42)));
            }
            uVar36 = uVar38 >> (ulong)(uVar36 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
            if ((((iVar6 == 2) || ((iVar6 == 0) != ((uVar36 & uVar15) != uVar7))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar36 >> (ulong)(uVar5 & 0x1f) & uVar14 & uVar8) != 0)))) {
              uVar36 = uVar26 >> (ulong)(local_d8 & 0x1f);
              uVar38 = (((uVar18 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar36 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar35 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar38 * 8);
              uVar36 = uVar36 & 0x1f | (uVar18 & 0x1f) << 5;
              uVar28 = (**ppcVar35)(ppcVar35,uVar36,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar42 = 1;
                puVar43 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar38 + (int)uVar42) * 8);
                  iVar34 = (**ppcVar35)(ppcVar35,uVar36,0,*puVar43);
                  puVar1 = puVar43 + -1;
                  uVar42 = uVar42 + 1;
                  puVar43 = puVar43 + 2;
                  uVar28 = iVar34 << (ulong)(*puVar1 & 0x1f) | uVar28;
                } while (uVar42 < *(uint *)(param_4 + 0x34));
              }
              puVar1 = local_88;
              if (((iVar10 != 2) && ((iVar10 == 0) == ((uVar28 & uVar17) != uVar9))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar27 != 0 && ((uVar28 >> (ulong)(uVar24 & 0x1f) & uVar16 & uVar27) == 0))))))
              goto LAB_00812338;
              uVar36 = local_88[0xd];
              iVar34 = (uVar25 >> 5) << (ulong)(*local_88 & 0x1f);
              ppcVar35 = *(code ***)
                          (*(long *)(local_88 + 10) + (ulong)((iVar34 + (uVar26 >> 5)) * uVar36) * 8
                          );
              uVar38 = uVar26 & 0x1f | (uVar25 & 0x1f) << 5;
              local_80 = uVar26;
              uStack_7c = uVar25;
              uVar28 = (**ppcVar35)(ppcVar35,uVar38,0,local_88[0xf]);
              if (1 < puVar1[0xd]) {
                puVar44 = puVar1 + 0x11;
                uVar42 = 1;
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(puVar1 + 10) +
                              (ulong)(uVar36 * (iVar34 + (uVar26 >> 5)) + (int)uVar42) * 8);
                  iVar29 = (**ppcVar35)(ppcVar35,uVar38,0,*puVar44);
                  puVar2 = puVar44 + -1;
                  uVar42 = uVar42 + 1;
                  puVar44 = puVar44 + 2;
                  uVar28 = iVar29 << (ulong)(*puVar2 & 0x1f) | uVar28;
                } while (uVar42 < puVar1[0xd]);
              }
              local_78 = uVar28;
              DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>::process
                        ((SetTypeProcessor<ChunkedBitSquare> *)param_6,(HelperSource *)&local_98);
              uVar36 = local_78;
              puVar1 = local_88;
              if (uVar28 != local_78) {
                uVar38 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
                uVar28 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                         local_88[0xd];
                lVar41 = (ulong)uVar28 * 8;
                lVar37 = *(long *)(*(long *)(local_88 + 10) + lVar41);
                uVar48 = (**(code **)(lVar37 + 8))(lVar37,uVar38,0,local_88[0xf]);
                *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
                if (1 < puVar1[0xd]) {
                  puVar44 = puVar1 + 0x11;
                  uVar42 = 1;
                  do {
                    lVar41 = (ulong)(uVar28 + (int)uVar42) * 8;
                    lVar37 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
                    uVar48 = (**(code **)(lVar37 + 8))
                                       (lVar37,uVar38,0,*puVar44,
                                        uVar36 >> (ulong)(puVar44[-1] & 0x1f));
                    uVar42 = uVar42 + 1;
                    *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
                    puVar44 = puVar44 + 2;
                  } while (uVar42 < puVar1[0xd]);
                }
              }
            }
            else {
LAB_00812338:
              *(int *)param_6 = *(int *)param_6 + 1;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(param_5 + 0x5c));
        }
        uVar38 = *(uint *)(param_5 + 0x4c);
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar38);
    }
  }
  bVar20 = true;
  if (param_6[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x48),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar38,*(uint *)(param_6 + 0x14),*(uint *)(param_6 + 0x18),
               *(uint *)(param_6 + 0x60),(bool)param_6[0x5d],true,true);
  }
LAB_00812a9c:
  if (*(long *)(lVar19 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar20;
LAB_0081275c:
  do {
    uVar32 = 0;
    uVar42 = (ulong)*(uint *)(param_4 + 0x34);
    uVar40 = uVar28 + (uVar26 << (ulong)(local_170 & 0x1f));
    uVar4 = uVar39;
    do {
      uVar3 = uVar32 + uVar39;
      iVar13 = (uVar40 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar33 = (int)uVar42;
      ppcVar35 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar13 + (uVar3 >> 5)) * iVar33) * 8);
      uVar3 = uVar3 & 0x1f | (uVar40 & 0x1f) << 5;
      uVar30 = (**ppcVar35)(ppcVar35,uVar3,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar42 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar10 != 2) goto LAB_0081286c;
LAB_0081288c:
        puVar1 = local_88;
        if ((DVar12 != (DensityMapFilter)0x0) ||
           ((uVar27 != 0 && ((uVar30 >> (ulong)(uVar24 & 0x1f) & uVar16 & uVar27) == 0))))
        goto LAB_00812794;
        uVar28 = local_88[0xd];
        iVar13 = (uVar26 >> 5) << (ulong)(*local_88 & 0x1f);
        ppcVar35 = *(code ***)
                    (*(long *)(local_88 + 10) + (ulong)((iVar13 + (uVar38 >> 5)) * uVar28) * 8);
        uVar39 = uVar38 & 0x1f | (uVar26 & 0x1f) << 5;
        local_80 = uVar38;
        uStack_7c = uVar26;
        uVar32 = (**ppcVar35)(ppcVar35,uVar39,0,local_88[0xf]);
        if (1 < puVar1[0xd]) {
          puVar44 = puVar1 + 0x11;
          uVar42 = 1;
          do {
            ppcVar35 = *(code ***)
                        (*(long *)(puVar1 + 10) +
                        (ulong)(uVar28 * (iVar13 + (uVar38 >> 5)) + (int)uVar42) * 8);
            iVar33 = (**ppcVar35)(ppcVar35,uVar39,0,*puVar44);
            puVar2 = puVar44 + -1;
            uVar42 = uVar42 + 1;
            puVar44 = puVar44 + 2;
            uVar32 = iVar33 << (ulong)(*puVar2 & 0x1f) | uVar32;
          } while (uVar42 < puVar1[0xd]);
        }
        local_78 = uVar32;
        DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>::process
                  ((SetTypeProcessor<ChunkedBitSquare> *)param_6,(HelperSource *)&local_98);
        uVar28 = local_78;
        puVar1 = local_88;
        if (uVar32 != local_78) {
          uVar39 = local_80 & 0x1f | (uStack_7c & 0x1f) << 5;
          uVar32 = (((uStack_7c >> 5) << (ulong)(*local_88 & 0x1f)) + (local_80 >> 5)) *
                   local_88[0xd];
          lVar41 = (ulong)uVar32 * 8;
          lVar37 = *(long *)(*(long *)(local_88 + 10) + lVar41);
          uVar48 = (**(code **)(lVar37 + 8))(lVar37,uVar39,0,local_88[0xf],local_78);
          *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
          if (1 < puVar1[0xd]) {
            puVar44 = puVar1 + 0x11;
            uVar42 = 1;
            do {
              lVar41 = (ulong)(uVar32 + (int)uVar42) * 8;
              lVar37 = *(long *)(*(long *)(puVar1 + 10) + lVar41);
              uVar48 = (**(code **)(lVar37 + 8))
                                 (lVar37,uVar39,0,*puVar44,uVar28 >> (ulong)(puVar44[-1] & 0x1f));
              uVar42 = uVar42 + 1;
              puVar44 = puVar44 + 2;
              *(undefined8 *)(*(long *)(puVar1 + 10) + lVar41) = uVar48;
            } while (uVar42 < puVar1[0xd]);
          }
        }
        goto LAB_008125e4;
      }
      uVar45 = 1;
      puVar43 = (undefined4 *)(param_4 + 0x44);
      do {
        ppcVar35 = *(code ***)
                    (*(long *)(param_4 + 0x28) +
                    (ulong)(iVar33 * (iVar13 + (uVar4 >> 5)) + (int)uVar45) * 8);
        iVar31 = (**ppcVar35)(ppcVar35,uVar3,0,*puVar43);
        puVar1 = puVar43 + -1;
        uVar45 = uVar45 + 1;
        uVar42 = (ulong)*(uint *)(param_4 + 0x34);
        puVar43 = puVar43 + 2;
        uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
      } while (uVar45 < uVar42);
      if (iVar10 == 2) goto LAB_0081288c;
LAB_0081286c:
      if ((iVar10 == 0) != ((uVar30 & uVar17) != uVar9)) goto LAB_0081288c;
LAB_00812794:
      uVar32 = uVar32 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar32 != uVar36);
    uVar28 = uVar28 + 1;
  } while (uVar28 != uVar25);
LAB_008125d4:
  *(int *)param_6 = *(int *)param_6 + 1;
LAB_008125e4:
  uVar38 = uVar38 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar38) goto LAB_00812574;
  goto LAB_0081260c;
}


