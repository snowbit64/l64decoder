// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c5110
// Size: 4204 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, BitVector, BitVector,
   ParallelogramHelper, DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>
   >(IDensityPixelSource*, ChunkedBitSquare*, BitVector*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,GetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  DensityMapFilter DVar11;
  DensityMapFilter DVar12;
  GetDensityProcessor GVar13;
  int iVar14;
  uint uVar15;
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
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  uint uVar44;
  uint uVar45;
  undefined4 *puVar46;
  long *plVar47;
  undefined2 uVar48;
  undefined8 uVar49;
  uint local_160;
  uint local_15c;
  uint local_114;
  uint local_e4;
  
  uVar21 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar22 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar47 = *(long **)param_7;
  uVar23 = (**(code **)(*plVar47 + 0x18))(plVar47);
  uVar24 = (**(code **)(*plVar47 + 0x20))(plVar47);
  uVar25 = (**(code **)(*plVar47 + 0x30))(plVar47);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar35 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  plVar47 = *(long **)param_8;
  DVar11 = param_7[0x20];
  iVar6 = *(int *)(param_7 + 0x18);
  iVar7 = *(int *)(param_7 + 0x1c);
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar16 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar27 = (**(code **)(*plVar47 + 0x18))(plVar47);
  uVar28 = (**(code **)(*plVar47 + 0x20))(plVar47);
  uVar29 = (**(code **)(*plVar47 + 0x30))(plVar47);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar26 = *(uint *)(param_8 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar30 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  DVar12 = param_8[0x20];
  uVar18 = ~(-1 << (ulong)(uVar30 & 0x1f));
  uVar30 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar23) || (uVar22 < uVar24)) || (uVar21 < uVar27)) || (uVar22 < uVar28)) {
    if (((uVar23 < uVar21) || (uVar24 < uVar22)) || ((uVar27 < uVar21 || (uVar28 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar35 != 0
         )) {
                    /* try { // try from 007c6144 to 007c614f has its CatchHandler @ 007c617c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar23,(ulong)uVar24,(ulong)uVar27,(ulong)uVar28,(ulong)uVar21,
                         (ulong)uVar22);
      return false;
    }
    uVar19 = 0;
    if (uVar22 != 0) {
      uVar19 = uVar24 / uVar22;
    }
    uVar24 = 0;
    if (uVar21 != 0) {
      uVar24 = uVar23 / uVar21;
    }
    uVar49 = NEON_cnt((ulong)uVar24,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar31 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar31 = uVar24;
      }
      uVar33 = (uint)bVar20;
      uVar44 = uVar33 << 4 | 8;
      uVar41 = uVar31 >> 8;
      if (uVar31 < 0x100) {
        uVar44 = uVar33 << 4;
        uVar41 = uVar31;
      }
      uVar31 = uVar44 | 4;
      uVar33 = uVar41 >> 4;
      if (uVar41 < 0x10) {
        uVar31 = uVar44;
        uVar33 = uVar41;
      }
      uVar44 = uVar31 | 2;
      uVar41 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar44 = uVar31;
        uVar41 = uVar33;
      }
      local_e4 = (uVar41 + uVar44) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar19,1);
    uVar31 = 0;
    if (uVar21 != 0) {
      uVar31 = uVar27 / uVar21;
    }
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar19 & 0xffff0000) != 0;
      uVar21 = uVar19 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar19;
      }
      uVar33 = (uint)bVar20;
      uVar44 = uVar33 << 4 | 8;
      uVar41 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar44 = uVar33 << 4;
        uVar41 = uVar21;
      }
      uVar21 = uVar44 | 4;
      uVar33 = uVar41 >> 4;
      if (uVar41 < 0x10) {
        uVar21 = uVar44;
        uVar33 = uVar41;
      }
      uVar44 = uVar21 | 2;
      uVar41 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar44 = uVar21;
        uVar41 = uVar33;
      }
      local_15c = (uVar41 + uVar44) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar28 / uVar22;
    }
    uVar49 = NEON_cnt((ulong)uVar31,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar31 & 0xffff0000) != 0;
      uVar22 = uVar31 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar31;
      }
      uVar41 = (uint)bVar20;
      uVar28 = uVar41 << 4 | 8;
      uVar44 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar28 = uVar41 << 4;
        uVar44 = uVar22;
      }
      uVar22 = uVar28 | 4;
      uVar41 = uVar44 >> 4;
      if (uVar44 < 0x10) {
        uVar22 = uVar28;
        uVar41 = uVar44;
      }
      uVar28 = uVar22 | 2;
      uVar44 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar28 = uVar22;
        uVar44 = uVar41;
      }
      uVar22 = (uVar44 + uVar28) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar21,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar28 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar28 = uVar21;
      }
      uVar33 = (uint)bVar20;
      uVar44 = uVar33 << 4 | 8;
      uVar41 = uVar28 >> 8;
      if (uVar28 < 0x100) {
        uVar44 = uVar33 << 4;
        uVar41 = uVar28;
      }
      uVar28 = uVar44 | 4;
      uVar33 = uVar41 >> 4;
      if (uVar41 < 0x10) {
        uVar28 = uVar44;
        uVar33 = uVar41;
      }
      uVar44 = uVar28 | 2;
      uVar41 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar44 = uVar28;
        uVar41 = uVar33;
      }
      local_160 = (uVar41 + uVar44) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar28 = *(uint *)(param_5 + 0x48);
    if (uVar28 < *(uint *)(param_5 + 0x4c)) {
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      if (uVar31 < 2) {
        uVar31 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar28);
        uVar44 = *(uint *)(param_5 + 0x58);
        if (uVar44 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar41 = 0;
            uVar33 = uVar25 * (uVar23 * (uVar28 << (ulong)(local_15c & 0x1f)) +
                              (uVar44 << (ulong)(local_e4 & 0x1f)));
            lVar39 = *(long *)param_3;
            do {
              uVar42 = 0;
              uVar3 = uVar33;
              do {
                uVar40 = (ulong)(uVar3 >> 3) & 0xffff;
                lVar43 = *(long *)(lVar39 + (ulong)(uVar3 >> 0x13) * 8);
                if ((uint)uVar40 < 0xfffd) {
                  uVar45 = *(uint *)(lVar43 + uVar40);
                }
                else {
                  uVar45 = (uVar3 >> 3) + 1;
                  uVar2 = (uVar3 >> 3) + 2;
                  uVar45 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar39 + (ulong)(uVar2 >> 0x10) * 8) +
                                           ((ulong)uVar2 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar39 + (ulong)(uVar45 >> 0x10) * 8)
                                                    + ((ulong)uVar45 & 0xffff)),
                                                   *(undefined *)(lVar43 + uVar40)));
                }
                uVar45 = uVar45 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
                piVar38 = (int *)(param_6 + 4);
                if ((iVar35 == 2) || ((iVar35 == 0) != ((uVar45 & uVar16) != uVar5))) {
                  uVar45 = uVar45 >> (ulong)(uVar4 & 0x1f) & uVar15;
                  if (((int)uVar45 < iVar6) || (iVar7 < (int)uVar45)) {
                    if (DVar11 != (DensityMapFilter)0x0) goto LAB_007c5e40;
                  }
                  else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007c5e40:
                    if ((uVar8 == 0) || ((uVar45 & uVar8) != 0)) {
                      uVar41 = 0;
                      uVar33 = uVar29 * (uVar27 * (uVar28 << (ulong)(local_160 & 0x1f)) +
                                        (uVar44 << (ulong)(uVar22 & 0x1f)));
                      lVar39 = *(long *)param_4;
                      goto LAB_007c5e8c;
                    }
                  }
                }
                uVar42 = uVar42 + 1;
                uVar3 = uVar3 + uVar25;
              } while (uVar42 != uVar24);
              uVar41 = uVar41 + 1;
              uVar33 = uVar33 + uVar23 * uVar25;
            } while (uVar41 != uVar19);
LAB_007c5d24:
            *piVar38 = *piVar38 + 1;
LAB_007c5d30:
            uVar44 = uVar44 + 1;
          } while (uVar44 < *(uint *)(param_5 + 0x5c));
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar19 = 0;
    if (uVar23 != 0) {
      uVar19 = uVar21 / uVar23;
    }
    uVar31 = 0;
    if (uVar24 != 0) {
      uVar31 = uVar22 / uVar24;
    }
    uVar49 = NEON_cnt((ulong)uVar19,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar19 & 0xffff0000) != 0;
      uVar24 = uVar19 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar19;
      }
      uVar41 = (uint)bVar20;
      uVar19 = uVar41 << 4 | 8;
      uVar44 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar19 = uVar41 << 4;
        uVar44 = uVar24;
      }
      uVar24 = uVar19 | 4;
      uVar41 = uVar44 >> 4;
      if (uVar44 < 0x10) {
        uVar24 = uVar19;
        uVar41 = uVar44;
      }
      uVar19 = uVar24 | 2;
      uVar44 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar19 = uVar24;
        uVar44 = uVar41;
      }
      uVar24 = (uVar44 + uVar19) - 1;
    }
    else {
      uVar24 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar31,1);
    uVar19 = 0;
    if (uVar27 != 0) {
      uVar19 = uVar21 / uVar27;
    }
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar31 & 0xffff0000) != 0;
      uVar21 = uVar31 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar31;
      }
      uVar41 = (uint)bVar20;
      uVar31 = uVar41 << 4 | 8;
      uVar44 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar31 = uVar41 << 4;
        uVar44 = uVar21;
      }
      uVar21 = uVar31 | 4;
      uVar41 = uVar44 >> 4;
      if (uVar44 < 0x10) {
        uVar21 = uVar31;
        uVar41 = uVar44;
      }
      uVar31 = uVar21 | 2;
      uVar44 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar31 = uVar21;
        uVar44 = uVar41;
      }
      local_e4 = (uVar44 + uVar31) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar21 = 0;
    if (uVar28 != 0) {
      uVar21 = uVar22 / uVar28;
    }
    uVar49 = NEON_cnt((ulong)uVar19,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar19 & 0xffff0000) != 0;
      uVar22 = uVar19 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar19;
      }
      uVar31 = (uint)bVar20;
      uVar28 = uVar31 << 4 | 8;
      uVar19 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar28 = uVar31 << 4;
        uVar19 = uVar22;
      }
      uVar22 = uVar28 | 4;
      uVar31 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar22 = uVar28;
        uVar31 = uVar19;
      }
      uVar28 = uVar22 | 2;
      uVar19 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar28 = uVar22;
        uVar19 = uVar31;
      }
      uVar22 = (uVar19 + uVar28) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar49 = NEON_cnt((ulong)uVar21,1);
    uVar48 = NEON_uaddlv(uVar49,1);
    if ((int)CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar48) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar28 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar28 = uVar21;
      }
      uVar31 = (uint)bVar20;
      uVar21 = uVar31 << 4 | 8;
      uVar19 = uVar28 >> 8;
      if (uVar28 < 0x100) {
        uVar21 = uVar31 << 4;
        uVar19 = uVar28;
      }
      uVar28 = uVar21 | 4;
      uVar31 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar28 = uVar21;
        uVar31 = uVar19;
      }
      uVar21 = uVar28 | 2;
      uVar19 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar21 = uVar28;
        uVar19 = uVar31;
      }
      local_114 = (uVar19 + uVar21) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      piVar38 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar28 = *(uint *)(param_5 + 0x58);
        if (uVar28 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar43 = *(long *)param_3;
            uVar19 = ((uVar28 >> (ulong)(uVar24 & 0x1f)) +
                     (uVar21 >> (ulong)(local_e4 & 0x1f)) * uVar23) * uVar25;
            uVar40 = (ulong)(uVar19 >> 3) & 0xffff;
            lVar39 = *(long *)(lVar43 + (ulong)(uVar19 >> 0x13) * 8);
            if ((uint)uVar40 < 0xfffd) {
              uVar31 = *(uint *)(lVar39 + uVar40);
            }
            else {
              uVar31 = (uVar19 >> 3) + 1;
              uVar44 = (uVar19 >> 3) + 2;
              uVar31 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar43 + (ulong)(uVar44 >> 0x10) * 8) +
                                       ((ulong)uVar44 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar43 + (ulong)(uVar31 >> 0x10) * 8) +
                                                ((ulong)uVar31 & 0xffff)),
                                               *(undefined *)(lVar39 + uVar40)));
            }
            uVar19 = uVar31 >> (ulong)(uVar19 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
            piVar37 = piVar38;
            if ((((iVar35 == 2) || ((iVar35 == 0) != ((uVar19 & uVar16) != uVar5))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar19 >> (ulong)(uVar4 & 0x1f) & uVar15 & uVar8) != 0)))) {
              lVar43 = *(long *)param_4;
              uVar19 = ((uVar28 >> (ulong)(uVar22 & 0x1f)) +
                       (uVar21 >> (ulong)(local_114 & 0x1f)) * uVar27) * uVar29;
              uVar40 = (ulong)(uVar19 >> 3) & 0xffff;
              lVar39 = *(long *)(lVar43 + (ulong)(uVar19 >> 0x13) * 8);
              if ((uint)uVar40 < 0xfffd) {
                uVar31 = *(uint *)(lVar39 + uVar40);
              }
              else {
                uVar31 = (uVar19 >> 3) + 1;
                uVar44 = (uVar19 >> 3) + 2;
                uVar31 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar43 + (ulong)(uVar44 >> 0x10) * 8) +
                                         ((ulong)uVar44 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar43 + (ulong)(uVar31 >> 0x10) * 8) +
                                                  ((ulong)uVar31 & 0xffff)),
                                                 *(undefined *)(lVar39 + uVar40)));
              }
              uVar19 = uVar31 >> (ulong)(uVar19 & 7) & ~(-1 << (ulong)(uVar29 & 0x1f)) & 0xffffU;
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar19 & uVar18) != uVar10))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar30 != 0 && ((uVar19 >> (ulong)(uVar26 & 0x1f) & uVar17 & uVar30) == 0))))))
              goto LAB_007c5a54;
              iVar6 = *(int *)(param_2 + 0x34);
              iVar7 = (uVar21 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar36 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar7 + (uVar28 >> 5)) * iVar6) * 8)
              ;
              uVar19 = uVar28 & 0x1f | (uVar21 & 0x1f) << 5;
              uVar31 = (**ppcVar36)(ppcVar36,uVar19,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar40 = 1;
                puVar46 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar36 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar6 * (iVar7 + (uVar28 >> 5)) + (int)uVar40) * 8);
                  iVar32 = (**ppcVar36)(ppcVar36,uVar19,0,*puVar46);
                  puVar1 = puVar46 + -1;
                  uVar40 = uVar40 + 1;
                  puVar46 = puVar46 + 2;
                  uVar31 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar31;
                } while (uVar40 < *(uint *)(param_2 + 0x34));
              }
              uVar19 = uVar31 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar19;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar31;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar31)))) {
                if ((int)uVar19 < *(int *)(param_6 + 0x2c)) {
                  GVar13 = param_6[0x34];
joined_r0x007c5a1c:
                  if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007c5a60;
                }
                else {
                  GVar13 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar19) goto joined_r0x007c5a1c;
                  if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007c5a60;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar19) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar19 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar19) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar37 = (int *)(param_6 + 8);
                  goto LAB_007c5a54;
                }
              }
            }
            else {
LAB_007c5a54:
              *piVar37 = *piVar37 + 1;
            }
LAB_007c5a60:
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(uint *)(param_5 + 0x5c));
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c5e8c:
  uVar42 = 0;
  uVar3 = uVar33;
LAB_007c5eb0:
  uVar40 = (ulong)(uVar3 >> 3) & 0xffff;
  lVar43 = *(long *)(lVar39 + (ulong)(uVar3 >> 0x13) * 8);
  if ((uint)uVar40 < 0xfffd) {
    uVar45 = *(uint *)(lVar43 + uVar40);
  }
  else {
    uVar45 = (uVar3 >> 3) + 1;
    uVar2 = (uVar3 >> 3) + 2;
    uVar45 = (uint)CONCAT12(*(undefined *)
                             (*(long *)(lVar39 + (ulong)(uVar2 >> 0x10) * 8) +
                             ((ulong)uVar2 & 0xffff)),
                            CONCAT11(*(undefined *)
                                      (*(long *)(lVar39 + (ulong)(uVar45 >> 0x10) * 8) +
                                      ((ulong)uVar45 & 0xffff)),*(undefined *)(lVar43 + uVar40)));
  }
  uVar45 = uVar45 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar29 & 0x1f)) & 0xffffU;
  if ((((iVar9 != 2) && ((iVar9 == 0) == ((uVar45 & uVar18) != uVar10))) ||
      (DVar12 != (DensityMapFilter)0x0)) ||
     ((uVar30 != 0 && ((uVar45 >> (ulong)(uVar26 & 0x1f) & uVar17 & uVar30) == 0))))
  goto LAB_007c5ea0;
  iVar32 = *(int *)(param_2 + 0x34);
  iVar14 = (uVar28 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar36 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar14 + (uVar44 >> 5)) * iVar32) * 8)
  ;
  uVar41 = uVar44 & 0x1f | (uVar28 & 0x1f) << 5;
  uVar33 = (**ppcVar36)(ppcVar36,uVar41,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar40 = 1;
    puVar46 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar36 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar32 * (iVar14 + (uVar44 >> 5)) + (int)uVar40) * 8);
      iVar34 = (**ppcVar36)(ppcVar36,uVar41,0,*puVar46);
      puVar1 = puVar46 + -1;
      uVar40 = uVar40 + 1;
      puVar46 = puVar46 + 2;
      uVar33 = iVar34 << (ulong)(*puVar1 & 0x1f) | uVar33;
    } while (uVar40 < *(uint *)(param_2 + 0x34));
  }
  uVar41 = uVar33 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar41;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar33;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar33)))) {
    if ((int)uVar41 < *(int *)(param_6 + 0x2c)) {
      GVar13 = param_6[0x34];
    }
    else {
      GVar13 = param_6[0x34];
    }
    if ((GVar13 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar41) == 0))))
    goto LAB_007c5d30;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar41 &
         ((int)(*(int *)(param_6 + 0xc) + uVar41) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar38 = (int *)(param_6 + 8);
    goto LAB_007c5d24;
  }
  goto LAB_007c5d30;
LAB_007c5ea0:
  uVar42 = uVar42 + 1;
  uVar3 = uVar3 + uVar29;
  if (uVar42 == uVar31) goto LAB_007c5e74;
  goto LAB_007c5eb0;
LAB_007c5e74:
  uVar41 = uVar41 + 1;
  uVar33 = uVar33 + uVar27 * uVar29;
  if (uVar41 == uVar21) goto LAB_007c5d24;
  goto LAB_007c5e8c;
}


