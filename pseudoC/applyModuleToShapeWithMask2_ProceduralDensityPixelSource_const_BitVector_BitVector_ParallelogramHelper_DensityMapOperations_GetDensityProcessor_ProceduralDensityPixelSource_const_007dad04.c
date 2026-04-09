// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007dad04
// Size: 3764 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, BitVector * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   BitVector, BitVector, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, BitVector*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource
   const>&, DensityMapFilter const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               BitVector *param_3,BitVector *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  DensityMapFilter DVar13;
  DensityMapFilter DVar14;
  GetDensityProcessor GVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
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
  uint uVar32;
  uint uVar33;
  int iVar34;
  int *piVar35;
  int *piVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  long *plVar43;
  undefined2 uVar44;
  undefined8 uVar45;
  uint local_118;
  uint local_114;
  uint local_f8;
  uint local_d8;
  uint local_d4;
  
  uVar22 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar23 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar43 = *(long **)param_7;
  uVar24 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar25 = (**(code **)(*plVar43 + 0x20))(plVar43);
  uVar26 = (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar34 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  iVar6 = *(int *)(param_7 + 0x18);
  plVar43 = *(long **)param_8;
  iVar7 = *(int *)(param_7 + 0x1c);
  DVar13 = param_7[0x20];
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar17 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar28 = (**(code **)(*plVar43 + 0x18))(plVar43);
  uVar29 = (**(code **)(*plVar43 + 0x20))(plVar43);
  uVar30 = (**(code **)(*plVar43 + 0x30))(plVar43);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar27 = *(uint *)(param_8 + 0x10);
  uVar18 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar31 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  iVar10 = *(int *)(param_8 + 0x1c);
  uVar11 = *(uint *)(param_8 + 0xc);
  iVar12 = *(int *)(param_8 + 0x18);
  uVar19 = ~(-1 << (ulong)(uVar31 & 0x1f));
  DVar14 = param_8[0x20];
  uVar31 = *(uint *)(param_8 + 0x24);
  if ((((uVar22 < uVar24) || (uVar23 < uVar25)) || (uVar22 < uVar28)) || (uVar23 < uVar29)) {
    if (((uVar24 < uVar22) || (uVar25 < uVar23)) || ((uVar28 < uVar22 || (uVar29 < uVar23)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar34 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar34 != 0
         )) {
                    /* try { // try from 007dbb80 to 007dbb8b has its CatchHandler @ 007dbbb8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar24,(ulong)uVar25,(ulong)uVar28,(ulong)uVar29,(ulong)uVar22,
                         (ulong)uVar23);
      return false;
    }
    uVar20 = 0;
    if (uVar23 != 0) {
      uVar20 = uVar25 / uVar23;
    }
    uVar25 = 0;
    if (uVar22 != 0) {
      uVar25 = uVar24 / uVar22;
    }
    uVar45 = NEON_cnt((ulong)uVar25,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar25 & 0xffff0000) != 0;
      uVar32 = uVar25 >> 0x10;
      if (!bVar21) {
        uVar32 = uVar25;
      }
      uVar33 = (uint)bVar21;
      uVar1 = uVar33 << 4 | 8;
      uVar39 = uVar32 >> 8;
      if (uVar32 < 0x100) {
        uVar1 = uVar33 << 4;
        uVar39 = uVar32;
      }
      uVar32 = uVar1 | 4;
      uVar33 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar32 = uVar1;
        uVar33 = uVar39;
      }
      uVar1 = uVar32 | 2;
      uVar39 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar1 = uVar32;
        uVar39 = uVar33;
      }
      uVar32 = (uVar39 + uVar1) - 1;
    }
    else {
      uVar32 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar20,1);
    uVar1 = 0;
    if (uVar22 != 0) {
      uVar1 = uVar28 / uVar22;
    }
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar20 & 0xffff0000) != 0;
      uVar22 = uVar20 >> 0x10;
      if (!bVar21) {
        uVar22 = uVar20;
      }
      uVar41 = (uint)bVar21;
      uVar39 = uVar41 << 4 | 8;
      uVar33 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar39 = uVar41 << 4;
        uVar33 = uVar22;
      }
      uVar22 = uVar39 | 4;
      uVar41 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar22 = uVar39;
        uVar41 = uVar33;
      }
      uVar39 = uVar22 | 2;
      uVar33 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar39 = uVar22;
        uVar33 = uVar41;
      }
      local_114 = (uVar33 + uVar39) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = uVar29 / uVar23;
    }
    uVar45 = NEON_cnt((ulong)uVar1,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar1 & 0xffff0000) != 0;
      uVar23 = uVar1 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar1;
      }
      uVar33 = (uint)bVar21;
      uVar29 = uVar33 << 4 | 8;
      uVar39 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar29 = uVar33 << 4;
        uVar39 = uVar23;
      }
      uVar23 = uVar29 | 4;
      uVar33 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar23 = uVar29;
        uVar33 = uVar39;
      }
      uVar29 = uVar23 | 2;
      uVar39 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar29 = uVar23;
        uVar39 = uVar33;
      }
      local_f8 = (uVar39 + uVar29) - 1;
    }
    else {
      local_f8 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar22,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar23 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar22;
      }
      uVar33 = (uint)bVar21;
      uVar29 = uVar33 << 4 | 8;
      uVar39 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar29 = uVar33 << 4;
        uVar39 = uVar23;
      }
      uVar23 = uVar29 | 4;
      uVar33 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar23 = uVar29;
        uVar33 = uVar39;
      }
      uVar29 = uVar23 | 2;
      uVar39 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar29 = uVar23;
        uVar39 = uVar33;
      }
      local_118 = (uVar39 + uVar29) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar23 = *(uint *)(param_5 + 0x48);
    if (uVar23 < *(uint *)(param_5 + 0x4c)) {
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar23);
        uVar29 = *(uint *)(param_5 + 0x58);
        if (uVar29 < *(uint *)(param_5 + 0x5c)) {
LAB_007db82c:
          uVar39 = 0;
          lVar37 = *(long *)param_3;
          uVar33 = uVar26 * (uVar24 * (uVar23 << (ulong)(local_114 & 0x1f)) +
                            (uVar29 << (ulong)(uVar32 & 0x1f)));
          do {
            uVar41 = 0;
            uVar3 = uVar33;
            do {
              uVar38 = (ulong)(uVar3 >> 3) & 0xffff;
              lVar40 = *(long *)(lVar37 + (ulong)(uVar3 >> 0x13) * 8);
              if ((uint)uVar38 < 0xfffd) {
                uVar42 = *(uint *)(lVar40 + uVar38);
              }
              else {
                uVar42 = (uVar3 >> 3) + 1;
                uVar2 = (uVar3 >> 3) + 2;
                uVar42 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar37 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar37 + (ulong)(uVar42 >> 0x10) * 8) +
                                                  ((ulong)uVar42 & 0xffff)),
                                                 *(undefined *)(lVar40 + uVar38)));
              }
              uVar42 = uVar42 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar26 & 0x1f)) & 0xffffU;
              piVar36 = (int *)(param_6 + 4);
              if ((iVar34 == 2) || ((iVar34 == 0) != ((uVar42 & uVar17) != uVar5))) {
                uVar42 = uVar42 >> (ulong)(uVar4 & 0x1f) & uVar16;
                if (((int)uVar42 < iVar6) || (iVar7 < (int)uVar42)) {
                  if (DVar13 != (DensityMapFilter)0x0) goto LAB_007db92c;
                }
                else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007db92c:
                  if ((uVar8 == 0) || ((uVar42 & uVar8) != 0)) {
                    uVar39 = 0;
                    uVar33 = uVar30 * (uVar28 * (uVar23 << (ulong)(local_118 & 0x1f)) +
                                      (uVar29 << (ulong)(local_f8 & 0x1f)));
                    lVar37 = *(long *)param_4;
                    goto LAB_007db978;
                  }
                }
              }
              uVar41 = uVar41 + 1;
              uVar3 = uVar3 + uVar26;
            } while (uVar41 != uVar25);
            uVar39 = uVar39 + 1;
            uVar33 = uVar33 + uVar24 * uVar26;
          } while (uVar39 != uVar20);
          goto LAB_007db810;
        }
LAB_007db79c:
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar20 = 0;
    if (uVar24 != 0) {
      uVar20 = uVar22 / uVar24;
    }
    uVar32 = 0;
    if (uVar25 != 0) {
      uVar32 = uVar23 / uVar25;
    }
    uVar45 = NEON_cnt((ulong)uVar20,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar20 & 0xffff0000) != 0;
      uVar25 = uVar20 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar20;
      }
      uVar39 = (uint)bVar21;
      uVar20 = uVar39 << 4 | 8;
      uVar1 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar20 = uVar39 << 4;
        uVar1 = uVar25;
      }
      uVar25 = uVar20 | 4;
      uVar39 = uVar1 >> 4;
      if (uVar1 < 0x10) {
        uVar25 = uVar20;
        uVar39 = uVar1;
      }
      uVar20 = uVar25 | 2;
      uVar1 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar20 = uVar25;
        uVar1 = uVar39;
      }
      uVar25 = (uVar1 + uVar20) - 1;
    }
    else {
      uVar25 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar32,1);
    uVar20 = 0;
    if (uVar28 != 0) {
      uVar20 = uVar22 / uVar28;
    }
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar32 & 0xffff0000) != 0;
      uVar22 = uVar32 >> 0x10;
      if (!bVar21) {
        uVar22 = uVar32;
      }
      uVar39 = (uint)bVar21;
      uVar32 = uVar39 << 4 | 8;
      uVar1 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar32 = uVar39 << 4;
        uVar1 = uVar22;
      }
      uVar22 = uVar32 | 4;
      uVar39 = uVar1 >> 4;
      if (uVar1 < 0x10) {
        uVar22 = uVar32;
        uVar39 = uVar1;
      }
      uVar32 = uVar22 | 2;
      uVar1 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar32 = uVar22;
        uVar1 = uVar39;
      }
      local_d4 = (uVar1 + uVar32) - 1;
    }
    else {
      local_d4 = 0;
    }
    uVar22 = 0;
    if (uVar29 != 0) {
      uVar22 = uVar23 / uVar29;
    }
    uVar45 = NEON_cnt((ulong)uVar20,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar20 & 0xffff0000) != 0;
      uVar23 = uVar20 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar20;
      }
      uVar32 = (uint)bVar21;
      uVar29 = uVar32 << 4 | 8;
      uVar20 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar29 = uVar32 << 4;
        uVar20 = uVar23;
      }
      uVar23 = uVar29 | 4;
      uVar32 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar23 = uVar29;
        uVar32 = uVar20;
      }
      uVar29 = uVar23 | 2;
      uVar20 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar29 = uVar23;
        uVar20 = uVar32;
      }
      uVar23 = (uVar20 + uVar29) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar45 = NEON_cnt((ulong)uVar22,1);
    uVar44 = NEON_uaddlv(uVar45,1);
    if ((int)CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar44) == 1) {
      bVar21 = (uVar22 & 0xffff0000) != 0;
      uVar29 = uVar22 >> 0x10;
      if (!bVar21) {
        uVar29 = uVar22;
      }
      uVar32 = (uint)bVar21;
      uVar22 = uVar32 << 4 | 8;
      uVar20 = uVar29 >> 8;
      if (uVar29 < 0x100) {
        uVar22 = uVar32 << 4;
        uVar20 = uVar29;
      }
      uVar29 = uVar22 | 4;
      uVar32 = uVar20 >> 4;
      if (uVar20 < 0x10) {
        uVar29 = uVar22;
        uVar32 = uVar20;
      }
      uVar22 = uVar29 | 2;
      uVar20 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar22 = uVar29;
        uVar20 = uVar32;
      }
      local_d8 = (uVar20 + uVar22) - 1;
    }
    else {
      local_d8 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      piVar36 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar29 = *(uint *)(param_5 + 0x58);
        if (uVar29 < *(uint *)(param_5 + 0x5c)) {
          do {
            lVar40 = *(long *)param_3;
            uVar20 = ((uVar29 >> (ulong)(uVar25 & 0x1f)) +
                     (uVar22 >> (ulong)(local_d4 & 0x1f)) * uVar24) * uVar26;
            uVar38 = (ulong)(uVar20 >> 3) & 0xffff;
            lVar37 = *(long *)(lVar40 + (ulong)(uVar20 >> 0x13) * 8);
            if ((uint)uVar38 < 0xfffd) {
              uVar32 = *(uint *)(lVar37 + uVar38);
            }
            else {
              uVar32 = (uVar20 >> 3) + 1;
              uVar1 = (uVar20 >> 3) + 2;
              uVar32 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar40 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar40 + (ulong)(uVar32 >> 0x10) * 8) +
                                                ((ulong)uVar32 & 0xffff)),
                                               *(undefined *)(lVar37 + uVar38)));
            }
            uVar20 = uVar32 >> (ulong)(uVar20 & 7) & ~(-1 << (ulong)(uVar26 & 0x1f)) & 0xffffU;
            piVar35 = piVar36;
            if ((((iVar34 == 2) || ((iVar34 == 0) != ((uVar20 & uVar17) != uVar5))) &&
                (DVar13 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar20 >> (ulong)(uVar4 & 0x1f) & uVar16 & uVar8) != 0)))) {
              lVar40 = *(long *)param_4;
              uVar20 = ((uVar29 >> (ulong)(uVar23 & 0x1f)) +
                       (uVar22 >> (ulong)(local_d8 & 0x1f)) * uVar28) * uVar30;
              uVar38 = (ulong)(uVar20 >> 3) & 0xffff;
              lVar37 = *(long *)(lVar40 + (ulong)(uVar20 >> 0x13) * 8);
              if ((uint)uVar38 < 0xfffd) {
                uVar32 = *(uint *)(lVar37 + uVar38);
              }
              else {
                uVar32 = (uVar20 >> 3) + 1;
                uVar1 = (uVar20 >> 3) + 2;
                uVar32 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar40 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar40 + (ulong)(uVar32 >> 0x10) * 8) +
                                                  ((ulong)uVar32 & 0xffff)),
                                                 *(undefined *)(lVar37 + uVar38)));
              }
              uVar20 = uVar32 >> (ulong)(uVar20 & 7) & ~(-1 << (ulong)(uVar30 & 0x1f)) & 0xffffU;
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar20 & uVar19) != uVar11))) ||
                 ((DVar14 != (DensityMapFilter)0x0 ||
                  ((uVar31 != 0 && ((uVar20 >> (ulong)(uVar27 & 0x1f) & uVar18 & uVar31) == 0))))))
              goto LAB_007db564;
              uVar32 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar29,uVar22);
              uVar20 = uVar32 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar20;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar32;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar32)))) {
                if ((int)uVar20 < *(int *)(param_6 + 0x2c)) {
                  GVar15 = param_6[0x34];
joined_r0x007db52c:
                  if (GVar15 == (GetDensityProcessor)0x0) goto LAB_007db570;
                }
                else {
                  GVar15 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar20) goto joined_r0x007db52c;
                  if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007db570;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar20) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar20 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar20) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar35 = (int *)(param_6 + 8);
                  goto LAB_007db564;
                }
              }
            }
            else {
LAB_007db564:
              *piVar35 = *piVar35 + 1;
            }
LAB_007db570:
            uVar29 = uVar29 + 1;
          } while (uVar29 < *(uint *)(param_5 + 0x5c));
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007db978:
  do {
    uVar41 = 0;
    uVar3 = uVar33;
    do {
      uVar38 = (ulong)(uVar3 >> 3) & 0xffff;
      lVar40 = *(long *)(lVar37 + (ulong)(uVar3 >> 0x13) * 8);
      if ((uint)uVar38 < 0xfffd) {
        uVar42 = *(uint *)(lVar40 + uVar38);
      }
      else {
        uVar42 = (uVar3 >> 3) + 1;
        uVar2 = (uVar3 >> 3) + 2;
        uVar42 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar37 + (ulong)(uVar2 >> 0x10) * 8) +
                                 ((ulong)uVar2 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar37 + (ulong)(uVar42 >> 0x10) * 8) +
                                          ((ulong)uVar42 & 0xffff)),*(undefined *)(lVar40 + uVar38))
                               );
      }
      uVar42 = uVar42 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar30 & 0x1f)) & 0xffffU;
      if ((iVar9 == 2) || ((iVar9 == 0) != ((uVar42 & uVar19) != uVar11))) {
        uVar42 = uVar42 >> (ulong)(uVar27 & 0x1f) & uVar18;
        if (((int)uVar42 < iVar12) || (iVar10 < (int)uVar42)) {
          if (DVar14 != (DensityMapFilter)0x0) goto LAB_007dba54;
        }
        else if (DVar14 == (DensityMapFilter)0x0) {
LAB_007dba54:
          if ((uVar31 == 0) || ((uVar42 & uVar31) != 0)) {
            uVar33 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar29,uVar23);
            uVar39 = uVar33 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar39;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar33;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar33))))
            goto LAB_007db81c;
            if ((int)uVar39 < *(int *)(param_6 + 0x2c)) {
              GVar15 = param_6[0x34];
joined_r0x007dbb10:
              if (GVar15 == (GetDensityProcessor)0x0) goto LAB_007db81c;
            }
            else {
              GVar15 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar39) goto joined_r0x007dbb10;
              if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007db81c;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar39) == 0))
            goto LAB_007db81c;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar39 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar39) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar36 = (int *)(param_6 + 8);
            goto LAB_007db810;
          }
        }
      }
      uVar41 = uVar41 + 1;
      uVar3 = uVar3 + uVar30;
    } while (uVar41 != uVar1);
    uVar39 = uVar39 + 1;
    uVar33 = uVar33 + uVar28 * uVar30;
  } while (uVar39 != uVar22);
LAB_007db810:
  *piVar36 = *piVar36 + 1;
LAB_007db81c:
  uVar29 = uVar29 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar29) goto LAB_007db79c;
  goto LAB_007db82c;
}


