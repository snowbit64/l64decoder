// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_quantize
// Entry Point: 00db6fb4
// Size: 2556 bytes
// Signature: undefined png_set_quantize(void)


void png_set_quantize(long param_1,byte *param_2,ulong param_3,uint param_4,long param_5,int param_6
                     )

{
  long *plVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined4 uVar17;
  bool bVar18;
  uint uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  void *__s;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  undefined2 *puVar34;
  undefined uVar35;
  undefined4 uVar36;
  undefined2 *puVar37;
  byte *pbVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  byte *pbVar42;
  long lVar43;
  int iVar44;
  int iVar45;
  ulong uVar46;
  
  lVar16 = tpidr_el0;
  lVar27 = *(long *)(lVar16 + 0x28);
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x168) >> 6 & 1) == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
      *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x40;
      uVar31 = (uint)param_3;
      if (param_6 == 0) {
        puVar20 = (undefined *)png_malloc(param_1,param_3 & 0xffffffff);
        *(undefined **)(param_1 + 0x3b8) = puVar20;
        if ((0 < (int)uVar31) && (*puVar20 = 0, uVar31 != 1)) {
          uVar46 = 1;
          do {
            *(char *)(*(long *)(param_1 + 0x3b8) + uVar46) = (char)uVar46;
            uVar46 = uVar46 + 1;
          } while ((param_3 & 0xffffffff) != uVar46);
        }
      }
      if ((int)param_4 < (int)uVar31) {
        uVar46 = param_3 & 0xffffffff;
        puVar20 = (undefined *)png_malloc(param_1,uVar46);
        if (param_5 == 0) {
          *(undefined **)(param_1 + 0x448) = puVar20;
          uVar21 = png_malloc(param_1,uVar46);
          *(undefined8 *)(param_1 + 0x450) = uVar21;
          if (0 < (int)uVar31) {
            uVar28 = 0;
            do {
              *(char *)(*(long *)(param_1 + 0x448) + uVar28) = (char)uVar28;
              *(char *)(*(long *)(param_1 + 0x450) + uVar28) = (char)uVar28;
              uVar28 = uVar28 + 1;
            } while (uVar46 != uVar28);
          }
          plVar1 = (long *)(param_1 + 0x448);
          lVar22 = png_calloc(param_1,0x1808);
          puVar23 = (undefined8 *)0x0;
          uVar29 = 0x60;
          lVar30 = 0x61;
          param_3 = param_3 & 0xffffffff;
          do {
            iVar26 = (int)param_3;
            uVar11 = iVar26 - 1;
            if ((int)uVar11 < 1) {
              uVar11 = 0;
            }
            iVar44 = 1;
            uVar28 = 0;
            pbVar38 = param_2 + 5;
            while (uVar28 != uVar11) {
              if ((int)(uVar28 + 1) < iVar26) {
                pbVar2 = param_2 + uVar28 * 3;
                pbVar42 = pbVar38;
                iVar45 = iVar44;
                do {
                  iVar15 = (uint)*pbVar2 - (uint)pbVar42[-2];
                  iVar14 = -iVar15;
                  if (-1 < iVar15) {
                    iVar14 = iVar15;
                  }
                  iVar12 = (uint)pbVar2[1] - (uint)pbVar42[-1];
                  iVar15 = -iVar12;
                  if (-1 < iVar12) {
                    iVar15 = iVar12;
                  }
                  iVar13 = (uint)pbVar2[2] - (uint)*pbVar42;
                  iVar12 = -iVar13;
                  if (-1 < iVar13) {
                    iVar12 = iVar13;
                  }
                  uVar40 = iVar15 + iVar14 + iVar12;
                  if (uVar40 <= uVar29) {
                    puVar23 = (undefined8 *)png_malloc_warn(param_1,0x10);
                    if (puVar23 == (undefined8 *)0x0) goto LAB_00db74cc;
                    lVar43 = (ulong)uVar40 * 8;
                    *(char *)(puVar23 + 1) = (char)uVar28;
                    *(char *)((long)puVar23 + 9) = (char)iVar45;
                    uVar21 = *(undefined8 *)(lVar22 + lVar43);
                    *(undefined8 **)(lVar22 + lVar43) = puVar23;
                    *puVar23 = uVar21;
                  }
                  iVar45 = iVar45 + 1;
                  pbVar42 = pbVar42 + 3;
                } while (iVar26 != iVar45);
              }
              iVar44 = iVar44 + 1;
              pbVar38 = pbVar38 + 3;
              uVar28 = uVar28 + 1;
              if (puVar23 == (undefined8 *)0x0) goto LAB_00db74cc;
            }
            if (puVar23 != (undefined8 *)0x0) {
              if (param_6 == 0) {
                lVar43 = 0;
                if ((int)uVar31 < 1) {
                  do {
                    for (plVar24 = *(long **)(lVar22 + lVar43 * 8); plVar24 != (long *)0x0;
                        plVar24 = (long *)*plVar24) {
                      lVar33 = *plVar1;
                      iVar26 = (int)param_3;
                      if (((int)(uint)*(byte *)(lVar33 + (ulong)*(byte *)(plVar24 + 1)) < iVar26) &&
                         ((int)(uint)*(byte *)(lVar33 + (ulong)*(byte *)((long)plVar24 + 9)) <
                          iVar26)) {
                        uVar28 = param_3 & 1;
                        param_3 = (ulong)(iVar26 - 1U);
                        bVar8 = *(byte *)((long)plVar24 + 9);
                        if (uVar28 != 0) {
                          bVar8 = *(byte *)(plVar24 + 1);
                        }
                        uVar28 = (ulong)bVar8;
                        bVar9 = *(byte *)(lVar33 + uVar28);
                        uVar10 = *(undefined2 *)(param_2 + param_3 * 3);
                        *(byte *)((long)(param_2 + (ulong)bVar9 * 3) + 2) =
                             *(byte *)((long)(param_2 + param_3 * 3) + 2);
                        lVar39 = *(long *)(param_1 + 0x450);
                        *(undefined2 *)(param_2 + (ulong)bVar9 * 3) = uVar10;
                        *(undefined *)(lVar33 + (ulong)*(byte *)(lVar39 + param_3)) =
                             *(undefined *)(lVar33 + uVar28);
                        *(undefined *)
                         (*(long *)(param_1 + 0x450) +
                         (ulong)*(byte *)(*(long *)(param_1 + 0x448) + uVar28)) =
                             *(undefined *)(*(long *)(param_1 + 0x450) + param_3);
                        *(char *)(*(long *)(param_1 + 0x448) + uVar28) = (char)(iVar26 - 1U);
                        *(byte *)(*(long *)(param_1 + 0x450) + param_3) = bVar8;
                      }
                      if ((int)param_3 <= (int)param_4) goto LAB_00db74cc;
                    }
                    lVar43 = lVar43 + 1;
                  } while (lVar43 != lVar30);
                }
                else {
                  do {
                    for (plVar24 = *(long **)(lVar22 + lVar43 * 8); plVar24 != (long *)0x0;
                        plVar24 = (long *)*plVar24) {
                      bVar8 = *(byte *)(plVar24 + 1);
                      lVar33 = *plVar1;
                      iVar26 = (int)param_3;
                      if (((int)(uint)*(byte *)(lVar33 + (ulong)bVar8) < iVar26) &&
                         (bVar9 = *(byte *)((long)plVar24 + 9),
                         (int)(uint)*(byte *)(lVar33 + (ulong)bVar9) < iVar26)) {
                        bVar18 = (param_3 & 1) != 0;
                        uVar40 = iVar26 - 1;
                        param_3 = (ulong)uVar40;
                        uVar11 = (uint)bVar9;
                        if (bVar18) {
                          uVar11 = (uint)bVar8;
                        }
                        uVar32 = (ulong)uVar11;
                        uVar28 = 0;
                        uVar7 = (uint)bVar8;
                        if (bVar18) {
                          uVar7 = (uint)bVar9;
                        }
                        bVar8 = *(byte *)(lVar33 + uVar32);
                        uVar10 = *(undefined2 *)(param_2 + param_3 * 3);
                        *(byte *)((long)(param_2 + (ulong)bVar8 * 3) + 2) =
                             *(byte *)((long)(param_2 + param_3 * 3) + 2);
                        *(undefined2 *)(param_2 + (ulong)bVar8 * 3) = uVar10;
                        do {
                          lVar39 = *(long *)(param_1 + 0x3b8);
                          uVar41 = (uint)*(byte *)(lVar39 + uVar28);
                          if (uVar41 == *(byte *)(lVar33 + uVar32)) {
                            *(undefined *)(lVar39 + uVar28) = *(undefined *)(lVar33 + (ulong)uVar7);
                            lVar39 = *(long *)(param_1 + 0x3b8);
                            uVar41 = (uint)*(byte *)(lVar39 + uVar28);
                          }
                          if (uVar40 == uVar41) {
                            *(undefined *)(lVar39 + uVar28) = *(undefined *)(*plVar1 + uVar32);
                          }
                          uVar28 = uVar28 + 1;
                          lVar33 = *plVar1;
                        } while (uVar46 != uVar28);
                        *(undefined *)
                         (lVar33 + (ulong)*(byte *)(*(long *)(param_1 + 0x450) + param_3)) =
                             *(undefined *)(lVar33 + uVar32);
                        *(undefined *)
                         (*(long *)(param_1 + 0x450) +
                         (ulong)*(byte *)(*(long *)(param_1 + 0x448) + uVar32)) =
                             *(undefined *)(*(long *)(param_1 + 0x450) + param_3);
                        *(char *)(*(long *)(param_1 + 0x448) + uVar32) = (char)uVar40;
                        *(char *)(*(long *)(param_1 + 0x450) + param_3) = (char)uVar11;
                      }
                      if ((int)param_3 <= (int)param_4) goto LAB_00db74cc;
                    }
                    lVar43 = lVar43 + 1;
                  } while (lVar43 != lVar30);
                }
              }
              else {
                lVar43 = 0;
                do {
                  for (plVar24 = *(long **)(lVar22 + lVar43 * 8); plVar24 != (long *)0x0;
                      plVar24 = (long *)*plVar24) {
                    lVar33 = *plVar1;
                    iVar26 = (int)param_3;
                    if (((int)(uint)*(byte *)(lVar33 + (ulong)*(byte *)(plVar24 + 1)) < iVar26) &&
                       ((int)(uint)*(byte *)(lVar33 + (ulong)*(byte *)((long)plVar24 + 9)) < iVar26)
                       ) {
                      uVar28 = param_3 & 1;
                      param_3 = (ulong)(iVar26 - 1U);
                      bVar8 = *(byte *)((long)plVar24 + 9);
                      if (uVar28 != 0) {
                        bVar8 = *(byte *)(plVar24 + 1);
                      }
                      uVar28 = (ulong)bVar8;
                      bVar9 = *(byte *)(lVar33 + uVar28);
                      uVar10 = *(undefined2 *)(param_2 + param_3 * 3);
                      *(byte *)((long)(param_2 + (ulong)bVar9 * 3) + 2) =
                           *(byte *)((long)(param_2 + param_3 * 3) + 2);
                      lVar39 = *(long *)(param_1 + 0x450);
                      *(undefined2 *)(param_2 + (ulong)bVar9 * 3) = uVar10;
                      *(undefined *)(lVar33 + (ulong)*(byte *)(lVar39 + param_3)) =
                           *(undefined *)(lVar33 + uVar28);
                      *(undefined *)
                       (*(long *)(param_1 + 0x450) +
                       (ulong)*(byte *)(*(long *)(param_1 + 0x448) + uVar28)) =
                           *(undefined *)(*(long *)(param_1 + 0x450) + param_3);
                      *(char *)(*(long *)(param_1 + 0x448) + uVar28) = (char)(iVar26 - 1U);
                      *(byte *)(*(long *)(param_1 + 0x450) + param_3) = bVar8;
                    }
                    if ((int)param_3 <= (int)param_4) goto LAB_00db74cc;
                  }
                  lVar43 = lVar43 + 1;
                } while (lVar43 != lVar30);
              }
            }
LAB_00db74cc:
            lVar43 = 0;
            do {
              plVar24 = *(long **)(lVar22 + lVar43 * 8);
              if (plVar24 != (long *)0x0) {
                do {
                  plVar24 = (long *)*plVar24;
                  png_free(param_1);
                } while (plVar24 != (long *)0x0);
                puVar23 = (undefined8 *)0x0;
              }
              *(undefined8 *)(lVar22 + lVar43 * 8) = 0;
              lVar43 = lVar43 + 1;
            } while (lVar43 != 0x301);
            uVar29 = uVar29 + 0x60;
            lVar30 = lVar30 + 0x60;
          } while ((int)param_4 < (int)param_3);
          png_free(param_1,lVar22);
          png_free(param_1,*(undefined8 *)(param_1 + 0x450));
          png_free(param_1,*(undefined8 *)(param_1 + 0x448));
          *plVar1 = 0;
          *(undefined8 *)(param_1 + 0x450) = 0;
          lVar30 = *(long *)(param_1 + 0x288);
        }
        else {
          uVar29 = uVar31 - 1;
          *(undefined **)(param_1 + 0x440) = puVar20;
          if ((0 < (int)uVar31) && (*puVar20 = 0, uVar29 != 0)) {
            uVar28 = 1;
            do {
              *(char *)(*(long *)(param_1 + 0x440) + uVar28) = (char)uVar28;
              uVar28 = uVar28 + 1;
            } while (uVar46 != uVar28);
          }
          uVar28 = param_3 & 0xffffffff;
          do {
            iVar26 = (int)uVar28;
            if ((iVar26 <= (int)param_4) || (iVar26 < 2)) break;
            uVar32 = 0;
            uVar28 = (ulong)(iVar26 - 1);
            bVar18 = true;
            do {
              pbVar38 = (byte *)(*(long *)(param_1 + 0x440) + uVar32);
              bVar8 = *pbVar38;
              bVar9 = pbVar38[1];
              if (*(ushort *)(param_5 + (ulong)bVar8 * 2) < *(ushort *)(param_5 + (ulong)bVar9 * 2))
              {
                *(byte *)(*(long *)(param_1 + 0x440) + uVar32) = bVar9;
                bVar18 = false;
                *(byte *)(*(long *)(param_1 + 0x440) + uVar32 + 1) = bVar8;
              }
              uVar32 = uVar32 + 1;
            } while (uVar29 != uVar32);
            uVar29 = uVar29 - 1;
          } while (!bVar18);
          if (param_6 == 0) {
            if (0 < (int)param_4) {
              uVar28 = 0;
              param_3 = param_3 & 0xffffffff;
              do {
                if ((int)param_4 <= (int)(uint)*(byte *)(*(long *)(param_1 + 0x440) + uVar28)) {
                  uVar32 = (ulong)(int)param_3;
                  puVar37 = (undefined2 *)(param_2 + uVar32 + (long)(int)param_3 * 2);
                  do {
                    puVar34 = puVar37;
                    pbVar38 = (byte *)(*(long *)(param_1 + 0x440) + -1 + uVar32);
                    uVar32 = uVar32 - 1;
                    puVar37 = (undefined2 *)((long)puVar34 + -3);
                  } while ((param_4 & 0xff) <= (uint)*pbVar38);
                  uVar10 = *puVar37;
                  puVar3 = (undefined2 *)(param_2 + uVar28 * 3);
                  bVar8 = *(byte *)((long)puVar34 + -1);
                  bVar9 = *(byte *)(puVar3 + 1);
                  *puVar37 = *puVar3;
                  *(byte *)((long)puVar34 + -1) = bVar9;
                  lVar30 = *(long *)(param_1 + 0x3b8);
                  *puVar3 = uVar10;
                  *(byte *)(puVar3 + 1) = bVar8;
                  *(char *)(lVar30 + uVar32) = (char)uVar28;
                  param_3 = uVar32 & 0xffffffff;
                  *(char *)(*(long *)(param_1 + 0x3b8) + uVar28) = (char)uVar32;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 != param_4);
            }
            if (0 < (int)uVar31) {
              uVar28 = 0;
              do {
                bVar8 = *(byte *)(*(long *)(param_1 + 0x3b8) + uVar28);
                if ((int)param_4 <= (int)(uint)bVar8) {
                  if ((int)param_4 < 2) {
                    uVar35 = 0;
                  }
                  else {
                    pbVar38 = param_2 + (ulong)bVar8 * 3;
                    uVar36 = 0;
                    iVar44 = (uint)pbVar38[1] - (uint)param_2[1];
                    iVar26 = -iVar44;
                    if (-1 < iVar44) {
                      iVar26 = iVar44;
                    }
                    iVar45 = (uint)*pbVar38 - (uint)*param_2;
                    iVar44 = -iVar45;
                    if (-1 < iVar45) {
                      iVar44 = iVar45;
                    }
                    iVar14 = (uint)pbVar38[2] - (uint)param_2[2];
                    iVar45 = -iVar14;
                    if (-1 < iVar14) {
                      iVar45 = iVar14;
                    }
                    uVar32 = 1;
                    pbVar42 = param_2 + 5;
                    iVar26 = iVar26 + iVar44 + iVar45;
                    do {
                      iVar45 = (uint)*pbVar38 - (uint)pbVar42[-2];
                      iVar44 = -iVar45;
                      if (-1 < iVar45) {
                        iVar44 = iVar45;
                      }
                      iVar14 = (uint)pbVar38[1] - (uint)pbVar42[-1];
                      iVar45 = -iVar14;
                      if (-1 < iVar14) {
                        iVar45 = iVar14;
                      }
                      iVar15 = (uint)pbVar38[2] - (uint)*pbVar42;
                      iVar14 = -iVar15;
                      if (-1 < iVar15) {
                        iVar14 = iVar15;
                      }
                      iVar14 = iVar45 + iVar44 + iVar14;
                      uVar17 = (int)uVar32;
                      if (iVar26 <= iVar14) {
                        iVar14 = iVar26;
                        uVar17 = uVar36;
                      }
                      uVar36 = uVar17;
                      uVar35 = (undefined)uVar36;
                      uVar32 = uVar32 + 1;
                      pbVar42 = pbVar42 + 3;
                      iVar26 = iVar14;
                    } while (param_4 != uVar32);
                  }
                  *(undefined *)(*(long *)(param_1 + 0x3b8) + uVar28) = uVar35;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 != uVar46);
            }
          }
          else if (0 < (int)param_4) {
            lVar30 = *(long *)(param_1 + 0x440);
            uVar46 = 0;
            do {
              if ((int)param_4 <= (int)(uint)*(byte *)(lVar30 + uVar46)) {
                iVar26 = (int)param_3;
                puVar37 = (undefined2 *)(param_2 + (long)iVar26 + (long)iVar26 * 2);
                pbVar38 = (byte *)(lVar30 + -1 + (long)iVar26);
                do {
                  puVar34 = puVar37;
                  bVar8 = *pbVar38;
                  param_3 = (ulong)((int)param_3 - 1);
                  puVar37 = (undefined2 *)((long)puVar34 + -3);
                  pbVar38 = pbVar38 + -1;
                } while ((param_4 & 0xff) <= (uint)bVar8);
                uVar10 = *puVar37;
                *(byte *)((long)(param_2 + uVar46 * 3) + 2) = *(byte *)((long)puVar34 + -1);
                *(undefined2 *)(param_2 + uVar46 * 3) = uVar10;
              }
              uVar46 = uVar46 + 1;
            } while (uVar46 != param_4);
          }
          png_free(param_1,*(undefined8 *)(param_1 + 0x440));
          *(undefined8 *)(param_1 + 0x440) = 0;
          lVar30 = *(long *)(param_1 + 0x288);
        }
      }
      else {
        lVar30 = *(long *)(param_1 + 0x288);
        param_4 = uVar31;
      }
      if (lVar30 == 0) {
        *(byte **)(param_1 + 0x288) = param_2;
      }
      *(short *)(param_1 + 0x290) = (short)param_4;
      if (param_6 != 0) {
        uVar21 = png_calloc(param_1,0x8000);
        *(undefined8 *)(param_1 + 0x3b0) = uVar21;
        __s = (void *)png_malloc(param_1,0x8000);
        memset(__s,0xff,0x8000);
        if (0 < (int)param_4) {
          uVar46 = 0;
          do {
            uVar31 = 0;
            pbVar38 = param_2 + uVar46 * 3;
            uVar29 = (uint)(*pbVar38 >> 3);
            bVar8 = pbVar38[2] >> 3;
            uVar11 = (uint)(pbVar38[1] >> 3);
            do {
              uVar40 = 0;
              uVar7 = uVar31 - uVar29;
              if (uVar31 < uVar29 || uVar31 - uVar29 == 0) {
                uVar7 = uVar29 - uVar31;
              }
              do {
                uVar41 = uVar40 - uVar11;
                if (uVar40 < uVar11 || uVar40 - uVar11 == 0) {
                  uVar41 = uVar11 - uVar40;
                }
                uVar19 = 0;
                uVar4 = uVar7;
                if ((int)uVar7 <= (int)uVar41) {
                  uVar4 = uVar41;
                }
                uVar25 = (uint)bVar8;
                do {
                  uVar28 = (ulong)(uVar31 << 10 | uVar40 << 5 | uVar19);
                  uVar5 = uVar19 - bVar8;
                  if (uVar19 <= bVar8) {
                    uVar5 = uVar25;
                  }
                  uVar6 = uVar4;
                  if ((int)uVar4 <= (int)uVar5) {
                    uVar6 = uVar5;
                  }
                  iVar26 = uVar41 + uVar7 + uVar5 + uVar6;
                  if (iVar26 < (int)(uint)*(byte *)((long)__s + uVar28)) {
                    lVar30 = *(long *)(param_1 + 0x3b0);
                    *(char *)((long)__s + uVar28) = (char)iVar26;
                    *(char *)(lVar30 + uVar28) = (char)uVar46;
                  }
                  uVar19 = uVar19 + 1;
                  uVar25 = uVar25 - 1;
                } while (uVar19 != 0x20);
                uVar40 = uVar40 + 1;
              } while (uVar40 != 0x20);
              uVar31 = uVar31 + 1;
            } while (uVar31 != 0x20);
            uVar46 = uVar46 + 1;
          } while (uVar46 != param_4);
        }
        png_free(param_1,__s);
      }
    }
    else {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    }
  }
  if (*(long *)(lVar16 + 0x28) != lVar27) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


