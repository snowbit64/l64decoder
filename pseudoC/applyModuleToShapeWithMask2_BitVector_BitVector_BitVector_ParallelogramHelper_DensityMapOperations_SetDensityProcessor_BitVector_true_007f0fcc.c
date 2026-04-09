// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>
// Entry Point: 007f0fcc
// Size: 3764 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, BitVector * param_4, ParallelogramHelper * param_5, SetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, BitVector, BitVector,
   ParallelogramHelper, DensityMapOperations::SetDensityProcessor<BitVector, true>
   >(IDensityPixelSource*, BitVector*, BitVector*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::SetDensityProcessor<BitVector, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,SetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  DensityMapFilter DVar12;
  DensityMapFilter DVar13;
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
  long lVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  undefined2 uVar41;
  undefined8 uVar42;
  uint local_140;
  uint local_13c;
  uint local_124;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_d0;
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
  plVar40 = *(long **)param_7;
  local_88 = (long *)param_2;
  uVar21 = (**(code **)(*plVar40 + 0x18))(plVar40);
  uVar22 = (**(code **)(*plVar40 + 0x20))(plVar40);
  uVar23 = (**(code **)(*plVar40 + 0x30))(plVar40);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar24 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar29 = *(int *)(param_7 + 8);
  uVar4 = *(uint *)(param_7 + 0xc);
  iVar5 = *(int *)(param_7 + 0x18);
  plVar40 = *(long **)param_8;
  iVar6 = *(int *)(param_7 + 0x1c);
  DVar12 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar24 & 0x1f));
  uVar25 = (**(code **)(*plVar40 + 0x18))(plVar40);
  uVar26 = (**(code **)(*plVar40 + 0x20))(plVar40);
  uVar27 = (**(code **)(*plVar40 + 0x30))(plVar40);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar24 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  iVar9 = *(int *)(param_8 + 0x1c);
  uVar10 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  uVar17 = ~(-1 << (ulong)(uVar28 & 0x1f));
  DVar13 = param_8[0x20];
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar21) || (local_94 < uVar26)) || (local_94 < uVar22)) || (local_98 < uVar25))
  {
    if (((uVar21 < local_98) || (uVar26 < local_94)) || ((uVar22 < local_94 || (uVar25 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar29 != 0
         )) {
                    /* try { // try from 007f1e44 to 007f1e4f has its CatchHandler @ 007f1e80 */
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
      goto LAB_007f1e00;
    }
    uVar18 = 0;
    if (local_94 != 0) {
      uVar18 = uVar22 / local_94;
    }
    uVar22 = 0;
    if (local_98 != 0) {
      uVar22 = uVar21 / local_98;
    }
    uVar42 = NEON_cnt((ulong)uVar22,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar22 & 0xffff0000) != 0;
      uVar30 = uVar22 >> 0x10;
      if (!bVar20) {
        uVar30 = uVar22;
      }
      uVar35 = (uint)bVar20;
      uVar32 = uVar35 << 4 | 8;
      uVar34 = uVar30 >> 8;
      if (uVar30 < 0x100) {
        uVar32 = uVar35 << 4;
        uVar34 = uVar30;
      }
      uVar30 = uVar32 | 4;
      uVar35 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar30 = uVar32;
        uVar35 = uVar34;
      }
      uVar32 = uVar30 | 2;
      uVar34 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar32 = uVar30;
        uVar34 = uVar35;
      }
      local_114 = (uVar34 + uVar32) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar18,1);
    uVar30 = 0;
    if (local_98 != 0) {
      uVar30 = uVar25 / local_98;
    }
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar32 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar32 = uVar18;
      }
      uVar36 = (uint)bVar20;
      uVar34 = uVar36 << 4 | 8;
      uVar35 = uVar32 >> 8;
      if (uVar32 < 0x100) {
        uVar34 = uVar36 << 4;
        uVar35 = uVar32;
      }
      uVar32 = uVar34 | 4;
      uVar36 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar32 = uVar34;
        uVar36 = uVar35;
      }
      uVar34 = uVar32 | 2;
      uVar35 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar34 = uVar32;
        uVar35 = uVar36;
      }
      local_13c = (uVar35 + uVar34) - 1;
    }
    else {
      local_13c = 0;
    }
    uVar32 = 0;
    if (local_94 != 0) {
      uVar32 = uVar26 / local_94;
    }
    uVar42 = NEON_cnt((ulong)uVar30,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar30 & 0xffff0000) != 0;
      uVar26 = uVar30 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar30;
      }
      uVar36 = (uint)bVar20;
      uVar34 = uVar36 << 4 | 8;
      uVar35 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar34 = uVar36 << 4;
        uVar35 = uVar26;
      }
      uVar26 = uVar34 | 4;
      uVar36 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar26 = uVar34;
        uVar36 = uVar35;
      }
      uVar34 = uVar26 | 2;
      uVar35 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar34 = uVar26;
        uVar35 = uVar36;
      }
      local_124 = (uVar35 + uVar34) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar32,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar32 & 0xffff0000) != 0;
      uVar26 = uVar32 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar32;
      }
      uVar36 = (uint)bVar20;
      uVar34 = uVar36 << 4 | 8;
      uVar35 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar34 = uVar36 << 4;
        uVar35 = uVar26;
      }
      uVar26 = uVar34 | 4;
      uVar36 = uVar35 >> 4;
      if (uVar35 < 0x10) {
        uVar26 = uVar34;
        uVar36 = uVar35;
      }
      uVar34 = uVar26 | 2;
      uVar35 = uVar36 >> 2;
      if (uVar36 < 4) {
        uVar34 = uVar26;
        uVar35 = uVar36;
      }
      local_140 = (uVar35 + uVar34) - 1;
    }
    else {
      local_140 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    uVar34 = *(uint *)(param_5 + 0x4c);
    if (uVar26 < uVar34) {
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      if (uVar32 < 2) {
        uVar32 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar34 = *(uint *)(param_5 + 0x58);
        if (uVar34 < *(uint *)(param_5 + 0x5c)) {
LAB_007f1ac4:
          uVar35 = 0;
          uVar36 = uVar23 * (uVar21 * (uVar26 << (ulong)(local_13c & 0x1f)) +
                            (uVar34 << (ulong)(local_114 & 0x1f)));
          lVar31 = *(long *)param_3;
          do {
            uVar33 = 0;
            uVar2 = uVar36;
            do {
              uVar39 = (ulong)(uVar2 >> 3) & 0xffff;
              lVar38 = *(long *)(lVar31 + (ulong)(uVar2 >> 0x13) * 8);
              if ((uint)uVar39 < 0xfffd) {
                uVar37 = *(uint *)(lVar38 + uVar39);
              }
              else {
                uVar37 = (uVar2 >> 3) + 1;
                uVar1 = (uVar2 >> 3) + 2;
                uVar37 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar31 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar31 + (ulong)(uVar37 >> 0x10) * 8) +
                                                  ((ulong)uVar37 & 0xffff)),
                                                 *(undefined *)(lVar38 + uVar39)));
              }
              uVar37 = uVar37 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
              if ((iVar29 == 2) || ((iVar29 == 0) != ((uVar37 & uVar15) != uVar4))) {
                uVar37 = uVar37 >> (ulong)(uVar3 & 0x1f) & uVar14;
                if (((int)uVar37 < iVar5) || (iVar6 < (int)uVar37)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007f1bd4;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007f1bd4:
                  if ((uVar7 == 0) || ((uVar37 & uVar7) != 0)) {
                    uVar35 = 0;
                    uVar36 = uVar27 * (uVar25 * (uVar26 << (ulong)(local_140 & 0x1f)) +
                                      (uVar34 << (ulong)(local_124 & 0x1f)));
                    lVar31 = *(long *)param_4;
                    goto LAB_007f1c20;
                  }
                }
              }
              uVar33 = uVar33 + 1;
              uVar2 = uVar2 + uVar23;
            } while (uVar33 != uVar22);
            uVar35 = uVar35 + 1;
            uVar36 = uVar36 + uVar21 * uVar23;
          } while (uVar35 != uVar18);
          goto LAB_007f1aa0;
        }
