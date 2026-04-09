// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d92930
// Entry Point: 00d92930
// Size: 1600 bytes
// Signature: undefined FUN_00d92930(void)


undefined4 FUN_00d92930(uint *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  
  uVar17 = param_1[0x12];
  uVar20 = (ulong)uVar17;
  uVar1 = param_1[0x10];
  lVar10 = *(long *)(param_1 + 4);
  uVar14 = uVar1 & (-1 << (ulong)(param_1[2] & 0x1f) ^ 0xffffffffU);
  uVar15 = param_1[10];
  uVar12 = param_1[0xb];
  uVar11 = (uint)*(ushort *)(lVar10 + (ulong)(uVar17 << 4) * 2 + (ulong)uVar14 * 2);
  if (uVar15 >> 0x18 == 0) {
    if (param_3 < 1) {
      return 0;
    }
    uVar15 = uVar15 << 8;
    uVar12 = (uint)*param_2 | uVar12 << 8;
    uVar11 = (uVar15 >> 0xb) * uVar11;
    uVar16 = uVar12 - uVar11;
    pbVar8 = param_2 + 1;
    if (uVar12 < uVar11) {
LAB_00d92a30:
      lVar10 = lVar10 + 0xe6c;
      if ((param_1[0x11] | uVar1) != 0) {
        lVar18 = *(long *)(param_1 + 0xc);
        if (lVar18 == 0) {
          lVar18 = *(long *)(param_1 + 0xe);
        }
        lVar10 = lVar10 + (ulong)(((uint)(*(byte *)(lVar18 + *(long *)(param_1 + 6) + -1) >>
                                         (ulong)(8 - *param_1 & 0x1f)) +
                                  ((uVar1 & (-1 << (ulong)(param_1[1] & 0x1f) ^ 0xffffffffU)) <<
                                  (ulong)(*param_1 & 0x1f))) * 0x300) * 2;
      }
      if (uVar17 < 7) {
        uVar14 = 1;
        do {
          pbVar7 = pbVar8;
          if (uVar11 >> 0x18 == 0) {
            if (param_2 + param_3 <= pbVar8) {
              return 0;
            }
            pbVar7 = pbVar8 + 1;
            uVar11 = uVar11 << 8;
            uVar12 = (uint)*pbVar8 | uVar12 << 8;
          }
          uVar17 = (uVar11 >> 0xb) * (uint)*(ushort *)(lVar10 + (ulong)uVar14 * 2);
          uVar15 = uVar14 << 1;
          uVar14 = uVar14 << 1 | 1;
          uVar1 = uVar12 - uVar17;
          uVar11 = uVar11 - uVar17;
          if (uVar12 < uVar17) {
            uVar14 = uVar15;
            uVar1 = uVar12;
            uVar11 = uVar17;
          }
          uVar12 = uVar1;
          pbVar8 = pbVar7;
        } while (uVar14 < 0x100);
      }
      else {
        if (*(ulong *)(param_1 + 0xc) < (ulong)param_1[0x13]) {
          lVar18 = *(long *)(param_1 + 0xe);
        }
        else {
          lVar18 = 0;
        }
        uVar17 = 0x100;
        uVar15 = (uint)*(byte *)(*(long *)(param_1 + 6) +
                                (*(ulong *)(param_1 + 0xc) - (ulong)param_1[0x13]) + lVar18);
        uVar14 = 1;
        do {
          uVar15 = uVar15 << 1;
          uVar1 = uVar15 & uVar17;
          pbVar7 = pbVar8;
          if (uVar11 >> 0x18 == 0) {
            if (param_2 + param_3 <= pbVar8) {
              return 0;
            }
            pbVar7 = pbVar8 + 1;
            uVar11 = uVar11 << 8;
            uVar12 = (uint)*pbVar8 | uVar12 << 8;
          }
          uVar16 = uVar1 ^ uVar17;
          uVar2 = (uVar11 >> 0xb) *
                  (uint)*(ushort *)
                         (lVar10 + (ulong)uVar17 * 2 + (ulong)uVar1 * 2 + (ulong)uVar14 * 2);
          uVar13 = uVar14 << 1;
          uVar14 = uVar14 << 1 | 1;
          uVar11 = uVar11 - uVar2;
          uVar3 = uVar12 - uVar2;
          uVar17 = uVar1;
          if (uVar12 < uVar2) {
            uVar14 = uVar13;
            uVar11 = uVar2;
            uVar3 = uVar12;
            uVar17 = uVar16;
          }
          uVar12 = uVar3;
          pbVar8 = pbVar7;
        } while (uVar14 < 0x100);
      }
      uVar4 = 1;
      goto LAB_00d92c30;
    }
  }
  else {
    uVar11 = (uVar15 >> 0xb) * uVar11;
    uVar16 = uVar12 - uVar11;
    pbVar8 = param_2;
    if (uVar12 < uVar11) goto LAB_00d92a30;
  }
  pbVar9 = param_2 + param_3;
  uVar15 = uVar15 - uVar11;
  pbVar7 = pbVar8;
  if (uVar15 >> 0x18 == 0) {
    if (pbVar9 <= pbVar8) {
      return 0;
    }
    pbVar7 = pbVar8 + 1;
    uVar15 = uVar15 * 0x100;
    uVar16 = (uint)*pbVar8 | uVar16 << 8;
  }
  uVar1 = (uVar15 >> 0xb) * (uint)*(ushort *)(lVar10 + uVar20 * 2 + 0x180);
  uVar12 = uVar16 - uVar1;
  if (uVar16 < uVar1) {
    uVar4 = 2;
    uVar5 = (ulong)uVar1;
    puVar6 = (ushort *)(lVar10 + 0x664);
    uVar11 = (uint)*puVar6;
    uVar15 = uVar1;
    uVar17 = uVar16;
    uVar12 = uVar11;
    if ((uVar1 & 0xff000000) == 0) goto LAB_00d92ce0;
LAB_00d929f0:
    uVar15 = (uint)uVar5;
    uVar11 = (int)(uVar5 >> 0xb) * uVar11;
    uVar12 = uVar17 - uVar11;
    pbVar8 = pbVar7;
    if (uVar11 <= uVar17) goto LAB_00d92d08;
LAB_00d92a00:
    iVar19 = 0;
    uVar15 = 8;
    puVar6 = puVar6 + (ulong)(uVar14 << 3) + 2;
  }
  else {
    uVar15 = uVar15 - uVar1;
    pbVar8 = pbVar7;
    if (uVar15 >> 0x18 == 0) {
      if (pbVar9 <= pbVar7) {
        return 0;
      }
      pbVar8 = pbVar7 + 1;
      uVar15 = uVar15 * 0x100;
      uVar12 = (uint)*pbVar7 | uVar12 * 0x100;
    }
    uVar13 = (uVar15 >> 0xb) * (uint)*(ushort *)(lVar10 + uVar20 * 2 + 0x198);
    uVar11 = uVar12 - uVar13;
    pbVar7 = pbVar8;
    if (uVar12 < uVar13) {
      if (uVar13 >> 0x18 == 0) {
        if (pbVar9 <= pbVar8) {
          return 0;
        }
        pbVar7 = pbVar8 + 1;
        uVar13 = uVar13 * 0x100;
        uVar12 = (uint)*pbVar8 | uVar12 << 8;
      }
      uVar11 = (uVar13 >> 0xb) *
               (uint)*(ushort *)(lVar10 + (ulong)(uVar17 << 4) * 2 + (ulong)uVar14 * 2 + 0x1e0);
      if (uVar12 < uVar11) {
        if (uVar11 >> 0x18 != 0) {
          return 3;
        }
        uVar4 = 3;
        if (pbVar9 <= pbVar7) {
          uVar4 = 0;
        }
        return uVar4;
      }
      uVar5 = (ulong)(uVar13 - uVar11);
      uVar11 = uVar12 - uVar11;
    }
    else {
      uVar15 = uVar15 - uVar13;
      if (uVar15 >> 0x18 == 0) {
        if (pbVar9 <= pbVar8) {
          return 0;
        }
        pbVar7 = pbVar8 + 1;
        uVar15 = uVar15 * 0x100;
        uVar11 = (uint)*pbVar8 | uVar11 * 0x100;
      }
      uVar17 = (uVar15 >> 0xb) * (uint)*(ushort *)(lVar10 + uVar20 * 2 + 0x1b0);
      uVar5 = (ulong)uVar17;
      uVar12 = uVar11 - uVar17;
      if (uVar17 <= uVar11) {
        uVar15 = uVar15 - uVar17;
        if (uVar15 >> 0x18 == 0) {
          if (pbVar9 <= pbVar7) {
            return 0;
          }
          uVar15 = uVar15 * 0x100;
          uVar12 = (uint)*pbVar7 | uVar12 * 0x100;
          pbVar7 = pbVar7 + 1;
        }
        uVar13 = (uVar15 >> 0xb) * (uint)*(ushort *)(lVar10 + uVar20 * 2 + 0x1c8);
        uVar5 = (ulong)uVar13;
        uVar17 = uVar12 - uVar13;
        uVar11 = uVar12;
        if (uVar13 <= uVar12) {
          uVar15 = uVar15 - uVar13;
          uVar5 = (ulong)uVar15;
          uVar4 = 3;
          puVar6 = (ushort *)(lVar10 + 0xa68);
          uVar11 = (uint)*puVar6;
          uVar12 = uVar11;
          if (uVar15 >> 0x18 != 0) goto LAB_00d929f0;
          goto LAB_00d92ce0;
        }
      }
    }
    uVar17 = uVar11;
    uVar15 = (uint)uVar5;
    uVar4 = 3;
    puVar6 = (ushort *)(lVar10 + 0xa68);
    uVar11 = (uint)*puVar6;
    uVar12 = (uint)*puVar6;
    if ((uVar5 & 0xff000000) != 0) goto LAB_00d929f0;
LAB_00d92ce0:
    if (pbVar9 <= pbVar7) {
      return 0;
    }
    pbVar8 = pbVar7 + 1;
    uVar15 = uVar15 << 8;
    uVar17 = (uint)*pbVar7 | uVar17 << 8;
    uVar11 = (uVar15 >> 0xb) * uVar12;
    uVar12 = uVar17 - uVar11;
    if (uVar17 < uVar11) goto LAB_00d92a00;
LAB_00d92d08:
    uVar15 = uVar15 - uVar11;
    if (uVar15 >> 0x18 == 0) {
      if (pbVar9 <= pbVar8) {
        return 0;
      }
      uVar15 = uVar15 * 0x100;
      uVar12 = (uint)*pbVar8 | uVar12 << 8;
      pbVar8 = pbVar8 + 1;
    }
    uVar11 = (uVar15 >> 0xb) * (uint)puVar6[1];
    uVar17 = uVar12 - uVar11;
    if (uVar12 < uVar11) {
      uVar15 = 8;
      iVar19 = 8;
      puVar6 = puVar6 + (ulong)(uVar14 << 3) + 0x82;
      uVar17 = uVar12;
    }
    else {
      uVar11 = uVar15 - uVar11;
      puVar6 = puVar6 + 0x102;
      iVar19 = 0x10;
      uVar15 = 0x100;
    }
  }
  uVar12 = 1;
  do {
    pbVar7 = pbVar8;
    if (uVar11 >> 0x18 == 0) {
      if (pbVar9 <= pbVar8) {
        return 0;
      }
      pbVar7 = pbVar8 + 1;
      uVar11 = uVar11 << 8;
      uVar17 = (uint)*pbVar8 | uVar17 << 8;
    }
    uVar14 = uVar12 << 1;
    uVar13 = (uVar11 >> 0xb) * (uint)puVar6[uVar12];
    uVar11 = uVar11 - uVar13;
    uVar12 = uVar12 << 1 | 1;
    uVar2 = uVar17 - uVar13;
    if (uVar17 < uVar13) {
      uVar11 = uVar13;
      uVar12 = uVar14;
      uVar2 = uVar17;
    }
    uVar17 = uVar2;
    pbVar8 = pbVar7;
  } while (uVar12 < uVar15);
  if (uVar16 < uVar1) {
    uVar12 = (uVar12 - uVar15) + iVar19;
    if (2 < uVar12) {
      uVar12 = 3;
    }
    uVar14 = 1;
    do {
      pbVar7 = pbVar8;
      if (uVar11 >> 0x18 == 0) {
        if (pbVar9 <= pbVar8) {
          return 0;
        }
        pbVar7 = pbVar8 + 1;
        uVar11 = uVar11 << 8;
        uVar17 = (uint)*pbVar8 | uVar17 << 8;
      }
      uVar15 = uVar14 << 1;
      uVar1 = (uVar11 >> 0xb) *
              (uint)*(ushort *)(lVar10 + (ulong)(uVar12 << 6) * 2 + 0x360 + (ulong)uVar14 * 2);
      uVar11 = uVar11 - uVar1;
      uVar14 = uVar14 << 1 | 1;
      uVar16 = uVar17 - uVar1;
      if (uVar17 < uVar1) {
        uVar11 = uVar1;
        uVar14 = uVar15;
        uVar16 = uVar17;
      }
      uVar17 = uVar16;
      uVar15 = uVar14 - 0x40;
      pbVar8 = pbVar7;
    } while (uVar14 < 0x40);
    if (3 < uVar15) {
      if (uVar15 < 0xe) {
        uVar12 = (uVar15 >> 1) - 1;
        lVar10 = lVar10 + (ulong)((uVar14 & 1 | 2) << (ulong)(uVar12 & 0x1f)) * 2 +
                 (ulong)uVar15 * -2 + 0x55e;
      }
      else {
        iVar19 = (uVar15 >> 1) - 5;
        do {
          pbVar7 = pbVar8;
          if (uVar11 >> 0x18 == 0) {
            if (pbVar9 <= pbVar8) {
              return 0;
            }
            pbVar7 = pbVar8 + 1;
            uVar11 = uVar11 << 8;
            uVar17 = (uint)*pbVar8 | uVar17 << 8;
          }
          uVar11 = uVar11 >> 1;
          iVar19 = iVar19 + -1;
          uVar17 = uVar17 - (0xffffffffU - ((int)(uVar17 - uVar11) >> 0x1f) & uVar11);
          pbVar8 = pbVar7;
        } while (iVar19 != 0);
        lVar10 = lVar10 + 0x644;
        uVar12 = 4;
      }
      uVar14 = 1;
      pbVar8 = pbVar7;
      do {
        pbVar7 = pbVar8;
        if (uVar11 >> 0x18 == 0) {
          if (pbVar9 <= pbVar8) {
            return 0;
          }
          pbVar7 = pbVar8 + 1;
          uVar11 = uVar11 << 8;
          uVar17 = (uint)*pbVar8 | uVar17 << 8;
        }
        uVar15 = uVar14 << 1;
        uVar1 = (uVar11 >> 0xb) * (uint)*(ushort *)(lVar10 + (ulong)uVar14 * 2);
        uVar14 = uVar14 << 1 | 1;
        uVar11 = uVar11 - uVar1;
        uVar16 = uVar17 - uVar1;
        if (uVar17 < uVar1) {
          uVar14 = uVar15;
          uVar11 = uVar1;
          uVar16 = uVar17;
        }
        uVar17 = uVar16;
        uVar12 = uVar12 - 1;
        pbVar8 = pbVar7;
      } while (uVar12 != 0);
    }
  }
LAB_00d92c30:
  if (param_2 + param_3 <= pbVar7 && uVar11 >> 0x18 == 0) {
    uVar4 = 0;
  }
  return uVar4;
}


