// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompressAlphaDxt5
// Entry Point: 00deb5a0
// Size: 3912 bytes
// Signature: undefined __cdecl CompressAlphaDxt5(uchar * param_1, int param_2, void * param_3)


/* squish::CompressAlphaDxt5(unsigned char const*, int, void*) */

void squish::CompressAlphaDxt5(uchar *param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar7;
  byte *pbVar6;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  byte bVar16;
  uint uVar15;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  byte local_88 [16];
  byte local_78 [16];
  long local_68;
  
  lVar5 = tpidr_el0;
  lVar13 = 0;
  uVar15 = 0;
  uVar29 = 0;
  local_68 = *(long *)(lVar5 + 0x28);
  pbVar6 = param_1 + 3;
  uVar11 = 0xff;
  uVar28 = 0xff;
  do {
    uVar24 = uVar29;
    if (((uint)param_2 >> (ulong)((uint)lVar13 & 0x1f) & 1) != 0) {
      bVar16 = *pbVar6;
      uVar23 = (uint)bVar16;
      uVar14 = uVar23;
      if (uVar11 <= bVar16) {
        uVar14 = uVar11;
      }
      if (uVar23 <= uVar15) {
        uVar23 = uVar15;
      }
      uVar24 = (uint)bVar16;
      uVar21 = uVar24;
      if (uVar28 <= uVar24 || uVar24 == 0) {
        uVar21 = uVar28;
      }
      uVar15 = uVar23;
      uVar11 = uVar14;
      uVar28 = uVar21;
      if (uVar24 <= uVar29 || uVar24 == 0xff) {
        uVar24 = uVar29;
      }
    }
    uVar29 = uVar24;
    lVar13 = lVar13 + 1;
    pbVar6 = pbVar6 + 4;
  } while (lVar13 != 0x10);
  uVar24 = uVar29;
  if (uVar28 <= uVar29) {
    uVar24 = uVar28;
  }
  uVar28 = uVar15;
  if (uVar11 <= uVar15) {
    uVar28 = uVar11;
  }
  if ((int)(uVar29 - uVar24) < 5) {
    uVar11 = uVar24;
    if (0xf9 < uVar24) {
      uVar11 = 0xfa;
    }
    uVar29 = uVar11 + 5;
    if ((int)(uVar29 - uVar24) < 5) {
      uVar24 = uVar11;
    }
  }
  if ((int)(uVar15 - uVar28) < 7) {
    uVar11 = uVar28;
    if (0xf7 < uVar28) {
      uVar11 = 0xf8;
    }
    uVar15 = uVar11 + 7;
    if ((int)(uVar15 - uVar28) < 7) {
      uVar28 = uVar11;
    }
  }
  lVar13 = 0;
  iVar19 = 0;
  pbVar6 = param_1 + 3;
  do {
    while (((uint)param_2 >> (ulong)((uint)lVar13 & 0x1f) & 1) == 0) {
      local_78[lVar13] = 0;
      lVar13 = lVar13 + 1;
      pbVar6 = pbVar6 + 4;
      if (lVar13 == 0x10) goto LAB_00deb8ec;
    }
    bVar16 = *pbVar6;
    iVar20 = bVar16 - uVar24;
    iVar1 = (uint)bVar16 - (uVar29 & 0xff);
    uVar17 = (uint)bVar16;
    iVar2 = uVar17 - ((uint)((ulong)((long)(int)(uVar29 + uVar24 * 4) * 0x66666667) >> 0x21) & 0xff)
    ;
    iVar3 = uVar17 - ((uint)((ulong)((long)(int)(uVar24 * 3 + uVar29 * 2) * 0x66666667) >> 0x21) &
                     0xff);
    uVar14 = iVar20 * iVar20;
    iVar20 = uVar17 - ((uint)((ulong)((long)(int)(uVar24 * 2 + uVar29 * 3) * 0x66666667) >> 0x21) &
                      0xff);
    uVar23 = iVar1 * iVar1;
    uVar21 = iVar2 * iVar2;
    uVar22 = iVar3 * iVar3;
    uVar11 = uVar23;
    if (uVar23 >= uVar14) {
      uVar11 = uVar14;
    }
    uVar18 = (uint)bVar16;
    iVar1 = uVar18 - ((uint)((ulong)((long)(int)(uVar24 + uVar29 * 4) * 0x66666667) >> 0x21) & 0xff)
    ;
    uVar25 = uVar21;
    if ((int)uVar11 <= (int)uVar21) {
      uVar25 = uVar11;
    }
    bVar16 = 2;
    if ((int)uVar11 <= (int)uVar21) {
      bVar16 = uVar23 < uVar14;
    }
    uVar14 = iVar20 * iVar20;
    uVar11 = uVar22;
    if ((int)uVar25 <= (int)uVar22) {
      uVar11 = uVar25;
    }
    bVar26 = 3;
    if ((int)uVar25 <= (int)uVar22) {
      bVar26 = bVar16;
    }
    uVar21 = iVar1 * iVar1;
    uVar23 = uVar14;
    if ((int)uVar11 <= (int)uVar14) {
      uVar23 = uVar11;
    }
    bVar16 = 4;
    if ((int)uVar11 <= (int)uVar14) {
      bVar16 = bVar26;
    }
    uVar18 = uVar18 * uVar18;
    uVar11 = uVar21;
    if ((int)uVar23 <= (int)uVar21) {
      uVar11 = uVar23;
    }
    bVar26 = 5;
    if ((int)uVar23 <= (int)uVar21) {
      bVar26 = bVar16;
    }
    uVar23 = (uVar17 - 0xff) * (uVar17 - 0xff);
    uVar14 = uVar18;
    if ((int)uVar11 <= (int)uVar18) {
      uVar14 = uVar11;
    }
    bVar16 = 6;
    if ((int)uVar11 <= (int)uVar18) {
      bVar16 = bVar26;
    }
    uVar11 = uVar23;
    if ((int)uVar14 <= (int)uVar23) {
      uVar11 = uVar14;
    }
    bVar26 = 7;
    if ((int)uVar14 <= (int)uVar23) {
      bVar26 = bVar16;
    }
    iVar19 = uVar11 + iVar19;
    local_78[lVar13] = bVar26;
    lVar13 = lVar13 + 1;
    pbVar6 = pbVar6 + 4;
  } while (lVar13 != 0x10);
LAB_00deb8ec:
  lVar13 = 0;
  iVar20 = 0;
  pbVar6 = param_1 + 3;
  do {
    while (((uint)param_2 >> (ulong)((uint)lVar13 & 0x1f) & 1) == 0) {
      local_88[lVar13] = 0;
      lVar13 = lVar13 + 1;
      pbVar6 = pbVar6 + 4;
      if (lVar13 == 0x10) goto LAB_00deba18;
    }
    bVar16 = *pbVar6;
    iVar1 = bVar16 - uVar28;
    iVar2 = (uint)bVar16 - (uVar15 & 0xff);
    uVar11 = (uint)bVar16;
    iVar3 = uVar11 - ((uVar15 + uVar28 * 6) / 7 & 0xff);
    iVar4 = uVar11 - ((uVar28 * 5 + uVar15 * 2) / 7 & 0xff);
    uVar14 = iVar1 * iVar1;
    iVar1 = uVar11 - ((uVar28 * 4 + uVar15 * 3) / 7 & 0xff);
    uVar23 = iVar2 * iVar2;
    iVar2 = uVar11 - ((uVar28 * 3 + uVar15 * 4) / 7 & 0xff);
    uVar21 = iVar3 * iVar3;
    uVar22 = iVar4 * iVar4;
    uVar11 = uVar23;
    if (uVar23 >= uVar14) {
      uVar11 = uVar14;
    }
    iVar3 = (uint)bVar16 - ((uVar28 * 2 + uVar15 * 5) / 7 & 0xff);
    uVar17 = uVar21;
    if ((int)uVar11 <= (int)uVar21) {
      uVar17 = uVar11;
    }
    bVar26 = 2;
    if ((int)uVar11 <= (int)uVar21) {
      bVar26 = uVar23 < uVar14;
    }
    uVar14 = iVar1 * iVar1;
    uVar11 = uVar22;
    if ((int)uVar17 <= (int)uVar22) {
      uVar11 = uVar17;
    }
    bVar7 = 3;
    if ((int)uVar17 <= (int)uVar22) {
      bVar7 = bVar26;
    }
    uVar21 = iVar2 * iVar2;
    uVar23 = uVar14;
    if ((int)uVar11 <= (int)uVar14) {
      uVar23 = uVar11;
    }
    iVar1 = (uint)bVar16 - ((uVar28 + uVar15 * 6) / 7 & 0xff);
    bVar16 = 4;
    if ((int)uVar11 <= (int)uVar14) {
      bVar16 = bVar7;
    }
    uVar14 = iVar3 * iVar3;
    uVar11 = uVar21;
    if ((int)uVar23 <= (int)uVar21) {
      uVar11 = uVar23;
    }
    bVar26 = 5;
    if ((int)uVar23 <= (int)uVar21) {
      bVar26 = bVar16;
    }
    uVar21 = iVar1 * iVar1;
    uVar23 = uVar14;
    if ((int)uVar11 <= (int)uVar14) {
      uVar23 = uVar11;
    }
    bVar16 = 6;
    if ((int)uVar11 <= (int)uVar14) {
      bVar16 = bVar26;
    }
    uVar11 = uVar21;
    if ((int)uVar23 <= (int)uVar21) {
      uVar11 = uVar23;
    }
    bVar26 = 7;
    if ((int)uVar23 <= (int)uVar21) {
      bVar26 = bVar16;
    }
    iVar20 = uVar11 + iVar20;
    local_88[lVar13] = bVar26;
    lVar13 = lVar13 + 1;
    pbVar6 = pbVar6 + 4;
  } while (lVar13 != 0x10);
LAB_00deba18:
  if (iVar19 <= iVar20) {
    if (uVar29 < uVar24) {
      if (local_78[0] == 0) {
        uVar15 = 1;
joined_r0x00debed8:
        if (local_78[1] == 1) goto LAB_00debb84;
LAB_00debedc:
        uVar11 = (uint)local_78[1];
        if (uVar11 == 0) {
          uVar23 = 8;
          goto joined_r0x00debeec;
        }
        uVar23 = 7 - uVar11;
        if (5 < uVar11) {
          uVar23 = uVar11;
        }
        uVar23 = uVar23 << 3;
        if (local_78[2] != 1) goto LAB_00debb94;
LAB_00debef0:
        uVar21 = 0;
joined_r0x00debefc:
        if (local_78[3] != 1) goto LAB_00debf00;
LAB_00debba8:
        uVar22 = 0;
joined_r0x00debbb4:
        if (local_78[4] != 1) goto LAB_00debbb8;
LAB_00debf14:
        uVar17 = 0;
joined_r0x00debf20:
        if (local_78[5] == 1) goto LAB_00debbcc;
LAB_00debf24:
        uVar11 = (uint)local_78[5];
        if (uVar11 == 0) {
          uVar25 = 0x8000;
          goto joined_r0x00debbd8;
        }
        uVar25 = 7 - uVar11;
        if (5 < uVar11) {
          uVar25 = uVar11;
        }
        uVar25 = uVar25 << 0xf;
        if (local_78[6] == 1) goto LAB_00debf38;
LAB_00debbdc:
        uVar11 = (uint)local_78[6];
        if (uVar11 == 0) {
          bVar26 = 4;
          goto joined_r0x00debbec;
        }
        uVar28 = 7 - uVar11;
        if (5 < uVar11) {
          uVar28 = uVar11;
        }
        bVar26 = (byte)((uVar28 << 0x12) >> 0x10);
        if (local_78[7] == 1) goto LAB_00debbf0;
LAB_00debf48:
        uVar11 = (uint)local_78[7];
        if (uVar11 == 0) {
          bVar7 = 0x20;
          goto joined_r0x00debbfc;
        }
        uVar28 = 7 - uVar11;
        if (5 < uVar11) {
          uVar28 = uVar11;
        }
        bVar7 = (byte)((uVar28 << 0x15) >> 0x10);
        if (local_78[8] == 1) goto LAB_00debf5c;
LAB_00debc00:
        uVar11 = (uint)local_78[8];
        if (uVar11 != 0) {
          uVar18 = 7 - uVar11;
          if (5 < uVar11) {
            uVar18 = uVar11;
          }
          goto joined_r0x00debf68;
        }
        uVar18 = 1;
        if (local_78[9] != 1) goto LAB_00debf6c;
LAB_00debc14:
        uVar8 = 0;
joined_r0x00debc20:
        if (local_78[10] == 1) goto LAB_00debf80;
LAB_00debc24:
        uVar28 = (uint)local_78[10];
        if (uVar28 != 0) {
          uVar11 = 7 - uVar28;
          if (5 < uVar28) {
            uVar11 = uVar28;
          }
          uVar11 = uVar11 << 6;
          goto joined_r0x00debf8c;
        }
        uVar11 = 0x40;
        if (local_78[11] == 1) goto LAB_00debc38;
LAB_00debf90:
        uVar28 = (uint)local_78[11];
        if (uVar28 == 0) {
          uVar9 = 0x200;
          goto joined_r0x00debc44;
        }
        uVar9 = 7 - uVar28;
        if (5 < uVar28) {
          uVar9 = uVar28;
        }
        uVar9 = uVar9 << 9;
        if (local_78[12] == 1) goto LAB_00debfa4;
LAB_00debc48:
        uVar28 = (uint)local_78[12];
        if (uVar28 == 0) {
          uVar10 = 0x1000;
          goto joined_r0x00debfb0;
        }
        uVar10 = 7 - uVar28;
        if (5 < uVar28) {
          uVar10 = uVar28;
        }
        uVar10 = uVar10 << 0xc;
        if (local_78[13] != 1) goto LAB_00debfb4;
LAB_00debc5c:
        uVar14 = 0;
joined_r0x00debc68:
        if (local_78[14] != 1) goto LAB_00debc6c;
LAB_00debfc8:
        bVar16 = 0;
joined_r0x00debc7c:
        if (local_78[15] != 1) goto LAB_00debfd8;
LAB_00debc80:
        uVar28 = 0;
      }
      else {
        if (local_78[0] != 1) {
          uVar11 = (uint)local_78[0];
          uVar15 = 7 - uVar11;
          if (5 < uVar11) {
            uVar15 = uVar11;
          }
          goto joined_r0x00debed8;
        }
        uVar15 = 0;
        if (local_78[1] != 1) goto LAB_00debedc;
LAB_00debb84:
        uVar23 = 0;
joined_r0x00debeec:
        if (local_78[2] == 1) goto LAB_00debef0;
LAB_00debb94:
        uVar11 = (uint)local_78[2];
        if (uVar11 != 0) {
          uVar21 = 7 - uVar11;
          if (5 < uVar11) {
            uVar21 = uVar11;
          }
          uVar21 = uVar21 << 6;
          goto joined_r0x00debefc;
        }
        uVar21 = 0x40;
        if (local_78[3] == 1) goto LAB_00debba8;
LAB_00debf00:
        uVar11 = (uint)local_78[3];
        if (uVar11 == 0) {
          uVar22 = 0x200;
          goto joined_r0x00debbb4;
        }
        uVar22 = 7 - uVar11;
        if (5 < uVar11) {
          uVar22 = uVar11;
        }
        uVar22 = uVar22 << 9;
        if (local_78[4] == 1) goto LAB_00debf14;
LAB_00debbb8:
        uVar11 = (uint)local_78[4];
        if (uVar11 == 0) {
          uVar17 = 0x1000;
          goto joined_r0x00debf20;
        }
        uVar17 = 7 - uVar11;
        if (5 < uVar11) {
          uVar17 = uVar11;
        }
        uVar17 = uVar17 << 0xc;
        if (local_78[5] != 1) goto LAB_00debf24;
LAB_00debbcc:
        uVar25 = 0;
joined_r0x00debbd8:
        if (local_78[6] != 1) goto LAB_00debbdc;
LAB_00debf38:
        bVar26 = 0;
joined_r0x00debbec:
        if (local_78[7] != 1) goto LAB_00debf48;
LAB_00debbf0:
        bVar7 = 0;
joined_r0x00debbfc:
        if (local_78[8] != 1) goto LAB_00debc00;
LAB_00debf5c:
        uVar18 = 0;
joined_r0x00debf68:
        if (local_78[9] == 1) goto LAB_00debc14;
LAB_00debf6c:
        uVar11 = (uint)local_78[9];
        if (uVar11 == 0) {
          uVar8 = 8;
          goto joined_r0x00debc20;
        }
        uVar8 = 7 - uVar11;
        if (5 < uVar11) {
          uVar8 = uVar11;
        }
        uVar8 = uVar8 << 3;
        if (local_78[10] != 1) goto LAB_00debc24;
LAB_00debf80:
        uVar11 = 0;
joined_r0x00debf8c:
        if (local_78[11] != 1) goto LAB_00debf90;
LAB_00debc38:
        uVar9 = 0;
joined_r0x00debc44:
        if (local_78[12] != 1) goto LAB_00debc48;
LAB_00debfa4:
        uVar10 = 0;
joined_r0x00debfb0:
        if (local_78[13] == 1) goto LAB_00debc5c;
LAB_00debfb4:
        uVar28 = (uint)local_78[13];
        if (uVar28 == 0) {
          uVar14 = 0x8000;
          goto joined_r0x00debc68;
        }
        uVar14 = 7 - uVar28;
        if (5 < uVar28) {
          uVar14 = uVar28;
        }
        uVar14 = uVar14 << 0xf;
        if (local_78[14] == 1) goto LAB_00debfc8;
LAB_00debc6c:
        uVar28 = (uint)local_78[14];
        if (uVar28 == 0) {
          bVar16 = 4;
          goto joined_r0x00debc7c;
        }
        uVar12 = 7 - uVar28;
        if (5 < uVar28) {
          uVar12 = uVar28;
        }
        bVar16 = (byte)((uVar12 << 0x12) >> 0x10);
        if (local_78[15] == 1) goto LAB_00debc80;
LAB_00debfd8:
        uVar12 = (uint)local_78[15];
        if (uVar12 == 0) {
          uVar28 = 1;
        }
        else {
          uVar28 = 7 - uVar12;
          if (5 < uVar12) {
            uVar28 = uVar12;
          }
        }
      }
      *(char *)param_3 = (char)uVar29;
      uVar21 = uVar23 | uVar15 | uVar21;
      *(char *)((long)param_3 + 1) = (char)uVar24;
      uVar25 = uVar22 | uVar21 | uVar17 | uVar25;
      uVar11 = uVar8 | uVar18 | uVar11;
      uVar14 = uVar9 | uVar11 | uVar10 | uVar14;
      *(char *)((long)param_3 + 2) = (char)uVar21;
      bVar16 = bVar16 | (byte)(uVar14 >> 0x10);
      *(char *)((long)param_3 + 3) = (char)(uVar25 >> 8);
      *(byte *)((long)param_3 + 4) = bVar26 | (byte)(uVar25 >> 0x10) | bVar7;
    }
    else {
      *(char *)((long)param_3 + 1) = (char)uVar29;
      *(char *)param_3 = (char)uVar24;
      uVar29 = (uint)local_78[0] | (uint)local_78[1] << 3 | (uint)local_78[2] << 6;
      uVar15 = uVar29 | (uint)local_78[3] << 9 | (uint)local_78[4] << 0xc | (uint)local_78[5] << 0xf
      ;
      *(char *)((long)param_3 + 2) = (char)uVar29;
      uVar11 = (uint)local_78[8] | (uint)local_78[9] << 3 | (uint)local_78[10] << 6;
      uVar28 = (uint)local_78[15];
      uVar14 = uVar11 | (uint)local_78[11] << 9 | (uint)local_78[12] << 0xc |
               (uint)local_78[13] << 0xf;
      bVar16 = (byte)(uVar14 >> 0x10) | (byte)(((uint)local_78[14] << 0x12) >> 0x10);
      *(char *)((long)param_3 + 3) = (char)(uVar15 >> 8);
      *(byte *)((long)param_3 + 4) =
           (byte)(uVar15 >> 0x10) | (byte)(((uint)local_78[6] << 0x12) >> 0x10) |
           (byte)(((uint)local_78[7] << 0x15) >> 0x10);
    }
    bVar16 = bVar16 | (byte)((uVar28 << 0x15) >> 0x10);
    goto LAB_00dec49c;
  }
  if (uVar15 <= uVar28) {
    *(char *)((long)param_3 + 1) = (char)uVar15;
    *(char *)param_3 = (char)uVar28;
    uVar29 = (uint)local_88[0] | (uint)local_88[1] << 3 | (uint)local_88[2] << 6;
    uVar15 = uVar29 | (uint)local_88[3] << 9 | (uint)local_88[4] << 0xc | (uint)local_88[5] << 0xf;
    uVar11 = (uint)local_88[8] | (uint)local_88[9] << 3 | (uint)local_88[10] << 6;
    uVar14 = uVar11 | (uint)local_88[11] << 9 | (uint)local_88[12] << 0xc |
             (uint)local_88[13] << 0xf;
    *(char *)((long)param_3 + 2) = (char)uVar29;
    bVar16 = (byte)(uVar14 >> 0x10) | (byte)(((uint)local_88[14] << 0x12) >> 0x10) |
             (byte)(((uint)local_88[15] << 0x15) >> 0x10);
    *(byte *)((long)param_3 + 4) =
         (byte)(uVar15 >> 0x10) | (byte)(((uint)local_88[6] << 0x12) >> 0x10) |
         (byte)(((uint)local_88[7] << 0x15) >> 0x10);
    *(char *)((long)param_3 + 3) = (char)(uVar15 >> 8);
    goto LAB_00dec49c;
  }
  if (local_88[0] == 0) {
    uVar29 = 1;
joined_r0x00debdc0:
    if (local_88[1] == 1) goto LAB_00deba50;
LAB_00debdc4:
    if (local_88[1] == 0) {
      uVar24 = 8;
      goto joined_r0x00deba5c;
    }
    uVar24 = (uint)(byte)(9 - local_88[1]) << 3;
    if (local_88[2] != 1) goto LAB_00deba60;
LAB_00debdd8:
    uVar23 = 0;
joined_r0x00debde4:
    if (local_88[3] != 1) goto LAB_00debde8;
LAB_00deba74:
    uVar21 = 0;
joined_r0x00deba80:
    if (local_88[4] != 1) goto LAB_00deba84;
LAB_00debdfc:
    uVar22 = 0;
joined_r0x00debe08:
    if (local_88[5] == 1) goto LAB_00deba98;
LAB_00debe0c:
    if (local_88[5] == 0) {
      uVar17 = 0x8000;
      goto joined_r0x00debaa4;
    }
    uVar17 = (uint)(byte)(9 - local_88[5]) << 0xf;
    if (local_88[6] == 1) goto LAB_00debe20;
LAB_00debaa8:
    if (local_88[6] == 0) {
      bVar26 = 4;
      goto joined_r0x00debab8;
    }
    bVar26 = (byte)(((9 - local_88[6] & 0xff) << 0x12) >> 0x10);
    if (local_88[7] == 1) goto LAB_00debabc;
LAB_00debe30:
    if (local_88[7] == 0) {
      bVar7 = 0x20;
      goto joined_r0x00debac8;
    }
    bVar7 = (byte)(((9 - local_88[7] & 0xff) << 0x15) >> 0x10);
    if (local_88[8] == 1) goto LAB_00debe44;
LAB_00debacc:
    if (local_88[8] != 0) {
      uVar25 = (uint)(byte)(9 - local_88[8]);
      goto joined_r0x00debe50;
    }
    uVar25 = 1;
    if (local_88[9] != 1) goto LAB_00debe54;
LAB_00debae0:
    uVar18 = 0;
joined_r0x00debaec:
    if (local_88[10] == 1) goto LAB_00debe68;
LAB_00debaf0:
    if (local_88[10] != 0) {
      uVar11 = (uint)(byte)(9 - local_88[10]) << 6;
      goto joined_r0x00debe74;
    }
    uVar11 = 0x40;
    if (local_88[11] == 1) goto LAB_00debb04;
LAB_00debe78:
    if (local_88[11] == 0) {
      uVar8 = 0x200;
      goto joined_r0x00debb10;
    }
    uVar8 = (uint)(byte)(9 - local_88[11]) << 9;
    if (local_88[12] == 1) goto LAB_00debe8c;
LAB_00debb14:
    if (local_88[12] == 0) {
      uVar9 = 0x1000;
      goto joined_r0x00debe98;
    }
    uVar9 = (uint)(byte)(9 - local_88[12]) << 0xc;
    if (local_88[13] != 1) goto LAB_00debe9c;
LAB_00debb28:
    uVar14 = 0;
joined_r0x00debb34:
    if (local_88[14] != 1) goto LAB_00debb38;
LAB_00debeb0:
    bVar27 = 0;
joined_r0x00debb48:
    if (local_88[15] != 1) goto LAB_00debec0;
LAB_00debb4c:
    bVar16 = 0;
  }
  else {
    if (local_88[0] != 1) {
      uVar29 = 9 - local_88[0] & 0xff;
      goto joined_r0x00debdc0;
    }
    uVar29 = 0;
    if (local_88[1] != 1) goto LAB_00debdc4;
LAB_00deba50:
    uVar24 = 0;
joined_r0x00deba5c:
    if (local_88[2] == 1) goto LAB_00debdd8;
LAB_00deba60:
    if (local_88[2] != 0) {
      uVar23 = (uint)(byte)(9 - local_88[2]) << 6;
      goto joined_r0x00debde4;
    }
    uVar23 = 0x40;
    if (local_88[3] == 1) goto LAB_00deba74;
LAB_00debde8:
    if (local_88[3] == 0) {
      uVar21 = 0x200;
      goto joined_r0x00deba80;
    }
    uVar21 = (uint)(byte)(9 - local_88[3]) << 9;
    if (local_88[4] == 1) goto LAB_00debdfc;
LAB_00deba84:
    if (local_88[4] == 0) {
      uVar22 = 0x1000;
      goto joined_r0x00debe08;
    }
    uVar22 = (uint)(byte)(9 - local_88[4]) << 0xc;
    if (local_88[5] != 1) goto LAB_00debe0c;
LAB_00deba98:
    uVar17 = 0;
joined_r0x00debaa4:
    if (local_88[6] != 1) goto LAB_00debaa8;
LAB_00debe20:
    bVar26 = 0;
joined_r0x00debab8:
    if (local_88[7] != 1) goto LAB_00debe30;
LAB_00debabc:
    bVar7 = 0;
joined_r0x00debac8:
    if (local_88[8] != 1) goto LAB_00debacc;
LAB_00debe44:
    uVar25 = 0;
joined_r0x00debe50:
    if (local_88[9] == 1) goto LAB_00debae0;
LAB_00debe54:
    if (local_88[9] == 0) {
      uVar18 = 8;
      goto joined_r0x00debaec;
    }
    uVar18 = (uint)(byte)(9 - local_88[9]) << 3;
    if (local_88[10] != 1) goto LAB_00debaf0;
LAB_00debe68:
    uVar11 = 0;
joined_r0x00debe74:
    if (local_88[11] != 1) goto LAB_00debe78;
LAB_00debb04:
    uVar8 = 0;
joined_r0x00debb10:
    if (local_88[12] != 1) goto LAB_00debb14;
LAB_00debe8c:
    uVar9 = 0;
joined_r0x00debe98:
    if (local_88[13] == 1) goto LAB_00debb28;
LAB_00debe9c:
    if (local_88[13] == 0) {
      uVar14 = 0x8000;
      goto joined_r0x00debb34;
    }
    uVar14 = (uint)(byte)(9 - local_88[13]) << 0xf;
    if (local_88[14] == 1) goto LAB_00debeb0;
LAB_00debb38:
    if (local_88[14] == 0) {
      bVar27 = 4;
      goto joined_r0x00debb48;
    }
    bVar27 = (byte)(((9 - local_88[14] & 0xff) << 0x12) >> 0x10);
    if (local_88[15] == 1) goto LAB_00debb4c;
LAB_00debec0:
    if (local_88[15] == 0) {
      bVar16 = 0x20;
    }
    else {
      bVar16 = (byte)(((9 - local_88[15] & 0xff) << 0x15) >> 0x10);
    }
  }
  *(char *)param_3 = (char)uVar15;
  uVar23 = uVar24 | uVar29 | uVar23;
  *(char *)((long)param_3 + 1) = (char)uVar28;
  uVar11 = uVar18 | uVar25 | uVar11;
  uVar17 = uVar21 | uVar23 | uVar22 | uVar17;
  uVar14 = uVar8 | uVar11 | uVar9 | uVar14;
  *(char *)((long)param_3 + 2) = (char)uVar23;
  bVar16 = bVar27 | (byte)(uVar14 >> 0x10) | bVar16;
  *(char *)((long)param_3 + 3) = (char)(uVar17 >> 8);
  *(byte *)((long)param_3 + 4) = bVar26 | (byte)(uVar17 >> 0x10) | bVar7;
LAB_00dec49c:
  *(char *)((long)param_3 + 5) = (char)uVar11;
  *(char *)((long)param_3 + 6) = (char)(uVar14 >> 8);
  *(byte *)((long)param_3 + 7) = bVar16;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


