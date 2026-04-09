// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _tr_flush_block
// Entry Point: 00e2e3f4
// Size: 2396 bytes
// Signature: undefined _tr_flush_block(void)


void _tr_flush_block(long *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ushort uVar14;
  ulong uVar15;
  int iVar16;
  ushort *puVar17;
  byte *pbVar18;
  uint uVar19;
  
  if (*(int *)((long)param_1 + 0xc4) < 1) {
    uVar13 = param_3 + 5;
    iVar7 = 0;
    uVar6 = uVar13;
    if (param_2 != 0) goto LAB_00e2e89c;
LAB_00e2e900:
    uVar8 = *(uint *)((long)param_1 + 0x1734);
    if ((*(int *)(param_1 + 0x19) == 4) || (uVar13 == uVar6)) {
      uVar19 = param_4 + 2;
      if ((int)uVar8 < 0xe) {
        uVar14 = *(ushort *)(param_1 + 0x2e6) | (ushort)(uVar19 << (ulong)(uVar8 & 0x1f));
        iVar7 = uVar8 + 3;
      }
      else {
        lVar9 = param_1[5];
        uVar8 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar19 << (ulong)(uVar8 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar9 + 1;
        *(char *)(param_1[2] + lVar9) = (char)uVar8;
        lVar9 = param_1[5];
        param_1[5] = lVar9 + 1;
        *(undefined *)(param_1[2] + lVar9) = *(undefined *)((long)param_1 + 0x1731);
        uVar14 = (ushort)((uVar19 & 0xffff) >>
                         (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f));
        iVar7 = *(int *)((long)param_1 + 0x1734) + -0xd;
      }
      *(ushort *)(param_1 + 0x2e6) = uVar14;
      *(int *)((long)param_1 + 0x1734) = iVar7;
      FUN_00e2f5fc(param_1,&DAT_0055f1ec,&DAT_0055f66c);
      FUN_00e2df7c(param_1);
    }
    else {
      uVar19 = param_4 + 4;
      if ((int)uVar8 < 0xe) {
        uVar11 = uVar8 + 3;
        uVar8 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar19 << (ulong)(uVar8 & 0x1f);
      }
      else {
        lVar9 = param_1[5];
        uVar8 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar19 << (ulong)(uVar8 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar9 + 1;
        *(char *)(param_1[2] + lVar9) = (char)uVar8;
        lVar9 = param_1[5];
        param_1[5] = lVar9 + 1;
        *(undefined *)(param_1[2] + lVar9) = *(undefined *)((long)param_1 + 0x1731);
        uVar11 = *(int *)((long)param_1 + 0x1734) - 0xd;
        uVar8 = (uVar19 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
      }
      uVar2 = *(uint *)(param_1 + 0x16f);
      *(uint *)((long)param_1 + 0x1734) = uVar11;
      uVar19 = *(int *)(param_1 + 0x16c) + 0xff00;
      if ((int)uVar11 < 0xc) {
        uVar12 = uVar11 + 5;
        uVar8 = uVar8 | uVar19 << (ulong)(uVar11 & 0x1f);
        *(uint *)((long)param_1 + 0x1734) = uVar12;
        if (0xb < (int)uVar12) goto LAB_00e2eb64;
LAB_00e2eb14:
        uVar8 = uVar8 | uVar2 + 0x10000 << (ulong)(uVar12 & 0x1f);
        uVar12 = uVar12 + 5;
        uVar13 = (ulong)(iVar7 + 1);
        *(uint *)((long)param_1 + 0x1734) = uVar12;
        if ((int)uVar12 < 0xd) goto LAB_00e2eb38;
LAB_00e2ebd4:
        lVar9 = param_1[5];
        uVar8 = uVar8 | iVar7 + 0xfffdU << (ulong)(uVar12 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar9 + 1;
        *(char *)(param_1[2] + lVar9) = (char)uVar8;
        lVar9 = param_1[5];
        param_1[5] = lVar9 + 1;
        *(undefined *)(param_1[2] + lVar9) = *(undefined *)((long)param_1 + 0x1731);
        uVar12 = *(int *)((long)param_1 + 0x1734) - 0xc;
        uVar8 = (iVar7 + 0xfffdU & 0xffff) >>
                (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
      }
      else {
        lVar9 = param_1[5];
        uVar8 = uVar8 | uVar19 << (ulong)(uVar11 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar9 + 1;
        *(char *)(param_1[2] + lVar9) = (char)uVar8;
        lVar9 = param_1[5];
        param_1[5] = lVar9 + 1;
        *(undefined *)(param_1[2] + lVar9) = *(undefined *)((long)param_1 + 0x1731);
        uVar12 = *(int *)((long)param_1 + 0x1734) - 0xb;
        uVar8 = (uVar19 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(uint *)((long)param_1 + 0x1734) = uVar12;
        if ((int)uVar12 < 0xc) goto LAB_00e2eb14;
LAB_00e2eb64:
        lVar9 = param_1[5];
        uVar8 = uVar8 | uVar2 + 0x10000 << (ulong)(uVar12 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar9 + 1;
        *(char *)(param_1[2] + lVar9) = (char)uVar8;
        lVar9 = param_1[5];
        param_1[5] = lVar9 + 1;
        *(undefined *)(param_1[2] + lVar9) = *(undefined *)((long)param_1 + 0x1731);
        uVar8 = (uVar2 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar12 = *(int *)((long)param_1 + 0x1734) - 0xb;
        uVar13 = (ulong)(iVar7 + 1);
        *(uint *)((long)param_1 + 0x1734) = uVar12;
        if (0xc < (int)uVar12) goto LAB_00e2ebd4;
LAB_00e2eb38:
        uVar8 = uVar8 | iVar7 + 0xfffd << (ulong)(uVar12 & 0x1f);
        uVar12 = uVar12 + 4;
      }
      pbVar18 = &DAT_0055f81c;
      *(uint *)((long)param_1 + 0x1734) = uVar12;
      do {
        while( true ) {
          uVar14 = *(ushort *)((long)param_1 + (ulong)*pbVar18 * 4 + 0xabe);
          uVar8 = uVar8 | (uint)uVar14 << (ulong)(uVar12 & 0x1f);
          *(short *)(param_1 + 0x2e6) = (short)uVar8;
          if ((int)uVar12 < 0xe) break;
          lVar9 = param_1[5];
          param_1[5] = lVar9 + 1;
          *(char *)(param_1[2] + lVar9) = (char)uVar8;
          lVar9 = param_1[5];
          param_1[5] = lVar9 + 1;
          *(undefined *)(param_1[2] + lVar9) = *(undefined *)((long)param_1 + 0x1731);
          uVar12 = *(int *)((long)param_1 + 0x1734) - 0xd;
          uVar14 = uVar14 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
          uVar8 = (uint)uVar14;
          *(ushort *)(param_1 + 0x2e6) = uVar14;
          uVar13 = uVar13 - 1;
          pbVar18 = pbVar18 + 1;
          *(uint *)((long)param_1 + 0x1734) = uVar12;
          if (uVar13 == 0) goto LAB_00e2eccc;
        }
        uVar12 = uVar12 + 3;
        uVar13 = uVar13 - 1;
        pbVar18 = pbVar18 + 1;
        *(uint *)((long)param_1 + 0x1734) = uVar12;
      } while (uVar13 != 0);
LAB_00e2eccc:
      FUN_00e2fa74(param_1,(long)param_1 + 0xd4);
      FUN_00e2fa74(param_1,param_1 + 0x139,uVar2);
      FUN_00e2f5fc(param_1,(long)param_1 + 0xd4,param_1 + 0x139);
      FUN_00e2df7c(param_1);
    }
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      if (((((((((*(short *)((long)param_1 + 0xd4) == 0) && (*(short *)(param_1 + 0x1b) == 0)) &&
               (*(short *)((long)param_1 + 0xdc) == 0)) &&
              ((*(short *)(param_1 + 0x1c) == 0 && (*(short *)((long)param_1 + 0xe4) == 0)))) &&
             (*(short *)(param_1 + 0x1d) == 0)) &&
            (((*(short *)((long)param_1 + 0xec) == 0 && (*(short *)((long)param_1 + 0x10c) == 0)) &&
             ((*(short *)(param_1 + 0x22) == 0 &&
              (((*(short *)((long)param_1 + 0x114) == 0 && (*(short *)(param_1 + 0x23) == 0)) &&
               (*(short *)((long)param_1 + 0x11c) == 0)))))))) &&
           ((*(short *)(param_1 + 0x24) == 0 && (*(short *)((long)param_1 + 0x124) == 0)))) &&
          ((*(short *)(param_1 + 0x25) == 0 &&
           (((*(short *)((long)param_1 + 300) == 0 && (*(short *)(param_1 + 0x26) == 0)) &&
            ((*(short *)((long)param_1 + 0x134) == 0 &&
             (((*(short *)(param_1 + 0x27) == 0 && (*(short *)((long)param_1 + 0x144) == 0)) &&
              (*(short *)(param_1 + 0x29) == 0)))))))))) &&
         ((*(short *)((long)param_1 + 0x14c) == 0 && (*(short *)(param_1 + 0x2a) == 0)))) {
        if (((*(short *)(param_1 + 0x1f) == 0) && (*(short *)((long)param_1 + 0xfc) == 0)) &&
           (*(short *)(param_1 + 0x21) == 0)) {
          lVar9 = 0;
          do {
            if (*(short *)((long)param_1 + lVar9 + 0x154) != 0) goto LAB_00e2ed28;
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x380);
          uVar10 = 0;
        }
        else {
LAB_00e2ed28:
          uVar10 = 1;
        }
      }
      else {
        uVar10 = 0;
      }
      *(undefined4 *)(*param_1 + 0x58) = uVar10;
    }
    FUN_00e2ed50(param_1,param_1 + 0x16b);
    FUN_00e2ed50(param_1,param_1 + 0x16e);
    iVar7 = *(int *)(param_1 + 0x16c);
    uVar14 = *(ushort *)((long)param_1 + 0xd6);
    uVar8 = iVar7 + 1;
    uVar13 = (ulong)uVar8;
    *(undefined2 *)((long)param_1 + (long)(int)uVar8 * 4 + 0xd6) = 0xffff;
    if (-1 < iVar7) {
      iVar5 = 0;
      iVar7 = 3;
      if (uVar14 != 0) {
        iVar7 = 4;
      }
      iVar16 = 0x8a;
      if (uVar14 != 0) {
        iVar16 = 7;
      }
      puVar17 = (ushort *)((long)param_1 + 0xda);
      uVar6 = 0xffffffff;
      do {
        uVar15 = (ulong)uVar14;
        uVar4 = *puVar17;
        iVar1 = iVar5 + 1;
        uVar8 = (uint)uVar4;
        uVar19 = (uint)uVar14;
        if ((iVar16 <= iVar1) || (uVar19 != uVar8)) {
          if (iVar1 < iVar7) {
            *(short *)((long)param_1 + uVar15 * 4 + 0xabc) =
                 *(short *)((long)param_1 + uVar15 * 4 + 0xabc) + (short)iVar1;
joined_r0x00e2e5e4:
            if (uVar4 == 0) {
LAB_00e2e5e8:
              iVar7 = 3;
              iVar16 = 0x8a;
              uVar6 = uVar15;
              iVar1 = 0;
              goto LAB_00e2e558;
            }
          }
          else {
            if (uVar19 != 0) {
              if (uVar19 != (uint)uVar6) {
                *(short *)((long)param_1 + uVar15 * 4 + 0xabc) =
                     *(short *)((long)param_1 + uVar15 * 4 + 0xabc) + 1;
              }
              *(short *)((long)param_1 + 0xafc) = *(short *)((long)param_1 + 0xafc) + 1;
              goto joined_r0x00e2e5e4;
            }
            if (9 < iVar5) {
              *(short *)((long)param_1 + 0xb04) = *(short *)((long)param_1 + 0xb04) + 1;
              if (uVar8 != 0) goto LAB_00e2e5a8;
              goto LAB_00e2e5e8;
            }
            *(short *)(param_1 + 0x160) = *(short *)(param_1 + 0x160) + 1;
            if (uVar8 == 0) goto LAB_00e2e5e8;
          }
LAB_00e2e5a8:
          iVar16 = 6;
          if (uVar19 != uVar4) {
            iVar16 = 7;
          }
          iVar7 = 3;
          uVar6 = uVar15;
          iVar1 = 0;
          if (uVar19 != uVar4) {
            iVar7 = 4;
          }
        }
LAB_00e2e558:
        iVar5 = iVar1;
        uVar13 = uVar13 - 1;
        puVar17 = puVar17 + 2;
        uVar14 = uVar4;
      } while (uVar13 != 0);
    }
    iVar7 = *(int *)(param_1 + 0x16f);
    uVar14 = *(ushort *)((long)param_1 + 0x9ca);
    uVar8 = iVar7 + 1;
    uVar13 = (ulong)uVar8;
    *(undefined2 *)((long)param_1 + (long)(int)uVar8 * 4 + 0x9ca) = 0xffff;
    if (-1 < iVar7) {
      iVar5 = 0;
      iVar7 = 3;
      if (uVar14 != 0) {
        iVar7 = 4;
      }
      iVar16 = 0x8a;
      if (uVar14 != 0) {
        iVar16 = 7;
      }
      puVar17 = (ushort *)((long)param_1 + 0x9ce);
      uVar6 = 0xffffffff;
      do {
        uVar15 = (ulong)uVar14;
        uVar4 = *puVar17;
        iVar1 = iVar5 + 1;
        uVar8 = (uint)uVar4;
        uVar19 = (uint)uVar14;
        if ((iVar16 <= iVar1) || (uVar19 != uVar8)) {
          if (iVar1 < iVar7) {
            *(short *)((long)param_1 + uVar15 * 4 + 0xabc) =
                 *(short *)((long)param_1 + uVar15 * 4 + 0xabc) + (short)iVar1;
joined_r0x00e2e700:
            if (uVar4 == 0) {
LAB_00e2e704:
              iVar7 = 3;
              iVar16 = 0x8a;
              uVar6 = uVar15;
              iVar1 = 0;
              goto LAB_00e2e674;
            }
          }
          else {
            if (uVar19 != 0) {
              if (uVar19 != (uint)uVar6) {
                *(short *)((long)param_1 + uVar15 * 4 + 0xabc) =
                     *(short *)((long)param_1 + uVar15 * 4 + 0xabc) + 1;
              }
              *(short *)((long)param_1 + 0xafc) = *(short *)((long)param_1 + 0xafc) + 1;
              goto joined_r0x00e2e700;
            }
            if (9 < iVar5) {
              *(short *)((long)param_1 + 0xb04) = *(short *)((long)param_1 + 0xb04) + 1;
              if (uVar8 != 0) goto LAB_00e2e6c4;
              goto LAB_00e2e704;
            }
            *(short *)(param_1 + 0x160) = *(short *)(param_1 + 0x160) + 1;
            if (uVar8 == 0) goto LAB_00e2e704;
          }
LAB_00e2e6c4:
          iVar16 = 6;
          if (uVar19 != uVar4) {
            iVar16 = 7;
          }
          iVar7 = 3;
          uVar6 = uVar15;
          iVar1 = 0;
          if (uVar19 != uVar4) {
            iVar7 = 4;
          }
        }
LAB_00e2e674:
        iVar5 = iVar1;
        uVar13 = uVar13 - 1;
        puVar17 = puVar17 + 2;
        uVar14 = uVar4;
      } while (uVar13 != 0);
    }
    FUN_00e2ed50(param_1,param_1 + 0x171);
    if (*(short *)((long)param_1 + 0xafa) == 0) {
      if (*(short *)((long)param_1 + 0xac2) == 0) {
        if (*(short *)((long)param_1 + 0xaf6) == 0) {
          if (*(short *)((long)param_1 + 0xac6) == 0) {
            if (*(short *)((long)param_1 + 0xaf2) == 0) {
              if (*(short *)((long)param_1 + 0xaca) == 0) {
                if (*(short *)((long)param_1 + 0xaee) == 0) {
                  if (*(short *)((long)param_1 + 0xace) == 0) {
                    if (*(short *)((long)param_1 + 0xaea) == 0) {
                      if (*(short *)((long)param_1 + 0xad2) == 0) {
                        if (*(short *)((long)param_1 + 0xae6) == 0) {
                          if (*(short *)((long)param_1 + 0xad6) == 0) {
                            if (*(short *)((long)param_1 + 0xae2) == 0) {
                              if (*(short *)((long)param_1 + 0xada) == 0) {
                                if (*(short *)((long)param_1 + 0xade) == 0) {
                                  iVar7 = 2;
                                  if (*(short *)((long)param_1 + 0xabe) != 0) {
                                    iVar7 = 3;
                                  }
                                }
                                else {
                                  iVar7 = 4;
                                }
                              }
                              else {
                                iVar7 = 5;
                              }
                            }
                            else {
                              iVar7 = 6;
                            }
                          }
                          else {
                            iVar7 = 7;
                          }
                        }
                        else {
                          iVar7 = 8;
                        }
                      }
                      else {
                        iVar7 = 9;
                      }
                    }
                    else {
                      iVar7 = 10;
                    }
                  }
                  else {
                    iVar7 = 0xb;
                  }
                }
                else {
                  iVar7 = 0xc;
                }
              }
              else {
                iVar7 = 0xd;
              }
            }
            else {
              iVar7 = 0xe;
            }
          }
          else {
            iVar7 = 0xf;
          }
        }
        else {
          iVar7 = 0x10;
        }
      }
      else {
        iVar7 = 0x11;
      }
    }
    else {
      iVar7 = 0x12;
    }
    lVar9 = param_1[0x2e3] + (ulong)(iVar7 * 3 + 0x11);
    uVar6 = lVar9 + 10U >> 3;
    uVar13 = param_1[0x2e4] + 10U >> 3;
    param_1[0x2e3] = lVar9;
    if (uVar13 <= uVar6) {
      uVar6 = uVar13;
    }
    if (param_2 == 0) goto LAB_00e2e900;
LAB_00e2e89c:
    if (uVar6 < param_3 + 4U) goto LAB_00e2e900;
    _tr_stored_block(param_1,param_2,param_3,param_4);
    FUN_00e2df7c(param_1);
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1734) < 9) {
    if (*(int *)((long)param_1 + 0x1734) < 1) goto LAB_00e2e9a8;
    lVar9 = param_1[5];
    uVar3 = *(undefined *)(param_1 + 0x2e6);
  }
  else {
    lVar9 = param_1[5];
    param_1[5] = lVar9 + 1;
    *(undefined *)(param_1[2] + lVar9) = *(undefined *)(param_1 + 0x2e6);
    lVar9 = param_1[5];
    uVar3 = *(undefined *)((long)param_1 + 0x1731);
  }
  param_1[5] = lVar9 + 1;
  *(undefined *)(param_1[2] + lVar9) = uVar3;
LAB_00e2e9a8:
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined4 *)((long)param_1 + 0x1734) = 0;
  return;
}


