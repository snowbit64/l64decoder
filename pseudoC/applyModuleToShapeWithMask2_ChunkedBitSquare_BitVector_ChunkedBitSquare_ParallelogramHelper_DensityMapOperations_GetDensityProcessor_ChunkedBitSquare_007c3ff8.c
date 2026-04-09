// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007c3ff8
// Size: 4352 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, BitVector * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ChunkedBitSquare, BitVector,
   ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, BitVector*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ChunkedBitSquare,BitVector,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,BitVector *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,GetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  DensityMapFilter DVar9;
  DensityMapFilter DVar10;
  GetDensityProcessor GVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  code **ppcVar34;
  int *piVar35;
  int *piVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  int iVar43;
  ulong uVar44;
  undefined4 *puVar45;
  long *plVar46;
  undefined2 uVar47;
  undefined8 uVar48;
  uint local_160;
  uint local_15c;
  uint local_12c;
  uint local_128;
  uint local_dc;
  uint local_d8;
  uint local_7c;
  
  uVar17 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar18 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar46 = *(long **)param_7;
  uVar19 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar20 = (**(code **)(*plVar46 + 0x20))(plVar46);
  uVar21 = (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar12 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar22 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar5 = *(int *)(param_7 + 8);
  plVar46 = *(long **)param_8;
  DVar9 = param_7[0x20];
  uVar6 = *(uint *)(param_7 + 0xc);
  uVar7 = *(uint *)(param_7 + 0x24);
  iVar27 = *(int *)(param_7 + 0x18);
  uVar13 = ~(-1 << (ulong)(uVar22 & 0x1f));
  iVar8 = *(int *)(param_7 + 0x1c);
  uVar23 = (**(code **)(*plVar46 + 0x18))(plVar46);
  uVar24 = (**(code **)(*plVar46 + 0x20))(plVar46);
  (**(code **)(*plVar46 + 0x30))(plVar46);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar22 = *(uint *)(param_8 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar33 = *(int *)(param_8 + 8);
  uVar4 = *(uint *)(param_8 + 0xc);
  uVar15 = ~(-1 << (ulong)(uVar25 & 0x1f));
  DVar10 = param_8[0x20];
  uVar25 = *(uint *)(param_8 + 0x24);
  if ((((uVar17 < uVar19) || (uVar18 < uVar20)) || (uVar17 < uVar23)) || (uVar18 < uVar24)) {
    if (((uVar19 < uVar17) || (uVar20 < uVar18)) || ((uVar23 < uVar17 || (uVar24 < uVar18)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar33 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar33 != 0
         )) {
                    /* try { // try from 007c50c0 to 007c50cb has its CatchHandler @ 007c50f8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar19,(ulong)uVar20,(ulong)uVar23,(ulong)uVar24,(ulong)uVar17,
                         (ulong)uVar18);
      return false;
    }
    uVar28 = 0;
    if (uVar18 != 0) {
      uVar28 = uVar20 / uVar18;
    }
    uVar20 = 0;
    if (uVar17 != 0) {
      uVar20 = uVar19 / uVar17;
    }
    uVar48 = NEON_cnt((ulong)uVar20,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar20 & 0xffff0000) != 0;
      uVar26 = uVar20 >> 0x10;
      if (!bVar16) {
        uVar26 = uVar20;
      }
      uVar40 = (uint)bVar16;
      uVar32 = uVar40 << 4 | 8;
      uVar39 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar32 = uVar40 << 4;
        uVar39 = uVar26;
      }
      uVar26 = uVar32 | 4;
      uVar40 = uVar39 >> 4;
      if (uVar39 < 0x10) {
        uVar26 = uVar32;
        uVar40 = uVar39;
      }
      uVar32 = uVar26 | 2;
      uVar39 = uVar40 >> 2;
      if (uVar40 < 4) {
        uVar32 = uVar26;
        uVar39 = uVar40;
      }
      local_128 = (uVar39 + uVar32) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar26 = 0;
    if (uVar17 != 0) {
      uVar26 = uVar23 / uVar17;
    }
    uVar48 = NEON_cnt((ulong)uVar28,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar28 & 0xffff0000) != 0;
      uVar17 = uVar28 >> 0x10;
      if (!bVar16) {
        uVar17 = uVar28;
      }
      uVar39 = (uint)bVar16;
      uVar23 = uVar39 << 4 | 8;
      uVar32 = uVar17 >> 8;
      if (uVar17 < 0x100) {
        uVar23 = uVar39 << 4;
        uVar32 = uVar17;
      }
      uVar17 = uVar23 | 4;
      uVar39 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar17 = uVar23;
        uVar39 = uVar32;
      }
      uVar23 = uVar17 | 2;
      uVar32 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar23 = uVar17;
        uVar32 = uVar39;
      }
      local_15c = (uVar32 + uVar23) - 1;
    }
    else {
      local_15c = 0;
    }
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = uVar24 / uVar18;
    }
    uVar48 = NEON_cnt((ulong)uVar26,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar26 & 0xffff0000) != 0;
      uVar18 = uVar26 >> 0x10;
      if (!bVar16) {
        uVar18 = uVar26;
      }
      uVar32 = (uint)bVar16;
      uVar23 = uVar32 << 4 | 8;
      uVar24 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar23 = uVar32 << 4;
        uVar24 = uVar18;
      }
      uVar18 = uVar23 | 4;
      uVar32 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar18 = uVar23;
        uVar32 = uVar24;
      }
      uVar23 = uVar18 | 2;
      uVar24 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar23 = uVar18;
        uVar24 = uVar32;
      }
      local_12c = (uVar24 + uVar23) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar17,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar17 & 0xffff0000) != 0;
      uVar18 = uVar17 >> 0x10;
      if (!bVar16) {
        uVar18 = uVar17;
      }
      uVar32 = (uint)bVar16;
      uVar23 = uVar32 << 4 | 8;
      uVar24 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar23 = uVar32 << 4;
        uVar24 = uVar18;
      }
      uVar18 = uVar23 | 4;
      uVar32 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar18 = uVar23;
        uVar32 = uVar24;
      }
      uVar23 = uVar18 | 2;
      uVar24 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar23 = uVar18;
        uVar24 = uVar32;
      }
      local_160 = (uVar24 + uVar23) - 1;
    }
    else {
      local_160 = 0;
    }
    uVar18 = *(uint *)(param_5 + 0x48);
    if (uVar18 < *(uint *)(param_5 + 0x4c)) {
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      if (uVar26 < 2) {
        uVar26 = 1;
      }
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar18);
        uVar23 = *(uint *)(param_5 + 0x58);
        if (uVar23 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar24 = 0;
            lVar37 = *(long *)param_3;
            uVar32 = uVar21 * (uVar19 * (uVar18 << (ulong)(local_15c & 0x1f)) +
                              (uVar23 << (ulong)(local_128 & 0x1f)));
            do {
              uVar39 = 0;
              uVar40 = uVar32;
              do {
                uVar38 = (ulong)(uVar40 >> 3) & 0xffff;
                lVar41 = *(long *)(lVar37 + (ulong)(uVar40 >> 0x13) * 8);
                if ((uint)uVar38 < 0xfffd) {
                  uVar42 = *(uint *)(lVar41 + uVar38);
                }
                else {
                  uVar42 = (uVar40 >> 3) + 1;
                  uVar2 = (uVar40 >> 3) + 2;
                  uVar42 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar37 + (ulong)(uVar2 >> 0x10) * 8) +
                                           ((ulong)uVar2 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar37 + (ulong)(uVar42 >> 0x10) * 8)
                                                    + ((ulong)uVar42 & 0xffff)),
                                                   *(undefined *)(lVar41 + uVar38)));
                }
                uVar42 = uVar42 >> (ulong)(uVar40 & 7) & ~(-1 << (ulong)(uVar21 & 0x1f)) & 0xffffU;
                piVar36 = (int *)(param_6 + 4);
                if ((iVar5 == 2) || ((iVar5 == 0) != ((uVar42 & uVar13) != uVar6))) {
                  uVar42 = uVar42 >> (ulong)(uVar3 & 0x1f) & uVar12;
                  if (((int)uVar42 < iVar27) || (iVar8 < (int)uVar42)) {
                    if (DVar9 != (DensityMapFilter)0x0) goto LAB_007c4d54;
                  }
                  else if (DVar9 == (DensityMapFilter)0x0) {
LAB_007c4d54:
                    if ((uVar7 == 0) || ((uVar42 & uVar7) != 0)) {
                      uVar24 = 0;
                      uVar32 = uVar23 << (ulong)(local_12c & 0x1f);
                      goto LAB_007c4d94;
                    }
                  }
                }
                uVar39 = uVar39 + 1;
                uVar40 = uVar40 + uVar21;
              } while (uVar39 != uVar20);
              uVar24 = uVar24 + 1;
              uVar32 = uVar32 + uVar19 * uVar21;
            } while (uVar24 != uVar28);
LAB_007c4c24:
            *piVar36 = *piVar36 + 1;
LAB_007c4c30:
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(uint *)(param_5 + 0x5c));
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar28 = 0;
    if (uVar19 != 0) {
      uVar28 = uVar17 / uVar19;
    }
    uVar26 = 0;
    if (uVar20 != 0) {
      uVar26 = uVar18 / uVar20;
    }
    uVar48 = NEON_cnt((ulong)uVar28,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar28 & 0xffff0000) != 0;
      uVar20 = uVar28 >> 0x10;
      if (!bVar16) {
        uVar20 = uVar28;
      }
      uVar39 = (uint)bVar16;
      uVar28 = uVar39 << 4 | 8;
      uVar32 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar28 = uVar39 << 4;
        uVar32 = uVar20;
      }
      uVar20 = uVar28 | 4;
      uVar39 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar20 = uVar28;
        uVar39 = uVar32;
      }
      uVar28 = uVar20 | 2;
      uVar32 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar28 = uVar20;
        uVar32 = uVar39;
      }
      uVar20 = (uVar32 + uVar28) - 1;
    }
    else {
      uVar20 = 0;
    }
    uVar28 = 0;
    if (uVar23 != 0) {
      uVar28 = uVar17 / uVar23;
    }
    uVar48 = NEON_cnt((ulong)uVar26,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar26 & 0xffff0000) != 0;
      uVar17 = uVar26 >> 0x10;
      if (!bVar16) {
        uVar17 = uVar26;
      }
      uVar32 = (uint)bVar16;
      uVar23 = uVar32 << 4 | 8;
      uVar26 = uVar17 >> 8;
      if (uVar17 < 0x100) {
        uVar23 = uVar32 << 4;
        uVar26 = uVar17;
      }
      uVar17 = uVar23 | 4;
      uVar32 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar17 = uVar23;
        uVar32 = uVar26;
      }
      uVar23 = uVar17 | 2;
      uVar26 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar23 = uVar17;
        uVar26 = uVar32;
      }
      local_d8 = (uVar26 + uVar23) - 1;
    }
    else {
      local_d8 = 0;
    }
    uVar17 = 0;
    if (uVar24 != 0) {
      uVar17 = uVar18 / uVar24;
    }
    uVar48 = NEON_cnt((ulong)uVar28,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar28 & 0xffff0000) != 0;
      uVar18 = uVar28 >> 0x10;
      if (!bVar16) {
        uVar18 = uVar28;
      }
      uVar28 = (uint)bVar16;
      uVar23 = uVar28 << 4 | 8;
      uVar24 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar23 = uVar28 << 4;
        uVar24 = uVar18;
      }
      uVar18 = uVar23 | 4;
      uVar28 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar18 = uVar23;
        uVar28 = uVar24;
      }
      uVar23 = uVar18 | 2;
      uVar24 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar23 = uVar18;
        uVar24 = uVar28;
      }
      local_7c = (uVar24 + uVar23) - 1;
    }
    else {
      local_7c = 0;
    }
    uVar48 = NEON_cnt((ulong)uVar17,1);
    uVar47 = NEON_uaddlv(uVar48,1);
    if ((int)CONCAT62((int6)((ulong)uVar48 >> 0x10),uVar47) == 1) {
      bVar16 = (uVar17 & 0xffff0000) != 0;
      uVar18 = uVar17 >> 0x10;
      if (!bVar16) {
        uVar18 = uVar17;
      }
      uVar24 = (uint)bVar16;
      uVar17 = uVar24 << 4 | 8;
      uVar23 = uVar18 >> 8;
      if (uVar18 < 0x100) {
        uVar17 = uVar24 << 4;
        uVar23 = uVar18;
      }
      uVar18 = uVar17 | 4;
      uVar24 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar18 = uVar17;
        uVar24 = uVar23;
      }
      uVar17 = uVar18 | 2;
      uVar23 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar17 = uVar18;
        uVar23 = uVar24;
      }
      local_dc = (uVar23 + uVar17) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar17 = *(uint *)(param_5 + 0x48);
    if (uVar17 < *(uint *)(param_5 + 0x4c)) {
      piVar36 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar17);
        uVar18 = *(uint *)(param_5 + 0x58);
        if (uVar18 < *(uint *)(param_5 + 0x5c)) {
          uVar23 = uVar17 >> (ulong)(local_dc & 0x1f);
          do {
            lVar41 = *(long *)param_3;
            uVar24 = ((uVar18 >> (ulong)(uVar20 & 0x1f)) +
                     (uVar17 >> (ulong)(local_d8 & 0x1f)) * uVar19) * uVar21;
            uVar38 = (ulong)(uVar24 >> 3) & 0xffff;
            lVar37 = *(long *)(lVar41 + (ulong)(uVar24 >> 0x13) * 8);
            if ((uint)uVar38 < 0xfffd) {
              uVar28 = *(uint *)(lVar37 + uVar38);
            }
            else {
              uVar28 = (uVar24 >> 3) + 1;
              uVar26 = (uVar24 >> 3) + 2;
              uVar28 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar41 + (ulong)(uVar26 >> 0x10) * 8) +
                                       ((ulong)uVar26 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar41 + (ulong)(uVar28 >> 0x10) * 8) +
                                                ((ulong)uVar28 & 0xffff)),
                                               *(undefined *)(lVar37 + uVar38)));
            }
            uVar24 = uVar28 >> (ulong)(uVar24 & 7) & ~(-1 << (ulong)(uVar21 & 0x1f)) & 0xffffU;
            piVar35 = piVar36;
            if ((((iVar5 == 2) || ((iVar5 == 0) != ((uVar24 & uVar13) != uVar6))) &&
                (DVar9 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar24 >> (ulong)(uVar3 & 0x1f) & uVar12 & uVar7) != 0)))) {
              uVar24 = uVar18 >> (ulong)(local_7c & 0x1f);
              uVar28 = (((uVar23 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar24 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar34 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar28 * 8);
              uVar24 = uVar24 & 0x1f | (uVar23 & 0x1f) << 5;
              uVar26 = (**ppcVar34)(ppcVar34,uVar24,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar38 = 1;
                puVar45 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar28 + (int)uVar38) * 8);
                  iVar27 = (**ppcVar34)(ppcVar34,uVar24,0,*puVar45);
                  puVar1 = puVar45 + -1;
                  uVar38 = uVar38 + 1;
                  puVar45 = puVar45 + 2;
                  uVar26 = iVar27 << (ulong)(*puVar1 & 0x1f) | uVar26;
                } while (uVar38 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar33 != 2) && ((iVar33 == 0) == ((uVar26 & uVar15) != uVar4))) ||
                 ((DVar10 != (DensityMapFilter)0x0 ||
                  ((uVar25 != 0 && ((uVar26 >> (ulong)(uVar22 & 0x1f) & uVar14 & uVar25) == 0))))))
              goto LAB_007c48fc;
              iVar27 = *(int *)(param_2 + 0x34);
              iVar8 = (uVar17 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
              ppcVar34 = *(code ***)
                          (*(long *)(param_2 + 0x28) + (ulong)((iVar8 + (uVar18 >> 5)) * iVar27) * 8
                          );
              uVar24 = uVar18 & 0x1f | (uVar17 & 0x1f) << 5;
              uVar28 = (**ppcVar34)(ppcVar34,uVar24,0,*(undefined4 *)(param_2 + 0x3c));
              if (1 < *(uint *)(param_2 + 0x34)) {
                uVar38 = 1;
                puVar45 = (undefined4 *)(param_2 + 0x44);
                do {
                  ppcVar34 = *(code ***)
                              (*(long *)(param_2 + 0x28) +
                              (ulong)(iVar27 * (iVar8 + (uVar18 >> 5)) + (int)uVar38) * 8);
                  iVar29 = (**ppcVar34)(ppcVar34,uVar24,0,*puVar45);
                  puVar1 = puVar45 + -1;
                  uVar38 = uVar38 + 1;
                  puVar45 = puVar45 + 2;
                  uVar28 = iVar29 << (ulong)(*puVar1 & 0x1f) | uVar28;
                } while (uVar38 < *(uint *)(param_2 + 0x34));
              }
              uVar24 = uVar28 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar24;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar28;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar28)))) {
                if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
                  GVar11 = param_6[0x34];
joined_r0x007c493c:
                  if (GVar11 == (GetDensityProcessor)0x0) goto LAB_007c4908;
                }
                else {
                  GVar11 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar24) goto joined_r0x007c493c;
                  if (GVar11 != (GetDensityProcessor)0x0) goto LAB_007c4908;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar24) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar24 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar35 = (int *)(param_6 + 8);
                  goto LAB_007c48fc;
                }
              }
            }
            else {
LAB_007c48fc:
              *piVar35 = *piVar35 + 1;
            }
LAB_007c4908:
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(uint *)(param_5 + 0x5c));
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007c4d94:
  uVar39 = 0;
  uVar38 = (ulong)*(uint *)(param_4 + 0x34);
  uVar42 = uVar24 + (uVar18 << (ulong)(local_160 & 0x1f));
  uVar40 = uVar32;
LAB_007c4dd8:
  uVar2 = uVar39 + uVar32;
  iVar29 = (uVar42 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
  iVar43 = (int)uVar38;
  ppcVar34 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)((iVar29 + (uVar2 >> 5)) * iVar43) * 8);
  uVar2 = uVar2 & 0x1f | (uVar42 & 0x1f) << 5;
  uVar30 = (**ppcVar34)(ppcVar34,uVar2,0,*(undefined4 *)(param_4 + 0x3c));
  if (*(uint *)(param_4 + 0x34) < 2) {
    uVar38 = (ulong)*(uint *)(param_4 + 0x34);
  }
  else {
    uVar44 = 1;
    puVar45 = (undefined4 *)(param_4 + 0x44);
    do {
      ppcVar34 = *(code ***)
                  (*(long *)(param_4 + 0x28) +
                  (ulong)(iVar43 * (iVar29 + (uVar40 >> 5)) + (int)uVar44) * 8);
      iVar31 = (**ppcVar34)(ppcVar34,uVar2,0,*puVar45);
      puVar1 = puVar45 + -1;
      uVar44 = uVar44 + 1;
      uVar38 = (ulong)*(uint *)(param_4 + 0x34);
      puVar45 = puVar45 + 2;
      uVar30 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar30;
    } while (uVar44 < uVar38);
  }
  if ((((iVar33 != 2) && ((iVar33 == 0) == ((uVar30 & uVar15) != uVar4))) ||
      (DVar10 != (DensityMapFilter)0x0)) ||
     ((uVar25 != 0 && ((uVar30 >> (ulong)(uVar22 & 0x1f) & uVar14 & uVar25) == 0))))
  goto LAB_007c4dc4;
  iVar29 = *(int *)(param_2 + 0x34);
  iVar43 = (uVar18 >> 5) << (ulong)(*(uint *)param_2 & 0x1f);
  ppcVar34 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)((iVar43 + (uVar23 >> 5)) * iVar29) * 8)
  ;
  uVar24 = uVar23 & 0x1f | (uVar18 & 0x1f) << 5;
  uVar32 = (**ppcVar34)(ppcVar34,uVar24,0,*(undefined4 *)(param_2 + 0x3c));
  if (1 < *(uint *)(param_2 + 0x34)) {
    uVar38 = 1;
    puVar45 = (undefined4 *)(param_2 + 0x44);
    do {
      ppcVar34 = *(code ***)
                  (*(long *)(param_2 + 0x28) +
                  (ulong)(iVar29 * (iVar43 + (uVar23 >> 5)) + (int)uVar38) * 8);
      iVar31 = (**ppcVar34)(ppcVar34,uVar24,0,*puVar45);
      puVar1 = puVar45 + -1;
      uVar38 = uVar38 + 1;
      puVar45 = puVar45 + 2;
      uVar32 = iVar31 << (ulong)(*puVar1 & 0x1f) | uVar32;
    } while (uVar38 < *(uint *)(param_2 + 0x34));
  }
  uVar24 = uVar32 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c);
  *(uint *)(param_6 + 0x40) = uVar24;
  *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar32;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  if ((*(int *)(param_6 + 0x24) == 2) ||
     ((*(int *)(param_6 + 0x24) == 0) !=
      (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar32)))) {
    if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
      GVar11 = param_6[0x34];
    }
    else {
      GVar11 = param_6[0x34];
    }
    if ((GVar11 == (GetDensityProcessor)0x0) ||
       ((*(uint *)(param_6 + 0x38) != 0 && ((*(uint *)(param_6 + 0x38) & uVar24) == 0))))
    goto LAB_007c4c30;
    *(uint *)param_6 =
         (*(int *)(param_6 + 0xc) + uVar24 &
         ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
    piVar36 = (int *)(param_6 + 8);
    goto LAB_007c4c24;
  }
  goto LAB_007c4c30;
LAB_007c4dc4:
  uVar39 = uVar39 + 1;
  uVar40 = uVar40 + 1;
  if (uVar39 == uVar26) goto LAB_007c4d80;
  goto LAB_007c4dd8;
LAB_007c4d80:
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar17) goto LAB_007c4c24;
  goto LAB_007c4d94;
}


