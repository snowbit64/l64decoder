// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
// Entry Point: 0082069c
// Size: 3508 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ProceduralDensityPixelSource * param_3, BitVector * param_4, ParallelogramHelper * param_5, SetTypeProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, ProceduralDensityPixelSource
   const, BitVector, ParallelogramHelper, DensityMapOperations::SetTypeProcessor<BitVector>
   >(IDensityPixelSource*, BitVector*, ProceduralDensityPixelSource const*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::SetTypeProcessor<BitVector>&, DensityMapFilter
   const&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,
               ProceduralDensityPixelSource *param_3,BitVector *param_4,ParallelogramHelper *param_5
               ,SetTypeProcessor *param_6,DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
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
  uint local_12c;
  uint local_128;
  uint local_120;
  uint local_118;
  uint local_e8;
  uint local_e4;
  uint local_c0;
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
  (**(code **)(*plVar38 + 0x30))(plVar38);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar14 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar22 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar38 = *(long **)param_8;
  iVar5 = *(int *)(param_7 + 0x18);
  iVar29 = *(int *)(param_7 + 8);
  uVar4 = *(uint *)(param_7 + 0xc);
  DVar12 = param_7[0x20];
  iVar6 = *(int *)(param_7 + 0x1c);
  uVar7 = *(uint *)(param_7 + 0x24);
  uVar15 = ~(-1 << (ulong)(uVar22 & 0x1f));
  uVar23 = (**(code **)(*plVar38 + 0x18))(plVar38);
  uVar24 = (**(code **)(*plVar38 + 0x20))(plVar38);
  uVar25 = (**(code **)(*plVar38 + 0x30))(plVar38);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar22 = *(uint *)(param_8 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar8 = *(int *)(param_8 + 8);
  DVar13 = param_8[0x20];
  uVar9 = *(uint *)(param_8 + 0xc);
  iVar10 = *(int *)(param_8 + 0x18);
  iVar11 = *(int *)(param_8 + 0x1c);
  uVar17 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar26 = *(uint *)(param_8 + 0x24);
  if ((((local_98 < uVar20) || (local_94 < uVar24)) || (local_94 < uVar21)) || (local_98 < uVar23))
  {
    if (((uVar20 < local_98) || (uVar24 < local_94)) || ((uVar21 < local_94 || (uVar23 < local_98)))
       ) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar29 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar29 != 0
         )) {
                    /* try { // try from 00821414 to 0082141f has its CatchHandler @ 00821450 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar20,(ulong)uVar21,(ulong)uVar23,(ulong)uVar24,(ulong)local_98,
                         (ulong)local_94);
      bVar19 = false;
      goto LAB_008213d0;
    }
    uVar27 = 0;
    if (local_98 != 0) {
      uVar27 = uVar20 / local_98;
    }
    uVar20 = 0;
    if (local_94 != 0) {
      uVar20 = uVar21 / local_94;
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
      uVar30 = uVar33 << 4 | 8;
      uVar32 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar30 = uVar33 << 4;
        uVar32 = uVar21;
      }
      uVar21 = uVar30 | 4;
      uVar33 = uVar32 >> 4;
      if (uVar32 < 0x10) {
        uVar21 = uVar30;
        uVar33 = uVar32;
      }
      uVar30 = uVar21 | 2;
      uVar32 = uVar33 >> 2;
      if (uVar33 < 4) {
        uVar30 = uVar21;
        uVar32 = uVar33;
      }
      local_118 = (uVar32 + uVar30) - 1;
    }
    else {
      local_118 = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar20,1);
    uVar21 = 0;
    if (local_98 != 0) {
      uVar21 = uVar23 / local_98;
    }
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar30 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar30 = uVar20;
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
      local_128 = (uVar33 + uVar32) - 1;
    }
    else {
      local_128 = 0;
    }
    uVar30 = 0;
    if (local_94 != 0) {
      uVar30 = uVar24 / local_94;
    }
    uVar40 = NEON_cnt((ulong)uVar21,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar24 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar21;
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
      local_120 = (uVar33 + uVar32) - 1;
    }
    else {
      local_120 = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar30,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar30 & 0xffff0000) != 0;
      uVar24 = uVar30 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar30;
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
    uVar24 = *(uint *)(param_5 + 0x48);
    uVar32 = *(uint *)(param_5 + 0x4c);
    if (uVar24 < uVar32) {
      if (uVar27 < 2) {
        uVar27 = 1;
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar30 < 2) {
        uVar30 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar24);
        uVar32 = *(uint *)(param_5 + 0x58);
        if (uVar32 < *(uint *)(param_5 + 0x5c)) {
LAB_008210e0:
          uVar33 = 0;
          do {
            uVar34 = 0;
            do {
              uVar28 = (**(code **)(*(long *)param_3 + 0x58))
                                 (param_3,(uVar32 << (ulong)(local_118 & 0x1f)) + uVar34,
                                  uVar33 + (uVar24 << (ulong)(local_128 & 0x1f)));
              if ((iVar29 == 2) || ((iVar29 == 0) != ((uVar28 & uVar15) != uVar4))) {
                uVar28 = uVar28 >> (ulong)(uVar3 & 0x1f) & uVar14;
                if (((int)uVar28 < iVar5) || (iVar6 < (int)uVar28)) {
                  if (DVar12 != (DensityMapFilter)0x0) goto LAB_00821194;
                }
                else if (DVar12 == (DensityMapFilter)0x0) {
LAB_00821194:
                  if ((uVar7 == 0) || ((uVar28 & uVar7) != 0)) {
                    uVar33 = 0;
                    uVar34 = uVar25 * (uVar23 * (uVar24 << (ulong)(local_12c & 0x1f)) +
                                      (uVar32 << (ulong)(local_120 & 0x1f)));
                    lVar31 = *(long *)param_4;
                    goto LAB_008211ec;
                  }
                }
              }
              uVar34 = uVar34 + 1;
            } while (uVar34 != uVar27);
            uVar33 = uVar33 + 1;
          } while (uVar33 != uVar20);
          goto LAB_008210b8;
        }
LAB_00821064:
        uVar32 = *(uint *)(param_5 + 0x4c);
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar32);
    }
  }
  else {
    uVar27 = 0;
    if (uVar20 != 0) {
      uVar27 = local_98 / uVar20;
    }
    uVar20 = 0;
    if (uVar21 != 0) {
      uVar20 = local_94 / uVar21;
    }
    uVar40 = NEON_cnt((ulong)uVar27,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar27 & 0xffff0000) != 0;
      uVar21 = uVar27 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar27;
      }
      uVar32 = (uint)bVar19;
      uVar27 = uVar32 << 4 | 8;
      uVar30 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar27 = uVar32 << 4;
        uVar30 = uVar21;
      }
      uVar21 = uVar27 | 4;
      uVar32 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar21 = uVar27;
        uVar32 = uVar30;
      }
      uVar27 = uVar21 | 2;
      uVar30 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar27 = uVar21;
        uVar30 = uVar32;
      }
      local_c0 = (uVar30 + uVar27) - 1;
    }
    else {
      local_c0 = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar20,1);
    uVar21 = 0;
    if (uVar23 != 0) {
      uVar21 = local_98 / uVar23;
    }
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar27 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar27 = uVar20;
      }
      uVar32 = (uint)bVar19;
      uVar20 = uVar32 << 4 | 8;
      uVar30 = uVar27 >> 8;
      if (uVar27 < 0x100) {
        uVar20 = uVar32 << 4;
        uVar30 = uVar27;
      }
      uVar27 = uVar20 | 4;
      uVar32 = uVar30 >> 4;
      if (uVar30 < 0x10) {
        uVar27 = uVar20;
        uVar32 = uVar30;
      }
      uVar20 = uVar27 | 2;
      uVar30 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar20 = uVar27;
        uVar30 = uVar32;
      }
      local_e4 = (uVar30 + uVar20) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar20 = 0;
    if (uVar24 != 0) {
      uVar20 = local_94 / uVar24;
    }
    uVar40 = NEON_cnt((ulong)uVar21,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar21 & 0xffff0000) != 0;
      uVar24 = uVar21 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar21;
      }
      uVar30 = (uint)bVar19;
      uVar21 = uVar30 << 4 | 8;
      uVar27 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar21 = uVar30 << 4;
        uVar27 = uVar24;
      }
      uVar24 = uVar21 | 4;
      uVar30 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar24 = uVar21;
        uVar30 = uVar27;
      }
      uVar21 = uVar24 | 2;
      uVar27 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar21 = uVar24;
        uVar27 = uVar30;
      }
      uVar21 = (uVar27 + uVar21) - 1;
    }
    else {
      uVar21 = 0;
    }
    uVar40 = NEON_cnt((ulong)uVar20,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    if ((int)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) == 1) {
      bVar19 = (uVar20 & 0xffff0000) != 0;
      uVar24 = uVar20 >> 0x10;
      if (!bVar19) {
        uVar24 = uVar20;
      }
      uVar30 = (uint)bVar19;
      uVar20 = uVar30 << 4 | 8;
      uVar27 = uVar24 >> 8;
      if (uVar24 < 0x100) {
        uVar20 = uVar30 << 4;
        uVar27 = uVar24;
      }
      uVar24 = uVar20 | 4;
      uVar30 = uVar27 >> 4;
      if (uVar27 < 0x10) {
        uVar24 = uVar20;
        uVar30 = uVar27;
      }
      uVar20 = uVar24 | 2;
      uVar27 = uVar30 >> 2;
      if (uVar30 < 4) {
        uVar20 = uVar24;
        uVar27 = uVar30;
      }
      local_e8 = (uVar27 + uVar20) - 1;
    }
    else {
      local_e8 = 0;
    }
    uVar20 = *(uint *)(param_5 + 0x48);
    uVar32 = *(uint *)(param_5 + 0x4c);
    if (uVar20 < uVar32) {
      do {
        ParallelogramHelper::startXIteration(param_5,uVar20);
        uVar24 = *(uint *)(param_5 + 0x58);
        if (uVar24 < *(uint *)(param_5 + 0x5c)) {
          do {
            uVar27 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar24 >> (ulong)(local_c0 & 0x1f),
                                uVar20 >> (ulong)(local_e4 & 0x1f));
            if ((((iVar29 == 2) || ((iVar29 == 0) != ((uVar27 & uVar15) != uVar4))) &&
                (DVar12 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar27 >> (ulong)(uVar3 & 0x1f) & uVar14 & uVar7) != 0)))) {
              uVar27 = ((uVar24 >> (ulong)(uVar21 & 0x1f)) +
                       (uVar20 >> (ulong)(local_e8 & 0x1f)) * uVar23) * uVar25;
              lVar36 = *(long *)param_4;
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
              uVar27 = uVar30 >> (ulong)(uVar27 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
              if (((iVar8 != 2) && ((iVar8 == 0) == ((uVar27 & uVar17) != uVar9))) ||
                 ((DVar13 != (DensityMapFilter)0x0 ||
                  ((uVar26 != 0 && ((uVar27 >> (ulong)(uVar22 & 0x1f) & uVar16 & uVar26) == 0))))))
              goto LAB_00820e04;
              lVar36 = *local_88;
              uVar27 = (uVar24 + uVar20 * local_98) * local_90;
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
              local_80 = uVar24;
              uStack_7c = uVar20;
              local_78 = uVar27;
              DensityMapOperations::SetTypeProcessor<BitVector>::process
                        ((SetTypeProcessor<BitVector> *)param_6,(HelperSource *)&local_98);
              if (uVar27 != local_78) {
                DensityMapAccessUtil::writeValue
                          ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
              }
            }
            else {
LAB_00820e04:
              *(int *)param_6 = *(int *)param_6 + 1;
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)(param_5 + 0x5c));
        }
        uVar32 = *(uint *)(param_5 + 0x4c);
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar32);
    }
  }
  bVar19 = true;
  if (param_6[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_6 + 0x48),*(uint *)(param_5 + 0x50),*(uint *)(param_5 + 0x48),
               *(uint *)(param_5 + 0x54),uVar32,*(uint *)(param_6 + 0x14),*(uint *)(param_6 + 0x18),
               *(uint *)(param_6 + 0x60),(bool)param_6[0x5d],true,true);
  }
LAB_008213d0:
  if (*(long *)(lVar18 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar19;
LAB_008211ec:
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
                                          ((ulong)uVar35 & 0xffff)),*(undefined *)(lVar36 + uVar37))
                               );
      }
      uVar35 = uVar35 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
      if ((iVar8 == 2) || ((iVar8 == 0) != ((uVar35 & uVar17) != uVar9))) {
        uVar35 = uVar35 >> (ulong)(uVar22 & 0x1f) & uVar16;
        if (((int)uVar35 < iVar10) || (iVar11 < (int)uVar35)) {
          if (DVar13 != (DensityMapFilter)0x0) goto LAB_008212c4;
        }
        else if (DVar13 == (DensityMapFilter)0x0) {
LAB_008212c4:
          if ((uVar26 == 0) || ((uVar35 & uVar26) != 0)) {
            lVar36 = *local_88;
            uVar33 = (uVar32 + local_98 * uVar24) * local_90;
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
            uStack_7c = uVar24;
            local_78 = uVar33;
            DensityMapOperations::SetTypeProcessor<BitVector>::process
                      ((SetTypeProcessor<BitVector> *)param_6,(HelperSource *)&local_98);
            if (uVar33 != local_78) {
              DensityMapAccessUtil::writeValue
                        ((BitVector *)local_88,local_90,local_98,local_80,uStack_7c,local_78);
            }
            goto LAB_008210cc;
          }
        }
      }
      uVar28 = uVar28 + 1;
      uVar2 = uVar2 + uVar25;
    } while (uVar28 != uVar21);
    uVar33 = uVar33 + 1;
    uVar34 = uVar34 + uVar23 * uVar25;
  } while (uVar33 != uVar30);
LAB_008210b8:
  *(int *)param_6 = *(int *)param_6 + 1;
LAB_008210cc:
  uVar32 = uVar32 + 1;
  if (*(uint *)(param_5 + 0x5c) <= uVar32) goto LAB_00821064;
  goto LAB_008210e0;
}


