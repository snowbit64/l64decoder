// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007dd838
// Size: 3504 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ProceduralDensityPixelSource * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<ProceduralDensityPixelSource const,
   ProceduralDensityPixelSource const, BitVector, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*,
   BitVector*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ProceduralDensityPixelSource *param_3,BitVector *param_4,ParallelogramHelper *param_5
               ,GetDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  DensityMapFilter DVar12;
  DensityMapFilter DVar13;
  GetDensityProcessor GVar14;
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
  int *piVar33;
  int *piVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  long *plVar40;
  undefined2 uVar41;
  undefined8 uVar42;
  uint local_120;
  uint local_11c;
  uint local_f0;
  uint local_dc;
  uint local_98;
  uint local_90;
  uint local_8c;
  
  uVar21 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar22 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar40 = *(long **)param_7;
  uVar23 = (**(code **)(*plVar40 + 0x18))(plVar40);
  uVar24 = (**(code **)(*plVar40 + 0x20))(plVar40);
  (**(code **)(*plVar40 + 0x30))(plVar40);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar15 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar25 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar40 = *(long **)param_8;
  iVar7 = *(int *)(param_7 + 0x18);
  iVar32 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  DVar12 = param_7[0x20];
  iVar8 = *(int *)(param_7 + 0x1c);
  uVar9 = *(uint *)(param_7 + 0x24);
  uVar16 = ~(-1 << (ulong)(uVar25 & 0x1f));
  uVar26 = (**(code **)(*plVar40 + 0x18))(plVar40);
  uVar27 = (**(code **)(*plVar40 + 0x20))(plVar40);
  uVar28 = (**(code **)(*plVar40 + 0x30))(plVar40);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar25 = *(uint *)(param_8 + 0x10);
  uVar17 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar29 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar4 = *(int *)(param_8 + 8);
  uVar6 = *(uint *)(param_8 + 0xc);
  DVar13 = param_8[0x20];
  iVar10 = *(int *)(param_8 + 0x18);
  iVar11 = *(int *)(param_8 + 0x1c);
  uVar18 = ~(-1 << (ulong)(uVar29 & 0x1f));
  uVar29 = *(uint *)(param_8 + 0x24);
  if ((((uVar21 < uVar23) || (uVar22 < uVar24)) || (uVar21 < uVar26)) || (uVar22 < uVar27)) {
    if (((uVar23 < uVar21) || (uVar24 < uVar22)) || ((uVar26 < uVar21 || (uVar27 < uVar22)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar32 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar32 != 0
         )) {
                    /* try { // try from 007de5a8 to 007de5b7 has its CatchHandler @ 007de5e8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar23,(ulong)uVar24,(ulong)uVar26,(ulong)uVar27,(ulong)uVar21,
                         (ulong)uVar22);
      return false;
    }
    uVar19 = 0;
    if (uVar21 != 0) {
      uVar19 = uVar23 / uVar21;
    }
    uVar23 = 0;
    if (uVar22 != 0) {
      uVar23 = uVar24 / uVar22;
    }
    uVar42 = NEON_cnt((ulong)uVar19,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar19 & 0xffff0000) != 0;
      uVar24 = uVar19 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar19;
      }
      uVar30 = (uint)bVar20;
      uVar37 = uVar30 << 4 | 8;
      uVar31 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar37 = uVar30 << 4;
        uVar31 = uVar24;
      }
      uVar24 = uVar37 | 4;
      uVar30 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar24 = uVar37;
        uVar30 = uVar31;
      }
      uVar37 = uVar24 | 2;
      uVar31 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar37 = uVar24;
        uVar31 = uVar30;
      }
      local_dc = (uVar31 + uVar37) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar23,1);
    uVar24 = 0;
    if (uVar21 != 0) {
      uVar24 = uVar26 / uVar21;
    }
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar30 = (uint)bVar20;
      uVar37 = uVar30 << 4 | 8;
      uVar31 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar37 = uVar30 << 4;
        uVar31 = uVar21;
      }
      uVar21 = uVar37 | 4;
      uVar30 = uVar31 >> 4;
      if (uVar31 < 0x10) {
        uVar21 = uVar37;
        uVar30 = uVar31;
      }
      uVar37 = uVar21 | 2;
      uVar31 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar37 = uVar21;
        uVar31 = uVar30;
      }
      local_11c = (uVar31 + uVar37) - 1;
    }
    else {
      local_11c = 0;
    }
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = uVar27 / uVar22;
    }
    uVar42 = NEON_cnt((ulong)uVar24,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar31 = (uint)bVar20;
      uVar27 = uVar31 << 4 | 8;
      uVar37 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar31 << 4;
        uVar37 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar31 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar22 = uVar27;
        uVar31 = uVar37;
      }
      uVar27 = uVar22 | 2;
      uVar37 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar27 = uVar22;
        uVar37 = uVar31;
      }
      local_f0 = (uVar37 + uVar27) - 1;
    }
    else {
      local_f0 = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar21,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar31 = (uint)bVar20;
      uVar27 = uVar31 << 4 | 8;
      uVar37 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar27 = uVar31 << 4;
        uVar37 = uVar22;
      }
      uVar22 = uVar27 | 4;
      uVar31 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar22 = uVar27;
        uVar31 = uVar37;
      }
      uVar27 = uVar22 | 2;
      uVar37 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar27 = uVar22;
        uVar37 = uVar31;
      }
      local_120 = (uVar37 + uVar27) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar27 = *(uint *)(param_5 + 0x58);
        if (uVar27 < *(uint *)(param_5 + 0x5c)) {
LAB_007de2b4:
          uVar37 = 0;
          do {
            uVar31 = 0;
            do {
              uVar30 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar27 << (ulong)(local_dc & 0x1f)) + uVar31,
                                  uVar37 + (uVar22 << (ulong)(local_11c & 0x1f)));
              piVar34 = (int *)(param_6 + 4);
              if ((iVar32 == 2) || ((iVar32 == 0) != ((uVar30 & uVar16) != uVar5))) {
                uVar30 = uVar30 >> (ulong)(uVar3 & 0x1f) & uVar15;
                if (((int)uVar30 < iVar7) || (iVar8 < (int)uVar30)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_007de368;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_007de368:
                  if ((uVar9 == 0) || ((uVar30 & uVar9) != 0)) {
                    uVar37 = 0;
                    uVar31 = uVar28 * (uVar26 * (uVar22 << (ulong)(local_120 & 0x1f)) +
                                      (uVar27 << (ulong)(local_f0 & 0x1f)));
                    lVar35 = *(long *)param_4;
                    goto LAB_007de3d8;
                  }
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 != uVar19);
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar23);
          goto LAB_007de298;
        }
LAB_007de228:
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar19 = 0;
    if (uVar23 != 0) {
      uVar19 = uVar21 / uVar23;
    }
    uVar23 = 0;
    if (uVar24 != 0) {
      uVar23 = uVar22 / uVar24;
    }
    uVar42 = NEON_cnt((ulong)uVar19,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar19 & 0xffff0000) != 0;
      uVar24 = uVar19 >> 0x10;
      if (!bVar20) {
        uVar24 = uVar19;
      }
      uVar31 = (uint)bVar20;
      uVar19 = uVar31 << 4 | 8;
      uVar37 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar19 = uVar31 << 4;
        uVar37 = uVar24;
      }
      uVar24 = uVar19 | 4;
      uVar31 = uVar37 >> 4;
      if (uVar37 < 0x10) {
        uVar24 = uVar19;
        uVar31 = uVar37;
      }
      uVar19 = uVar24 | 2;
      uVar37 = uVar31 >> 2;
      if (uVar31 < 4) {
        uVar19 = uVar24;
        uVar37 = uVar31;
      }
      local_8c = (uVar37 + uVar19) - 1;
    }
    else {
      local_8c = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar23,1);
    uVar24 = 0;
    if (uVar26 != 0) {
      uVar24 = uVar21 / uVar26;
    }
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar23 & 0xffff0000) != 0;
      uVar21 = uVar23 >> 0x10;
      if (!bVar20) {
        uVar21 = uVar23;
      }
      uVar37 = (uint)bVar20;
      uVar23 = uVar37 << 4 | 8;
      uVar19 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar23 = uVar37 << 4;
        uVar19 = uVar21;
      }
      uVar21 = uVar23 | 4;
      uVar37 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar21 = uVar23;
        uVar37 = uVar19;
      }
      uVar23 = uVar21 | 2;
      uVar19 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar23 = uVar21;
        uVar19 = uVar37;
      }
      local_98 = (uVar19 + uVar23) - 1;
    }
    else {
      local_98 = 0;
    }
    uVar21 = 0;
    if (uVar27 != 0) {
      uVar21 = uVar22 / uVar27;
    }
    uVar42 = NEON_cnt((ulong)uVar24,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar24 & 0xffff0000) != 0;
      uVar22 = uVar24 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar24;
      }
      uVar27 = (uint)bVar20;
      uVar23 = uVar27 << 4 | 8;
      uVar24 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar23 = uVar27 << 4;
        uVar24 = uVar22;
      }
      uVar22 = uVar23 | 4;
      uVar27 = uVar24 >> 4;
      if (uVar24 < 0x10) {
        uVar22 = uVar23;
        uVar27 = uVar24;
      }
      uVar23 = uVar22 | 2;
      uVar24 = uVar27 >> 2;
      if (uVar27 < 4) {
        uVar23 = uVar22;
        uVar24 = uVar27;
      }
      local_90 = (uVar24 + uVar23) - 1;
    }
    else {
      local_90 = 0;
    }
    uVar42 = NEON_cnt((ulong)uVar21,1);
    uVar41 = NEON_uaddlv(uVar42,1);
    if ((int)CONCAT62((int6)((ulong)uVar42 >> 0x10),uVar41) == 1) {
      bVar20 = (uVar21 & 0xffff0000) != 0;
      uVar22 = uVar21 >> 0x10;
      if (!bVar20) {
        uVar22 = uVar21;
      }
      uVar24 = (uint)bVar20;
      uVar21 = uVar24 << 4 | 8;
      uVar23 = uVar22 >> 8;
      if (uVar22 < 0x100) {
        uVar21 = uVar24 << 4;
        uVar23 = uVar22;
      }
      uVar22 = uVar21 | 4;
      uVar24 = uVar23 >> 4;
      if (uVar23 < 0x10) {
        uVar22 = uVar21;
        uVar24 = uVar23;
      }
      uVar21 = uVar22 | 2;
      uVar23 = uVar24 >> 2;
      if (uVar24 < 4) {
        uVar21 = uVar22;
        uVar23 = uVar24;
      }
      uVar21 = (uVar23 + uVar21) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar22 = *(uint *)(param_5 + 0x48);
    if (uVar22 < *(uint *)(param_5 + 0x4c)) {
      piVar34 = (int *)(param_6 + 4);
      do {
        ParallelogramHelper::startXIteration(param_5,uVar22);
        uVar23 = *(uint *)(param_5 + 0x58);
        if (uVar23 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar24 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar23 >> (ulong)(local_8c & 0x1f),
                                uVar22 >> (ulong)(local_98 & 0x1f));
            piVar33 = piVar34;
            if ((((iVar32 == 2) || ((iVar32 == 0) != ((uVar24 & uVar16) != uVar5))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar9 == 0 || ((uVar24 >> (ulong)(uVar3 & 0x1f) & uVar15 & uVar9) != 0)))) {
              lVar38 = *(long *)param_4;
              uVar24 = ((uVar23 >> (ulong)(local_90 & 0x1f)) +
                       (uVar22 >> (ulong)(uVar21 & 0x1f)) * uVar26) * uVar28;
              uVar36 = (ulong)(uVar24 >> 3) & 0xffff;
              lVar35 = *(long *)(lVar38 + (ulong)(uVar24 >> 0x13) * 8);
              if ((uint)uVar36 < 0xfffd) {
                uVar27 = *(uint *)(lVar35 + uVar36);
              }
              else {
                uVar27 = (uVar24 >> 3) + 1;
                uVar19 = (uVar24 >> 3) + 2;
                uVar27 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar38 + (ulong)(uVar19 >> 0x10) * 8) +
                                         ((ulong)uVar19 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar38 + (ulong)(uVar27 >> 0x10) * 8) +
                                                  ((ulong)uVar27 & 0xffff)),
                                                 *(undefined *)(lVar35 + uVar36)));
              }
              uVar24 = uVar27 >> (ulong)(uVar24 & 7) & ~(-1 << (ulong)(uVar28 & 0x1f)) & 0xffffU;
              if (((iVar4 != 2) && ((iVar4 == 0) == ((uVar24 & uVar18) != uVar6))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar29 != 0 && ((uVar24 >> (ulong)(uVar25 & 0x1f) & uVar17 & uVar29) == 0))))))
              goto LAB_007de008;
              uVar27 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar23,uVar22);
              uVar24 = uVar27 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) &
                       *(uint *)(param_6 + 0x1c);
              *(uint *)(param_6 + 0x40) = uVar24;
              *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar27;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((*(int *)(param_6 + 0x24) == 2) ||
                 ((*(int *)(param_6 + 0x24) == 0) !=
                  (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar27)))) {
                if ((int)uVar24 < *(int *)(param_6 + 0x2c)) {
                  GVar14 = param_6[0x34];
joined_r0x007ddfd0:
                  if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007de014;
                }
                else {
                  GVar14 = param_6[0x34];
                  if (*(int *)(param_6 + 0x30) < (int)uVar24) goto joined_r0x007ddfd0;
                  if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007de014;
                }
                if ((*(uint *)(param_6 + 0x38) == 0) || ((*(uint *)(param_6 + 0x38) & uVar24) != 0))
                {
                  *(uint *)param_6 =
                       (*(int *)(param_6 + 0xc) + uVar24 &
                       ((int)(*(int *)(param_6 + 0xc) + uVar24) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_6;
                  piVar33 = (int *)(param_6 + 8);
                  goto LAB_007de008;
                }
              }
            }
            else {
LAB_007de008:
              *piVar33 = *piVar33 + 1;
            }
LAB_007de014:
            uVar23 = uVar23 + 1;
          } while (uVar23 < *(uint *)(param_5 + 0x5c));
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007de3d8:
  do {
    uVar30 = 0;
    uVar2 = uVar31;
    do {
      uVar36 = (ulong)(uVar2 >> 3) & 0xffff;
      lVar38 = *(long *)(lVar35 + (ulong)(uVar2 >> 0x13) * 8);
      if ((uint)uVar36 < 0xfffd) {
        uVar39 = *(uint *)(lVar38 + uVar36);
      }
      else {
        uVar39 = (uVar2 >> 3) + 1;
        uVar1 = (uVar2 >> 3) + 2;
        uVar39 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar35 + (ulong)(uVar1 >> 0x10) * 8) +
                                 ((ulong)uVar1 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar35 + (ulong)(uVar39 >> 0x10) * 8) +
                                          ((ulong)uVar39 & 0xffff)),*(undefined *)(lVar38 + uVar36))
                               );
      }
      uVar39 = uVar39 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar28 & 0x1f)) & 0xffffU;
      if ((iVar4 == 2) || ((iVar4 == 0) != ((uVar39 & uVar18) != uVar6))) {
        uVar39 = uVar39 >> (ulong)(uVar25 & 0x1f) & uVar17;
        if (((int)uVar39 < iVar10) || (iVar11 < (int)uVar39)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_007de49c;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_007de49c:
          if ((uVar29 == 0) || ((uVar39 & uVar29) != 0)) {
            uVar31 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar27,uVar22);
            uVar37 = uVar31 >> (ulong)(*(uint *)(param_6 + 0x14) & 0x1f) & *(uint *)(param_6 + 0x1c)
            ;
            *(uint *)(param_6 + 0x40) = uVar37;
            *(uint *)(param_6 + 0x44) = *(uint *)(param_6 + 0x20) & uVar31;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((*(int *)(param_6 + 0x24) != 2) &&
               ((*(int *)(param_6 + 0x24) == 0) ==
                (*(uint *)(param_6 + 0x28) != (*(uint *)(param_6 + 0x20) & uVar31))))
            goto LAB_007de2a4;
            if ((int)uVar37 < *(int *)(param_6 + 0x2c)) {
              GVar14 = param_6[0x34];
joined_r0x007de538:
              if (GVar14 == (GetDensityProcessor)0x0) goto LAB_007de2a4;
            }
            else {
              GVar14 = param_6[0x34];
              if (*(int *)(param_6 + 0x30) < (int)uVar37) goto joined_r0x007de538;
              if (GVar14 != (GetDensityProcessor)0x0) goto LAB_007de2a4;
            }
            if ((*(uint *)(param_6 + 0x38) != 0) && ((*(uint *)(param_6 + 0x38) & uVar37) == 0))
            goto LAB_007de2a4;
            *(uint *)param_6 =
                 (*(int *)(param_6 + 0xc) + uVar37 &
                 ((int)(*(int *)(param_6 + 0xc) + uVar37) >> 0x1f ^ 0xffffffffU)) + *(int *)param_6;
            piVar34 = (int *)(param_6 + 8);
            goto LAB_007de298;
          }
        }
      }
      uVar30 = uVar30 + 1;
      uVar2 = uVar2 + uVar28;
    } while (uVar30 != uVar24);
    uVar37 = uVar37 + 1;
    uVar31 = uVar31 + uVar26 * uVar28;
  } while (uVar37 != uVar21);
LAB_007de298:
  *piVar34 = *piVar34 + 1;
LAB_007de2a4:
  uVar27 = uVar27 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar27) goto LAB_007de228;
  goto LAB_007de2b4;
}


