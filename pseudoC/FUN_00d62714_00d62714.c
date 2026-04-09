// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d62714
// Entry Point: 00d62714
// Size: 3200 bytes
// Signature: undefined FUN_00d62714(void)


/* WARNING: Removing unreachable block (ram,0x00d627a4) */
/* WARNING: Removing unreachable block (ram,0x00d6285c) */

undefined8 FUN_00d62714(long param_1,long *param_2)

{
  bool bVar1;
  long **pplVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  code **ppcVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  long *plVar29;
  byte *pbVar30;
  int iVar31;
  uint *local_190;
  int *local_188;
  int local_17c;
  byte *local_178;
  uint auStack_170 [64];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lVar26 = *(long *)(param_1 + 0x220);
  plVar13 = *(long **)(param_1 + 0x28);
  plVar28 = (long *)(lVar26 + 200);
  *plVar28 = *plVar13;
  plVar29 = (long *)(lVar26 + 0xd0);
  *plVar29 = plVar13[1];
  if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(lVar26 + 0x38) != 0)) {
    iVar10 = *(int *)(param_1 + 0x1c0);
    iVar31 = *(int *)(param_1 + 0x1bc);
    if (iVar31 <= iVar10) goto LAB_00d627cc;
LAB_00d62788:
    uVar27 = 0;
LAB_00d632d8:
    if (uVar27 == 0) goto LAB_00d6331c;
  }
  else {
    FUN_00d65088(lVar26,*(undefined4 *)(lVar26 + 0x3c));
    iVar10 = *(int *)(param_1 + 0x1c0);
    iVar31 = *(int *)(param_1 + 0x1bc);
    if (iVar10 < iVar31) goto LAB_00d62788;
LAB_00d627cc:
    lVar21 = *(long *)(param_1 + 0x1d0);
    lVar23 = (long)iVar31;
    uVar27 = *(uint *)(param_1 + 0x1c8);
    lVar9 = *param_2;
    piVar22 = (int *)(lVar21 + lVar23 * 4);
    puVar24 = auStack_170 + lVar23;
    iVar18 = 0;
    iVar12 = iVar31;
    do {
      sVar6 = *(short *)(lVar9 + (long)*piVar22 * 2);
      uVar25 = -(int)sVar6;
      if (-1 < sVar6) {
        uVar25 = (uint)sVar6;
      }
      uVar25 = (uVar25 & 0xffff) >> (ulong)(uVar27 & 0x1f);
      iVar3 = iVar12;
      if (uVar25 != 1) {
        iVar3 = iVar18;
      }
      iVar12 = iVar12 + 1;
      *puVar24 = uVar25;
      piVar22 = piVar22 + 1;
      puVar24 = puVar24 + 1;
      iVar18 = iVar3;
    } while (iVar10 + 1 != iVar12);
    if (iVar10 < iVar31) {
      uVar27 = 0;
      goto LAB_00d632d8;
    }
    uVar27 = 0;
    iVar31 = 0;
    pplVar2 = (long **)(lVar26 + 0xd8);
    local_178 = (byte *)(*(long *)(lVar26 + 0xf0) + (ulong)*(uint *)(lVar26 + 0xe8));
    do {
      while (uVar25 = auStack_170[lVar23], uVar25 == 0) {
        iVar31 = iVar31 + 1;
joined_r0x00d632c4:
        iVar12 = (int)lVar23;
        lVar23 = lVar23 + 1;
        if (iVar10 + 1 == iVar12 + 1) goto LAB_00d632c8;
      }
      uVar11 = uVar27;
      if ((0xf < iVar31) && (local_17c = iVar31, lVar23 <= iVar3)) {
        do {
          uVar11 = *(uint *)(lVar26 + 0xe4);
          if (uVar11 != 0) {
            if (uVar11 == 1) {
              uVar15 = 0;
            }
            else {
              uVar4 = 0xffffffff;
              do {
                uVar19 = uVar4;
                uVar4 = uVar19 + 1;
                bVar1 = 3 < uVar11;
                uVar11 = (int)uVar11 >> 1;
              } while (bVar1);
              uVar15 = (ulong)(uVar19 + 2);
              if (0xd < uVar4) {
                ppcVar17 = (code **)**pplVar2;
                *(undefined4 *)(ppcVar17 + 5) = 0x29;
                (**ppcVar17)();
              }
            }
            iVar31 = (int)uVar15;
            uVar11 = iVar31 << 4;
            lVar20 = lVar26 + (long)*(int *)(lVar26 + 0xe0) * 8;
            if (*(char *)(lVar26 + 0xc0) == '\0') {
              lVar20 = *(long *)(lVar20 + 0x60);
              uVar4 = *(uint *)(lVar20 + (long)(int)uVar11 * 4);
              bVar5 = *(byte *)(lVar20 + (int)uVar11 + 0x400);
              if (bVar5 == 0) {
                ppcVar17 = (code **)**(long **)(lVar26 + 0xd8);
                *(undefined4 *)(ppcVar17 + 5) = 0x29;
                (**ppcVar17)();
                if (*(char *)(lVar26 + 0xc0) != '\0') goto LAB_00d62b38;
              }
              iVar12 = *(int *)(lVar26 + 0x20) + (uint)bVar5;
              uVar14 = (ulong)(~(uint)(-1L << ((ulong)bVar5 & 0x3f)) & uVar4) <<
                       ((ulong)(0x18 - iVar12) & 0x3f) | *(ulong *)(lVar26 + 0x18);
              iVar18 = iVar12;
              if (7 < iVar12) {
                do {
                  puVar16 = (undefined *)*plVar28;
                  *plVar28 = (long)(puVar16 + 1);
                  *puVar16 = (char)(uVar14 >> 0x10);
                  lVar20 = *plVar29;
                  *plVar29 = lVar20 + -1;
                  if (lVar20 + -1 == 0) {
                    plVar13 = (long *)(*pplVar2)[5];
                    cVar8 = (*(code *)plVar13[3])();
                    if (cVar8 == '\0') {
                      ppcVar17 = (code **)**pplVar2;
                      *(undefined4 *)(ppcVar17 + 5) = 0x19;
                      (**ppcVar17)();
                    }
                    *plVar28 = *plVar13;
                    *plVar29 = plVar13[1];
                  }
                  if ((~(uint)uVar14 & 0xff0000) == 0) {
                    puVar16 = (undefined *)*plVar28;
                    *plVar28 = (long)(puVar16 + 1);
                    *puVar16 = 0;
                    lVar20 = *plVar29;
                    *plVar29 = lVar20 + -1;
                    if (lVar20 + -1 == 0) {
                      plVar13 = (long *)(*pplVar2)[5];
                      cVar8 = (*(code *)plVar13[3])();
                      if (cVar8 == '\0') {
                        ppcVar17 = (code **)**pplVar2;
                        *(undefined4 *)(ppcVar17 + 5) = 0x19;
                        (**ppcVar17)();
                      }
                      *plVar28 = *plVar13;
                      *plVar29 = plVar13[1];
                    }
                  }
                  iVar12 = iVar18 + -8;
                  uVar14 = uVar14 << 8;
                  bVar1 = 0xf < iVar18;
                  iVar18 = iVar12;
                } while (bVar1);
              }
              *(ulong *)(lVar26 + 0x18) = uVar14;
              *(int *)(lVar26 + 0x20) = iVar12;
            }
            else {
              uVar14 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
              lVar20 = *(long *)(lVar20 + 0xa0);
              *(long *)(lVar20 + uVar14) = *(long *)(lVar20 + uVar14) + 1;
            }
LAB_00d62b38:
            if ((iVar31 != 0) && (*(char *)(lVar26 + 0xc0) == '\0')) {
              iVar31 = *(int *)(lVar26 + 0x20) + iVar31;
              uVar15 = ((ulong)*(uint *)(lVar26 + 0xe4) &
                       (-1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU)) <<
                       ((ulong)(0x18 - iVar31) & 0x3f) | *(ulong *)(lVar26 + 0x18);
              iVar12 = iVar31;
              if (7 < iVar31) {
                do {
                  puVar16 = (undefined *)*plVar28;
                  *plVar28 = (long)(puVar16 + 1);
                  *puVar16 = (char)(uVar15 >> 0x10);
                  lVar20 = *plVar29;
                  *plVar29 = lVar20 + -1;
                  if (lVar20 + -1 == 0) {
                    plVar13 = (long *)(*pplVar2)[5];
                    cVar8 = (*(code *)plVar13[3])();
                    if (cVar8 == '\0') {
                      ppcVar17 = (code **)**pplVar2;
                      *(undefined4 *)(ppcVar17 + 5) = 0x19;
                      (**ppcVar17)();
                    }
                    *plVar28 = *plVar13;
                    *plVar29 = plVar13[1];
                  }
                  if ((~(uint)uVar15 & 0xff0000) == 0) {
                    puVar16 = (undefined *)*plVar28;
                    *plVar28 = (long)(puVar16 + 1);
                    *puVar16 = 0;
                    lVar20 = *plVar29;
                    *plVar29 = lVar20 + -1;
                    if (lVar20 + -1 == 0) {
                      plVar13 = (long *)(*pplVar2)[5];
                      cVar8 = (*(code *)plVar13[3])();
                      if (cVar8 == '\0') {
                        ppcVar17 = (code **)**pplVar2;
                        *(undefined4 *)(ppcVar17 + 5) = 0x19;
                        (**ppcVar17)();
                      }
                      *plVar28 = *plVar13;
                      *plVar29 = plVar13[1];
                    }
                  }
                  iVar31 = iVar12 + -8;
                  uVar15 = uVar15 << 8;
                  bVar1 = 0xf < iVar12;
                  iVar12 = iVar31;
                } while (bVar1);
              }
              *(ulong *)(lVar26 + 0x18) = uVar15;
              *(int *)(lVar26 + 0x20) = iVar31;
            }
            iVar31 = *(int *)(lVar26 + 0xe8);
            *(undefined4 *)(lVar26 + 0xe4) = 0;
            if ((iVar31 != 0) && (*(char *)(lVar26 + 0xc0) == '\0')) {
              pbVar30 = *(byte **)(lVar26 + 0xf0);
              do {
                iVar12 = *(int *)(lVar26 + 0x20);
                uVar15 = ((ulong)*pbVar30 & 1) << ((ulong)(0x17 - iVar12) & 0x3f) |
                         *(ulong *)(lVar26 + 0x18);
                if (iVar12 < 7) {
                  iVar12 = iVar12 + 1;
                }
                else {
                  iVar18 = iVar12 + 9;
                  do {
                    iVar12 = iVar18;
                    puVar16 = (undefined *)*plVar28;
                    *plVar28 = (long)(puVar16 + 1);
                    *puVar16 = (char)(uVar15 >> 0x10);
                    lVar20 = *plVar29;
                    *plVar29 = lVar20 + -1;
                    if (lVar20 + -1 == 0) {
                      plVar13 = (long *)(*pplVar2)[5];
                      cVar8 = (*(code *)plVar13[3])();
                      if (cVar8 == '\0') {
                        ppcVar17 = (code **)**pplVar2;
                        *(undefined4 *)(ppcVar17 + 5) = 0x19;
                        (**ppcVar17)();
                      }
                      *plVar28 = *plVar13;
                      *plVar29 = plVar13[1];
                    }
                    if ((~(uint)uVar15 & 0xff0000) == 0) {
                      puVar16 = (undefined *)*plVar28;
                      *plVar28 = (long)(puVar16 + 1);
                      *puVar16 = 0;
                      lVar20 = *plVar29;
                      *plVar29 = lVar20 + -1;
                      if (lVar20 + -1 == 0) {
                        plVar13 = (long *)(*pplVar2)[5];
                        cVar8 = (*(code *)plVar13[3])();
                        if (cVar8 == '\0') {
                          ppcVar17 = (code **)**pplVar2;
                          *(undefined4 *)(ppcVar17 + 5) = 0x19;
                          (**ppcVar17)();
                        }
                        *plVar28 = *plVar13;
                        *plVar29 = plVar13[1];
                      }
                    }
                    uVar15 = uVar15 << 8;
                    iVar18 = iVar12 + -8;
                  } while (0xf < iVar18);
                  iVar12 = iVar12 + -0x10;
                }
                *(ulong *)(lVar26 + 0x18) = uVar15;
                *(int *)(lVar26 + 0x20) = iVar12;
                do {
                  iVar31 = iVar31 + -1;
                  if (iVar31 == 0) goto LAB_00d62cf4;
                  pbVar30 = pbVar30 + 1;
                } while (*(char *)(lVar26 + 0xc0) != '\0');
              } while( true );
            }
LAB_00d62cf4:
            *(undefined4 *)(lVar26 + 0xe8) = 0;
          }
          lVar20 = lVar26 + (long)*(int *)(lVar26 + 0xe0) * 8;
          if (*(char *)(lVar26 + 0xc0) == '\0') {
            lVar20 = *(long *)(lVar20 + 0x60);
            bVar5 = *(byte *)(lVar20 + 0x4f0);
            uVar11 = *(uint *)(lVar20 + 0x3c0);
            if (bVar5 == 0) {
              ppcVar17 = (code **)**(long **)(lVar26 + 0xd8);
              *(undefined4 *)(ppcVar17 + 5) = 0x29;
              (**ppcVar17)();
              if (*(char *)(lVar26 + 0xc0) != '\0') goto LAB_00d62920;
            }
            iVar31 = *(int *)(lVar26 + 0x20) + (uint)bVar5;
            uVar15 = (ulong)(~(uint)(-1L << ((ulong)bVar5 & 0x3f)) & uVar11) <<
                     ((ulong)(0x18 - iVar31) & 0x3f) | *(ulong *)(lVar26 + 0x18);
            if (iVar31 < 8) {
              cVar8 = '\0';
              *(ulong *)(lVar26 + 0x18) = uVar15;
              *(int *)(lVar26 + 0x20) = iVar31;
            }
            else {
              do {
                puVar16 = (undefined *)*plVar28;
                *plVar28 = (long)(puVar16 + 1);
                *puVar16 = (char)(uVar15 >> 0x10);
                lVar20 = *plVar29;
                *plVar29 = lVar20 + -1;
                if (lVar20 + -1 == 0) {
                  plVar13 = (long *)(*pplVar2)[5];
                  cVar8 = (*(code *)plVar13[3])();
                  if (cVar8 == '\0') {
                    ppcVar17 = (code **)**pplVar2;
                    *(undefined4 *)(ppcVar17 + 5) = 0x19;
                    (**ppcVar17)();
                  }
                  *plVar28 = *plVar13;
                  *plVar29 = plVar13[1];
                }
                if ((~(uint)uVar15 & 0xff0000) == 0) {
                  puVar16 = (undefined *)*plVar28;
                  *plVar28 = (long)(puVar16 + 1);
                  *puVar16 = 0;
                  lVar20 = *plVar29;
                  *plVar29 = lVar20 + -1;
                  if (lVar20 + -1 == 0) {
                    plVar13 = (long *)(*pplVar2)[5];
                    cVar8 = (*(code *)plVar13[3])();
                    if (cVar8 == '\0') {
                      ppcVar17 = (code **)**pplVar2;
                      *(undefined4 *)(ppcVar17 + 5) = 0x19;
                      (**ppcVar17)();
                    }
                    *plVar28 = *plVar13;
                    *plVar29 = plVar13[1];
                  }
                }
                uVar15 = uVar15 << 8;
                iVar12 = iVar31 + -8;
                bVar1 = 0xf < iVar31;
                iVar31 = iVar12;
              } while (bVar1);
              cVar8 = *(char *)(lVar26 + 0xc0);
              *(ulong *)(lVar26 + 0x18) = uVar15;
              *(int *)(lVar26 + 0x20) = iVar12;
            }
            if ((uVar27 != 0) && (cVar8 == '\0')) {
              do {
                iVar31 = *(int *)(lVar26 + 0x20);
                uVar15 = ((ulong)*local_178 & 1) << ((ulong)(0x17 - iVar31) & 0x3f) |
                         *(ulong *)(lVar26 + 0x18);
                if (iVar31 < 7) {
                  iVar31 = iVar31 + 1;
                }
                else {
                  iVar12 = iVar31 + 9;
                  do {
                    iVar31 = iVar12;
                    puVar16 = (undefined *)*plVar28;
                    *plVar28 = (long)(puVar16 + 1);
                    *puVar16 = (char)(uVar15 >> 0x10);
                    lVar20 = *plVar29;
                    *plVar29 = lVar20 + -1;
                    if (lVar20 + -1 == 0) {
                      plVar13 = (long *)(*pplVar2)[5];
                      cVar8 = (*(code *)plVar13[3])();
                      if (cVar8 == '\0') {
                        ppcVar17 = (code **)**pplVar2;
                        *(undefined4 *)(ppcVar17 + 5) = 0x19;
                        (**ppcVar17)();
                      }
                      *plVar28 = *plVar13;
                      *plVar29 = plVar13[1];
                    }
                    if ((~(uint)uVar15 & 0xff0000) == 0) {
                      puVar16 = (undefined *)*plVar28;
                      *plVar28 = (long)(puVar16 + 1);
                      *puVar16 = 0;
                      lVar20 = *plVar29;
                      *plVar29 = lVar20 + -1;
                      if (lVar20 + -1 == 0) {
                        plVar13 = (long *)(*pplVar2)[5];
                        cVar8 = (*(code *)plVar13[3])();
                        if (cVar8 == '\0') {
                          ppcVar17 = (code **)**pplVar2;
                          *(undefined4 *)(ppcVar17 + 5) = 0x19;
                          (**ppcVar17)();
                        }
                        *plVar28 = *plVar13;
                        *plVar29 = plVar13[1];
                      }
                    }
                    uVar15 = uVar15 << 8;
                    iVar12 = iVar31 + -8;
                  } while (0xf < iVar12);
                  iVar31 = iVar31 + -0x10;
                }
                *(ulong *)(lVar26 + 0x18) = uVar15;
                *(int *)(lVar26 + 0x20) = iVar31;
                do {
                  uVar27 = uVar27 - 1;
                  if (uVar27 == 0) goto LAB_00d62920;
                  local_178 = local_178 + 1;
                } while (*(char *)(lVar26 + 0xc0) != '\0');
              } while( true );
            }
          }
          else {
            lVar20 = *(long *)(lVar20 + 0xa0);
            *(long *)(lVar20 + 0x780) = *(long *)(lVar20 + 0x780) + 1;
          }
LAB_00d62920:
          uVar27 = 0;
          local_178 = *(byte **)(lVar26 + 0xf0);
          iVar31 = local_17c + -0x10;
          bVar1 = 0x1f < local_17c;
          local_17c = iVar31;
          uVar11 = 0;
        } while (bVar1);
      }
      if ((int)uVar25 < 2) {
        FUN_00d647a8(lVar26);
        uVar27 = iVar31 << 4;
        uVar15 = (long)(int)uVar27 | 1;
        lVar20 = lVar26 + (long)*(int *)(lVar26 + 0xe0) * 8;
        if (*(char *)(lVar26 + 0xc0) == '\0') {
          lVar20 = *(long *)(lVar20 + 0x60);
          FUN_00d64bd0(lVar26,*(undefined4 *)(lVar20 + uVar15 * 4),
                       *(undefined *)(lVar20 + uVar15 + 0x400));
          if (*(char *)(lVar26 + 0xc0) == '\0') {
            iVar31 = *(int *)(lVar26 + 0x20);
            uVar15 = (ulong)(~(uint)*(ushort *)(lVar9 + (long)*(int *)(lVar21 + lVar23 * 4) * 2) >>
                             0xf & 1) << ((ulong)(0x17 - iVar31) & 0x3f) | *(ulong *)(lVar26 + 0x18)
            ;
            if (iVar31 < 7) {
              iVar31 = iVar31 + 1;
            }
            else {
              iVar12 = iVar31 + 9;
              do {
                iVar31 = iVar12;
                puVar16 = (undefined *)*plVar28;
                *plVar28 = (long)(puVar16 + 1);
                *puVar16 = (char)(uVar15 >> 0x10);
                lVar20 = *plVar29;
                *plVar29 = lVar20 + -1;
                if (lVar20 + -1 == 0) {
                  plVar13 = (long *)(*pplVar2)[5];
                  cVar8 = (*(code *)plVar13[3])();
                  if (cVar8 == '\0') {
                    ppcVar17 = (code **)**pplVar2;
                    *(undefined4 *)(ppcVar17 + 5) = 0x19;
                    (**ppcVar17)();
                  }
                  *plVar28 = *plVar13;
                  *plVar29 = plVar13[1];
                }
                if ((~(uint)uVar15 & 0xff0000) == 0) {
                  puVar16 = (undefined *)*plVar28;
                  *plVar28 = (long)(puVar16 + 1);
                  *puVar16 = 0;
                  lVar20 = *plVar29;
                  *plVar29 = lVar20 + -1;
                  if (lVar20 + -1 == 0) {
                    plVar13 = (long *)(*pplVar2)[5];
                    cVar8 = (*(code *)plVar13[3])();
                    if (cVar8 == '\0') {
                      ppcVar17 = (code **)**pplVar2;
                      *(undefined4 *)(ppcVar17 + 5) = 0x19;
                      (**ppcVar17)();
                    }
                    *plVar28 = *plVar13;
                    *plVar29 = plVar13[1];
                  }
                }
                uVar15 = uVar15 << 8;
                iVar12 = iVar31 + -8;
              } while (0xf < iVar12);
              iVar31 = iVar31 + -0x10;
            }
            *(ulong *)(lVar26 + 0x18) = uVar15;
            *(int *)(lVar26 + 0x20) = iVar31;
          }
        }
        else {
          lVar20 = *(long *)(lVar20 + 0xa0);
          uVar15 = -(((long)(int)uVar27 & 0x80000000U) >> 0x1f) & 0xfffffff800000000 |
                   ((ulong)uVar27 | 1) << 3;
          *(long *)(lVar20 + uVar15) = *(long *)(lVar20 + uVar15) + 1;
        }
        FUN_00d64d88(lVar26,local_178,uVar11);
        iVar31 = 0;
        uVar27 = 0;
        local_178 = *(byte **)(lVar26 + 0xf0);
        goto joined_r0x00d632c4;
      }
      uVar27 = uVar11 + 1;
      local_178[uVar11] = (byte)uVar25 & 1;
      lVar23 = lVar23 + 1;
    } while (iVar10 + 1 != (int)lVar23);
LAB_00d632c8:
    if (iVar31 < 1) goto LAB_00d632d8;
  }
  local_188 = (int *)(lVar26 + 0xe4);
  local_190 = (uint *)(lVar26 + 0xe8);
  uVar25 = *local_190;
  iVar10 = *local_188;
  *local_188 = iVar10 + 1;
  *local_190 = uVar25 + uVar27;
  if ((iVar10 + 1 == 0x7fff) || (0x3a9 < uVar25 + uVar27)) {
    FUN_00d647a8(lVar26);
  }
LAB_00d6331c:
  plVar13 = *(long **)(param_1 + 0x28);
  *plVar13 = *plVar28;
  plVar13[1] = *plVar29;
  iVar10 = *(int *)(param_1 + 0x130);
  if (iVar10 != 0) {
    iVar31 = *(int *)(lVar26 + 0x38);
    if (*(int *)(lVar26 + 0x38) == 0) {
      *(uint *)(lVar26 + 0x3c) = *(int *)(lVar26 + 0x3c) + 1U & 7;
      iVar31 = iVar10;
    }
    *(int *)(lVar26 + 0x38) = iVar31 + -1;
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


