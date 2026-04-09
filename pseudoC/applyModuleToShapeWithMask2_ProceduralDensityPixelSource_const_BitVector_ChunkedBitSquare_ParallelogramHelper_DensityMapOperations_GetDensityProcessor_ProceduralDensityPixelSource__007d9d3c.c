// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007d9d3c
// Size: 4016 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, BitVector * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   BitVector, ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, BitVector*, ChunkedBitSquare*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource
   const>&, DensityMapFilter const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               BitVector *param_3,ChunkedBitSquare *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

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
  int iVar10;
  DensityMapFilter DVar11;
  DensityMapFilter DVar12;
  GetDensityProcessor GVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
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
  uint uVar34;
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
  undefined4 *puVar45;
  ulong uVar46;
  long *plVar47;
  int iVar48;
  undefined2 uVar49;
  undefined8 uVar50;
  uint local_148;
  uint local_144;
  uint local_124;
  uint local_114;
  uint local_c0;
  uint local_b8;
  uint local_78;
  
  uVar20 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar21 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar47 = *(long **)param_7;
  uVar22 = (**(code **)(*plVar47 + 0x18))(plVar47);
  uVar23 = (**(code **)(*plVar47 + 0x20))(plVar47);
  uVar24 = (**(code **)(*plVar47 + 0x30))(plVar47);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar35 = *(int *)(param_7 + 8);
  uVar4 = *(uint *)(param_7 + 0xc);
  plVar47 = *(long **)param_8;
  uVar5 = *(uint *)(param_7 + 0x24);
  iVar30 = *(int *)(param_7 + 0x18);
  DVar11 = param_7[0x20];
  iVar6 = *(int *)(param_7 + 0x1c);
  uVar16 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar26 = (**(code **)(*plVar47 + 0x18))(plVar47);
  uVar27 = (**(code **)(*plVar47 + 0x20))(plVar47);
  (**(code **)(*plVar47 + 0x30))(plVar47);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar7 = *(int *)(param_8 + 8);
  uVar8 = *(uint *)(param_8 + 0xc);
  iVar9 = *(int *)(param_8 + 0x18);
  iVar10 = *(int *)(param_8 + 0x1c);
  DVar12 = param_8[0x20];
  uVar18 = ~(-1 << (ulong)(uVar28 & 0x1f));
  uVar28 = *(uint *)(param_8 + 0x24);
  if ((((uVar20 < uVar22) || (uVar21 < uVar23)) || (uVar20 < uVar26)) || (uVar21 < uVar27)) {
    if (((uVar22 < uVar20) || (uVar23 < uVar21)) || ((uVar26 < uVar20 || (uVar27 < uVar21)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar35 != 0
         )) {
                    /* try { // try from 007dacb4 to 007dacbf has its CatchHandler @ 007dacec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar22,(ulong)uVar23,(ulong)uVar26,(ulong)uVar27,(ulong)uVar20,
                         (ulong)uVar21);
      return false;
    }
    uVar31 = 0;
    if (uVar21 != 0) {
      uVar31 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar20 != 0) {
      uVar23 = uVar22 / uVar20;
    }
    uVar50 = NEON_cnt((ulong)uVar23,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar23 & 0xffff0000) != 0;
      uVar29 = uVar23 >> 0x10;
      if (!bVar19) {
        uVar29 = uVar23;
      }
      uVar42 = (uint)bVar19;
      uVar34 = uVar42 << 4 | 8;
      uVar41 = uVar29 >> 8;
      if (uVar29 < 0x100) {
        uVar34 = uVar42 << 4;
        uVar41 = uVar29;
      }
      uVar29 = uVar34 | 4;
      uVar42 = uVar41 >> 4;
      if (uVar41 < 0x10) {
        uVar29 = uVar34;
        uVar42 = uVar41;
      }
      uVar34 = uVar29 | 2;
      uVar41 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar34 = uVar29;
        uVar41 = uVar42;
      }
      local_114 = (uVar41 + uVar34) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar29 = 0;
    if (uVar20 != 0) {
      uVar29 = uVar26 / uVar20;
    }
    uVar50 = NEON_cnt((ulong)uVar31,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar31 & 0xffff0000) != 0;
      uVar20 = uVar31 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar31;
      }
      uVar41 = (uint)bVar19;
      uVar26 = uVar41 << 4 | 8;
      uVar34 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar41 << 4;
        uVar34 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar41 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar20 = uVar26;
        uVar41 = uVar34;
      }
      uVar26 = uVar20 | 2;
      uVar34 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar26 = uVar20;
        uVar34 = uVar41;
      }
      local_144 = (uVar34 + uVar26) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = uVar27 / uVar21;
    }
    uVar50 = NEON_cnt((ulong)uVar29,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar29 & 0xffff0000) != 0;
      uVar21 = uVar29 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar29;
      }
      uVar34 = (uint)bVar19;
      uVar26 = uVar34 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar34 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar34 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar34 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar34;
      }
      local_124 = (uVar27 + uVar26) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar20,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar34 = (uint)bVar19;
      uVar26 = uVar34 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar34 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar34 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar34 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar34;
      }
      local_148 = (uVar27 + uVar26) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar21 = *(uint *)(param_5 + 0x48);
    if (uVar21 < *(uint *)(param_5 + 0x4c)) {
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar31 < 2) {
        uVar31 = 1;
      }
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar21);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
LAB_007da8d0:
          uVar27 = 0;
          lVar39 = *(long *)param_3;
          uVar34 = uVar24 * (uVar22 * (uVar21 << (ulong)(local_144 & 0x1f)) +
                            (uVar26 << (ulong)(local_114 & 0x1f)));
          do {
            uVar41 = 0;
            uVar42 = uVar34;
            do {
              uVar40 = (ulong)(uVar42 >> 3) & 0xffff;
              lVar43 = *(long *)(lVar39 + (ulong)(uVar42 >> 0x13) * 8);
              if ((uint)uVar40 < 0xfffd) {
                uVar44 = *(uint *)(lVar43 + uVar40);
              }
              else {
                uVar44 = (uVar42 >> 3) + 1;
                uVar2 = (uVar42 >> 3) + 2;
                uVar44 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar39 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar39 + (ulong)(uVar44 >> 0x10) * 8) +
                                                  ((ulong)uVar44 & 0xffff)),
                                                 *(undefined *)(lVar43 + uVar40)));
              }
              uVar44 = uVar44 >> (ulong)(uVar42 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
              piVar38 = (int *)(param_6 + 4);
              if ((iVar35 == 2) || ((iVar35 == 0) != ((uVar44 & uVar16) != uVar4))) {
                uVar44 = uVar44 >> (ulong)(uVar3 & 0x1f) & uVar15;
                if (((int)uVar44 < iVar30) || (iVar6 < (int)uVar44)) {
                  if (DVar11 != (DensityMapFilter)0x0) goto LAB_007da9dc;
                }
                else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007da9dc:
                  if ((uVar5 == 0) || ((uVar44 & uVar5) != 0)) {
                    uVar27 = 0;
                    uVar34 = uVar26 << (ulong)(local_124 & 0x1f);
                    goto LAB_007daa1c;
                  }
                }
              }
              uVar41 = uVar41 + 1;
              uVar42 = uVar42 + uVar24;
            } while (uVar41 != uVar23);
            uVar27 = uVar27 + 1;
            uVar34 = uVar34 + uVar22 * uVar24;
          } while (uVar27 != uVar31);
          goto LAB_007da8b0;
        }
LAB_007da838:
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar31 = 0;
    if (uVar22 != 0) {
      uVar31 = uVar20 / uVar22;
    }
    uVar29 = 0;
    if (uVar23 != 0) {
      uVar29 = uVar21 / uVar23;
    }
    uVar50 = NEON_cnt((ulong)uVar31,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar31 & 0xffff0000) != 0;
      uVar23 = uVar31 >> 0x10;
      if (!bVar19) {
        uVar23 = uVar31;
      }
      uVar41 = (uint)bVar19;
      uVar31 = uVar41 << 4 | 8;
      uVar34 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar31 = uVar41 << 4;
        uVar34 = uVar23;
      }
      uVar23 = uVar31 | 4;
      uVar41 = uVar34 >> 4;
      if (uVar34 < 0x10) {
        uVar23 = uVar31;
        uVar41 = uVar34;
      }
      uVar31 = uVar23 | 2;
      uVar34 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar31 = uVar23;
        uVar34 = uVar41;
      }
      uVar23 = (uVar34 + uVar31) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar31 = 0;
    if (uVar26 != 0) {
      uVar31 = uVar20 / uVar26;
    }
    uVar50 = NEON_cnt((ulong)uVar29,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar29 & 0xffff0000) != 0;
      uVar20 = uVar29 >> 0x10;
      if (!bVar19) {
        uVar20 = uVar29;
      }
      uVar34 = (uint)bVar19;
      uVar26 = uVar34 << 4 | 8;
      uVar29 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar26 = uVar34 << 4;
        uVar29 = uVar20;
      }
      uVar20 = uVar26 | 4;
      uVar34 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar20 = uVar26;
        uVar34 = uVar29;
      }
      uVar26 = uVar20 | 2;
      uVar29 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar26 = uVar20;
        uVar29 = uVar34;
      }
      local_b8 = (uVar29 + uVar26) - 1;
    }
    else {
      local_b8 = 0;
    }
    uVar20 = 0;
    if (uVar27 != 0) {
      uVar20 = uVar21 / uVar27;
    }
    uVar50 = NEON_cnt((ulong)uVar31,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar31 & 0xffff0000) != 0;
      uVar21 = uVar31 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar31;
      }
      uVar31 = (uint)bVar19;
      uVar26 = uVar31 << 4 | 8;
      uVar27 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar26 = uVar31 << 4;
        uVar27 = uVar21;
      }
      uVar21 = uVar26 | 4;
      uVar31 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar21 = uVar26;
        uVar31 = uVar27;
      }
      uVar26 = uVar21 | 2;
      uVar27 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar26 = uVar21;
        uVar27 = uVar31;
      }
      local_78 = (uVar27 + uVar26) - 1;
    }
    else {
      local_78 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar20,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar21 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar20;
      }
      uVar27 = (uint)bVar19;
      uVar20 = uVar27 << 4 | 8;
      uVar26 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar20 = uVar27 << 4;
        uVar26 = uVar21;
      }
      uVar21 = uVar20 | 4;
      uVar27 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar21 = uVar20;
        uVar27 = uVar26;
      }
      uVar20 = uVar21 | 2;
      uVar26 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar20 = uVar21;
        uVar26 = uVar27;
      }
      local_c0 = (uVar26 + uVar20) - 1;
    }
    else {
      local_c0 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      piVar38 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar21 = *(uint *)(param_5 + 0x58);
        if (uVar21 < *(uint *)(param_5 + 0x5c)) {
          uVar26 = uVar20 >> (ulong)(local_c0 & 0x1f);
          do {
            lVar43 = *(long *)param_3;
            uVar27 = ((uVar21 >> (ulong)(uVar23 & 0x1f)) +
                     (uVar20 >> (ulong)(local_b8 & 0x1f)) * uVar22) * uVar24;
            uVar40 = (ulong)(uVar27 >> 3) & 0xffff;
            lVar39 = *(long *)(lVar43 + (ulong)(uVar27 >> 0x13) * 8);
            if ((uint)uVar40 < 0xfffd) {
              uVar31 = *(uint *)(lVar39 + uVar40);
            }
            else {
              uVar31 = (uVar27 >> 3) + 1;
              uVar29 = (uVar27 >> 3) + 2;
              uVar31 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar43 + (ulong)(uVar29 >> 0x10) * 8) +
                                       ((ulong)uVar29 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar43 + (ulong)(uVar31 >> 0x10) * 8) +
                                                ((ulong)uVar31 & 0xffff)),
                                               *(undefined *)(lVar39 + uVar40)));
            }
            uVar27 = uVar31 >> (ulong)(uVar27 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
            piVar37 = piVar38;
            if ((((iVar35 == 2) || ((iVar35 == 0) != ((uVar27 & uVar16) != uVar4))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar5 == 0 || ((uVar27 >> (ulong)(uVar3 & 0x1f) & uVar15 & uVar5) != 0)))) {
              uVar27 = uVar21 >> (ulong)(local_78 & 0x1f);
              uVar31 = (((uVar26 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar27 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar36 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar31 * 8);
              uVar27 = uVar27 & 0x1f | (uVar26 & 0x1f) << 5;
              uVar29 = (**ppcVar36)(ppcVar36,uVar27,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar40 = 1;
                puVar45 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar36 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar31 + (int)uVar40) * 8);
                  iVar30 = (**ppcVar36)(ppcVar36,uVar27,0,*puVar45);
                  puVar1 = puVar45 + -1;
                  uVar40 = uVar40 + 1;
                  puVar45 = puVar45 + 2;
                  uVar29 = iVar30 << (ulong)(*puVar1 & 0x1f) | uVar29;
                } while (uVar40 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar7 != 2) && ((iVar7 == 0) == ((uVar29 & uVar18) != uVar8))) ||
                 ((DVar12 != (DensityMapFilter)0x0 ||
                  ((uVar28 != 0 && ((uVar29 >> (ulong)(uVar25 & 0x1f) & uVar17 & uVar28) == 0))))))
              goto LAB_007da5a0;
              uVar31 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar21,uVar20);
              uVar27 = uVar31 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar27;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar31;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar31)))) {
                if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
                  GVar13 = param_6[0x34];
joined_r0x007da5e0:
                  if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007da5ac;
                }
                else {
                  GVar13 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar27) goto joined_r0x007da5e0;
                  if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007da5ac;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar27) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar27 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar37 = (int *)(param_6 + 8);
                  goto LAB_007da5a0;
                }
              }
            }
            else {
LAB_007da5a0:
              *piVar37 = *piVar37 + 1;
            }
LAB_007da5ac:
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(param_5 + 0x5c));
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007daa1c:
  do {
    uVar41 = 0;
    uVar40 = (ulong)*(uint *)(param_4 + 0x34);
    uVar44 = uVar27 + (uVar21 << (ulong)(local_148 & 0x1f));
    uVar42 = uVar34;
    do {
      uVar2 = uVar41 + uVar34;
      iVar14 = (uVar44 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar48 = (int)uVar40;
      ppcVar36 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar14 + (uVar2 >> 5)) * iVar48) * 8);
      uVar2 = uVar2 & 0x1f | (uVar44 & 0x1f) << 5;
      uVar32 = (**ppcVar36)(ppcVar36,uVar2,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar40 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar7 != 2) goto LAB_007dab20;
LAB_007dab40:
        uVar2 = uVar32 >> (ulong)(uVar25 & 0x1f) & uVar17;
        if (((int)uVar2 < iVar9) || (iVar10 < (int)uVar2)) {
          if (DVar12 != (DensityMapFilter)0x0) goto LAB_007dab6c;
        }
        else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007dab6c:
          if ((uVar28 == 0) || ((uVar2 & uVar28) != 0)) {
            uVar34 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar26,uVar21);
            uVar27 = uVar34 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar27;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar34;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar34))))
            goto LAB_007da8bc;
            if ((int)uVar27 < *(int *)(param_6 + 0x2c)) {
              GVar13 = param_6[0x34];
joined_r0x007dac30:
              if (GVar13 == (GetDensityProcessor)0x0) goto LAB_007da8bc;
            }
            else {
              GVar13 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar27) goto joined_r0x007dac30;
              if (GVar13 != (GetDensityProcessor)0x0) goto LAB_007da8bc;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar27) == 0))
            goto LAB_007da8bc;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar27 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar27) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar38 = (int *)(param_6 + 8);
            goto LAB_007da8b0;
          }
        }
      }
      else {
        uVar46 = 1;
        puVar45 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar36 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar48 * (iVar14 + (uVar42 >> 5)) + (int)uVar46) * 8);
          iVar33 = (**ppcVar36)(ppcVar36,uVar2,0,*puVar45);
          puVar1 = puVar45 + -1;
          uVar46 = uVar46 + 1;
          uVar40 = (ulong)*(uint *)(param_4 + 0x34);
          puVar45 = puVar45 + 2;
          uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
        } while (uVar46 < uVar40);
        if (iVar7 == 2) goto LAB_007dab40;
LAB_007dab20:
        if ((iVar7 == 0) != ((uVar32 & uVar18) != uVar8)) goto LAB_007dab40;
      }
      uVar41 = uVar41 + 1;
      uVar42 = uVar42 + 1;
    } while (uVar41 != uVar29);
    uVar27 = uVar27 + 1;
  } while (uVar27 != uVar20);
LAB_007da8b0:
  *piVar38 = *piVar38 + 1;
LAB_007da8bc:
  uVar26 = uVar26 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar26) goto LAB_007da838;
  goto LAB_007da8d0;
}


