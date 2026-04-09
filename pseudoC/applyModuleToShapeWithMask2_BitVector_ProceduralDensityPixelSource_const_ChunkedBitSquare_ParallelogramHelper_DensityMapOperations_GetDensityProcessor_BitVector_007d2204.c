// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d2204
// Size: 3964 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ProceduralDensityPixelSource
   const, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*, BitVector*,
   ProceduralDensityPixelSource const*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,ChunkedBitSquare *param_4,
               ParallelogramHelper *param_5,GetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
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
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  code **ppcVar36;
  int *piVar37;
  int *piVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  long *plVar43;
  uint uVar44;
  ulong uVar45;
  undefined4 *puVar46;
  ulong uVar47;
  int iVar48;
  undefined2 uVar49;
  undefined8 uVar50;
  uint local_148;
  uint local_144;
  uint local_114;
  uint local_104;
  uint local_ec;
  uint local_e8;
  uint local_78;
  
  uVar21 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar22 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar23 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  uVar24 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar25 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar35 = *(int *)(param_7 + 8);
  plVar43 = *(long **)param_8;
  iVar31 = *(int *)(param_7 + 0x18);
  iVar5 = *(int *)(param_7 + 0x1c);
  DVar12 = param_7[0x20];
  uVar6 = *(uint *)(param_7 + 0xc);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar17 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar27 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar28 = (**(code **)(*plVar43 + 0x20))(plVar43);
  (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar26 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar29 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  uVar9 = *(uint *)(param_8 + 0xc);
  iVar10 = *(int *)(param_8 + 0x18);
  iVar11 = *(int *)(param_8 + 0x1c);
  DVar13 = param_8[0x20];
  uVar19 = ~(-1 << (ulong)(uVar29 & 0x1f));
  uVar29 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar24) || (uVar22 < uVar25)) || (uVar21 < uVar27)) || (uVar22 < uVar28)) {
    if (((uVar24 < uVar21) || (uVar25 < uVar22)) || ((uVar27 < uVar21 || (uVar28 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar35 != 0
         )) {
                    /* try { // try from 007d3138 to 007d314b has its CatchHandler @ 007d3180 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar24,(ulong)uVar25,(ulong)uVar27,(ulong)uVar28,(ulong)uVar21,
                         (ulong)uVar22);
      return false;
    }
    uVar41 = 0;
    if (uVar22 != 0) {
      uVar41 = uVar25 / uVar22;
    }
    uVar25 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar24 / uVar21;
    }
    uVar50 = NEON_cnt((ulong)uVar25,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar25 & 0xffff0000) != 0;
      uVar24 = uVar25 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar25;
      }
      uVar32 = (uint)bVar20;
      uVar30 = uVar32 << 4 | 8;
      uVar40 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar30 = uVar32 << 4;
        uVar40 = uVar24;
      }
      uVar24 = uVar30 | 4;
      uVar32 = uVar40 >> 4;
      if (uVar40 < 0x10) {
        uVar24 = uVar30;
        uVar32 = uVar40;
      }
      uVar30 = uVar24 | 2;
      uVar40 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar30 = uVar24;
        uVar40 = uVar32;
      }
      local_104 = (uVar40 + uVar30) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar41,1);
    uVar24 = 0;
    if (uVar21 != 0) {
      uVar24 = uVar27 / uVar21;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar41 & 0xffff0000) != 0;
      uVar27 = uVar41 >> 0x10;
      if (!bVar20) {
        uVar27 = uVar41;
      }
      uVar32 = (uint)bVar20;
      uVar30 = uVar32 << 4 | 8;
      uVar40 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar30 = uVar32 << 4;
        uVar40 = uVar27;
      }
      uVar27 = uVar30 | 4;
      uVar32 = uVar40 >> 4;
      if (uVar40 < 0x10) {
        uVar27 = uVar30;
        uVar32 = uVar40;
      }
      uVar30 = uVar27 | 2;
      uVar40 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar30 = uVar27;
        uVar40 = uVar32;
      }
      local_144 = (uVar40 + uVar30) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar27 = 0;
    if (uVar22 != 0) {
      uVar27 = uVar28 / uVar22;
    }
    uVar50 = NEON_cnt((ulong)uVar24,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar40 = (uint)bVar20;
      uVar28 = uVar40 << 4 | 8;
      uVar30 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar28 = uVar40 << 4;
        uVar30 = uVar22;
      }
      uVar22 = uVar28 | 4;
      uVar40 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar22 = uVar28;
        uVar40 = uVar30;
      }
      uVar28 = uVar22 | 2;
      uVar30 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar28 = uVar22;
        uVar30 = uVar40;
      }
      local_114 = (uVar30 + uVar28) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar27,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar27 & 0xffff0000) != 0;
      uVar22 = uVar27 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar27;
      }
      uVar40 = (uint)bVar20;
      uVar28 = uVar40 << 4 | 8;
      uVar30 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar28 = uVar40 << 4;
        uVar30 = uVar22;
      }
      uVar22 = uVar28 | 4;
      uVar40 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar22 = uVar28;
        uVar40 = uVar30;
      }
      uVar28 = uVar22 | 2;
      uVar30 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar28 = uVar22;
        uVar30 = uVar40;
      }
      local_148 = (uVar30 + uVar28) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      if (uVar41 < 2) {
        uVar41 = 1;
      }
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar28 = *(uint *)(param_5 + 0x58);
        if (uVar28 < *(uint *)(param_5 + 0x5c)) {
LAB_007d2d60:
          uVar30 = 0;
          do {
            uVar40 = 0;
            do {
              uVar32 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar28 << (ulong)(local_104 & 0x1f)) + uVar40,
                                  uVar30 + (uVar22 << (ulong)(local_144 & 0x1f)));
              piVar38 = (int *)(param_6 + 4);
              if ((iVar35 == 2) || ((iVar35 == 0) != ((uVar32 & uVar17) != uVar6))) {
                uVar32 = uVar32 >> (ulong)(uVar4 & 0x1f) & uVar16;
                if (((int)uVar32 < iVar31) || (iVar5 < (int)uVar32)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007d2e18;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007d2e18:
                  if ((uVar7 == 0) || ((uVar32 & uVar7) != 0)) {
                    uVar30 = 0;
                    uVar40 = uVar28 << (ulong)(local_114 & 0x1f);
                    goto LAB_007d2e5c;
                  }
                }
              }
              uVar40 = uVar40 + 1;
            } while (uVar40 != uVar25);
            uVar30 = uVar30 + 1;
          } while (uVar30 != uVar41);
          goto LAB_007d2d44;
        }
LAB_007d2cd4:
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar41 = 0;
    if (uVar24 != 0) {
      uVar41 = uVar21 / uVar24;
    }
    uVar24 = 0;
    if (uVar25 != 0) {
      uVar24 = uVar22 / uVar25;
    }
    uVar50 = NEON_cnt((ulong)uVar41,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar41 & 0xffff0000) != 0;
      uVar25 = uVar41 >> 0x10;
      if (!bVar20) {
        uVar25 = uVar41;
      }
      uVar40 = (uint)bVar20;
      uVar41 = uVar40 << 4 | 8;
      uVar30 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar41 = uVar40 << 4;
        uVar30 = uVar25;
      }
      uVar25 = uVar41 | 4;
      uVar40 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar25 = uVar41;
        uVar40 = uVar30;
      }
      uVar41 = uVar25 | 2;
      uVar30 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar41 = uVar25;
        uVar30 = uVar40;
      }
      uVar25 = (uVar30 + uVar41) - 1;
    }
    else {
      uVar25 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar24,1);
    uVar41 = 0;
    if (uVar27 != 0) {
      uVar41 = uVar21 / uVar27;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar27 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar27 = uVar24;
      }
      uVar40 = (uint)bVar20;
      uVar24 = uVar40 << 4 | 8;
      uVar30 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar24 = uVar40 << 4;
        uVar30 = uVar27;
      }
      uVar27 = uVar24 | 4;
      uVar40 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar27 = uVar24;
        uVar40 = uVar30;
      }
      uVar24 = uVar27 | 2;
      uVar30 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar24 = uVar27;
        uVar30 = uVar40;
      }
      local_e8 = (uVar30 + uVar24) - 1;
    }
    else {
      local_e8 = 0;
    }
    uVar24 = 0;
    if (uVar28 != 0) {
      uVar24 = uVar22 / uVar28;
    }
    uVar50 = NEON_cnt((ulong)uVar41,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar41 & 0xffff0000) != 0;
      uVar22 = uVar41 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar41;
      }
      uVar41 = (uint)bVar20;
      uVar27 = uVar41 << 4 | 8;
      uVar28 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar41 << 4;
        uVar28 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar41 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar22 = uVar27;
        uVar41 = uVar28;
      }
      uVar27 = uVar22 | 2;
      uVar28 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar27 = uVar22;
        uVar28 = uVar41;
      }
      local_78 = (uVar28 + uVar27) - 1;
    }
    else {
      local_78 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar24,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar28 = (uint)bVar20;
      uVar24 = uVar28 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar24 = uVar28 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar24 | 4;
      uVar28 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar24;
        uVar28 = uVar27;
      }
      uVar24 = uVar22 | 2;
      uVar27 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar24 = uVar22;
        uVar27 = uVar28;
      }
      local_ec = (uVar27 + uVar24) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      piVar38 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar24 = *(uint *)(param_5 + 0x58);
        if (uVar24 < *(uint *)(param_5 + 0x5c)) {
          uVar27 = uVar22 >> (ulong)(local_ec & 0x1f);
          do {
            uVar28 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar24 >> (ulong)(uVar25 & 0x1f),
                                uVar22 >> (ulong)(local_e8 & 0x1f));
            piVar37 = piVar38;
            if ((((iVar35 == 2) || ((iVar35 == 0) != ((uVar28 & uVar17) != uVar6))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar28 >> (ulong)(uVar4 & 0x1f) & uVar16 & uVar7) != 0)))) {
              uVar28 = uVar24 >> (ulong)(local_78 & 0x1f);
              uVar41 = (((uVar27 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar28 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar36 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar41 * 8);
              uVar28 = uVar28 & 0x1f | (uVar27 & 0x1f) << 5;
              uVar30 = (**ppcVar36)(ppcVar36,uVar28,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar47 = 1;
                puVar46 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar36 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar41 + (int)uVar47) * 8);
                  iVar31 = (**ppcVar36)(ppcVar36,uVar28,0,*puVar46);
                  puVar1 = puVar46 + -1;
                  uVar47 = uVar47 + 1;
                  puVar46 = puVar46 + 2;
                  uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
                } while (uVar47 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar8 != 2) && ((iVar8 == 0) == ((uVar30 & uVar19) != uVar9))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar29 != 0 && ((uVar30 >> (ulong)(uVar26 & 0x1f) & uVar18 & uVar29) == 0))))))
              goto LAB_007d29d4;
              uVar28 = (uVar24 + uVar22 * uVar21) * uVar23;
              lVar42 = *(long *)param_2;
              uVar47 = (ulong)(uVar28 >> 3) & 0xffff;
              lVar39 = *(long *)(lVar42 + (ulong)(uVar28 >> 0x13) * 8);
              if ((uint)uVar47 < 0xfffd) {
                uVar41 = *(uint *)(lVar39 + uVar47);
              }
              else {
                uVar41 = (uVar28 >> 3) + 1;
                uVar30 = (uVar28 >> 3) + 2;
                uVar41 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar42 + (ulong)(uVar30 >> 0x10) * 8) +
                                         ((ulong)uVar30 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar42 + (ulong)(uVar41 >> 0x10) * 8) +
                                                  ((ulong)uVar41 & 0xffff)),
                                                 *(undefined *)(lVar39 + uVar47)));
              }
              uVar28 = uVar41 >> (ulong)(uVar28 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
              uVar41 = uVar28 & *(uint *)(param_6 + 0x20);
              uVar28 = uVar28 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              *(uint *)(param_6 + 0x40) = uVar28;
              *(uint *)(param_6 + 0x44) = uVar41;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) != (*(uint *)(param_6 + 0x28) != uVar41))) {
                if ((int)uVar28 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007d2a8c:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d29e0;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar28) goto joined_r0x007d2a8c;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d29e0;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar28) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar28 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar28) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar37 = (int *)(param_6 + 8);
                  goto LAB_007d29d4;
                }
              }
            }
            else {
LAB_007d29d4:
              *piVar37 = *piVar37 + 1;
            }
LAB_007d29e0:
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)(param_5 + 0x5c));
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d2e5c:
  do {
    uVar32 = 0;
    uVar47 = (ulong)*(uint *)(param_4 + 0x34);
    uVar2 = uVar30 + (uVar22 << (ulong)(local_148 & 0x1f));
    uVar44 = uVar40;
    do {
      uVar3 = uVar32 + uVar40;
      iVar15 = (uVar2 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar48 = (int)uVar47;
      ppcVar36 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar15 + (uVar3 >> 5)) * iVar48) * 8);
      uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
      uVar33 = (**ppcVar36)(ppcVar36,uVar3,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar47 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar8 != 2) goto LAB_007d2f60;
LAB_007d2f80:
        uVar3 = uVar33 >> (ulong)(uVar26 & 0x1f) & uVar18;
        if (((int)uVar3 < iVar10) || (iVar11 < (int)uVar3)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007d2fac;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007d2fac:
          if ((uVar29 == 0) || ((uVar3 & uVar29) != 0)) {
            uVar30 = (uVar28 + uVar22 * uVar21) * uVar23;
            lVar42 = *(long *)param_2;
            uVar47 = (ulong)(uVar30 >> 3) & 0xffff;
            lVar39 = *(long *)(lVar42 + (ulong)(uVar30 >> 0x13) * 8);
            if ((uint)uVar47 < 0xfffd) {
              uVar40 = *(uint *)(lVar39 + uVar47);
            }
            else {
              uVar40 = (uVar30 >> 3) + 1;
              uVar32 = (uVar30 >> 3) + 2;
              uVar40 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar42 + (ulong)(uVar32 >> 0x10) * 8) +
                                       ((ulong)uVar32 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar42 + (ulong)(uVar40 >> 0x10) * 8) +
                                                ((ulong)uVar40 & 0xffff)),
                                               *(undefined *)(lVar39 + uVar47)));
            }
            uVar30 = uVar40 >> (ulong)(uVar30 & 7) & ~(-1 << (ulong)(uVar23 & 0x1f)) & 0xffffU;
            uVar40 = uVar30 & *(uint *)(param_6 + 0x20);
            uVar30 = uVar30 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            *(uint *)(param_6 + 0x40) = uVar30;
            *(uint *)(param_6 + 0x44) = uVar40;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) == (*(uint *)(param_6 + 0x28) != uVar40)))
            goto LAB_007d2d50;
            if ((int)uVar30 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007d30c4:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007d2d50;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar30) goto joined_r0x007d30c4;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007d2d50;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar30) == 0))
            goto LAB_007d2d50;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar30 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar30) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar38 = (int *)(param_6 + 8);
            goto LAB_007d2d44;
          }
        }
      }
      else {
        uVar45 = 1;
        puVar46 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar36 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar48 * (iVar15 + (uVar44 >> 5)) + (int)uVar45) * 8);
          iVar34 = (**ppcVar36)(ppcVar36,uVar3,0,*puVar46);
          puVar1 = puVar46 + -1;
          uVar45 = uVar45 + 1;
          uVar47 = (ulong)*(uint *)(param_4 + 0x34);
          puVar46 = puVar46 + 2;
          uVar33 = iVar34 << (ulong)(*puVar1 & 0x1f) | uVar33;
        } while (uVar45 < uVar47);
        if (iVar8 == 2) goto LAB_007d2f80;
LAB_007d2f60:
        if ((iVar8 == 0) != ((uVar33 & uVar19) != uVar9)) goto LAB_007d2f80;
      }
      uVar32 = uVar32 + 1;
      uVar44 = uVar44 + 1;
    } while (uVar32 != uVar24);
    uVar30 = uVar30 + 1;
  } while (uVar30 != uVar27);
LAB_007d2d44:
  *piVar38 = *piVar38 + 1;
LAB_007d2d50:
  uVar28 = uVar28 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar28) goto LAB_007d2cd4;
  goto LAB_007d2d60;
}


