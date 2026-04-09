// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007cc0cc
// Size: 4296 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ChunkedBitSquare * param_3, ChunkedBitSquare * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ChunkedBitSquare,
   ChunkedBitSquare, ParallelogramHelper, DensityMapOperations::GetDensityProcessor<BitVector>
   >(IDensityPixelSource*, BitVector*, ChunkedBitSquare*, ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ChunkedBitSquare,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,ChunkedBitSquare *param_3,
               ChunkedBitSquare *param_4,ParallelogramHelper *param_5,GetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
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
  uint uVar21;
  bool bVar22;
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
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  code **ppcVar37;
  int *piVar38;
  int *piVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  long *plVar44;
  ulong uVar45;
  ulong uVar46;
  int iVar47;
  undefined4 *puVar48;
  undefined2 uVar49;
  undefined8 uVar50;
  uint local_158;
  uint local_154;
  uint local_12c;
  uint local_11c;
  uint local_104;
  uint local_100;
  uint local_74;
  
  uVar23 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar24 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar25 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar44 = *(long **)param_7;
  uVar26 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar27 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar5 = *(uint *)(param_7 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar28 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar36 = *(int *)(param_7 + 8);
  plVar44 = *(long **)param_8;
  iVar33 = *(int *)(param_7 + 0x18);
  iVar6 = *(int *)(param_7 + 0x1c);
  DVar13 = param_7[0x20];
  uVar7 = *(uint *)(param_7 + 0xc);
  uVar8 = *(uint *)(param_7 + 0x24);
  uVar18 = ~(-1 << (ulong)(uVar28 & 0x1f));
  uVar29 = (**(code **)(*plVar44 + 0x18))(plVar44);
  uVar30 = (**(code **)(*plVar44 + 0x20))(plVar44);
  (**(code **)(*plVar44 + 0x30))(plVar44);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar28 = *(uint *)(param_8 + 0x10);
  uVar19 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar31 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar9 = *(int *)(param_8 + 8);
  uVar10 = *(uint *)(param_8 + 0xc);
  iVar11 = *(int *)(param_8 + 0x18);
  DVar14 = param_8[0x20];
  iVar12 = *(int *)(param_8 + 0x1c);
  uVar20 = ~(-1 << (ulong)(uVar31 & 0x1f));
  uVar31 = *(uint *)(param_8 + 0x24);
  if ((((uVar23 < uVar26) || (uVar24 < uVar27)) || (uVar23 < uVar29)) || (uVar24 < uVar30)) {
    if (((uVar26 < uVar23) || (uVar27 < uVar24)) || ((uVar29 < uVar23 || (uVar30 < uVar24)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar36 != 0
         )) {
                    /* try { // try from 007cd15c to 007cd167 has its CatchHandler @ 007cd194 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar26,(ulong)uVar27,(ulong)uVar29,(ulong)uVar30,(ulong)uVar23,
                         (ulong)uVar24);
      return false;
    }
    uVar21 = 0;
    if (uVar24 != 0) {
      uVar21 = uVar27 / uVar24;
    }
    uVar27 = 0;
    if (uVar23 != 0) {
      uVar27 = uVar26 / uVar23;
    }
    uVar50 = NEON_cnt((ulong)uVar27,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar27 & 0xffff0000) != 0;
      uVar26 = uVar27 >> 0x10;
      if (!bVar22) {
        uVar26 = uVar27;
      }
      uVar41 = (uint)bVar22;
      uVar42 = uVar41 << 4 | 8;
      uVar32 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar42 = uVar41 << 4;
        uVar32 = uVar26;
      }
      uVar26 = uVar42 | 4;
      uVar41 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar26 = uVar42;
        uVar41 = uVar32;
      }
      uVar42 = uVar26 | 2;
      uVar32 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar42 = uVar26;
        uVar32 = uVar41;
      }
      local_11c = (uVar32 + uVar42) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar21,1);
    uVar26 = 0;
    if (uVar23 != 0) {
      uVar26 = uVar29 / uVar23;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar21 & 0xffff0000) != 0;
      uVar29 = uVar21 >> 0x10;
      if (!bVar22) {
        uVar29 = uVar21;
      }
      uVar41 = (uint)bVar22;
      uVar42 = uVar41 << 4 | 8;
      uVar32 = uVar29 >> 8;
      if (uVar29 < 0x100) {
        uVar42 = uVar41 << 4;
        uVar32 = uVar29;
      }
      uVar29 = uVar42 | 4;
      uVar41 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar29 = uVar42;
        uVar41 = uVar32;
      }
      uVar42 = uVar29 | 2;
      uVar32 = uVar41 >> 2;
      if (uVar41 < 4) {
        uVar42 = uVar29;
        uVar32 = uVar41;
      }
      local_154 = (uVar32 + uVar42) - 1;
    }
    else {
      local_154 = 0;
    }
    uVar29 = 0;
    if (uVar24 != 0) {
      uVar29 = uVar30 / uVar24;
    }
    uVar50 = NEON_cnt((ulong)uVar26,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar26 & 0xffff0000) != 0;
      uVar24 = uVar26 >> 0x10;
      if (!bVar22) {
        uVar24 = uVar26;
      }
      uVar32 = (uint)bVar22;
      uVar30 = uVar32 << 4 | 8;
      uVar42 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar30 = uVar32 << 4;
        uVar42 = uVar24;
      }
      uVar24 = uVar30 | 4;
      uVar32 = uVar42 >> 4;
      if (uVar42 < 0x10) {
        uVar24 = uVar30;
        uVar32 = uVar42;
      }
      uVar30 = uVar24 | 2;
      uVar42 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar30 = uVar24;
        uVar42 = uVar32;
      }
      local_12c = (uVar42 + uVar30) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar29,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar29 & 0xffff0000) != 0;
      uVar24 = uVar29 >> 0x10;
      if (!bVar22) {
        uVar24 = uVar29;
      }
      uVar32 = (uint)bVar22;
      uVar30 = uVar32 << 4 | 8;
      uVar42 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar30 = uVar32 << 4;
        uVar42 = uVar24;
      }
      uVar24 = uVar30 | 4;
      uVar32 = uVar42 >> 4;
      if (uVar42 < 0x10) {
        uVar24 = uVar30;
        uVar32 = uVar42;
      }
      uVar30 = uVar24 | 2;
      uVar42 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar30 = uVar24;
        uVar42 = uVar32;
      }
      local_158 = (uVar42 + uVar30) - 1;
    }
    else {
      local_158 = 0;
    }
    uVar24 = *(uint *)(param_5 + 0x48);
    if (uVar24 < *(uint *)(param_5 + 0x4c)) {
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar26 < 2) {
        uVar26 = 1;
      }
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar24);
        uVar30 = *(uint *)(param_5 + 0x58);
        if (uVar30 < *(uint *)(param_5 + 0x5c)) {
LAB_007cccbc:
          uVar42 = 0;
          uVar32 = uVar30 << (ulong)(local_11c & 0x1f);
          do {
            uVar41 = 0;
            uVar45 = (ulong)*(uint *)(param_3 + 0x34);
            uVar3 = uVar42 + (uVar24 << (ulong)(local_154 & 0x1f));
            uVar2 = uVar32;
            do {
              uVar4 = uVar41 + uVar32;
              iVar16 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
              iVar47 = (int)uVar45;
              ppcVar37 = *(code ***)
                          (*(long *)(param_3 + 0x28) + (ulong)((iVar16 + (uVar4 >> 5)) * iVar47) * 8
                          );
              uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
              uVar34 = (**ppcVar37)(ppcVar37,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
              if (*(uint *)(param_3 + 0x34) < 2) {
                uVar45 = (ulong)*(uint *)(param_3 + 0x34);
              }
              else {
                uVar46 = 1;
                puVar48 = (undefined4 *)(param_3 + 0x44);
                do {
                  ppcVar37 = *(code ***)
                              (*(long *)(param_3 + 0x28) +
                              (ulong)(iVar47 * (iVar16 + (uVar2 >> 5)) + (int)uVar46) * 8);
                  iVar35 = (**ppcVar37)(ppcVar37,uVar4,0,*puVar48);
                  puVar1 = puVar48 + -1;
                  uVar46 = uVar46 + 1;
                  uVar45 = (ulong)*(uint *)(param_3 + 0x34);
                  puVar48 = puVar48 + 2;
                  uVar34 = iVar35 << (ulong)(*puVar1 & 0x1f) | uVar34;
                } while (uVar46 < uVar45);
              }
              piVar39 = (int *)(param_6 + 4);
              if ((iVar36 == 2) || ((iVar36 == 0) != ((uVar34 & uVar18) != uVar7))) {
                uVar4 = uVar34 >> (ulong)(uVar5 & 0x1f) & uVar17;
                if (((int)uVar4 < iVar33) || (iVar6 < (int)uVar4)) {
                  if (DVar13 != (DensityMapFilter)0x0) goto LAB_007cce3c;
                }
                else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007cce3c:
                  if ((uVar8 == 0) || ((uVar4 & uVar8) != 0)) {
                    uVar42 = 0;
                    uVar32 = uVar30 << (ulong)(local_12c & 0x1f);
                    goto LAB_007cce80;
                  }
                }
              }
              uVar41 = uVar41 + 1;
              uVar2 = uVar2 + 1;
            } while (uVar41 != uVar27);
            uVar42 = uVar42 + 1;
          } while (uVar42 != uVar21);
          goto LAB_007ccca0;
        }
LAB_007ccc40:
        uVar24 = uVar24 + 1;
      } while (uVar24 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar21 = 0;
    if (uVar26 != 0) {
      uVar21 = uVar23 / uVar26;
    }
    uVar26 = 0;
    if (uVar27 != 0) {
      uVar26 = uVar24 / uVar27;
    }
    uVar50 = NEON_cnt((ulong)uVar21,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar21 & 0xffff0000) != 0;
      uVar27 = uVar21 >> 0x10;
      if (!bVar22) {
        uVar27 = uVar21;
      }
      uVar32 = (uint)bVar22;
      uVar21 = uVar32 << 4 | 8;
      uVar42 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar21 = uVar32 << 4;
        uVar42 = uVar27;
      }
      uVar27 = uVar21 | 4;
      uVar32 = uVar42 >> 4;
      if (uVar42 < 0x10) {
        uVar27 = uVar21;
        uVar32 = uVar42;
      }
      uVar21 = uVar27 | 2;
      uVar42 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar21 = uVar27;
        uVar42 = uVar32;
      }
      local_74 = (uVar42 + uVar21) - 1;
    }
    else {
      local_74 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar26,1);
    uVar27 = 0;
    if (uVar29 != 0) {
      uVar27 = uVar23 / uVar29;
    }
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar26 & 0xffff0000) != 0;
      uVar29 = uVar26 >> 0x10;
      if (!bVar22) {
        uVar29 = uVar26;
      }
      uVar42 = (uint)bVar22;
      uVar26 = uVar42 << 4 | 8;
      uVar21 = uVar29 >> 8;
      if (uVar29 < 0x100) {
        uVar26 = uVar42 << 4;
        uVar21 = uVar29;
      }
      uVar29 = uVar26 | 4;
      uVar42 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar29 = uVar26;
        uVar42 = uVar21;
      }
      uVar26 = uVar29 | 2;
      uVar21 = uVar42 >> 2;
      if (uVar42 < 4) {
        uVar26 = uVar29;
        uVar21 = uVar42;
      }
      local_100 = (uVar21 + uVar26) - 1;
    }
    else {
      local_100 = 0;
    }
    uVar26 = 0;
    if (uVar30 != 0) {
      uVar26 = uVar24 / uVar30;
    }
    uVar50 = NEON_cnt((ulong)uVar27,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar27 & 0xffff0000) != 0;
      uVar24 = uVar27 >> 0x10;
      if (!bVar22) {
        uVar24 = uVar27;
      }
      uVar30 = (uint)bVar22;
      uVar27 = uVar30 << 4 | 8;
      uVar29 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar27 = uVar30 << 4;
        uVar29 = uVar24;
      }
      uVar24 = uVar27 | 4;
      uVar30 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar24 = uVar27;
        uVar30 = uVar29;
      }
      uVar27 = uVar24 | 2;
      uVar29 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar27 = uVar24;
        uVar29 = uVar30;
      }
      uVar24 = (uVar29 + uVar27) - 1;
    }
    else {
      uVar24 = 0;
    }
    uVar50 = NEON_cnt((ulong)uVar26,1);
    uVar49 = NEON_uaddlv(uVar50,1);
    if ((int)CONCAT62((int6)((ulong)uVar50 >> 0x10),uVar49) == 1) {
      bVar22 = (uVar26 & 0xffff0000) != 0;
      uVar27 = uVar26 >> 0x10;
      if (!bVar22) {
        uVar27 = uVar26;
      }
      uVar30 = (uint)bVar22;
      uVar26 = uVar30 << 4 | 8;
      uVar29 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar26 = uVar30 << 4;
        uVar29 = uVar27;
      }
      uVar27 = uVar26 | 4;
      uVar30 = uVar29 >> 4;
      if (uVar29 < 0x10) {
        uVar27 = uVar26;
        uVar30 = uVar29;
      }
      uVar26 = uVar27 | 2;
      uVar29 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar26 = uVar27;
        uVar29 = uVar30;
      }
      local_104 = (uVar29 + uVar26) - 1;
    }
    else {
      local_104 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    if (uVar26 < *(uint *)(param_5 + 0x4c)) {
      piVar39 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar27 = *(uint *)(param_5 + 0x58);
        if (uVar27 < *(uint *)(param_5 + 0x5c)) {
          uVar29 = uVar26 >> (ulong)(local_100 & 0x1f);
          uVar30 = uVar26 >> (ulong)(local_104 & 0x1f);
          do {
            uVar21 = uVar27 >> (ulong)(local_74 & 0x1f);
            uVar42 = (((uVar29 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar21 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar37 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar42 * 8);
            uVar21 = uVar21 & 0x1f | (uVar29 & 0x1f) << 5;
            uVar32 = (**ppcVar37)(ppcVar37,uVar21,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar45 = 1;
              puVar48 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar37 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar42 + (int)uVar45) * 8);
                iVar33 = (**ppcVar37)(ppcVar37,uVar21,0,*puVar48);
                puVar1 = puVar48 + -1;
                uVar45 = uVar45 + 1;
                puVar48 = puVar48 + 2;
                uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
              } while (uVar45 < *(uint *)(param_3 + 0x34));
            }
            piVar38 = piVar39;
            if ((((iVar36 == 2) || ((iVar36 == 0) != ((uVar32 & uVar18) != uVar7))) &&
                (DVar13 == (DensityMapFilter)0x0)) &&
               ((uVar8 == 0 || ((uVar32 >> (ulong)(uVar5 & 0x1f) & uVar17 & uVar8) != 0)))) {
              uVar21 = uVar27 >> (ulong)(uVar24 & 0x1f);
              uVar42 = (((uVar30 >> 5) << (ulong)(*(uint *)param_4 & 0x1f)) + (uVar21 >> 5)) *
                       *(int *)(param_4 + 0x34);
              ppcVar37 = *(code ***)(*(long *)(param_4 + 0x28) + (ulong)uVar42 * 8);
              uVar21 = uVar21 & 0x1f | (uVar30 & 0x1f) << 5;
              uVar32 = (**ppcVar37)(ppcVar37,uVar21,0,*(undefined4 *)(param_4 + 0x3c));
              if (1 < *(uint *)(param_4 + 0x34)) {
                uVar45 = 1;
                puVar48 = (undefined4 *)(param_4 + 0x44);
                do {
                  ppcVar37 = *(code ***)
                              (*(long *)(param_4 + 0x28) + (ulong)(uVar42 + (int)uVar45) * 8);
                  iVar33 = (**ppcVar37)(ppcVar37,uVar21,0,*puVar48);
                  puVar1 = puVar48 + -1;
                  uVar45 = uVar45 + 1;
                  puVar48 = puVar48 + 2;
                  uVar32 = iVar33 << (ulong)(*puVar1 & 0x1f) | uVar32;
                } while (uVar45 < *(uint *)(param_4 + 0x34));
              }
              if (((iVar9 != 2) && ((iVar9 == 0) == ((uVar32 & uVar20) != uVar10))) ||
                 ((DVar14 != (DensityMapFilter)0x0 ||
                  ((uVar31 != 0 && ((uVar32 >> (ulong)(uVar28 & 0x1f) & uVar19 & uVar31) == 0))))))
              goto LAB_007cc920;
              uVar21 = (uVar27 + uVar26 * uVar23) * uVar25;
              lVar43 = *(long *)param_2;
              uVar45 = (ulong)(uVar21 >> 3) & 0xffff;
              lVar40 = *(long *)(lVar43 + (ulong)(uVar21 >> 0x13) * 8);
              if ((uint)uVar45 < 0xfffd) {
                uVar42 = *(uint *)(lVar40 + uVar45);
              }
              else {
                uVar42 = (uVar21 >> 3) + 1;
                uVar32 = (uVar21 >> 3) + 2;
                uVar42 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar43 + (ulong)(uVar32 >> 0x10) * 8) +
                                         ((ulong)uVar32 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar43 + (ulong)(uVar42 >> 0x10) * 8) +
                                                  ((ulong)uVar42 & 0xffff)),
                                                 *(undefined *)(lVar40 + uVar45)));
              }
              uVar21 = uVar42 >> (ulong)(uVar21 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
              uVar42 = uVar21 & *(uint *)(param_6 + 0x20);
              uVar21 = uVar21 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              *(uint *)(param_6 + 0x40) = uVar21;
              *(uint *)(param_6 + 0x44) = uVar42;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) != (*(uint *)(param_6 + 0x28) != uVar42))) {
                if ((int)uVar21 < *(int *)(param_6 + 0x2c)) {
                  GVar15 = param_6[0x34];
joined_r0x007cc9ec:
                  if (GVar15 == (GetDensityProcessor)0x0) goto LAB_007cc930;
                }
                else {
                  GVar15 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar21) goto joined_r0x007cc9ec;
                  if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007cc930;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar21) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar21 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar21) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar38 = (int *)(param_6 + 8);
                  goto LAB_007cc920;
                }
              }
            }
            else {
LAB_007cc920:
              *piVar38 = *piVar38 + 1;
            }
LAB_007cc930:
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(uint *)(param_5 + 0x5c));
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007cce80:
  do {
    uVar41 = 0;
    uVar45 = (ulong)*(uint *)(param_4 + 0x34);
    uVar3 = uVar42 + (uVar24 << (ulong)(local_158 & 0x1f));
    uVar2 = uVar32;
    do {
      uVar4 = uVar41 + uVar32;
      iVar16 = (uVar3 >> 5) << (ulong)(*(uint *)param_4 & 0x1f);
      iVar47 = (int)uVar45;
      ppcVar37 = *(code ***)
                  (*(long *)(param_4 + 0x28) + (ulong)((iVar16 + (uVar4 >> 5)) * iVar47) * 8);
      uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
      uVar34 = (**ppcVar37)(ppcVar37,uVar4,0,*(undefined4 *)(param_4 + 0x3c));
      if (*(uint *)(param_4 + 0x34) < 2) {
        uVar45 = (ulong)*(uint *)(param_4 + 0x34);
        if (iVar9 != 2) goto LAB_007ccf8c;
LAB_007ccfac:
        uVar4 = uVar34 >> (ulong)(uVar28 & 0x1f) & uVar19;
        if (((int)uVar4 < iVar11) || (iVar12 < (int)uVar4)) {
          if (DVar14 != (DensityMapFilter)0x0) goto LAB_007ccfd8;
        }
        else if (DVar14 == (DensityMapFilter)0x0) {
LAB_007ccfd8:
          if ((uVar31 == 0) || ((uVar4 & uVar31) != 0)) {
            uVar42 = (uVar30 + uVar24 * uVar23) * uVar25;
            lVar43 = *(long *)param_2;
            uVar45 = (ulong)(uVar42 >> 3) & 0xffff;
            lVar40 = *(long *)(lVar43 + (ulong)(uVar42 >> 0x13) * 8);
            if ((uint)uVar45 < 0xfffd) {
              uVar32 = *(uint *)(lVar40 + uVar45);
            }
            else {
              uVar32 = (uVar42 >> 3) + 1;
              uVar41 = (uVar42 >> 3) + 2;
              uVar32 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar43 + (ulong)(uVar41 >> 0x10) * 8) +
                                       ((ulong)uVar41 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar43 + (ulong)(uVar32 >> 0x10) * 8) +
                                                ((ulong)uVar32 & 0xffff)),
                                               *(undefined *)(lVar40 + uVar45)));
            }
            uVar42 = uVar32 >> (ulong)(uVar42 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
            uVar32 = uVar42 & *(uint *)(param_6 + 0x20);
            uVar42 = uVar42 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            *(uint *)(param_6 + 0x40) = uVar42;
            *(uint *)(param_6 + 0x44) = uVar32;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) == (*(uint *)(param_6 + 0x28) != uVar32)))
            goto LAB_007cccac;
            if ((int)uVar42 < *(int *)(param_6 + 0x2c)) {
              GVar15 = param_6[0x34];
joined_r0x007cd0ec:
              if (GVar15 == (GetDensityProcessor)0x0) goto LAB_007cccac;
            }
            else {
              GVar15 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar42) goto joined_r0x007cd0ec;
              if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007cccac;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar42) == 0))
            goto LAB_007cccac;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar42 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar42) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar39 = (int *)(param_6 + 8);
            goto LAB_007ccca0;
          }
        }
      }
      else {
        uVar46 = 1;
        puVar48 = (undefined4 *)(param_4 + 0x44);
        do {
          ppcVar37 = *(code ***)
                      (*(long *)(param_4 + 0x28) +
                      (ulong)(iVar47 * (iVar16 + (uVar2 >> 5)) + (int)uVar46) * 8);
          iVar35 = (**ppcVar37)(ppcVar37,uVar4,0,*puVar48);
          puVar1 = puVar48 + -1;
          uVar46 = uVar46 + 1;
          uVar45 = (ulong)*(uint *)(param_4 + 0x34);
          puVar48 = puVar48 + 2;
          uVar34 = iVar35 << (ulong)(*puVar1 & 0x1f) | uVar34;
        } while (uVar46 < uVar45);
        if (iVar9 == 2) goto LAB_007ccfac;
LAB_007ccf8c:
        if ((iVar9 == 0) != ((uVar34 & uVar20) != uVar10)) goto LAB_007ccfac;
      }
      uVar41 = uVar41 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar41 != uVar26);
    uVar42 = uVar42 + 1;
  } while (uVar42 != uVar29);
LAB_007ccca0:
  *piVar39 = *piVar39 + 1;
LAB_007cccac:
  uVar30 = uVar30 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar30) goto LAB_007ccc40;
  goto LAB_007cccbc;
}


