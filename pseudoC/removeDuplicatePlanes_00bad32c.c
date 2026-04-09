// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDuplicatePlanes
// Entry Point: 00bad32c
// Size: 3864 bytes
// Signature: undefined __cdecl removeDuplicatePlanes(btConvexHullComputer * param_1)


/* Bt2PhysicsCookingUtil::removeDuplicatePlanes(btConvexHullComputer*) */

void Bt2PhysicsCookingUtil::removeDuplicatePlanes(btConvexHullComputer *param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  int *piVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  long lVar27;
  uint *puVar28;
  ulong uVar29;
  ulong uVar30;
  void **ppvVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  void *local_1b0;
  btAlignedObjectArray abStack_180 [4];
  uint local_17c;
  uint local_178;
  void *local_170;
  char local_168;
  uint local_15c;
  uint local_158;
  int *local_150;
  char local_148;
  uint local_13c;
  uint local_138;
  void *local_130;
  char local_128;
  btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace> abStack_120 [4];
  uint local_11c;
  undefined4 uStack_118;
  long local_110;
  undefined local_108;
  undefined4 local_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  void *local_f0;
  char local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  void *local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  uVar43 = *(uint *)(param_1 + 0x44);
  uVar30 = (ulong)uVar43;
  local_108 = 1;
  local_110 = 0;
  local_11c = 0;
  uStack_118 = 0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  local_a8 = 1;
  local_c0 = (void *)0x0;
  if ((int)uVar43 < 0) {
    lVar23 = (long)(int)uVar43 * 0x30;
    uVar25 = uVar43;
    while( true ) {
      uVar25 = uVar25 + 1;
      lVar27 = local_110 + lVar23;
      if (*(void **)(lVar27 + 0x20) != (void *)0x0 && *(char *)(lVar27 + 0x28) != '\0') {
                    /* try { // try from 00bad9e8 to 00bad9eb has its CatchHandler @ 00bae274 */
        btAlignedFreeInternal(*(void **)(lVar27 + 0x20));
      }
      *(undefined *)(lVar27 + 0x28) = 1;
      *(undefined8 *)(lVar27 + 0x20) = 0;
      *(undefined4 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x18) = 0;
      if (uVar25 == 0) break;
      lVar23 = lVar23 + 0x30;
    }
  }
  else if (uVar43 != 0) {
                    /* try { // try from 00bad398 to 00bad3a3 has its CatchHandler @ 00bae24c */
    btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>::reserve(abStack_120,uVar43);
    lVar23 = 0;
    do {
      puVar12 = (undefined8 *)(local_110 + lVar23);
      puVar12[1] = CONCAT44(uStack_c4,uStack_c8);
      *puVar12 = CONCAT44(uStack_cc,local_d0);
                    /* try { // try from 00bad3cc to 00bad3d3 has its CatchHandler @ 00bae298 */
      btAlignedObjectArray<int>::btAlignedObjectArray
                ((btAlignedObjectArray<int> *)(puVar12 + 2),(btAlignedObjectArray *)&local_c0);
      lVar23 = lVar23 + 0x30;
    } while (uVar30 * 0x30 - lVar23 != 0);
  }
  local_11c = uVar43;
  if ((local_b0 != (void *)0x0) && ((char)local_a8 != '\0')) {
                    /* try { // try from 00bad3f4 to 00bad3f7 has its CatchHandler @ 00bae25c */
    btAlignedFreeInternal(local_b0);
  }
  if ((int)uVar43 < 1) {
    local_c0 = (void *)0x0;
    uStack_cc = 0;
    uStack_c8 = 0;
  }
  else {
    uVar29 = 0;
    do {
      lVar23 = local_110;
      piVar15 = (int *)(*(long *)(param_1 + 0x30) +
                       (long)*(int *)(*(long *)(param_1 + 0x50) + uVar29 * 4) * 0xc);
      lVar27 = local_110 + uVar29 * 0x30;
      iVar24 = piVar15[2];
      puVar28 = (uint *)(lVar27 + 0x18);
      piVar13 = piVar15 + (long)piVar15[1] * 3;
      iVar5 = *piVar13;
      pfVar2 = (float *)(*(long *)(param_1 + 0x10) + (long)piVar13[2] * 0x10);
      puVar26 = (uint *)(lVar27 + 0x14);
      uVar25 = *puVar26;
      fVar42 = *pfVar2;
      fVar44 = pfVar2[1];
      fVar45 = pfVar2[2];
      if (uVar25 == *puVar28) {
        uVar22 = uVar25 << 1;
        if (uVar25 == 0) {
          uVar22 = 1;
        }
        if ((int)uVar25 < (int)uVar22) {
          if (uVar22 == 0) {
            local_1b0 = (void *)0x0;
          }
          else {
                    /* try { // try from 00bad4a4 to 00bad57f has its CatchHandler @ 00bae278 */
            local_1b0 = (void *)btAlignedAllocInternal
                                          (-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 |
                                           (ulong)uVar22 << 2,0x10);
            uVar25 = *puVar26;
          }
          ppvVar31 = (void **)(lVar23 + uVar29 * 0x30 + 0x20);
          pvVar9 = *ppvVar31;
          if ((int)uVar25 < 1) {
            if (pvVar9 != (void *)0x0) goto LAB_00bad570;
          }
          else {
            uVar11 = (ulong)uVar25;
            if ((uVar25 < 8) ||
               ((local_1b0 < (void *)((long)pvVar9 + uVar11 * 4) &&
                (pvVar9 < (void *)((long)local_1b0 + uVar11 * 4))))) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar11 & 0xfffffff8;
              puVar12 = (undefined8 *)((long)local_1b0 + 0x10);
              puVar14 = (undefined8 *)((long)pvVar9 + 0x10);
              uVar21 = uVar16;
              do {
                puVar4 = puVar14 + -1;
                uVar34 = puVar14[-2];
                uVar37 = puVar14[1];
                uVar35 = *puVar14;
                puVar14 = puVar14 + 4;
                uVar21 = uVar21 - 8;
                puVar12[-1] = *puVar4;
                puVar12[-2] = uVar34;
                puVar12[1] = uVar37;
                *puVar12 = uVar35;
                puVar12 = puVar12 + 4;
              } while (uVar21 != 0);
              if (uVar16 == uVar11) goto LAB_00bad570;
            }
            lVar27 = uVar11 - uVar16;
            puVar17 = (undefined4 *)((long)pvVar9 + uVar16 * 4);
            puVar19 = (undefined4 *)((long)local_1b0 + uVar16 * 4);
            do {
              lVar27 = lVar27 + -1;
              *puVar19 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar27 != 0);
LAB_00bad570:
            if (*(char *)(lVar23 + uVar29 * 0x30 + 0x28) != '\0') {
              btAlignedFreeInternal(pvVar9);
            }
          }
          *puVar28 = uVar22;
          *ppvVar31 = local_1b0;
          *(undefined *)(lVar23 + uVar29 * 0x30 + 0x28) = 1;
          uVar25 = *puVar26;
        }
      }
      *(int *)(*(long *)(lVar23 + uVar29 * 0x30 + 0x20) + (long)(int)uVar25 * 4) = iVar24;
      piVar13 = piVar13 + (long)iVar5 * 3;
      *puVar26 = *puVar26 + 1;
      *(undefined4 *)(local_110 + uVar29 * 0x30 + 0xc) = 0x7f7fffff;
      if (piVar13 != piVar15) {
        bVar1 = false;
        do {
          lVar23 = local_110;
          iVar24 = piVar13[2];
          if (bVar1) {
LAB_00bad740:
            bVar1 = true;
          }
          else {
            pfVar2 = (float *)(*(long *)(param_1 + 0x10) +
                              (long)piVar13[(long)piVar13[1] * 3 + 2] * 0x10);
            pfVar3 = (float *)(*(long *)(param_1 + 0x10) + (long)iVar24 * 0x10);
            fVar39 = (float)NEON_fmadd(pfVar2[2] - fVar45,*pfVar3 - fVar42,
                                       (pfVar3[2] - fVar45) * -(*pfVar2 - fVar42));
            fVar32 = (float)NEON_fmadd(pfVar2[1] - fVar44,pfVar3[2] - fVar45,
                                       (pfVar3[1] - fVar44) * -(pfVar2[2] - fVar45));
            fVar36 = (float)NEON_fmadd(*pfVar2 - fVar42,pfVar3[1] - fVar44,
                                       (*pfVar3 - fVar42) * -(pfVar2[1] - fVar44));
            uVar40 = NEON_fmadd(fVar32,fVar32,fVar39 * fVar39);
            fVar41 = (float)NEON_fmadd(fVar36,fVar36,uVar40);
            if (1e-05 < fVar41) {
              pfVar2 = (float *)(local_110 + uVar29 * 0x30);
              pfVar2[3] = 0.0;
              fVar41 = 1.0 / SQRT(fVar41);
              *pfVar2 = fVar32 * fVar41;
              pfVar2[1] = fVar39 * fVar41;
              pfVar2[2] = fVar36 * fVar41;
              fVar32 = (float)NEON_fmadd(fVar42,fVar32 * fVar41,fVar44 * fVar39 * fVar41);
              uVar40 = NEON_fnmadd(fVar45,fVar36 * fVar41,-fVar32);
              *(undefined4 *)(local_110 + uVar29 * 0x30 + 0xc) = uVar40;
              iVar24 = piVar13[2];
              goto LAB_00bad740;
            }
            bVar1 = false;
          }
          lVar27 = local_110 + uVar29 * 0x30;
          puVar28 = (uint *)(lVar27 + 0x18);
          puVar26 = (uint *)(lVar27 + 0x14);
          uVar25 = *puVar26;
          if (uVar25 == *puVar28) {
            uVar22 = uVar25 << 1;
            if (uVar25 == 0) {
              uVar22 = 1;
            }
            if ((int)uVar25 < (int)uVar22) {
              if (uVar22 == 0) {
                pvVar9 = (void *)0x0;
              }
              else {
                    /* try { // try from 00bad788 to 00bad84f has its CatchHandler @ 00bae2bc */
                pvVar9 = (void *)btAlignedAllocInternal
                                           (-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 |
                                            (ulong)uVar22 << 2,0x10);
                uVar25 = *puVar26;
              }
              ppvVar31 = (void **)(lVar23 + uVar29 * 0x30 + 0x20);
              pvVar10 = *ppvVar31;
              if ((int)uVar25 < 1) {
                if (pvVar10 != (void *)0x0) goto LAB_00bad840;
              }
              else {
                uVar11 = (ulong)uVar25;
                if ((uVar25 < 8) ||
                   ((pvVar9 < (void *)((long)pvVar10 + uVar11 * 4) &&
                    (pvVar10 < (void *)((long)pvVar9 + uVar11 * 4))))) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = uVar11 & 0xfffffff8;
                  puVar12 = (undefined8 *)((long)pvVar9 + 0x10);
                  puVar14 = (undefined8 *)((long)pvVar10 + 0x10);
                  uVar21 = uVar16;
                  do {
                    puVar4 = puVar14 + -1;
                    uVar34 = puVar14[-2];
                    uVar37 = puVar14[1];
                    uVar35 = *puVar14;
                    puVar14 = puVar14 + 4;
                    uVar21 = uVar21 - 8;
                    puVar12[-1] = *puVar4;
                    puVar12[-2] = uVar34;
                    puVar12[1] = uVar37;
                    *puVar12 = uVar35;
                    puVar12 = puVar12 + 4;
                  } while (uVar21 != 0);
                  if (uVar16 == uVar11) goto LAB_00bad840;
                }
                lVar27 = uVar11 - uVar16;
                puVar17 = (undefined4 *)((long)pvVar10 + uVar16 * 4);
                puVar19 = (undefined4 *)((long)pvVar9 + uVar16 * 4);
                do {
                  lVar27 = lVar27 + -1;
                  *puVar19 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar19 = puVar19 + 1;
                } while (lVar27 != 0);
LAB_00bad840:
                if (*(char *)(lVar23 + uVar29 * 0x30 + 0x28) != '\0') {
                  btAlignedFreeInternal(pvVar10);
                }
              }
              *ppvVar31 = pvVar9;
              uVar25 = *puVar26;
              *puVar28 = uVar22;
              *(undefined *)(lVar23 + uVar29 * 0x30 + 0x28) = 1;
            }
          }
          *(int *)(*(long *)(lVar23 + uVar29 * 0x30 + 0x20) + (long)(int)uVar25 * 4) = iVar24;
          *puVar26 = *puVar26 + 1;
          piVar13 = piVar13 + (long)piVar13[1] * 3 + (long)piVar13[(long)piVar13[1] * 3] * 3;
        } while (piVar13 != piVar15);
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar30);
    local_c0 = (void *)0x0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_b8._0_1_ = 1;
    if (0 < (int)uVar43) {
                    /* try { // try from 00bad870 to 00bad877 has its CatchHandler @ 00bae244 */
      local_c0 = (void *)btAlignedAllocInternal(uVar30 << 2,0x10);
      uVar25 = 0;
      uVar22 = 0;
      uVar8 = uVar43;
      uStack_c8 = uVar43;
      pvVar9 = local_c0;
      if (uVar43 != 0) goto LAB_00bad994;
      do {
        uStack_b8._0_1_ = '\x01';
        uVar22 = (uint)uVar30;
        uVar6 = uVar22 << 1;
        if (uVar22 == 0) {
          uVar6 = 1;
        }
        uVar8 = uStack_c8;
        pvVar9 = local_c0;
        if ((int)uVar22 < (int)uVar6) {
          if (uVar6 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
                    /* try { // try from 00bad8c8 to 00bad983 has its CatchHandler @ 00bae268 */
            pvVar9 = (void *)btAlignedAllocInternal
                                       (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar6 << 2,0x10);
          }
          uVar8 = uVar6;
          if ((int)uVar22 < 1) {
            uVar22 = uStack_cc;
            if (local_c0 == (void *)0x0) goto LAB_00bad994;
          }
          else {
            if ((uVar22 < 8) ||
               ((pvVar9 < (void *)((long)local_c0 + uVar30 * 4) &&
                (local_c0 < (void *)((long)pvVar9 + uVar30 * 4))))) {
              uVar29 = 0;
            }
            else {
              uVar29 = uVar30 & 0xfffffff8;
              puVar12 = (undefined8 *)((long)pvVar9 + 0x10);
              puVar14 = (undefined8 *)((long)local_c0 + 0x10);
              uVar11 = uVar29;
              do {
                puVar4 = puVar14 + -1;
                uVar34 = puVar14[-2];
                uVar37 = puVar14[1];
                uVar35 = *puVar14;
                puVar14 = puVar14 + 4;
                uVar11 = uVar11 - 8;
                puVar12[-1] = *puVar4;
                puVar12[-2] = uVar34;
                puVar12[1] = uVar37;
                *puVar12 = uVar35;
                puVar12 = puVar12 + 4;
              } while (uVar11 != 0);
              if (uVar29 == uVar30) goto LAB_00bad978;
            }
            lVar23 = uVar30 - uVar29;
            puVar17 = (undefined4 *)((long)local_c0 + uVar29 * 4);
            puVar19 = (undefined4 *)((long)pvVar9 + uVar29 * 4);
            do {
              lVar23 = lVar23 + -1;
              *puVar19 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar23 != 0);
          }
LAB_00bad978:
          uVar22 = uStack_cc;
          if ((char)uStack_b8 != '\0') {
            btAlignedFreeInternal(local_c0);
            uVar22 = uStack_cc;
          }
        }
LAB_00bad994:
        do {
          local_c0 = pvVar9;
          uStack_c8 = uVar8;
          *(uint *)((long)local_c0 + (long)(int)uVar22 * 4) = uVar25;
          uVar25 = uVar25 + 1;
          uStack_cc = uStack_cc + 1;
          if (uVar25 == uVar43) goto LAB_00bada28;
          uVar30 = (ulong)uStack_c8;
          uVar22 = uStack_cc;
          uVar8 = uStack_c8;
          pvVar9 = local_c0;
        } while (uStack_cc != uStack_c8);
      } while( true );
    }
  }
