// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007df290
// Size: 2440 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ChunkedBitSquare * param_3, ParallelogramHelper * param_4, GetDensityProcessor * param_5, DensityMapFilter * param_6)


/* bool DensityMapModifier::applyModuleToShapeWithMask<ProceduralDensityPixelSource const,
   ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>
   >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ChunkedBitSquare*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource
   const>&, DensityMapFilter const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask<ProceduralDensityPixelSource_const,ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ChunkedBitSquare *param_3,ParallelogramHelper *param_4,GetDensityProcessor *param_5,
               DensityMapFilter *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  DensityMapFilter DVar8;
  GetDensityProcessor GVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  code **ppcVar25;
  Logger *this;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  long *plVar33;
  undefined2 uVar34;
  undefined8 uVar35;
  uint local_ec;
  uint local_d0;
  uint local_ac;
  uint local_80;
  
  uVar14 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar15 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar33 = *(long **)param_6;
  uVar16 = (**(code **)(*plVar33 + 0x18))(plVar33);
  uVar17 = (**(code **)(*plVar33 + 0x20))(plVar33);
  (**(code **)(*plVar33 + 0x30))(plVar33);
  (**(code **)(**(long **)param_6 + 0x28))();
  uVar5 = *(uint *)(param_6 + 0x10);
  uVar11 = ~(-1 << (ulong)(*(uint *)(param_6 + 0x14) & 0x1f));
  uVar18 = (**(code **)(**(long **)param_6 + 0x28))();
  iVar20 = *(int *)(param_6 + 0x1c);
  iVar24 = *(int *)(param_6 + 8);
  uVar6 = *(uint *)(param_6 + 0xc);
  iVar7 = *(int *)(param_6 + 0x18);
  uVar12 = ~(-1 << (ulong)(uVar18 & 0x1f));
  DVar8 = param_6[0x20];
  uVar18 = *(uint *)(param_6 + 0x24);
  if ((uVar14 < uVar16) || (uVar15 < uVar17)) {
    if ((uVar16 < uVar14) || (uVar17 < uVar15)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar24 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar24 != 0
         )) {
                    /* try { // try from 007dfbd8 to 007dfbdf has its CatchHandler @ 007dfc28 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 007dfbe4 to 007dfbe7 has its CatchHandler @ 007dfc18 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: mask must either be scaled up or scaled down in both directions - mask size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar16,(ulong)uVar17,(ulong)uVar14,(ulong)uVar15);
      return false;
    }
    uVar21 = 0;
    if (uVar14 != 0) {
      uVar21 = uVar16 / uVar14;
    }
    uVar14 = 0;
    if (uVar15 != 0) {
      uVar14 = uVar17 / uVar15;
    }
    uVar35 = NEON_cnt((ulong)uVar21,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar21 & 0xffff0000) != 0;
      uVar15 = uVar21 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar21;
      }
      uVar19 = (uint)bVar13;
      uVar16 = uVar19 << 4 | 8;
      uVar17 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar17 = uVar15;
      }
      uVar15 = uVar16 | 4;
      uVar19 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar15 = uVar16;
        uVar19 = uVar17;
      }
      uVar16 = uVar15 | 2;
      uVar17 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar15;
        uVar17 = uVar19;
      }
      local_d0 = (uVar17 + uVar16) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar14,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar14 & 0xffff0000) != 0;
      uVar15 = uVar14 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar14;
      }
      uVar19 = (uint)bVar13;
      uVar16 = uVar19 << 4 | 8;
      uVar17 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar16 = uVar19 << 4;
        uVar17 = uVar15;
      }
      uVar15 = uVar16 | 4;
      uVar19 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar15 = uVar16;
        uVar19 = uVar17;
      }
      uVar16 = uVar15 | 2;
      uVar17 = uVar19 >> 2;
      if (uVar19 < 4) {
        uVar16 = uVar15;
        uVar17 = uVar19;
      }
      local_ec = (uVar17 + uVar16) - 1;
    }
    else {
      local_ec = 0;
    }
    uVar15 = *(uint *)(param_4 + 0x48);
    if (uVar15 < *(uint *)(param_4 + 0x4c)) {
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_4,uVar15);
        uVar16 = *(uint *)(param_4 + 0x58);
        if (uVar16 < *(uint *)(param_4 + 0x5c)) {
          do {
            uVar17 = 0;
            uVar19 = uVar16 << (ulong)(local_d0 & 0x1f);
            do {
              uVar28 = 0;
              uVar32 = (ulong)*(uint *)(param_3 + 0x34);
              uVar3 = uVar17 + (uVar15 << (ulong)(local_ec & 0x1f));
              uVar2 = uVar19;
              do {
                uVar4 = uVar28 + uVar19;
                iVar10 = (uVar3 >> 5) << (ulong)(*(uint *)param_3 & 0x1f);
                iVar31 = (int)uVar32;
                ppcVar25 = *(code ***)
                            (*(long *)(param_3 + 0x28) +
                            (ulong)((iVar10 + (uVar4 >> 5)) * iVar31) * 8);
                uVar4 = uVar4 & 0x1f | (uVar3 & 0x1f) << 5;
                uVar22 = (**ppcVar25)(ppcVar25,uVar4,0,*(undefined4 *)(param_3 + 0x3c));
                if (*(uint *)(param_3 + 0x34) < 2) {
                  uVar32 = (ulong)*(uint *)(param_3 + 0x34);
                  if (iVar24 != 2) goto LAB_007dfa74;
LAB_007dfa94:
                  uVar4 = uVar22 >> (ulong)(uVar5 & 0x1f) & uVar11;
                  if (((int)uVar4 < iVar7) || (iVar20 < (int)uVar4)) {
                    if (DVar8 != (DensityMapFilter)0x0) goto LAB_007dfac0;
                  }
                  else if (DVar8 == (DensityMapFilter)0x0) {
LAB_007dfac0:
                    if ((uVar18 == 0) || ((uVar4 & uVar18) != 0)) {
                      uVar19 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar16,uVar15);
                      uVar17 = uVar19 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                               *(uint *)(param_5 + 0x1c);
                      *(uint *)(param_5 + 0x40) = uVar17;
                      *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar19;
                      *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
                      if ((*(int *)(param_5 + 0x24) != 2) &&
                         ((*(int *)(param_5 + 0x24) == 0) ==
                          (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar19))))
                      goto LAB_007df928;
                      if ((int)uVar17 < *(int *)(param_5 + 0x2c)) {
                        GVar9 = param_5[0x34];
joined_r0x007dfb70:
                        if (GVar9 == (GetDensityProcessor)0x0) goto LAB_007df928;
                      }
                      else {
                        GVar9 = param_5[0x34];
                        if (*(int *)(param_5 + 0x30) < (int)uVar17) goto joined_r0x007dfb70;
                        if (GVar9 != (GetDensityProcessor)0x0) goto LAB_007df928;
                      }
                      if ((*(uint *)(param_5 + 0x38) != 0) &&
                         ((*(uint *)(param_5 + 0x38) & uVar17) == 0)) goto LAB_007df928;
                      *(uint *)param_5 =
                           (*(int *)(param_5 + 0xc) + uVar17 &
                           ((int)(*(int *)(param_5 + 0xc) + uVar17) >> 0x1f ^ 0xffffffffU)) +
                           *(int *)param_5;
                      piVar26 = (int *)(param_5 + 8);
                      goto LAB_007df91c;
                    }
                  }
                }
                else {
                  uVar30 = 1;
                  puVar29 = (undefined4 *)(param_3 + 0x44);
                  do {
                    ppcVar25 = *(code ***)
                                (*(long *)(param_3 + 0x28) +
                                (ulong)(iVar31 * (iVar10 + (uVar2 >> 5)) + (int)uVar30) * 8);
                    iVar23 = (**ppcVar25)(ppcVar25,uVar4,0,*puVar29);
                    puVar1 = puVar29 + -1;
                    uVar30 = uVar30 + 1;
                    uVar32 = (ulong)*(uint *)(param_3 + 0x34);
                    puVar29 = puVar29 + 2;
                    uVar22 = iVar23 << (ulong)(*puVar1 & 0x1f) | uVar22;
                  } while (uVar30 < uVar32);
                  if (iVar24 == 2) goto LAB_007dfa94;
LAB_007dfa74:
                  if ((iVar24 == 0) != ((uVar22 & uVar12) != uVar6)) goto LAB_007dfa94;
                }
                uVar28 = uVar28 + 1;
                uVar2 = uVar2 + 1;
              } while (uVar28 != uVar21);
              uVar17 = uVar17 + 1;
              piVar26 = (int *)(param_5 + 4);
            } while (uVar17 != uVar14);
LAB_007df91c:
            *piVar26 = *piVar26 + 1;
LAB_007df928:
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(param_4 + 0x5c));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_4 + 0x4c));
    }
  }
  else {
    uVar21 = 0;
    if (uVar16 != 0) {
      uVar21 = uVar14 / uVar16;
    }
    uVar14 = 0;
    if (uVar17 != 0) {
      uVar14 = uVar15 / uVar17;
    }
    uVar35 = NEON_cnt((ulong)uVar21,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar21 & 0xffff0000) != 0;
      uVar15 = uVar21 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar21;
      }
      uVar21 = (uint)bVar13;
      uVar16 = uVar21 << 4 | 8;
      uVar17 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar16 = uVar21 << 4;
        uVar17 = uVar15;
      }
      uVar15 = uVar16 | 4;
      uVar21 = uVar17 >> 4;
      if (uVar17 < 0x10) {
        uVar15 = uVar16;
        uVar21 = uVar17;
      }
      uVar16 = uVar15 | 2;
      uVar17 = uVar21 >> 2;
      if (uVar21 < 4) {
        uVar16 = uVar15;
        uVar17 = uVar21;
      }
      local_80 = (uVar17 + uVar16) - 1;
    }
    else {
      local_80 = 0;
    }
    uVar35 = NEON_cnt((ulong)uVar14,1);
    uVar34 = NEON_uaddlv(uVar35,1);
    if ((int)CONCAT62((int6)((ulong)uVar35 >> 0x10),uVar34) == 1) {
      bVar13 = (uVar14 & 0xffff0000) != 0;
      uVar15 = uVar14 >> 0x10;
      if (!bVar13) {
        uVar15 = uVar14;
      }
      uVar17 = (uint)bVar13;
      uVar14 = uVar17 << 4 | 8;
      uVar16 = uVar15 >> 8;
      if (uVar15 < 0x100) {
        uVar14 = uVar17 << 4;
        uVar16 = uVar15;
      }
      uVar15 = uVar14 | 4;
      uVar17 = uVar16 >> 4;
      if (uVar16 < 0x10) {
        uVar15 = uVar14;
        uVar17 = uVar16;
      }
      uVar14 = uVar15 | 2;
      uVar16 = uVar17 >> 2;
      if (uVar17 < 4) {
        uVar14 = uVar15;
        uVar16 = uVar17;
      }
      local_ac = (uVar16 + uVar14) - 1;
    }
    else {
      local_ac = 0;
    }
    uVar14 = *(uint *)(param_4 + 0x48);
    if (uVar14 < *(uint *)(param_4 + 0x4c)) {
      piVar26 = (int *)(param_5 + 4);
      do {
        ParallelogramHelper::startXIteration(param_4,uVar14);
        uVar15 = *(uint *)(param_4 + 0x58);
        if (uVar15 < *(uint *)(param_4 + 0x5c)) {
          uVar16 = uVar14 >> (ulong)(local_ac & 0x1f);
          do {
            uVar17 = uVar15 >> (ulong)(local_80 & 0x1f);
            uVar21 = (((uVar16 >> 5) << (ulong)(*(uint *)param_3 & 0x1f)) + (uVar17 >> 5)) *
                     *(int *)(param_3 + 0x34);
            ppcVar25 = *(code ***)(*(long *)(param_3 + 0x28) + (ulong)uVar21 * 8);
            uVar17 = uVar17 & 0x1f | (uVar16 & 0x1f) << 5;
            uVar19 = (**ppcVar25)(ppcVar25,uVar17,0,*(undefined4 *)(param_3 + 0x3c));
            if (1 < *(uint *)(param_3 + 0x34)) {
              uVar32 = 1;
              puVar29 = (undefined4 *)(param_3 + 0x44);
              do {
                ppcVar25 = *(code ***)
                            (*(long *)(param_3 + 0x28) + (ulong)(uVar21 + (int)uVar32) * 8);
                iVar20 = (**ppcVar25)(ppcVar25,uVar17,0,*puVar29);
                puVar1 = puVar29 + -1;
                uVar32 = uVar32 + 1;
                puVar29 = puVar29 + 2;
                uVar19 = iVar20 << (ulong)(*puVar1 & 0x1f) | uVar19;
              } while (uVar32 < *(uint *)(param_3 + 0x34));
            }
            piVar27 = piVar26;
            if ((((iVar24 == 2) || ((iVar24 == 0) != ((uVar19 & uVar12) != uVar6))) &&
                (DVar8 == (DensityMapFilter)0x0)) &&
               ((uVar18 == 0 || ((uVar19 >> (ulong)(uVar5 & 0x1f) & uVar11 & uVar18) != 0)))) {
              uVar21 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar15,uVar14);
              uVar17 = uVar21 >> (ulong)(*(uint *)(param_5 + 0x14) & 0x1f) &
                       *(uint *)(param_5 + 0x1c);
              *(uint *)(param_5 + 0x40) = uVar17;
              *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x20) & uVar21;
              *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
              if ((*(int *)(param_5 + 0x24) == 2) ||
                 ((*(int *)(param_5 + 0x24) == 0) !=
                  (*(uint *)(param_5 + 0x28) != (*(uint *)(param_5 + 0x20) & uVar21)))) {
                if ((int)uVar17 < *(int *)(param_5 + 0x2c)) {
                  GVar9 = param_5[0x34];
joined_r0x007df7c0:
                  if (GVar9 == (GetDensityProcessor)0x0) goto LAB_007df60c;
                }
                else {
                  GVar9 = param_5[0x34];
                  if (*(int *)(param_5 + 0x30) < (int)uVar17) goto joined_r0x007df7c0;
                  if (GVar9 != (GetDensityProcessor)0x0) goto LAB_007df60c;
                }
                if ((*(uint *)(param_5 + 0x38) == 0) || ((*(uint *)(param_5 + 0x38) & uVar17) != 0))
                {
                  *(uint *)param_5 =
                       (*(int *)(param_5 + 0xc) + uVar17 &
                       ((int)(*(int *)(param_5 + 0xc) + uVar17) >> 0x1f ^ 0xffffffffU)) +
                       *(int *)param_5;
                  piVar27 = (int *)(param_5 + 8);
                  goto LAB_007df600;
                }
              }
            }
            else {
LAB_007df600:
              *piVar27 = *piVar27 + 1;
            }
LAB_007df60c:
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(param_4 + 0x5c));
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_4 + 0x4c));
    }
  }
  return true;
}


