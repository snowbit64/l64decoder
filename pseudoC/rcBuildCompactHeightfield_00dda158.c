// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcBuildCompactHeightfield
// Entry Point: 00dda158
// Size: 1984 bytes
// Signature: undefined __cdecl rcBuildCompactHeightfield(rcContext * param_1, int param_2, int param_3, rcHeightfield * param_4, rcCompactHeightfield * param_5)


/* rcBuildCompactHeightfield(rcContext*, int, int, rcHeightfield&, rcCompactHeightfield&) */

undefined8
rcBuildCompactHeightfield
          (rcContext *param_1,int param_2,int param_3,rcHeightfield *param_4,
          rcCompactHeightfield *param_5)

{
  undefined2 *puVar1;
  ulong uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  void *pvVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  size_t __n;
  uint uVar35;
  undefined4 uVar36;
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,3);
  }
  uVar6 = *(uint *)param_4;
  uVar7 = (ulong)uVar6;
  uVar8 = *(uint *)(param_4 + 4);
  uVar9 = (ulong)uVar8;
  uVar34 = 0;
  lVar17 = (long)(int)uVar6;
  if ((0 < (int)uVar8) && (0 < (int)uVar6)) {
    uVar21 = 0;
    uVar34 = 0;
    do {
      uVar26 = 0;
      do {
        puVar28 = *(uint **)(*(long *)(param_4 + 0x28) + (uVar26 + uVar21 * uVar7) * 8);
        while (puVar28 != (uint *)0x0) {
          uVar13 = *puVar28;
          puVar28 = *(uint **)(puVar28 + 2);
          uVar33 = (uint)uVar34;
          if (uVar13 >> 0x1a != 0) {
            uVar33 = uVar33 + 1;
          }
          uVar34 = (ulong)uVar33;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar7);
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar9);
  }
  uVar36 = *(undefined4 *)(param_4 + 8);
  *(uint *)param_5 = uVar6;
  *(uint *)(param_5 + 4) = uVar8;
  *(undefined4 *)(param_5 + 0x1c) = uVar36;
  uVar36 = *(undefined4 *)(param_4 + 0xc);
  iVar18 = (int)uVar34;
  *(int *)(param_5 + 8) = iVar18;
  *(int *)(param_5 + 0xc) = param_2;
  __n = lVar17 * (int)uVar8 * 4;
  *(int *)(param_5 + 0x10) = param_3;
  *(undefined4 *)(param_5 + 0x20) = uVar36;
  uVar36 = *(undefined4 *)(param_4 + 0x10);
  *(undefined2 *)(param_5 + 0x1a) = 0;
  *(undefined4 *)(param_5 + 0x24) = uVar36;
  *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_4 + 0x14);
  uVar36 = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_5 + 0x2c) = uVar36;
  *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(param_4 + 0x1c);
  uVar36 = NEON_fmadd((float)param_2,*(undefined4 *)(param_4 + 0x24),uVar36);
  *(undefined4 *)(param_5 + 0x2c) = uVar36;
  *(undefined8 *)(param_5 + 0x34) = *(undefined8 *)(param_4 + 0x20);
  pvVar14 = (void *)rcAlloc((int)__n,0);
  *(void **)(param_5 + 0x40) = pvVar14;
  if (pvVar14 == (void *)0x0) {
    uVar34 = (ulong)(uVar8 * uVar6);
    pcVar16 = "rcBuildCompactHeightfield: Out of memory \'chf.cells\' (%d)";
  }
  else {
    memset(pvVar14,0,__n);
    pvVar14 = (void *)rcAlloc((int)(uVar34 << 3),0);
    *(void **)(param_5 + 0x48) = pvVar14;
    if (pvVar14 == (void *)0x0) {
      pcVar16 = "rcBuildCompactHeightfield: Out of memory \'chf.spans\' (%d)";
    }
    else {
      memset(pvVar14,0,-(uVar34 >> 0x1f) & 0xfffffff800000000 | uVar34 << 3);
      pvVar14 = (void *)rcAlloc(iVar18,0);
      *(void **)(param_5 + 0x58) = pvVar14;
      if (pvVar14 != (void *)0x0) {
        memset(pvVar14,0,(long)iVar18);
        if ((0 < (int)uVar8) && (0 < (int)uVar6)) {
          uVar34 = 0;
          uVar33 = 0;
          do {
            uVar21 = 0;
            do {
              lVar25 = uVar21 + uVar34 * lVar17;
              puVar28 = *(uint **)(*(long *)(param_4 + 0x28) + lVar25 * 8);
              if (puVar28 != (uint *)0x0) {
                lVar31 = *(long *)(param_5 + 0x40);
                *(uint *)(lVar31 + lVar25 * 4) = uVar33 & 0xffffff;
                do {
                  if (*puVar28 >> 0x1a != 0) {
                    if (*(uint **)(puVar28 + 2) == (uint *)0x0) {
                      uVar13 = 0xffff;
                    }
                    else {
                      uVar13 = **(uint **)(puVar28 + 2) & 0x1fff;
                    }
                    uVar35 = *puVar28 >> 0xd & 0x1fff;
                    iVar18 = uVar13 - uVar35;
                    if (0xfe < iVar18) {
                      iVar18 = 0xff;
                    }
                    puVar1 = (undefined2 *)(*(long *)(param_5 + 0x48) + (long)(int)uVar33 * 8);
                    *puVar1 = (short)uVar35;
                    *(byte *)((long)puVar1 + 7) = (byte)iVar18 & ((byte)(iVar18 >> 0x1f) ^ 0xff);
                    lVar15 = (long)(int)uVar33;
                    uVar33 = uVar33 + 1;
                    *(byte *)(*(long *)(param_5 + 0x58) + lVar15) = (byte)(*puVar28 >> 0x1a);
                    *(int *)(lVar31 + lVar25 * 4) = *(int *)(lVar31 + lVar25 * 4) + 0x1000000;
                  }
                  puVar28 = *(uint **)(puVar28 + 2);
                } while (puVar28 != (uint *)0x0);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 != uVar7);
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar9);
          if ((0 < (int)uVar8) && (0 < (int)uVar6)) {
            uVar34 = 0;
            uVar21 = 0;
            do {
              iVar18 = (int)uVar34;
              uVar26 = 0;
              do {
                uVar33 = *(uint *)(*(long *)(param_5 + 0x40) + (uVar26 + uVar34 * lVar17) * 4);
                if (uVar33 >> 0x18 != 0) {
                  uVar32 = (ulong)uVar33 & 0xffffff;
                  uVar2 = uVar32 + (uVar33 >> 0x18);
                  iVar30 = (int)uVar26;
                  do {
                    puVar3 = (ushort *)(*(long *)(param_5 + 0x48) + uVar32 * 8);
                    puVar28 = (uint *)(puVar3 + 2);
                    uVar33 = *puVar28;
                    uVar13 = uVar33 | 0x3f;
                    *puVar28 = uVar13;
                    if (((0 < iVar30 && -1 < iVar18) && iVar30 <= (int)uVar6) && iVar18 < (int)uVar8
                       ) {
                      uVar35 = *(uint *)(*(long *)(param_5 + 0x40) +
                                        (long)(int)(iVar30 + uVar6 * iVar18 + -1) * 4);
                      if (uVar35 >> 0x18 != 0) {
                        uVar23 = (ulong)uVar35 & 0xffffff;
                        uVar10 = *puVar3;
                        lVar31 = 0;
                        uVar20 = (uint)uVar10 + (uVar33 >> 0x18);
                        lVar25 = *(long *)(param_5 + 0x48) + uVar23 * 8 + 4;
                        do {
                          uVar11 = *(ushort *)(lVar25 + -4);
                          uVar24 = (uint)uVar10;
                          uVar27 = (uint)uVar11;
                          uVar19 = *(byte *)(lVar25 + 3) + uVar27;
                          uVar22 = uVar24;
                          if ((uint)uVar10 < (uint)uVar11 || uVar24 == uVar11) {
                            uVar22 = uVar27;
                          }
                          uVar29 = uVar20;
                          if (uVar19 <= uVar20) {
                            uVar29 = uVar19;
                          }
                          if (param_2 <= (int)(uVar29 - uVar22)) {
                            iVar12 = uVar27 - uVar24;
                            iVar4 = -iVar12;
                            if (-1 < iVar12) {
                              iVar4 = iVar12;
                            }
                            if (iVar4 <= param_3) {
                              uVar19 = (uint)lVar31;
                              if (uVar19 < 0x3f) {
                                uVar13 = uVar33 & 0xffffc0 | uVar19 & 0xffffff | uVar33 & 0xff000000
                                ;
                                *puVar28 = uVar13;
                                break;
                              }
                              uVar22 = (uint)uVar21;
                              if ((int)(uint)uVar21 <= (int)uVar19) {
                                uVar22 = uVar19;
                              }
                              uVar21 = (ulong)uVar22;
                            }
                          }
                          lVar31 = lVar31 + 1;
                          lVar25 = lVar25 + 8;
                        } while (uVar23 + lVar31 < uVar23 + (uVar35 >> 0x18));
                      }
                    }
                    uVar33 = uVar13 | 0xfc0;
                    *puVar28 = uVar33;
                    if (((-1 < iVar30 && (iVar18 != -2 && iVar18 + 2 < 0 == SCARRY4(iVar18,2))) &&
                        iVar30 < (int)uVar6) && iVar18 + 1 < (int)uVar8) {
                      uVar35 = *(uint *)(*(long *)(param_5 + 0x40) +
                                        (long)(int)((iVar18 + 1) * uVar6 + iVar30) * 4);
                      if (uVar35 >> 0x18 != 0) {
                        uVar23 = (ulong)uVar35 & 0xffffff;
                        uVar10 = *puVar3;
                        uVar20 = 0;
                        lVar31 = 0;
                        uVar19 = (uint)uVar10 + (uVar13 >> 0x18);
                        lVar25 = *(long *)(param_5 + 0x48) + uVar23 * 8 + 4;
                        do {
                          uVar11 = *(ushort *)(lVar25 + -4);
                          uVar29 = (uint)uVar10;
                          uVar27 = (uint)uVar11;
                          uVar22 = *(byte *)(lVar25 + 3) + uVar27;
                          uVar24 = uVar29;
                          if ((uint)uVar10 < (uint)uVar11 || uVar29 == uVar11) {
                            uVar24 = uVar27;
                          }
                          uVar5 = uVar19;
                          if (uVar22 <= uVar19) {
                            uVar5 = uVar22;
                          }
                          if (param_2 <= (int)(uVar5 - uVar24)) {
                            iVar12 = uVar27 - uVar29;
                            iVar4 = -iVar12;
                            if (-1 < iVar12) {
                              iVar4 = iVar12;
                            }
                            if (iVar4 <= param_3) {
                              uVar22 = (uint)lVar31;
                              if (uVar22 < 0x3f) {
                                uVar33 = uVar13 & 0xfff03f | uVar20 & 0xffffc0 | uVar13 & 0xff000000
                                ;
                                *puVar28 = uVar33;
                                break;
                              }
                              uVar24 = (uint)uVar21;
                              if ((int)(uint)uVar21 <= (int)uVar22) {
                                uVar24 = uVar22;
                              }
                              uVar21 = (ulong)uVar24;
                            }
                          }
                          lVar31 = lVar31 + 1;
                          uVar20 = uVar20 + 0x40;
                          lVar25 = lVar25 + 8;
                        } while (uVar23 + lVar31 < uVar23 + (uVar35 >> 0x18));
                      }
                    }
                    uVar13 = uVar33 | 0x3f000;
                    *puVar28 = uVar13;
                    if ((((iVar30 != -2 && iVar30 + 2 < 0 == SCARRY4(iVar30,2)) && -1 < iVar18) &&
                        iVar30 + 1 < (int)uVar6) && iVar18 < (int)uVar8) {
                      uVar35 = *(uint *)(*(long *)(param_5 + 0x40) +
                                        (long)(int)(uVar6 * iVar18 + iVar30 + 1) * 4);
                      if (uVar35 >> 0x18 != 0) {
                        uVar23 = (ulong)uVar35 & 0xffffff;
                        uVar10 = *puVar3;
                        uVar20 = 0;
                        lVar31 = 0;
                        uVar19 = (uint)uVar10 + (uVar33 >> 0x18);
                        lVar25 = *(long *)(param_5 + 0x48) + uVar23 * 8 + 4;
                        do {
                          uVar11 = *(ushort *)(lVar25 + -4);
                          uVar29 = (uint)uVar10;
                          uVar27 = (uint)uVar11;
                          uVar22 = *(byte *)(lVar25 + 3) + uVar27;
                          uVar24 = uVar29;
                          if ((uint)uVar10 < (uint)uVar11 || uVar29 == uVar11) {
                            uVar24 = uVar27;
                          }
                          uVar5 = uVar19;
                          if (uVar22 <= uVar19) {
                            uVar5 = uVar22;
                          }
                          if (param_2 <= (int)(uVar5 - uVar24)) {
                            iVar12 = uVar27 - uVar29;
                            iVar4 = -iVar12;
                            if (-1 < iVar12) {
                              iVar4 = iVar12;
                            }
                            if (iVar4 <= param_3) {
                              uVar22 = (uint)lVar31;
                              if (uVar22 < 0x3f) {
                                uVar13 = uVar33 & 0xfc0fff | uVar20 & 0xfff000 | uVar33 & 0xff000000
                                ;
                                *puVar28 = uVar13;
                                break;
                              }
                              uVar24 = (uint)uVar21;
                              if ((int)(uint)uVar21 <= (int)uVar22) {
                                uVar24 = uVar22;
                              }
                              uVar21 = (ulong)uVar24;
                            }
                          }
                          lVar31 = lVar31 + 1;
                          uVar20 = uVar20 + 0x1000;
                          lVar25 = lVar25 + 8;
                        } while (uVar23 + lVar31 < uVar23 + (uVar35 >> 0x18));
                      }
                    }
                    *puVar28 = uVar13 | 0xfc0000;
                    if (((-1 < iVar30 && 0 < iVar18) && iVar30 < (int)uVar6) && iVar18 <= (int)uVar8
                       ) {
                      uVar33 = *(uint *)(*(long *)(param_5 + 0x40) +
                                        (long)(int)((iVar18 + -1) * uVar6 + iVar30) * 4);
                      if (uVar33 >> 0x18 != 0) {
                        uVar23 = (ulong)uVar33 & 0xffffff;
                        uVar10 = *puVar3;
                        uVar35 = 0;
                        lVar31 = 0;
                        uVar20 = (uint)uVar10 + (uVar13 >> 0x18);
                        lVar25 = *(long *)(param_5 + 0x48) + uVar23 * 8 + 4;
                        do {
                          uVar11 = *(ushort *)(lVar25 + -4);
                          uVar27 = (uint)uVar10;
                          uVar24 = (uint)uVar11;
                          uVar19 = *(byte *)(lVar25 + 3) + uVar24;
                          uVar22 = uVar27;
                          if ((uint)uVar10 < (uint)uVar11 || uVar27 == uVar11) {
                            uVar22 = uVar24;
                          }
                          uVar29 = uVar20;
                          if (uVar19 <= uVar20) {
                            uVar29 = uVar19;
                          }
                          if (param_2 <= (int)(uVar29 - uVar22)) {
                            iVar12 = uVar24 - uVar27;
                            iVar4 = -iVar12;
                            if (-1 < iVar12) {
                              iVar4 = iVar12;
                            }
                            if (iVar4 <= param_3) {
                              uVar19 = (uint)lVar31;
                              if (uVar19 < 0x3f) {
                                *puVar28 = uVar35 & 0xfc0000 | uVar13 & 0x3ffff |
                                           uVar13 & 0xff000000;
                                break;
                              }
                              uVar22 = (uint)uVar21;
                              if ((int)(uint)uVar21 <= (int)uVar19) {
                                uVar22 = uVar19;
                              }
                              uVar21 = (ulong)uVar22;
                            }
                          }
                          lVar31 = lVar31 + 1;
                          uVar35 = uVar35 + 0x40000;
                          lVar25 = lVar25 + 8;
                        } while (uVar23 + lVar31 < uVar23 + (uVar33 >> 0x18));
                      }
                    }
                    uVar32 = uVar32 + 1;
                  } while (uVar32 < uVar2);
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar7);
              uVar34 = uVar34 + 1;
            } while (uVar34 != uVar9);
            if (0x3e < (int)uVar21) {
              rcContext::log((rcLogCategory)param_1,(char *)0x3,
                             "rcBuildCompactHeightfield: Heightfield has too many layers %d (max: %d)"
                             ,uVar21,0x3e);
            }
          }
        }
        if (param_1[9] != (rcContext)0x0) {
          (**(code **)(*(long *)param_1 + 0x30))(param_1,3);
        }
        return 1;
      }
      pcVar16 = "rcBuildCompactHeightfield: Out of memory \'chf.areas\' (%d)";
    }
  }
  rcContext::log((rcLogCategory)param_1,(char *)0x3,pcVar16,uVar34);
  return 0;
}


