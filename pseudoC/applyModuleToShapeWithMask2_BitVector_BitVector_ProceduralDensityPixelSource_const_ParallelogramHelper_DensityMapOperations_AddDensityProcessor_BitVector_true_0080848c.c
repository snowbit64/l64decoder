// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
// Entry Point: 0080848c
// Size: 3564 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, ProceduralDensityPixelSource * param_4, ParallelogramHelper * param_5, AddDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, BitVector,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::AddDensityProcessor<BitVector, true> >(IDensityPixelSource*, BitVector*,
   BitVector*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::AddDensityProcessor<BitVector, true>&, DensityMapFilter const&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,BitVector,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::AddDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               ProceduralDensityPixelSource *param_4,ParallelogramHelper *param_5,
               AddDensityProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  DensityMapFilter DVar12;
  DensityMapFilter DVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
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
  int iVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  long *plVar38;
  undefined2 uVar39;
  undefined8 uVar40;
  uint local_130;
  uint local_12c;
  uint local_124;
  uint local_120;
  uint local_e8;
  uint local_e4;
  uint local_cc;
  uint local_98;
  uint local_94;
  uint local_90;
  long *local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar18 = tpidr_el0;
  local_70 = *(long *)(lVar18 + 0x28);
  local_98 = (**(code **)(*(long *)param_1 + 0x18))();
  local_94 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_90 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar38 = *(long **)param_7;
  local_88 = (long *)param_2;
  uVar20 = (**(code **)(*plVar38 + 0x18))(plVar38);
  uVar21 = (**(code **)(*plVar38 + 0x20))(plVar38);
  uVar22 = (**(code **)(*plVar38 + 0x30))(plVar38);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar23 = (**(code **)(**(long **)param_7 + 0x28))();
  iVar29 = *(int *)(param_7 + 8);
  uVar4 = *(uint *)(param_7 + 0xc);
  iVar5 = *(int *)(param_7 + 0x18);
  plVar38 = *(long **)param_8;
  DVar12 = param_7[0x20];
  iVar6 = *(int *)(param_7 + 0x1c);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar23 & 0x1f));
  uVar24 = (**(code **)(*plVar38 + 0x18))(plVar38);
  uVar25 = (**(code **)(*plVar38 + 0x20))(plVar38);
  (**(code **)(*plVar38 + 0x30))(plVar38);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar23 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 0x18);
  iVar9 = *(int *)(param_8 + 0x1c);
  uVar17 = ~(-1 << (ulong)(uVar26 & 0x1f));
  iVar10 = *(int *)(param_8 + 8);
  uVar26 = *(uint *)(param_8 + 0xc);
  DVar13 = param_8[0x20];
  uVar11 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar20) || (local_94 < uVar25)) || (local_94 < uVar21)) || (local_98 < uVar24))
  {
    if (((uVar20 < local_98) || (uVar25 < local_94)) || ((uVar21 < local_94 || (uVar24 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar29 != 0
         )) {
                    /* try { // try from 0080923c to 00809247 has its CatchHandler @ 00809278 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar20,(ulong)uVar21,(ulong)uVar24,(ulong)uVar25,(ulong)local_98,
                         (ulong)local_94);
      bVar19 = false;
      goto LAB_008091f8;
    }
    uVar27 = 0;
    if (local_94 != 0) {
      uVar27 = uVar21 / local_94;
    }
    uVar21 = 0;
    if (local_98 != 0) {
      uVar21 = uVar20 / local_98;
    }
    uVar40 = NEON_cnt((ulong)uVar21,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar30 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar30 = uVar21;
      }
      uVar34 = (uint)bVar19;
      uVar32 = uVar34 << 4 | 8;
      uVar33 = uVar30 >> 8;
      if (uVar30 < 0x100) {
        uVar32 = uVar34 << 4;
        uVar33 = uVar30;
      }
      uVar30 = uVar32 | 4;
      uVar34 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar30 = uVar32;
        uVar34 = uVar33;
      }
      uVar32 = uVar30 | 2;
      uVar33 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar32 = uVar30;
        uVar33 = uVar34;
      }
      local_120 = (uVar33 + uVar32) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar30 = 0;
    if (local_98 != 0) {
      uVar30 = uVar24 / local_98;
    }
    uVar40 = NEON_cnt((ulong)uVar27,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar24 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar27;
      }
      uVar34 = (uint)bVar19;
      uVar32 = uVar34 << 4 | 8;
      uVar33 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar32 = uVar34 << 4;
        uVar33 = uVar24;
      }
      uVar24 = uVar32 | 4;
      uVar34 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar24 = uVar32;
        uVar34 = uVar33;
      }
      uVar32 = uVar24 | 2;
      uVar33 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar32 = uVar24;
        uVar33 = uVar34;
      }
      local_12c = (uVar33 + uVar32) - 1;
    }
    else {
      local_12c = 0;
    }
    uVar24 = 0;
    if (local_94 != 0) {
      uVar24 = uVar25 / local_94;
    }
    uVar40 = NEON_cnt((ulong)uVar30,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar30 & 0xffff0000) != 0;
      uVar25 = uVar30 >> 0x10;
      if (!bVar19) {
        uVar25 = uVar30;
      }
      uVar34 = (uint)bVar19;
      uVar32 = uVar34 << 4 | 8;
      uVar33 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar32 = uVar34 << 4;
        uVar33 = uVar25;
      }
      uVar25 = uVar32 | 4;
      uVar34 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar25 = uVar32;
        uVar34 = uVar33;
      }
      uVar32 = uVar25 | 2;
      uVar33 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar32 = uVar25;
        uVar33 = uVar34;
      }
      local_124 = (uVar33 + uVar32) - 1;
    }
    else {
      local_124 = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar24,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar24 & 0xffff0000) != 0;
      uVar25 = uVar24 >> 0x10;
      if (!bVar19) {
        uVar25 = uVar24;
      }
      uVar34 = (uint)bVar19;
      uVar32 = uVar34 << 4 | 8;
      uVar33 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar32 = uVar34 << 4;
        uVar33 = uVar25;
      }
      uVar25 = uVar32 | 4;
      uVar34 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar25 = uVar32;
        uVar34 = uVar33;
      }
      uVar32 = uVar25 | 2;
      uVar33 = uVar34 >> 2;
      if (uVar34 < 4) {
        uVar32 = uVar25;
        uVar33 = uVar34;
      }
      local_130 = (uVar33 + uVar32) - 1;
    }
    else {
      local_130 = 0;
    }
    uVar25 = *(uint *)(param_5 + 0x48);
    uVar32 = *(uint *)(param_5 + 0x4c);
    if (uVar25 < uVar32) {
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar25);
        uVar32 = *(uint *)(param_5 + 0x58);
        if (uVar32 < *(uint *)(param_5 + 0x5c)) {
LAB_00808f04:
          uVar33 = 0;
          uVar34 = uVar22 * (uVar20 * (uVar25 << (ulong)(local_12c & 0x1f)) +
                            (uVar32 << (ulong)(local_120 & 0x1f)));
          lVar31 = *(long *)param_3;
          do {
            uVar28 = 0;
            uVar2 = uVar34;
            do {
              uVar37 = (ulong)(uVar2 >> 3) & 0xffff;
              lVar36 = *(long *)(lVar31 + (ulong)(uVar2 >> 0x13) * 8);
              if ((uint)uVar37 < 0xfffd) {
                uVar35 = *(uint *)(lVar36 + uVar37);
              }
              else {
                uVar35 = (uVar2 >> 3) + 1;
                uVar1 = (uVar2 >> 3) + 2;
                uVar35 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar31 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar31 + (ulong)(uVar35 >> 0x10) * 8) +
                                                  ((ulong)uVar35 & 0xffff)),
                                                 *(undefined *)(lVar36 + uVar37)));
              }
              uVar35 = uVar35 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
              if ((iVar29 == 2) || ((iVar29 == 0) != ((uVar35 & uVar15) != uVar4))) {
                uVar35 = uVar35 >> (ulong)(uVar3 & 0x1f) & uVar14;
                if (((int)uVar35 < iVar5) || (iVar6 < (int)uVar35)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_00809010;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_00809010:
                  if ((uVar7 == 0) || ((uVar35 & uVar7) != 0)) {
                    uVar33 = 0;
                    goto LAB_00809044;
                  }
                }
              }
              uVar28 = uVar28 + 1;
              uVar2 = uVar2 + uVar22;
            } while (uVar28 != uVar21);
            uVar33 = uVar33 + 1;
            uVar34 = uVar34 + uVar20 * uVar22;
          } while (uVar33 != uVar27);
          goto LAB_00808edc;
        }
LAB_00808e88:
        uVar32 = *(uint *)(param_5 + 0x4c);
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar32);
    }
  }
  else {
    uVar27 = 0;
    if (uVar20 != 0) {
      uVar27 = local_98 / uVar20;
    }
    uVar30 = 0;
    if (uVar21 != 0) {
      uVar30 = local_94 / uVar21;
    }
    uVar40 = NEON_cnt((ulong)uVar27,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar21 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar27;
      }
      uVar33 = (uint)bVar19;
      uVar27 = uVar33 << 4 | 8;
      uVar32 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar27 = uVar33 << 4;
        uVar32 = uVar21;
      }
      uVar21 = uVar27 | 4;
      uVar33 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar21 = uVar27;
        uVar33 = uVar32;
      }
      uVar27 = uVar21 | 2;
      uVar32 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar27 = uVar21;
        uVar32 = uVar33;
      }
      uVar21 = (uVar32 + uVar27) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar27 = 0;
    if (uVar24 != 0) {
      uVar27 = local_98 / uVar24;
    }
    uVar40 = NEON_cnt((ulong)uVar30,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar30 & 0xffff0000) != 0;
      uVar24 = uVar30 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar30;
      }
      uVar33 = (uint)bVar19;
      uVar30 = uVar33 << 4 | 8;
      uVar32 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar30 = uVar33 << 4;
        uVar32 = uVar24;
      }
      uVar24 = uVar30 | 4;
      uVar33 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar24 = uVar30;
        uVar33 = uVar32;
      }
      uVar30 = uVar24 | 2;
      uVar32 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar30 = uVar24;
        uVar32 = uVar33;
      }
      local_e4 = (uVar32 + uVar30) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar24 = 0;
    if (uVar25 != 0) {
      uVar24 = local_94 / uVar25;
    }
    uVar40 = NEON_cnt((ulong)uVar27,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar25 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar25 = uVar27;
      }
      uVar32 = (uint)bVar19;
      uVar27 = uVar32 << 4 | 8;
      uVar30 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar27 = uVar32 << 4;
        uVar30 = uVar25;
      }
      uVar25 = uVar27 | 4;
      uVar32 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar25 = uVar27;
        uVar32 = uVar30;
      }
      uVar27 = uVar25 | 2;
      uVar30 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar27 = uVar25;
        uVar30 = uVar32;
      }
      local_cc = (uVar30 + uVar27) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar24,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar24 & 0xffff0000) != 0;
      uVar25 = uVar24 >> 0x10;
      if (!bVar19) {
        uVar25 = uVar24;
      }
      uVar30 = (uint)bVar19;
      uVar24 = uVar30 << 4 | 8;
      uVar27 = uVar25 >> 8;
      if (uVar25 < 0x100) {
        uVar24 = uVar30 << 4;
        uVar27 = uVar25;
      }
      uVar25 = uVar24 | 4;
      uVar30 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar25 = uVar24;
        uVar30 = uVar27;
      }
      uVar24 = uVar25 | 2;
      uVar27 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar24 = uVar25;
        uVar27 = uVar30;
      }
      local_e8 = (uVar27 + uVar24) - 1;
    }
    else {
      local_e8 = 0;
    }
    uVar24 = *(uint *)(param_5 + 0x48);
    uVar32 = *(uint *)(param_5 + 0x4c);
    if (uVar24 < uVar32) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar24);
        uVar25 = *(uint *)(param_5 + 0x58);
        if (uVar25 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar27 = ((uVar25 >> (ulong)(uVar21 & 0x1f)) +
                     (uVar24 >> (ulong)(local_e4 & 0x1f)) * uVar20) * uVar22;
            lVar36 = *(long *)param_3;
            uVar37 = (ulong)(uVar27 >> 3) & 0xffff;
            lVar31 = *(long *)(lVar36 + (ulong)(uVar27 >> 0x13) * 8);
            if ((uint)uVar37 < 0xfffd) {
              uVar30 = *(uint *)(lVar31 + uVar37);
            }
            else {
              uVar30 = (uVar27 >> 3) + 1;
              uVar32 = (uVar27 >> 3) + 2;
              uVar30 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar36 + (ulong)(uVar32 >> 0x10) * 8) +
                                       ((ulong)uVar32 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar36 + (ulong)(uVar30 >> 0x10) * 8) +
                                                ((ulong)uVar30 & 0xffff)),
                                               *(undefined *)(lVar31 + uVar37)));
            }
            uVar27 = uVar30 >> (ulong)(uVar27 & 7) & ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
            if ((((iVar29 == 2) || ((iVar29 == 0) != ((uVar27 & uVar15) != uVar4))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar27 >> (ulong)(uVar3 & 0x1f) & uVar14 & uVar7) != 0)))) {
              uVar27 = (**(code **)(*(long *)param_4 + 0x58))
                                 (param_4,uVar25 >> (ulong)(local_cc & 0x1f),
                                  uVar24 >> (ulong)(local_e8 & 0x1f));
              if ((((iVar10 != 2) && ((iVar10 == 0) == ((uVar27 & uVar17) != uVar26))) ||
                  (DVar13 != (DensityMapFilter)0x0)) ||
                 ((uVar11 != 0 && ((uVar27 >> (ulong)(uVar23 & 0x1f) & uVar16 & uVar11) == 0)))) {
                iVar5 = *(int *)(param_6 + 4);
                goto LAB_00808bdc;
              }
              lVar36 = *local_88;
              uVar27 = (uVar25 + uVar24 * local_98) * local_90;
              lVar31 = *(long *)(lVar36 + (ulong)(uVar27 >> 0x13) * 8);
              uVar37 = (ulong)(uVar27 >> 3) & 0xffff;
              if ((uint)uVar37 < 0xfffd) {
                uVar30 = *(uint *)(lVar31 + uVar37);
              }
              else {
                uVar30 = (uVar27 >> 3) + 1;
                uVar32 = (uVar27 >> 3) + 2;
                uVar30 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar36 + (ulong)(uVar32 >> 0x10) * 8) +
                                         ((ulong)uVar32 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar36 + (ulong)(uVar30 >> 0x10) * 8) +
                                                  ((ulong)uVar30 & 0xffff)),
                                                 *(undefined *)(lVar31 + uVar37)));
              }
              uVar27 = uVar30 >> (ulong)(uVar27 & 7) &
                       (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU) & 0xffff;
              local_80 = uVar25;
              uStack_7c = uVar24;
              local_78 = uVar27;
              DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                        ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
              if (uVar27 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
              iVar5 = *(int *)(param_6 + 4);
LAB_00808bdc:
              *(int *)(param_6 + 4) = iVar5 + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < *(uint *)(param_5 + 0x5c));
        }
        uVar32 = *(uint *)(param_5 + 0x4c);
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar32);
    }
  }
  bVar19 = true;
  if (param_6[0x6c] != (AddDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x58),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar32,*(uint *)(param_6 + 0x24),*(uint *)(param_6 + 0x28),
               *(uint *)(param_6 + 0x70),(bool)param_6[0x6d],true,true);
  }
LAB_008091f8:
  if (*(long *)(lVar18 + 0x28) == local_70) {
    return bVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00809044:
  do {
    uVar34 = 0;
    do {
      uVar28 = (**(code **)(*(long *)param_4 + 0x58))
                         (param_4,(uVar32 << (ulong)(local_124 & 0x1f)) + uVar34,
                          uVar33 + (uVar25 << (ulong)(local_130 & 0x1f)));
      if ((iVar10 == 2) || ((iVar10 == 0) != ((uVar28 & uVar17) != uVar26))) {
        uVar28 = uVar28 >> (ulong)(uVar23 & 0x1f) & uVar16;
        if (((int)uVar28 < iVar8) || (iVar9 < (int)uVar28)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_008090dc;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_008090dc:
          if ((uVar11 == 0) || ((uVar28 & uVar11) != 0)) {
            lVar36 = *local_88;
            uVar33 = (uVar32 + local_98 * uVar25) * local_90;
            lVar31 = *(long *)(lVar36 + (ulong)(uVar33 >> 0x13) * 8);
            uVar37 = (ulong)(uVar33 >> 3) & 0xffff;
            if ((uint)uVar37 < 0xfffd) {
              uVar34 = *(uint *)(lVar31 + uVar37);
            }
            else {
              uVar34 = (uVar33 >> 3) + 1;
              uVar28 = (uVar33 >> 3) + 2;
              uVar34 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar36 + (ulong)(uVar28 >> 0x10) * 8) +
                                       ((ulong)uVar28 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar36 + (ulong)(uVar34 >> 0x10) * 8) +
                                                ((ulong)uVar34 & 0xffff)),
                                               *(undefined *)(lVar31 + uVar37)));
            }
            uVar33 = uVar34 >> (ulong)(uVar33 & 7) & (-1 << (ulong)(local_90 & 0x1f) ^ 0xffffffffU)
                     & 0xffff;
            local_80 = uVar32;
            uStack_7c = uVar25;
            local_78 = uVar33;
            DensityMapOperations::AddDensityProcessor<BitVector,true>::process
                      ((AddDensityProcessor<BitVector,true> *)param_6,(HelperSource *)&local_98);
            if (uVar33 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_00808ef0;
          }
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar30);
    uVar33 = uVar33 + 1;
  } while (uVar33 != uVar24);
LAB_00808edc:
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
LAB_00808ef0:
  uVar32 = uVar32 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar32) goto LAB_00808e88;
  goto LAB_00808f04;
}


