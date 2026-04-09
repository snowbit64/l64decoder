// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tonality_get_info
// Entry Point: 00ea1720
// Size: 1376 bytes
// Signature: undefined tonality_get_info(void)


void tonality_get_info(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  iVar4 = *(int *)(param_1 + 0x1d18);
  iVar2 = *(int *)(param_1 + 8) / 400;
  iVar5 = *(int *)(param_1 + 0x1d14);
  iVar11 = 0;
  if (iVar2 != 0) {
    iVar11 = param_3 / iVar2;
  }
  iVar15 = iVar5 - iVar4;
  iVar11 = *(int *)(param_1 + 0x1d1c) + iVar11;
  iVar2 = iVar15 + 100;
  if (-1 < iVar15) {
    iVar2 = iVar15;
  }
  *(int *)(param_1 + 0x1d1c) = iVar11;
  iVar15 = iVar4;
  if (7 < iVar11) {
    iVar15 = iVar11;
    if (0xe < iVar11) {
      iVar15 = 0xf;
    }
    uVar13 = (iVar11 - iVar15) + 7;
    iVar15 = iVar4 + (uVar13 >> 3) + 1;
    *(uint *)(param_1 + 0x1d1c) = (iVar11 - (uVar13 & 0xfffffff8)) + -8;
    *(int *)(param_1 + 0x1d18) = iVar15;
  }
  if (99 < iVar15) {
    *(int *)(param_1 + 0x1d18) = iVar15 + -100;
  }
  iVar15 = *(int *)(param_1 + 8) / 0x32;
  iVar11 = 0;
  if (iVar4 != 99) {
    iVar11 = iVar4 + 1;
  }
  bVar9 = false;
  if (iVar5 != iVar4) {
    bVar9 = iVar15 - param_3 < 0;
  }
  if (bVar9 != (iVar5 != iVar4 && SBORROW4(iVar15,param_3))) {
    iVar4 = iVar11;
  }
  uVar12 = iVar4 - (uint)(iVar4 == iVar5);
  uVar13 = 99;
  if (-1 < (int)uVar12) {
    uVar13 = uVar12;
  }
  uVar10 = (ulong)uVar13;
  lVar1 = param_1 + uVar10 * 0x40;
  uVar21 = *(undefined8 *)(lVar1 + 0x1db4);
  uVar23 = *(undefined8 *)(lVar1 + 0x1dcc);
  uVar22 = *(undefined8 *)(lVar1 + 0x1dc4);
  uVar27 = *(undefined8 *)(lVar1 + 0x1ddc);
  uVar26 = *(undefined8 *)(lVar1 + 0x1dd4);
  uVar25 = *(undefined8 *)(lVar1 + 0x1dec);
  uVar24 = *(undefined8 *)(lVar1 + 0x1de4);
  param_2[1] = *(undefined8 *)(lVar1 + 0x1dbc);
  *param_2 = uVar21;
  param_2[3] = uVar23;
  param_2[2] = uVar22;
  param_2[5] = uVar27;
  param_2[4] = uVar26;
  param_2[7] = uVar25;
  param_2[6] = uVar24;
  if (*(int *)param_2 == 0) {
    return;
  }
  uVar12 = uVar13 + 1;
  uVar6 = *(uint *)(param_1 + 0x1d14);
  fVar17 = *(float *)((long)param_2 + 4);
  uVar16 = 0;
  if (uVar12 != 100) {
    uVar16 = uVar13 + 1;
  }
  fVar19 = fVar17;
  if (uVar16 == uVar6) {
    bVar9 = false;
    fVar28 = 1.0;
    uVar16 = 99;
    if (0 < (int)uVar13) {
      uVar16 = uVar13 - 1;
    }
joined_r0x00ea1968:
    bVar8 = false;
    bVar7 = false;
  }
  else {
    lVar1 = param_1 + (ulong)uVar16 * 0x40;
    fVar28 = *(float *)(lVar1 + 0x1db8);
    iVar11 = *(int *)(lVar1 + 0x1dd4);
    if (fVar17 <= fVar28) {
      fVar19 = fVar28;
    }
    fVar17 = fVar17 + fVar28;
    iVar4 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) <= iVar11) {
      iVar4 = iVar11;
    }
    uVar3 = 0;
    if (uVar16 != 99) {
      uVar3 = uVar16 + 1;
    }
    *(int *)(param_2 + 4) = iVar4;
    if (uVar3 == uVar6) {
      bVar7 = false;
      bVar8 = true;
      fVar28 = 2.0;
      uVar16 = 99;
      if (0 < (int)uVar13) {
        uVar16 = uVar13 - 1;
      }
    }
    else {
      lVar1 = param_1 + (ulong)uVar3 * 0x40;
      fVar28 = *(float *)(lVar1 + 0x1db8);
      iVar11 = *(int *)(lVar1 + 0x1dd4);
      fVar17 = fVar17 + fVar28;
      if (fVar19 <= fVar28) {
        fVar19 = fVar28;
      }
      if (iVar4 <= iVar11) {
        iVar4 = iVar11;
      }
      uVar16 = 0;
      if (uVar3 != 99) {
        uVar16 = uVar3 + 1;
      }
      *(int *)(param_2 + 4) = iVar4;
      if (uVar16 != uVar6) {
        lVar1 = param_1 + (ulong)uVar16 * 0x40;
        fVar28 = *(float *)(lVar1 + 0x1db8);
        iVar11 = *(int *)(lVar1 + 0x1dd4);
        fVar17 = fVar17 + fVar28;
        if (fVar19 <= fVar28) {
          fVar19 = fVar28;
        }
        if (iVar4 <= iVar11) {
          iVar4 = iVar11;
        }
        bVar9 = true;
        fVar28 = 4.0;
        *(int *)(param_2 + 4) = iVar4;
        uVar16 = 99;
        if (0 < (int)uVar13) {
          uVar16 = uVar13 - 1;
        }
        goto joined_r0x00ea1968;
      }
      bVar8 = false;
      bVar7 = true;
      fVar28 = 3.0;
      uVar16 = 99;
      if (0 < (int)uVar13) {
        uVar16 = uVar13 - 1;
      }
    }
    bVar9 = false;
  }
  if (uVar16 != uVar6) {
    iVar4 = *(int *)(param_1 + (ulong)uVar16 * 0x40 + 0x1dd4);
    iVar11 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) <= iVar4) {
      iVar11 = iVar4;
    }
    uVar3 = 99;
    if (0 < (int)uVar16) {
      uVar3 = uVar16 - 1;
    }
    *(int *)(param_2 + 4) = iVar11;
    if (uVar3 != uVar6) {
      iVar4 = *(int *)(param_1 + (ulong)uVar3 * 0x40 + 0x1dd4);
      iVar11 = *(int *)(param_2 + 4);
      if (*(int *)(param_2 + 4) <= iVar4) {
        iVar11 = iVar4;
      }
      uVar16 = 99;
      if (0 < (int)uVar3) {
        uVar16 = uVar3 - 1;
      }
      *(int *)(param_2 + 4) = iVar11;
      if (uVar16 != uVar6) {
        iVar4 = *(int *)(param_1 + (ulong)uVar16 * 0x40 + 0x1dd4);
        iVar11 = *(int *)(param_2 + 4);
        if (*(int *)(param_2 + 4) <= iVar4) {
          iVar11 = iVar4;
        }
        *(int *)(param_2 + 4) = iVar11;
        if (!bVar9) {
          uVar3 = 99;
          if (0 < (int)uVar16) {
            uVar3 = uVar16 - 1;
          }
          if (uVar3 != uVar6) {
            iVar4 = *(int *)(param_1 + (ulong)uVar3 * 0x40 + 0x1dd4);
            iVar11 = *(int *)(param_2 + 4);
            if (*(int *)(param_2 + 4) <= iVar4) {
              iVar11 = iVar4;
            }
            *(int *)(param_2 + 4) = iVar11;
            if (!bVar7) {
              uVar16 = 99;
              if (0 < (int)uVar3) {
                uVar16 = uVar3 - 1;
              }
              if (uVar16 != uVar6) {
                iVar4 = *(int *)(param_1 + (ulong)uVar16 * 0x40 + 0x1dd4);
                iVar11 = *(int *)(param_2 + 4);
                if (*(int *)(param_2 + 4) <= iVar4) {
                  iVar11 = iVar4;
                }
                *(int *)(param_2 + 4) = iVar11;
                if (!bVar8) {
                  uVar3 = 99;
                  if (0 < (int)uVar16) {
                    uVar3 = uVar16 - 1;
                  }
                  if (uVar3 != uVar6) {
                    iVar4 = *(int *)(param_1 + (ulong)uVar3 * 0x40 + 0x1dd4);
                    iVar11 = *(int *)(param_2 + 4);
                    if (*(int *)(param_2 + 4) <= iVar4) {
                      iVar11 = iVar4;
                    }
                    *(int *)(param_2 + 4) = iVar11;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  fVar18 = fVar17 / fVar28;
  if (fVar17 / fVar28 <= fVar19 + -0.2) {
    fVar18 = fVar19 + -0.2;
  }
  *(float *)((long)param_2 + 4) = fVar18;
  uVar14 = uVar10;
  uVar16 = uVar13;
  if (0xf < iVar2) {
    iVar11 = -0x5f;
    if ((int)uVar13 < 0x5f) {
      iVar11 = 5;
    }
    uVar16 = iVar11 + uVar13;
    iVar11 = -99;
    if ((int)uVar13 < 99) {
      iVar11 = 1;
    }
    uVar14 = (ulong)(iVar11 + uVar13);
    uVar12 = uVar16 + 1;
  }
  uVar13 = 0;
  if (uVar12 != 100) {
    uVar13 = uVar12;
  }
  fVar19 = *(float *)(param_1 + 0x1db4 + (long)(int)uVar14 * 0x40 + 0x24);
  fVar17 = fVar19;
  if (fVar19 <= 0.1) {
    fVar17 = 0.1;
  }
  fVar28 = *(float *)(param_1 + 0x1db4 + (long)(int)uVar16 * 0x40 + 0x14) * fVar17;
  if (uVar13 == uVar6) {
    fVar18 = 0.0;
    fVar30 = 1.0;
  }
  else {
    fVar18 = 0.0;
    fVar29 = 1.0;
    do {
      uVar12 = 0;
      if ((int)uVar14 != 99) {
        uVar12 = (int)uVar14 + 1;
      }
      uVar14 = (ulong)uVar12;
      fVar30 = fVar29;
      if (uVar12 == uVar6) break;
      fVar31 = *(float *)(param_1 + 0x1db4 + (long)(int)uVar12 * 0x40 + 0x24);
      fVar32 = fVar31;
      if (fVar31 <= 0.1) {
        fVar32 = 0.1;
      }
      fVar30 = (float)NEON_fmadd(fVar19 - fVar31,0xc1200000,fVar28);
      fVar31 = (float)NEON_fmadd(fVar19 - fVar31,0x41200000,fVar28);
      fVar30 = fVar30 / fVar17;
      fVar31 = fVar31 / fVar17;
      fVar17 = fVar17 + fVar32;
      if (fVar29 <= fVar30) {
        fVar30 = fVar29;
      }
      fVar28 = (float)NEON_fmadd(fVar32,*(undefined4 *)
                                         (param_1 + 0x1db4 + (long)(int)uVar13 * 0x40 + 0x14),fVar28
                                );
      if (fVar31 <= fVar18) {
        fVar31 = fVar18;
      }
      fVar18 = fVar31;
      uVar12 = 0;
      if (uVar13 != 99) {
        uVar12 = uVar13 + 1;
      }
      fVar29 = fVar30;
      uVar13 = uVar12;
    } while (uVar12 != uVar6);
  }
  fVar28 = fVar28 / fVar17;
  *(float *)((long)param_2 + 0x14) = fVar28;
  fVar17 = fVar28;
  if (fVar30 <= fVar28) {
    fVar17 = fVar30;
  }
  if (fVar28 <= fVar18) {
    fVar28 = fVar18;
  }
  fVar28 = (float)NEON_fminnm(fVar28,0x3f800000);
  if (iVar2 < 10) {
    iVar11 = 0xf;
    if (*(int *)(param_1 + 0x1d0c) < 0x10) {
      iVar11 = *(int *)(param_1 + 0x1d0c) + -1;
    }
    fVar29 = fVar17;
    fVar18 = fVar28;
    if (0 < iVar11) {
      do {
        uVar13 = 99;
        if (0 < (int)uVar10) {
          uVar13 = (int)uVar10 - 1;
        }
        uVar10 = (ulong)uVar13;
        fVar30 = *(float *)(param_1 + uVar10 * 0x40 + 0x1dc8);
        if (fVar30 <= fVar29) {
          fVar29 = fVar30;
        }
        if (fVar18 <= fVar30) {
          fVar18 = fVar30;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    fVar29 = (float)NEON_fmadd(fVar19,0xbdcccccd,fVar29);
    uVar20 = NEON_fmadd(fVar19,0x3dcccccd,fVar18);
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    fVar19 = (float)NEON_fmin(uVar20,0x3f800000);
    uVar20 = NEON_fmadd((float)iVar2,0xbdcccccd,0x3f800000);
    fVar17 = (float)NEON_fmadd(uVar20,fVar29 - fVar17,fVar17);
    fVar28 = (float)NEON_fmadd(uVar20,fVar19 - fVar28,fVar28);
  }
  *(float *)(param_2 + 3) = fVar17;
  *(float *)((long)param_2 + 0x1c) = fVar28;
  return;
}


