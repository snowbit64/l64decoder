// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4d114
// Entry Point: 00e4d114
// Size: 2976 bytes
// Signature: undefined FUN_00e4d114(void)


void FUN_00e4d114(long param_1,void **param_2,uint param_3,uint param_4,ulong param_5,char *param_6)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  long *plVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  uint *puVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  void *pvVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uStack_130;
  uint local_128;
  int local_124;
  long local_120;
  long *local_118;
  int local_10c;
  long *local_108;
  char *local_100;
  long local_f8;
  long local_f0;
  long *local_e8;
  byte *local_e0;
  uint *local_d8;
  long local_d0;
  uint local_c4;
  void **local_c0;
  long local_b8;
  uint *local_b0;
  ulong local_a8;
  ulong local_a0;
  long *local_98;
  char *local_90;
  int local_88;
  uint uStack_84;
  long local_80;
  
  local_120 = tpidr_el0;
  uVar30 = param_5 & 0xffffffff;
  local_80 = *(long *)(local_120 + 0x28);
  uVar26 = (ulong)param_4;
  lVar29 = *(long *)(param_1 + 0x1d8);
  uVar5 = *(ushort *)(param_1 + (param_5 & 0xffffffff) * 2 + 0x154);
  local_d8 = (uint *)(lVar29 + uVar30 * 0x20);
  local_e0 = (byte *)((long)local_d8 + 0xd);
  uVar13 = param_4 << (uVar5 == 2);
  uVar9 = *local_d8;
  if (uVar13 <= *local_d8) {
    uVar9 = uVar13;
  }
  uVar24 = local_d8[1];
  if (uVar13 <= local_d8[1]) {
    uVar24 = uVar13;
  }
  local_b0 = local_d8 + 2;
  local_124 = *(int *)(param_1 + 0x94);
  uVar13 = 0;
  if (*local_b0 != 0) {
    uVar13 = (uVar24 - uVar9) / *local_b0;
  }
  local_a8 = (ulong)uVar13;
  local_b8 = (long)*(int *)(*(long *)(param_1 + 0xb8) + (ulong)*local_e0 * 0x848);
  uVar9 = *(uint *)(param_1 + 4);
  if (*(long *)(param_1 + 0x80) == 0) {
    local_98 = (long *)((long)&uStack_130 -
                       (((-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | local_a8 << 3) + 8) *
                        (long)(int)uVar9 + 0xf & 0xfffffffffffffff0));
  }
  else {
    iVar28 = local_124 + uVar9 * (uVar13 * -8 + -8);
    if (iVar28 < *(int *)(param_1 + 0x90)) {
      local_98 = (long *)0x0;
    }
    else {
      local_98 = (long *)(*(long *)(param_1 + 0x80) + (long)iVar28);
      *(int *)(param_1 + 0x94) = iVar28;
    }
  }
  if (0 < (int)uVar9) {
    uVar12 = (ulong)uVar9;
    plVar11 = local_98 + uVar9;
    plVar16 = local_98;
    do {
      *plVar16 = (long)plVar11;
      plVar11 = (long *)((long)plVar11 + (long)(int)(uVar13 << 3));
      uVar12 = uVar12 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar12 != 0);
  }
  local_c4 = param_3;
  local_c0 = param_2;
  local_90 = param_6;
  if ((int)param_3 < 1) {
    if (uVar5 != 2) goto LAB_00e4d350;
  }
  else {
    uVar12 = (ulong)param_3;
    do {
      if (*param_6 == '\0') {
        memset(*param_2,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2);
      }
      param_2 = param_2 + 1;
      param_6 = param_6 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if ((local_c4 == 1) || (uVar5 != 2)) {
LAB_00e4d350:
      lVar29 = lVar29 + uVar30 * 0x20;
      local_e8 = (long *)(lVar29 + 0x10);
      local_118 = (long *)(lVar29 + 0x18);
      local_f0 = 0;
      local_a0 = (ulong)local_c4;
      local_128 = (uint)uVar5;
      do {
        if (0 < (int)local_a8) {
          iVar28 = 0;
          local_d0 = 0;
          uStack_130._4_4_ = (uint)(0 < (int)local_c4 && local_f0 == 0);
          do {
            if (uStack_130._4_4_ != 0) {
              uVar26 = 0;
              do {
                if (local_90[uVar26] == '\0') {
                  lVar29 = *(long *)(param_1 + 0xb8);
                  uVar30 = (ulong)*local_e0;
                  if (*(int *)(param_1 + 0x6f8) < 10) {
                    if (*(int *)(param_1 + 0x6f8) == 0) {
                      *(undefined4 *)(param_1 + 0x6f4) = 0;
                    }
                    do {
                      if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0'))
                         || (iVar8 = FUN_00e4c7e4(param_1), iVar8 == -1)) break;
                      uVar9 = *(uint *)(param_1 + 0x6f8);
                      *(int *)(param_1 + 0x6f4) =
                           *(int *)(param_1 + 0x6f4) + (iVar8 << (ulong)(uVar9 & 0x1f));
                      *(uint *)(param_1 + 0x6f8) = uVar9 + 8;
                    } while ((int)uVar9 < 0x11);
                  }
                  uVar5 = *(ushort *)
                           (lVar29 + uVar30 * 0x848 +
                            ((ulong)*(uint *)(param_1 + 0x6f4) & 0x3ff) * 2 + 0x30);
                  if ((short)uVar5 < 0) {
                    uVar9 = FUN_00e4cf68(param_1,lVar29 + uVar30 * 0x848);
                  }
                  else {
                    uVar13 = (uint)*(byte *)(*(long *)(lVar29 + uVar30 * 0x848 + 8) + (ulong)uVar5);
                    iVar10 = *(int *)(param_1 + 0x6f8) - uVar13;
                    iVar8 = 0;
                    if (-1 < iVar10) {
                      iVar8 = iVar10;
                    }
                    uVar9 = (uint)uVar5;
                    if (-1 >= iVar10) {
                      uVar9 = 0xffffffff;
                    }
                    *(uint *)(param_1 + 0x6f4) =
                         *(uint *)(param_1 + 0x6f4) >> (ulong)(uVar13 & 0x1f);
                    *(int *)(param_1 + 0x6f8) = iVar8;
                  }
                  if (*(char *)(lVar29 + uVar30 * 0x848 + 0x1b) != '\0') {
                    uVar9 = *(uint *)(*(long *)(lVar29 + uVar30 * 0x848 + 0x838) +
                                     (long)(int)uVar9 * 4);
                  }
                  if (uVar9 == 0xffffffff) goto LAB_00e4d310;
                  *(undefined8 *)(local_98[uVar26] + local_d0 * 8) =
                       *(undefined8 *)(*local_e8 + (long)(int)uVar9 * 8);
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != local_a0);
            }
            iVar8 = (int)local_a8;
            if ((0 < (int)local_b8) && (iVar28 < iVar8)) {
              local_f8 = 0;
              do {
                local_10c = iVar28;
                if (0 < (int)local_c4) {
                  uVar26 = 0;
                  do {
                    if ((local_90[uVar26] == '\0') &&
                       (uVar5 = *(ushort *)
                                 (*local_118 +
                                  (ulong)*(byte *)(*(long *)(local_98[uVar26] + local_d0 * 8) +
                                                  local_f8) * 0x10 + local_f0 * 2),
                       -1 < (short)uVar5)) {
                      uVar30 = (ulong)uVar5;
                      uVar9 = *local_b0;
                      lVar29 = *(long *)(param_1 + 0xb8);
                      iVar28 = *local_d8 + uVar9 * local_10c;
                      pvVar31 = local_c0[uVar26];
                      puVar27 = (uint *)(lVar29 + uVar30 * 0x848);
                      if (local_128 == 0) {
                        uVar13 = 0;
                        if (*puVar27 != 0) {
                          uVar13 = (int)uVar9 / (int)*puVar27;
                        }
                        if (0 < (int)uVar13) {
                          uVar12 = 0;
                          lVar29 = lVar29 + uVar30 * 0x848;
                          iVar8 = *local_d8 + local_10c * uVar9;
                          local_100 = (char *)(lVar29 + 0x1a);
                          local_108 = (long *)(lVar29 + 0x20);
                          uVar24 = uVar9 - iVar8;
                          pfVar17 = (float *)((long)pvVar31 + (long)iVar8 * 4);
                          do {
                            iVar8 = FUN_00e4eb28(param_1,puVar27);
                            if (iVar8 < 0) goto LAB_00e4d310;
                            uVar3 = *puVar27;
                            uVar6 = uVar9 - (iVar28 + (int)uVar12);
                            uVar2 = uVar3;
                            if ((int)uVar6 <= (int)uVar3) {
                              uVar2 = uVar6;
                            }
                            if (0 < (int)uVar2) {
                              fVar32 = 0.0;
                              uVar2 = uVar3;
                              if ((int)uVar24 <= (int)uVar3) {
                                uVar2 = uVar24;
                              }
                              uVar30 = (ulong)uVar2;
                              cVar4 = *local_100;
                              pfVar15 = (float *)(*local_108 + (long)(int)(uVar3 * iVar8) * 4);
                              pfVar18 = pfVar17;
                              do {
                                fVar34 = fVar32 + *pfVar15;
                                if (cVar4 != '\0') {
                                  fVar32 = fVar34;
                                }
                                uVar30 = uVar30 - 1;
                                *pfVar18 = *pfVar18 + fVar34;
                                pfVar18 = pfVar18 + (int)uVar13;
                                pfVar15 = pfVar15 + 1;
                              } while (uVar30 != 0);
                            }
                            uVar12 = uVar12 + 1;
                            uVar24 = uVar24 - 1;
                            pfVar17 = pfVar17 + 1;
                          } while (uVar12 != uVar13);
                        }
                      }
                      else if (0 < (int)uVar9) {
                        iVar8 = 0;
                        lVar29 = lVar29 + uVar30 * 0x848;
                        local_100 = (char *)((long)pvVar31 + 0x10);
                        do {
                          iVar10 = FUN_00e4eb28(param_1,puVar27);
                          if (iVar10 < 0) goto LAB_00e4d310;
                          uVar24 = *puVar27;
                          lVar23 = (long)iVar28;
                          pfVar17 = (float *)((long)pvVar31 + (long)iVar28 * 4);
                          uVar13 = uVar24;
                          if ((int)(uVar9 - iVar8) <= (int)uVar24) {
                            uVar13 = uVar9 - iVar8;
                          }
                          uVar30 = (ulong)uVar13;
                          if (*(char *)(lVar29 + 0x1a) == '\0') {
                            if (0 < (int)uVar13) {
                              lVar25 = *(long *)(lVar29 + 0x20);
                              lVar19 = (long)(int)(uVar24 * iVar10);
                              if ((uVar13 < 8) ||
                                 ((pvVar1 = (void *)(lVar25 + lVar19 * 4),
                                  pfVar17 < (float *)(lVar25 + (lVar19 + uVar30) * 4) &&
                                  (pvVar1 < (void *)((long)pvVar31 + (lVar23 + uVar30) * 4))))) {
                                uVar12 = 0;
                              }
                              else {
                                uVar12 = uVar30 & 0xfffffff8;
                                puVar20 = (undefined8 *)((long)pvVar1 + 0x10);
                                puVar21 = (undefined8 *)(local_100 + lVar23 * 4);
                                uVar22 = uVar12;
                                do {
                                  puVar7 = puVar20 + -1;
                                  uVar33 = puVar20[-2];
                                  uVar36 = puVar20[1];
                                  uVar35 = *puVar20;
                                  puVar20 = puVar20 + 4;
                                  uVar22 = uVar22 - 8;
                                  puVar21[-1] = CONCAT44((float)((ulong)puVar21[-1] >> 0x20) +
                                                         (float)((ulong)*puVar7 >> 0x20) + 0.0,
                                                         (float)puVar21[-1] + (float)*puVar7 + 0.0);
                                  puVar21[-2] = CONCAT44((float)((ulong)puVar21[-2] >> 0x20) +
                                                         (float)((ulong)uVar33 >> 0x20) + 0.0,
                                                         (float)puVar21[-2] + (float)uVar33 + 0.0);
                                  puVar21[1] = CONCAT44((float)((ulong)puVar21[1] >> 0x20) +
                                                        (float)((ulong)uVar36 >> 0x20) + 0.0,
                                                        (float)puVar21[1] + (float)uVar36 + 0.0);
                                  *puVar21 = CONCAT44((float)((ulong)*puVar21 >> 0x20) +
                                                      (float)((ulong)uVar35 >> 0x20) + 0.0,
                                                      (float)*puVar21 + (float)uVar35 + 0.0);
                                  puVar21 = puVar21 + 4;
                                } while (uVar22 != 0);
                                if (uVar12 == uVar30) goto LAB_00e4d5c0;
                              }
                              lVar14 = uVar30 - uVar12;
                              pfVar17 = (float *)(lVar25 + (uVar12 + lVar19) * 4);
                              pfVar18 = (float *)((long)pvVar31 + (uVar12 + lVar23) * 4);
                              do {
                                lVar14 = lVar14 + -1;
                                *pfVar18 = *pfVar18 + *pfVar17 + 0.0;
                                pfVar17 = pfVar17 + 1;
                                pfVar18 = pfVar18 + 1;
                              } while (lVar14 != 0);
                            }
                          }
                          else if (0 < (int)uVar13) {
                            fVar32 = 0.0;
                            pfVar18 = (float *)(*(long *)(lVar29 + 0x20) +
                                               (long)(int)(uVar24 * iVar10) * 4);
                            do {
                              fVar34 = *pfVar18;
                              uVar30 = uVar30 - 1;
                              *pfVar17 = *pfVar17 + fVar32 + fVar34;
                              fVar32 = fVar32 + fVar34 + *(float *)(lVar29 + 0x10);
                              pfVar18 = pfVar18 + 1;
                              pfVar17 = pfVar17 + 1;
                            } while (uVar30 != 0);
                          }
LAB_00e4d5c0:
                          iVar8 = uVar24 + iVar8;
                          iVar28 = uVar24 + iVar28;
                        } while (iVar8 < (int)uVar9);
                      }
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar26 != local_a0);
                }
                local_f8 = local_f8 + 1;
                iVar28 = local_10c + 1;
                iVar8 = (int)local_a8;
              } while ((local_f8 < local_b8) && (iVar28 < iVar8));
            }
            local_d0 = local_d0 + 1;
          } while (iVar28 < iVar8);
        }
        local_f0 = local_f0 + 1;
      } while (local_f0 != 8);
      goto LAB_00e4d310;
    }
    if (0 < (int)local_c4) {
      uVar12 = 0;
      do {
        if (local_90[uVar12] == '\0') goto LAB_00e4d304;
        uVar12 = uVar12 + 1;
      } while (param_3 != uVar12);
      goto LAB_00e4d310;
    }
  }
  uVar12 = 0;
LAB_00e4d304:
  if ((uint)uVar12 != local_c4) {
    lVar29 = lVar29 + uVar30 * 0x20;
    lVar23 = 0;
    plVar11 = (long *)(lVar29 + 0x10);
    plVar16 = (long *)(lVar29 + 0x18);
    do {
      if (local_c4 == 2) {
        if (0 < (int)local_a8) {
          lVar29 = 0;
          iVar28 = 0;
          do {
            uVar9 = *local_d8 + *local_b0 * iVar28;
            uStack_84 = uVar9 & 1;
            local_88 = (int)uVar9 >> 1;
            if (lVar23 == 0) {
              lVar25 = *(long *)(param_1 + 0xb8);
              uVar30 = (ulong)*local_e0;
              if (*(int *)(param_1 + 0x6f8) < 10) {
                if (*(int *)(param_1 + 0x6f8) == 0) {
                  *(undefined4 *)(param_1 + 0x6f4) = 0;
                }
                do {
                  if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0')) ||
                     (iVar8 = FUN_00e4c7e4(param_1), iVar8 == -1)) break;
                  uVar9 = *(uint *)(param_1 + 0x6f8);
                  *(int *)(param_1 + 0x6f4) =
                       *(int *)(param_1 + 0x6f4) + (iVar8 << (ulong)(uVar9 & 0x1f));
                  *(uint *)(param_1 + 0x6f8) = uVar9 + 8;
                } while ((int)uVar9 < 0x11);
              }
              uVar5 = *(ushort *)
                       (lVar25 + uVar30 * 0x848 + ((ulong)*(uint *)(param_1 + 0x6f4) & 0x3ff) * 2 +
                       0x30);
              if ((short)uVar5 < 0) {
                uVar9 = FUN_00e4cf68(param_1,lVar25 + uVar30 * 0x848);
              }
              else {
                uVar13 = (uint)*(byte *)(*(long *)(lVar25 + uVar30 * 0x848 + 8) + (ulong)uVar5);
                iVar10 = *(int *)(param_1 + 0x6f8) - uVar13;
                iVar8 = 0;
                if (-1 < iVar10) {
                  iVar8 = iVar10;
                }
                uVar9 = (uint)uVar5;
                if (-1 >= iVar10) {
                  uVar9 = 0xffffffff;
                }
                *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) >> (ulong)(uVar13 & 0x1f);
                *(int *)(param_1 + 0x6f8) = iVar8;
              }
              if (*(char *)(lVar25 + uVar30 * 0x848 + 0x1b) != '\0') {
                uVar9 = *(uint *)(*(long *)(lVar25 + uVar30 * 0x848 + 0x838) + (long)(int)uVar9 * 4)
                ;
              }
              if (uVar9 == 0xffffffff) goto LAB_00e4d310;
              *(undefined8 *)(*local_98 + lVar29 * 8) =
                   *(undefined8 *)(*plVar11 + (long)(int)uVar9 * 8);
            }
            if ((0 < (int)local_b8) && (iVar28 < (int)local_a8)) {
              lVar25 = 0;
              do {
                uVar5 = *(ushort *)
                         (*plVar16 +
                          (ulong)*(byte *)(*(long *)(*local_98 + lVar29 * 8) + lVar25) * 0x10 +
                         lVar23 * 2);
                iVar8 = (int)lVar25;
                if ((short)uVar5 < 0) {
                  uVar9 = *local_b0 + *local_b0 * (iVar28 + iVar8) + *local_d8;
                  uStack_84 = uVar9 & 1;
                  local_88 = (int)uVar9 >> 1;
                }
                else {
                  iVar10 = FUN_00e4e8d4(param_1,*(long *)(param_1 + 0xb8) + (ulong)uVar5 * 0x848,
                                        local_c0,2,&uStack_84,&local_88,uVar26);
                  if (iVar10 == 0) goto LAB_00e4d310;
                }
                lVar25 = lVar25 + 1;
              } while ((lVar25 < local_b8) && (iVar28 + iVar8 + 1 < (int)local_a8));
              iVar28 = iVar28 + (int)lVar25;
            }
            lVar29 = lVar29 + 1;
          } while (iVar28 < (int)local_a8);
        }
      }
      else if ((2 < (int)local_c4) && (0 < (int)local_a8)) {
        lVar29 = 0;
        iVar28 = 0;
        do {
          iVar8 = *local_d8 + *local_b0 * iVar28;
          local_88 = 0;
          if (local_c4 != 0) {
            local_88 = iVar8 / (int)local_c4;
          }
          uStack_84 = iVar8 - local_88 * local_c4;
          if (lVar23 == 0) {
            lVar25 = *(long *)(param_1 + 0xb8);
            uVar30 = (ulong)*local_e0;
            if (*(int *)(param_1 + 0x6f8) < 10) {
              if (*(int *)(param_1 + 0x6f8) == 0) {
                *(undefined4 *)(param_1 + 0x6f4) = 0;
              }
              do {
                if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0')) ||
                   (iVar8 = FUN_00e4c7e4(param_1), iVar8 == -1)) break;
                uVar9 = *(uint *)(param_1 + 0x6f8);
                *(int *)(param_1 + 0x6f4) =
                     *(int *)(param_1 + 0x6f4) + (iVar8 << (ulong)(uVar9 & 0x1f));
                *(uint *)(param_1 + 0x6f8) = uVar9 + 8;
              } while ((int)uVar9 < 0x11);
            }
            uVar5 = *(ushort *)
                     (lVar25 + uVar30 * 0x848 + ((ulong)*(uint *)(param_1 + 0x6f4) & 0x3ff) * 2 +
                     0x30);
            if ((short)uVar5 < 0) {
              uVar9 = FUN_00e4cf68(param_1,lVar25 + uVar30 * 0x848);
            }
            else {
              uVar13 = (uint)*(byte *)(*(long *)(lVar25 + uVar30 * 0x848 + 8) + (ulong)uVar5);
              iVar10 = *(int *)(param_1 + 0x6f8) - uVar13;
              iVar8 = 0;
              if (-1 < iVar10) {
                iVar8 = iVar10;
              }
              uVar9 = (uint)uVar5;
              if (-1 >= iVar10) {
                uVar9 = 0xffffffff;
              }
              *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) >> (ulong)(uVar13 & 0x1f);
              *(int *)(param_1 + 0x6f8) = iVar8;
            }
            if (*(char *)(lVar25 + uVar30 * 0x848 + 0x1b) != '\0') {
              uVar9 = *(uint *)(*(long *)(lVar25 + uVar30 * 0x848 + 0x838) + (long)(int)uVar9 * 4);
            }
            if (uVar9 == 0xffffffff) goto LAB_00e4d310;
            *(undefined8 *)(*local_98 + lVar29 * 8) =
                 *(undefined8 *)(*plVar11 + (long)(int)uVar9 * 8);
          }
          if ((0 < (int)local_b8) && (iVar28 < (int)local_a8)) {
            lVar25 = 0;
            do {
              uVar5 = *(ushort *)
                       (*plVar16 +
                        (ulong)*(byte *)(*(long *)(*local_98 + lVar29 * 8) + lVar25) * 0x10 +
                       lVar23 * 2);
              iVar8 = (int)lVar25;
              if ((short)uVar5 < 0) {
                iVar10 = *local_b0 + *local_b0 * (iVar28 + iVar8) + *local_d8;
                local_88 = 0;
                if (local_c4 != 0) {
                  local_88 = iVar10 / (int)local_c4;
                }
                uStack_84 = iVar10 - local_88 * local_c4;
              }
              else {
                iVar10 = FUN_00e4e8d4(param_1,*(long *)(param_1 + 0xb8) + (ulong)uVar5 * 0x848,
                                      local_c0,local_c4,&uStack_84,&local_88,uVar26);
                if (iVar10 == 0) goto LAB_00e4d310;
              }
              lVar25 = lVar25 + 1;
            } while ((lVar25 < local_b8) && (iVar28 + iVar8 + 1 < (int)local_a8));
            iVar28 = iVar28 + (int)lVar25;
          }
          lVar29 = lVar29 + 1;
        } while (iVar28 < (int)local_a8);
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 8);
  }
LAB_00e4d310:
  *(int *)(param_1 + 0x94) = local_124;
  if (*(long *)(local_120 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


