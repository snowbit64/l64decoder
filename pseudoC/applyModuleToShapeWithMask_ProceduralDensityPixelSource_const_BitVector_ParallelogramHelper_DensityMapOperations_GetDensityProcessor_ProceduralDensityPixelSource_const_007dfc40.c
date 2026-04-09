// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007dfc40
// Size: 2312 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, BitVector * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ProceduralDensityPixelSource const,
   BitVector, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               BitVector *param_3,ParallelogramHelper *param_4,GetDensityProcessor *param_5,
               DensityMapFilter *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  DensityMapFilter DVar8;
  GetDensityProcessor GVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  Logger *this;
  int *piVar22;
  int *piVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  long *plVar30;
  undefined2 uVar31;
  undefined8 uVar32;
  uint local_cc;
  uint local_ac;
  
  uVar13 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar14 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar30 = *(long **)param_6;
  uVar15 = (**(code **)(*plVar30 + 0x18))(plVar30);
  uVar16 = (**(code **)(*plVar30 + 0x20))(plVar30);
  uVar17 = (**(code **)(*plVar30 + 0x30))(plVar30);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar3 = *(uint *)(param_6 + 0x10);
  uVar10 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar18 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar21 = *(int *)(param_6 + 8);
  uVar5 = *(uint *)(param_6 + 0xc);
  iVar4 = *(int *)(param_6 + 0x18);
  iVar6 = *(int *)(param_6 + 0x1c);
  DVar8 = param_6[0x20];
  uVar7 = *(uint *)(param_6 + 0x24);
  uVar18 = ~(-1 << (ulong)(uVar18 & 0x1f));
  if ((uVar13 < uVar15) || (uVar14 < uVar16)) {
    if ((uVar15 < uVar13) || (uVar16 < uVar14)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar21 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar21 != 0
         )) {
                    /* try { // try from 007e0500 to 007e050b has its CatchHandler @ 007e0558 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007e0510 to 007e0513 has its CatchHandler @ 007e0548 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar15,(ulong)uVar16,(ulong)uVar13,(ulong)uVar14);
      return false;
    }
    uVar11 = 0;
    if (uVar14 != 0) {
      uVar11 = uVar16 / uVar14;
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = uVar15 / uVar13;
    }
    uVar32 = NEON_cnt((ulong)uVar14,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar12 = (uVar14 & 0xffff0000) != 0;
      uVar13 = uVar14 >> 0x10;
      if (!bVar12) {
        uVar13 = uVar14;
      }
      uVar26 = (uint)bVar12;
      uVar16 = uVar26 << 4 | 8;
      uVar19 = uVar13 >> 8;
      if (uVar13 < 0x100) {
        uVar16 = uVar26 << 4;
        uVar19 = uVar13;
      }
      uVar13 = uVar16 | 4;
      uVar26 = uVar19 >> 4;
      if (uVar19 < 0x10) {
        uVar13 = uVar16;
        uVar26 = uVar19;
      }
      uVar16 = uVar13 | 2;
      uVar19 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar16 = uVar13;
        uVar19 = uVar26;
      }
      uVar13 = (uVar19 + uVar16) - 1;
    }
    else {
      uVar13 = 0;
    }
    uVar32 = NEON_cnt((ulong)uVar11,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar12 = (uVar11 & 0xffff0000) != 0;
      uVar16 = uVar11 >> 0x10;
      if (!bVar12) {
        uVar16 = uVar11;
      }
      uVar20 = (uint)bVar12;
      uVar19 = uVar20 << 4 | 8;
      uVar26 = uVar16 >> 8;
      if (uVar16 < 0x100) {
        uVar19 = uVar20 << 4;
        uVar26 = uVar16;
      }
      uVar16 = uVar19 | 4;
      uVar20 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar16 = uVar19;
        uVar20 = uVar26;
      }
      uVar19 = uVar16 | 2;
      uVar26 = uVar20 >> 2;
      if (uVar20 < 4) {
        uVar19 = uVar16;
        uVar26 = uVar20;
      }
      local_cc = (uVar26 + uVar19) - 1;
    }
    else {
      local_cc = 0;
    }
    uVar16 = *(uint *)(param_4 + 0x48);
    if (uVar16 < *(uint *)(param_4 + 0x4c)) {
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar16);
        uVar19 = *(uint *)(param_4 + 0x58);
        if (uVar19 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar26 = 0;
            uVar20 = uVar17 * (uVar15 * (uVar16 << (ulong)(local_cc & 0x1f)) +
                              (uVar19 << (ulong)(uVar13 & 0x1f)));
            lVar24 = *(long *)param_3;
            do {
              uVar27 = 0;
              uVar2 = uVar20;
              do {
                uVar25 = (ulong)(uVar2 >> 3) & 0xffff;
                lVar28 = *(long *)(lVar24 + (ulong)(uVar2 >> 0x13) * 8);
                if ((uint)uVar25 < 0xfffd) {
                  uVar29 = *(uint *)(lVar28 + uVar25);
                }
                else {
                  uVar29 = (uVar2 >> 3) + 1;
                  uVar1 = (uVar2 >> 3) + 2;
                  uVar29 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar24 + (ulong)(uVar1 >> 0x10) * 8) +
                                           ((ulong)uVar1 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar24 + (ulong)(uVar29 >> 0x10) * 8)
                                                    + ((ulong)uVar29 & 0xffff)),
                                                   *(undefined *)(lVar28 + uVar25)));
                }
                uVar29 = uVar29 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
                if ((iVar21 == 2) || ((iVar21 == 0) != ((uVar29 & uVar18) != uVar5))) {
                  uVar29 = uVar29 >> (ulong)(uVar3 & 0x1f) & uVar10;
                  if (((int)uVar29 < iVar4) || (iVar6 < (int)uVar29)) {
                    if (DVar8 != (DensityMapFilter)0x0) goto LAB_007e03fc;
                  }
                  else if (DVar8 == (DensityMapFilter)0x0) {
LAB_007e03fc:
                    if ((uVar7 == 0) || ((uVar29 & uVar7) != 0)) {
                      uVar20 = (**(code **)(*(long *)param_2 + 0x58))();
                      uVar26 = uVar20 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                               *(uint *)(param_5 + 0x1c);
                      *(uint *)(param_5 + 0x40) = uVar26;
                      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar20;
                      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
                      if ((*(int *)(param_5 + 0x24) != 2) &&
                         ((*(int *)(param_5 + 0x24) == 0) ==
                          (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar20))))
                      goto LAB_007e02f0;
                      if ((int)uVar26 < *(int *)(param_5 + 0x2c)) {
                        GVar9 = param_5[0x34];
joined_r0x007e04a4:
                        if (GVar9 == (GetDensityProcessor)0x0) goto LAB_007e02f0;
                      }
                      else {
                        GVar9 = param_5[0x34];
                        if (*(int *)(param_5 + 0x30) < (int)uVar26) goto joined_r0x007e04a4;
                        if (GVar9 != (GetDensityProcessor)0x0) goto LAB_007e02f0;
                      }
                      if ((*(uint *)(param_5 + 0x38) != 0) &&
                         ((*(uint *)(param_5 + 0x38) & uVar26) == 0)) goto LAB_007e02f0;
                      *(uint *)param_5 =
                           (*(int *)(param_5 + 0xc) + uVar26 &
                           ((int)(*(int *)(param_5 + 0xc) + uVar26) >> 0x1f ^ 0xffffffffU)) +
                           *(int *)param_5;
                      piVar22 = (int *)(param_5 + 8);
                      goto LAB_007e02e4;
                    }
                  }
                }
                uVar27 = uVar27 + 1;
                uVar2 = uVar2 + uVar17;
              } while (uVar27 != uVar14);
              uVar26 = uVar26 + 1;
              uVar20 = uVar20 + uVar15 * uVar17;
              piVar22 = (int *)(param_5 + 4);
            } while (uVar26 != uVar11);
LAB_007e02e4:
            *piVar22 = *piVar22 + 1;
LAB_007e02f0:
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(param_4 + 0x5c));
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar11 = 0;
    if (uVar15 != 0) {
      uVar11 = uVar13 / uVar15;
    }
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = uVar14 / uVar16;
    }
    uVar32 = NEON_cnt((ulong)uVar11,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar12 = (uVar11 & 0xffff0000) != 0;
      uVar14 = uVar11 >> 0x10;
      if (!bVar12) {
        uVar14 = uVar11;
      }
      uVar19 = (uint)bVar12;
      uVar16 = uVar19 << 4 | 8;
      uVar11 = uVar14 >> 8;
      if (uVar14 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar11 = uVar14;
      }
      uVar14 = uVar16 | 4;
      uVar19 = uVar11 >> 4;
      if (uVar11 < 0x10) {
        uVar14 = uVar16;
        uVar19 = uVar11;
      }
      uVar16 = uVar14 | 2;
      uVar11 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar14;
        uVar11 = uVar19;
      }
      uVar14 = (uVar11 + uVar16) - 1;
    }
    else {
      uVar14 = 0;
    }
    uVar32 = NEON_cnt((ulong)uVar13,1);
    uVar31 = NEON_uaddlv(uVar32,1);
    if ((int)CONCAT62((int6)((ulong)uVar32 >> 0x10),uVar31) == 1) {
      bVar12 = (uVar13 & 0xffff0000) != 0;
      uVar16 = uVar13 >> 0x10;
      if (!bVar12) {
        uVar16 = uVar13;
      }
      uVar19 = (uint)bVar12;
      uVar13 = uVar19 << 4 | 8;
      uVar11 = uVar16 >> 8;
      if (uVar16 < 0x100) {
        uVar13 = uVar19 << 4;
        uVar11 = uVar16;
      }
      uVar16 = uVar13 | 4;
      uVar19 = uVar11 >> 4;
      if (uVar11 < 0x10) {
        uVar16 = uVar13;
        uVar19 = uVar11;
      }
      uVar13 = uVar16 | 2;
      uVar11 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar13 = uVar16;
        uVar11 = uVar19;
      }
      local_ac = (uVar11 + uVar13) - 1;
    }
    else {
      local_ac = 0;
    }
    uVar13 = *(uint *)(param_4 + 0x48);
    if (uVar13 < *(uint *)(param_4 + 0x4c)) {
      piVar22 = (int *)(param_5 + 4);
      do {
        ParallelogramHelper::startXIteration(param_4,uVar13);
        uVar16 = *(uint *)(param_4 + 0x58);
        if (uVar16 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar11 = ((uVar16 >> (ulong)(uVar14 & 0x1f)) +
                     (uVar13 >> (ulong)(local_ac & 0x1f)) * uVar15) * uVar17;
            lVar28 = *(long *)param_3;
            uVar25 = (ulong)(uVar11 >> 3) & 0xffff;
            lVar24 = *(long *)(lVar28 + (ulong)(uVar11 >> 0x13) * 8);
            if ((uint)uVar25 < 0xfffd) {
              uVar19 = *(uint *)(lVar24 + uVar25);
            }
            else {
              uVar19 = (uVar11 >> 3) + 1;
              uVar26 = (uVar11 >> 3) + 2;
              uVar19 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar28 + (ulong)(uVar26 >> 0x10) * 8) +
                                       ((ulong)uVar26 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar28 + (ulong)(uVar19 >> 0x10) * 8) +
                                                ((ulong)uVar19 & 0xffff)),
                                               *(undefined *)(lVar24 + uVar25)));
            }
            uVar11 = uVar19 >> (ulong)(uVar11 & 7) & ~(-1 << (ulong)(uVar17 & 0x1f)) & 0xffffU;
            piVar23 = piVar22;
            if ((((iVar21 == 2) || ((iVar21 == 0) != ((uVar11 & uVar18) != uVar5))) &&
                (DVar8 == (DensityMapFilter)0x0)) &&
               ((uVar7 == 0 || ((uVar11 >> (ulong)(uVar3 & 0x1f) & uVar10 & uVar7) != 0)))) {
              uVar19 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar16);
              uVar11 = uVar19 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(uint *)(param_5 + 0x40) = uVar11;
              *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar19;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) !=
                  (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar19)))) {
                if ((int)uVar11 < *(int *)(param_5 + 0x2c)) {
                  GVar9 = param_5[0x34];
joined_r0x007e0160:
                  if (GVar9 == (GetDensityProcessor)0x0) goto LAB_007dffe0;
                }
                else {
                  GVar9 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar11) goto joined_r0x007e0160;
                  if (GVar9 != (GetDensityProcessor)0x0) goto LAB_007dffe0;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar11) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar11 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar11) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar23 = (int *)(param_5 + 8);
                  goto LAB_007dffd4;
                }
              }
            }
            else {
LAB_007dffd4:
              *piVar23 = *piVar23 + 1;
            }
LAB_007dffe0:
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(param_4 + 0x5c));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
}


