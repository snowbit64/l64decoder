// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007ce258
// Size: 3936 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ChunkedBitSquare * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ChunkedBitSquare,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*, BitVector*,
   ChunkedBitSquare*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,ChunkedBitSquare *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,
               GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  DensityMapFilter DVar13;
  DensityMapFilter DVar14;
  GetDensityProcessor GVar15;
  int iVar16;
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
  int iVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  code **ppcVar37;
  int *piVar38;
  int *piVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  long *plVar44;
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
  uint local_74;
  
  uVar22 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar23 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar24 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar44 = *(long **)param_7;
  uVar25 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar26 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar27 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar36 = *(int *)(param_7 + 8);
  uVar6 = *(uint *)(param_7 + 0xc);
  plVar44 = *(long **)param_8;
  iVar32 = *(int *)(param_7 + 0x18);
  iVar7 = *(int *)(param_7 + 0x1c);
  DVar13 = param_7[0x20];
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar18 = ~(-1 << (ulong)(uVar27 & 0x1f));
  uVar28 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar29 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar27 = *(uint *)(param_8 + 0x10);
  uVar19 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar30 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  iVar12 = *(int *)(param_8 + 0x1c);
  DVar14 = param_8[0x20];
  uVar20 = ~(-1 << (ulong)(uVar30 & 0x1f));
  uVar30 = *(uint *)(param_8 + 0x24);
  if ((((uVar22 < uVar25) || (uVar23 < uVar26)) || (uVar22 < uVar28)) || (uVar23 < uVar29)) {
    if (((uVar25 < uVar22) || (uVar26 < uVar23)) || ((uVar28 < uVar22 || (uVar29 < uVar23)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar36 != 0
         )) {
                    /* try { // try from 007cf180 to 007cf18b has its CatchHandler @ 007cf1b8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar25,(ulong)uVar26,(ulong)uVar28,(ulong)uVar29,(ulong)uVar22,
                         (ulong)uVar23);
      return false;
    }
    uVar40 = 0;
    if (uVar23 != 0) {
      uVar40 = uVar26 / uVar23;
    }
    uVar26 = 0;
    if (uVar22 != 0) {
      uVar26 = uVar25 / uVar22;
    }
    uVar50 = NEON_cnt((ulong)uVar26,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar26 & 0xffff0000) != 0;
      uVar25 = uVar26 >> 0x10;
      if (!bVar21) {
        uVar25 = uVar26;
      }
      uVar35 = (uint)bVar21;
      uVar31 = uVar35 << 4 | 8;
      uVar42 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar31 = uVar35 << 4;
        uVar42 = uVar25;
      }
      uVar25 = uVar31 | 4;
      uVar35 = uVar42 >> 4;
      if (uVar42 < 0x10) {
        uVar25 = uVar31;
        uVar35 = uVar42;
      }
      uVar31 = uVar25 | 2;
      uVar42 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar31 = uVar25;
        uVar42 = uVar35;
      }
      local_104 = (uVar42 + uVar31) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar40,1);
    uVar25 = 0;
    if (uVar22 != 0) {
      uVar25 = uVar28 / uVar22;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar40 & 0xffff0000) != 0;
      uVar28 = uVar40 >> 0x10;
      if (!bVar21) {
        uVar28 = uVar40;
      }
      uVar35 = (uint)bVar21;
      uVar31 = uVar35 << 4 | 8;
      uVar42 = uVar28 >> 8;
      if (uVar28 < 0x100) {
        uVar31 = uVar35 << 4;
        uVar42 = uVar28;
      }
      uVar28 = uVar31 | 4;
      uVar35 = uVar42 >> 4;
      if (uVar42 < 0x10) {
        uVar28 = uVar31;
        uVar35 = uVar42;
      }
      uVar31 = uVar28 | 2;
      uVar42 = uVar35 >> 2;
      if (uVar35 < 4) {
        uVar31 = uVar28;
        uVar42 = uVar35;
      }
      local_144 = (uVar42 + uVar31) - 1;
    }
    else {
      local_144 = 0;
    }
    uVar28 = 0;
    if (uVar23 != 0) {
      uVar28 = uVar29 / uVar23;
    }
    uVar50 = NEON_cnt((ulong)uVar25,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar25 & 0xffff0000) != 0;
      uVar23 = uVar25 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar25;
      }
      uVar42 = (uint)bVar21;
      uVar29 = uVar42 << 4 | 8;
      uVar31 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar29 = uVar42 << 4;
        uVar31 = uVar23;
      }
      uVar23 = uVar29 | 4;
      uVar42 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar23 = uVar29;
        uVar42 = uVar31;
      }
      uVar29 = uVar23 | 2;
      uVar31 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar29 = uVar23;
        uVar31 = uVar42;
      }
      local_114 = (uVar31 + uVar29) - 1;
    }
    else {
      local_114 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar28,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar28 & 0xffff0000) != 0;
      uVar23 = uVar28 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar28;
      }
      uVar42 = (uint)bVar21;
      uVar29 = uVar42 << 4 | 8;
      uVar31 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar29 = uVar42 << 4;
        uVar31 = uVar23;
      }
      uVar23 = uVar29 | 4;
      uVar42 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar23 = uVar29;
        uVar42 = uVar31;
      }
      uVar29 = uVar23 | 2;
      uVar31 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar29 = uVar23;
        uVar31 = uVar42;
      }
      local_148 = (uVar31 + uVar29) - 1;
    }
    else {
      local_148 = 0;
    }
    uVar23 = *(uint *)(param_5 + 0x48);
    if (uVar23 < *(uint *)(param_5 + 0x4c)) {
      if (uVar26 < 2) {
        uVar26 = 1;
      }
      if (uVar40 < 2) {
        uVar40 = 1;
      }
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar23);
        uVar29 = *(uint *)(param_5 + 0x58);
        if (uVar29 < *(uint *)(param_5 + 0x5c)) {
LAB_007ceda4:
          uVar31 = 0;
          uVar42 = uVar29 << (ulong)(local_104 & 0x1f);
          do {
            uVar35 = 0;
            uVar47 = (ulong)*(uint *)(param_3 + 0x34);
            uVar3 = uVar31 + (uVar23 << (ulong)(local_144 & 0x1f));
            uVar2 = uVar42;
            do {
              uVar4 = uVar35 + uVar42;
              iVar16 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
              iVar48 = (int)uVar47;
              ppcVar37 = *(code ***)
                          (*(long *)(param_3 + 0x28) + (ulong)((iVar16 + (uVar4 >> 5)) * iVar48) * 8
                          );
              uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
              uVar33 = (**ppcVar37)(ppcVar37,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
              piVar39 = (int *)(param_6 + 4);
              if (*(uint *)(param_3 + 0x34) < 2) {
                uVar47 = (ulong)*(uint *)(param_3 + 0x34);
                if (iVar36 != 2) goto LAB_007ceed8;
LAB_007ceef8:
                uVar4 = uVar33 >> (ulong)(uVar5 & 0x1f) & uVar17;
                if (((int)uVar4 < iVar32) || (iVar7 < (int)uVar4)) {
                  if (DVar13 != (DensityMapFilter)0x0) goto LAB_007cef24;
                }
                else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007cef24:
                  if ((uVar8 == 0) || ((uVar4 & uVar8) != 0)) {
                    uVar31 = 0;
                    goto LAB_007cef68;
                  }
                }
              }
              else {
                uVar45 = 1;
                puVar46 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar37 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar48 * (iVar16 + (uVar2 >> 5)) + (int)uVar45) * 8);
                  iVar34 = (**ppcVar37)(ppcVar37,uVar4,0,*puVar46);
                  puVar1 = puVar46 + -1;
                  uVar45 = uVar45 + 1;
                  uVar47 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar46 = puVar46 + 2;
                  uVar33 = iVar34 << (ulong)(*puVar1 & 0x1f) | uVar33;
                } while (uVar45 < uVar47);
                if (iVar36 == 2) goto LAB_007ceef8;
LAB_007ceed8:
                if ((iVar36 == 0) != ((uVar33 & uVar18) != uVar6)) goto LAB_007ceef8;
              }
              uVar35 = uVar35 + 1;
              uVar2 = uVar2 + 1;
            } while (uVar35 != uVar26);
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar40);
          goto LAB_007ced88;
        }
LAB_007ced18:
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar40 = 0;
    if (uVar25 != 0) {
      uVar40 = uVar22 / uVar25;
    }
    uVar25 = 0;
    if (uVar26 != 0) {
      uVar25 = uVar23 / uVar26;
    }
    uVar50 = NEON_cnt((ulong)uVar40,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar40 & 0xffff0000) != 0;
      uVar26 = uVar40 >> 0x10;
      if (!bVar21) {
        uVar26 = uVar40;
      }
      uVar42 = (uint)bVar21;
      uVar40 = uVar42 << 4 | 8;
      uVar31 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar40 = uVar42 << 4;
        uVar31 = uVar26;
      }
      uVar26 = uVar40 | 4;
      uVar42 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar26 = uVar40;
        uVar42 = uVar31;
      }
      uVar40 = uVar26 | 2;
      uVar31 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar40 = uVar26;
        uVar31 = uVar42;
      }
      local_74 = (uVar31 + uVar40) - 1;
    }
    else {
      local_74 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar25,1);
    uVar26 = 0;
    if (uVar28 != 0) {
      uVar26 = uVar22 / uVar28;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar25 & 0xffff0000) != 0;
      uVar28 = uVar25 >> 0x10;
      if (!bVar21) {
        uVar28 = uVar25;
      }
      uVar31 = (uint)bVar21;
      uVar25 = uVar31 << 4 | 8;
      uVar40 = uVar28 >> 8;
      if (uVar28 < 0x100) {
        uVar25 = uVar31 << 4;
        uVar40 = uVar28;
      }
      uVar28 = uVar25 | 4;
      uVar31 = uVar40 >> 4;
      if (uVar40 < 0x10) {
        uVar28 = uVar25;
        uVar31 = uVar40;
      }
      uVar25 = uVar28 | 2;
      uVar40 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar25 = uVar28;
        uVar40 = uVar31;
      }
      local_e8 = (uVar40 + uVar25) - 1;
    }
    else {
      local_e8 = 0;
    }
    uVar25 = 0;
    if (uVar29 != 0) {
      uVar25 = uVar23 / uVar29;
    }
    uVar50 = NEON_cnt((ulong)uVar26,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar26 & 0xffff0000) != 0;
      uVar23 = uVar26 >> 0x10;
      if (!bVar21) {
        uVar23 = uVar26;
      }
      uVar29 = (uint)bVar21;
      uVar26 = uVar29 << 4 | 8;
      uVar28 = uVar23 >> 8;
      if (uVar23 < 0x100) {
        uVar26 = uVar29 << 4;
        uVar28 = uVar23;
      }
      uVar23 = uVar26 | 4;
      uVar29 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar23 = uVar26;
        uVar29 = uVar28;
      }
      uVar26 = uVar23 | 2;
      uVar28 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar26 = uVar23;
        uVar28 = uVar29;
      }
      uVar23 = (uVar28 + uVar26) - 1;
    }
    else {
      uVar23 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar25,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar21 = (uVar25 & 0xffff0000) != 0;
      uVar26 = uVar25 >> 0x10;
      if (!bVar21) {
        uVar26 = uVar25;
      }
      uVar29 = (uint)bVar21;
      uVar25 = uVar29 << 4 | 8;
      uVar28 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar25 = uVar29 << 4;
        uVar28 = uVar26;
      }
      uVar26 = uVar25 | 4;
      uVar29 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar26 = uVar25;
        uVar29 = uVar28;
      }
      uVar25 = uVar26 | 2;
      uVar28 = uVar29 >> 2;
      if (uVar29 < 4) {
        uVar25 = uVar26;
        uVar28 = uVar29;
      }
      local_ec = (uVar28 + uVar25) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar25 = *(uint *)(param_5 + 0x48);
    if (uVar25 < *(uint *)(param_5 + 0x4c)) {
      piVar39 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar25);
        uVar26 = *(uint *)(param_5 + 0x58);
        if (uVar26 < *(uint *)(param_5 + 0x5c)) {
          uVar28 = uVar25 >> (ulong)(local_e8 & 0x1f);
          do {
            uVar29 = uVar26 >> (ulong)(local_74 & 0x1f);
            uVar40 = (((uVar28 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar29 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar37 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar40 * 8);
            uVar29 = uVar29 & 0x1f | (uVar28 & 0x1f) << 5;
            uVar31 = (**ppcVar37)(ppcVar37,uVar29,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar47 = 1;
              puVar46 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar37 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar40 + (int)uVar47) * 8);
                iVar32 = (**ppcVar37)(ppcVar37,uVar29,0,*puVar46);
                puVar1 = puVar46 + -1;
                uVar47 = uVar47 + 1;
                puVar46 = puVar46 + 2;
                uVar31 = iVar32 << (ulong)(*puVar1 & 0x1f) | uVar31;
              } while (uVar47 < *(uint *)(param_3 + 0x34));
            }
            piVar38 = piVar39;
            if ((((((iVar36 == 2) || ((iVar36 == 0) != ((uVar31 & uVar18) != uVar6))) &&
                  (DVar13 == (DensityMapFilter)0x0)) &&
                 (((uVar8 == 0 || ((uVar31 >> (ulong)(uVar5 & 0x1f) & uVar17 & uVar8) != 0)) &&
                  ((uVar29 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar26 >> (ulong)(uVar23 & 0x1f),
                                        uVar25 >> (ulong)(local_ec & 0x1f)), iVar9 == 2 ||
                   ((iVar9 == 0) != ((uVar29 & uVar20) != uVar10))))))) &&
                (DVar14 == (DensityMapFilter)0x0)) &&
               ((uVar30 == 0 || ((uVar29 >> (ulong)(uVar27 & 0x1f) & uVar19 & uVar30) != 0)))) {
              uVar29 = (uVar26 + uVar25 * uVar22) * uVar24;
              lVar43 = *(long *)param_2;
              uVar47 = (ulong)(uVar29 >> 3) & 0xffff;
              lVar41 = *(long *)(lVar43 + (ulong)(uVar29 >> 0x13) * 8);
              if ((uint)uVar47 < 0xfffd) {
                uVar40 = *(uint *)(lVar41 + uVar47);
              }
              else {
                uVar40 = (uVar29 >> 3) + 1;
                uVar31 = (uVar29 >> 3) + 2;
                uVar40 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar43 + (ulong)(uVar31 >> 0x10) * 8) +
                                         ((ulong)uVar31 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar43 + (ulong)(uVar40 >> 0x10) * 8) +
                                                  ((ulong)uVar40 & 0xffff)),
                                                 *(undefined *)(lVar41 + uVar47)));
              }
              uVar29 = uVar40 >> (ulong)(uVar29 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
              uVar40 = uVar29 & *(uint *)(param_6 + 0x20);
              uVar29 = uVar29 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              *(uint *)(param_6 + 0x40) = uVar29;
              *(uint *)(param_6 + 0x44) = uVar40;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) != (*(uint *)(param_6 + 0x28) != uVar40))) {
                if ((int)uVar29 < *(int *)(param_6 + 0x2c)) {
                  GVar15 = param_6[0x34];
joined_r0x007cead0:
                  if (GVar15 == (GetDensityProcessor)0x0) goto LAB_007cea24;
                }
                else {
                  GVar15 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar29) goto joined_r0x007cead0;
                  if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007cea24;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar29) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar29 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar29) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar38 = (int *)(param_6 + 8);
                  goto LAB_007cea18;
                }
              }
            }
            else {
LAB_007cea18:
              *piVar38 = *piVar38 + 1;
            }
LAB_007cea24:
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(param_5 + 0x5c));
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007cef68:
  do {
    uVar42 = 0;
    do {
      uVar35 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar29 << (ulong)(local_114 & 0x1f)) + uVar42,
                          uVar31 + (uVar23 << (ulong)(local_148 & 0x1f)));
      if ((iVar9 == 2) || ((iVar9 == 0) != ((uVar35 & uVar20) != uVar10))) {
        uVar35 = uVar35 >> (ulong)(uVar27 & 0x1f) & uVar19;
        if (((int)uVar35 < iVar11) || (iVar12 < (int)uVar35)) {
          if (DVar14 != (DensityMapFilter)0x0) goto LAB_007cf004;
        }
        else if (DVar14 == (DensityMapFilter)0x0) {
LAB_007cf004:
          if ((uVar30 == 0) || ((uVar35 & uVar30) != 0)) {
            uVar31 = (uVar29 + uVar23 * uVar22) * uVar24;
            lVar43 = *(long *)param_2;
            uVar47 = (ulong)(uVar31 >> 3) & 0xffff;
            lVar41 = *(long *)(lVar43 + (ulong)(uVar31 >> 0x13) * 8);
            if ((uint)uVar47 < 0xfffd) {
              uVar42 = *(uint *)(lVar41 + uVar47);
            }
            else {
              uVar42 = (uVar31 >> 3) + 1;
              uVar35 = (uVar31 >> 3) + 2;
              uVar42 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar43 + (ulong)(uVar35 >> 0x10) * 8) +
                                       ((ulong)uVar35 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar43 + (ulong)(uVar42 >> 0x10) * 8) +
                                                ((ulong)uVar42 & 0xffff)),
                                               *(undefined *)(lVar41 + uVar47)));
            }
            uVar31 = uVar42 >> (ulong)(uVar31 & 7) & ~(-1 << (ulong)(uVar24 & 0x1f)) & 0xffffU;
            uVar42 = uVar31 & *(uint *)(param_6 + 0x20);
            uVar31 = uVar31 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            *(uint *)(param_6 + 0x40) = uVar31;
            *(uint *)(param_6 + 0x44) = uVar42;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) == (*(uint *)(param_6 + 0x28) != uVar42)))
            goto LAB_007ced94;
            if ((int)uVar31 < *(int *)(param_6 + 0x2c)) {
              GVar15 = param_6[0x34];
joined_r0x007cf110:
              if (GVar15 == (GetDensityProcessor)0x0) goto LAB_007ced94;
            }
            else {
              GVar15 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar31) goto joined_r0x007cf110;
              if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007ced94;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar31) == 0))
            goto LAB_007ced94;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar31 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar31) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar39 = (int *)(param_6 + 8);
            goto LAB_007ced88;
          }
        }
      }
      uVar42 = uVar42 + 1;
    } while (uVar42 != uVar25);
    uVar31 = uVar31 + 1;
  } while (uVar31 != uVar28);
LAB_007ced88:
  *piVar39 = *piVar39 + 1;
LAB_007ced94:
  uVar29 = uVar29 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar29) goto LAB_007ced18;
  goto LAB_007ceda4;
}


