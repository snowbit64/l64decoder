// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9e350
// Entry Point: 00d9e350
// Size: 804 bytes
// Signature: undefined FUN_00d9e350(void)


ulong FUN_00d9e350(byte **param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  ulong uVar20;
  
  uVar2 = *(uint *)((long)param_1 + 0x14);
  if (uVar2 < 4) {
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (iVar1 + 1 != *(int *)((long)param_1 + 0xc)) {
      return 0;
    }
    FUN_00d9dbd4();
    uVar20 = 0;
    goto LAB_00d9e39c;
  }
  pbVar12 = *param_1;
  pbVar18 = param_1[5];
  pbVar11 = pbVar12 + 1;
  uVar19 = *(uint *)((long)param_1 + (ulong)*pbVar12 * 4 + 0x8c) ^ (uint)*pbVar11;
  uVar13 = uVar19 ^ (uint)pbVar12[2] << 8;
  lVar14 = (ulong)(uVar19 & 0x3ff) * 4;
  lVar16 = (ulong)((uVar13 & 0xffff) + 0x400) * 4;
  lVar8 = (ulong)(((uVar13 ^ *(int *)((long)param_1 + (ulong)pbVar12[3] * 4 + 0x8c) << 5) &
                  *(uint *)(param_1 + 7)) + 0x10400) * 4;
  iVar1 = *(int *)(param_1 + 1);
  iVar17 = *(int *)(pbVar18 + lVar14);
  iVar3 = *(int *)(pbVar18 + lVar16);
  iVar4 = *(int *)(pbVar18 + lVar8);
  *(int *)(pbVar18 + lVar8) = iVar1;
  *(int *)(pbVar18 + lVar16) = iVar1;
  *(int *)(pbVar18 + lVar14) = iVar1;
  uVar19 = iVar1 - iVar17;
  if ((uVar19 < *(uint *)((long)param_1 + 0x1c)) && (pbVar12[-(ulong)uVar19] == *pbVar12)) {
    bVar6 = false;
    uVar20 = 2;
    uVar9 = 2;
    *param_2 = 2;
    param_2[1] = uVar19 - 1;
    if (iVar3 == iVar17) goto LAB_00d9e4bc;
LAB_00d9e47c:
    uVar13 = iVar1 - iVar3;
    if ((*(uint *)((long)param_1 + 0x1c) <= uVar13) || (pbVar12[-(ulong)uVar13] != *pbVar12))
    goto LAB_00d9e4bc;
    uVar19 = (uint)uVar20;
    uVar20 = (ulong)(uVar19 + 2);
    uVar9 = 3;
    param_2[uVar19 | 1] = uVar13 - 1;
  }
  else {
    uVar20 = 0;
    bVar6 = true;
    uVar9 = 1;
    if (iVar3 != iVar17) goto LAB_00d9e47c;
LAB_00d9e4bc:
    uVar13 = uVar19;
    if (bVar6) {
      uVar20 = 0;
LAB_00d9e550:
      iVar1 = *(int *)(param_1 + 1);
      puVar15 = param_2 + uVar20;
      uVar19 = *(uint *)(param_1 + 3);
      uVar13 = *(uint *)((long)param_1 + 0x1c);
      pbVar18 = param_1[6];
      uVar5 = iVar1 - iVar4;
      iVar17 = *(int *)((long)param_1 + 0x3c);
      *(int *)(pbVar18 + (ulong)uVar19 * 4) = iVar4;
      if ((uVar5 < uVar13) && (iVar17 != 0)) {
        uVar7 = (uint)uVar9;
        if (uVar7 < 4) {
          uVar7 = 3;
        }
        uVar20 = (ulong)uVar7;
        do {
          uVar7 = uVar13;
          if (uVar5 <= uVar19) {
            uVar7 = 0;
          }
          pbVar10 = pbVar12 + -(ulong)uVar5;
          iVar3 = *(int *)(pbVar18 + (ulong)((uVar19 - uVar5) + uVar7) * 4);
          if ((pbVar10[uVar20] == pbVar12[uVar20]) && (*pbVar10 == *pbVar12)) {
            uVar9 = 0;
            do {
              if (uVar2 - 1 == uVar9) {
                if (uVar2 <= (uint)uVar20) goto LAB_00d9e60c;
                *puVar15 = uVar2;
                puVar15[1] = uVar5 - 1;
                puVar15 = puVar15 + 2;
                goto LAB_00d9e634;
              }
              uVar9 = uVar9 + 1;
            } while (pbVar10[uVar9 & 0xffffffff] == pbVar12[uVar9 & 0xffffffff]);
            if ((uint)uVar20 < (uint)uVar9) {
              *puVar15 = (uint)uVar9;
              puVar15[1] = uVar5 - 1;
              uVar20 = uVar9 & 0xffffffff;
              puVar15 = puVar15 + 2;
            }
          }
LAB_00d9e60c:
          iVar17 = iVar17 + -1;
        } while ((iVar17 != 0) && (uVar5 = iVar1 - iVar3, uVar5 < uVar13));
      }
LAB_00d9e634:
      iVar1 = *(int *)(param_1 + 1);
      uVar20 = (ulong)((long)puVar15 - (long)param_2) >> 2;
      *param_1 = pbVar11;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (iVar1 + 1 == *(int *)((long)param_1 + 0xc)) goto LAB_00d9e660;
      goto LAB_00d9e39c;
    }
  }
  if ((uint)uVar9 != uVar2) {
    do {
      if (pbVar12[uVar9 - uVar13] != pbVar12[uVar9]) {
        param_2[(int)uVar20 - 2] = (int)uVar9;
        goto LAB_00d9e550;
      }
      uVar19 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar19;
    } while (uVar2 != uVar19);
  }
  *param_1 = pbVar11;
  param_2[(int)uVar20 - 2] = uVar2;
  *(int *)(param_1[6] + (ulong)*(uint *)(param_1 + 3) * 4) = iVar4;
  iVar1 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (iVar1 + 1 == *(int *)((long)param_1 + 0xc)) {
LAB_00d9e660:
    FUN_00d9dbd4();
    return uVar20 & 0xffffffff;
  }
LAB_00d9e39c:
  return uVar20 & 0xffffffff;
}


