// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt3Zip_MatchFinder_Skip
// Entry Point: 00d9e018
// Size: 448 bytes
// Signature: undefined Bt3Zip_MatchFinder_Skip(void)


void Bt3Zip_MatchFinder_Skip(byte **param_1,int param_2)

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
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  ulong uVar20;
  
  do {
    uVar7 = *(uint *)((long)param_1 + 0x14);
    if (uVar7 < 3) {
      iVar14 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1 + 1) = iVar14 + 1;
      if (iVar14 + 1 == *(int *)((long)param_1 + 0xc)) {
LAB_00d9e1bc:
        FUN_00d9dbd4(param_1);
      }
    }
    else {
      pbVar15 = *param_1;
      pbVar6 = param_1[6];
      lVar16 = (ulong)(ushort)(CONCAT11(*pbVar15,pbVar15[2]) ^
                              *(ushort *)((long)param_1 + (ulong)pbVar15[1] * 4 + 0x8c)) * 4;
      iVar11 = *(int *)(param_1[5] + lVar16);
      *(undefined4 *)(param_1[5] + lVar16) = *(undefined4 *)(param_1 + 1);
      uVar4 = *(uint *)(param_1 + 3);
      uVar5 = *(uint *)((long)param_1 + 0x1c);
      iVar14 = *(int *)(param_1 + 1);
      iVar19 = *(int *)((long)param_1 + 0x3c);
      uVar12 = iVar14 - iVar11;
      piVar18 = (int *)(pbVar6 + (ulong)(uVar4 << 1) * 4);
      piVar17 = piVar18 + 1;
      if (uVar12 < uVar5 && iVar19 != 0) {
        uVar10 = 0;
        uVar13 = 0;
        do {
          uVar2 = uVar5;
          if (uVar12 <= uVar4) {
            uVar2 = 0;
          }
          uVar3 = uVar13;
          if ((uint)uVar10 <= uVar13) {
            uVar3 = (uint)uVar10;
          }
          uVar20 = (ulong)uVar3;
          bVar8 = pbVar15[uVar20 - uVar12];
          piVar1 = (int *)(pbVar6 + (ulong)(((uVar4 - uVar12) + uVar2) * 2) * 4);
          bVar9 = pbVar15[uVar20];
          if (bVar8 == bVar9) {
            do {
              if (uVar7 - 1 == (int)uVar20) {
                *piVar18 = *piVar1;
                iVar14 = piVar1[1];
                goto LAB_00d9e194;
              }
              uVar20 = (ulong)((int)uVar20 + 1);
              bVar8 = pbVar15[uVar20 - uVar12];
              bVar9 = pbVar15[uVar20];
            } while (bVar8 == bVar9);
          }
          iVar19 = iVar19 + -1;
          if (bVar8 < bVar9) {
            *piVar18 = iVar11;
            piVar1 = piVar1 + 1;
            uVar10 = uVar20;
            piVar18 = piVar1;
          }
          else {
            *piVar17 = iVar11;
            uVar13 = (uint)uVar20;
            piVar17 = piVar1;
          }
          if (iVar19 == 0) break;
          iVar11 = *piVar1;
          uVar12 = iVar14 - iVar11;
        } while (uVar12 < uVar5);
      }
      iVar14 = 0;
      *piVar18 = 0;
LAB_00d9e194:
      *piVar17 = iVar14;
      iVar14 = *(int *)(param_1 + 1);
      *param_1 = pbVar15 + 1;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar14 + 1;
      if (iVar14 + 1 == *(int *)((long)param_1 + 0xc)) goto LAB_00d9e1bc;
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