LAB_007f1a48:
        uVar34 = *(uint *)(param_5 + 0x4c);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar34);
    }
  }
  else {
    uVar18 = 0;
    if (uVar21 != 0) {
      uVar18 = local_98 / uVar21;
    }
    uVar30 = 0;
    if (uVar22 != 0) {
      uVar30 = local_94 / uVar22;
    }
    uVar42 = NEON_cnt((ulong)uVar18,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar22 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar18;
      }
      uVar34 = (uint)bVar20;
      uVar18 = uVar34 << 4 | 8;
      uVar32 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar18 = uVar34 << 4;
        uVar32 = uVar22;
      }
      uVar22 = uVar18 | 4;
      uVar34 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar22 = uVar18;
        uVar34 = uVar32;
      }
      uVar18 = uVar22 | 2;
      uVar32 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar18 = uVar22;
        uVar32 = uVar34;
      }
      local_9c = (uVar32 + uVar18) - 1;
    }
    else {
      local_9c = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar30,1);
    uVar22 = 0;
    if (uVar25 != 0) {
      uVar22 = local_98 / uVar25;
    }
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar30 & 0xffff0000) != 0;
      uVar18 = uVar30 >> 0x10;
      if (!bVar20) {
        uVar18 = uVar30;
      }
      uVar34 = (uint)bVar20;
      uVar30 = uVar34 << 4 | 8;
      uVar32 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar30 = uVar34 << 4;
        uVar32 = uVar18;
      }
      uVar18 = uVar30 | 4;
      uVar34 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar18 = uVar30;
        uVar34 = uVar32;
      }
      uVar30 = uVar18 | 2;
      uVar32 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar30 = uVar18;
        uVar32 = uVar34;
      }
      local_10c = (uVar32 + uVar30) - 1;
    }
    else {
      local_10c = 0;
    }
    uVar18 = 0;
    if (uVar26 != 0) {
      uVar18 = local_94 / uVar26;
    }
    uVar42 = NEON_cnt((ulong)uVar22,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar22 & 0xffff0000) != 0;
      uVar26 = uVar22 >> 0x10;
      if (!bVar20) {
        uVar26 = uVar22;
      }
      uVar32 = (uint)bVar20;
      uVar22 = uVar32 << 4 | 8;
      uVar30 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar22 = uVar32 << 4;
        uVar30 = uVar26;
      }
      uVar26 = uVar22 | 4;
      uVar32 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar26 = uVar22;
        uVar32 = uVar30;
      }
      uVar22 = uVar26 | 2;
      uVar30 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar22 = uVar26;
        uVar30 = uVar32;
      }
      local_d0 = (uVar30 + uVar22) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar18,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar18 & 0xffff0000) != 0;
      uVar22 = uVar18 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar18;
      }
      uVar30 = (uint)bVar20;
      uVar26 = uVar30 << 4 | 8;
      uVar18 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar26 = uVar30 << 4;
        uVar18 = uVar22;
      }
      uVar22 = uVar26 | 4;
      uVar30 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar22 = uVar26;
        uVar30 = uVar18;
      }
      uVar26 = uVar22 | 2;
      uVar18 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar26 = uVar22;
        uVar18 = uVar30;
      }
      local_110 = (uVar18 + uVar26) - 1;
    }
    else {
      local_110 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    uVar34 = *(uint *)(param_5 + 0x4c);
    if (uVar22 < uVar34) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar38 = *(long *)param_3;
            uVar18 = ((uVar26 >> (ulong)(local_9c & 0x1f)) +
                     (uVar22 >> (ulong)(local_10c & 0x1f)) * uVar21) * uVar23;
            uVar39 = (ulong)(uVar18 >> 3) & 0xffff;
            lVar31 = *(long *)(lVar38 + (ulong)(uVar18 >> 0x13) * 8);
            if ((uint)uVar39 < 0xfffd) {
              uVar30 = *(uint *)(lVar31 + uVar39);
            }
            else {
              uVar30 = (uVar18 >> 3) + 1;
              uVar32 = (uVar18 >> 3) + 2;
              uVar30 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar38 + (ulong)(uVar32 >> 0x10) * 8) +
                                       ((ulong)uVar32 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar38 + (ulong)(uVar30 >> 0x10) * 8) +
                                                ((ulong)uVar30 & 0xffff)),
                                               *(undefined *)(lVar31 + uVar39)));
            }
            uVar18 = uVar30 >> (ulong)(uVar18 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
            if ((((iVar29 == 2) || ((iVar29 == 0) != ((uVar18 & uVar15) != uVar4))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar18 >> (ulong)(uVar3 & 0x1f) & uVar14 & uVar7) != 0)))) {
              lVar38 = *(long *)param_4;
              uVar18 = ((uVar26 >> (ulong)(local_d0 & 0x1f)) +
                       (uVar22 >> (ulong)(local_110 & 0x1f)) * uVar25) * uVar27;
              uVar39 = (ulong)(uVar18 >> 3) & 0xffff;
              lVar31 = *(long *)(lVar38 + (ulong)(uVar18 >> 0x13) * 8);
              if ((uint)uVar39 < 0xfffd) {
                uVar30 = *(uint *)(lVar31 + uVar39);
              }
              else {
                uVar30 = (uVar18 >> 3) + 1;
                uVar32 = (uVar18 >> 3) + 2;
                uVar30 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar38 + (ulong)(uVar32 >> 0x10) * 8) +
                                         ((ulong)uVar32 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar38 + (ulong)(uVar30 >> 0x10) * 8) +
                                                  ((ulong)uVar30 & 0xffff)),
                                                 *(undefined *)(lVar31 + uVar39)));
              }
              uVar18 = uVar30 >> (ulong)(uVar18 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
              if (((iVar8 != 2) && ((iVar8 == 0) == ((uVar18 & uVar17) != uVar10))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar28 != 0 && ((uVar18 >> (ulong)(uVar24 & 0x1f) & uVar16 & uVar28) == 0))))))
              goto LAB_007f179c;
              lVar38 = *local_88;
              uVar18 = (uVar26 + uVar22 * local_98) * local_90;
              lVar31 = *(long *)(lVar38 + (ulong)(uVar18 >> 0x13) * 8);
              uVar39 = (ulong)(uVar18 >> 3) & 0xffff;
              if ((uint)uVar39 < 0xfffd) {
                uVar30 = *(uint *)(lVar31 + uVar39);
              }
              else {
                uVar30 = (uVar18 >> 3) + 1;
                uVar32 = (uVar18 >> 3) + 2;
                uVar30 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar38 + (ulong)(uVar32 >> 0x10) * 8) +
                                         ((ulong)uVar32 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar38 + (ulong)(uVar30 >> 0x10) * 8) +
                                                  ((ulong)uVar30 & 0xffff)),
                                                 *(undefined *)(lVar31 + uVar39)));
              }
              uVar18 = uVar30 >> (ulong)(uVar18 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar26;
              uStack_7c = uVar22;
              local_78 = uVar18;
              DensityMapOperations::SetDensityProcessor<BitVector,true>::process
                        ((SetDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
              if (uVar18 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
LAB_007f179c:
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(param_5 + 0x5c));
        }
        uVar34 = *(uint *)(param_5 + 0x4c);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar34);
    }
  }
  bVar20 = true;
  if (param_6[100] != (SetDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x50),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar34,*(uint *)(param_6 + 0x1c),*(uint *)(param_6 + 0x20),
               *(uint *)(param_6 + 0x68),(bool)param_6[0x65],true,true);
  }
