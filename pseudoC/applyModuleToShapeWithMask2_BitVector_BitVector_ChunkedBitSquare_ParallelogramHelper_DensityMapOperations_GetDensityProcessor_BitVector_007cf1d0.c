// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007cf1d0
// Size: 4312 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, BitVector, ChunkedBitSquare,
   ParallelogramHelper, DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*,
   BitVector*, BitVector*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,GetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
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
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  code **ppcVar36;
  int *piVar37;
  int *piVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  uint uVar46;
  int iVar47;
  ulong uVar48;
  undefined4 *puVar49;
  long *plVar50;
  undefined2 uVar51;
  undefined8 uVar52;
  uint local_160;
  uint local_15c;
  uint local_12c;
  uint local_118;
  uint local_d8;
  uint local_cc;
  uint local_78;
  
  uVar21 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar22 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar23 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar50 = *(long **)param_7;
  uVar24 = (**(code **)(*plVar50 + 0x18))(plVar50);
  uVar25 = (**(code **)(*plVar50 + 0x20))(plVar50);
  uVar26 = (**(code **)(*plVar50 + 0x30))(plVar50);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar35 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  plVar50 = *(long **)param_8;
  uVar6 = *(uint *)(param_7 + 0x24);
  iVar32 = *(int *)(param_7 + 0x18);
  DVar12 = param_7[0x20];
  iVar7 = *(int *)(param_7 + 0x1c);
  uVar17 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar28 = (**(code **)(*plVar50 + 0x18))(plVar50);
  uVar29 = (**(code **)(*plVar50 + 0x20))(plVar50);
  (**(code **)(*plVar50 + 0x30))(plVar50);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar27 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar30 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  iVar9 = *(int *)(param_8 + 0x1c);
  uVar10 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  uVar19 = ~(-1 << (ulong)(uVar30 & 0x1f));
  DVar13 = param_8[0x20];
  uVar30 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar24) || (uVar22 < uVar25)) || (uVar21 < uVar28)) || (uVar22 < uVar29)) {
    if (((uVar24 < uVar21) || (uVar25 < uVar22)) || ((uVar28 < uVar21 || (uVar29 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar35 != 0
         )) {
                    /* try { // try from 007d0270 to 007d027b has its CatchHandler @ 007d02a8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar24,(ulong)uVar25,(ulong)uVar28,(ulong)uVar29,(ulong)uVar21,
                         (ulong)uVar22);
      return false;
    }
    uVar40 = 0;
    if (uVar21 != 0) {
      uVar40 = uVar24 / uVar21;
    }
    uVar44 = 0;
    if (uVar22 != 0) {
      uVar44 = uVar25 / uVar22;
    }
    uVar52 = NEON_cnt((ulong)uVar40,1);
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar40 & 0xffff0000) != 0;
      uVar25 = uVar40 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar40;
      }
      uVar43 = (uint)bVar20;
      uVar31 = uVar43 << 4 | 8;
      uVar42 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar31 = uVar43 << 4;
        uVar42 = uVar25;
      }
      uVar25 = uVar31 | 4;
      uVar43 = uVar42 >> 4;
      if (uVar42 < 0x10) {
        uVar25 = uVar31;
        uVar43 = uVar42;
      }
      uVar31 = uVar25 | 2;
      uVar42 = uVar43 >> 2;
      if (uVar43 < 4) {
        uVar31 = uVar25;
        uVar42 = uVar43;
      }
      local_118 = (uVar42 + uVar31) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar52 = NEON_cnt((ulong)uVar44,1);
    uVar25 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar28 / uVar21;
    }
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar44 & 0xffff0000) != 0;
      uVar28 = uVar44 >> 0x10;
      if (!bVar20) {
        uVar28 = uVar44;
      }
      uVar43 = (uint)bVar20;
      uVar31 = uVar43 << 4 | 8;
      uVar42 = uVar28 >> 8;
      if (uVar28 < 0x100) {
        uVar31 = uVar43 << 4;
        uVar42 = uVar28;
      }
      uVar28 = uVar31 | 4;
      uVar43 = uVar42 >> 4;
      if (uVar42 < 0x10) {
        uVar28 = uVar31;
        uVar43 = uVar42;
      }
      uVar31 = uVar28 | 2;
      uVar42 = uVar43 >> 2;
      if (uVar43 < 4) {
        uVar31 = uVar28;
        uVar42 = uVar43;
      }
      local_15c = (uVar42 + uVar31) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar28 = 0;
    if (uVar22 != 0) {
      uVar28 = uVar29 / uVar22;
    }
    uVar52 = NEON_cnt((ulong)uVar25,1);
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar25 & 0xffff0000) != 0;
      uVar22 = uVar25 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar25;
      }
      uVar42 = (uint)bVar20;
      uVar29 = uVar42 << 4 | 8;
      uVar31 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar29 = uVar42 << 4;
        uVar31 = uVar22;
      }
      uVar22 = uVar29 | 4;
      uVar42 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar22 = uVar29;
        uVar42 = uVar31;
      }
      uVar29 = uVar22 | 2;
      uVar31 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar29 = uVar22;
        uVar31 = uVar42;
      }
      local_12c = (uVar31 + uVar29) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar52 = NEON_cnt((ulong)uVar28,1);
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar28 & 0xffff0000) != 0;
      uVar22 = uVar28 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar28;
      }
      uVar42 = (uint)bVar20;
      uVar29 = uVar42 << 4 | 8;
      uVar31 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar29 = uVar42 << 4;
        uVar31 = uVar22;
      }
      uVar22 = uVar29 | 4;
      uVar42 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar22 = uVar29;
        uVar42 = uVar31;
      }
      uVar29 = uVar22 | 2;
      uVar31 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar29 = uVar22;
        uVar31 = uVar42;
      }
      local_160 = (uVar31 + uVar29) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar40 < 2) {
        uVar40 = 1;
      }
      if (uVar44 < 2) {
        uVar44 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar29 = *(uint *)(param_5 + 0x58);
        if (uVar29 < *(uint *)(param_5 + 0x5c)) {
LAB_007cfe20:
          uVar31 = 0;
          lVar39 = *(long *)param_3;
          uVar42 = uVar26 * (uVar24 * (uVar22 << (ulong)(local_15c & 0x1f)) +
                            (uVar29 << (ulong)(local_118 & 0x1f)));
          do {
            uVar43 = 0;
            uVar3 = uVar42;
            do {
              uVar41 = (ulong)(uVar3 >> 3) & 0xffff;
              lVar45 = *(long *)(lVar39 + (ulong)(uVar3 >> 0x13) * 8);
              if ((uint)uVar41 < 0xfffd) {
                uVar46 = *(uint *)(lVar45 + uVar41);
              }
              else {
                uVar46 = (uVar3 >> 3) + 1;
                uVar2 = (uVar3 >> 3) + 2;
                uVar46 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar39 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar39 + (ulong)(uVar46 >> 0x10) * 8) +
                                                  ((ulong)uVar46 & 0xffff)),
                                                 *(undefined *)(lVar45 + uVar41)));
              }
              uVar46 = uVar46 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar26 & 0x1f)) & 0xffffU;
              piVar38 = (int *)(param_6 + 4);
              if ((iVar35 == 2) || ((iVar35 == 0) != ((uVar46 & uVar17) != uVar5))) {
                uVar46 = uVar46 >> (ulong)(uVar4 & 0x1f) & uVar16;
                if (((int)uVar46 < iVar32) || (iVar7 < (int)uVar46)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007cff34;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007cff34:
                  if ((uVar6 == 0) || ((uVar46 & uVar6) != 0)) {
                    uVar31 = 0;
                    uVar42 = uVar29 << (ulong)(local_12c & 0x1f);
                    goto LAB_007cff74;
                  }
                }
              }
              uVar43 = uVar43 + 1;
              uVar3 = uVar3 + uVar26;
            } while (uVar43 != uVar40);
            uVar31 = uVar31 + 1;
            uVar42 = uVar42 + uVar24 * uVar26;
          } while (uVar31 != uVar44);
          goto LAB_007cfe00;
        }
LAB_007cfd84:
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar40 = 0;
    if (uVar24 != 0) {
      uVar40 = uVar21 / uVar24;
    }
    uVar44 = 0;
    if (uVar25 != 0) {
      uVar44 = uVar22 / uVar25;
    }
    uVar52 = NEON_cnt((ulong)uVar40,1);
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar40 & 0xffff0000) != 0;
      uVar25 = uVar40 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar40;
      }
      uVar42 = (uint)bVar20;
      uVar40 = uVar42 << 4 | 8;
      uVar31 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar40 = uVar42 << 4;
        uVar31 = uVar25;
      }
      uVar25 = uVar40 | 4;
      uVar42 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar25 = uVar40;
        uVar42 = uVar31;
      }
      uVar40 = uVar25 | 2;
      uVar31 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar40 = uVar25;
        uVar31 = uVar42;
      }
      uVar25 = (uVar31 + uVar40) - 1;
    }
    else {
      uVar25 = 0;
    }
    uVar52 = NEON_cnt((ulong)uVar44,1);
    uVar40 = 0;
    if (uVar28 != 0) {
      uVar40 = uVar21 / uVar28;
    }
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar44 & 0xffff0000) != 0;
      uVar28 = uVar44 >> 0x10;
      if (!bVar20) {
        uVar28 = uVar44;
      }
      uVar42 = (uint)bVar20;
      uVar44 = uVar42 << 4 | 8;
      uVar31 = uVar28 >> 8;
      if (uVar28 < 0x100) {
        uVar44 = uVar42 << 4;
        uVar31 = uVar28;
      }
      uVar28 = uVar44 | 4;
      uVar42 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar28 = uVar44;
        uVar42 = uVar31;
      }
      uVar44 = uVar28 | 2;
      uVar31 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar44 = uVar28;
        uVar31 = uVar42;
      }
      local_cc = (uVar31 + uVar44) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar28 = 0;
    if (uVar29 != 0) {
      uVar28 = uVar22 / uVar29;
    }
    uVar52 = NEON_cnt((ulong)uVar40,1);
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar40 & 0xffff0000) != 0;
      uVar22 = uVar40 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar40;
      }
      uVar44 = (uint)bVar20;
      uVar29 = uVar44 << 4 | 8;
      uVar40 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar29 = uVar44 << 4;
        uVar40 = uVar22;
      }
      uVar22 = uVar29 | 4;
      uVar44 = uVar40 >> 4;
      if (uVar40 < 0x10) {
        uVar22 = uVar29;
        uVar44 = uVar40;
      }
      uVar29 = uVar22 | 2;
      uVar40 = uVar44 >> 2;
      if (uVar44 < 4) {
        uVar29 = uVar22;
        uVar40 = uVar44;
      }
      local_78 = (uVar40 + uVar29) - 1;
    }
    else {
      local_78 = 0;
    }
    uVar52 = NEON_cnt((ulong)uVar28,1);
    uVar51 = NEON_uaddlv(uVar52,1);
    if ((int)CONCAT62((int6)((ulong)uVar52 >> 0x10),uVar51) == 1) {
      bVar20 = (uVar28 & 0xffff0000) != 0;
      uVar22 = uVar28 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar28;
      }
      uVar40 = (uint)bVar20;
      uVar28 = uVar40 << 4 | 8;
      uVar29 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar28 = uVar40 << 4;
        uVar29 = uVar22;
      }
      uVar22 = uVar28 | 4;
      uVar40 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar22 = uVar28;
        uVar40 = uVar29;
      }
      uVar28 = uVar22 | 2;
      uVar29 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar28 = uVar22;
        uVar29 = uVar40;
      }
      local_d8 = (uVar29 + uVar28) - 1;
    }
    else {
      local_d8 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      piVar38 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar28 = *(uint *)(param_5 + 0x58);
        if (uVar28 < *(uint *)(param_5 + 0x5c)) {
          uVar29 = uVar22 >> (ulong)(local_d8 & 0x1f);
          do {
            lVar45 = *(long *)param_3;
            uVar40 = ((uVar28 >> (ulong)(uVar25 & 0x1f)) +
                     (uVar22 >> (ulong)(local_cc & 0x1f)) * uVar24) * uVar26;
            uVar41 = (ulong)(uVar40 >> 3) & 0xffff;
            lVar39 = *(long *)(lVar45 + (ulong)(uVar40 >> 0x13) * 8);
            if ((uint)uVar41 < 0xfffd) {
              uVar44 = *(uint *)(lVar39 + uVar41);
            }
            else {
              uVar44 = (uVar40 >> 3) + 1;
              uVar31 = (uVar40 >> 3) + 2;
              uVar44 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar45 + (ulong)(uVar31 >> 0x10) * 8) +
                                       ((ulong)uVar31 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar45 + (ulong)(uVar44 >> 0x10) * 8) +
                                                ((ulong)uVar44 & 0xffff)),
                                               *(undefined *)(lVar39 + uVar41)));
            }
            uVar40 = uVar44 >> (ulong)(uVar40 & 7) & ~(-1 << (ulong)(uVar26 & 0x1f)) & 0xffffU;
            piVar37 = piVar38;
            if ((((iVar35 == 2) || ((iVar35 == 0) != ((uVar40 & uVar17) != uVar5))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar6 == 0 || ((uVar40 >> (ulong)(uVar4 & 0x1f) & uVar16 & uVar6) != 0)))) {
              uVar40 = uVar28 >> (ulong)(local_78 & 0x1f);
              uVar44 = (((uVar29 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar40 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar36 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar44 * 8);
              uVar40 = uVar40 & 0x1f | (uVar29 & 0x1f) << 5;
              uVar31 = (**ppcVar36)(ppcVar36,uVar40,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar41 = 1;
                puVar49 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar36 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar44 + (int)uVar41) * 8);
                  iVar32 = (**ppcVar36)(ppcVar36,uVar40,0,*puVar49);
                  puVar1 = puVar49 + -1;
                  uVar41 = uVar41 + 1;
                  puVar49 = puVar49 + 2;
                  uVar31 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar31;
                } while (uVar41 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar8 != 2) && ((iVar8 == 0) == ((uVar31 & uVar19) != uVar10))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar30 != 0 && ((uVar31 >> (ulong)(uVar27 & 0x1f) & uVar18 & uVar30) == 0))))))
              goto LAB_007cfa50;
              uVar40 = (uVar28 + uVar22 * uVar21) * uVar23;
              lVar45 = *(long *)param_2;
              uVar41 = (ulong)(uVar40 >> 3) & 0xffff;
              lVar39 = *(long *)(lVar45 + (ulong)(uVar40 >> 0x13) * 8);
              if ((uint)uVar41 < 0xfffd) {
                uVar44 = *(uint *)(lVar39 + uVar41);
              }
              else {
                uVar44 = (uVar40 >> 3) + 1;
                uVar31 = (uVar40 >> 3) + 2;
                uVar44 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar45 + (ulong)(uVar31 >> 0x10) * 8) +
                                         ((ulong)uVar31 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar45 + (ulong)(uVar44 >> 0x10) * 8) +
                                                  ((ulong)uVar44 & 0xffff)),
                                                 *(undefined *)(lVar39 + uVar41)));
              }
              uVar40 = uVar44 >> (ulong)(uVar40 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
              uVar44 = uVar40 & *(uint *)(param_6 + 0x20);
              uVar40 = uVar40 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              *(uint *)(param_6 + 0x40) = uVar40;
              *(uint *)(param_6 + 0x44) = uVar44;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) != (*(uint *)(param_6 + 0x28) != uVar44))) {
                if ((int)uVar40 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007cfb14:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007cfa5c;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar40) goto joined_r0x007cfb14;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007cfa5c;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar40) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar40 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar40) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar37 = (int *)(param_6 + 8);
                  goto LAB_007cfa50;
                }
              }
            }
            else {
LAB_007cfa50:
              *piVar37 = *piVar37 + 1;
            }
LAB_007cfa5c:
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(uint *)(param_5 + 0x5c));
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007cff74:
  do {
    uVar43 = 0;
    uVar41 = (ulong)*(uint *)(param_4 + 0x34);
    uVar46 = uVar31 + (uVar22 << (ulong)(local_160 & 0x1f));
    uVar3 = uVar42;
    do {
      uVar2 = uVar43 + uVar42;
      iVar15 = (uVar46 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar47 = (int)uVar41;
      ppcVar36 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar15 + (uVar2 >> 5)) * iVar47) * 8);
      uVar2 = uVar2 & 0x1f | (uVar46 & 0x1f) << 5;
      uVar33 = (**ppcVar36)(ppcVar36,uVar2,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar41 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar8 != 2) goto LAB_007d0080;
LAB_007d00a0:
        uVar2 = uVar33 >> (ulong)(uVar27 & 0x1f) & uVar18;
        if (((int)uVar2 < iVar11) || (iVar9 < (int)uVar2)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007d00cc;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007d00cc:
          if ((uVar30 == 0) || ((uVar2 & uVar30) != 0)) {
            lVar45 = *(long *)param_2;
            uVar31 = (uVar29 + uVar22 * uVar21) * uVar23;
            uVar41 = (ulong)(uVar31 >> 3) & 0xffff;
            lVar39 = *(long *)(lVar45 + (ulong)(uVar31 >> 0x13) * 8);
            if ((uint)uVar41 < 0xfffd) {
              uVar42 = *(uint *)(lVar39 + uVar41);
            }
            else {
              uVar42 = (uVar31 >> 3) + 1;
              uVar43 = (uVar31 >> 3) + 2;
              uVar42 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar45 + (ulong)(uVar43 >> 0x10) * 8) +
                                       ((ulong)uVar43 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar45 + (ulong)(uVar42 >> 0x10) * 8) +
                                                ((ulong)uVar42 & 0xffff)),
                                               *(undefined *)(lVar39 + uVar41)));
            }
            uVar31 = uVar42 >> (ulong)(uVar31 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
            uVar42 = uVar31 & *(uint *)(param_6 + 0x20);
            uVar31 = uVar31 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            *(uint *)(param_6 + 0x40) = uVar31;
            *(uint *)(param_6 + 0x44) = uVar42;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) == (*(uint *)(param_6 + 0x28) != uVar42)))
            goto LAB_007cfe0c;
            if ((int)uVar31 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007d01f4:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007cfe0c;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar31) goto joined_r0x007d01f4;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007cfe0c;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar31) == 0))
            goto LAB_007cfe0c;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar31 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar31) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar38 = (int *)(param_6 + 8);
            goto LAB_007cfe00;
          }
        }
      }
      else {
        uVar48 = 1;
        puVar49 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar36 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar47 * (iVar15 + (uVar3 >> 5)) + (int)uVar48) * 8);
          iVar34 = (**ppcVar36)(ppcVar36,uVar2,0,*puVar49);
          puVar1 = puVar49 + -1;
          uVar48 = uVar48 + 1;
          uVar41 = (ulong)*(uint *)(param_4 + 0x34);
          puVar49 = puVar49 + 2;
          uVar33 = iVar34 << (ulong)(*puVar1 & 0x1f) | uVar33;
        } while (uVar48 < uVar41);
        if (iVar8 == 2) goto LAB_007d00a0;
LAB_007d0080:
        if ((iVar8 == 0) != ((uVar33 & uVar19) != uVar10)) goto LAB_007d00a0;
      }
      uVar43 = uVar43 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar43 != uVar25);
    uVar31 = uVar31 + 1;
  } while (uVar31 != uVar28);
LAB_007cfe00:
  *piVar38 = *piVar38 + 1;
LAB_007cfe0c:
  uVar29 = uVar29 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar29) goto LAB_007cfd84;
  goto LAB_007cfe20;
}


