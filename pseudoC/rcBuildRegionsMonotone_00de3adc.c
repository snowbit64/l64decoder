// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcBuildRegionsMonotone
// Entry Point: 00de3adc
// Size: 4584 bytes
// Signature: undefined __cdecl rcBuildRegionsMonotone(rcContext * param_1, rcCompactHeightfield * param_2, int param_3, int param_4, int param_5)


/* WARNING: Type propagation algorithm not settling */
/* rcBuildRegionsMonotone(rcContext*, rcCompactHeightfield&, int, int, int) */

uint rcBuildRegionsMonotone
               (rcContext *param_1,rcCompactHeightfield *param_2,int param_3,int param_4,int param_5
               )

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  undefined2 *__s;
  void *pvVar10;
  ulong uVar11;
  uint *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined (*pauVar17) [16];
  ushort *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined2 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ushort uVar26;
  long lVar27;
  long lVar28;
  undefined2 *puVar29;
  long lVar30;
  ushort uVar31;
  int iVar32;
  long lVar33;
  ulong uVar34;
  ushort uVar35;
  undefined auVar36 [16];
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x14);
  }
  uVar9 = *(uint *)(param_2 + 4);
  uVar6 = *(uint *)param_2;
  __s = (undefined2 *)rcAlloc(*(int *)(param_2 + 8) << 1,1);
  if (__s == (undefined2 *)0x0) {
    rcContext::log((rcLogCategory)param_1,(char *)0x3,
                   "rcBuildRegionsMonotone: Out of memory \'src\' (%d).");
    uVar9 = 0;
  }
  else {
    memset(__s,0,(long)*(int *)(param_2 + 8) << 1);
    uVar4 = *(uint *)param_2;
    if ((int)*(uint *)param_2 <= (int)*(uint *)(param_2 + 4)) {
      uVar4 = *(uint *)(param_2 + 4);
    }
    pvVar10 = (void *)rcAlloc(uVar4 << 3,1);
    if (pvVar10 == (void *)0x0) {
      rcContext::log((rcLogCategory)param_1,(char *)0x3,
                     "rcBuildRegionsMonotone: Out of memory \'sweeps\' (%d).",(ulong)uVar4);
      uVar9 = 0;
    }
    else {
      if (param_3 < 1) {
        uVar35 = 1;
      }
      else {
        uVar4 = uVar6;
        if (param_3 <= (int)uVar6) {
          uVar4 = param_3;
        }
        uVar2 = uVar9;
        if (param_3 <= (int)uVar9) {
          uVar2 = param_3;
        }
        lVar27 = (long)*(int *)param_2;
        lVar28 = *(long *)(param_2 + 0x40);
        lVar30 = *(long *)(param_2 + 0x58);
        if (0 < (int)uVar9 && 0 < (int)uVar4) {
          uVar34 = 0;
          do {
            uVar11 = 0;
            do {
              uVar3 = *(uint *)(lVar28 + (uVar11 + uVar34 * lVar27) * 4);
              if (uVar3 >> 0x18 != 0) {
                uVar14 = (ulong)uVar3 & 0xffffff;
                uVar21 = uVar14 + (uVar3 >> 0x18);
                uVar23 = uVar21;
                if (uVar21 < uVar14 + 1) {
                  uVar23 = uVar14 + 1;
                }
                uVar23 = uVar23 - uVar14;
                if (7 < uVar23) {
                  uVar24 = uVar21;
                  if (uVar21 < uVar14 + 1) {
                    uVar24 = uVar14 + 1;
                  }
                  if ((undefined2 *)(lVar30 + uVar24) <= __s + uVar14 ||
                      __s + uVar24 <= (undefined2 *)(lVar30 + uVar14)) {
                    if (uVar23 < 0x10) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = uVar23 & 0xfffffffffffffff0;
                      pauVar17 = (undefined (*) [16])(lVar30 + uVar14);
                      puVar22 = __s + uVar14 + 8;
                      uVar24 = uVar19;
                      do {
                        auVar36 = NEON_cmtst(*pauVar17,*pauVar17,1);
                        if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          puVar22[-8] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar22[-7] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar22[-6] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar22[-5] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar22[-4] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar22[-3] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar22[-2] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar22[-1] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          *puVar22 = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar22[1] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar22[2] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar22[3] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar22[4] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar22[5] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar22[6] = 0x8001;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar22[7] = 0x8001;
                        }
                        uVar24 = uVar24 - 0x10;
                        pauVar17 = pauVar17 + 1;
                        puVar22 = puVar22 + 0x10;
                      } while (uVar24 != 0);
                      if (uVar23 == uVar19) goto LAB_00de3c08;
                      if (((uint)uVar23 >> 3 & 1) == 0) {
                        uVar14 = uVar19 + uVar14;
                        goto LAB_00de3efc;
                      }
                    }
                    uVar24 = (ulong)(uVar3 & 0xffffff);
                    uVar23 = ((ulong)uVar3 & 0xffffff) + (ulong)(uVar3 >> 0x18);
                    if (uVar23 < uVar24 + 1) {
                      uVar23 = uVar24 + 1;
                    }
                    puVar16 = (undefined8 *)(lVar30 + uVar19 + uVar14);
                    puVar22 = __s + uVar19 + uVar14 + 4;
                    uVar25 = uVar23 - uVar24 & 0xfffffffffffffff8;
                    uVar14 = uVar25 + uVar14;
                    lVar20 = uVar19 - uVar25;
                    do {
                      uVar19 = NEON_cmtst(*puVar16,*puVar16,1);
                      if ((uVar19 & 1) != 0) {
                        puVar22[-4] = 0x8001;
                      }
                      if ((uVar19 & 0x100) != 0) {
                        puVar22[-3] = 0x8001;
                      }
                      if ((uVar19 & 0x10000) != 0) {
                        puVar22[-2] = 0x8001;
                      }
                      if ((uVar19 & 0x1000000) != 0) {
                        puVar22[-1] = 0x8001;
                      }
                      if ((uVar19 & 0x100000000) != 0) {
                        *puVar22 = 0x8001;
                      }
                      if ((uVar19 & 0x10000000000) != 0) {
                        puVar22[1] = 0x8001;
                      }
                      if ((uVar19 & 0x1000000000000) != 0) {
                        puVar22[2] = 0x8001;
                      }
                      if ((uVar19 & 0x100000000000000) != 0) {
                        puVar22[3] = 0x8001;
                      }
                      lVar20 = lVar20 + 8;
                      puVar16 = puVar16 + 1;
                      puVar22 = puVar22 + 8;
                    } while (lVar20 != 0);
                    if (uVar23 - uVar24 == uVar25) goto LAB_00de3c08;
                  }
                }
LAB_00de3efc:
                do {
                  if (*(char *)(lVar30 + uVar14) != '\0') {
                    __s[uVar14] = 0x8001;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar21);
              }
LAB_00de3c08:
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar4);
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar9);
          if (0 < (int)uVar9 && 0 < (int)uVar4) {
            uVar34 = 0;
            do {
              lVar20 = (long)(int)(uVar6 - uVar4);
              do {
                uVar3 = *(uint *)(lVar28 + (lVar20 + uVar34 * lVar27) * 4);
                if (uVar3 >> 0x18 != 0) {
                  uVar11 = (ulong)uVar3 & 0xffffff;
                  uVar14 = uVar11 + (uVar3 >> 0x18);
                  uVar21 = uVar14;
                  if (uVar14 < uVar11 + 1) {
                    uVar21 = uVar11 + 1;
                  }
                  uVar21 = uVar21 - uVar11;
                  if (7 < uVar21) {
                    uVar23 = uVar14;
                    if (uVar14 < uVar11 + 1) {
                      uVar23 = uVar11 + 1;
                    }
                    if ((undefined2 *)(lVar30 + uVar23) <= __s + uVar11 ||
                        __s + uVar23 <= (undefined2 *)(lVar30 + uVar11)) {
                      if (uVar21 < 0x10) {
                        uVar24 = 0;
                      }
                      else {
                        uVar24 = uVar21 & 0xfffffffffffffff0;
                        pauVar17 = (undefined (*) [16])(lVar30 + uVar11);
                        puVar22 = __s + uVar11 + 8;
                        uVar23 = uVar24;
                        do {
                          auVar36 = NEON_cmtst(*pauVar17,*pauVar17,1);
                          if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                            puVar22[-8] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                            puVar22[-7] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                            puVar22[-6] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                            puVar22[-5] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                            puVar22[-4] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                            puVar22[-3] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0)
                          {
                            puVar22[-2] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0
                             ) {
                            puVar22[-1] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                            *puVar22 = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                            puVar22[1] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                            puVar22[2] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                            puVar22[3] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                            puVar22[4] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                            puVar22[5] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0)
                          {
                            puVar22[6] = 0x8002;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0
                             ) {
                            puVar22[7] = 0x8002;
                          }
                          uVar23 = uVar23 - 0x10;
                          pauVar17 = pauVar17 + 1;
                          puVar22 = puVar22 + 0x10;
                        } while (uVar23 != 0);
                        if (uVar21 == uVar24) goto LAB_00de3f88;
                        if (((uint)uVar21 >> 3 & 1) == 0) {
                          uVar11 = uVar24 + uVar11;
                          goto LAB_00de427c;
                        }
                      }
                      uVar23 = (ulong)(uVar3 & 0xffffff);
                      uVar21 = ((ulong)uVar3 & 0xffffff) + (ulong)(uVar3 >> 0x18);
                      if (uVar21 < uVar23 + 1) {
                        uVar21 = uVar23 + 1;
                      }
                      puVar16 = (undefined8 *)(lVar30 + uVar24 + uVar11);
                      puVar22 = __s + uVar24 + uVar11 + 4;
                      uVar19 = uVar21 - uVar23 & 0xfffffffffffffff8;
                      uVar11 = uVar19 + uVar11;
                      lVar15 = uVar24 - uVar19;
                      do {
                        uVar24 = NEON_cmtst(*puVar16,*puVar16,1);
                        if ((uVar24 & 1) != 0) {
                          puVar22[-4] = 0x8002;
                        }
                        if ((uVar24 & 0x100) != 0) {
                          puVar22[-3] = 0x8002;
                        }
                        if ((uVar24 & 0x10000) != 0) {
                          puVar22[-2] = 0x8002;
                        }
                        if ((uVar24 & 0x1000000) != 0) {
                          puVar22[-1] = 0x8002;
                        }
                        if ((uVar24 & 0x100000000) != 0) {
                          *puVar22 = 0x8002;
                        }
                        if ((uVar24 & 0x10000000000) != 0) {
                          puVar22[1] = 0x8002;
                        }
                        if ((uVar24 & 0x1000000000000) != 0) {
                          puVar22[2] = 0x8002;
                        }
                        if ((uVar24 & 0x100000000000000) != 0) {
                          puVar22[3] = 0x8002;
                        }
                        lVar15 = lVar15 + 8;
                        puVar16 = puVar16 + 1;
                        puVar22 = puVar22 + 8;
                      } while (lVar15 != 0);
                      if (uVar21 - uVar23 == uVar19) goto LAB_00de3f88;
                    }
                  }
LAB_00de427c:
                  do {
                    if (*(char *)(lVar30 + uVar11) != '\0') {
                      __s[uVar11] = 0x8002;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar14);
                }
LAB_00de3f88:
                lVar20 = lVar20 + 1;
              } while (lVar20 != (int)uVar6);
              uVar34 = uVar34 + 1;
            } while (uVar34 != uVar9);
          }
        }
        if (0 < (int)uVar6 && 0 < (int)uVar2) {
          uVar34 = 0;
          do {
            uVar11 = 0;
            do {
              uVar4 = *(uint *)(lVar28 + (uVar11 + uVar34 * lVar27) * 4);
              if (uVar4 >> 0x18 != 0) {
                uVar14 = (ulong)uVar4 & 0xffffff;
                uVar21 = uVar14 + (uVar4 >> 0x18);
                uVar23 = uVar21;
                if (uVar21 < uVar14 + 1) {
                  uVar23 = uVar14 + 1;
                }
                uVar23 = uVar23 - uVar14;
                if (7 < uVar23) {
                  uVar24 = uVar21;
                  if (uVar21 < uVar14 + 1) {
                    uVar24 = uVar14 + 1;
                  }
                  if ((undefined2 *)(lVar30 + uVar24) <= __s + uVar14 ||
                      __s + uVar24 <= (undefined2 *)(lVar30 + uVar14)) {
                    if (uVar23 < 0x10) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = uVar23 & 0xfffffffffffffff0;
                      pauVar17 = (undefined (*) [16])(lVar30 + uVar14);
                      puVar22 = __s + uVar14 + 8;
                      uVar24 = uVar19;
                      do {
                        auVar36 = NEON_cmtst(*pauVar17,*pauVar17,1);
                        if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          puVar22[-8] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar22[-7] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar22[-6] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar22[-5] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar22[-4] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar22[-3] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar22[-2] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar22[-1] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          *puVar22 = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar22[1] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar22[2] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar22[3] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar22[4] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar22[5] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar22[6] = 0x8003;
                        }
                        if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar22[7] = 0x8003;
                        }
                        uVar24 = uVar24 - 0x10;
                        pauVar17 = pauVar17 + 1;
                        puVar22 = puVar22 + 0x10;
                      } while (uVar24 != 0);
                      if (uVar23 == uVar19) goto LAB_00de42d4;
                      if (((uint)uVar23 >> 3 & 1) == 0) {
                        uVar14 = uVar19 + uVar14;
                        goto LAB_00de45c8;
                      }
                    }
                    uVar24 = (ulong)(uVar4 & 0xffffff);
                    uVar23 = ((ulong)uVar4 & 0xffffff) + (ulong)(uVar4 >> 0x18);
                    if (uVar23 < uVar24 + 1) {
                      uVar23 = uVar24 + 1;
                    }
                    puVar16 = (undefined8 *)(lVar30 + uVar19 + uVar14);
                    puVar22 = __s + uVar19 + uVar14 + 4;
                    uVar25 = uVar23 - uVar24 & 0xfffffffffffffff8;
                    uVar14 = uVar25 + uVar14;
                    lVar20 = uVar19 - uVar25;
                    do {
                      uVar19 = NEON_cmtst(*puVar16,*puVar16,1);
                      if ((uVar19 & 1) != 0) {
                        puVar22[-4] = 0x8003;
                      }
                      if ((uVar19 & 0x100) != 0) {
                        puVar22[-3] = 0x8003;
                      }
                      if ((uVar19 & 0x10000) != 0) {
                        puVar22[-2] = 0x8003;
                      }
                      if ((uVar19 & 0x1000000) != 0) {
                        puVar22[-1] = 0x8003;
                      }
                      if ((uVar19 & 0x100000000) != 0) {
                        *puVar22 = 0x8003;
                      }
                      if ((uVar19 & 0x10000000000) != 0) {
                        puVar22[1] = 0x8003;
                      }
                      if ((uVar19 & 0x1000000000000) != 0) {
                        puVar22[2] = 0x8003;
                      }
                      if ((uVar19 & 0x100000000000000) != 0) {
                        puVar22[3] = 0x8003;
                      }
                      lVar20 = lVar20 + 8;
                      puVar16 = puVar16 + 1;
                      puVar22 = puVar22 + 8;
                    } while (lVar20 != 0);
                    if (uVar23 - uVar24 == uVar25) goto LAB_00de42d4;
                  }
                }
LAB_00de45c8:
                do {
                  if (*(char *)(lVar30 + uVar14) != '\0') {
                    __s[uVar14] = 0x8003;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar21);
              }
LAB_00de42d4:
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar6);
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar2);
          if (0 < (int)uVar6 && 0 < (int)uVar2) {
            lVar20 = (long)(int)(uVar9 - uVar2);
            do {
              uVar34 = 0;
              do {
                uVar4 = *(uint *)(lVar28 + (uVar34 + lVar20 * lVar27) * 4);
                if (uVar4 >> 0x18 != 0) {
                  uVar11 = (ulong)uVar4 & 0xffffff;
                  uVar14 = uVar11 + (uVar4 >> 0x18);
                  uVar21 = uVar14;
                  if (uVar14 < uVar11 + 1) {
                    uVar21 = uVar11 + 1;
                  }
                  uVar21 = uVar21 - uVar11;
                  if (7 < uVar21) {
                    uVar23 = uVar14;
                    if (uVar14 < uVar11 + 1) {
                      uVar23 = uVar11 + 1;
                    }
                    if ((undefined2 *)(lVar30 + uVar23) <= __s + uVar11 ||
                        __s + uVar23 <= (undefined2 *)(lVar30 + uVar11)) {
                      if (uVar21 < 0x10) {
                        uVar24 = 0;
                      }
                      else {
                        uVar24 = uVar21 & 0xfffffffffffffff0;
                        pauVar17 = (undefined (*) [16])(lVar30 + uVar11);
                        puVar22 = __s + uVar11 + 8;
                        uVar23 = uVar24;
                        do {
                          auVar36 = NEON_cmtst(*pauVar17,*pauVar17,1);
                          if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                            puVar22[-8] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                            puVar22[-7] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                            puVar22[-6] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                            puVar22[-5] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                            puVar22[-4] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                            puVar22[-3] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0)
                          {
                            puVar22[-2] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0
                             ) {
                            puVar22[-1] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                            *puVar22 = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                            puVar22[1] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                            puVar22[2] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                            puVar22[3] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                            puVar22[4] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                            puVar22[5] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0)
                          {
                            puVar22[6] = 0x8004;
                          }
                          if ((auVar36 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0
                             ) {
                            puVar22[7] = 0x8004;
                          }
                          uVar23 = uVar23 - 0x10;
                          pauVar17 = pauVar17 + 1;
                          puVar22 = puVar22 + 0x10;
                        } while (uVar23 != 0);
                        if (uVar21 == uVar24) goto LAB_00de460c;
                        if (((uint)uVar21 >> 3 & 1) == 0) {
                          uVar11 = uVar24 + uVar11;
                          goto LAB_00de4900;
                        }
                      }
                      uVar23 = (ulong)(uVar4 & 0xffffff);
                      uVar21 = ((ulong)uVar4 & 0xffffff) + (ulong)(uVar4 >> 0x18);
                      if (uVar21 < uVar23 + 1) {
                        uVar21 = uVar23 + 1;
                      }
                      puVar16 = (undefined8 *)(lVar30 + uVar24 + uVar11);
                      puVar22 = __s + uVar24 + uVar11 + 4;
                      uVar19 = uVar21 - uVar23 & 0xfffffffffffffff8;
                      uVar11 = uVar19 + uVar11;
                      lVar15 = uVar24 - uVar19;
                      do {
                        uVar24 = NEON_cmtst(*puVar16,*puVar16,1);
                        if ((uVar24 & 1) != 0) {
                          puVar22[-4] = 0x8004;
                        }
                        if ((uVar24 & 0x100) != 0) {
                          puVar22[-3] = 0x8004;
                        }
                        if ((uVar24 & 0x10000) != 0) {
                          puVar22[-2] = 0x8004;
                        }
                        if ((uVar24 & 0x1000000) != 0) {
                          puVar22[-1] = 0x8004;
                        }
                        if ((uVar24 & 0x100000000) != 0) {
                          *puVar22 = 0x8004;
                        }
                        if ((uVar24 & 0x10000000000) != 0) {
                          puVar22[1] = 0x8004;
                        }
                        if ((uVar24 & 0x1000000000000) != 0) {
                          puVar22[2] = 0x8004;
                        }
                        if ((uVar24 & 0x100000000000000) != 0) {
                          puVar22[3] = 0x8004;
                        }
                        lVar15 = lVar15 + 8;
                        puVar16 = puVar16 + 1;
                        puVar22 = puVar22 + 8;
                      } while (lVar15 != 0);
                      if (uVar21 - uVar23 == uVar19) goto LAB_00de460c;
                    }
                  }
LAB_00de4900:
                  do {
                    if (*(char *)(lVar30 + uVar11) != '\0') {
                      __s[uVar11] = 0x8004;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < uVar14);
                }
LAB_00de460c:
                uVar34 = uVar34 + 1;
              } while (uVar34 != uVar6);
              lVar20 = lVar20 + 1;
            } while (lVar20 != (int)uVar9);
          }
        }
        uVar35 = 5;
        *(int *)(param_2 + 0x14) = param_3;
      }
      local_78 = (void *)0x0;
      uStack_70 = 0;
      rcIntArray::resize((rcIntArray *)&local_78,0x100);
      if (param_3 < (int)(uVar9 - param_3)) {
        iVar7 = uVar6 - param_3;
        lVar28 = (long)param_3;
        lVar27 = lVar28;
        do {
          rcIntArray::resize((rcIntArray *)&local_78,uVar35 + 1);
          memset(local_78,0,(ulong)uVar35 << 2);
          if (param_3 < iVar7) {
            lVar20 = lVar27 * (int)uVar6;
            lVar15 = *(long *)(param_2 + 0x40);
            uVar26 = 1;
            lVar30 = lVar28;
            iVar32 = param_3;
            do {
              uVar4 = *(uint *)(lVar15 + (lVar30 + lVar20) * 4);
              if (uVar4 >> 0x18 != 0) {
                uVar34 = (ulong)uVar4 & 0xffffff;
                lVar33 = *(long *)(param_2 + 0x58);
                uVar11 = uVar34 + (uVar4 >> 0x18);
                puVar12 = (uint *)(*(long *)(param_2 + 0x48) + uVar34 * 8 + 4);
                do {
                  if (*(char *)(lVar33 + uVar34) != '\0') {
                    uVar14 = (ulong)*puVar12 & 0x3f;
                    if ((int)uVar14 == 0x3f) {
LAB_00de4a7c:
                      puVar18 = (ushort *)((long)pvVar10 + (ulong)uVar26 * 8);
                      *puVar18 = uVar26;
                      *(undefined4 *)(puVar18 + 2) = 0;
                      uVar14 = (ulong)(*puVar12 >> 0x12) & 0x3f;
                      iVar13 = (int)uVar14;
                      uVar31 = uVar26;
                      uVar26 = uVar26 + 1;
                    }
                    else {
                      lVar1 = ((ulong)*(uint *)(lVar15 + (long)(iVar32 + (int)lVar20 + -1) * 4) &
                              0xffffff) + uVar14;
                      uVar31 = __s[lVar1];
                      if (((short)uVar31 < 0) ||
                         (*(char *)(lVar33 + uVar34) != *(char *)(lVar33 + lVar1) || uVar31 == 0))
                      goto LAB_00de4a7c;
                      uVar14 = (ulong)(*puVar12 >> 0x12) & 0x3f;
                      iVar13 = (int)uVar14;
                    }
                    if (iVar13 != 0x3f) {
                      lVar1 = ((ulong)*(uint *)(lVar15 + (lVar30 + (lVar27 + -1) * (long)(int)uVar6)
                                                         * 4) & 0xffffff) + uVar14;
                      uVar5 = __s[lVar1];
                      if ((0 < (short)uVar5) &&
                         (*(char *)(lVar33 + uVar34) == *(char *)(lVar33 + lVar1))) {
                        puVar18 = (ushort *)((long)pvVar10 + (ulong)uVar31 * 8 + 6);
                        if ((*puVar18 == 0) || (*puVar18 == uVar5)) {
                          *puVar18 = uVar5;
                          *(short *)((long)pvVar10 + (ulong)uVar31 * 8 + 4) =
                               *(short *)((long)pvVar10 + (ulong)uVar31 * 8 + 4) + 1;
                          *(int *)((long)local_78 + (ulong)uVar5 * 4) =
                               *(int *)((long)local_78 + (ulong)uVar5 * 4) + 1;
                        }
                        else {
                          *puVar18 = 0xffff;
                        }
                      }
                    }
                    __s[uVar34] = uVar31;
                  }
                  uVar34 = uVar34 + 1;
                  puVar12 = puVar12 + 2;
                } while (uVar34 < uVar11);
              }
              lVar30 = lVar30 + 1;
              iVar32 = iVar32 + 1;
            } while (lVar30 != iVar7);
            if (1 < uVar26) {
              lVar30 = (ulong)uVar26 - 1;
              puVar18 = (ushort *)((long)pvVar10 + 0xe);
              do {
                uVar31 = *puVar18;
                if (((uVar31 == 0) || (uVar31 == 0xffff)) ||
                   (*(uint *)((long)local_78 + (ulong)uVar31 * 4) != (uint)puVar18[-1])) {
                  uVar31 = uVar35;
                  uVar35 = uVar35 + 1;
                }
                puVar18[-2] = uVar31;
                puVar18 = puVar18 + 4;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
            if (param_3 < iVar7) {
              lVar15 = *(long *)(param_2 + 0x40);
              lVar30 = lVar28;
              do {
                uVar4 = *(uint *)(lVar15 + (lVar30 + lVar20) * 4);
                if (uVar4 >> 0x18 != 0) {
                  uVar34 = (ulong)uVar4 & 0xffffff;
                  uVar11 = uVar34 + (uVar4 >> 0x18);
                  do {
                    uVar31 = __s[uVar34];
                    if ((uVar31 != 0) && (uVar31 < uVar26)) {
                      __s[uVar34] = *(undefined2 *)((long)pvVar10 + (ulong)uVar31 * 8 + 2);
                    }
                    uVar34 = uVar34 + 1;
                  } while (uVar34 < uVar11);
                }
                lVar30 = lVar30 + 1;
              } while (lVar30 != iVar7);
            }
          }
          lVar27 = lVar27 + 1;
        } while (uVar9 - param_3 != (int)lVar27);
      }
      if (param_1[9] != (rcContext)0x0) {
        (**(code **)(*(long *)param_1 + 0x28))(param_1,0x18);
      }
      *(ushort *)(param_2 + 0x1a) = uVar35;
      uVar9 = FUN_00de4cc4(param_1,param_4,param_5,param_2 + 0x1a,param_2,__s);
      if ((uVar9 & 1) != 0) {
        if (param_1[9] != (rcContext)0x0) {
          (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
        }
        uVar34 = (ulong)*(uint *)(param_2 + 8);
        if (0 < (int)*(uint *)(param_2 + 8)) {
          puVar22 = (undefined2 *)(*(long *)(param_2 + 0x48) + 2);
          puVar29 = __s;
          do {
            uVar34 = uVar34 - 1;
            *puVar22 = *puVar29;
            puVar22 = puVar22 + 4;
            puVar29 = puVar29 + 1;
          } while (uVar34 != 0);
        }
        if (param_1[9] != (rcContext)0x0) {
          (**(code **)(*(long *)param_1 + 0x30))(param_1,0x14);
        }
      }
      rcFree(local_78);
    }
    rcFree(pvVar10);
  }
  rcFree(__s);
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9 & 1;
}


