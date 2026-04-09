// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcErodeWalkableArea
// Entry Point: 00ddaa34
// Size: 1484 bytes
// Signature: undefined __cdecl rcErodeWalkableArea(rcContext * param_1, int param_2, rcCompactHeightfield * param_3)


/* rcErodeWalkableArea(rcContext*, int, rcCompactHeightfield&) */

bool rcErodeWalkableArea(rcContext *param_1,int param_2,rcCompactHeightfield *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  void *__s;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar4 = *(uint *)param_3;
  uVar5 = (ulong)uVar4;
  uVar13 = *(uint *)(param_3 + 4);
  uVar19 = (ulong)uVar13;
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0xd);
  }
  __s = (void *)rcAlloc(*(int *)(param_3 + 8),1);
  if (__s == (void *)0x0) {
    rcContext::log((rcLogCategory)param_1,(char *)0x3,
                   "erodeWalkableArea: Out of memory \'dist\' (%d).");
  }
  else {
    memset(__s,0xff,(long)*(int *)(param_3 + 8));
    if ((0 < (int)uVar13) && (0 < (int)uVar4)) {
      uVar15 = 0;
      do {
        uVar16 = 0;
        do {
          lVar17 = uVar16 + uVar15 * uVar5;
          uVar11 = *(uint *)(*(long *)(param_3 + 0x40) + lVar17 * 4);
          if (uVar11 >> 0x18 != 0) {
            uVar18 = (ulong)uVar11 & 0xffffff;
            uVar2 = uVar18 + (uVar11 >> 0x18);
            uVar7 = uVar18 << 3 | 4;
            do {
              lVar8 = *(long *)(param_3 + 0x58);
              if (*(char *)(lVar8 + uVar18) == '\0') {
LAB_00ddab20:
                *(undefined *)((long)__s + uVar18) = 0;
              }
              else {
                lVar9 = *(long *)(param_3 + 0x40);
                uVar11 = *(uint *)(*(long *)(param_3 + 0x48) + uVar7);
                if ((int)((ulong)uVar11 & 0x3f) == 0x3f) {
                  cVar6 = false;
                  uVar14 = (ulong)(uVar11 >> 6) & 0x3f;
                  iVar12 = (int)uVar14;
                }
                else {
                  cVar6 = *(char *)(lVar8 + ((ulong)*(uint *)(lVar9 + (lVar17 + -1) * 4) & 0xffffff)
                                            + ((ulong)uVar11 & 0x3f)) != '\0';
                  uVar14 = (ulong)(uVar11 >> 6) & 0x3f;
                  iVar12 = (int)uVar14;
                }
                if ((iVar12 != 0x3f) &&
                   (*(char *)(lVar8 + ((ulong)*(uint *)(lVar9 + (uVar16 + uVar5 + uVar15 * uVar5) *
                                                                4) & 0xffffff) + uVar14) != '\0')) {
                  cVar6 = cVar6 + '\x01';
                }
                uVar14 = (ulong)(uVar11 >> 0xc) & 0x3f;
                if ((int)uVar14 != 0x3f) {
                  if (*(char *)(lVar8 + ((ulong)*(uint *)(lVar9 + (lVar17 + 1) * 4) & 0xffffff) +
                                        uVar14) != '\0') {
                    cVar6 = cVar6 + '\x01';
                  }
                  uVar14 = (ulong)(uVar11 >> 0x12) & 0x3f;
                  if ((int)uVar14 != 0x3f) goto LAB_00ddabe4;
                  goto LAB_00ddab20;
                }
                uVar14 = (ulong)(uVar11 >> 0x12) & 0x3f;
                if ((int)uVar14 == 0x3f) goto LAB_00ddab20;
LAB_00ddabe4:
                if (*(char *)(lVar8 + ((ulong)*(uint *)(lVar9 + (uVar16 + (uVar15 - 1) * uVar5) * 4)
                                      & 0xffffff) + uVar14) != '\0') {
                  cVar6 = cVar6 + '\x01';
                }
                if (cVar6 != '\x04') goto LAB_00ddab20;
              }
              uVar18 = uVar18 + 1;
              uVar7 = uVar7 + 8;
            } while (uVar18 < uVar2);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar5);
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar19);
      if ((0 < (int)uVar13) && (0 < (int)uVar4)) {
        uVar15 = 0;
        do {
          uVar16 = 0;
          lVar17 = (uVar15 - 1) * uVar5;
          do {
            uVar11 = *(uint *)(*(long *)(param_3 + 0x40) + (uVar16 + uVar15 * uVar5) * 4);
            if (uVar11 >> 0x18 != 0) {
              uVar18 = (ulong)uVar11 & 0xffffff;
              lVar8 = uVar16 + lVar17;
              uVar2 = uVar18 + (uVar11 >> 0x18);
              uVar7 = uVar18 << 3 | 4;
              do {
                lVar9 = *(long *)(param_3 + 0x48);
                uVar14 = (ulong)*(uint *)(lVar9 + uVar7) & 0x3f;
                if ((int)uVar14 != 0x3f) {
                  lVar3 = ((ulong)*(uint *)(*(long *)(param_3 + 0x40) +
                                           ((uVar16 - 1) + uVar15 * uVar5) * 4) & 0xffffff) + uVar14
                  ;
                  uVar11 = (uint)*(byte *)((long)__s + lVar3);
                  if (0xfc < uVar11) {
                    uVar11 = 0xfd;
                  }
                  uVar11 = uVar11 + 2;
                  uVar10 = (uint)*(byte *)((long)__s + uVar18);
                  if (uVar11 < *(byte *)((long)__s + uVar18)) {
                    *(char *)((long)__s + uVar18) = (char)uVar11;
                    uVar10 = uVar11;
                  }
                  uVar14 = (ulong)(*(uint *)(lVar9 + lVar3 * 8 + 4) >> 0x12) & 0x3f;
                  if ((int)uVar14 != 0x3f) {
                    uVar11 = (uint)*(byte *)((long)__s +
                                            ((ulong)*(uint *)(*(long *)(param_3 + 0x40) +
                                                             ((uVar16 - 1) + lVar17) * 4) & 0xffffff
                                            ) + uVar14);
                    if (0xfb < uVar11) {
                      uVar11 = 0xfc;
                    }
                    if (uVar11 + 3 < (uVar10 & 0xff)) {
                      *(char *)((long)__s + uVar18) = (char)(uVar11 + 3);
                    }
                  }
                }
                uVar14 = (ulong)(*(uint *)(lVar9 + uVar7) >> 0x12) & 0x3f;
                if ((int)uVar14 != 0x3f) {
                  lVar3 = *(long *)(param_3 + 0x48);
                  lVar9 = ((ulong)*(uint *)(*(long *)(param_3 + 0x40) + lVar8 * 4) & 0xffffff) +
                          uVar14;
                  uVar11 = (uint)*(byte *)((long)__s + lVar9);
                  if (0xfc < uVar11) {
                    uVar11 = 0xfd;
                  }
                  uVar11 = uVar11 + 2;
                  uVar10 = (uint)*(byte *)((long)__s + uVar18);
                  if (uVar11 < *(byte *)((long)__s + uVar18)) {
                    *(char *)((long)__s + uVar18) = (char)uVar11;
                    uVar10 = uVar11;
                  }
                  uVar14 = (ulong)(*(uint *)(lVar3 + lVar9 * 8 + 4) >> 0xc) & 0x3f;
                  if ((int)uVar14 != 0x3f) {
                    uVar11 = (uint)*(byte *)((long)__s +
                                            ((ulong)*(uint *)(*(long *)(param_3 + 0x40) +
                                                             (long)((int)lVar8 + 1) * 4) & 0xffffff)
                                            + uVar14);
                    if (0xfb < uVar11) {
                      uVar11 = 0xfc;
                    }
                    if (uVar11 + 3 < (uVar10 & 0xff)) {
                      *(char *)((long)__s + uVar18) = (char)(uVar11 + 3);
                    }
                  }
                }
                uVar18 = uVar18 + 1;
                uVar7 = uVar7 + 8;
              } while (uVar18 < uVar2);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar5);
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar19);
        if ((0 < (int)uVar13) && (0 < (int)uVar4)) {
          do {
            iVar12 = (int)uVar19 * uVar4;
            lVar17 = (uVar19 - 1) * uVar5;
            uVar15 = uVar5;
            do {
              uVar16 = uVar15 - 1;
              uVar13 = *(uint *)(*(long *)(param_3 + 0x40) + (uVar16 + lVar17) * 4);
              if (uVar13 >> 0x18 != 0) {
                uVar18 = (ulong)uVar13 & 0xffffff;
                uVar2 = uVar18 + (uVar13 >> 0x18);
                uVar7 = uVar18 << 3 | 4;
                do {
                  lVar8 = *(long *)(param_3 + 0x48);
                  uVar14 = (ulong)(*(uint *)(lVar8 + uVar7) >> 0xc) & 0x3f;
                  if ((int)uVar14 != 0x3f) {
                    lVar9 = ((ulong)*(uint *)(*(long *)(param_3 + 0x40) + (uVar15 + lVar17) * 4) &
                            0xffffff) + uVar14;
                    uVar13 = (uint)*(byte *)((long)__s + lVar9);
                    if (0xfc < uVar13) {
                      uVar13 = 0xfd;
                    }
                    uVar13 = uVar13 + 2;
                    uVar11 = (uint)*(byte *)((long)__s + uVar18);
                    if (uVar13 < *(byte *)((long)__s + uVar18)) {
                      *(char *)((long)__s + uVar18) = (char)uVar13;
                      uVar11 = uVar13;
                    }
                    uVar14 = (ulong)(*(uint *)(lVar8 + lVar9 * 8 + 4) >> 6) & 0x3f;
                    if ((int)uVar14 != 0x3f) {
                      uVar13 = (uint)*(byte *)((long)__s +
                                              ((ulong)*(uint *)(*(long *)(param_3 + 0x40) +
                                                               (uVar15 + (long)iVar12) * 4) &
                                              0xffffff) + uVar14);
                      if (0xfb < uVar13) {
                        uVar13 = 0xfc;
                      }
                      if (uVar13 + 3 < (uVar11 & 0xff)) {
                        *(char *)((long)__s + uVar18) = (char)(uVar13 + 3);
                      }
                    }
                  }
                  uVar14 = (ulong)(*(uint *)(lVar8 + uVar7) >> 6) & 0x3f;
                  if ((int)uVar14 != 0x3f) {
                    lVar9 = *(long *)(param_3 + 0x48);
                    lVar8 = ((ulong)*(uint *)(*(long *)(param_3 + 0x40) +
                                             (uVar16 + (long)iVar12) * 4) & 0xffffff) + uVar14;
                    uVar13 = (uint)*(byte *)((long)__s + lVar8);
                    if (0xfc < uVar13) {
                      uVar13 = 0xfd;
                    }
                    uVar13 = uVar13 + 2;
                    uVar11 = (uint)*(byte *)((long)__s + uVar18);
                    if (uVar13 < *(byte *)((long)__s + uVar18)) {
                      *(char *)((long)__s + uVar18) = (char)uVar13;
                      uVar11 = uVar13;
                    }
                    uVar14 = (ulong)*(uint *)(lVar9 + lVar8 * 8 + 4) & 0x3f;
                    if ((int)uVar14 != 0x3f) {
                      uVar13 = (uint)*(byte *)((long)__s +
                                              ((ulong)*(uint *)(*(long *)(param_3 + 0x40) +
                                                               (long)(iVar12 + -2 + (int)uVar15) * 4
                                                               ) & 0xffffff) + uVar14);
                      if (0xfb < uVar13) {
                        uVar13 = 0xfc;
                      }
                      if (uVar13 + 3 < (uVar11 & 0xff)) {
                        *(char *)((long)__s + uVar18) = (char)(uVar13 + 3);
                      }
                    }
                  }
                  uVar18 = uVar18 + 1;
                  uVar7 = uVar7 + 8;
                } while (uVar18 < uVar2);
              }
              bVar1 = 1 < (long)uVar15;
              uVar15 = uVar16;
            } while (bVar1);
            bVar1 = 1 < (long)uVar19;
            uVar19 = uVar19 - 1;
          } while (bVar1);
        }
      }
    }
    iVar12 = *(int *)(param_3 + 8);
    if (0 < iVar12) {
      lVar17 = 0;
      do {
        if ((uint)*(byte *)((long)__s + lVar17) < (param_2 & 0x7fU) << 1) {
          *(undefined *)(*(long *)(param_3 + 0x58) + lVar17) = 0;
          iVar12 = *(int *)(param_3 + 8);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar12);
    }
    rcFree(__s);
    if (param_1[9] != (rcContext)0x0) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,0xd);
    }
  }
  return __s != (void *)0x0;
}