LAB_00bada28:
  uStack_b8._0_1_ = '\x01';
  local_130 = (void *)0x0;
  local_13c = 0;
  local_138 = 0;
  uVar43 = *(uint *)(param_1 + 4);
  local_128 = '\x01';
  if (0 < (int)uVar43) {
                    /* try { // try from 00bada48 to 00bada53 has its CatchHandler @ 00bae260 */
    local_130 = (void *)btAlignedAllocInternal((ulong)uVar43,0x10);
    local_128 = '\x01';
    local_138 = uVar43;
    memset(local_130,0,(ulong)uVar43);
  }
  local_148 = '\x01';
  local_150 = (int *)0x0;
  local_15c = 0;
  local_158 = 0;
  local_13c = uVar43;
  if ((int)uStack_cc < 1) {
LAB_00bae15c:
    uVar30 = (ulong)*(uint *)(param_1 + 4);
    if (0 < (int)*(uint *)(param_1 + 4)) {
      uVar29 = uVar30 + 1;
      do {
        uVar11 = (ulong)((int)uVar29 - 2);
        if (*(char *)((long)local_130 + uVar11) == '\0') {
          uVar43 = (int)uVar30 - 1;
          lVar27 = *(long *)(param_1 + 0x10);
          uVar30 = -(ulong)(uVar43 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar43 << 4;
          lVar23 = uVar11 * 0x10;
          puVar12 = (undefined8 *)(lVar27 + uVar30);
          uVar34 = *puVar12;
          puVar14 = (undefined8 *)(lVar27 + lVar23);
          uVar37 = puVar14[1];
          uVar35 = *puVar14;
          puVar14 = (undefined8 *)(lVar27 + lVar23);
          puVar14[1] = puVar12[1];
          *puVar14 = uVar34;
          puVar12 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar30);
          puVar12[1] = uVar37;
          *puVar12 = uVar35;
          uVar30 = (ulong)(*(int *)(param_1 + 4) - 1U);
          *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - 1U;
        }
        uVar29 = uVar29 - 1;
      } while (1 < uVar29);
    }
    if ((local_150 != (int *)0x0) && (local_148 != '\0')) {
                    /* try { // try from 00bae1d0 to 00bae1d3 has its CatchHandler @ 00bae258 */
      btAlignedFreeInternal(local_150);
    }
    if ((local_130 != (void *)0x0) && (local_128 != '\0')) {
                    /* try { // try from 00bae1e4 to 00bae1e7 has its CatchHandler @ 00bae254 */
      btAlignedFreeInternal(local_130);
    }
    if ((local_c0 != (void *)0x0) && ((char)uStack_b8 != '\0')) {
                    /* try { // try from 00bae1f8 to 00bae1fb has its CatchHandler @ 00bae250 */
      btAlignedFreeInternal(local_c0);
    }
    btAlignedObjectArray<Bt2PhysicsCookingUtil::ConvexFace>::~btAlignedObjectArray(abStack_120);
    if (*(long *)(lVar7 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00badb20:
  uStack_cc = uStack_cc - 1;
  local_15c = 0;
  iVar24 = *(int *)((long)local_c0 + (ulong)uStack_cc * 4);
  if (local_158 == 0) goto LAB_00badaec;
  do {
    lVar23 = local_110;
    *local_150 = iVar24;
    lVar27 = (long)iVar24;
    local_15c = local_15c + 1;
    if (*(float *)(local_110 + (long)iVar24 * 0x30 + 0xc) == 3.402823e+38) {
      uVar43 = *(uint *)(local_110 + lVar27 * 0x30 + 0x14);
      uVar30 = (ulong)uVar43;
      if (0 < (int)uVar43) {
        lVar23 = *(long *)(local_110 + lVar27 * 0x30 + 0x20);
        if (uVar43 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar30 & 0xfffffffe;
          lVar27 = lVar23 + 4;
          uVar29 = uVar11;
          do {
            piVar15 = (int *)(lVar27 + -4);
            iVar24 = *(int *)(lVar27 + 4);
            lVar27 = lVar27 + 8;
            uVar29 = uVar29 - 2;
            *(undefined *)((long)local_130 + (long)*piVar15) = 1;
            *(undefined *)((long)local_130 + (long)iVar24) = 1;
          } while (uVar29 != 0);
          if (uVar11 == uVar30) goto LAB_00bae150;
        }
        lVar27 = uVar30 - uVar11;
        piVar15 = (int *)(lVar23 + uVar11 * 4);
        do {
          lVar27 = lVar27 + -1;
          *(undefined *)((long)local_130 + (long)*piVar15) = 1;
          piVar15 = piVar15 + 1;
        } while (lVar27 != 0);
      }
    }
    else {
      puVar12 = (undefined8 *)(local_110 + lVar27 * 0x30);
      uVar40 = *(undefined4 *)puVar12;
      fVar42 = *(float *)((long)puVar12 + 4);
      uVar34 = *puVar12;
      uVar43 = *(uint *)(puVar12 + 1);
      uVar30 = (ulong)uStack_cc;
      if (0 < (int)uStack_cc) {
        do {
          uVar25 = local_15c;
          uVar29 = uVar30 - 1;
          iVar24 = *(int *)((long)local_c0 + (uVar29 & 0xffffffff) * 4);
          puVar17 = (undefined4 *)(local_110 + (long)iVar24 * 0x30);
          uVar33 = NEON_fmadd(uVar40,*puVar17,fVar42 * (float)puVar17[1]);
          fVar44 = (float)NEON_fmadd(uVar43,puVar17[2],uVar33);
          if (0.999 < fVar44) {
            uVar11 = (ulong)local_15c;
            if (local_15c == local_158) {
              uVar22 = local_15c << 1;
              if (local_15c == 0) {
                uVar22 = 1;
              }
              if ((int)local_15c < (int)uVar22) {
                if (uVar22 == 0) {
                  piVar15 = (int *)0x0;
                }
                else {
                    /* try { // try from 00badbf4 to 00badca3 has its CatchHandler @ 00bae2b4 */
                  piVar15 = (int *)btAlignedAllocInternal
                                             (-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 |
                                              (ulong)uVar22 << 2,0x10);
                }
                if ((int)uVar25 < 1) {
                  if (local_150 != (int *)0x0) goto LAB_00badc98;
                }
                else {
                  if ((uVar25 < 8) ||
                     ((piVar15 < local_150 + uVar11 && (local_150 < piVar15 + uVar11)))) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = uVar11 & 0xfffffff8;
                    puVar12 = (undefined8 *)(piVar15 + 4);
                    puVar14 = (undefined8 *)(local_150 + 4);
                    uVar21 = uVar16;
                    do {
                      puVar4 = puVar14 + -1;
                      uVar35 = puVar14[-2];
                      uVar38 = puVar14[1];
                      uVar37 = *puVar14;
                      puVar14 = puVar14 + 4;
                      uVar21 = uVar21 - 8;
                      puVar12[-1] = *puVar4;
                      puVar12[-2] = uVar35;
                      puVar12[1] = uVar38;
                      *puVar12 = uVar37;
                      puVar12 = puVar12 + 4;
                    } while (uVar21 != 0);
                    if (uVar16 == uVar11) goto LAB_00badc98;
                  }
                  lVar18 = uVar11 - uVar16;
                  piVar13 = local_150 + uVar16;
                  piVar20 = piVar15 + uVar16;
                  do {
                    lVar18 = lVar18 + -1;
                    *piVar20 = *piVar13;
                    piVar13 = piVar13 + 1;
                    piVar20 = piVar20 + 1;
                  } while (lVar18 != 0);
LAB_00badc98:
                  if (local_148 != '\0') {
                    btAlignedFreeInternal(local_150);
                  }
                }
                local_148 = '\x01';
                local_158 = uVar22;
                local_150 = piVar15;
              }
            }
            lVar18 = (uVar29 & 0xffffffff) * 4;
            local_150[(int)local_15c] = iVar24;
            local_15c = local_15c + 1;
            uVar33 = *(undefined4 *)((long)local_c0 + lVar18);
            *(undefined4 *)((long)local_c0 + lVar18) =
                 *(undefined4 *)((long)local_c0 + (long)(int)uStack_cc * 4 + -4);
            *(undefined4 *)((long)local_c0 + (long)(int)uStack_cc * 4 + -4) = uVar33;
            uStack_cc = uStack_cc - 1;
          }
          bVar1 = 1 < (long)uVar30;
          uVar30 = uVar29;
        } while (bVar1);
      }
      local_170 = (void *)0x0;
      local_17c = 0;
      local_178 = 0;
      local_e0 = 0;
      local_d8 = 0;
      if ((int)local_15c < 2) {
        local_d8 = (ulong)uVar43;
        lVar23 = lVar23 + lVar27 * 0x30;
        piVar15 = (int *)(lVar23 + 0x14);
        local_e0 = uVar34;
        if (0 < *piVar15) {
          lVar27 = 0;
          do {
            local_168 = '\x01';
            iVar24 = *(int *)(*(long *)(lVar23 + 0x20) + lVar27 * 4);
            puVar12 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar24 * 0x10);
            uVar35 = puVar12[1];
            uVar34 = *puVar12;
            uStack_f8 = (undefined4)uVar35;
            uStack_f4 = (undefined4)((ulong)uVar35 >> 0x20);
            local_100 = (undefined4)uVar34;
            uStack_fc = (uint)((ulong)uVar34 >> 0x20);
            uVar43 = local_17c;
            uVar25 = local_178;
            pvVar9 = local_170;
            if (local_17c == local_178) {
              uVar22 = local_178 << 1;
              if (local_178 == 0) {
                uVar22 = 1;
              }
              uVar43 = local_178;
              if ((int)local_178 < (int)uVar22) {
                if (uVar22 == 0) {
                  pvVar9 = (void *)0x0;
                  uVar43 = local_178;
                }
                else {
                    /* try { // try from 00badf58 to 00badfcb has its CatchHandler @ 00bae2ac */
                  pvVar9 = (void *)btAlignedAllocInternal((long)(int)uVar22 * 0x18,0x10);
                  uVar43 = local_17c;
                }
                if (0 < (int)uVar43) {
                  lVar18 = 0;
                  do {
                    puVar12 = (undefined8 *)((long)pvVar9 + lVar18);
                    puVar14 = (undefined8 *)((long)local_170 + lVar18);
                    lVar18 = lVar18 + 0x18;
                    uVar35 = puVar14[1];
                    uVar34 = *puVar14;
                    puVar12[2] = puVar14[2];
                    puVar12[1] = uVar35;
                    *puVar12 = uVar34;
                  } while ((ulong)uVar43 * 0x18 - lVar18 != 0);
                }
                uVar43 = local_17c;
                uVar25 = uVar22;
                if ((local_170 != (void *)0x0) && (local_168 != '\0')) {
                  btAlignedFreeInternal(local_170);
                  uVar43 = local_17c;
                }
              }
            }
            local_170 = pvVar9;
            local_178 = uVar25;
            lVar27 = lVar27 + 1;
            puVar12 = (undefined8 *)((long)local_170 + (long)(int)uVar43 * 0x18);
            puVar12[1] = CONCAT44(uStack_f4,uStack_f8);
            *puVar12 = CONCAT44(uStack_fc,local_100);
            *(undefined4 *)(puVar12 + 2) = local_f0._0_4_;
            *(int *)((long)puVar12 + 0x14) = iVar24;
            local_17c = local_17c + 1;
          } while (lVar27 < *piVar15);
        }
      }
      else {
        fVar42 = 0.0;
        fVar44 = 0.0;
        fVar45 = 0.0;
        uVar43 = 0;
        lVar23 = 0;
        uVar25 = local_15c;
        do {
          puVar12 = (undefined8 *)(local_110 + (long)local_150[lVar23] * 0x30);
          iVar24 = *(int *)((long)puVar12 + 0x14);
          fVar32 = *(float *)(puVar12 + 1);
          fVar42 = (float)*puVar12 + fVar42;
          fVar44 = (float)((ulong)*puVar12 >> 0x20) + fVar44;
          if (0 < iVar24) {
            lVar27 = 0;
            do {
              local_168 = '\x01';
              iVar5 = *(int *)(puVar12[4] + lVar27 * 4);
              if (0 < (int)uVar43) {
                uVar30 = (ulong)uVar43;
                piVar15 = (int *)((long)local_170 + 0x14);
                do {
                  if (*piVar15 == iVar5) goto LAB_00baddd4;
                  piVar15 = piVar15 + 6;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
              puVar14 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar5 * 0x10);
              uVar35 = puVar14[1];
              uVar34 = *puVar14;
              uStack_f8 = (undefined4)uVar35;
              uStack_f4 = (undefined4)((ulong)uVar35 >> 0x20);
              local_100 = (undefined4)uVar34;
              uStack_fc = (uint)((ulong)uVar34 >> 0x20);
              uVar25 = local_178;
              pvVar9 = local_170;
              if (uVar43 == local_178) {
                uVar22 = uVar43 << 1;
                if (uVar43 == 0) {
                  uVar22 = 1;
                }
                if ((int)uVar43 < (int)uVar22) {
                  if (uVar22 == 0) {
                    pvVar9 = (void *)0x0;
                  }
                  else {
                    /* try { // try from 00bade4c to 00badeb7 has its CatchHandler @ 00bae2c4 */
                    pvVar9 = (void *)btAlignedAllocInternal((long)(int)uVar22 * 0x18,0x10);
                    uVar43 = local_17c;
                  }
                  if (0 < (int)uVar43) {
                    lVar18 = 0;
                    do {
                      puVar14 = (undefined8 *)((long)pvVar9 + lVar18);
                      puVar4 = (undefined8 *)((long)local_170 + lVar18);
                      lVar18 = lVar18 + 0x18;
                      uVar35 = puVar4[1];
                      uVar34 = *puVar4;
                      puVar14[2] = puVar4[2];
                      puVar14[1] = uVar35;
                      *puVar14 = uVar34;
                    } while ((ulong)uVar43 * 0x18 - lVar18 != 0);
                  }
                  uVar43 = local_17c;
                  uVar25 = uVar22;
                  if ((local_170 != (void *)0x0) && (local_168 != '\0')) {
                    btAlignedFreeInternal(local_170);
                    uVar43 = local_17c;
                  }
                }
              }
              local_170 = pvVar9;
              local_178 = uVar25;
              puVar14 = (undefined8 *)((long)local_170 + (long)(int)uVar43 * 0x18);
              puVar14[1] = CONCAT44(uStack_f4,uStack_f8);
              *puVar14 = CONCAT44(uStack_fc,local_100);
              *(undefined4 *)(puVar14 + 2) = local_f0._0_4_;
              *(int *)((long)puVar14 + 0x14) = iVar5;
              uVar43 = local_17c + 1;
              iVar24 = *(int *)((long)puVar12 + 0x14);
              local_17c = uVar43;
LAB_00baddd4:
              lVar27 = lVar27 + 1;
              uVar25 = local_15c;
            } while (lVar27 < iVar24);
          }
          fVar45 = fVar32 + fVar45;
          lVar23 = lVar23 + 1;
        } while (lVar23 < (int)uVar25);
        fVar32 = (float)NEON_fmadd(fVar45,fVar45,fVar44 * fVar44 + fVar42 * fVar42);
        fVar32 = 1.0 / SQRT(fVar32);
        local_d8 = CONCAT44(local_d8._4_4_,fVar45 * fVar32);
        local_e0 = CONCAT44(fVar44 * fVar32,fVar42 * fVar32);
      }
      local_168 = '\x01';
      local_e8 = '\x01';
      local_f0 = (void *)0x0;
      uStack_fc = 0;
      uStack_f8 = 0;
                    /* try { // try from 00bae050 to 00bae05f has its CatchHandler @ 00bae288 */
      grahamScanConvexHull2D(abStack_180,(btAlignedObjectArray *)&local_100,(btVector3 *)&local_e0);
      uVar30 = (ulong)uStack_fc;
      if (0 < (int)uStack_fc) {
        if (uStack_fc == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar30 & 0xfffffffe;
          piVar15 = (int *)((long)local_f0 + 0x2c);
          uVar29 = uVar11;
          do {
            piVar13 = piVar15 + -6;
            uVar29 = uVar29 - 2;
            iVar24 = *piVar15;
            piVar15 = piVar15 + 0xc;
            *(undefined *)((long)local_130 + (long)*piVar13) = 1;
            *(undefined *)((long)local_130 + (long)iVar24) = 1;
          } while (uVar29 != 0);
          if (uVar11 == uVar30) goto joined_r0x00bae08c;
        }
        lVar23 = uVar30 - uVar11;
        piVar15 = (int *)((long)local_f0 + uVar11 * 0x18 + 0x14);
        do {
          lVar23 = lVar23 + -1;
          *(undefined *)((long)local_130 + (long)*piVar15) = 1;
          piVar15 = piVar15 + 6;
        } while (lVar23 != 0);
      }
joined_r0x00bae08c:
      if ((local_f0 != (void *)0x0) && (local_e8 != '\0')) {
                    /* try { // try from 00bae0f0 to 00bae0f3 has its CatchHandler @ 00bae280 */
        btAlignedFreeInternal(local_f0);
      }
      if ((local_170 != (void *)0x0) && (local_168 != '\0')) {
                    /* try { // try from 00bae104 to 00bae107 has its CatchHandler @ 00bae284 */
        btAlignedFreeInternal(local_170);
      }
    }
LAB_00bae150:
    uVar43 = uStack_cc;
    if ((int)uStack_cc < 1) goto LAB_00bae15c;
    if ((-1 < (int)local_15c) || (-1 < (int)local_158)) goto LAB_00badb20;
    if ((local_150 != (int *)0x0) && (local_148 != '\0')) {
                    /* try { // try from 00badacc to 00badacf has its CatchHandler @ 00bae270 */
      btAlignedFreeInternal(local_150);
    }
    uStack_cc = uVar43 - 1;
    local_148 = '\x01';
    local_150 = (int *)0x0;
    local_158 = 0;
    iVar24 = *(int *)((long)local_c0 + (ulong)uStack_cc * 4);
LAB_00badaec:
                    /* try { // try from 00badaec to 00badb0f has its CatchHandler @ 00bae2a8 */
    local_15c = 0;
    piVar15 = (int *)btAlignedAllocInternal(4,0x10);
    if ((local_150 != (int *)0x0) && (local_148 != '\0')) {
      btAlignedFreeInternal(local_150);
    }
    local_148 = '\x01';
    local_158 = 1;
    local_150 = piVar15;
  } while( true );
}


