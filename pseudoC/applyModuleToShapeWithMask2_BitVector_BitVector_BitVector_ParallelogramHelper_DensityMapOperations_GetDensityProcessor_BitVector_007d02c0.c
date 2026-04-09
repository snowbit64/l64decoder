// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d02c0
// Size: 4064 bytes
// Signature: bool __cdecl applyModuleToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, BitVector * param_3, BitVector * param_4, ParallelogramHelper * param_5, GetDensityProcessor * param_6, DensityMapFilter * param_7, DensityMapFilter * param_8)


/* bool DensityMapModifier::applyModuleToShapeWithMask2<BitVector, BitVector, BitVector,
   ParallelogramHelper, DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*,
   BitVector*, BitVector*, BitVector*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<BitVector>&, DensityMapFilter const&, DensityMapFilter
   const&) */

bool DensityMapModifier::
     applyModuleToShapeWithMask2<BitVector,BitVector,BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,BitVector *param_3,
               BitVector *param_4,ParallelogramHelper *param_5,GetDensityProcessor *param_6,
               DensityMapFilter *param_7,DensityMapFilter *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  DensityMapFilter DVar17;
  DensityMapFilter DVar18;
  GetDensityProcessor GVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  int *piVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  int *piVar51;
  int iVar52;
  long *plVar53;
  uint uVar54;
  ulong uVar55;
  undefined2 uVar56;
  undefined8 uVar57;
  uint local_140;
  uint local_13c;
  uint local_f4;
  uint local_f0;
  uint local_dc;
  uint local_d0;
  uint local_ac;
  uint local_a8;
  
  uVar25 = (**(code **)(*(long *)param_1 + 0x18))();
  uVar26 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar27 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  plVar53 = *(long **)param_7;
  uVar28 = (**(code **)(*plVar53 + 0x18))(plVar53);
  uVar29 = (**(code **)(*plVar53 + 0x20))(plVar53);
  uVar30 = (**(code **)(*plVar53 + 0x30))(plVar53);
  (**(code **)(**(long **)param_7 + 0x28))();
  uVar4 = *(uint *)(param_7 + 0x10);
  uVar20 = ~(-1 << (ulong)(*(uint *)(param_7 + 0x14) & 0x1f));
  uVar31 = (**(code **)(**(long **)param_7 + 0x28))();
  plVar53 = *(long **)param_8;
  iVar52 = *(int *)(param_7 + 0x1c);
  iVar8 = *(int *)(param_7 + 0x18);
  DVar17 = param_7[0x20];
  iVar36 = *(int *)(param_7 + 8);
  uVar5 = *(uint *)(param_7 + 0xc);
  uVar21 = ~(-1 << (ulong)(uVar31 & 0x1f));
  uVar9 = *(uint *)(param_7 + 0x24);
  uVar32 = (**(code **)(*plVar53 + 0x18))(plVar53);
  uVar33 = (**(code **)(*plVar53 + 0x20))(plVar53);
  uVar34 = (**(code **)(*plVar53 + 0x30))(plVar53);
  (**(code **)(**(long **)param_8 + 0x28))();
  uVar31 = *(uint *)(param_8 + 0x10);
  uVar22 = ~(-1 << (ulong)(*(uint *)(param_8 + 0x14) & 0x1f));
  uVar35 = (**(code **)(**(long **)param_8 + 0x28))();
  iVar10 = *(int *)(param_8 + 8);
  iVar11 = *(int *)(param_8 + 0x1c);
  uVar12 = *(uint *)(param_8 + 0xc);
  iVar13 = *(int *)(param_8 + 0x18);
  uVar23 = ~(-1 << (ulong)(uVar35 & 0x1f));
  DVar18 = param_8[0x20];
  uVar35 = *(uint *)(param_8 + 0x24);
  if ((((uVar25 < uVar28) || (uVar26 < uVar29)) || (uVar25 < uVar32)) || (uVar26 < uVar33)) {
    if (((uVar28 < uVar25) || (uVar29 < uVar26)) || ((uVar32 < uVar25 || (uVar33 < uVar26)))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar36 != 0
         )) {
                    /* try { // try from 007d1268 to 007d1273 has its CatchHandler @ 007d12a0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "DensityMapModifier: masks must either be scaled up or scaled down in both directions - mask size %ux%u, mask2 size %ux%u and density map size %ux%u are incompatible\n"
                         ,(ulong)uVar28,(ulong)uVar29,(ulong)uVar32,(ulong)uVar33,(ulong)uVar25,
                         (ulong)uVar26);
      return false;
    }
    uVar45 = 0;
    if (uVar25 != 0) {
      uVar45 = uVar28 / uVar25;
    }
    uVar48 = 0;
    if (uVar26 != 0) {
      uVar48 = uVar29 / uVar26;
    }
    uVar57 = NEON_cnt((ulong)uVar45,1);
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar45 & 0xffff0000) != 0;
      uVar29 = uVar45 >> 0x10;
      if (!bVar24) {
        uVar29 = uVar45;
      }
      uVar47 = (uint)bVar24;
      uVar6 = uVar47 << 4 | 8;
      uVar46 = uVar29 >> 8;
      if (uVar29 < 0x100) {
        uVar6 = uVar47 << 4;
        uVar46 = uVar29;
      }
      uVar29 = uVar6 | 4;
      uVar47 = uVar46 >> 4;
      if (uVar46 < 0x10) {
        uVar29 = uVar6;
        uVar47 = uVar46;
      }
      uVar6 = uVar29 | 2;
      uVar46 = uVar47 >> 2;
      if (uVar47 < 4) {
        uVar6 = uVar29;
        uVar46 = uVar47;
      }
      local_d0 = (uVar46 + uVar6) - 1;
    }
    else {
      local_d0 = 0;
    }
    uVar57 = NEON_cnt((ulong)uVar48,1);
    uVar29 = 0;
    if (uVar25 != 0) {
      uVar29 = uVar32 / uVar25;
    }
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar48 & 0xffff0000) != 0;
      uVar6 = uVar48 >> 0x10;
      if (!bVar24) {
        uVar6 = uVar48;
      }
      uVar49 = (uint)bVar24;
      uVar46 = uVar49 << 4 | 8;
      uVar47 = uVar6 >> 8;
      if (uVar6 < 0x100) {
        uVar46 = uVar49 << 4;
        uVar47 = uVar6;
      }
      uVar6 = uVar46 | 4;
      uVar49 = uVar47 >> 4;
      if (uVar47 < 0x10) {
        uVar6 = uVar46;
        uVar49 = uVar47;
      }
      uVar46 = uVar6 | 2;
      uVar47 = uVar49 >> 2;
      if (uVar49 < 4) {
        uVar46 = uVar6;
        uVar47 = uVar49;
      }
      local_13c = (uVar47 + uVar46) - 1;
    }
    else {
      local_13c = 0;
    }
    uVar6 = 0;
    if (uVar26 != 0) {
      uVar6 = uVar33 / uVar26;
    }
    uVar57 = NEON_cnt((ulong)uVar29,1);
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar29 & 0xffff0000) != 0;
      uVar26 = uVar29 >> 0x10;
      if (!bVar24) {
        uVar26 = uVar29;
      }
      uVar47 = (uint)bVar24;
      uVar33 = uVar47 << 4 | 8;
      uVar46 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar33 = uVar47 << 4;
        uVar46 = uVar26;
      }
      uVar26 = uVar33 | 4;
      uVar47 = uVar46 >> 4;
      if (uVar46 < 0x10) {
        uVar26 = uVar33;
        uVar47 = uVar46;
      }
      uVar33 = uVar26 | 2;
      uVar46 = uVar47 >> 2;
      if (uVar47 < 4) {
        uVar33 = uVar26;
        uVar46 = uVar47;
      }
      local_dc = (uVar46 + uVar33) - 1;
    }
    else {
      local_dc = 0;
    }
    uVar57 = NEON_cnt((ulong)uVar6,1);
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar6 & 0xffff0000) != 0;
      uVar26 = uVar6 >> 0x10;
      if (!bVar24) {
        uVar26 = uVar6;
      }
      uVar47 = (uint)bVar24;
      uVar33 = uVar47 << 4 | 8;
      uVar46 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar33 = uVar47 << 4;
        uVar46 = uVar26;
      }
      uVar26 = uVar33 | 4;
      uVar47 = uVar46 >> 4;
      if (uVar46 < 0x10) {
        uVar26 = uVar33;
        uVar47 = uVar46;
      }
      uVar33 = uVar26 | 2;
      uVar46 = uVar47 >> 2;
      if (uVar47 < 4) {
        uVar33 = uVar26;
        uVar46 = uVar47;
      }
      local_140 = (uVar46 + uVar33) - 1;
    }
    else {
      local_140 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    if (uVar26 < *(uint *)(param_5 + 0x4c)) {
      if (uVar45 < 2) {
        uVar45 = 1;
      }
      if (uVar48 < 2) {
        uVar48 = 1;
      }
      if (uVar29 < 2) {
        uVar29 = 1;
      }
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar33 = *(uint *)(param_5 + 0x58);
        uVar46 = *(uint *)(param_5 + 0x5c);
        if (uVar33 < uVar46) {
          uVar47 = *(uint *)(param_6 + 0x20);
          iVar14 = *(int *)(param_6 + 0x24);
          uVar38 = *(uint *)(param_6 + 0x14);
          uVar37 = *(uint *)(param_6 + 0x1c);
          uVar49 = *(uint *)(param_6 + 0x28);
          iVar7 = *(int *)(param_6 + 0x2c);
          iVar15 = *(int *)(param_6 + 0x30);
          GVar19 = param_6[0x34];
          uVar1 = *(uint *)(param_6 + 0x38);
          iVar16 = *(int *)(param_6 + 0xc);
          lVar39 = *(long *)param_3;
LAB_007d0edc:
          uVar42 = 0;
          uVar40 = uVar30 * (uVar28 * (uVar26 << (ulong)(local_13c & 0x1f)) +
                            (uVar33 << (ulong)(local_d0 & 0x1f)));
          do {
            uVar54 = 0;
            uVar3 = uVar40;
            do {
              uVar55 = (ulong)(uVar3 >> 3) & 0xffff;
              lVar43 = *(long *)(lVar39 + (ulong)(uVar3 >> 0x13) * 8);
              if ((uint)uVar55 < 0xfffd) {
                uVar50 = *(uint *)(lVar43 + uVar55);
              }
              else {
                uVar50 = (uVar3 >> 3) + 1;
                uVar2 = (uVar3 >> 3) + 2;
                uVar50 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar39 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar39 + (ulong)(uVar50 >> 0x10) * 8) +
                                                  ((ulong)uVar50 & 0xffff)),
                                                 *(undefined *)(lVar43 + uVar55)));
              }
              uVar50 = uVar50 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar30 & 0x1f)) & 0xffffU;
              piVar51 = (int *)(param_6 + 4);
              if ((iVar36 == 2) || ((iVar36 == 0) != ((uVar50 & uVar21) != uVar5))) {
                uVar50 = uVar50 >> (ulong)(uVar4 & 0x1f) & uVar20;
                if (((int)uVar50 < iVar8) || (iVar52 < (int)uVar50)) {
                  if (DVar17 != (DensityMapFilter)0x0) goto LAB_007d0fe4;
                }
                else if (DVar17 == (DensityMapFilter)0x0) {
LAB_007d0fe4:
                  if ((uVar9 == 0) || ((uVar50 & uVar9) != 0)) {
                    uVar42 = 0;
                    uVar40 = uVar34 * (uVar32 * (uVar26 << (ulong)(local_140 & 0x1f)) +
                                      (uVar33 << (ulong)(local_dc & 0x1f)));
                    lVar43 = *(long *)param_4;
                    goto LAB_007d1028;
                  }
                }
              }
              uVar54 = uVar54 + 1;
              uVar3 = uVar3 + uVar30;
            } while (uVar54 != uVar45);
            uVar42 = uVar42 + 1;
            uVar40 = uVar40 + uVar28 * uVar30;
          } while (uVar42 != uVar48);
          goto LAB_007d0ec4;
        }
LAB_007d0e14:
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(uint *)(param_5 + 0x4c));
    }
  }
  else {
    uVar45 = 0;
    if (uVar28 != 0) {
      uVar45 = uVar25 / uVar28;
    }
    uVar48 = 0;
    if (uVar29 != 0) {
      uVar48 = uVar26 / uVar29;
    }
    uVar57 = NEON_cnt((ulong)uVar45,1);
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar45 & 0xffff0000) != 0;
      uVar29 = uVar45 >> 0x10;
      if (!bVar24) {
        uVar29 = uVar45;
      }
      uVar46 = (uint)bVar24;
      uVar45 = uVar46 << 4 | 8;
      uVar6 = uVar29 >> 8;
      if (uVar29 < 0x100) {
        uVar45 = uVar46 << 4;
        uVar6 = uVar29;
      }
      uVar29 = uVar45 | 4;
      uVar46 = uVar6 >> 4;
      if (uVar6 < 0x10) {
        uVar29 = uVar45;
        uVar46 = uVar6;
      }
      uVar45 = uVar29 | 2;
      uVar6 = uVar46 >> 2;
      if (uVar46 < 4) {
        uVar45 = uVar29;
        uVar6 = uVar46;
      }
      local_a8 = (uVar6 + uVar45) - 1;
    }
    else {
      local_a8 = 0;
    }
    uVar57 = NEON_cnt((ulong)uVar48,1);
    uVar29 = 0;
    if (uVar32 != 0) {
      uVar29 = uVar25 / uVar32;
    }
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar48 & 0xffff0000) != 0;
      uVar45 = uVar48 >> 0x10;
      if (!bVar24) {
        uVar45 = uVar48;
      }
      uVar46 = (uint)bVar24;
      uVar48 = uVar46 << 4 | 8;
      uVar6 = uVar45 >> 8;
      if (uVar45 < 0x100) {
        uVar48 = uVar46 << 4;
        uVar6 = uVar45;
      }
      uVar45 = uVar48 | 4;
      uVar46 = uVar6 >> 4;
      if (uVar6 < 0x10) {
        uVar45 = uVar48;
        uVar46 = uVar6;
      }
      uVar48 = uVar45 | 2;
      uVar6 = uVar46 >> 2;
      if (uVar46 < 4) {
        uVar48 = uVar45;
        uVar6 = uVar46;
      }
      local_f0 = (uVar6 + uVar48) - 1;
    }
    else {
      local_f0 = 0;
    }
    uVar45 = 0;
    if (uVar33 != 0) {
      uVar45 = uVar26 / uVar33;
    }
    uVar57 = NEON_cnt((ulong)uVar29,1);
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar29 & 0xffff0000) != 0;
      uVar26 = uVar29 >> 0x10;
      if (!bVar24) {
        uVar26 = uVar29;
      }
      uVar48 = (uint)bVar24;
      uVar29 = uVar48 << 4 | 8;
      uVar33 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar29 = uVar48 << 4;
        uVar33 = uVar26;
      }
      uVar26 = uVar29 | 4;
      uVar48 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar26 = uVar29;
        uVar48 = uVar33;
      }
      uVar29 = uVar26 | 2;
      uVar33 = uVar48 >> 2;
      if (uVar48 < 4) {
        uVar29 = uVar26;
        uVar33 = uVar48;
      }
      local_ac = (uVar33 + uVar29) - 1;
    }
    else {
      local_ac = 0;
    }
    uVar57 = NEON_cnt((ulong)uVar45,1);
    uVar56 = NEON_uaddlv(uVar57,1);
    if ((int)CONCAT62((int6)((ulong)uVar57 >> 0x10),uVar56) == 1) {
      bVar24 = (uVar45 & 0xffff0000) != 0;
      uVar26 = uVar45 >> 0x10;
      if (!bVar24) {
        uVar26 = uVar45;
      }
      uVar45 = (uint)bVar24;
      uVar29 = uVar45 << 4 | 8;
      uVar33 = uVar26 >> 8;
      if (uVar26 < 0x100) {
        uVar29 = uVar45 << 4;
        uVar33 = uVar26;
      }
      uVar26 = uVar29 | 4;
      uVar45 = uVar33 >> 4;
      if (uVar33 < 0x10) {
        uVar26 = uVar29;
        uVar45 = uVar33;
      }
      uVar29 = uVar26 | 2;
      uVar33 = uVar45 >> 2;
      if (uVar45 < 4) {
        uVar29 = uVar26;
        uVar33 = uVar45;
      }
      local_f4 = (uVar33 + uVar29) - 1;
    }
    else {
      local_f4 = 0;
    }
    uVar26 = *(uint *)(param_5 + 0x48);
    if (uVar26 < *(uint *)(param_5 + 0x4c)) {
      piVar51 = (int *)(param_6 + 4);
      iVar52 = uVar25 * uVar26;
      do {
        ParallelogramHelper::startXIteration(param_5,uVar26);
        uVar29 = *(uint *)(param_5 + 0x58);
        uVar33 = *(uint *)(param_5 + 0x5c);
        if (uVar29 < uVar33) {
          uVar45 = uVar27 * (uVar29 + iVar52);
          uVar48 = *(uint *)(param_6 + 0x1c);
          uVar6 = *(uint *)(param_6 + 0x20);
          iVar11 = *(int *)(param_6 + 0x2c);
          iVar8 = *(int *)(param_6 + 0x24);
          uVar46 = *(uint *)(param_6 + 0x28);
          uVar47 = *(uint *)(param_6 + 0x14);
          iVar13 = *(int *)(param_6 + 0x30);
          GVar19 = param_6[0x34];
          uVar49 = *(uint *)(param_6 + 0x38);
          iVar14 = *(int *)(param_6 + 0xc);
          lVar39 = *(long *)param_3;
          do {
            uVar38 = ((uVar29 >> (ulong)(local_a8 & 0x1f)) +
                     (uVar26 >> (ulong)(local_f0 & 0x1f)) * uVar28) * uVar30;
            uVar55 = (ulong)(uVar38 >> 3) & 0xffff;
            lVar43 = *(long *)(lVar39 + (ulong)(uVar38 >> 0x13) * 8);
            if ((uint)uVar55 < 0xfffd) {
              uVar37 = *(uint *)(lVar43 + uVar55);
            }
            else {
              uVar37 = (uVar38 >> 3) + 1;
              uVar1 = (uVar38 >> 3) + 2;
              uVar37 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar39 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar39 + (ulong)(uVar37 >> 0x10) * 8) +
                                                ((ulong)uVar37 & 0xffff)),
                                               *(undefined *)(lVar43 + uVar55)));
            }
            uVar38 = uVar37 >> (ulong)(uVar38 & 7) & ~(-1 << (ulong)(uVar30 & 0x1f)) & 0xffffU;
            piVar41 = piVar51;
            if ((((iVar36 == 2) || ((iVar36 == 0) != ((uVar38 & uVar21) != uVar5))) &&
                (DVar17 == (DensityMapFilter)0x0)) &&
               ((uVar9 == 0 || ((uVar38 >> (ulong)(uVar4 & 0x1f) & uVar20 & uVar9) != 0)))) {
              lVar43 = *(long *)param_4;
              uVar38 = ((uVar29 >> (ulong)(local_ac & 0x1f)) +
                       (uVar26 >> (ulong)(local_f4 & 0x1f)) * uVar32) * uVar34;
              uVar55 = (ulong)(uVar38 >> 3) & 0xffff;
              lVar44 = *(long *)(lVar43 + (ulong)(uVar38 >> 0x13) * 8);
              if ((uint)uVar55 < 0xfffd) {
                uVar37 = *(uint *)(lVar44 + uVar55);
              }
              else {
                uVar37 = (uVar38 >> 3) + 1;
                uVar1 = (uVar38 >> 3) + 2;
                uVar37 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar43 + (ulong)(uVar1 >> 0x10) * 8) +
                                         ((ulong)uVar1 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar43 + (ulong)(uVar37 >> 0x10) * 8) +
                                                  ((ulong)uVar37 & 0xffff)),
                                                 *(undefined *)(lVar44 + uVar55)));
              }
              uVar38 = uVar37 >> (ulong)(uVar38 & 7) & ~(-1 << (ulong)(uVar34 & 0x1f)) & 0xffffU;
              if (((iVar10 != 2) && ((iVar10 == 0) == ((uVar38 & uVar23) != uVar12))) ||
                 ((DVar18 != (DensityMapFilter)0x0 ||
                  ((uVar35 != 0 && ((uVar38 >> (ulong)(uVar31 & 0x1f) & uVar22 & uVar35) == 0))))))
              goto LAB_007d0bc4;
              uVar55 = (ulong)(uVar45 >> 3) & 0xffff;
              lVar43 = *(long *)param_2;
              lVar44 = *(long *)(lVar43 + (ulong)(uVar45 >> 0x13) * 8);
              if ((uint)uVar55 < 0xfffd) {
                uVar38 = *(uint *)(lVar44 + uVar55);
              }
              else {
                uVar38 = (uVar45 >> 3) + 1;
                uVar37 = (uVar45 >> 3) + 2;
                uVar38 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar43 + (ulong)(uVar37 >> 0x10) * 8) +
                                         ((ulong)uVar37 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar43 + (ulong)(uVar38 >> 0x10) * 8) +
                                                  ((ulong)uVar38 & 0xffff)),
                                                 *(undefined *)(lVar44 + uVar55)));
              }
              uVar38 = uVar38 >> (ulong)(uVar45 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
              uVar37 = uVar38 & uVar6;
              uVar38 = uVar38 >> (ulong)(uVar47 & 0x1f) & uVar48;
              *(uint *)(param_6 + 0x40) = uVar38;
              *(uint *)(param_6 + 0x44) = uVar37;
              *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
              if ((iVar8 == 2) || ((iVar8 == 0) != (uVar46 != uVar37))) {
                if (((int)uVar38 < iVar11) || (iVar13 < (int)uVar38)) {
                  if (GVar19 != (GetDensityProcessor)0x0) goto LAB_007d0b90;
                }
                else if (GVar19 == (GetDensityProcessor)0x0) {
LAB_007d0b90:
                  if ((uVar49 == 0) || ((uVar49 & uVar38) != 0)) {
                    *(uint *)param_6 =
                         (iVar14 + uVar38 & ((int)(iVar14 + uVar38) >> 0x1f ^ 0xffffffffU)) +
                         *(int *)param_6;
                    piVar41 = (int *)(param_6 + 8);
                    goto LAB_007d0bc4;
                  }
                }
              }
            }
            else {
LAB_007d0bc4:
              *piVar41 = *piVar41 + 1;
            }
            uVar29 = uVar29 + 1;
            uVar45 = uVar45 + uVar27;
          } while (uVar33 != uVar29);
        }
        uVar26 = uVar26 + 1;
        iVar52 = iVar52 + uVar25;
      } while (uVar26 < *(uint *)(param_5 + 0x4c));
    }
  }
  return true;
LAB_007d1028:
  do {
    uVar54 = 0;
    uVar3 = uVar40;
    do {
      uVar55 = (ulong)(uVar3 >> 3) & 0xffff;
      lVar44 = *(long *)(lVar43 + (ulong)(uVar3 >> 0x13) * 8);
      if ((uint)uVar55 < 0xfffd) {
        uVar50 = *(uint *)(lVar44 + uVar55);
      }
      else {
        uVar50 = (uVar3 >> 3) + 1;
        uVar2 = (uVar3 >> 3) + 2;
        uVar50 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar43 + (ulong)(uVar2 >> 0x10) * 8) +
                                 ((ulong)uVar2 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar43 + (ulong)(uVar50 >> 0x10) * 8) +
                                          ((ulong)uVar50 & 0xffff)),*(undefined *)(lVar44 + uVar55))
                               );
      }
      uVar50 = uVar50 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar34 & 0x1f)) & 0xffffU;
      if ((iVar10 == 2) || ((iVar10 == 0) != ((uVar50 & uVar23) != uVar12))) {
        uVar50 = uVar50 >> (ulong)(uVar31 & 0x1f) & uVar22;
        if (((int)uVar50 < iVar13) || (iVar11 < (int)uVar50)) {
          if (DVar18 != (DensityMapFilter)0x0) goto LAB_007d1100;
        }
        else if (DVar18 == (DensityMapFilter)0x0) {
LAB_007d1100:
          if ((uVar35 == 0) || ((uVar50 & uVar35) != 0)) {
            uVar42 = (uVar33 + uVar26 * uVar25) * uVar27;
            uVar55 = (ulong)(uVar42 >> 3) & 0xffff;
            lVar44 = *(long *)param_2;
            lVar43 = *(long *)(lVar44 + (ulong)(uVar42 >> 0x13) * 8);
            if ((uint)uVar55 < 0xfffd) {
              uVar40 = *(uint *)(lVar43 + uVar55);
            }
            else {
              uVar40 = (uVar42 >> 3) + 1;
              uVar54 = (uVar42 >> 3) + 2;
              uVar40 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar44 + (ulong)(uVar54 >> 0x10) * 8) +
                                       ((ulong)uVar54 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar44 + (ulong)(uVar40 >> 0x10) * 8) +
                                                ((ulong)uVar40 & 0xffff)),
                                               *(undefined *)(lVar43 + uVar55)));
            }
            uVar42 = uVar40 >> (ulong)(uVar42 & 7) & ~(-1 << (ulong)(uVar27 & 0x1f)) & 0xffffU;
            uVar40 = uVar42 & uVar47;
            uVar42 = uVar42 >> (ulong)(uVar38 & 0x1f) & uVar37;
            *(uint *)(param_6 + 0x40) = uVar42;
            *(uint *)(param_6 + 0x44) = uVar40;
            *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
            if ((iVar14 != 2) && ((iVar14 == 0) == (uVar49 != uVar40))) goto LAB_007d0ed0;
            if (((int)uVar42 < iVar7) || (iVar15 < (int)uVar42)) {
              if (GVar19 == (GetDensityProcessor)0x0) goto LAB_007d0ed0;
            }
            else if (GVar19 != (GetDensityProcessor)0x0) goto LAB_007d0ed0;
            if ((uVar1 != 0) && ((uVar1 & uVar42) == 0)) goto LAB_007d0ed0;
            *(uint *)param_6 =
                 (iVar16 + uVar42 & ((int)(iVar16 + uVar42) >> 0x1f ^ 0xffffffffU)) +
                 *(int *)param_6;
            piVar51 = (int *)(param_6 + 8);
            goto LAB_007d0ec4;
          }
        }
      }
      uVar54 = uVar54 + 1;
      uVar3 = uVar3 + uVar34;
    } while (uVar54 != uVar29);
    uVar42 = uVar42 + 1;
    uVar40 = uVar40 + uVar32 * uVar34;
  } while (uVar42 != uVar6);
LAB_007d0ec4:
  *piVar51 = *piVar51 + 1;
LAB_007d0ed0:
  uVar33 = uVar33 + 1;
  if (uVar33 == uVar46) goto LAB_007d0e14;
  goto LAB_007d0edc;
}


