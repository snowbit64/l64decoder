// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Hc3Zip_MatchFinder_GetMatches
// Entry Point: 00d9de54
// Size: 452 bytes
// Signature: undefined Hc3Zip_MatchFinder_GetMatches(void)


ulong Hc3Zip_MatchFinder_GetMatches(byte **param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  
  uVar6 = *(uint *)((long)param_1 + 0x14);
  if (uVar6 < 3) {
    iVar2 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (iVar2 + 1 != *(int *)((long)param_1 + 0xc)) {
      return 0;
    }
    FUN_00d9dbd4();
    uVar15 = 0;
  }
  else {
    pbVar11 = *param_1;
    lVar12 = (ulong)(ushort)(CONCAT11(*pbVar11,pbVar11[2]) ^
                            *(ushort *)((long)param_1 + (ulong)pbVar11[1] * 4 + 0x8c)) * 4;
    pbVar5 = param_1[6];
    iVar7 = *(int *)(param_1[5] + lVar12);
    *(undefined4 *)(param_1[5] + lVar12) = *(undefined4 *)(param_1 + 1);
    iVar2 = *(int *)(param_1 + 1);
    uVar3 = *(uint *)(param_1 + 3);
    uVar4 = *(uint *)((long)param_1 + 0x1c);
    iVar14 = *(int *)((long)param_1 + 0x3c);
    uVar8 = iVar2 - iVar7;
    *(int *)(pbVar5 + (ulong)uVar3 * 4) = iVar7;
    puVar13 = param_2;
    if (uVar8 < uVar4 && iVar14 != 0) {
      uVar15 = 2;
      do {
        uVar1 = uVar4;
        if (uVar8 <= uVar3) {
          uVar1 = 0;
        }
        pbVar9 = pbVar11 + -(ulong)uVar8;
        iVar7 = *(int *)(pbVar5 + (ulong)((uVar3 - uVar8) + uVar1) * 4);
        if ((pbVar9[uVar15] == pbVar11[uVar15]) && (*pbVar9 == *pbVar11)) {
          uVar10 = 0;
          do {
            if (uVar6 - 1 == uVar10) {
              if (uVar6 <= (uint)uVar15) goto LAB_00d9df9c;
              *puVar13 = uVar6;
              puVar13[1] = uVar8 - 1;
              puVar13 = puVar13 + 2;
              goto LAB_00d9dfd8;
            }
            uVar10 = uVar10 + 1;
          } while (pbVar9[uVar10 & 0xffffffff] == pbVar11[uVar10 & 0xffffffff]);
          if ((uint)uVar15 < (uint)uVar10) {
            *puVar13 = (uint)uVar10;
            puVar13[1] = uVar8 - 1;
            uVar15 = uVar10 & 0xffffffff;
            puVar13 = puVar13 + 2;
          }
        }
LAB_00d9df9c:
        iVar14 = iVar14 + -1;
      } while ((iVar14 != 0) && (uVar8 = iVar2 - iVar7, uVar8 < uVar4));
    }
LAB_00d9dfd8:
    iVar2 = *(int *)(param_1 + 1);
    uVar15 = (ulong)((long)puVar13 - (long)param_2) >> 2;
    *param_1 = pbVar11 + 1;
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (iVar2 + 1 == *(int *)((long)param_1 + 0xc)) {
      FUN_00d9dbd4();
      return uVar15 & 0xffffffff;
    }
  }
  return uVar15 & 0xffffffff;
}


