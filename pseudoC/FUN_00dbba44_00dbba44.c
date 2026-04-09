// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dbba44
// Entry Point: 00dbba44
// Size: 1100 bytes
// Signature: undefined FUN_00dbba44(void)


void FUN_00dbba44(uint *param_1,long param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  byte bVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  char *pcVar20;
  undefined uVar21;
  ulong uVar22;
  
  uVar17 = *param_1;
  uVar11 = (ulong)uVar17;
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_3 == 0) {
      return;
    }
    if (*(char *)(param_1 + 4) != '\x02') {
      return;
    }
    if (*(char *)((long)param_1 + 0x11) == '\x10') {
      if (uVar17 != 0) {
        uVar6 = *(undefined2 *)(param_3 + 2);
        puVar15 = (undefined *)(param_2 + uVar11 * 8 + -1);
        uVar7 = *(undefined2 *)(param_3 + 4);
        uVar8 = *(undefined2 *)(param_3 + 6);
        pcVar20 = (char *)(*(long *)(param_1 + 2) + param_2 + -3);
        uVar22 = uVar11;
        do {
          if (((((char)((ushort)uVar6 >> 8) == pcVar20[-3]) && (pcVar20[-2] == (char)uVar6)) &&
              ((char)((ushort)uVar7 >> 8) == pcVar20[-1])) &&
             (((*pcVar20 == (char)uVar7 && ((char)((ushort)uVar8 >> 8) == pcVar20[1])) &&
              (pcVar20[2] == (char)uVar8)))) {
            uVar21 = 0;
          }
          else {
            uVar21 = 0xff;
          }
          *puVar15 = uVar21;
          uVar17 = (int)uVar22 - 1;
          uVar22 = (ulong)uVar17;
          puVar15[-1] = uVar21;
          puVar15[-2] = pcVar20[2];
          puVar15[-3] = pcVar20[1];
          puVar15[-4] = *pcVar20;
          puVar15[-5] = pcVar20[-1];
          puVar15[-6] = pcVar20[-2];
          pcVar1 = pcVar20 + -3;
          pcVar20 = pcVar20 + -6;
          puVar15[-7] = *pcVar1;
          puVar15 = puVar15 + -8;
        } while (uVar17 != 0);
      }
    }
    else if ((*(char *)((long)param_1 + 0x11) == '\b') && (uVar17 != 0)) {
      uVar6 = *(undefined2 *)(param_3 + 2);
      puVar15 = (undefined *)(param_2 + uVar11 * 4 + -1);
      uVar7 = *(undefined2 *)(param_3 + 4);
      uVar8 = *(undefined2 *)(param_3 + 6);
      pcVar20 = (char *)(param_2 + *(long *)(param_1 + 2) + -1);
      do {
        if (((pcVar20[-2] == (char)uVar6) && (pcVar20[-1] == (char)uVar7)) &&
           (*pcVar20 == (char)uVar8)) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0xff;
        }
        *puVar15 = uVar21;
        uVar17 = uVar17 - 1;
        puVar15[-1] = *pcVar20;
        puVar15[-2] = pcVar20[-1];
        pcVar1 = pcVar20 + -2;
        pcVar20 = pcVar20 + -3;
        puVar15[-3] = *pcVar1;
        puVar15 = puVar15 + -4;
      } while (uVar17 != 0);
    }
    uVar17 = (uint)*(byte *)((long)param_1 + 0x11) << 2;
    *(undefined *)(param_1 + 4) = 6;
    *(undefined *)((long)param_1 + 0x12) = 4;
    *(char *)((long)param_1 + 0x13) = (char)uVar17;
    if ((uVar17 & 0xfc) < 8) {
      uVar11 = ((ulong)*(byte *)((long)param_1 + 0x11) & 0x3f) * 4 * uVar11 + 7 >> 3;
    }
    else {
      uVar11 = (uVar17 >> 3 & 0x1f) * uVar11;
    }
    goto LAB_00dbbe88;
  }
  if (param_3 == 0) {
    uVar12 = 0;
    bVar13 = *(byte *)((long)param_1 + 0x11);
  }
  else {
    uVar12 = (uint)*(ushort *)(param_3 + 8);
    bVar13 = *(byte *)((long)param_1 + 0x11);
  }
  if (bVar13 < 8) {
    uVar22 = uVar11;
    if (bVar13 == 1) {
      uVar12 = (uVar12 & 1) * 0xff;
      if (uVar17 == 0) {
LAB_00dbbd70:
        uVar22 = 0;
      }
      else {
        pbVar19 = (byte *)(param_2 + (ulong)(uVar17 - 1 >> 3));
        uVar16 = uVar11;
        uVar18 = -uVar17 & 7;
        do {
          uVar5 = 0;
          if (uVar18 != 7) {
            uVar5 = uVar18 + 1;
          }
          *(char *)(param_2 + -1 + uVar16) = -((*pbVar19 >> (ulong)(uVar18 & 0x1f) & 1) != 0);
          uVar16 = uVar16 - 1;
          pbVar19 = pbVar19 + -(ulong)(uVar18 == 7);
          uVar18 = uVar5;
        } while ((int)uVar16 != 0);
      }
    }
    else if (bVar13 == 2) {
      uVar12 = (uVar12 & 3) * 0x55;
      if (uVar17 == 0) goto LAB_00dbbd70;
      pbVar19 = (byte *)(param_2 + (ulong)(uVar17 - 1 >> 2));
      uVar18 = ~(uVar17 * 2 + 6) & 6;
      uVar16 = uVar11;
      do {
        bVar13 = *pbVar19;
        bVar10 = uVar18 == 6;
        pbVar19 = pbVar19 + -(ulong)bVar10;
        uVar9 = uVar18 & 0x1f;
        uVar5 = uVar18 + 2;
        uVar18 = 0;
        if (!bVar10) {
          uVar18 = uVar5;
        }
        *(byte *)(param_2 + -1 + uVar16) = (bVar13 >> (ulong)uVar9 & 3) * 'U';
        uVar16 = uVar16 - 1;
      } while ((int)uVar16 != 0);
    }
    else if (bVar13 == 4) {
      uVar12 = uVar12 & 0xf | (uVar12 & 0xf) << 4;
      if (uVar17 == 0) goto LAB_00dbbd70;
      uVar18 = uVar17 & 1;
      pbVar19 = (byte *)(param_2 + (ulong)(uVar17 - 1 >> 1));
      uVar16 = uVar11;
      do {
        bVar10 = uVar18 == 1;
        uVar5 = *pbVar19 >> (ulong)(uVar18 << 2) & 0xf;
        uVar18 = (uint)!bVar10;
        *(byte *)(param_2 + -1 + uVar16) = (byte)uVar5 | (byte)(uVar5 << 4);
        uVar16 = uVar16 - 1;
        pbVar19 = pbVar19 + -(ulong)bVar10;
      } while ((int)uVar16 != 0);
    }
    bVar13 = 8;
    *(ulong *)(param_1 + 2) = uVar22;
    *(undefined *)((long)param_1 + 0x11) = 8;
    *(undefined *)((long)param_1 + 0x13) = 8;
  }
  if (param_3 == 0) {
    return;
  }
  if (bVar13 == 0x10) {
    if (uVar17 != 0) {
      puVar15 = (undefined *)(param_2 + *(long *)(param_1 + 2) * 2 + -1);
      pbVar19 = (byte *)(param_2 + *(long *)(param_1 + 2) + -1);
      do {
        if (((uint)pbVar19[-1] == uVar12 >> 8) && ((uint)*pbVar19 == (uVar12 & 0xff))) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0xff;
        }
        *puVar15 = uVar21;
        uVar17 = uVar17 - 1;
        puVar15[-1] = uVar21;
        puVar15[-2] = *pbVar19;
        pbVar2 = pbVar19 + -1;
        pbVar19 = pbVar19 + -2;
        puVar15[-3] = *pbVar2;
        puVar15 = puVar15 + -4;
      } while (uVar17 != 0);
    }
  }
  else if ((bVar13 == 8) && (uVar17 != 0)) {
    lVar14 = uVar11 << 1;
    uVar22 = uVar11;
    do {
      lVar3 = param_2 + uVar22;
      uVar22 = uVar22 - 1;
      lVar4 = param_2 + lVar14;
      lVar14 = lVar14 + -2;
      *(char *)(lVar4 + -1) = -((uint)*(byte *)(lVar3 + -1) != (uVar12 & 0xff));
      *(undefined *)(lVar4 + -2) = *(undefined *)(lVar3 + -1);
    } while ((int)uVar22 != 0);
  }
  uVar17 = (uint)*(byte *)((long)param_1 + 0x11) << 1;
  *(undefined *)(param_1 + 4) = 4;
  uVar11 = ((ulong)*(byte *)((long)param_1 + 0x11) & 0x7f) * 2 * uVar11 + 7 >> 3;
  if (7 < (uVar17 & 0xfe)) {
    uVar11 = (uVar17 >> 3 & 0x1f) * uVar11;
  }
  *(undefined *)((long)param_1 + 0x12) = 2;
  *(char *)((long)param_1 + 0x13) = (char)uVar17;
LAB_00dbbe88:
  *(ulong *)(param_1 + 2) = uVar11;
  return;
}


