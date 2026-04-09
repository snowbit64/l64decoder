// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt3Zip_MatchFinder_GetMatches
// Entry Point: 00d9d990
// Size: 580 bytes
// Signature: undefined Bt3Zip_MatchFinder_GetMatches(void)


ulong Bt3Zip_MatchFinder_GetMatches(byte **param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  byte *pbVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  
  uVar5 = *(uint *)((long)param_1 + 0x14);
  if (uVar5 < 3) {
    iVar12 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (iVar12 + 1 == *(int *)((long)param_1 + 0xc)) {
      FUN_00d9dbd4();
    }
    uVar18 = 0;
  }
  else {
    pbVar15 = *param_1;
    pbVar4 = param_1[6];
    lVar13 = (ulong)(ushort)(CONCAT11(*pbVar15,pbVar15[2]) ^
                            *(ushort *)((long)param_1 + (ulong)pbVar15[1] * 4 + 0x8c)) * 4;
    iVar10 = *(int *)(param_1[5] + lVar13);
    *(undefined4 *)(param_1[5] + lVar13) = *(undefined4 *)(param_1 + 1);
    uVar2 = *(uint *)(param_1 + 3);
    uVar3 = *(uint *)((long)param_1 + 0x1c);
    iVar12 = *(int *)(param_1 + 1);
    iVar17 = *(int *)((long)param_1 + 0x3c);
    uVar6 = iVar12 - iVar10;
    piVar16 = (int *)(pbVar4 + (ulong)(uVar2 << 1) * 4);
    piVar14 = piVar16 + 1;
    puVar8 = param_2;
    if (uVar6 < uVar3 && iVar17 != 0) {
      uVar18 = 0;
      uVar9 = 0;
      uVar11 = 2;
      puVar7 = param_2;
      do {
        uVar21 = uVar3;
        if (uVar6 <= uVar2) {
          uVar21 = 0;
        }
        uVar19 = (uint)uVar9;
        if ((uint)uVar18 <= (uint)uVar9) {
          uVar19 = (uint)uVar18;
        }
        uVar20 = (ulong)uVar19;
        piVar1 = (int *)(pbVar4 + (ulong)(((uVar2 - uVar6) + uVar21) * 2) * 4);
        puVar8 = puVar7;
        if (pbVar15[uVar20 - uVar6] == pbVar15[uVar20]) {
          uVar21 = uVar19 + 1;
          uVar20 = (ulong)uVar5;
          if ((uVar21 != uVar5) &&
             (uVar20 = (ulong)uVar21, pbVar15[(ulong)uVar21 - (ulong)uVar6] == pbVar15[uVar21])) {
            uVar21 = uVar19 + 2;
            do {
              uVar19 = uVar21;
              if (uVar5 == uVar19) {
                uVar20 = (ulong)uVar5;
                uVar21 = uVar5;
                goto joined_r0x00d9dbbc;
              }
              uVar21 = uVar19 + 1;
            } while (pbVar15[(ulong)uVar19 - (ulong)uVar6] == pbVar15[uVar19]);
            uVar20 = (ulong)uVar19;
          }
          uVar21 = (uint)uVar20;
joined_r0x00d9dbbc:
          if ((uint)uVar11 < uVar21) {
            puVar8 = puVar7 + 2;
            *puVar7 = (uint)uVar20;
            puVar7[1] = uVar6 - 1;
            uVar11 = uVar20;
            if ((uint)uVar20 == uVar5) {
              *piVar16 = *piVar1;
              iVar12 = piVar1[1];
              goto LAB_00d9da5c;
            }
          }
        }
        iVar17 = iVar17 + -1;
        if (pbVar15[uVar20 - uVar6] < pbVar15[uVar20]) {
          *piVar16 = iVar10;
          piVar1 = piVar1 + 1;
          uVar18 = uVar20;
          piVar16 = piVar1;
        }
        else {
          *piVar14 = iVar10;
          piVar14 = piVar1;
          uVar9 = uVar20;
        }
        if (iVar17 == 0) break;
        iVar10 = *piVar1;
        uVar6 = iVar12 - iVar10;
        puVar7 = puVar8;
      } while (uVar6 < uVar3);
    }
    iVar12 = 0;
    *piVar16 = 0;
LAB_00d9da5c:
    *piVar14 = iVar12;
    iVar12 = *(int *)(param_1 + 1);
    uVar18 = (ulong)((long)puVar8 - (long)param_2) >> 2;
    *param_1 = pbVar15 + 1;
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (iVar12 + 1 == *(int *)((long)param_1 + 0xc)) {
      FUN_00d9dbd4();
    }
  }
  return uVar18 & 0xffffffff;
}


