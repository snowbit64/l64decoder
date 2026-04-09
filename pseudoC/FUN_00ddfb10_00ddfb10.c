// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ddfb10
// Entry Point: 00ddfb10
// Size: 668 bytes
// Signature: undefined FUN_00ddfb10(void)


int FUN_00ddfb10(long param_1,ushort *param_2,long param_3,int *param_4,int *param_5,uint param_6)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  int iVar19;
  ushort *puVar20;
  
  uVar14 = (ulong)param_6;
  uVar11 = param_6;
  if (0 < (int)param_6) {
    uVar12 = 0;
    do {
      uVar10 = uVar12;
      if (*(short *)(param_1 + uVar12 * 2) == -1) break;
      uVar12 = uVar12 + 1;
      uVar10 = uVar14;
    } while (uVar14 != uVar12);
    uVar11 = (uint)uVar10;
    uVar12 = 0;
    do {
      if (param_2[uVar12] == 0xffff) {
        uVar13 = (uint)uVar12;
        if ((int)param_6 < (int)(uVar11 + uVar13 + -2)) {
          return -1;
        }
        goto LAB_00ddfb9c;
      }
      uVar12 = uVar12 + 1;
    } while (uVar14 != uVar12);
  }
  uVar13 = param_6;
  if ((int)(uVar11 + param_6 + -2) <= (int)param_6) {
LAB_00ddfb9c:
    *param_4 = -1;
    *param_5 = -1;
    if (0 < (int)uVar11) {
      uVar9 = uVar13;
      if ((int)uVar13 < 1) {
        uVar9 = 0;
      }
      iVar15 = -1;
      uVar14 = 0;
      do {
        uVar12 = uVar14 + 1;
        uVar10 = 0;
        if (uVar12 != uVar11) {
          uVar10 = uVar12 & 0xffffffff;
        }
        uVar2 = *(ushort *)(param_1 + uVar14 * 2);
        uVar3 = *(ushort *)(param_1 + uVar10 * 2);
        iVar19 = -1;
        puVar16 = param_2;
        uVar10 = (ulong)uVar9;
        uVar7 = uVar3;
        if (uVar2 <= uVar3) {
          uVar7 = uVar2;
          uVar2 = uVar3;
        }
        do {
          if (uVar10 == 0) goto LAB_00ddfbc4;
          iVar1 = iVar19 + 2;
          iVar19 = iVar19 + 1;
          iVar5 = 0;
          if (uVar13 != 0) {
            iVar5 = iVar1 / (int)uVar13;
          }
          uVar3 = *puVar16;
          uVar4 = param_2[iVar1 - iVar5 * uVar13];
          uVar8 = uVar4;
          if (uVar3 <= uVar4) {
            uVar8 = uVar3;
            uVar3 = uVar4;
          }
          puVar16 = puVar16 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar7 != uVar8 || uVar2 != uVar3);
        *param_4 = (int)uVar14;
        *param_5 = iVar19;
        iVar15 = iVar19;
LAB_00ddfbc4:
        uVar14 = uVar12;
      } while (uVar12 != uVar11);
      iVar19 = *param_4;
      if ((iVar19 != -1) && (iVar15 != -1)) {
        iVar5 = uVar11 + iVar19 + -1;
        iVar1 = 0;
        if (uVar13 != 0) {
          iVar1 = (iVar15 + 2) / (int)uVar13;
        }
        uVar2 = *(ushort *)(param_1 + (long)iVar19 * 2);
        iVar6 = 0;
        if (uVar11 != 0) {
          iVar6 = iVar5 / (int)uVar11;
        }
        puVar20 = (ushort *)(param_3 + (ulong)uVar2 * 6);
        puVar16 = (ushort *)(param_3 + (ulong)param_2[(int)((iVar15 + 2) - iVar1 * uVar13)] * 6);
        puVar18 = (ushort *)
                  (param_3 +
                  (ulong)*(ushort *)(param_1 + (long)(int)(iVar5 - iVar6 * uVar11) * 2) * 6);
        uVar9 = (uint)*puVar18;
        uVar17 = (uint)puVar18[2];
        if (-1 < (int)((puVar16[2] - uVar17) * (*puVar20 - uVar9) +
                      (uVar17 - puVar20[2]) * (*puVar16 - uVar9))) {
          return -1;
        }
        iVar5 = uVar13 + iVar15 + -1;
        iVar1 = 0;
        if (uVar11 != 0) {
          iVar1 = (iVar19 + 2) / (int)uVar11;
        }
        iVar6 = 0;
        if (uVar13 != 0) {
          iVar6 = iVar5 / (int)uVar13;
        }
        puVar18 = (ushort *)(param_3 + (ulong)param_2[iVar15] * 6);
        puVar20 = (ushort *)
                  (param_3 +
                  (ulong)*(ushort *)(param_1 + (long)(int)((iVar19 + 2) - iVar1 * uVar11) * 2) * 6);
        puVar16 = (ushort *)(param_3 + (ulong)param_2[(int)(iVar5 - iVar6 * uVar13)] * 6);
        uVar9 = (uint)*puVar16;
        uVar13 = (uint)puVar16[2];
        if (-1 < (int)((puVar20[2] - uVar13) * (*puVar18 - uVar9) +
                      (uVar13 - puVar18[2]) * (*puVar20 - uVar9))) {
          return -1;
        }
        iVar15 = 0;
        if (uVar11 != 0) {
          iVar15 = (iVar19 + 1) / (int)uVar11;
        }
        uVar3 = *(ushort *)(param_1 + (long)(int)((iVar19 + 1) - iVar15 * uVar11) * 2);
        iVar15 = (uint)*(ushort *)(param_3 + (ulong)uVar2 * 6) -
                 (uint)*(ushort *)(param_3 + (ulong)uVar3 * 6);
        iVar19 = (uint)*(ushort *)(param_3 + (ulong)((uint)uVar2 * 3 + 2) * 2) -
                 (uint)*(ushort *)(param_3 + (ulong)((uint)uVar3 * 3 + 2) * 2);
        return iVar15 * iVar15 + iVar19 * iVar19;
      }
    }
  }
  return -1;
}


