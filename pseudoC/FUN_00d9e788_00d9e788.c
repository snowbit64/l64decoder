// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9e788
// Entry Point: 00d9e788
// Size: 564 bytes
// Signature: undefined FUN_00d9e788(void)


ulong FUN_00d9e788(byte **param_1,uint *param_2)

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
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  
  uVar5 = *(uint *)((long)param_1 + 0x14);
  if (uVar5 < 2) {
    iVar13 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (iVar13 + 1 == *(int *)((long)param_1 + 0xc)) {
      FUN_00d9dbd4();
    }
    uVar17 = 0;
  }
  else {
    pbVar14 = *param_1;
    uVar17 = (ulong)*pbVar14 << 2 | (ulong)pbVar14[1] << 10;
    pbVar4 = param_1[6];
    iVar10 = *(int *)(param_1[5] + uVar17);
    *(undefined4 *)(param_1[5] + uVar17) = *(undefined4 *)(param_1 + 1);
    uVar2 = *(uint *)(param_1 + 3);
    uVar3 = *(uint *)((long)param_1 + 0x1c);
    iVar13 = *(int *)(param_1 + 1);
    iVar16 = *(int *)((long)param_1 + 0x3c);
    uVar6 = iVar13 - iVar10;
    piVar15 = (int *)(pbVar4 + (ulong)(uVar2 << 1) * 4);
    piVar12 = piVar15 + 1;
    puVar8 = param_2;
    if (uVar6 < uVar3 && iVar16 != 0) {
      uVar17 = 0;
      uVar9 = 0;
      uVar11 = 1;
      puVar7 = param_2;
      do {
        uVar20 = uVar3;
        if (uVar6 <= uVar2) {
          uVar20 = 0;
        }
        uVar18 = (uint)uVar9;
        if ((uint)uVar17 <= (uint)uVar9) {
          uVar18 = (uint)uVar17;
        }
        uVar19 = (ulong)uVar18;
        piVar1 = (int *)(pbVar4 + (ulong)(((uVar2 - uVar6) + uVar20) * 2) * 4);
        puVar8 = puVar7;
        if (pbVar14[uVar19 - uVar6] == pbVar14[uVar19]) {
          uVar20 = uVar18 + 1;
          uVar19 = (ulong)uVar5;
          if ((uVar20 != uVar5) &&
             (uVar19 = (ulong)uVar20, pbVar14[(ulong)uVar20 - (ulong)uVar6] == pbVar14[uVar20])) {
            uVar20 = uVar18 + 2;
            do {
              uVar18 = uVar20;
              if (uVar5 == uVar18) {
                uVar19 = (ulong)uVar5;
                uVar20 = uVar5;
                goto joined_r0x00d9e9a4;
              }
              uVar20 = uVar18 + 1;
            } while (pbVar14[(ulong)uVar18 - (ulong)uVar6] == pbVar14[uVar18]);
            uVar19 = (ulong)uVar18;
          }
          uVar20 = (uint)uVar19;
joined_r0x00d9e9a4:
          if ((uint)uVar11 < uVar20) {
            puVar8 = puVar7 + 2;
            *puVar7 = (uint)uVar19;
            puVar7[1] = uVar6 - 1;
            uVar11 = uVar19;
            if ((uint)uVar19 == uVar5) {
              *piVar15 = *piVar1;
              iVar13 = piVar1[1];
              goto LAB_00d9e844;
            }
          }
        }
        iVar16 = iVar16 + -1;
        if (pbVar14[uVar19 - uVar6] < pbVar14[uVar19]) {
          *piVar15 = iVar10;
          piVar1 = piVar1 + 1;
          uVar17 = uVar19;
          piVar15 = piVar1;
        }
        else {
          *piVar12 = iVar10;
          piVar12 = piVar1;
          uVar9 = uVar19;
        }
        if (iVar16 == 0) break;
        iVar10 = *piVar1;
        uVar6 = iVar13 - iVar10;
        puVar7 = puVar8;
      } while (uVar6 < uVar3);
    }
    iVar13 = 0;
    *piVar15 = 0;
LAB_00d9e844:
    *piVar12 = iVar13;
    iVar13 = *(int *)(param_1 + 1);
    uVar17 = (ulong)((long)puVar8 - (long)param_2) >> 2;
    *param_1 = pbVar14 + 1;
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (iVar13 + 1 == *(int *)((long)param_1 + 0xc)) {
      FUN_00d9dbd4();
    }
  }
  return uVar17 & 0xffffffff;
}


