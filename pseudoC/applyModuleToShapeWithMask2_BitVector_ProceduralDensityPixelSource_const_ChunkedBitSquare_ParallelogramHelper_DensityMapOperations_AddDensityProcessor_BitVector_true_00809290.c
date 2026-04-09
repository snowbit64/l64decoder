// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
// Entry Point: 00809290
// Size: 3704 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ProceduralDensityPixelSource
   const, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::AddDensityProcessor<BitVector, true> >(IDensityPixelSource*, BitVector*,
   ProceduralDensityPixelSource const*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<BitVector, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,ChunkedBitSquare *param_4,
               ParallelogramHelper *param_5,AddDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  DensityMapFilter DVar13;
  DensityMapFilter DVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  bool bVar21;
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
  long lVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 *puVar41;
  long *plVar42;
  int iVar43;
  ulong uVar44;
  undefined2 uVar45;
  undefined8 uVar46;
  uint local_158;
  uint local_154;
  uint local_144;
  uint local_140;
  uint local_108;
  uint local_104;
  uint local_d0;
  uint local_98;
  uint local_94;
  uint local_90;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar20 = tpidr_el0;
  local_70 = *(long *)(lVar20 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar42 = *(long **)param_7;
  local_88 = (long *)param_2;
  uVar22 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar23 = (**(code **)(*plVar42 + 0x20))(plVar42);
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar34 = *(int *)(param_7 + 8);
  uVar6 = *(uint *)(param_7 + 0xc);
  plVar42 = *(long **)param_8;
  DVar13 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0x24);
  iVar30 = *(int *)(param_7 + 0x18);
  uVar17 = ~(-1 << (ulong)(uVar24 & 0x1f));
  iVar8 = *(int *)(param_7 + 0x1c);
  uVar25 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar26 = (**(code **)(*plVar42 + 0x20))(plVar42);
  (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  DVar14 = param_8[0x20];
  iVar12 = *(int *)(param_8 + 0x1c);
  uVar19 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar27 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar22) || (local_94 < uVar26)) || (local_94 < uVar23)) || (local_98 < uVar25))
  {
    if (((uVar22 < local_98) || (uVar26 < local_94)) || ((uVar23 < local_94 || (uVar25 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 0080a0c4 to 0080a0d3 has its CatchHandler @ 0080a108 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar22,(ulong)uVar23,(ulong)uVar25,(ulong)uVar26,(ulong)local_98,
                         (ulong)local_94);
      bVar21 = false;
      goto LAB_0080a07c;
    }
    uVar28 = 0;
    if (local_98 != 0) {
      uVar28 = uVar22 / local_98;
    }
    uVar22 = 0;
    if (local_94 != 0) {
      uVar22 = uVar23 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar28,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar28 & 0xffff0000) != 0;
      uVar23 = uVar28 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar28;
      }
      uVar39 = (uint)bVar21;
      uVar37 = uVar39 << 4 | 8;
      uVar29 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar37 = uVar39 << 4;
        uVar29 = uVar23;
      }
      uVar23 = uVar37 | 4;
      uVar39 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar23 = uVar37;
        uVar39 = uVar29;
      }
      uVar37 = uVar23 | 2;
      uVar29 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar37 = uVar23;
        uVar29 = uVar39;
      }
      local_140 = (uVar29 + uVar37) - 1;
    }
    else {
      local_140 = 0;
    }
    uVar23 = 0;
    if (local_98 != 0) {
      uVar23 = uVar25 / local_98;
    }
    uVar46 = NEON_cnt((ulong)uVar22,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar22;
      }
      uVar39 = (uint)bVar21;
      uVar37 = uVar39 << 4 | 8;
      uVar29 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar37 = uVar39 << 4;
        uVar29 = uVar25;
      }
      uVar25 = uVar37 | 4;
      uVar39 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar25 = uVar37;
        uVar39 = uVar29;
      }
      uVar37 = uVar25 | 2;
      uVar29 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar37 = uVar25;
        uVar29 = uVar39;
      }
      local_154 = (uVar29 + uVar37) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar25 = 0;
    if (local_94 != 0) {
      uVar25 = uVar26 / local_94;
    }
    uVar46 = NEON_cnt((ulong)uVar23,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar23 & 0xffff0000) != 0;
      uVar26 = uVar23 >> 0x10;
      if (!bVar21) {
        uVar26 = uVar23;
      }
      uVar39 = (uint)bVar21;
      uVar37 = uVar39 << 4 | 8;
      uVar29 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar37 = uVar39 << 4;
        uVar29 = uVar26;
      }
      uVar26 = uVar37 | 4;
      uVar39 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar26 = uVar37;
        uVar39 = uVar29;
      }
      uVar37 = uVar26 | 2;
      uVar29 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar37 = uVar26;
        uVar29 = uVar39;
      }
      local_144 = (uVar29 + uVar37) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar25,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar25 & 0xffff0000) != 0;
      uVar26 = uVar25 >> 0x10;
      if (!bVar21) {
        uVar26 = uVar25;
      }
      uVar39 = (uint)bVar21;
      uVar37 = uVar39 << 4 | 8;
      uVar29 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar37 = uVar39 << 4;
        uVar29 = uVar26;
      }
      uVar26 = uVar37 | 4;
      uVar39 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar26 = uVar37;
        uVar39 = uVar29;
      }
      uVar37 = uVar26 | 2;
      uVar29 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar37 = uVar26;
        uVar29 = uVar39;
      }
      local_158 = (uVar29 + uVar37) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    uVar37 = *(uint *)(param_5 + 0x4c);
    if (uVar26 < uVar37) {
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar37 = *(uint *)(param_5 + 0x58);
        if (uVar37 < *(uint *)(param_5 + 0x5c)) {
LAB_00809d08:
          uVar29 = 0;
          do {
            uVar39 = 0;
            do {
              uVar31 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar37 << (ulong)(local_140 & 0x1f)) + uVar39,
                                  uVar29 + (uVar26 << (ulong)(local_154 & 0x1f)));
              if ((iVar34 == 2) || ((iVar34 == 0) != ((uVar31 & uVar17) != uVar6))) {
                uVar31 = uVar31 >> (ulong)(uVar5 & 0x1f) & uVar16;
                if (((int)uVar31 < iVar30) || (iVar8 < (int)uVar31)) {
                  if (DVar13 != (DensityMapFilter)0x0) goto LAB_00809dbc;
                }
                else if (DVar13 == (DensityMapFilter)0x0) {
LAB_00809dbc:
                  if ((uVar7 == 0) || ((uVar31 & uVar7) != 0)) {
                    uVar29 = 0;
                    uVar39 = uVar37 << (ulong)(local_144 & 0x1f);
                    goto LAB_00809e04;
                  }
                }
              }
              uVar39 = uVar39 + 1;
            } while (uVar39 != uVar28);
            uVar29 = uVar29 + 1;
          } while (uVar29 != uVar22);
          goto LAB_00809ce0;
        }
