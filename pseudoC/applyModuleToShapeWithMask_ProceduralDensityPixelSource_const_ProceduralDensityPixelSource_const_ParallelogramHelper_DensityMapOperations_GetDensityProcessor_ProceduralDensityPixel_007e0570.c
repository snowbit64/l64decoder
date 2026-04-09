// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007e0570
// Size: 2004 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ProceduralDensityPixelSource * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ProceduralDensityPixelSource const,
   ProceduralDensityPixelSource const, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ProceduralDensityPixelSource const*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource
   const>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ProceduralDensityPixelSource *param_3,ParallelogramHelper *param_4,
               GetDensityProcessor *param_5,DensityMapFilter *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  DensityMapFilter DVar6;
  GetDensityProcessor GVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  Logger *this;
  int *piVar19;
  int *piVar20;
  long *plVar21;
  undefined2 uVar22;
  undefined8 uVar23;
  uint local_bc;
  uint local_98;
  uint local_94;
  
  uVar10 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar11 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar21 = *(long **)param_6;
  uVar12 = (**(code **)(*plVar21 + 0x18))(plVar21);
  uVar13 = (**(code **)(*plVar21 + 0x20))(plVar21);
  (**(code **)(*plVar21 + 0x30))(plVar21);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar1 = *(uint *)(param_6 + 0x10);
  uVar8 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar14 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar18 = *(int *)(param_6 + 0x18);
  iVar3 = *(int *)(param_6 + 0x1c);
  iVar2 = *(int *)(param_6 + 8);
  uVar4 = *(uint *)(param_6 + 0xc);
  uVar5 = *(uint *)(param_6 + 0x24);
  DVar6 = param_6[0x20];
  uVar14 = ~(-1 << (ulong)(uVar14 & 0x1f));
  if ((uVar10 < uVar12) || (uVar11 < uVar13)) {
    if ((uVar12 < uVar10) || (uVar13 < uVar11)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar18 != 0
         )) {
                    /* try { // try from 007e0d04 to 007e0d0b has its CatchHandler @ 007e0d54 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007e0d10 to 007e0d13 has its CatchHandler @ 007e0d44 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar12,(ulong)uVar13,(ulong)uVar10,(ulong)uVar11);
      return false;
    }
    uVar15 = 0;
    if (uVar10 != 0) {
      uVar15 = uVar12 / uVar10;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar13 / uVar11;
    }
    uVar23 = NEON_cnt((ulong)uVar15,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    if ((int)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) == 1) {
      bVar9 = (uVar15 & 0xffff0000) != 0;
      uVar11 = uVar15 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar15;
      }
      uVar17 = (uint)bVar9;
      uVar12 = uVar17 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar17 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar17 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar17 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar17;
      }
      local_98 = (uVar13 + uVar12) - 1;
    }
    else {
      local_98 = 0;
    }
    uVar23 = NEON_cnt((ulong)uVar10,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    if ((int)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) == 1) {
      bVar9 = (uVar10 & 0xffff0000) != 0;
      uVar11 = uVar10 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar10;
      }
      uVar17 = (uint)bVar9;
      uVar12 = uVar17 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar17 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar17 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar17 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar17;
      }
      local_bc = (uVar13 + uVar12) - 1;
    }
    else {
      local_bc = 0;
    }
    uVar11 = *(uint *)(param_4 + 0x48);
    if (uVar11 < *(uint *)(param_4 + 0x4c)) {
      if (uVar15 < 2) {
        uVar15 = 1;
      }
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar11);
        uVar12 = *(uint *)(param_4 + 0x58);
        if (uVar12 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar13 = 0;
            do {
              uVar17 = 0;
              do {
                uVar16 = (**(code **)(*(long *)param_3 + 0x58))
                                   (param_3,(uVar12 << (ulong)(local_98 & 0x1f)) + uVar17,
                                    uVar13 + (uVar11 << (ulong)(local_bc & 0x1f)));
                if ((iVar2 == 2) || ((iVar2 == 0) != ((uVar16 & uVar14) != uVar4))) {
                  uVar16 = uVar16 >> (ulong)(uVar1 & 0x1f) & uVar8;
                  if (((int)uVar16 < iVar18) || (iVar3 < (int)uVar16)) {
                    if (DVar6 != (DensityMapFilter)0x0) goto LAB_007e0bf8;
                  }
                  else if (DVar6 == (DensityMapFilter)0x0) {
LAB_007e0bf8:
                    if ((uVar5 == 0) || ((uVar16 & uVar5) != 0)) {
                      uVar17 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar12,uVar11);
                      uVar13 = uVar17 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                               *(uint *)(param_5 + 0x1c);
                      *(uint *)(param_5 + 0x40) = uVar13;
                      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar17;
                      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
                      if ((*(int *)(param_5 + 0x24) != 2) &&
                         ((*(int *)(param_5 + 0x24) == 0) ==
                          (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar17))))
                      goto LAB_007e0b40;
                      if ((int)uVar13 < *(int *)(param_5 + 0x2c)) {
                        GVar7 = param_5[0x34];
joined_r0x007e0c9c:
                        if (GVar7 == (GetDensityProcessor)0x0) goto LAB_007e0b40;
                      }
                      else {
                        GVar7 = param_5[0x34];
                        if (*(int *)(param_5 + 0x30) < (int)uVar13) goto joined_r0x007e0c9c;
                        if (GVar7 != (GetDensityProcessor)0x0) goto LAB_007e0b40;
                      }
                      if ((*(uint *)(param_5 + 0x38) != 0) &&
                         ((*(uint *)(param_5 + 0x38) & uVar13) == 0)) goto LAB_007e0b40;
                      *(uint *)param_5 =
                           (*(int *)(param_5 + 0xc) + uVar13 &
                           ((int)(*(int *)(param_5 + 0xc) + uVar13) >> 0x1f ^ 0xffffffffU)) +
                           *(int *)param_5;
                      piVar19 = (int *)(param_5 + 8);
                      goto LAB_007e0b34;
                    }
                  }
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 != uVar15);
              uVar13 = uVar13 + 1;
              piVar19 = (int *)(param_5 + 4);
            } while (uVar13 != uVar10);
LAB_007e0b34:
            *piVar19 = *piVar19 + 1;
LAB_007e0b40:
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_4 + 0x5c));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar15 = 0;
    if (uVar12 != 0) {
      uVar15 = uVar10 / uVar12;
    }
    uVar10 = 0;
    if (uVar13 != 0) {
      uVar10 = uVar11 / uVar13;
    }
    uVar23 = NEON_cnt((ulong)uVar15,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    if ((int)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) == 1) {
      bVar9 = (uVar15 & 0xffff0000) != 0;
      uVar11 = uVar15 >> 0x10;
      if (!bVar9) {
        uVar11 = uVar15;
      }
      uVar15 = (uint)bVar9;
      uVar12 = uVar15 << 4 | 8;
      uVar13 = uVar11 >> 8;
      if (uVar11 < 0x100) {
        uVar12 = uVar15 << 4;
        uVar13 = uVar11;
      }
      uVar11 = uVar12 | 4;
      uVar15 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar11 = uVar12;
        uVar15 = uVar13;
      }
      uVar12 = uVar11 | 2;
      uVar13 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar12 = uVar11;
        uVar13 = uVar15;
      }
      uVar11 = (uVar13 + uVar12) - 1;
    }
    else {
      uVar11 = 0;
    }
    uVar23 = NEON_cnt((ulong)uVar10,1);
    uVar22 = NEON_uaddlv(uVar23,1);
    if ((int)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) == 1) {
      bVar9 = (uVar10 & 0xffff0000) != 0;
      uVar12 = uVar10 >> 0x10;
      if (!bVar9) {
        uVar12 = uVar10;
      }
      uVar15 = (uint)bVar9;
      uVar10 = uVar15 << 4 | 8;
      uVar13 = uVar12 >> 8;
      if (uVar12 < 0x100) {
        uVar10 = uVar15 << 4;
        uVar13 = uVar12;
      }
      uVar12 = uVar10 | 4;
      uVar15 = uVar13 >> 4;
      if (uVar13 < 0x10) {
        uVar12 = uVar10;
        uVar15 = uVar13;
      }
      uVar10 = uVar12 | 2;
      uVar13 = uVar15 >> 2;
      if (uVar15 < 4) {
        uVar10 = uVar12;
        uVar13 = uVar15;
      }
      local_94 = (uVar13 + uVar10) - 1;
    }
    else {
      local_94 = 0;
    }
    uVar10 = *(uint *)(param_4 + 0x48);
    if (uVar10 < *(uint *)(param_4 + 0x4c)) {
      piVar19 = (int *)(param_5 + 4);
      do {
        ParallelogramHelper::startXIteration(param_4,uVar10);
        uVar12 = *(uint *)(param_4 + 0x58);
        if (uVar12 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar13 = (**(code **)(*(long *)param_3 + 0x58))
                               (param_3,uVar12 >> (ulong)(uVar11 & 0x1f),
                                uVar10 >> (ulong)(local_94 & 0x1f));
            piVar20 = piVar19;
            if ((((iVar2 == 2) || ((iVar2 == 0) != ((uVar13 & uVar14) != uVar4))) &&
                (DVar6 == (DensityMapFilter)0x0)) &&
               ((uVar5 == 0 || ((uVar13 >> (ulong)(uVar1 & 0x1f) & uVar8 & uVar5) != 0)))) {
              uVar15 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar12,uVar10);
              uVar13 = uVar15 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(uint *)(param_5 + 0x40) = uVar13;
              *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar15;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) !=
                  (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar15)))) {
                if ((int)uVar13 < *(int *)(param_5 + 0x2c)) {
                  GVar7 = param_5[0x34];
joined_r0x007e09e8:
                  if (GVar7 == (GetDensityProcessor)0x0) goto LAB_007e08d0;
                }
                else {
                  GVar7 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar13) goto joined_r0x007e09e8;
                  if (GVar7 != (GetDensityProcessor)0x0) goto LAB_007e08d0;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar13) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar13 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar13) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar20 = (int *)(param_5 + 8);
                  goto LAB_007e08c4;
                }
              }
            }
            else {
LAB_007e08c4:
              *piVar20 = *piVar20 + 1;
            }
LAB_007e08d0:
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_4 + 0x5c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
}


