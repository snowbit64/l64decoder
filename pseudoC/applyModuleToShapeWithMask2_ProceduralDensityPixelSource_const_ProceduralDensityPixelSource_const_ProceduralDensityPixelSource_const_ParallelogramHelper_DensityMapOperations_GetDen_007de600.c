// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007de600
// Size: 3192 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ProceduralDensityPixelSource * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   ProceduralDensityPixelSource const, ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*,
   ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ProceduralDensityPixelSource *param_3,ProceduralDensityPixelSource *param_4,
               ParallelogramHelper *param_5,GetDensityProcessor *param_6,DensityMapFilter *param_7,
               DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  DensityMapFilter DVar10;
  DensityMapFilter DVar11;
  GetDensityProcessor GVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  int *piVar31;
  uint uVar32;
  long *plVar33;
  undefined2 uVar34;
  undefined8 uVar35;
  uint local_100;
  uint local_fc;
  uint local_dc;
  uint local_c4;
  uint local_b4;
  uint local_b0;
  uint local_a8;
  
  uVar19 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar20 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar33 = *(long **)param_7;
  uVar21 = (**(code **)(*plVar33 + 0x18))(plVar33);
  uVar22 = (**(code **)(*plVar33 + 0x20))(plVar33);
  (**(code **)(*plVar33 + 0x30))(plVar33);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar1 = *(uint *)(param_7 + 0x10);
  uVar13 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar33 = *(long **)param_8;
  iVar3 = *(int *)(param_7 + 0x1c);
  iVar4 = *(int *)(param_7 + 0x18);
  DVar10 = param_7[0x20];
  iVar29 = *(int *)(param_7 + 8);
  uVar2 = *(uint *)(param_7 + 0xc);
  uVar5 = *(uint *)(param_7 + 0x24);
  uVar14 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar24 = (**(code **)(*plVar33 + 0x18))(plVar33);
  uVar25 = (**(code **)(*plVar33 + 0x20))(plVar33);
  (**(code **)(*plVar33 + 0x30))(plVar33);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar23 = *(uint *)(param_8 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar6 = *(int *)(param_8 + 8);
  iVar7 = *(int *)(param_8 + 0x18);
  uVar8 = *(uint *)(param_8 + 0xc);
  DVar11 = param_8[0x20];
  iVar9 = *(int *)(param_8 + 0x1c);
  uVar16 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar26 = *(uint *)(param_8 + 0x24);
  if ((((uVar19 < uVar21) || (uVar20 < uVar22)) || (uVar19 < uVar24)) || (uVar20 < uVar25)) {
    if (((uVar21 < uVar19) || (uVar22 < uVar20)) || ((uVar24 < uVar19 || (uVar25 < uVar20)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar29 != 0
         )) {
                    /* try { // try from 007df240 to 007df24b has its CatchHandler @ 007df278 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar21,(ulong)uVar22,(ulong)uVar24,(ulong)uVar25,(ulong)uVar19,
                         (ulong)uVar20);
      return false;
    }
    uVar17 = 0;
    if (uVar19 != 0) {
      uVar17 = uVar21 / uVar19;
    }
    uVar21 = 0;
    if (uVar20 != 0) {
      uVar21 = uVar22 / uVar20;
    }
    uVar35 = NEON_cnt((ulong)uVar17,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar22 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar17;
      }
      uVar32 = (uint)bVar18;
      uVar28 = uVar32 << 4 | 8;
      uVar27 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar28 = uVar32 << 4;
        uVar27 = uVar22;
      }
      uVar22 = uVar28 | 4;
      uVar32 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar22 = uVar28;
        uVar32 = uVar27;
      }
      uVar28 = uVar22 | 2;
      uVar27 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar28 = uVar22;
        uVar27 = uVar32;
      }
      local_c4 = (uVar27 + uVar28) - 1;
    }
    else {
      local_c4 = 0;
    }
    uVar22 = 0;
    if (uVar19 != 0) {
      uVar22 = uVar24 / uVar19;
    }
    uVar35 = NEON_cnt((ulong)uVar21,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar18) {
        uVar19 = uVar21;
      }
      uVar27 = (uint)bVar18;
      uVar24 = uVar27 << 4 | 8;
      uVar28 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar24 = uVar27 << 4;
        uVar28 = uVar19;
      }
      uVar19 = uVar24 | 4;
      uVar27 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar19 = uVar24;
        uVar27 = uVar28;
      }
      uVar24 = uVar19 | 2;
      uVar28 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar24 = uVar19;
        uVar28 = uVar27;
      }
      local_fc = (uVar28 + uVar24) - 1;
    }
    else {
      local_fc = 0;
    }
    uVar19 = 0;
    if (uVar20 != 0) {
      uVar19 = uVar25 / uVar20;
    }
    uVar35 = NEON_cnt((ulong)uVar22,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar22 & 0xffff0000) != 0;
      uVar20 = uVar22 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar22;
      }
      uVar28 = (uint)bVar18;
      uVar24 = uVar28 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar24 = uVar28 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar24 | 4;
      uVar28 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar24;
        uVar28 = uVar25;
      }
      uVar24 = uVar20 | 2;
      uVar25 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar24 = uVar20;
        uVar25 = uVar28;
      }
      local_dc = (uVar25 + uVar24) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar19,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar20 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar19;
      }
      uVar28 = (uint)bVar18;
      uVar24 = uVar28 << 4 | 8;
      uVar25 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar24 = uVar28 << 4;
        uVar25 = uVar20;
      }
      uVar20 = uVar24 | 4;
      uVar28 = uVar25 >> 4;
      if (uVar25 < 0x10) {
        uVar20 = uVar24;
        uVar28 = uVar25;
      }
      uVar24 = uVar20 | 2;
      uVar25 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar24 = uVar20;
        uVar25 = uVar28;
      }
      local_100 = (uVar25 + uVar24) - 1;
    }
    else {
      local_100 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    if (uVar20 < *(uint *)(param_5 + 0x4c)) {
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar24 = *(uint *)(param_5 + 0x58);
        if (uVar24 < *(uint *)(param_5 + 0x5c)) {
LAB_007defa8:
          uVar25 = 0;
          do {
            uVar28 = 0;
            do {
              uVar27 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar24 << (ulong)(local_c4 & 0x1f)) + uVar28,
                                  uVar25 + (uVar20 << (ulong)(local_fc & 0x1f)));
              piVar31 = (int *)(param_6 + 4);
              if ((iVar29 == 2) || ((iVar29 == 0) != ((uVar27 & uVar14) != uVar2))) {
                uVar27 = uVar27 >> (ulong)(uVar1 & 0x1f) & uVar13;
                if (((int)uVar27 < iVar4) || (iVar3 < (int)uVar27)) {
                  if (DVar10 != (DensityMapFilter)0x0) goto LAB_007df05c;
                }
                else if (DVar10 == (DensityMapFilter)0x0) {
LAB_007df05c:
                  if ((uVar5 == 0) || ((uVar27 & uVar5) != 0)) {
                    uVar25 = 0;
                    goto LAB_007df094;
                  }
                }
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != uVar17);
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar21);
          goto LAB_007def8c;
        }
LAB_007def34:
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar17 = 0;
    if (uVar21 != 0) {
      uVar17 = uVar19 / uVar21;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar20 / uVar22;
    }
    uVar35 = NEON_cnt((ulong)uVar17,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar22 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar22 = uVar17;
      }
      uVar27 = (uint)bVar18;
      uVar17 = uVar27 << 4 | 8;
      uVar28 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar17 = uVar27 << 4;
        uVar28 = uVar22;
      }
      uVar22 = uVar17 | 4;
      uVar27 = uVar28 >> 4;
      if (uVar28 < 0x10) {
        uVar22 = uVar17;
        uVar27 = uVar28;
      }
      uVar17 = uVar22 | 2;
      uVar28 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar17 = uVar22;
        uVar28 = uVar27;
      }
      uVar22 = (uVar28 + uVar17) - 1;
    }
    else {
      uVar22 = 0;
    }
    uVar17 = 0;
    if (uVar24 != 0) {
      uVar17 = uVar19 / uVar24;
    }
    uVar35 = NEON_cnt((ulong)uVar21,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar21 & 0xffff0000) != 0;
      uVar19 = uVar21 >> 0x10;
      if (!bVar18) {
        uVar19 = uVar21;
      }
      uVar28 = (uint)bVar18;
      uVar21 = uVar28 << 4 | 8;
      uVar24 = uVar19 >> 8;
      if (uVar19 < 0x100) {
        uVar21 = uVar28 << 4;
        uVar24 = uVar19;
      }
      uVar19 = uVar21 | 4;
      uVar28 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar19 = uVar21;
        uVar28 = uVar24;
      }
      uVar21 = uVar19 | 2;
      uVar24 = uVar28 >> 2;
      if (uVar28 < 4) {
        uVar21 = uVar19;
        uVar24 = uVar28;
      }
      local_b0 = (uVar24 + uVar21) - 1;
    }
    else {
      local_b0 = 0;
    }
    uVar19 = 0;
    if (uVar25 != 0) {
      uVar19 = uVar20 / uVar25;
    }
    uVar35 = NEON_cnt((ulong)uVar17,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar17 & 0xffff0000) != 0;
      uVar20 = uVar17 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar17;
      }
      uVar25 = (uint)bVar18;
      uVar21 = uVar25 << 4 | 8;
      uVar24 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar21 = uVar25 << 4;
        uVar24 = uVar20;
      }
      uVar20 = uVar21 | 4;
      uVar25 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar20 = uVar21;
        uVar25 = uVar24;
      }
      uVar21 = uVar20 | 2;
      uVar24 = uVar25 >> 2;
      if (uVar25 < 4) {
        uVar21 = uVar20;
        uVar24 = uVar25;
      }
      local_a8 = (uVar24 + uVar21) - 1;
    }
    else {
      local_a8 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar19,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar18 = (uVar19 & 0xffff0000) != 0;
      uVar20 = uVar19 >> 0x10;
      if (!bVar18) {
        uVar20 = uVar19;
      }
      uVar24 = (uint)bVar18;
      uVar19 = uVar24 << 4 | 8;
      uVar21 = uVar20 >> 8;
      if (uVar20 < 0x100) {
        uVar19 = uVar24 << 4;
        uVar21 = uVar20;
      }
      uVar20 = uVar19 | 4;
      uVar24 = uVar21 >> 4;
      if (uVar21 < 0x10) {
        uVar20 = uVar19;
        uVar24 = uVar21;
      }
      uVar19 = uVar20 | 2;
      uVar21 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar19 = uVar20;
        uVar21 = uVar24;
      }
      local_b4 = (uVar21 + uVar19) - 1;
    }
    else {
      local_b4 = 0;
    }
    uVar19 = *(uint *)(param_5 + 0x48);
    if (uVar19 < *(uint *)(param_5 + 0x4c)) {
      piVar31 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar19);
        uVar20 = *(uint *)(param_5 + 0x58);
        if (uVar20 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar21 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar20 >> (ulong)(uVar22 & 0x1f),
                                uVar19 >> (ulong)(local_b0 & 0x1f));
            piVar30 = piVar31;
            if ((((((iVar29 == 2) || ((iVar29 == 0) != ((uVar21 & uVar14) != uVar2))) &&
                  (DVar10 == (DensityMapFilter)0x0)) &&
                 (((uVar5 == 0 || ((uVar21 >> (ulong)(uVar1 & 0x1f) & uVar13 & uVar5) != 0)) &&
                  ((uVar21 = (**(code **)(*(long *)param_4 + 0x58))
                                       (param_4,uVar20 >> (ulong)(local_a8 & 0x1f),
                                        uVar19 >> (ulong)(local_b4 & 0x1f)), iVar6 == 2 ||
                   ((iVar6 == 0) != ((uVar21 & uVar16) != uVar8))))))) &&
                (DVar11 == (DensityMapFilter)0x0)) &&
               ((uVar26 == 0 || ((uVar21 >> (ulong)(uVar23 & 0x1f) & uVar15 & uVar26) != 0)))) {
              uVar24 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar20,uVar19);
              uVar21 = uVar24 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar21;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar24;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar24)))) {
                if ((int)uVar21 < *(int *)(param_6 + 0x2c)) {
                  GVar12 = param_6[0x34];
joined_r0x007ded20:
                  if (GVar12 == (GetDensityProcessor)0x0) goto LAB_007decec;
                }
                else {
                  GVar12 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar21) goto joined_r0x007ded20;
                  if (GVar12 != (GetDensityProcessor)0x0) goto LAB_007decec;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar21) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar21 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar21) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar30 = (int *)(param_6 + 8);
                  goto LAB_007dece0;
                }
              }
            }
            else {
LAB_007dece0:
              *piVar30 = *piVar30 + 1;
            }
LAB_007decec:
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(uint *)(param_5 + 0x5c));
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007df094:
  do {
    uVar28 = 0;
    do {
      uVar27 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar24 << (ulong)(local_dc & 0x1f)) + uVar28,
                          uVar25 + (uVar20 << (ulong)(local_100 & 0x1f)));
      if ((iVar6 == 2) || ((iVar6 == 0) != ((uVar27 & uVar16) != uVar8))) {
        uVar27 = uVar27 >> (ulong)(uVar23 & 0x1f) & uVar15;
        if (((int)uVar27 < iVar7) || (iVar9 < (int)uVar27)) {
          if (DVar11 != (DensityMapFilter)0x0) goto LAB_007df124;
        }
        else if (DVar11 == (DensityMapFilter)0x0) {
LAB_007df124:
          if ((uVar26 == 0) || ((uVar27 & uVar26) != 0)) {
            uVar28 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar24,uVar20);
            uVar25 = uVar28 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar25;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar28;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar28))))
            goto LAB_007def98;
            if ((int)uVar25 < *(int *)(param_6 + 0x2c)) {
              GVar12 = param_6[0x34];
joined_r0x007df1d0:
              if (GVar12 == (GetDensityProcessor)0x0) goto LAB_007def98;
            }
            else {
              GVar12 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar25) goto joined_r0x007df1d0;
              if (GVar12 != (GetDensityProcessor)0x0) goto LAB_007def98;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar25) == 0))
            goto LAB_007def98;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar25 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar25) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar31 = (int *)(param_6 + 8);
            goto LAB_007def8c;
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar22);
    uVar25 = uVar25 + 1;
  } while (uVar25 != uVar19);
LAB_007def8c:
  *piVar31 = *piVar31 + 1;
LAB_007def98:
  uVar24 = uVar24 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar24) goto LAB_007def34;
  goto LAB_007defa8;
}


