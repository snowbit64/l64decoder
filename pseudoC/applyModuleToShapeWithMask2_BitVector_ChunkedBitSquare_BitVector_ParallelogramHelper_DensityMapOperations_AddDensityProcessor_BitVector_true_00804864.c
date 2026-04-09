// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
// Entry Point: 00804864
// Size: 3896 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, ChunkedBitSquare * param_3, BitVector * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ChunkedBitSquare, BitVector,
   ParallelogramHelper, DensityMapOperations::AddDensityProcessor<BitVector, true>
   >(IDensityPixelSource*, BitVector*, ChunkedBitSquare*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<BitVector, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,BitVector,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,ChunkedBitSquare *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,AddDensityProcessor *param_6,
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
  int iVar9;
  uint uVar10;
  int iVar11;
  DensityMapFilter DVar12;
  DensityMapFilter DVar13;
  int iVar14;
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
  uint uVar39;
  long lVar40;
  uint uVar41;
  undefined4 *puVar42;
  ulong uVar43;
  long *plVar44;
  int iVar45;
  ulong uVar46;
  undefined2 uVar47;
  undefined8 uVar48;
  uint local_160;
  uint local_15c;
  uint local_14c;
  uint local_144;
  uint local_104;
  uint local_e0;
  uint local_d0;
  uint local_b8;
  uint local_9c;
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
  plVar44 = *(long **)param_7;
  local_88 = (long *)param_2;
  uVar21 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar22 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar44 = *(long **)param_8;
  iVar29 = *(int *)(param_7 + 0x1c);
  iVar6 = *(int *)(param_7 + 0x18);
  DVar12 = param_7[0x20];
  iVar32 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar16 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar24 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar25 = (**(code **)(*plVar44 + 0x20))(plVar44);
  uVar26 = (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar23 = *(uint *)(param_8 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  iVar9 = *(int *)(param_8 + 0x1c);
  uVar10 = *(uint *)(param_8 + 0xc);
  DVar13 = param_8[0x20];
  iVar11 = *(int *)(param_8 + 0x18);
  uVar18 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar27 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar21) || (local_94 < uVar25)) || (local_94 < uVar22)) || (local_98 < uVar24))
  {
    if (((uVar21 < local_98) || (uVar25 < local_94)) || ((uVar22 < local_94 || (uVar24 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar32 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar32 != 0
         )) {
                    /* try { // try from 00805760 to 0080576b has its CatchHandler @ 0080579c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar21,(ulong)uVar22,(ulong)uVar24,(ulong)uVar25,(ulong)local_98,
                         (ulong)local_94);
      bVar20 = false;
      goto LAB_00805718;
    }
    uVar34 = 0;
    if (local_98 != 0) {
      uVar34 = uVar21 / local_98;
    }
    uVar21 = 0;
    if (local_94 != 0) {
      uVar21 = uVar22 / local_94;
    }
    uVar48 = NEON_cnt((ulong)uVar34,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar34 & 0xffff0000) != 0;
      uVar22 = uVar34 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar34;
      }
      uVar37 = (uint)bVar20;
      uVar36 = uVar37 << 4 | 8;
      uVar28 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar36 = uVar37 << 4;
        uVar28 = uVar22;
      }
      uVar22 = uVar36 | 4;
      uVar37 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar22 = uVar36;
        uVar37 = uVar28;
      }
      uVar36 = uVar22 | 2;
      uVar28 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar36 = uVar22;
        uVar28 = uVar37;
      }
      local_144 = (uVar28 + uVar36) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar21,1);
    uVar22 = 0;
    if (local_98 != 0) {
      uVar22 = uVar24 / local_98;
    }
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar36 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar36 = uVar21;
      }
      uVar38 = (uint)bVar20;
      uVar28 = uVar38 << 4 | 8;
      uVar37 = uVar36 >> 8;
      if (uVar36 < 0x100) {
        uVar28 = uVar38 << 4;
        uVar37 = uVar36;
      }
      uVar36 = uVar28 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar36 = uVar28;
        uVar38 = uVar37;
      }
      uVar28 = uVar36 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar28 = uVar36;
        uVar37 = uVar38;
      }
      local_15c = (uVar37 + uVar28) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar36 = 0;
    if (local_94 != 0) {
      uVar36 = uVar25 / local_94;
    }
    uVar48 = NEON_cnt((ulong)uVar22,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar22;
      }
      uVar38 = (uint)bVar20;
      uVar28 = uVar38 << 4 | 8;
      uVar37 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar28 = uVar38 << 4;
        uVar37 = uVar25;
      }
      uVar25 = uVar28 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar25 = uVar28;
        uVar38 = uVar37;
      }
      uVar28 = uVar25 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar28 = uVar25;
        uVar37 = uVar38;
      }
      local_14c = (uVar37 + uVar28) - 1;
    }
    else {
      local_14c = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar36,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar36 & 0xffff0000) != 0;
      uVar25 = uVar36 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar36;
      }
      uVar38 = (uint)bVar20;
      uVar28 = uVar38 << 4 | 8;
      uVar37 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar28 = uVar38 << 4;
        uVar37 = uVar25;
      }
      uVar25 = uVar28 | 4;
      uVar38 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar25 = uVar28;
        uVar38 = uVar37;
      }
      uVar28 = uVar25 | 2;
      uVar37 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar28 = uVar25;
        uVar37 = uVar38;
      }
      local_160 = (uVar37 + uVar28) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar25 = *(uint *)(param_5 + 0x48);
    uVar28 = *(uint *)(param_5 + 0x4c);
    if (uVar25 < uVar28) {
      if (uVar34 < 2) {
        uVar34 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar36 < 2) {
        uVar36 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar25);
        uVar28 = *(uint *)(param_5 + 0x58);
        if (uVar28 < *(uint *)(param_5 + 0x5c)) {
LAB_00805354:
          uVar37 = 0;
          uVar38 = uVar28 << (ulong)(local_144 & 0x1f);
          do {
            uVar41 = 0;
            uVar46 = (ulong)*(uint *)(param_3 + 0x34);
            uVar39 = uVar37 + (uVar25 << (ulong)(local_15c & 0x1f));
            uVar3 = uVar38;
            do {
              uVar2 = uVar41 + uVar38;
              iVar14 = (uVar39 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
              iVar45 = (int)uVar46;
              ppcVar33 = *(code ***)
                          (*(long *)(param_3 + 0x28) + (ulong)((iVar14 + (uVar2 >> 5)) * iVar45) * 8
                          );
              uVar2 = uVar2 & 0x1f | (uVar39 & 0x1f) << 5;
              uVar30 = (**ppcVar33)(ppcVar33,uVar2,0,*(undefined4 *)(param_3 + 0x3c));
              if (*(uint *)(param_3 + 0x34) < 2) {
                uVar46 = (ulong)*(uint *)(param_3 + 0x34);
                if (iVar32 != 2) goto LAB_00805488;
LAB_008054a8:
                uVar2 = uVar30 >> (ulong)(uVar4 & 0x1f) & uVar15;
                if (((int)uVar2 < iVar6) || (iVar29 < (int)uVar2)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_008054d4;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_008054d4:
                  if ((uVar7 == 0) || ((uVar2 & uVar7) != 0)) {
                    uVar37 = 0;
                    uVar38 = uVar26 * (uVar24 * (uVar25 << (ulong)(local_160 & 0x1f)) +
                                      (uVar28 << (ulong)(local_14c & 0x1f)));
                    lVar35 = *(long *)param_4;
                    goto LAB_0080552c;
                  }
                }
              }
              else {
                uVar43 = 1;
                puVar42 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar33 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar45 * (iVar14 + (uVar3 >> 5)) + (int)uVar43) * 8);
                  iVar31 = (**ppcVar33)(ppcVar33,uVar2,0,*puVar42);
                  puVar1 = puVar42 + -1;
                  uVar43 = uVar43 + 1;
                  uVar46 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar42 = puVar42 + 2;
                  uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
                } while (uVar43 < uVar46);
                if (iVar32 == 2) goto LAB_008054a8;
LAB_00805488:
                if ((iVar32 == 0) != ((uVar30 & uVar16) != uVar5)) goto LAB_008054a8;
              }
              uVar41 = uVar41 + 1;
              uVar3 = uVar3 + 1;
            } while (uVar41 != uVar34);
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar21);
          goto LAB_0080532c;
        }
LAB_008052d8:
        uVar28 = *(uint *)(param_5 + 0x4c);
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar28);
    }
  }
  else {
    uVar34 = 0;
    if (uVar21 != 0) {
      uVar34 = local_98 / uVar21;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = local_94 / uVar22;
    }
    uVar48 = NEON_cnt((ulong)uVar34,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar34 & 0xffff0000) != 0;
      uVar22 = uVar34 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar34;
      }
      uVar28 = (uint)bVar20;
      uVar34 = uVar28 << 4 | 8;
      uVar36 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar34 = uVar28 << 4;
        uVar36 = uVar22;
      }
      uVar22 = uVar34 | 4;
      uVar28 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar22 = uVar34;
        uVar28 = uVar36;
      }
      uVar34 = uVar22 | 2;
      uVar36 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar34 = uVar22;
        uVar36 = uVar28;
      }
      local_9c = (uVar36 + uVar34) - 1;
    }
    else {
      local_9c = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar21,1);
    uVar22 = 0;
    if (uVar24 != 0) {
      uVar22 = local_98 / uVar24;
    }
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar34 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar34 = uVar21;
      }
      uVar28 = (uint)bVar20;
      uVar21 = uVar28 << 4 | 8;
      uVar36 = uVar34 >> 8;
      if (uVar34 < 0x100) {
        uVar21 = uVar28 << 4;
        uVar36 = uVar34;
      }
      uVar34 = uVar21 | 4;
      uVar28 = uVar36 >> 4;
      if (uVar36 < 0x10) {
        uVar34 = uVar21;
        uVar28 = uVar36;
      }
      uVar21 = uVar34 | 2;
      uVar36 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar21 = uVar34;
        uVar36 = uVar28;
      }
      local_e0 = (uVar36 + uVar21) - 1;
    }
    else {
      local_e0 = 0;
    }
    uVar21 = 0;
    if (uVar25 != 0) {
      uVar21 = local_94 / uVar25;
    }
    uVar48 = NEON_cnt((ulong)uVar22,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar22;
      }
      uVar36 = (uint)bVar20;
      uVar22 = uVar36 << 4 | 8;
      uVar34 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar22 = uVar36 << 4;
        uVar34 = uVar25;
      }
      uVar25 = uVar22 | 4;
      uVar36 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar25 = uVar22;
        uVar36 = uVar34;
      }
      uVar22 = uVar25 | 2;
      uVar34 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar22 = uVar25;
        uVar34 = uVar36;
      }
      local_b8 = (uVar34 + uVar22) - 1;
    }
    else {
      local_b8 = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar21,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar34 = (uint)bVar20;
      uVar21 = uVar34 << 4 | 8;
      uVar25 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar21 = uVar34 << 4;
        uVar25 = uVar22;
      }
      uVar22 = uVar21 | 4;
      uVar34 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar22 = uVar21;
        uVar34 = uVar25;
      }
      uVar21 = uVar22 | 2;
      uVar25 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar21 = uVar22;
        uVar25 = uVar34;
      }
      local_104 = (uVar25 + uVar21) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    uVar28 = *(uint *)(param_5 + 0x4c);
    if (uVar21 < uVar28) {
      local_d0 = ~(-1 << (ulong)(uVar26 & 0x1f)) & 0xffff;
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar22 = *(uint *)(param_5 + 0x58);
        if (uVar22 < *(uint *)(param_5 + 0x5c)) {
          uVar25 = uVar21 >> (ulong)(local_e0 & 0x1f);
          do {
            uVar34 = uVar22 >> (ulong)(local_9c & 0x1f);
            uVar36 = (((uVar25 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar34 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar33 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar36 * 8);
            uVar34 = uVar34 & 0x1f | (uVar25 & 0x1f) << 5;
            uVar28 = (**ppcVar33)(ppcVar33,uVar34,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar46 = 1;
              puVar42 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar33 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar36 + (int)uVar46) * 8);
                iVar29 = (**ppcVar33)(ppcVar33,uVar34,0,*puVar42);
                puVar1 = puVar42 + -1;
                uVar46 = uVar46 + 1;
                puVar42 = puVar42 + 2;
                uVar28 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar28;
              } while (uVar46 < *(uint *)(param_3 + 0x34));
            }
            if ((((iVar32 == 2) || ((iVar32 == 0) != ((uVar28 & uVar16) != uVar5))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar28 >> (ulong)(uVar4 & 0x1f) & uVar15 & uVar7) != 0)))) {
              lVar40 = *(long *)param_4;
              uVar34 = ((uVar22 >> (ulong)(local_b8 & 0x1f)) +
                       (uVar21 >> (ulong)(local_104 & 0x1f)) * uVar24) * uVar26;
              uVar46 = (ulong)(uVar34 >> 3) & 0xffff;
              lVar35 = *(long *)(lVar40 + (ulong)(uVar34 >> 0x13) * 8);
              if ((uint)uVar46 < 0xfffd) {
                uVar36 = *(uint *)(lVar35 + uVar46);
              }
              else {
                uVar36 = (uVar34 >> 3) + 1;
                uVar28 = (uVar34 >> 3) + 2;
                uVar36 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar40 + (ulong)(uVar28 >> 0x10) * 8) +
                                         ((ulong)uVar28 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar40 + (ulong)(uVar36 >> 0x10) * 8) +
                                                  ((ulong)uVar36 & 0xffff)),
                                                 *(undefined *)(lVar35 + uVar46)));
              }
              uVar34 = uVar36 >> (ulong)(uVar34 & 7) & local_d0;
              if (((iVar8 != 2) && ((iVar8 == 0) == ((uVar34 & uVar18) != uVar10))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar27 != 0 && ((uVar34 >> (ulong)(uVar23 & 0x1f) & uVar17 & uVar27) == 0))))))
              goto LAB_00805068;
              lVar40 = *local_88;
              uVar34 = (uVar22 + local_98 * uVar21) * local_90;
              lVar35 = *(long *)(lVar40 + (ulong)(uVar34 >> 0x13) * 8);
              uVar46 = (ulong)(uVar34 >> 3) & 0xffff;
              if ((uint)uVar46 < 0xfffd) {
                uVar36 = *(uint *)(lVar35 + uVar46);
              }
              else {
                uVar36 = (uVar34 >> 3) + 1;
                uVar28 = (uVar34 >> 3) + 2;
                uVar36 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar40 + (ulong)(uVar28 >> 0x10) * 8) +
                                         ((ulong)uVar28 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar40 + (ulong)(uVar36 >> 0x10) * 8) +
                                                  ((ulong)uVar36 & 0xffff)),
                                                 *(undefined *)(lVar35 + uVar46)));
              }
              uVar34 = uVar36 >> (ulong)(uVar34 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar22;
              uStack_7c = uVar21;
              local_78 = uVar34;
              DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                        ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
              if (uVar34 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
LAB_00805068:
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(param_5 + 0x5c));
        }
        uVar28 = *(uint *)(param_5 + 0x4c);
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar28);
    }
  }
  bVar20 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar28,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_00805718:
  if (*(long *)(lVar19 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar20;
LAB_0080552c:
  do {
    uVar41 = 0;
    uVar3 = uVar38;
    do {
      uVar46 = (ulong)(uVar3 >> 3) & 0xffff;
      lVar40 = *(long *)(lVar35 + (ulong)(uVar3 >> 0x13) * 8);
      if ((uint)uVar46 < 0xfffd) {
        uVar39 = *(uint *)(lVar40 + uVar46);
      }
      else {
        uVar39 = (uVar3 >> 3) + 1;
        uVar2 = (uVar3 >> 3) + 2;
        uVar39 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar35 + (ulong)(uVar2 >> 0x10) * 8) +
                                 ((ulong)uVar2 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar35 + (ulong)(uVar39 >> 0x10) * 8) +
                                          ((ulong)uVar39 & 0xffff)),*(undefined *)(lVar40 + uVar46))
                               );
      }
      uVar39 = uVar39 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar26 & 0x1f)) & 0xffffU;
      if ((iVar8 == 2) || ((iVar8 == 0) != ((uVar39 & uVar18) != uVar10))) {
        uVar39 = uVar39 >> (ulong)(uVar23 & 0x1f) & uVar17;
        if (((int)uVar39 < iVar11) || (iVar9 < (int)uVar39)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_0080560c;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_0080560c:
          if ((uVar27 == 0) || ((uVar39 & uVar27) != 0)) {
            lVar40 = *local_88;
            uVar37 = (uVar28 + local_98 * uVar25) * local_90;
            lVar35 = *(long *)(lVar40 + (ulong)(uVar37 >> 0x13) * 8);
            uVar46 = (ulong)(uVar37 >> 3) & 0xffff;
            if ((uint)uVar46 < 0xfffd) {
              uVar38 = *(uint *)(lVar35 + uVar46);
            }
            else {
              uVar38 = (uVar37 >> 3) + 1;
              uVar41 = (uVar37 >> 3) + 2;
              uVar38 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar40 + (ulong)(uVar41 >> 0x10) * 8) +
                                       ((ulong)uVar41 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar40 + (ulong)(uVar38 >> 0x10) * 8) +
                                                ((ulong)uVar38 & 0xffff)),
                                               *(undefined *)(lVar35 + uVar46)));
            }
            uVar37 = uVar38 >> (ulong)(uVar37 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            local_80 = uVar28;
            uStack_7c = uVar25;
            local_78 = uVar37;
            DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                      ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
            if (uVar37 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_00805340;
          }
        }
      }
      uVar41 = uVar41 + 1;
      uVar3 = uVar3 + uVar26;
    } while (uVar41 != uVar22);
    uVar37 = uVar37 + 1;
    uVar38 = uVar38 + uVar24 * uVar26;
  } while (uVar37 != uVar36);
LAB_0080532c:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_00805340:
  uVar28 = uVar28 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar28) goto LAB_008052d8;
  goto LAB_00805354;
}


