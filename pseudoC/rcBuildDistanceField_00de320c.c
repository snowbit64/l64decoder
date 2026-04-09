// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcBuildDistanceField
// Entry Point: 00de320c
// Size: 2256 bytes
// Signature: undefined __cdecl rcBuildDistanceField(rcContext * param_1, rcCompactHeightfield * param_2)


/* rcBuildDistanceField(rcContext*, rcCompactHeightfield&) */

bool rcBuildDistanceField(rcContext *param_1,rcCompactHeightfield *param_2)

{
  bool bVar1;
  undefined (*pauVar2) [16];
  long lVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  rcContext rVar9;
  char cVar10;
  undefined auVar11 [16];
  ushort uVar12;
  char cVar13;
  int iVar14;
  void *__s;
  void *pvVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ushort *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined (*pauVar24) [16];
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  int iVar36;
  ushort uVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x11);
  }
  if (*(void **)(param_2 + 0x50) != (void *)0x0) {
    rcFree(*(void **)(param_2 + 0x50));
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  __s = (void *)rcAlloc(*(int *)(param_2 + 8) << 1,1);
  if (__s == (void *)0x0) {
    rcContext::log((rcLogCategory)param_1,(char *)0x3,
                   "rcBuildDistanceField: Out of memory \'src\' (%d).");
    return false;
  }
  pvVar15 = (void *)rcAlloc(*(int *)(param_2 + 8) << 1,1);
  if (pvVar15 == (void *)0x0) {
    rcContext::log((rcLogCategory)param_1,(char *)0x3,
                   "rcBuildDistanceField: Out of memory \'dst\' (%d).",(ulong)*(uint *)(param_2 + 8)
                  );
    goto LAB_00de3aa8;
  }
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x12);
  }
  uVar6 = *(uint *)(param_2 + 4);
  uVar25 = (ulong)uVar6;
  uVar7 = *(uint *)(param_2 + 8);
  uVar33 = (ulong)uVar7;
  uVar18 = *(uint *)param_2;
  uVar34 = (ulong)uVar18;
  if (0 < (int)uVar7) {
    memset(__s,0xff,uVar33 << 1);
  }
  if ((0 < (int)uVar6) && (0 < (int)uVar18)) {
    uVar19 = 0;
    do {
      uVar23 = uVar19 + 1;
      uVar22 = 0;
      lVar27 = *(long *)(param_2 + 0x40);
      do {
        lVar26 = uVar22 + uVar19 * uVar34;
        uVar6 = *(uint *)(lVar27 + lVar26 * 4);
        if (uVar6 >> 0x18 != 0) {
          uVar30 = (ulong)uVar6 & 0xffffff;
          lVar31 = *(long *)(param_2 + 0x58);
          iVar29 = (int)uVar30;
          puVar16 = (uint *)(*(long *)(param_2 + 0x48) + uVar30 * 8 + 4);
          do {
            uVar8 = *puVar16;
            cVar10 = *(char *)(lVar31 + uVar30);
            if ((int)((ulong)uVar8 & 0x3f) == 0x3f) {
              cVar13 = false;
              uVar17 = (ulong)(uVar8 >> 6) & 0x3f;
              iVar14 = (int)uVar17;
            }
            else {
              cVar13 = cVar10 == *(char *)(lVar31 + ((ulong)*(uint *)(lVar27 + (lVar26 + -1) * 4) &
                                                    0xffffff) + ((ulong)uVar8 & 0x3f));
              uVar17 = (ulong)(uVar8 >> 6) & 0x3f;
              iVar14 = (int)uVar17;
            }
            if ((iVar14 != 0x3f) &&
               (cVar10 == *(char *)(lVar31 + ((ulong)*(uint *)(lVar27 + (uVar22 + uVar23 * uVar34) *
                                                                        4) & 0xffffff) + uVar17))) {
              cVar13 = cVar13 + '\x01';
            }
            uVar17 = (ulong)(uVar8 >> 0xc) & 0x3f;
            if ((int)uVar17 == 0x3f) {
              uVar17 = (ulong)(uVar8 >> 0x12) & 0x3f;
              if ((int)uVar17 == 0x3f) goto LAB_00de335c;
LAB_00de3414:
              if (cVar10 == *(char *)(lVar31 + ((ulong)*(uint *)(lVar27 + (uVar22 + (uVar19 - 1) *
                                                                                    uVar34) * 4) &
                                               0xffffff) + uVar17)) {
                cVar13 = cVar13 + '\x01';
              }
              if (cVar13 != '\x04') goto LAB_00de335c;
            }
            else {
              if (cVar10 == *(char *)(lVar31 + ((ulong)*(uint *)(lVar27 + (lVar26 + 1) * 4) &
                                               0xffffff) + uVar17)) {
                cVar13 = cVar13 + '\x01';
              }
              uVar17 = (ulong)(uVar8 >> 0x12) & 0x3f;
              if ((int)uVar17 != 0x3f) goto LAB_00de3414;
LAB_00de335c:
              *(undefined2 *)((long)__s + uVar30 * 2) = 0;
            }
            uVar30 = uVar30 + 1;
            puVar16 = puVar16 + 2;
          } while (uVar30 < iVar29 + (uVar6 >> 0x18));
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar34);
      uVar19 = uVar23;
    } while (uVar23 != uVar25);
    uVar19 = 0;
    do {
      uVar23 = 0;
      lVar26 = *(long *)(param_2 + 0x40);
      lVar27 = (uVar19 - 1) * uVar34;
      do {
        uVar6 = *(uint *)(lVar26 + (uVar23 + uVar19 * uVar34) * 4);
        if (uVar6 >> 0x18 != 0) {
          lVar28 = *(long *)(param_2 + 0x48);
          uVar22 = (ulong)uVar6 & 0xffffff;
          lVar31 = uVar23 + lVar27;
          iVar29 = (int)uVar22;
          puVar16 = (uint *)(lVar28 + uVar22 * 8 + 4);
          do {
            if ((int)((ulong)*puVar16 & 0x3f) != 0x3f) {
              lVar3 = ((ulong)*(uint *)(lVar26 + ((uVar23 - 1) + uVar19 * uVar34) * 4) & 0xffffff) +
                      ((ulong)*puVar16 & 0x3f);
              uVar37 = *(ushort *)((long)__s + uVar22 * 2);
              uVar8 = *(ushort *)((long)__s + lVar3 * 2) + 2;
              uVar35 = (uint)uVar37;
              if (uVar8 < uVar37) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
                uVar35 = uVar8;
              }
              uVar30 = (ulong)(*(uint *)(lVar28 + lVar3 * 8 + 4) >> 0x12) & 0x3f;
              if (((int)uVar30 != 0x3f) &&
                 (uVar8 = *(ushort *)
                           ((long)__s +
                           (((ulong)*(uint *)(lVar26 + ((uVar23 - 1) + lVar27) * 4) & 0xffffff) +
                           uVar30) * 2) + 3, uVar8 < (uVar35 & 0xffff))) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
              }
            }
            uVar30 = (ulong)(*puVar16 >> 0x12) & 0x3f;
            if ((int)uVar30 != 0x3f) {
              lVar3 = ((ulong)*(uint *)(lVar26 + lVar31 * 4) & 0xffffff) + uVar30;
              uVar37 = *(ushort *)((long)__s + uVar22 * 2);
              uVar8 = *(ushort *)((long)__s + lVar3 * 2) + 2;
              uVar35 = (uint)uVar37;
              if (uVar8 < uVar37) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
                uVar35 = uVar8;
              }
              uVar30 = (ulong)(*(uint *)(lVar28 + lVar3 * 8 + 4) >> 0xc) & 0x3f;
              if (((int)uVar30 != 0x3f) &&
                 (uVar8 = *(ushort *)
                           ((long)__s +
                           (((ulong)*(uint *)(lVar26 + (long)((int)lVar31 + 1) * 4) & 0xffffff) +
                           uVar30) * 2) + 3, uVar8 < (uVar35 & 0xffff))) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
              }
            }
            uVar22 = uVar22 + 1;
            puVar16 = puVar16 + 2;
          } while (uVar22 < iVar29 + (uVar6 >> 0x18));
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar34);
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar25);
    do {
      iVar29 = uVar18 * (int)uVar25;
      lVar27 = *(long *)(param_2 + 0x40);
      lVar26 = (uVar25 - 1) * uVar34;
      uVar19 = uVar34;
      do {
        uVar23 = uVar19 - 1;
        uVar6 = *(uint *)(lVar27 + (uVar23 + lVar26) * 4);
        if (uVar6 >> 0x18 != 0) {
          lVar31 = *(long *)(param_2 + 0x48);
          uVar22 = (ulong)uVar6 & 0xffffff;
          iVar14 = (int)uVar22;
          puVar16 = (uint *)(lVar31 + uVar22 * 8 + 4);
          do {
            uVar30 = (ulong)(*puVar16 >> 0xc) & 0x3f;
            if ((int)uVar30 != 0x3f) {
              lVar28 = ((ulong)*(uint *)(lVar27 + (uVar19 + lVar26) * 4) & 0xffffff) + uVar30;
              uVar37 = *(ushort *)((long)__s + uVar22 * 2);
              uVar8 = *(ushort *)((long)__s + lVar28 * 2) + 2;
              uVar35 = (uint)uVar37;
              if (uVar8 < uVar37) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
                uVar35 = uVar8;
              }
              uVar30 = (ulong)(*(uint *)(lVar31 + lVar28 * 8 + 4) >> 6) & 0x3f;
              if (((int)uVar30 != 0x3f) &&
                 (uVar8 = *(ushort *)
                           ((long)__s +
                           (((ulong)*(uint *)(lVar27 + (uVar19 + (long)iVar29) * 4) & 0xffffff) +
                           uVar30) * 2) + 3, uVar8 < (uVar35 & 0xffff))) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
              }
            }
            uVar30 = (ulong)(*puVar16 >> 6) & 0x3f;
            if ((int)uVar30 != 0x3f) {
              lVar28 = ((ulong)*(uint *)(lVar27 + (uVar23 + (long)iVar29) * 4) & 0xffffff) + uVar30;
              uVar37 = *(ushort *)((long)__s + uVar22 * 2);
              uVar8 = *(ushort *)((long)__s + lVar28 * 2) + 2;
              uVar35 = (uint)uVar37;
              if (uVar8 < uVar37) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
                uVar35 = uVar8;
              }
              uVar30 = (ulong)*(uint *)(lVar31 + lVar28 * 8 + 4) & 0x3f;
              if (((int)uVar30 != 0x3f) &&
                 (uVar8 = *(ushort *)
                           ((long)__s +
                           (((ulong)*(uint *)(lVar27 + (long)(iVar29 + -2 + (int)uVar19) * 4) &
                            0xffffff) + uVar30) * 2) + 3, uVar8 < (uVar35 & 0xffff))) {
                *(short *)((long)__s + uVar22 * 2) = (short)uVar8;
              }
            }
            uVar22 = uVar22 + 1;
            puVar16 = puVar16 + 2;
          } while (uVar22 < iVar14 + (uVar6 >> 0x18));
        }
        bVar1 = 1 < (long)uVar19;
        uVar19 = uVar23;
      } while (bVar1);
      bVar1 = 1 < (long)uVar25;
      uVar25 = uVar25 - 1;
    } while (bVar1);
  }
  if ((int)uVar7 < 1) {
    uVar37 = 0;
  }
  else {
    if (uVar7 < 0x10) {
      uVar37 = 0;
      uVar34 = 0;
    }
    else {
      uVar34 = uVar33 & 0xfffffff0;
      pauVar24 = (undefined (*) [16])((long)__s + 0x10);
      auVar38 = ZEXT816(0);
      auVar39 = ZEXT816(0);
      uVar25 = uVar34;
      do {
        pauVar2 = pauVar24 + -1;
        auVar11 = *pauVar24;
        pauVar24 = pauVar24 + 2;
        uVar25 = uVar25 - 0x10;
        auVar38 = NEON_umax(*pauVar2,auVar38,2);
        auVar39 = NEON_umax(auVar11,auVar39,2);
      } while (uVar25 != 0);
      auVar38 = NEON_umax(auVar38,auVar39,2);
      uVar37 = NEON_umaxv(auVar38,2);
      if (uVar34 == uVar33) goto LAB_00de37b8;
    }
    lVar27 = uVar33 - uVar34;
    puVar20 = (ushort *)((long)__s + uVar34 * 2);
    do {
      uVar12 = *puVar20;
      if (*puVar20 <= uVar37) {
        uVar12 = uVar37;
      }
      uVar37 = uVar12;
      lVar27 = lVar27 + -1;
      puVar20 = puVar20 + 1;
    } while (lVar27 != 0);
  }
