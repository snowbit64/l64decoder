// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcBuildRegions
// Entry Point: 00de5e3c
// Size: 6368 bytes
// Signature: undefined __cdecl rcBuildRegions(rcContext * param_1, rcCompactHeightfield * param_2, int param_3, int param_4, int param_5)


/* WARNING: Type propagation algorithm not settling */
/* rcBuildRegions(rcContext*, rcCompactHeightfield&, int, int, int) */

uint rcBuildRegions(rcContext *param_1,rcCompactHeightfield *param_2,int param_3,int param_4,
                   int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  rcContext rVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *__s;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined (*pauVar20) [16];
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined2 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  uint *puVar40;
  ushort uVar41;
  ushort uVar42;
  undefined2 *puVar43;
  undefined auVar44 [16];
  undefined2 *local_108;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x14);
  }
  uVar12 = *(uint *)(param_2 + 4);
  uVar30 = (ulong)uVar12;
  uVar9 = *(uint *)param_2;
  __s = (undefined2 *)rcAlloc(*(int *)(param_2 + 8) << 3,1);
  if (__s == (undefined2 *)0x0) {
    rcContext::log((rcLogCategory)param_1,(char *)0x3,"rcBuildRegions: Out of memory \'tmp\' (%d).",
                   (ulong)(uint)(*(int *)(param_2 + 8) << 2));
    uVar12 = 0;
  }
  else {
    if (param_1[9] != (rcContext)0x0) {
      (**(code **)(*(long *)param_1 + 0x28))(param_1,0x15);
    }
    uVar39 = (ulong)uVar9;
    local_80 = (void *)0x0;
    local_78 = 0;
    rcIntArray::resize((rcIntArray *)&local_80,0x400);
    local_90 = (void *)0x0;
    uStack_88 = 0;
    rcIntArray::resize((rcIntArray *)&local_90,0x400);
    lVar29 = (long)*(int *)(param_2 + 8);
    puVar43 = __s + lVar29 * 3;
    local_108 = __s + lVar29 * 2;
    puVar14 = __s + lVar29;
    memset(__s,0,lVar29 * 2);
    memset(puVar14,0,(long)*(int *)(param_2 + 8) << 1);
    uVar8 = *(ushort *)(param_2 + 0x18);
    uVar1 = uVar8 + 1 & 0xfffffffe;
    if (param_3 < 1) {
      uVar41 = 1;
      uVar42 = 1;
    }
    else {
      uVar4 = uVar9;
      if (param_3 <= (int)uVar9) {
        uVar4 = param_3;
      }
      lVar29 = *(long *)(param_2 + 0x40);
      lVar34 = *(long *)(param_2 + 0x58);
      uVar36 = uVar12;
      if (param_3 <= (int)uVar12) {
        uVar36 = param_3;
      }
      lVar33 = (long)*(int *)param_2;
      if (0 < (int)uVar12 && 0 < (int)uVar4) {
        uVar37 = 0;
        do {
          uVar16 = 0;
          do {
            uVar3 = *(uint *)(lVar29 + (uVar16 + uVar37 * lVar33) * 4);
            if (uVar3 >> 0x18 != 0) {
              uVar17 = (ulong)uVar3 & 0xffffff;
              uVar24 = uVar17 + (uVar3 >> 0x18);
              uVar26 = uVar24;
              if (uVar24 < uVar17 + 1) {
                uVar26 = uVar17 + 1;
              }
              uVar26 = uVar26 - uVar17;
              if (7 < uVar26) {
                uVar27 = uVar24;
                if (uVar24 < uVar17 + 1) {
                  uVar27 = uVar17 + 1;
                }
                if ((undefined2 *)(lVar34 + uVar27) <= __s + uVar17 ||
                    __s + uVar27 <= (undefined2 *)(lVar34 + uVar17)) {
                  if (uVar26 < 0x10) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = uVar26 & 0xfffffffffffffff0;
                    pauVar20 = (undefined (*) [16])(lVar34 + uVar17);
                    puVar25 = __s + uVar17 + 8;
                    uVar27 = uVar22;
                    do {
                      auVar44 = NEON_cmtst(*pauVar20,*pauVar20,1);
                      if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                        puVar25[-8] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                        puVar25[-7] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                        puVar25[-6] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                        puVar25[-5] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                        puVar25[-4] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                        puVar25[-3] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                        puVar25[-2] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0) {
                        puVar25[-1] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                        *puVar25 = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                        puVar25[1] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                        puVar25[2] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                        puVar25[3] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                        puVar25[4] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                        puVar25[5] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                        puVar25[6] = 0x8001;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0) {
                        puVar25[7] = 0x8001;
                      }
                      uVar27 = uVar27 - 0x10;
                      pauVar20 = pauVar20 + 1;
                      puVar25 = puVar25 + 0x10;
                    } while (uVar27 != 0);
                    if (uVar26 == uVar22) goto LAB_00de5fc8;
                    if (((uint)uVar26 >> 3 & 1) == 0) {
                      uVar17 = uVar22 + uVar17;
                      goto LAB_00de62c8;
                    }
                  }
                  uVar27 = (ulong)(uVar3 & 0xffffff);
                  uVar26 = ((ulong)uVar3 & 0xffffff) + (ulong)(uVar3 >> 0x18);
                  if (uVar26 < uVar27 + 1) {
                    uVar26 = uVar27 + 1;
                  }
                  puVar19 = (undefined8 *)(lVar34 + uVar22 + uVar17);
                  puVar25 = __s + uVar22 + uVar17 + 4;
                  uVar28 = uVar26 - uVar27 & 0xfffffffffffffff8;
                  uVar17 = uVar28 + uVar17;
                  lVar23 = uVar22 - uVar28;
                  do {
                    uVar22 = NEON_cmtst(*puVar19,*puVar19,1);
                    if ((uVar22 & 1) != 0) {
                      puVar25[-4] = 0x8001;
                    }
                    if ((uVar22 & 0x100) != 0) {
                      puVar25[-3] = 0x8001;
                    }
                    if ((uVar22 & 0x10000) != 0) {
                      puVar25[-2] = 0x8001;
                    }
                    if ((uVar22 & 0x1000000) != 0) {
                      puVar25[-1] = 0x8001;
                    }
                    if ((uVar22 & 0x100000000) != 0) {
                      *puVar25 = 0x8001;
                    }
                    if ((uVar22 & 0x10000000000) != 0) {
                      puVar25[1] = 0x8001;
                    }
                    if ((uVar22 & 0x1000000000000) != 0) {
                      puVar25[2] = 0x8001;
                    }
                    if ((uVar22 & 0x100000000000000) != 0) {
                      puVar25[3] = 0x8001;
                    }
                    lVar23 = lVar23 + 8;
                    puVar19 = puVar19 + 1;
                    puVar25 = puVar25 + 8;
                  } while (lVar23 != 0);
                  if (uVar26 - uVar27 == uVar28) goto LAB_00de5fc8;
                }
              }
LAB_00de62c8:
              do {
                if (*(char *)(lVar34 + uVar17) != '\0') {
                  __s[uVar17] = 0x8001;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar24);
            }
LAB_00de5fc8:
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar4);
          uVar37 = uVar37 + 1;
        } while (uVar37 != uVar30);
        if (0 < (int)uVar12 && 0 < (int)uVar4) {
          uVar37 = 0;
          do {
            lVar23 = (long)(int)(uVar9 - uVar4);
            do {
              uVar3 = *(uint *)(lVar29 + (lVar23 + uVar37 * lVar33) * 4);
              if (uVar3 >> 0x18 != 0) {
                uVar16 = (ulong)uVar3 & 0xffffff;
                uVar17 = uVar16 + (uVar3 >> 0x18);
                uVar24 = uVar17;
                if (uVar17 < uVar16 + 1) {
                  uVar24 = uVar16 + 1;
                }
                uVar24 = uVar24 - uVar16;
                if (7 < uVar24) {
                  uVar26 = uVar17;
                  if (uVar17 < uVar16 + 1) {
                    uVar26 = uVar16 + 1;
                  }
                  if ((undefined2 *)(lVar34 + uVar26) <= __s + uVar16 ||
                      __s + uVar26 <= (undefined2 *)(lVar34 + uVar16)) {
                    if (uVar24 < 0x10) {
                      uVar27 = 0;
                    }
                    else {
                      uVar27 = uVar24 & 0xfffffffffffffff0;
                      pauVar20 = (undefined (*) [16])(lVar34 + uVar16);
                      puVar25 = __s + uVar16 + 8;
                      uVar26 = uVar27;
                      do {
                        auVar44 = NEON_cmtst(*pauVar20,*pauVar20,1);
                        if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          puVar25[-8] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar25[-7] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar25[-6] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar25[-5] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar25[-4] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar25[-3] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar25[-2] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar25[-1] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          *puVar25 = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar25[1] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar25[2] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar25[3] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar25[4] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar25[5] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar25[6] = 0x8002;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar25[7] = 0x8002;
                        }
                        uVar26 = uVar26 - 0x10;
                        pauVar20 = pauVar20 + 1;
                        puVar25 = puVar25 + 0x10;
                      } while (uVar26 != 0);
                      if (uVar24 == uVar27) goto LAB_00de6490;
                      if (((uint)uVar24 >> 3 & 1) == 0) {
                        uVar16 = uVar27 + uVar16;
                        goto LAB_00de6788;
                      }
                    }
                    uVar26 = (ulong)(uVar3 & 0xffffff);
                    uVar24 = ((ulong)uVar3 & 0xffffff) + (ulong)(uVar3 >> 0x18);
                    if (uVar24 < uVar26 + 1) {
                      uVar24 = uVar26 + 1;
                    }
                    puVar19 = (undefined8 *)(lVar34 + uVar27 + uVar16);
                    puVar25 = __s + uVar27 + uVar16 + 4;
                    uVar22 = uVar24 - uVar26 & 0xfffffffffffffff8;
                    uVar16 = uVar22 + uVar16;
                    lVar18 = uVar27 - uVar22;
                    do {
                      uVar27 = NEON_cmtst(*puVar19,*puVar19,1);
                      if ((uVar27 & 1) != 0) {
                        puVar25[-4] = 0x8002;
                      }
                      if ((uVar27 & 0x100) != 0) {
                        puVar25[-3] = 0x8002;
                      }
                      if ((uVar27 & 0x10000) != 0) {
                        puVar25[-2] = 0x8002;
                      }
                      if ((uVar27 & 0x1000000) != 0) {
                        puVar25[-1] = 0x8002;
                      }
                      if ((uVar27 & 0x100000000) != 0) {
                        *puVar25 = 0x8002;
                      }
                      if ((uVar27 & 0x10000000000) != 0) {
                        puVar25[1] = 0x8002;
                      }
                      if ((uVar27 & 0x1000000000000) != 0) {
                        puVar25[2] = 0x8002;
                      }
                      if ((uVar27 & 0x100000000000000) != 0) {
                        puVar25[3] = 0x8002;
                      }
                      lVar18 = lVar18 + 8;
                      puVar19 = puVar19 + 1;
                      puVar25 = puVar25 + 8;
                    } while (lVar18 != 0);
                    if (uVar24 - uVar26 == uVar22) goto LAB_00de6490;
                  }
                }
LAB_00de6788:
                do {
                  if (*(char *)(lVar34 + uVar16) != '\0') {
                    __s[uVar16] = 0x8002;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar17);
              }
LAB_00de6490:
              lVar23 = lVar23 + 1;
            } while (lVar23 != (int)uVar9);
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar30);
        }
      }
      if (0 < (int)uVar9 && 0 < (int)uVar36) {
        uVar37 = 0;
        do {
          uVar16 = 0;
          do {
            uVar4 = *(uint *)(lVar29 + (uVar16 + uVar37 * lVar33) * 4);
            if (uVar4 >> 0x18 != 0) {
              uVar17 = (ulong)uVar4 & 0xffffff;
              uVar24 = uVar17 + (uVar4 >> 0x18);
              uVar26 = uVar24;
              if (uVar24 < uVar17 + 1) {
                uVar26 = uVar17 + 1;
              }
              uVar26 = uVar26 - uVar17;
              if (7 < uVar26) {
                uVar27 = uVar24;
                if (uVar24 < uVar17 + 1) {
                  uVar27 = uVar17 + 1;
                }
                if ((undefined2 *)(lVar34 + uVar27) <= __s + uVar17 ||
                    __s + uVar27 <= (undefined2 *)(lVar34 + uVar17)) {
                  if (uVar26 < 0x10) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = uVar26 & 0xfffffffffffffff0;
                    pauVar20 = (undefined (*) [16])(lVar34 + uVar17);
                    puVar25 = __s + uVar17 + 8;
                    uVar27 = uVar22;
                    do {
                      auVar44 = NEON_cmtst(*pauVar20,*pauVar20,1);
                      if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                        puVar25[-8] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                        puVar25[-7] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                        puVar25[-6] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                        puVar25[-5] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                        puVar25[-4] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                        puVar25[-3] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                        puVar25[-2] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0) {
                        puVar25[-1] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                        *puVar25 = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                        puVar25[1] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                        puVar25[2] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                        puVar25[3] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                        puVar25[4] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                        puVar25[5] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                        puVar25[6] = 0x8003;
                      }
                      if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0) {
                        puVar25[7] = 0x8003;
                      }
                      uVar27 = uVar27 - 0x10;
                      pauVar20 = pauVar20 + 1;
                      puVar25 = puVar25 + 0x10;
                    } while (uVar27 != 0);
                    if (uVar26 == uVar22) goto LAB_00de67e4;
                    if (((uint)uVar26 >> 3 & 1) == 0) {
                      uVar17 = uVar22 + uVar17;
                      goto LAB_00de6adc;
                    }
                  }
                  uVar27 = (ulong)(uVar4 & 0xffffff);
                  uVar26 = ((ulong)uVar4 & 0xffffff) + (ulong)(uVar4 >> 0x18);
                  if (uVar26 < uVar27 + 1) {
                    uVar26 = uVar27 + 1;
                  }
                  puVar19 = (undefined8 *)(lVar34 + uVar22 + uVar17);
                  puVar25 = __s + uVar22 + uVar17 + 4;
                  uVar28 = uVar26 - uVar27 & 0xfffffffffffffff8;
                  uVar17 = uVar28 + uVar17;
                  lVar23 = uVar22 - uVar28;
                  do {
                    uVar22 = NEON_cmtst(*puVar19,*puVar19,1);
                    if ((uVar22 & 1) != 0) {
                      puVar25[-4] = 0x8003;
                    }
                    if ((uVar22 & 0x100) != 0) {
                      puVar25[-3] = 0x8003;
                    }
                    if ((uVar22 & 0x10000) != 0) {
                      puVar25[-2] = 0x8003;
                    }
                    if ((uVar22 & 0x1000000) != 0) {
                      puVar25[-1] = 0x8003;
                    }
                    if ((uVar22 & 0x100000000) != 0) {
                      *puVar25 = 0x8003;
                    }
                    if ((uVar22 & 0x10000000000) != 0) {
                      puVar25[1] = 0x8003;
                    }
                    if ((uVar22 & 0x1000000000000) != 0) {
                      puVar25[2] = 0x8003;
                    }
                    if ((uVar22 & 0x100000000000000) != 0) {
                      puVar25[3] = 0x8003;
                    }
                    lVar23 = lVar23 + 8;
                    puVar19 = puVar19 + 1;
                    puVar25 = puVar25 + 8;
                  } while (lVar23 != 0);
                  if (uVar26 - uVar27 == uVar28) goto LAB_00de67e4;
                }
              }
LAB_00de6adc:
              do {
                if (*(char *)(lVar34 + uVar17) != '\0') {
                  __s[uVar17] = 0x8003;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar24);
            }
LAB_00de67e4:
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar39);
          uVar37 = uVar37 + 1;
        } while (uVar37 != uVar36);
        if (0 < (int)uVar9 && 0 < (int)uVar36) {
          lVar23 = (long)(int)(uVar12 - uVar36);
          do {
            uVar37 = 0;
            do {
              uVar4 = *(uint *)(lVar29 + (uVar37 + lVar23 * lVar33) * 4);
              if (uVar4 >> 0x18 != 0) {
                uVar16 = (ulong)uVar4 & 0xffffff;
                uVar17 = uVar16 + (uVar4 >> 0x18);
                uVar24 = uVar17;
                if (uVar17 < uVar16 + 1) {
                  uVar24 = uVar16 + 1;
                }
                uVar24 = uVar24 - uVar16;
                if (7 < uVar24) {
                  uVar26 = uVar17;
                  if (uVar17 < uVar16 + 1) {
                    uVar26 = uVar16 + 1;
                  }
                  if ((undefined2 *)(lVar34 + uVar26) <= __s + uVar16 ||
                      __s + uVar26 <= (undefined2 *)(lVar34 + uVar16)) {
                    if (uVar24 < 0x10) {
                      uVar27 = 0;
                    }
                    else {
                      uVar27 = uVar24 & 0xfffffffffffffff0;
                      pauVar20 = (undefined (*) [16])(lVar34 + uVar16);
                      puVar25 = __s + uVar16 + 8;
                      uVar26 = uVar27;
                      do {
                        auVar44 = NEON_cmtst(*pauVar20,*pauVar20,1);
                        if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          puVar25[-8] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar25[-7] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar25[-6] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar25[-5] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar25[-4] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar25[-3] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar25[-2] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar25[-1] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                          *puVar25 = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                          puVar25[1] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                          puVar25[2] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                          puVar25[3] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                          puVar25[4] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                          puVar25[5] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                          puVar25[6] = 0x8004;
                        }
                        if ((auVar44 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0)
                        {
                          puVar25[7] = 0x8004;
                        }
                        uVar26 = uVar26 - 0x10;
                        pauVar20 = pauVar20 + 1;
                        puVar25 = puVar25 + 0x10;
                      } while (uVar26 != 0);
                      if (uVar24 == uVar27) goto LAB_00de6b20;
                      if (((uint)uVar24 >> 3 & 1) == 0) {
                        uVar16 = uVar27 + uVar16;
                        goto LAB_00de6e18;
                      }
                    }
                    uVar26 = (ulong)(uVar4 & 0xffffff);
                    uVar24 = ((ulong)uVar4 & 0xffffff) + (ulong)(uVar4 >> 0x18);
                    if (uVar24 < uVar26 + 1) {
                      uVar24 = uVar26 + 1;
                    }
                    puVar19 = (undefined8 *)(lVar34 + uVar27 + uVar16);
                    puVar25 = __s + uVar27 + uVar16 + 4;
                    uVar22 = uVar24 - uVar26 & 0xfffffffffffffff8;
                    uVar16 = uVar22 + uVar16;
                    lVar18 = uVar27 - uVar22;
                    do {
                      uVar27 = NEON_cmtst(*puVar19,*puVar19,1);
                      if ((uVar27 & 1) != 0) {
                        puVar25[-4] = 0x8004;
                      }
                      if ((uVar27 & 0x100) != 0) {
                        puVar25[-3] = 0x8004;
                      }
                      if ((uVar27 & 0x10000) != 0) {
                        puVar25[-2] = 0x8004;
                      }
                      if ((uVar27 & 0x1000000) != 0) {
                        puVar25[-1] = 0x8004;
                      }
                      if ((uVar27 & 0x100000000) != 0) {
                        *puVar25 = 0x8004;
                      }
                      if ((uVar27 & 0x10000000000) != 0) {
                        puVar25[1] = 0x8004;
                      }
                      if ((uVar27 & 0x1000000000000) != 0) {
                        puVar25[2] = 0x8004;
                      }
                      if ((uVar27 & 0x100000000000000) != 0) {
                        puVar25[3] = 0x8004;
                      }
                      lVar18 = lVar18 + 8;
                      puVar19 = puVar19 + 1;
                      puVar25 = puVar25 + 8;
                    } while (lVar18 != 0);
                    if (uVar24 - uVar26 == uVar22) goto LAB_00de6b20;
                  }
                }
LAB_00de6e18:
                do {
                  if (*(char *)(lVar34 + uVar16) != '\0') {
                    __s[uVar16] = 0x8004;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar17);
              }
LAB_00de6b20:
              uVar37 = uVar37 + 1;
            } while (uVar37 != uVar39);
            lVar23 = lVar23 + 1;
          } while (lVar23 != (int)uVar12);
        }
      }
      uVar41 = 5;
      uVar42 = 5;
      *(int *)(param_2 + 0x14) = param_3;
    }
    puVar25 = __s;
    if ((uVar8 + 1 & 0xfffe) != 0) {
      uVar42 = uVar41;
      do {
        uVar4 = uVar1 & 0xffff;
        uVar36 = uVar1 - 2;
        uVar1 = 0;
        if (uVar4 != 1) {
          uVar1 = uVar36;
        }
        if (param_1[9] != (rcContext)0x0) {
          (**(code **)(*(long *)param_1 + 0x28))(param_1,0x16);
        }
        puVar15 = (undefined2 *)
                  FUN_00de771c(8,uVar1,param_2,puVar25,puVar14,local_108,puVar43,&local_80);
        if (puVar15 == puVar25) {
          rVar6 = param_1[9];
          puVar15 = puVar43;
          puVar11 = puVar25;
        }
        else {
          rVar6 = param_1[9];
          puVar15 = puVar14;
          puVar11 = local_108;
          puVar14 = puVar43;
          local_108 = puVar25;
        }
        puVar25 = puVar11;
        puVar43 = puVar15;
        if ((rVar6 != (rcContext)0x0) &&
           ((**(code **)(*(long *)param_1 + 0x30))(param_1,0x16), param_1[9] != (rcContext)0x0)) {
          (**(code **)(*(long *)param_1 + 0x28))(param_1,0x17);
        }
        uVar4 = uVar1 - 2;
        if ((uVar1 & 0xffff) < 2) {
          uVar4 = 0;
        }
        if (0 < (int)uVar12 && 0 < (int)uVar9) {
          uVar37 = 0;
          do {
            uVar16 = 0;
            do {
              uVar36 = *(uint *)(*(long *)(param_2 + 0x40) +
                                (uVar16 + uVar37 * (long)(int)uVar9) * 4);
              if (uVar36 >> 0x18 != 0) {
                uVar17 = (ulong)uVar36 & 0xffffff;
                uVar24 = uVar17 + (uVar36 >> 0x18);
                do {
                  if ((((ushort)uVar1 <= *(ushort *)(*(long *)(param_2 + 0x50) + uVar17 * 2)) &&
                      (puVar25[uVar17] == 0)) &&
                     (cVar7 = *(char *)(*(long *)(param_2 + 0x58) + uVar17), cVar7 != '\0')) {
                    iVar2 = *(int *)param_2;
                    rcIntArray::resize((rcIntArray *)&local_80,0);
                    rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                    *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) = (int)uVar16;
                    rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                    *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) = (int)uVar37;
                    rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                    *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) = (int)uVar17;
                    puVar25[uVar17] = uVar42;
                    puVar14[uVar17] = 0;
                    if (0 < (int)(uint)local_78) {
                      iVar21 = 0;
                      pvVar31 = local_80;
                      uVar36 = (uint)local_78;
LAB_00de7110:
                      do {
                        uVar3 = uVar36 - 1;
                        local_78 = CONCAT44(local_78._4_4_,uVar3);
                        iVar32 = *(int *)((long)pvVar31 + (ulong)uVar3 * 4);
                        if (uVar3 == 0) {
                          uVar36 = 0;
                          iVar38 = iVar32;
                        }
                        else {
                          uVar3 = uVar36 - 2;
                          local_78 = CONCAT44(local_78._4_4_,uVar3);
                          iVar38 = *(int *)((long)pvVar31 + (ulong)uVar3 * 4);
                          if (uVar3 == 0) {
                            uVar36 = 0;
                          }
                          else {
                            uVar36 = uVar36 - 3;
                            local_78 = CONCAT44(local_78._4_4_,uVar36);
                          }
                        }
                        lVar29 = *(long *)(param_2 + 0x40);
                        lVar34 = *(long *)(param_2 + 0x48);
                        iVar5 = *(int *)((long)pvVar31 + (ulong)uVar36 * 4);
                        lVar33 = *(long *)(param_2 + 0x58);
                        puVar40 = (uint *)(lVar34 + (long)iVar32 * 8 + 4);
                        uVar3 = *puVar40;
                        uVar26 = (ulong)uVar3;
                        uVar27 = uVar26 & 0x3f;
                        if ((int)uVar27 == 0x3f) {
LAB_00de7170:
                          uVar13 = 0;
                          uVar22 = (ulong)(uVar3 >> 6) & 0x3f;
                          iVar35 = (int)uVar22;
                        }
                        else {
                          lVar23 = ((ulong)*(uint *)(lVar29 + (long)(iVar5 + -1 + iVar38 * iVar2) *
                                                              4) & 0xffffff) + uVar27;
                          if (*(char *)(lVar33 + lVar23) == cVar7) {
                            uVar8 = puVar25[lVar23];
                            if ((short)uVar8 < 0) goto LAB_00de7170;
                            uVar13 = 0;
                            if (uVar8 != uVar42 && (int)(short)uVar8 != 0) {
                              uVar13 = (int)(short)uVar8;
                            }
                            uVar22 = (ulong)(*(uint *)(lVar34 + lVar23 * 8 + 4) >> 6) & 0x3f;
                            if (((int)uVar22 == 0x3f) ||
                               (lVar23 = ((ulong)*(uint *)(lVar29 + (long)(iVar5 + -1 +
                                                                          iVar2 + iVar2 * iVar38) *
                                                                    4) & 0xffffff) + uVar22,
                               *(char *)(lVar33 + lVar23) != cVar7)) goto LAB_00de7214;
                            uVar8 = puVar25[lVar23];
                            if (uVar8 != uVar42 && uVar8 != 0) {
                              uVar13 = (uint)uVar8;
                            }
                            uVar22 = (ulong)(uVar3 >> 6) & 0x3f;
                            iVar35 = (int)uVar22;
                          }
                          else {
                            uVar13 = 0;
LAB_00de7214:
                            uVar22 = (ulong)(uVar3 >> 6) & 0x3f;
                            iVar35 = (int)uVar22;
                          }
                        }
                        if (iVar35 != 0x3f) {
                          iVar35 = iVar2 + iVar2 * iVar38;
                          lVar23 = ((ulong)*(uint *)(lVar29 + (long)(iVar35 + iVar5) * 4) & 0xffffff
                                   ) + uVar22;
                          if ((*(char *)(lVar33 + lVar23) == cVar7) &&
                             (uVar8 = puVar25[lVar23], -1 < (short)uVar8)) {
                            if (uVar8 != uVar42 && (int)(short)uVar8 != 0) {
                              uVar13 = (int)(short)uVar8;
                            }
                            uVar28 = (ulong)(*(uint *)(lVar34 + lVar23 * 8 + 4) >> 0xc) & 0x3f;
                            if ((((int)uVar28 != 0x3f) &&
                                (lVar23 = ((ulong)*(uint *)(lVar29 + (long)(iVar5 + iVar35 + 1) * 4)
                                          & 0xffffff) + uVar28, *(char *)(lVar33 + lVar23) == cVar7)
                                ) && (uVar8 = puVar25[lVar23], uVar8 != uVar42 && uVar8 != 0)) {
                              uVar13 = (uint)uVar8;
                            }
                          }
                        }
                        uVar28 = (ulong)(uVar3 >> 0xc) & 0x3f;
                        if ((int)uVar28 != 0x3f) {
                          lVar23 = ((ulong)*(uint *)(lVar29 + (long)(iVar5 + 1 + iVar38 * iVar2) * 4
                                                    ) & 0xffffff) + uVar28;
                          if ((*(char *)(lVar33 + lVar23) == cVar7) &&
                             (uVar8 = puVar25[lVar23], -1 < (short)uVar8)) {
                            if (uVar8 != uVar42 && (int)(short)uVar8 != 0) {
                              uVar13 = (int)(short)uVar8;
                            }
                            uVar28 = (ulong)(*(uint *)(lVar34 + lVar23 * 8 + 4) >> 0x12) & 0x3f;
                            if ((((int)uVar28 != 0x3f) &&
                                (lVar23 = ((ulong)*(uint *)(lVar29 + (long)(iVar5 + 1 +
                                                                           (iVar38 + -1) * iVar2) *
                                                                     4) & 0xffffff) + uVar28,
                                *(char *)(lVar33 + lVar23) == cVar7)) &&
                               (uVar8 = puVar25[lVar23], uVar8 != uVar42 && uVar8 != 0)) {
                              uVar13 = (uint)uVar8;
                            }
                          }
                        }
                        uVar28 = (ulong)(uVar3 >> 0x12) & 0x3f;
                        if ((int)uVar28 != 0x3f) {
                          iVar35 = (iVar38 + -1) * iVar2;
                          lVar23 = ((ulong)*(uint *)(lVar29 + (long)(iVar35 + iVar5) * 4) & 0xffffff
                                   ) + uVar28;
                          if ((*(char *)(lVar33 + lVar23) == cVar7) &&
                             (uVar8 = puVar25[lVar23], -1 < (short)uVar8)) {
                            if (uVar8 != uVar42 && (int)(short)uVar8 != 0) {
                              uVar13 = (int)(short)uVar8;
                            }
                            uVar28 = (ulong)*(uint *)(lVar34 + lVar23 * 8 + 4) & 0x3f;
                            if ((((int)uVar28 != 0x3f) &&
                                (lVar34 = ((ulong)*(uint *)(lVar29 + (long)(iVar5 + iVar35 + -1) * 4
                                                           ) & 0xffffff) + uVar28,
                                *(char *)(lVar33 + lVar34) == cVar7)) &&
                               (uVar8 = puVar25[lVar34], uVar8 != uVar42 && uVar8 != 0)) {
                              uVar13 = (uint)uVar8;
                            }
                          }
                        }
                        if ((uVar13 & 0xffff) == 0) {
                          if ((int)uVar27 == 0x3f) {
LAB_00de7408:
                            uVar36 = (uint)uVar22;
                          }
                          else {
                            lVar29 = ((ulong)*(uint *)(lVar29 + (long)(iVar5 + -1 + iVar38 * iVar2)
                                                                * 4) & 0xffffff) + uVar27;
                            if (((*(char *)(lVar33 + lVar29) != cVar7) ||
                                ((uint)*(ushort *)(*(long *)(param_2 + 0x50) + lVar29 * 2) <
                                 (uVar4 & 0xffff))) || (puVar25[lVar29] != 0)) goto LAB_00de7408;
                            puVar25[lVar29] = uVar42;
                            puVar14[lVar29] = 0;
                            rcIntArray::resize((rcIntArray *)&local_80,uVar36 + 1);
                            *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                 iVar5 + -1;
                            rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                            *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) = iVar38;
                            rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                            *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                 (int)lVar29;
                            uVar26 = (ulong)*puVar40;
                            uVar36 = *puVar40 >> 6 & 0x3f;
                            uVar22 = (ulong)uVar36;
                            pvVar31 = local_80;
                          }
                          if (uVar36 != 0x3f) {
                            lVar29 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                      (long)(iVar5 + (iVar38 + 1) * iVar2) * 4) &
                                     0xffffff) + uVar22;
                            if (((*(char *)(*(long *)(param_2 + 0x58) + lVar29) == cVar7) &&
                                ((uVar4 & 0xffff) <=
                                 (uint)*(ushort *)(*(long *)(param_2 + 0x50) + lVar29 * 2))) &&
                               (puVar25[lVar29] == 0)) {
                              puVar25[lVar29] = uVar42;
                              puVar14[lVar29] = 0;
                              rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                              *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) = iVar5;
                              rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                              *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                   iVar38 + 1;
                              rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                              *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                   (int)lVar29;
                              uVar26 = (ulong)*puVar40;
                              pvVar31 = local_80;
                            }
                          }
                          uVar27 = uVar26 >> 0xc & 0x3f;
                          if ((int)uVar27 == 0x3f) {
LAB_00de75b4:
                            uVar26 = uVar26 >> 0x12 & 0x3f;
                            iVar32 = (int)uVar26;
                          }
                          else {
                            lVar29 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                      (long)(iVar5 + 1 + iVar38 * iVar2) * 4) &
                                     0xffffff) + uVar27;
                            if (((*(char *)(*(long *)(param_2 + 0x58) + lVar29) != cVar7) ||
                                ((uint)*(ushort *)(*(long *)(param_2 + 0x50) + lVar29 * 2) <
                                 (uVar4 & 0xffff))) || (puVar25[lVar29] != 0)) goto LAB_00de75b4;
                            puVar25[lVar29] = uVar42;
                            puVar14[lVar29] = 0;
                            rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                            *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                 iVar5 + 1;
                            rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                            *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) = iVar38;
                            rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                            *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                 (int)lVar29;
                            uVar26 = (ulong)(*puVar40 >> 0x12) & 0x3f;
                            iVar32 = (int)uVar26;
                            pvVar31 = local_80;
                          }
                          if (iVar32 != 0x3f) {
                            lVar29 = ((ulong)*(uint *)(*(long *)(param_2 + 0x40) +
                                                      (long)(iVar5 + (iVar38 + -1) * iVar2) * 4) &
                                     0xffffff) + uVar26;
                            if (((*(char *)(*(long *)(param_2 + 0x58) + lVar29) == cVar7) &&
                                ((uVar4 & 0xffff) <=
                                 (uint)*(ushort *)(*(long *)(param_2 + 0x50) + lVar29 * 2))) &&
                               (puVar25[lVar29] == 0)) {
                              puVar25[lVar29] = uVar42;
                              puVar14[lVar29] = 0;
                              rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                              *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) = iVar5;
                              rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                              *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                   iVar38 + -1;
                              rcIntArray::resize((rcIntArray *)&local_80,(uint)local_78 + 1);
                              *(int *)((long)local_80 + (long)(int)(uint)local_78 * 4 + -4) =
                                   (int)lVar29;
                              pvVar31 = local_80;
                            }
                          }
                          iVar21 = iVar21 + 1;
                          uVar36 = (uint)local_78;
                          if ((int)(uint)local_78 < 1) break;
                          goto LAB_00de7110;
                        }
                        puVar25[iVar32] = 0;
                      } while (0 < (int)uVar36);
                      if (0 < iVar21) {
                        uVar42 = uVar42 + 1;
                      }
                    }
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar24);
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar39);
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar30);
        }
        if (param_1[9] != (rcContext)0x0) {
          (**(code **)(*(long *)param_1 + 0x30))(param_1,0x17);
        }
      } while ((uVar1 & 0xffff) != 0);
    }
    puVar14 = (undefined2 *)FUN_00de771c(0x40,0,param_2,puVar25,puVar14,local_108,puVar43,&local_80)
    ;
    if (puVar14 != puVar25) {
      puVar25 = local_108;
    }
    if ((param_1[9] != (rcContext)0x0) &&
       ((**(code **)(*(long *)param_1 + 0x30))(param_1,0x15), param_1[9] != (rcContext)0x0)) {
      (**(code **)(*(long *)param_1 + 0x28))(param_1,0x18);
    }
    *(ushort *)(param_2 + 0x1a) = uVar42;
    uVar12 = FUN_00de4cc4(param_1,param_4,param_5,param_2 + 0x1a,param_2,puVar25);
    if ((uVar12 & 1) != 0) {
      if (param_1[9] != (rcContext)0x0) {
        (**(code **)(*(long *)param_1 + 0x30))(param_1,0x18);
      }
      uVar30 = (ulong)*(uint *)(param_2 + 8);
      if (0 < (int)*(uint *)(param_2 + 8)) {
        puVar14 = (undefined2 *)(*(long *)(param_2 + 0x48) + 2);
        do {
          uVar30 = uVar30 - 1;
          *puVar14 = *puVar25;
          puVar14 = puVar14 + 4;
          puVar25 = puVar25 + 1;
        } while (uVar30 != 0);
      }
      if (param_1[9] != (rcContext)0x0) {
        (**(code **)(*(long *)param_1 + 0x30))(param_1,0x14);
      }
    }
    rcFree(local_90);
    rcFree(local_80);
  }
  rcFree(__s);
  if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12 & 1;
}