LAB_007f1e00:
  if (*(long *)(lVar19 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar20;
LAB_007f1c20:
  do {
    uVar33 = 0;
    uVar2 = uVar36;
    do {
      uVar39 = (ulong)(uVar2 >> 3) & 0xffff;
      lVar38 = *(long *)(lVar31 + (ulong)(uVar2 >> 0x13) * 8);
      if ((uint)uVar39 < 0xfffd) {
        uVar37 = *(uint *)(lVar38 + uVar39);
      }
      else {
        uVar37 = (uVar2 >> 3) + 1;
        uVar1 = (uVar2 >> 3) + 2;
        uVar37 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar31 + (ulong)(uVar1 >> 0x10) * 8) +
                                 ((ulong)uVar1 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar31 + (ulong)(uVar37 >> 0x10) * 8) +
                                          ((ulong)uVar37 & 0xffff)),*(undefined *)(lVar38 + uVar39))
                               );
      }
      uVar37 = uVar37 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
      if ((iVar8 == 2) || ((iVar8 == 0) != ((uVar37 & uVar17) != uVar10))) {
        uVar37 = uVar37 >> (ulong)(uVar24 & 0x1f) & uVar16;
        if (((int)uVar37 < iVar11) || (iVar9 < (int)uVar37)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007f1cf4;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007f1cf4:
          if ((uVar28 == 0) || ((uVar37 & uVar28) != 0)) {
            lVar38 = *local_88;
            uVar35 = (uVar34 + local_98 * uVar26) * local_90;
            lVar31 = *(long *)(lVar38 + (ulong)(uVar35 >> 0x13) * 8);
            uVar39 = (ulong)(uVar35 >> 3) & 0xffff;
            if ((uint)uVar39 < 0xfffd) {
              uVar36 = *(uint *)(lVar31 + uVar39);
            }
            else {
              uVar36 = (uVar35 >> 3) + 1;
              uVar33 = (uVar35 >> 3) + 2;
              uVar36 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar38 + (ulong)(uVar33 >> 0x10) * 8) +
                                       ((ulong)uVar33 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar38 + (ulong)(uVar36 >> 0x10) * 8) +
                                                ((ulong)uVar36 & 0xffff)),
                                               *(undefined *)(lVar31 + uVar39)));
            }
            uVar35 = uVar36 >> (ulong)(uVar35 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            local_80 = uVar34;
            uStack_7c = uVar26;
            local_78 = uVar35;
            DensityMapOperations::SetDensityProcessor<BitVector,true>::process
                      ((SetDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
            if (uVar35 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_007f1ab0;
          }
        }
      }
      uVar33 = uVar33 + 1;
      uVar2 = uVar2 + uVar27;
    } while (uVar33 != uVar30);
    uVar35 = uVar35 + 1;
    uVar36 = uVar36 + uVar25 * uVar27;
  } while (uVar35 != uVar32);
LAB_007f1aa0:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_007f1ab0:
  uVar34 = uVar34 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar34) goto LAB_007f1a48;
  goto LAB_007f1ac4;
}


