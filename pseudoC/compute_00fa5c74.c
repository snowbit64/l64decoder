// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute
// Entry Point: 00fa5c74
// Size: 3272 bytes
// Signature: undefined __cdecl compute(void * param_1, bool param_2, int param_3, int param_4, float param_5, float param_6)


/* btConvexHullComputer::compute(void const*, bool, int, int, float, float) */

float btConvexHullComputer::compute
                (void *param_1,bool param_2,int param_3,int param_4,float param_5,float param_6)

{
  int iVar1;
  long lVar2;
  Vertex **ppVVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  Vertex **ppVVar7;
  ulong uVar8;
  ulong uVar9;
  int in_w4;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  Vertex **ppVVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  Vertex **ppVVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  int iVar26;
  long lVar27;
  Vertex *pVVar28;
  long *plVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  float fVar33;
  undefined4 uVar34;
  Vertex *pVVar35;
  Vertex *pVVar36;
  undefined8 uVar37;
  Vertex *pVVar38;
  undefined8 uVar39;
  undefined4 in_s2;
  undefined4 uVar40;
  undefined4 in_s3;
  undefined4 uVar41;
  ulong local_180;
  ulong local_170;
  Vertex **local_168;
  btConvexHullInternal abStack_160 [32];
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  long *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_dc;
  undefined4 uStack_d8;
  long local_d0;
  char local_c8;
  Vertex *local_a8;
  long local_a0;
  
  pVVar36 = (Vertex *)(ulong)(uint)param_6;
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  if (in_w4 < 1) {
    if ((*(long *)((long)param_1 + 0x10) != 0) && (*(char *)((long)param_1 + 0x18) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined4 *)((long)param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 8) = 0;
    *(undefined *)((long)param_1 + 0x18) = 1;
    if ((*(long *)((long)param_1 + 0x30) != 0) && (*(char *)((long)param_1 + 0x38) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined *)((long)param_1 + 0x38) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(undefined4 *)((long)param_1 + 0x28) = 0;
    if ((*(long *)((long)param_1 + 0x50) != 0) && (*(char *)((long)param_1 + 0x58) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    fVar33 = 0.0;
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    *(undefined4 *)((long)param_1 + 0x48) = 0;
    *(undefined *)((long)param_1 + 0x58) = 1;
    goto LAB_00fa68f8;
  }
  local_140 = (long *)0x0;
  uStack_138 = 0;
  local_c8 = '\x01';
  local_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0x100;
  local_120 = (long *)0x0;
  local_108 = 0x100;
  local_f8 = 0;
  uStack_f0 = 0;
  local_100 = (long *)0x0;
  local_d0 = 0;
  local_dc = 0;
  uStack_d8 = 0;
  local_e8 = 0x100;
  btConvexHullInternal::compute
            (abStack_160,(void *)(ulong)param_2,(bool)((byte)param_3 & 1),param_4,in_w4);
  fVar33 = 0.0;
  if (0.0 < param_5) {
    pVVar36 = (Vertex *)(ulong)(uint)param_6;
    fVar33 = (float)btConvexHullInternal::shrink(abStack_160,param_5,param_6);
    if (fVar33 < 0.0) {
      if ((*(long *)((long)param_1 + 0x10) != 0) && (*(char *)((long)param_1 + 0x18) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      *(undefined4 *)((long)param_1 + 4) = 0;
      *(undefined4 *)((long)param_1 + 8) = 0;
      *(undefined *)((long)param_1 + 0x18) = 1;
      if ((*(long *)((long)param_1 + 0x30) != 0) && (*(char *)((long)param_1 + 0x38) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined *)((long)param_1 + 0x38) = 1;
      *(undefined8 *)((long)param_1 + 0x30) = 0;
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      *(undefined4 *)((long)param_1 + 0x28) = 0;
      if ((*(long *)((long)param_1 + 0x50) != 0) && (*(char *)((long)param_1 + 0x58) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)((long)param_1 + 0x50) = 0;
      *(undefined4 *)((long)param_1 + 0x44) = 0;
      *(undefined4 *)((long)param_1 + 0x48) = 0;
      *(undefined *)((long)param_1 + 0x58) = 1;
      goto LAB_00fa6798;
    }
  }
  if ((*(int *)((long)param_1 + 4) < 0) && (*(int *)((long)param_1 + 8) < 0)) {
    if ((*(long *)((long)param_1 + 0x10) != 0) && (*(char *)((long)param_1 + 0x18) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined4 *)((long)param_1 + 8) = 0;
    *(undefined *)((long)param_1 + 0x18) = 1;
  }
  lVar27 = (long)*(int *)((long)param_1 + 0x24);
  *(undefined4 *)((long)param_1 + 4) = 0;
  if (*(int *)((long)param_1 + 0x24) < 0) {
    if (*(int *)((long)param_1 + 0x28) < 0) {
      if ((*(long *)((long)param_1 + 0x30) != 0) && (*(char *)((long)param_1 + 0x38) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)((long)param_1 + 0x30) = 0;
      *(undefined4 *)((long)param_1 + 0x28) = 0;
      *(undefined *)((long)param_1 + 0x38) = 1;
    }
    lVar12 = lVar27 * 0xc;
    do {
      bVar6 = lVar27 != -1;
      lVar27 = lVar27 + 1;
      puVar13 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + lVar12);
      lVar12 = lVar12 + 0xc;
      *(undefined4 *)(puVar13 + 1) = 0;
      *puVar13 = 0;
    } while (bVar6);
  }
  iVar26 = *(int *)((long)param_1 + 0x44);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (iVar26 < 0) {
    lVar27 = *(long *)((long)param_1 + 0x50);
    if (*(int *)((long)param_1 + 0x48) < 0) {
      if ((lVar27 != 0) && (*(char *)((long)param_1 + 0x58) != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      lVar27 = 0;
      *(undefined8 *)((long)param_1 + 0x50) = 0;
      *(undefined4 *)((long)param_1 + 0x48) = 0;
      *(undefined *)((long)param_1 + 0x58) = 1;
    }
    memset((void *)(lVar27 + (long)iVar26 * 4),0,(long)iVar26 * -4);
  }
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  if (*(int *)(local_a8 + 0x78) < 0) {
    *(undefined4 *)(local_a8 + 0x78) = 0;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    local_168 = (Vertex **)(*(code *)PTR_FUN_01048e38)(8,0x10);
    uVar32 = 1;
    local_170 = 0;
    *local_168 = local_a8;
    local_180 = 1;
    pVVar28 = local_a8;
    do {
      uVar34 = btConvexHullInternal::getCoordinates(abStack_160,pVVar28);
      uVar10 = *(uint *)((long)param_1 + 4);
      uVar5 = SUB84(pVVar36,0);
      uVar40 = in_s2;
      uVar41 = in_s3;
      if (uVar10 == *(uint *)((long)param_1 + 8)) {
        uVar31 = uVar10 << 1;
        if (uVar10 == 0) {
          uVar31 = 1;
        }
        if ((int)uVar10 < (int)uVar31) {
          if (uVar31 == 0) {
            lVar27 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar27 = (*(code *)PTR_FUN_01048e38)
                               (-(ulong)(uVar31 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar31 << 4,
                                0x10);
            uVar10 = *(uint *)((long)param_1 + 4);
          }
          if (0 < (int)uVar10) {
            lVar12 = 0;
            do {
              puVar13 = (undefined8 *)(*(long *)((long)param_1 + 0x10) + lVar12);
              uVar20 = *puVar13;
              ((undefined8 *)(lVar27 + lVar12))[1] = puVar13[1];
              *(undefined8 *)(lVar27 + lVar12) = uVar20;
              lVar12 = lVar12 + 0x10;
            } while ((ulong)uVar10 * 0x10 - lVar12 != 0);
          }
          if ((*(long *)((long)param_1 + 0x10) != 0) && (*(char *)((long)param_1 + 0x18) != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          uVar10 = *(uint *)((long)param_1 + 4);
          *(long *)((long)param_1 + 0x10) = lVar27;
          *(uint *)((long)param_1 + 8) = uVar31;
          *(undefined *)((long)param_1 + 0x18) = 1;
        }
      }
      puVar19 = (undefined4 *)(*(long *)((long)param_1 + 0x10) + (long)(int)uVar10 * 0x10);
      *puVar19 = uVar34;
      puVar19[1] = uVar5;
      puVar19[2] = in_s2;
      puVar19[3] = in_s3;
      *(int *)((long)param_1 + 4) = *(int *)((long)param_1 + 4) + 1;
      plVar25 = *(long **)(pVVar28 + 0x10);
      if (plVar25 != (long *)0x0) {
        plVar29 = plVar25;
        iVar26 = -1;
        iVar30 = -1;
        do {
          uVar10 = (uint)uVar32;
          iVar1 = *(int *)(plVar29 + 5);
          if (iVar1 < 0) {
            uVar31 = *(uint *)((long)param_1 + 0x24);
            uVar11 = uVar31;
            if (uVar31 == *(uint *)((long)param_1 + 0x28)) {
              iVar1 = uVar31 << 1;
              if (uVar31 == 0) {
                iVar1 = 1;
              }
              if ((int)uVar31 < iVar1) {
                if (iVar1 == 0) {
                  lVar27 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  lVar27 = (*(code *)PTR_FUN_01048e38)((long)iVar1 * 0xc,0x10);
                  uVar11 = *(uint *)((long)param_1 + 0x24);
                }
                if (0 < (int)uVar11) {
                  lVar12 = 0;
                  do {
                    puVar13 = (undefined8 *)(lVar27 + lVar12);
                    puVar23 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + lVar12);
                    lVar12 = lVar12 + 0xc;
                    uVar20 = *puVar23;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar23 + 1);
                    *puVar13 = uVar20;
                  } while ((ulong)uVar11 * 0xc - lVar12 != 0);
                }
                if ((*(long *)((long)param_1 + 0x30) != 0) &&
                   (*(char *)((long)param_1 + 0x38) != '\0')) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
                *(long *)((long)param_1 + 0x30) = lVar27;
                uVar11 = *(uint *)((long)param_1 + 0x24);
                *(int *)((long)param_1 + 0x28) = iVar1;
                *(undefined *)((long)param_1 + 0x38) = 1;
              }
            }
            puVar13 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + (long)(int)uVar11 * 0xc);
            *(undefined4 *)(puVar13 + 1) = 0;
            *puVar13 = 0;
            uVar11 = *(int *)((long)param_1 + 0x24) + 1;
            *(uint *)((long)param_1 + 0x24) = uVar11;
            if (uVar11 == *(uint *)((long)param_1 + 0x28)) {
              iVar1 = uVar11 * 2;
              if (uVar11 == 0) {
                iVar1 = 1;
              }
              if ((int)uVar11 < iVar1) {
                if (iVar1 == 0) {
                  lVar27 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  lVar27 = (*(code *)PTR_FUN_01048e38)((long)iVar1 * 0xc,0x10);
                  uVar11 = *(uint *)((long)param_1 + 0x24);
                }
                if (0 < (int)uVar11) {
                  lVar12 = 0;
                  do {
                    puVar13 = (undefined8 *)(lVar27 + lVar12);
                    puVar23 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + lVar12);
                    lVar12 = lVar12 + 0xc;
                    uVar20 = *puVar23;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar23 + 1);
                    *puVar13 = uVar20;
                  } while ((ulong)uVar11 * 0xc - lVar12 != 0);
                }
                if ((*(long *)((long)param_1 + 0x30) != 0) &&
                   (*(char *)((long)param_1 + 0x38) != '\0')) {
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)();
                }
                uVar11 = *(uint *)((long)param_1 + 0x24);
                *(long *)((long)param_1 + 0x30) = lVar27;
                *(int *)((long)param_1 + 0x28) = iVar1;
                *(undefined *)((long)param_1 + 0x38) = 1;
              }
            }
            iVar1 = uVar31 + 1;
            puVar13 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + (long)(int)uVar11 * 0xc);
            *(undefined4 *)(puVar13 + 1) = 0;
            *puVar13 = 0;
            lVar27 = *(long *)((long)param_1 + 0x30);
            *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
            *(uint *)(plVar29 + 5) = uVar31;
            *(int *)(plVar29[2] + 0x28) = iVar1;
            *(undefined4 *)(lVar27 + (long)(int)uVar31 * 0xc + 4) = 1;
            *(undefined4 *)(lVar27 + (long)iVar1 * 0xc + 4) = 0xffffffff;
            pVVar28 = (Vertex *)plVar29[3];
            uVar31 = *(uint *)(pVVar28 + 0x78);
            if ((int)uVar31 < 0) {
              *(uint *)(pVVar28 + 0x78) = uVar10;
              ppVVar7 = local_168;
              if (uVar10 == (uint)local_180) {
                uVar31 = uVar10 << 1;
                if (uVar10 == 0) {
                  uVar31 = 1;
                }
                uVar8 = (ulong)uVar31;
                local_180 = uVar32;
                if ((int)uVar10 < (int)uVar31) {
                  local_180 = uVar8;
                  if (uVar31 == 0) {
                    ppVVar7 = (Vertex **)0x0;
                    if (0 < (int)uVar10) goto LAB_00fa639c;
LAB_00fa6418:
                    if (local_168 == (Vertex **)0x0) goto LAB_00fa648c;
                  }
                  else {
                    gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    ppVVar7 = (Vertex **)
                              (*(code *)PTR_FUN_01048e38)
                                        (-(ulong)(uVar31 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3,
                                         0x10);
                    if ((int)uVar10 < 1) goto LAB_00fa6418;
LAB_00fa639c:
                    if ((uVar10 < 4) ||
                       ((ppVVar7 < local_168 + uVar32 && (local_168 < ppVVar7 + uVar32)))) {
                      uVar8 = 0;
LAB_00fa63cc:
                      lVar12 = uVar32 - uVar8;
                      ppVVar17 = local_168 + uVar8;
                      ppVVar21 = ppVVar7 + uVar8;
                      do {
                        lVar12 = lVar12 + -1;
                        *ppVVar21 = *ppVVar17;
                        ppVVar17 = ppVVar17 + 1;
                        ppVVar21 = ppVVar21 + 1;
                      } while (lVar12 != 0);
                    }
                    else {
                      uVar8 = uVar32 & 0xfffffffc;
                      ppVVar17 = local_168 + 2;
                      ppVVar21 = ppVVar7 + 2;
                      uVar9 = uVar8;
                      do {
                        ppVVar3 = ppVVar17 + -1;
                        pVVar35 = ppVVar17[-2];
                        pVVar38 = ppVVar17[1];
                        pVVar36 = *ppVVar17;
                        uVar9 = uVar9 - 4;
                        ppVVar17 = ppVVar17 + 4;
                        ppVVar21[-1] = *ppVVar3;
                        ppVVar21[-2] = pVVar35;
                        ppVVar21[1] = pVVar38;
                        *ppVVar21 = pVVar36;
                        ppVVar21 = ppVVar21 + 4;
                      } while (uVar9 != 0);
                      if (uVar8 != uVar32) goto LAB_00fa63cc;
                    }
                  }
                  gNumAlignedFree = gNumAlignedFree + 1;
                  (*(code *)PTR_FUN_01048e40)(local_168);
                }
              }
LAB_00fa648c:
              uVar32 = (ulong)(uVar10 + 1);
              ppVVar7[(int)uVar10] = pVVar28;
              uVar31 = uVar10;
              local_168 = ppVVar7;
            }
            *(uint *)(lVar27 + (long)(int)uVar31 * 0xc + 8) = uVar31;
            *(int *)(lVar27 + (long)iVar1 * 0xc + 8) = (int)local_170;
            iVar1 = *(int *)(plVar29 + 5);
          }
          iVar16 = iVar1;
          if (-1 < iVar26) {
            *(int *)(*(long *)((long)param_1 + 0x30) + (long)iVar1 * 0xc) = iVar26 - iVar1;
            iVar16 = iVar30;
          }
          plVar29 = (long *)*plVar29;
          iVar26 = iVar1;
          iVar30 = iVar16;
        } while (plVar29 != plVar25);
        *(int *)(*(long *)((long)param_1 + 0x30) + (long)iVar16 * 0xc) = iVar1 - iVar16;
      }
      local_170 = local_170 + 1;
      if ((long)(int)uVar32 <= (long)local_170) goto LAB_00fa65c4;
      pVVar28 = local_168[local_170];
      in_s2 = uVar40;
      in_s3 = uVar41;
    } while( true );
  }
  goto LAB_00fa6798;
LAB_00fa65c4:
  if ((int)local_170 != 0) {
    uVar32 = 0;
    do {
      plVar29 = *(long **)(local_168[uVar32] + 0x10);
      plVar25 = plVar29;
      if (plVar29 != (long *)0x0) {
        do {
          iVar26 = *(int *)(plVar25 + 5);
          if (-1 < iVar26) {
            uVar10 = *(uint *)((long)param_1 + 0x44);
            if (uVar10 == *(uint *)((long)param_1 + 0x48)) {
              uVar31 = uVar10 << 1;
              if (uVar10 == 0) {
                uVar31 = 1;
              }
              if ((int)uVar10 < (int)uVar31) {
                if (uVar31 == 0) {
                  uVar8 = 0;
                }
                else {
                  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                  uVar8 = (*(code *)PTR_FUN_01048e38)
                                    (-(ulong)(uVar31 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar31 << 2,0x10);
                  uVar10 = *(uint *)((long)param_1 + 0x44);
                }
                uVar9 = *(ulong *)((long)param_1 + 0x50);
                if ((int)uVar10 < 1) {
                  if (uVar9 != 0) goto LAB_00fa6704;
                }
                else {
                  uVar14 = (ulong)uVar10;
                  if ((uVar10 < 8) || ((uVar8 < uVar9 + uVar14 * 4 && (uVar9 < uVar8 + uVar14 * 4)))
                     ) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = uVar14 & 0xfffffff8;
                    puVar13 = (undefined8 *)(uVar9 + 0x10);
                    puVar23 = (undefined8 *)(uVar8 + 0x10);
                    uVar24 = uVar18;
                    do {
                      puVar4 = puVar13 + -1;
                      uVar20 = puVar13[-2];
                      uVar39 = puVar13[1];
                      uVar37 = *puVar13;
                      uVar24 = uVar24 - 8;
                      puVar13 = puVar13 + 4;
                      puVar23[-1] = *puVar4;
                      puVar23[-2] = uVar20;
                      puVar23[1] = uVar39;
                      *puVar23 = uVar37;
                      puVar23 = puVar23 + 4;
                    } while (uVar24 != 0);
                    if (uVar18 == uVar14) goto LAB_00fa6704;
                  }
                  lVar27 = uVar14 - uVar18;
                  puVar19 = (undefined4 *)(uVar9 + uVar18 * 4);
                  puVar22 = (undefined4 *)(uVar8 + uVar18 * 4);
                  do {
                    lVar27 = lVar27 + -1;
                    *puVar22 = *puVar19;
                    puVar19 = puVar19 + 1;
                    puVar22 = puVar22 + 1;
                  } while (lVar27 != 0);
LAB_00fa6704:
                  if (*(char *)((long)param_1 + 0x58) != '\0') {
                    gNumAlignedFree = gNumAlignedFree + 1;
                    (*(code *)PTR_FUN_01048e40)();
                  }
                }
                *(undefined *)((long)param_1 + 0x58) = 1;
                uVar10 = *(uint *)((long)param_1 + 0x44);
                *(ulong *)((long)param_1 + 0x50) = uVar8;
                *(uint *)((long)param_1 + 0x48) = uVar31;
                iVar26 = *(int *)(plVar25 + 5);
              }
            }
            *(int *)(*(long *)((long)param_1 + 0x50) + (long)(int)uVar10 * 4) = iVar26;
            *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
            plVar15 = plVar25;
            do {
              *(undefined4 *)(plVar15 + 5) = 0xffffffff;
              plVar15 = *(long **)(plVar15[2] + 8);
            } while (plVar15 != plVar25);
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != plVar29);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != (local_170 & 0xffffffff));
  }
  if (local_168 != (Vertex **)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
LAB_00fa6798:
  if ((local_d0 != 0) && (local_c8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  local_d0 = 0;
  local_dc = 0;
  uStack_d8 = 0;
  local_c8 = 1;
  plVar25 = local_100;
  while (plVar25 != (long *)0x0) {
    local_100 = (long *)plVar25[2];
    if (*plVar25 != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(plVar25);
    plVar25 = local_100;
  }
  local_100 = (long *)0x0;
  plVar25 = local_120;
  while (plVar25 != (long *)0x0) {
    local_120 = (long *)plVar25[2];
    if (*plVar25 != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(plVar25);
    plVar25 = local_120;
  }
  local_120 = (long *)0x0;
  plVar25 = local_140;
  while (local_140 = plVar25, plVar25 != (long *)0x0) {
    local_140 = (long *)plVar25[2];
    if (*plVar25 != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(plVar25);
    plVar25 = local_140;
  }
LAB_00fa68f8:
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar33;
}