LAB_00809c94:
        uVar37 = *(uint *)(param_5 + 0x4c);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar37);
    }
  }
  else {
    uVar28 = 0;
    if (uVar22 != 0) {
      uVar28 = local_98 / uVar22;
    }
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = local_94 / uVar23;
    }
    uVar46 = NEON_cnt((ulong)uVar28,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar28 & 0xffff0000) != 0;
      uVar23 = uVar28 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar28;
      }
      uVar29 = (uint)bVar21;
      uVar28 = uVar29 << 4 | 8;
      uVar37 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar28 = uVar29 << 4;
        uVar37 = uVar23;
      }
      uVar23 = uVar28 | 4;
      uVar29 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar23 = uVar28;
        uVar29 = uVar37;
      }
      uVar28 = uVar23 | 2;
      uVar37 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar28 = uVar23;
        uVar37 = uVar29;
      }
      uVar23 = (uVar37 + uVar28) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar28 = 0;
    if (uVar25 != 0) {
      uVar28 = local_98 / uVar25;
    }
    uVar46 = NEON_cnt((ulong)uVar22,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar22;
      }
      uVar29 = (uint)bVar21;
      uVar22 = uVar29 << 4 | 8;
      uVar37 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar22 = uVar29 << 4;
        uVar37 = uVar25;
      }
      uVar25 = uVar22 | 4;
      uVar29 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar25 = uVar22;
        uVar29 = uVar37;
      }
      uVar22 = uVar25 | 2;
      uVar37 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar22 = uVar25;
        uVar37 = uVar29;
      }
      local_104 = (uVar37 + uVar22) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar22 = 0;
    if (uVar26 != 0) {
      uVar22 = local_94 / uVar26;
    }
    uVar46 = NEON_cnt((ulong)uVar28,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar28 & 0xffff0000) != 0;
      uVar25 = uVar28 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar28;
      }
      uVar37 = (uint)bVar21;
      uVar26 = uVar37 << 4 | 8;
      uVar28 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar26 = uVar37 << 4;
        uVar28 = uVar25;
      }
      uVar25 = uVar26 | 4;
      uVar37 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar25 = uVar26;
        uVar37 = uVar28;
      }
      uVar26 = uVar25 | 2;
      uVar28 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar26 = uVar25;
        uVar28 = uVar37;
      }
      local_d0 = (uVar28 + uVar26) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar46 = NEON_cnt((ulong)uVar22,1);
    uVar45 = NEON_uaddlv(uVar46,1);
    if ((int)CONCAT62((int6)((ulong)uVar46 >> 0x10),uVar45) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar25 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar22;
      }
      uVar28 = (uint)bVar21;
      uVar22 = uVar28 << 4 | 8;
      uVar26 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar22 = uVar28 << 4;
        uVar26 = uVar25;
      }
      uVar25 = uVar22 | 4;
      uVar28 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar25 = uVar22;
        uVar28 = uVar26;
      }
      uVar22 = uVar25 | 2;
      uVar26 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar22 = uVar25;
        uVar26 = uVar28;
      }
      local_108 = (uVar26 + uVar22) - 1;
    }
    else {
      local_108 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    uVar37 = *(uint *)(param_5 + 0x4c);
    if (uVar22 < uVar37) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar25 = *(uint *)(param_5 + 0x58);
        if (uVar25 < *(uint *)(param_5 + 0x5c)) {
          uVar26 = uVar22 >> (ulong)(local_108 & 0x1f);
          do {
            uVar28 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar25 >> (ulong)(uVar23 & 0x1f),
                                uVar22 >> (ulong)(local_104 & 0x1f));
            if ((((iVar34 == 2) || ((iVar34 == 0) != ((uVar28 & uVar17) != uVar6))) &&
                (DVar13 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar28 >> (ulong)(uVar5 & 0x1f) & uVar16 & uVar7) != 0)))) {
              uVar28 = uVar25 >> (ulong)(local_d0 & 0x1f);
              uVar37 = (((uVar26 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar28 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar35 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar37 * 8);
              uVar28 = uVar28 & 0x1f | (uVar26 & 0x1f) << 5;
              uVar29 = (**ppcVar35)(ppcVar35,uVar28,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar44 = 1;
                puVar41 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar35 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar37 + (int)uVar44) * 8);
                  iVar30 = (**ppcVar35)(ppcVar35,uVar28,0,*puVar41);
                  puVar1 = puVar41 + -1;
                  uVar44 = uVar44 + 1;
                  puVar41 = puVar41 + 2;
                  uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                } while (uVar44 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar29 & uVar19) != uVar10))) ||
                 ((DVar14 != (DensityMapFilter)0x0 ||
                  ((uVar27 != 0 && ((uVar29 >> (ulong)(uVar24 & 0x1f) & uVar18 & uVar27) == 0))))))
              {
                iVar30 = *(int *)(param_6 + 4);
                goto LAB_00809a20;
              }
              lVar38 = *local_88;
              uVar28 = (uVar25 + local_98 * uVar22) * local_90;
              lVar36 = *(long *)(lVar38 + (ulong)(uVar28 >> 0x13) * 8);
              uVar44 = (ulong)(uVar28 >> 3) & 0xffff;
              if ((uint)uVar44 < 0xfffd) {
                uVar37 = *(uint *)(lVar36 + uVar44);
              }
              else {
                uVar37 = (uVar28 >> 3) + 1;
                uVar29 = (uVar28 >> 3) + 2;
                uVar37 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar38 + (ulong)(uVar29 >> 0x10) * 8) +
                                         ((ulong)uVar29 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar38 + (ulong)(uVar37 >> 0x10) * 8) +
                                                  ((ulong)uVar37 & 0xffff)),
                                                 *(undefined *)(lVar36 + uVar44)));
              }
              uVar28 = uVar37 >> (ulong)(uVar28 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar25;
              uStack_7c = uVar22;
              local_78 = uVar28;
              DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                        ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
              if (uVar28 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
              iVar30 = *(int *)(param_6 + 4);
LAB_00809a20:
              *(int *)(param_6 + 4) = iVar30 + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < *(uint *)(param_5 + 0x5c));
        }
        uVar37 = *(uint *)(param_5 + 0x4c);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar37);
    }
  }
  bVar21 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar37,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_0080a07c:
  if (*(long *)(lVar20 + 0x28) == local_70) {
    return bVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00809e04:
  do {
    uVar31 = 0;
    uVar44 = (ulong)*(uint *)(param_4 + 0x34);
    uVar3 = uVar29 + (uVar26 << (ulong)(local_158 & 0x1f));
    uVar2 = uVar39;
    do {
      uVar4 = uVar31 + uVar39;
      iVar15 = (uVar3 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar43 = (int)uVar44;
      ppcVar35 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar15 + (uVar4 >> 5)) * iVar43) * 8);
      uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
      uVar32 = (**ppcVar35)(ppcVar35,uVar4,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar44 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar9 != 2) goto LAB_00809f10;
LAB_00809f30:
        uVar4 = uVar32 >> (ulong)(uVar24 & 0x1f) & uVar18;
        if (((int)uVar4 < iVar11) || (iVar12 < (int)uVar4)) {
          if (DVar14 != (DensityMapFilter)0x0) goto LAB_00809f5c;
        }
        else if (DVar14 == (DensityMapFilter)0x0) {
LAB_00809f5c:
          if ((uVar27 == 0) || ((uVar4 & uVar27) != 0)) {
            lVar38 = *local_88;
            uVar29 = (uVar37 + local_98 * uVar26) * local_90;
            lVar36 = *(long *)(lVar38 + (ulong)(uVar29 >> 0x13) * 8);
            uVar44 = (ulong)(uVar29 >> 3) & 0xffff;
            if ((uint)uVar44 < 0xfffd) {
              uVar39 = *(uint *)(lVar36 + uVar44);
            }
            else {
              uVar39 = (uVar29 >> 3) + 1;
              uVar31 = (uVar29 >> 3) + 2;
              uVar39 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar38 + (ulong)(uVar31 >> 0x10) * 8) +
                                       ((ulong)uVar31 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar38 + (ulong)(uVar39 >> 0x10) * 8) +
                                                ((ulong)uVar39 & 0xffff)),
                                               *(undefined *)(lVar36 + uVar44)));
            }
            uVar29 = uVar39 >> (ulong)(uVar29 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            local_80 = uVar37;
            uStack_7c = uVar26;
            local_78 = uVar29;
            DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                      ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
            if (uVar29 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_00809cf4;
          }
        }
      }
      else {
        uVar40 = 1;
        puVar41 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar35 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar43 * (iVar15 + (uVar2 >> 5)) + (int)uVar40) * 8);
          iVar33 = (**ppcVar35)(ppcVar35,uVar4,0,*puVar41);
          puVar1 = puVar41 + -1;
          uVar40 = uVar40 + 1;
          uVar44 = (ulong)*(uint *)(param_4 + 0x34);
          puVar41 = puVar41 + 2;
          uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
        } while (uVar40 < uVar44);
        if (iVar9 == 2) goto LAB_00809f30;
LAB_00809f10:
        if ((iVar9 == 0) != ((uVar32 & uVar19) != uVar10)) goto LAB_00809f30;
      }
      uVar31 = uVar31 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar31 != uVar23);
    uVar29 = uVar29 + 1;
  } while (uVar29 != uVar25);
LAB_00809ce0:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_00809cf4:
  uVar37 = uVar37 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar37) goto LAB_00809c94;
  goto LAB_00809d08;
}


