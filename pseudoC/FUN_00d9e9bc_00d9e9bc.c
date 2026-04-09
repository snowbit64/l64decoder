// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9e9bc
// Entry Point: 00d9e9bc
// Size: 428 bytes
// Signature: undefined FUN_00d9e9bc(void)


void FUN_00d9e9bc(byte **param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  ulong uVar19;
  
  do {
    uVar7 = *(uint *)((long)param_1 + 0x14);
    if (uVar7 < 2) {
      iVar14 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1 + 1) = iVar14 + 1;
      if (iVar14 + 1 == *(int *)((long)param_1 + 0xc)) {
LAB_00d9eb4c:
        FUN_00d9dbd4(param_1);
      }
    }
    else {
      pbVar15 = *param_1;
      uVar11 = (ulong)*pbVar15 << 2 | (ulong)pbVar15[1] << 10;
      pbVar6 = param_1[6];
      iVar10 = *(int *)(param_1[5] + uVar11);
      *(undefined4 *)(param_1[5] + uVar11) = *(undefined4 *)(param_1 + 1);
      uVar4 = *(uint *)(param_1 + 3);
      uVar5 = *(uint *)((long)param_1 + 0x1c);
      iVar14 = *(int *)(param_1 + 1);
      iVar18 = *(int *)((long)param_1 + 0x3c);
      uVar13 = iVar14 - iVar10;
      piVar17 = (int *)(pbVar6 + (ulong)(uVar4 << 1) * 4);
      piVar16 = piVar17 + 1;
      if (uVar13 < uVar5 && iVar18 != 0) {
        uVar12 = 0;
        uVar11 = 0;
        do {
          uVar2 = uVar5;
          if (uVar13 <= uVar4) {
            uVar2 = 0;
          }
          uVar3 = (uint)uVar11;
          if (uVar12 <= (uint)uVar11) {
            uVar3 = uVar12;
          }
          uVar19 = (ulong)uVar3;
          bVar8 = pbVar15[uVar19 - uVar13];
          piVar1 = (int *)(pbVar6 + (ulong)(((uVar4 - uVar13) + uVar2) * 2) * 4);
          bVar9 = pbVar15[uVar19];
          if (bVar8 == bVar9) {
            do {
              if (uVar7 - 1 == (int)uVar19) {
                *piVar17 = *piVar1;
                iVar14 = piVar1[1];
                goto LAB_00d9eb24;
              }
              uVar19 = (ulong)((int)uVar19 + 1);
              bVar8 = pbVar15[uVar19 - uVar13];
              bVar9 = pbVar15[uVar19];
            } while (bVar8 == bVar9);
          }
          iVar18 = iVar18 + -1;
          if (bVar8 < bVar9) {
            *piVar17 = iVar10;
            piVar1 = piVar1 + 1;
            piVar17 = piVar1;
            uVar12 = (uint)uVar19;
          }
          else {
            *piVar16 = iVar10;
            piVar16 = piVar1;
            uVar11 = uVar19;
          }
          if (iVar18 == 0) break;
          iVar10 = *piVar1;
          uVar13 = iVar14 - iVar10;
        } while (uVar13 < uVar5);
      }
      iVar14 = 0;
      *piVar17 = 0;
LAB_00d9eb24:
      *piVar16 = iVar14;
      iVar14 = *(int *)(param_1 + 1);
      *param_1 = pbVar15 + 1;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar14 + 1;
      if (iVar14 + 1 == *(int *)((long)param_1 + 0xc)) goto LAB_00d9eb4c;
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