LAB_00de37b8:
  *(ushort *)(param_2 + 0x18) = uVar37;
  if ((param_1[9] != (rcContext)0x0) &&
     ((**(code **)(*(long *)param_1 + 0x30))(param_1,0x12), param_1[9] != (rcContext)0x0)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x13);
  }
  uVar6 = *(uint *)(param_2 + 4);
  if ((0 < (int)uVar6) && (uVar25 = (ulong)*(uint *)param_2, 0 < (int)*(uint *)param_2)) {
    uVar33 = 0;
    do {
      uVar34 = uVar33 + 1;
      uVar19 = 0;
      lVar27 = uVar33 * uVar25;
      lVar28 = *(long *)(param_2 + 0x40);
      lVar26 = uVar34 * uVar25;
      lVar31 = (uVar33 - 1) * uVar25;
      do {
        uVar7 = *(uint *)(lVar28 + (uVar19 + lVar27) * 4);
        if (uVar7 >> 0x18 != 0) {
          lVar32 = *(long *)(param_2 + 0x48);
          uVar33 = (ulong)uVar7 & 0xffffff;
          lVar21 = uVar19 - 1;
          iVar29 = (int)uVar33;
          lVar3 = uVar19 + 1;
          puVar16 = (uint *)(lVar32 + uVar33 * 8 + 4);
          do {
            uVar37 = *(ushort *)((long)__s + uVar33 * 2);
            uVar18 = (uint)uVar37;
            if (2 < uVar18) {
              uVar8 = *puVar16;
              uVar35 = (uint)uVar37;
              if ((int)((ulong)uVar8 & 0x3f) == 0x3f) {
                iVar14 = (uint)uVar37 * 3;
                iVar36 = (uint)uVar37 << 1;
                uVar23 = (ulong)(uVar8 >> 6) & 0x3f;
                if ((int)uVar23 != 0x3f) goto LAB_00de3910;
LAB_00de39fc:
                iVar14 = iVar14 + iVar36;
                uVar23 = (ulong)(uVar8 >> 0xc) & 0x3f;
                if ((int)uVar23 == 0x3f) goto LAB_00de3a0c;
LAB_00de395c:
                lVar4 = ((ulong)*(uint *)(lVar28 + (lVar3 + lVar27) * 4) & 0xffffff) + uVar23;
                uVar23 = (ulong)(*(uint *)(lVar32 + lVar4 * 8 + 4) >> 0x12) & 0x3f;
                if ((int)uVar23 != 0x3f) {
                  uVar35 = (uint)*(ushort *)
                                  ((long)__s +
                                  (((ulong)*(uint *)(lVar28 + (lVar3 + lVar31) * 4) & 0xffffff) +
                                  uVar23) * 2);
                }
                iVar14 = iVar14 + (uint)*(ushort *)((long)__s + lVar4 * 2) + uVar35;
                uVar23 = (ulong)(uVar8 >> 0x12) & 0x3f;
                if ((int)uVar23 != 0x3f) goto LAB_00de3a1c;
LAB_00de38bc:
                iVar14 = iVar14 + iVar36;
              }
              else {
                lVar4 = ((ulong)*(uint *)(lVar28 + (lVar21 + lVar27) * 4) & 0xffffff) +
                        ((ulong)uVar8 & 0x3f);
                uVar23 = (ulong)(*(uint *)(lVar32 + lVar4 * 8 + 4) >> 6) & 0x3f;
                if ((int)uVar23 != 0x3f) {
                  uVar18 = (uint)*(ushort *)
                                  ((long)__s +
                                  (((ulong)*(uint *)(lVar28 + (lVar21 + lVar26) * 4) & 0xffffff) +
                                  uVar23) * 2);
                }
                iVar14 = (uint)*(ushort *)((long)__s + lVar4 * 2) + (uint)uVar37 + uVar18;
                iVar36 = (uint)uVar37 << 1;
                uVar23 = (ulong)(uVar8 >> 6) & 0x3f;
                if ((int)uVar23 == 0x3f) goto LAB_00de39fc;
LAB_00de3910:
                lVar4 = ((ulong)*(uint *)(lVar28 + (uVar19 + lVar26) * 4) & 0xffffff) + uVar23;
                uVar23 = (ulong)(*(uint *)(lVar32 + lVar4 * 8 + 4) >> 0xc) & 0x3f;
                uVar18 = uVar35;
                if ((int)uVar23 != 0x3f) {
                  uVar18 = (uint)*(ushort *)
                                  ((long)__s +
                                  (((ulong)*(uint *)(lVar28 + (lVar3 + lVar26) * 4) & 0xffffff) +
                                  uVar23) * 2);
                }
                iVar14 = iVar14 + (uint)*(ushort *)((long)__s + lVar4 * 2) + uVar18;
                uVar23 = (ulong)(uVar8 >> 0xc) & 0x3f;
                if ((int)uVar23 != 0x3f) goto LAB_00de395c;
LAB_00de3a0c:
                iVar14 = iVar14 + iVar36;
                uVar23 = (ulong)(uVar8 >> 0x12) & 0x3f;
                if ((int)uVar23 == 0x3f) goto LAB_00de38bc;
LAB_00de3a1c:
                lVar4 = ((ulong)*(uint *)(lVar28 + (uVar19 + lVar31) * 4) & 0xffffff) + uVar23;
                uVar23 = (ulong)*(uint *)(lVar32 + lVar4 * 8 + 4) & 0x3f;
                if ((int)uVar23 != 0x3f) {
                  uVar37 = *(ushort *)
                            ((long)__s +
                            (((ulong)*(uint *)(lVar28 + (lVar21 + lVar31) * 4) & 0xffffff) + uVar23)
                            * 2);
                }
                iVar14 = iVar14 + (uint)*(ushort *)((long)__s + lVar4 * 2) + (uint)uVar37;
              }
              uVar37 = (ushort)((iVar14 + 5U) / 9);
            }
            *(ushort *)((long)pvVar15 + uVar33 * 2) = uVar37;
            uVar33 = uVar33 + 1;
            puVar16 = puVar16 + 2;
          } while (uVar33 < iVar29 + (uVar7 >> 0x18));
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar25);
      uVar33 = uVar34;
    } while (uVar34 != uVar6);
  }
  pvVar5 = pvVar15;
  if (pvVar15 != __s) {
    pvVar5 = __s;
    __s = pvVar15;
  }
  rVar9 = param_1[9];
  *(void **)(param_2 + 0x50) = __s;
  __s = pvVar5;
  if ((rVar9 != (rcContext)0x0) &&
     ((**(code **)(*(long *)param_1 + 0x30))(param_1,0x13), param_1[9] != (rcContext)0x0)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x11);
  }
LAB_00de3aa8:
  rcFree(__s);
  return pvVar15 != (void *)0x0;
}


