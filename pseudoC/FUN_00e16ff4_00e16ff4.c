// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e16ff4
// Entry Point: 00e16ff4
// Size: 1984 bytes
// Signature: undefined FUN_00e16ff4(void)


void FUN_00e16ff4(undefined8 param_1,long **param_2,long param_3,int param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  char *pcVar31;
  long *plVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined8 *puVar46;
  ulong uVar47;
  undefined8 *puVar48;
  long lVar49;
  long lVar50;
  long *plVar51;
  int *piVar52;
  int iVar53;
  ulong *puVar54;
  int iVar55;
  int iVar56;
  undefined8 uVar57;
  int iVar58;
  int iVar59;
  undefined8 uVar60;
  int iVar61;
  int iVar62;
  undefined8 uVar63;
  int iVar64;
  int iVar65;
  undefined8 uVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  undefined8 *local_8c8;
  long alStack_8b0 [128];
  long alStack_4b0 [128];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90 [6];
  
  lVar13 = tpidr_el0;
  local_90[4] = *(long *)(lVar13 + 0x28);
  plVar32 = *param_2;
  iVar8 = *(int *)(plVar32 + 2);
  lVar39 = (long)iVar8;
  lVar49 = *param_2[3];
  iVar18 = *(int *)(plVar32 + 1);
  iVar9 = *(int *)((long)plVar32 + 0x14);
  iVar53 = *(int *)plVar32;
  memset(alStack_4b0,0,0x400);
  memset(alStack_8b0,0,0x400);
  if (0 < *(int *)((long)param_2 + 0xc)) {
    iVar19 = 0;
    if (iVar8 != 0) {
      iVar19 = (iVar18 - iVar53) / iVar8;
    }
    if (0 < iVar19) {
      lVar43 = (long)iVar19;
      lVar33 = (long)(int)lVar49;
      lVar49 = lVar49 << 0x20;
      lVar44 = 0;
      lVar45 = (long)param_4;
      lVar3 = lVar33;
      if (lVar33 < 3) {
        lVar3 = 2;
      }
      lVar50 = lVar33;
      if (lVar33 < 2) {
        lVar50 = 1;
      }
      uVar34 = lVar50 - 1;
      do {
        uVar47 = 0;
        uVar10 = 1 << (ulong)((uint)lVar44 & 0x1f);
        do {
          if (lVar44 == 0 && 0 < param_4) {
            plVar51 = param_5;
            lVar50 = lVar45;
            if (lVar49 < 0x100000001) {
              do {
                lVar22 = *(long *)(*plVar51 + uVar47 * 8);
                if (lVar22 < param_2[3][1]) {
                  iVar18 = vorbis_book_encode(param_2[3],lVar22,param_1);
                  param_2[8] = (long *)((long)param_2[8] + (long)iVar18);
                }
                lVar50 = lVar50 + -1;
                plVar51 = plVar51 + 1;
              } while (lVar50 != 0);
            }
            else {
              lVar50 = 0;
              do {
                lVar22 = *(long *)(param_5[lVar50] + uVar47 * 8);
                lVar23 = lVar3 + -1;
                uVar35 = uVar47;
                do {
                  uVar35 = uVar35 + 1;
                  lVar22 = lVar22 * iVar9;
                  if ((long)uVar35 < lVar43) {
                    lVar22 = *(long *)(param_5[lVar50] + uVar35 * 8) + lVar22;
                  }
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
                if (lVar22 < param_2[3][1]) {
                  iVar18 = vorbis_book_encode(param_2[3],lVar22,param_1);
                  param_2[8] = (long *)((long)param_2[8] + (long)iVar18);
                }
                lVar50 = lVar50 + 1;
              } while (lVar50 != lVar45);
            }
          }
          if ((0 < lVar49) && ((long)uVar47 < lVar43)) {
            if (0 < param_4) {
              lVar22 = lVar39 * uVar47;
              lVar50 = 0;
LAB_00e17274:
              lVar26 = *plVar32;
              lVar23 = 0;
LAB_00e172e4:
              lVar27 = param_5[lVar23];
              lVar36 = *(long *)(lVar27 + uVar47 * 8);
              if (lVar44 == 0) {
                alStack_8b0[lVar36] = alStack_8b0[lVar36] + lVar39;
                if ((*(uint *)((long)plVar32 + lVar36 * 4 + 0x20) & uVar10) == 0) goto LAB_00e172d8;
LAB_00e17328:
                puVar54 = *(ulong **)(param_2[4][lVar36] + lVar44 * 8);
                if (puVar54 == (ulong *)0x0) goto LAB_00e172d8;
                uVar35 = *puVar54;
                uVar11 = 0;
                iVar18 = (int)uVar35;
                if (iVar18 != 0) {
                  uVar11 = iVar8 / iVar18;
                }
                if (0 < (int)uVar11) {
                  uVar40 = 0;
                  lVar28 = *(long *)(param_3 + lVar23 * 8);
                  iVar53 = 0;
                  lVar27 = lVar28 + (lVar26 + lVar22) * 4;
                  lVar36 = lVar27 + -4;
                  lVar29 = (long)iVar18 * 4;
                  local_8c8 = (undefined8 *)(lVar27 + 0x10);
                  do {
                    iVar4 = *(int *)(puVar54 + 10);
                    iVar5 = *(int *)((long)puVar54 + 0x54);
                    iVar6 = *(int *)(puVar54 + 0xb);
                    local_90[1] = 0;
                    local_90[0] = 0;
                    local_90[3] = 0;
                    local_90[2] = 0;
                    iVar19 = iVar4 >> 1;
                    piVar52 = (int *)(lVar28 + (lVar26 + uVar47 * lVar39) * 4 +
                                     uVar40 * (long)iVar18 * 4);
                    iVar55 = (int)uVar35;
                    if (iVar6 == 1) {
                      if (iVar55 < 1) {
                        uVar24 = 0;
                      }
                      else {
                        lVar30 = (long)iVar55 + ((ulong)(uint)-iVar55 | 0x3fffffff00000000);
                        memcpy((void *)((long)local_90 + lVar30 * 4),piVar52 + lVar30,
                               (uVar35 & 0xffffffff) << 2);
                        uVar24 = 0;
                        lVar30 = (long)iVar55 << 2;
                        uVar37 = uVar35 & 0xffffffff;
                        do {
                          piVar21 = (int *)(lVar36 + lVar30);
                          lVar30 = lVar30 + -4;
                          iVar58 = *piVar21 - iVar5;
                          iVar56 = (iVar19 - iVar58) * 2 + -1;
                          if (iVar19 <= iVar58) {
                            iVar56 = (iVar58 - iVar19) * 2;
                          }
                          iVar58 = iVar56;
                          if (iVar4 <= iVar56) {
                            iVar58 = iVar4 + -1;
                          }
                          iVar59 = 0;
                          if (-1 < iVar56) {
                            iVar59 = iVar58;
                          }
                          uVar12 = (int)uVar37 - 1;
                          uVar37 = (ulong)uVar12;
                          uVar24 = (ulong)(uint)(iVar59 + (int)uVar24 * iVar4);
                        } while (uVar12 != 0);
                      }
LAB_00e174c8:
                      pcVar31 = *(char **)(puVar54[3] + 0x10);
                      cVar7 = pcVar31[(int)uVar24];
                    }
                    else {
                      if (0 < iVar55) {
                        uVar24 = 0;
                        uVar37 = uVar35 & 0xffffffff;
                        piVar21 = (int *)((long)&uStack_98 + (long)iVar55 * 4 + 4);
                        piVar25 = (int *)(lVar36 + (long)iVar55 * 4);
                        do {
                          iVar56 = 0;
                          if (iVar6 != 0) {
                            iVar56 = (((iVar6 >> 1) - iVar5) + *piVar25) / iVar6;
                          }
                          iVar58 = (iVar19 - iVar56) * 2 + -1;
                          if (iVar19 <= iVar56) {
                            iVar58 = (iVar56 - iVar19) * 2;
                          }
                          iVar59 = iVar58;
                          if (iVar4 <= iVar58) {
                            iVar59 = iVar4 + -1;
                          }
                          iVar61 = 0;
                          if (-1 < iVar58) {
                            iVar61 = iVar59;
                          }
                          uVar12 = (int)uVar37 - 1;
                          uVar37 = (ulong)uVar12;
                          uVar24 = (ulong)(uint)(iVar61 + (int)uVar24 * iVar4);
                          *piVar21 = iVar5 + iVar56 * iVar6;
                          piVar21 = piVar21 + -1;
                          piVar25 = piVar25 + -1;
                        } while (uVar12 != 0);
                        goto LAB_00e174c8;
                      }
                      uVar24 = 0;
                      pcVar31 = *(char **)(puVar54[3] + 0x10);
                      cVar7 = *pcVar31;
                    }
                    if (cVar7 == '\0') {
                      uVar37 = puVar54[1];
                      uStack_a8 = 0;
                      local_b0 = 0;
                      uStack_98 = 0;
                      uStack_a0 = 0;
                      if (0 < (long)uVar37) {
                        uVar42 = uVar35 & 0xffffffff;
                        uVar41 = 0;
                        lVar30 = uVar42 - (uVar35 & 7);
                        iVar19 = -1;
                        do {
                          if (pcVar31[uVar41] != '\0') {
                            if (iVar55 < 1) {
                              iVar56 = 0;
                            }
                            else {
                              if (uVar42 < 8) {
                                iVar56 = 0;
                                lVar20 = 0;
                              }
                              else {
                                iVar56 = 0;
                                iVar58 = 0;
                                iVar59 = 0;
                                iVar61 = 0;
                                iVar62 = 0;
                                iVar64 = 0;
                                iVar65 = 0;
                                iVar67 = 0;
                                puVar46 = &uStack_a0;
                                lVar20 = lVar30;
                                puVar48 = local_8c8;
                                do {
                                  puVar1 = puVar46 + -2;
                                  puVar14 = puVar46 + -1;
                                  puVar15 = puVar46 + 1;
                                  uVar57 = *puVar46;
                                  puVar46 = puVar46 + 4;
                                  lVar20 = lVar20 + -8;
                                  puVar2 = puVar48 + -2;
                                  puVar16 = puVar48 + -1;
                                  puVar17 = puVar48 + 1;
                                  uVar60 = *puVar48;
                                  puVar48 = puVar48 + 4;
                                  iVar68 = (int)*puVar1 - (int)*puVar2;
                                  iVar69 = (int)((ulong)*puVar1 >> 0x20) -
                                           (int)((ulong)*puVar2 >> 0x20);
                                  iVar70 = (int)*puVar14 - (int)*puVar16;
                                  iVar71 = (int)((ulong)*puVar14 >> 0x20) -
                                           (int)((ulong)*puVar16 >> 0x20);
                                  iVar72 = (int)uVar57 - (int)uVar60;
                                  iVar73 = (int)((ulong)uVar57 >> 0x20) -
                                           (int)((ulong)uVar60 >> 0x20);
                                  iVar74 = (int)*puVar15 - (int)*puVar17;
                                  iVar75 = (int)((ulong)*puVar15 >> 0x20) -
                                           (int)((ulong)*puVar17 >> 0x20);
                                  iVar56 = iVar56 + iVar68 * iVar68;
                                  iVar58 = iVar58 + iVar69 * iVar69;
                                  iVar59 = iVar59 + iVar70 * iVar70;
                                  iVar61 = iVar61 + iVar71 * iVar71;
                                  iVar62 = iVar62 + iVar72 * iVar72;
                                  iVar64 = iVar64 + iVar73 * iVar73;
                                  iVar65 = iVar65 + iVar74 * iVar74;
                                  iVar67 = iVar67 + iVar75 * iVar75;
                                } while (lVar20 != 0);
                                iVar56 = iVar62 + iVar56 + iVar64 + iVar58 +
                                         iVar65 + iVar59 + iVar67 + iVar61;
                                lVar20 = lVar30;
                                if ((uVar35 & 7) == 0) goto LAB_00e176cc;
                              }
                              lVar38 = uVar42 - lVar20;
                              piVar21 = (int *)(lVar27 + lVar20 * 4);
                              piVar25 = (int *)((long)&local_b0 + lVar20 * 4);
                              do {
                                lVar38 = lVar38 + -1;
                                iVar56 = iVar56 + (*piVar25 - *piVar21) * (*piVar25 - *piVar21);
                                piVar21 = piVar21 + 1;
                                piVar25 = piVar25 + 1;
                              } while (lVar38 != 0);
                            }
LAB_00e176cc:
                            if ((iVar19 == -1) || (iVar56 < iVar19)) {
                              uVar24 = uVar41 & 0xffffffff;
                              local_90[1] = uStack_a8;
                              local_90[0] = local_b0;
                              local_90[3] = uStack_98;
                              local_90[2] = uStack_a0;
                              iVar19 = iVar56;
                            }
                          }
                          puVar46 = &local_b0;
                          iVar56 = (int)local_b0;
                          while (iVar5 + (iVar4 + -1) * iVar6 <= iVar56) {
                            *(int *)puVar46 = 0;
                            puVar46 = (undefined8 *)((long)puVar46 + 4);
                            iVar56 = *(int *)puVar46;
                          }
                          uVar41 = uVar41 + 1;
                          iVar58 = 0;
                          if (-1 < iVar56) {
                            iVar58 = iVar6;
                          }
                          *(int *)puVar46 = -(iVar56 + iVar58);
                        } while (uVar41 != uVar37);
                      }
                    }
                    if ((-1 < (int)uVar24) && (0 < iVar55)) {
                      uVar37 = uVar35 & 0xffffffff;
                      if (uVar37 < 8) {
                        lVar38 = 0;
                      }
                      else {
                        lVar38 = uVar37 - (uVar35 & 7);
                        piVar52 = piVar52 + lVar38;
                        lVar20 = 0;
                        lVar30 = lVar38;
                        do {
                          puVar46 = (undefined8 *)(lVar27 + lVar20);
                          lVar30 = lVar30 + -8;
                          uVar60 = *(undefined8 *)((long)local_90 + lVar20 + 8);
                          uVar57 = *(undefined8 *)((long)local_90 + lVar20);
                          uVar66 = *(undefined8 *)((long)local_90 + lVar20 + 0x18);
                          uVar63 = *(undefined8 *)((long)local_90 + lVar20 + 0x10);
                          puVar46[1] = CONCAT44((int)((ulong)puVar46[1] >> 0x20) -
                                                (int)((ulong)uVar60 >> 0x20),
                                                (int)puVar46[1] - (int)uVar60);
                          *puVar46 = CONCAT44((int)((ulong)*puVar46 >> 0x20) -
                                              (int)((ulong)uVar57 >> 0x20),
                                              (int)*puVar46 - (int)uVar57);
                          puVar46[3] = CONCAT44((int)((ulong)puVar46[3] >> 0x20) -
                                                (int)((ulong)uVar66 >> 0x20),
                                                (int)puVar46[3] - (int)uVar66);
                          puVar46[2] = CONCAT44((int)((ulong)puVar46[2] >> 0x20) -
                                                (int)((ulong)uVar63 >> 0x20),
                                                (int)puVar46[2] - (int)uVar63);
                          lVar20 = lVar20 + 0x20;
                        } while (lVar30 != 0);
                        if ((uVar35 & 7) == 0) goto LAB_00e1756c;
                      }
                      lVar30 = uVar37 - lVar38;
                      piVar21 = (int *)((long)local_90 + lVar38 * 4);
                      do {
                        lVar30 = lVar30 + -1;
                        *piVar52 = *piVar52 - *piVar21;
                        piVar21 = piVar21 + 1;
                        piVar52 = piVar52 + 1;
                      } while (lVar30 != 0);
                    }
LAB_00e1756c:
                    iVar19 = vorbis_book_encode(puVar54,uVar24,param_1);
                    iVar53 = iVar19 + iVar53;
                    uVar40 = uVar40 + 1;
                    if (uVar40 == uVar11) goto LAB_00e17298;
                    uVar35 = *puVar54;
                    local_8c8 = (undefined8 *)((long)local_8c8 + lVar29);
                    lVar36 = lVar36 + lVar29;
                    lVar27 = lVar27 + lVar29;
                  } while( true );
                }
                iVar53 = 0;
                goto LAB_00e172b0;
              }
              if ((*(uint *)((long)plVar32 + lVar36 * 4 + 0x20) & uVar10) != 0) goto LAB_00e17328;
              goto LAB_00e172d8;
            }
            uVar35 = ~uVar47 + lVar43;
            if (uVar34 <= ~uVar47 + lVar43) {
              uVar35 = uVar34;
            }
            uVar40 = 0;
            if (uVar34 != 0) {
              uVar40 = uVar35;
            }
            uVar47 = uVar47 + uVar40 + 1;
          }
LAB_00e17148:
        } while ((long)uVar47 < lVar43);
        lVar44 = lVar44 + 1;
      } while (lVar44 < *(int *)((long)param_2 + 0xc));
    }
  }
  if (*(long *)(lVar13 + 0x28) != local_90[4]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00e17298:
  lVar27 = param_5[lVar23];
LAB_00e172b0:
  param_2[7] = (long *)((long)param_2[7] + (long)iVar53);
  lVar27 = *(long *)(lVar27 + uVar47 * 8);
  alStack_4b0[lVar27] = alStack_4b0[lVar27] + (long)iVar53;
LAB_00e172d8:
  lVar23 = lVar23 + 1;
  if (lVar23 == lVar45) goto LAB_00e17718;
  goto LAB_00e172e4;
LAB_00e17718:
  uVar47 = uVar47 + 1;
  lVar50 = lVar50 + 1;
  if ((lVar33 <= lVar50) || (lVar22 = lVar22 + lVar39, lVar43 <= (long)uVar47)) goto LAB_00e17148;
  goto LAB_00e17274;
}


