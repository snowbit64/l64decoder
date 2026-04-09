// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d5958
// Size: 2624 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<BitVector, BitVector, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*, BitVector*,
   BitVector*, ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<BitVector>&,
   DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               ParallelogramHelper *param_4,GetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  DensityMapFilter DVar14;
  GetDensityProcessor GVar15;
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
  int iVar27;
  Logger *this;
  long lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int *piVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int *piVar41;
  long *plVar42;
  undefined2 uVar43;
  undefined8 uVar44;
  uint local_e4;
  uint local_a4;
  uint local_90;
  uint local_70;
  
  uVar20 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar21 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar22 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar42 = *(long **)param_6;
  uVar23 = (**(code **)(*plVar42 + 0x18))(plVar42);
  uVar24 = (**(code **)(*plVar42 + 0x20))(plVar42);
  uVar25 = (**(code **)(*plVar42 + 0x30))(plVar42);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar3 = *(uint *)(param_6 + 0x10);
  uVar16 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar26 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar27 = *(int *)(param_6 + 0x18);
  iVar5 = *(int *)(param_6 + 0x1c);
  iVar4 = *(int *)(param_6 + 8);
  uVar6 = *(uint *)(param_6 + 0xc);
  DVar14 = param_6[0x20];
  uVar17 = ~(-1 << (ulong)(uVar26 & 0x1f));
  uVar26 = *(uint *)(param_6 + 0x24);
  if ((uVar20 < uVar23) || (uVar21 < uVar24)) {
    if ((uVar23 < uVar20) || (uVar24 < uVar21)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar27 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar27 != 0
         )) {
                    /* try { // try from 007d6358 to 007d635f has its CatchHandler @ 007d63a8 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007d6364 to 007d6367 has its CatchHandler @ 007d6398 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar23,(ulong)uVar24,(ulong)uVar20,(ulong)uVar21);
      return false;
    }
    uVar18 = 0;
    if (uVar20 != 0) {
      uVar18 = uVar23 / uVar20;
    }
    uVar37 = 0;
    if (uVar21 != 0) {
      uVar37 = uVar24 / uVar21;
    }
    uVar44 = NEON_cnt((ulong)uVar18,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar18;
      }
      uVar39 = (uint)bVar19;
      uVar24 = uVar39 << 4 | 8;
      uVar38 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar24 = uVar39 << 4;
        uVar38 = uVar21;
      }
      uVar21 = uVar24 | 4;
      uVar39 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar21 = uVar24;
        uVar39 = uVar38;
      }
      uVar24 = uVar21 | 2;
      uVar38 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar24 = uVar21;
        uVar38 = uVar39;
      }
      local_90 = (uVar38 + uVar24) - 1;
    }
    else {
      local_90 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar37,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar21 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar37;
      }
      uVar39 = (uint)bVar19;
      uVar24 = uVar39 << 4 | 8;
      uVar38 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar24 = uVar39 << 4;
        uVar38 = uVar21;
      }
      uVar21 = uVar24 | 4;
      uVar39 = uVar38 >> 4;
      if (uVar38 < 0x10) {
        uVar21 = uVar24;
        uVar39 = uVar38;
      }
      uVar24 = uVar21 | 2;
      uVar38 = uVar39 >> 2;
      if (uVar39 < 4) {
        uVar24 = uVar21;
        uVar38 = uVar39;
      }
      local_e4 = (uVar38 + uVar24) - 1;
    }
    else {
      local_e4 = 0;
    }
    uVar21 = *(uint *)(param_4 + 0x48);
    if (uVar21 < *(uint *)(param_4 + 0x4c)) {
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      if (uVar37 < 2) {
        uVar37 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar21);
        uVar24 = *(uint *)(param_4 + 0x58);
        uVar38 = *(uint *)(param_4 + 0x5c);
        if (uVar24 < uVar38) {
          uVar9 = *(uint *)(param_5 + 0x14);
          uVar39 = *(uint *)(param_5 + 0x1c);
          uVar7 = *(uint *)(param_5 + 0x20);
          iVar10 = *(int *)(param_5 + 0x24);
          uVar8 = *(uint *)(param_5 + 0x28);
          iVar11 = *(int *)(param_5 + 0x2c);
          iVar12 = *(int *)(param_5 + 0x30);
          GVar15 = param_5[0x34];
          uVar29 = *(uint *)(param_5 + 0x38);
          iVar13 = *(int *)(param_5 + 0xc);
          lVar28 = *(long *)param_3;
          do {
            uVar31 = 0;
            uVar30 = uVar25 * (uVar23 * (uVar21 << (ulong)(local_e4 & 0x1f)) +
                              (uVar24 << (ulong)(local_90 & 0x1f)));
            do {
              uVar34 = 0;
              uVar2 = uVar30;
              do {
                lVar33 = *(long *)(lVar28 + (ulong)(uVar2 >> 0x13) * 8);
                uVar35 = (ulong)(uVar2 >> 3) & 0xffff;
                if ((uint)uVar35 < 0xfffd) {
                  uVar40 = *(uint *)(lVar33 + uVar35);
                }
                else {
                  uVar40 = (uVar2 >> 3) + 1;
                  uVar1 = (uVar2 >> 3) + 2;
                  uVar40 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar28 + (ulong)(uVar1 >> 0x10) * 8) +
                                           ((ulong)uVar1 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar28 + (ulong)(uVar40 >> 0x10) * 8)
                                                    + ((ulong)uVar40 & 0xffff)),
                                                   *(undefined *)(lVar33 + uVar35)));
                }
                uVar40 = uVar40 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
                if ((iVar4 == 2) || ((iVar4 == 0) != ((uVar40 & uVar17) != uVar6))) {
                  uVar40 = uVar40 >> (ulong)(uVar3 & 0x1f) & uVar16;
                  if (((int)uVar40 < iVar27) || (iVar5 < (int)uVar40)) {
                    if (DVar14 != (DensityMapFilter)0x0) goto LAB_007d61f8;
                  }
                  else if (DVar14 == (DensityMapFilter)0x0) {
LAB_007d61f8:
                    if ((uVar26 == 0) || ((uVar40 & uVar26) != 0)) {
                      uVar31 = (uVar24 + uVar21 * uVar20) * uVar22;
                      uVar35 = (ulong)(uVar31 >> 3) & 0xffff;
                      lVar36 = *(long *)param_2;
                      lVar33 = *(long *)(lVar36 + (ulong)(uVar31 >> 0x13) * 8);
                      if ((uint)uVar35 < 0xfffd) {
                        uVar30 = *(uint *)(lVar33 + uVar35);
                      }
                      else {
                        uVar30 = (uVar31 >> 3) + 1;
                        uVar34 = (uVar31 >> 3) + 2;
                        uVar30 = (uint)CONCAT12(*(undefined *)
                                                 (*(long *)(lVar36 + (ulong)(uVar34 >> 0x10) * 8) +
                                                 ((ulong)uVar34 & 0xffff)),
                                                CONCAT11(*(undefined *)
                                                          (*(long *)(lVar36 + (ulong)(uVar30 >> 0x10
                                                                                     ) * 8) +
                                                          ((ulong)uVar30 & 0xffff)),
                                                         *(undefined *)(lVar33 + uVar35)));
                      }
                      uVar31 = uVar30 >> (ulong)(uVar31 & 7) &
                               ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
                      uVar30 = uVar31 & uVar7;
                      uVar31 = uVar31 >> (ulong)(uVar9 & 0x1f) & uVar39;
                      *(uint *)(param_5 + 0x40) = uVar31;
                      *(uint *)(param_5 + 0x44) = uVar30;
                      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
                      if ((iVar10 != 2) && ((iVar10 == 0) == (uVar8 != uVar30))) goto LAB_007d60f4;
                      if (((int)uVar31 < iVar11) || (iVar12 < (int)uVar31)) {
                        if (GVar15 == (GetDensityProcessor)0x0) goto LAB_007d60f4;
                      }
                      else if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007d60f4;
                      if ((uVar29 != 0) && ((uVar29 & uVar31) == 0)) goto LAB_007d60f4;
                      *(uint *)param_5 =
                           (iVar13 + uVar31 & ((int)(iVar13 + uVar31) >> 0x1f ^ 0xffffffffU)) +
                           *(int *)param_5;
                      piVar41 = (int *)(param_5 + 8);
                      goto LAB_007d60e8;
                    }
                  }
                }
                uVar34 = uVar34 + 1;
                uVar2 = uVar2 + uVar25;
              } while (uVar34 != uVar18);
              uVar31 = uVar31 + 1;
              uVar30 = uVar30 + uVar23 * uVar25;
              piVar41 = (int *)(param_5 + 4);
            } while (uVar31 != uVar37);
LAB_007d60e8:
            *piVar41 = *piVar41 + 1;
LAB_007d60f4:
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar38);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar18 = 0;
    if (uVar23 != 0) {
      uVar18 = uVar20 / uVar23;
    }
    uVar37 = 0;
    if (uVar24 != 0) {
      uVar37 = uVar21 / uVar24;
    }
    uVar44 = NEON_cnt((ulong)uVar18,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar18 & 0xffff0000) != 0;
      uVar21 = uVar18 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar18;
      }
      uVar38 = (uint)bVar19;
      uVar24 = uVar38 << 4 | 8;
      uVar18 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar24 = uVar38 << 4;
        uVar18 = uVar21;
      }
      uVar21 = uVar24 | 4;
      uVar38 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar21 = uVar24;
        uVar38 = uVar18;
      }
      uVar24 = uVar21 | 2;
      uVar18 = uVar38 >> 2;
      if (uVar38 < 4) {
        uVar24 = uVar21;
        uVar18 = uVar38;
      }
      local_70 = (uVar18 + uVar24) - 1;
    }
    else {
      local_70 = 0;
    }
    uVar44 = NEON_cnt((ulong)uVar37,1);
    uVar43 = NEON_uaddlv(uVar44,1);
    if ((int)CONCAT62((int6)((ulong)uVar44 >> 0x10),uVar43) == 1) {
      bVar19 = (uVar37 & 0xffff0000) != 0;
      uVar21 = uVar37 >> 0x10;
      if (!bVar19) {
        uVar21 = uVar37;
      }
      uVar37 = (uint)bVar19;
      uVar24 = uVar37 << 4 | 8;
      uVar18 = uVar21 >> 8;
      if (uVar21 < 0x100) {
        uVar24 = uVar37 << 4;
        uVar18 = uVar21;
      }
      uVar21 = uVar24 | 4;
      uVar37 = uVar18 >> 4;
      if (uVar18 < 0x10) {
        uVar21 = uVar24;
        uVar37 = uVar18;
      }
      uVar24 = uVar21 | 2;
      uVar18 = uVar37 >> 2;
      if (uVar37 < 4) {
        uVar24 = uVar21;
        uVar18 = uVar37;
      }
      local_a4 = (uVar18 + uVar24) - 1;
    }
    else {
      local_a4 = 0;
    }
    uVar21 = *(uint *)(param_4 + 0x48);
    if (uVar21 < *(uint *)(param_4 + 0x4c)) {
      piVar41 = (int *)(param_5 + 4);
      local_90 = uVar20 * uVar21;
      do {
        ParallelogramHelper::startXIteration(param_4,uVar21);
        uVar24 = *(uint *)(param_4 + 0x58);
        uVar18 = *(uint *)(param_4 + 0x5c);
        if (uVar24 < uVar18) {
          iVar5 = *(int *)(param_5 + 0x2c);
          uVar38 = *(uint *)(param_5 + 0x1c);
          uVar39 = *(uint *)(param_5 + 0x20);
          iVar27 = *(int *)(param_5 + 0x24);
          uVar7 = *(uint *)(param_5 + 0x28);
          uVar8 = *(uint *)(param_5 + 0x14);
          uVar9 = *(uint *)(param_5 + 0x38);
          iVar10 = *(int *)(param_5 + 0x30);
          GVar15 = param_5[0x34];
          uVar37 = uVar22 * (uVar24 + local_90);
          iVar11 = *(int *)(param_5 + 0xc);
          lVar28 = *(long *)param_3;
          do {
            uVar29 = ((uVar24 >> (ulong)(local_70 & 0x1f)) +
                     (uVar21 >> (ulong)(local_a4 & 0x1f)) * uVar23) * uVar25;
            uVar35 = (ulong)(uVar29 >> 3) & 0xffff;
            lVar33 = *(long *)(lVar28 + (ulong)(uVar29 >> 0x13) * 8);
            if ((uint)uVar35 < 0xfffd) {
              uVar31 = *(uint *)(lVar33 + uVar35);
            }
            else {
              uVar31 = (uVar29 >> 3) + 1;
              uVar30 = (uVar29 >> 3) + 2;
              uVar31 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar28 + (ulong)(uVar30 >> 0x10) * 8) +
                                       ((ulong)uVar30 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar28 + (ulong)(uVar31 >> 0x10) * 8) +
                                                ((ulong)uVar31 & 0xffff)),
                                               *(undefined *)(lVar33 + uVar35)));
            }
            uVar29 = uVar31 >> (ulong)(uVar29 & 7) & ~(-1 << (ulong)(uVar25 & 0x1f)) & 0xffffU;
            piVar32 = piVar41;
            if ((((iVar4 == 2) || ((iVar4 == 0) != ((uVar29 & uVar17) != uVar6))) &&
                (DVar14 == (DensityMapFilter)0x0)) &&
               ((uVar26 == 0 || ((uVar29 >> (ulong)(uVar3 & 0x1f) & uVar16 & uVar26) != 0)))) {
              uVar35 = (ulong)(uVar37 >> 3) & 0xffff;
              lVar36 = *(long *)param_2;
              lVar33 = *(long *)(lVar36 + (ulong)(uVar37 >> 0x13) * 8);
              if ((uint)uVar35 < 0xfffd) {
                uVar29 = *(uint *)(lVar33 + uVar35);
              }
              else {
                uVar29 = (uVar37 >> 3) + 1;
                uVar31 = (uVar37 >> 3) + 2;
                uVar29 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar36 + (ulong)(uVar31 >> 0x10) * 8) +
                                         ((ulong)uVar31 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar36 + (ulong)(uVar29 >> 0x10) * 8) +
                                                  ((ulong)uVar29 & 0xffff)),
                                                 *(undefined *)(lVar33 + uVar35)));
              }
              uVar29 = uVar29 >> (ulong)(uVar37 & 7) & ~(-1 << (ulong)(uVar22 & 0x1f)) & 0xffffU;
              uVar31 = uVar29 & uVar39;
              uVar29 = uVar29 >> (ulong)(uVar8 & 0x1f) & uVar38;
              *(uint *)(param_5 + 0x40) = uVar29;
              *(uint *)(param_5 + 0x44) = uVar31;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              if ((iVar27 == 2) || ((iVar27 == 0) != (uVar7 != uVar31))) {
                if (((int)uVar29 < iVar5) || (iVar10 < (int)uVar29)) {
                  if (GVar15 != (GetDensityProcessor)0x0) goto LAB_007d5f28;
                }
                else if (GVar15 == (GetDensityProcessor)0x0) {
LAB_007d5f28:
                  if ((uVar9 == 0) || ((uVar9 & uVar29) != 0)) {
                    *(uint *)param_5 =
                         (iVar11 + uVar29 & ((int)(iVar11 + uVar29) >> 0x1f ^ 0xffffffffU)) +
                         *(int *)param_5;
                    piVar32 = (int *)(param_5 + 8);
                    goto LAB_007d5d6c;
                  }
                }
              }
            }
            else {
LAB_007d5d6c:
              *piVar32 = *piVar32 + 1;
            }
            uVar24 = uVar24 + 1;
            uVar37 = uVar37 + uVar22;
          } while (uVar18 != uVar24);
        }
        uVar21 = uVar21 + 1;
        local_90 = local_90 + uVar20;
      } while (uVar21 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
}


