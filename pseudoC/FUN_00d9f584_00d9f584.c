// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9f584
// Entry Point: 00d9f584
// Size: 504 bytes
// Signature: undefined FUN_00d9f584(void)


void FUN_00d9f584(byte **param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  
  do {
    uVar8 = *(uint *)((long)param_1 + 0x14);
    if (uVar8 < 4) {
      iVar16 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1 + 1) = iVar16 + 1;
      if (iVar16 + 1 == *(int *)((long)param_1 + 0xc)) {
LAB_00d9f760:
        FUN_00d9dbd4(param_1);
      }
    }
    else {
      pbVar17 = *param_1;
      uVar4 = *(uint *)((long)param_1 + (ulong)*pbVar17 * 4 + 0x8c) ^ (uint)pbVar17[1];
      uVar9 = *(undefined4 *)(param_1 + 1);
      uVar5 = uVar4 ^ (uint)pbVar17[2] << 8;
      lVar18 = (ulong)(((uVar5 ^ *(int *)((long)param_1 + (ulong)pbVar17[3] * 4 + 0x8c) << 5) &
                       *(uint *)(param_1 + 7)) + 0x10400) * 4;
      pbVar6 = param_1[5];
      pbVar7 = param_1[6];
      iVar13 = *(int *)(pbVar6 + lVar18);
      *(undefined4 *)(pbVar6 + (ulong)((uVar5 & 0xffff) + 0x400) * 4) = uVar9;
      *(undefined4 *)(pbVar6 + (ulong)(uVar4 & 0x3ff) * 4) = uVar9;
      *(undefined4 *)(pbVar6 + lVar18) = *(undefined4 *)(param_1 + 1);
      uVar4 = *(uint *)(param_1 + 3);
      uVar5 = *(uint *)((long)param_1 + 0x1c);
      iVar16 = *(int *)(param_1 + 1);
      iVar21 = *(int *)((long)param_1 + 0x3c);
      uVar14 = iVar16 - iVar13;
      piVar20 = (int *)(pbVar7 + (ulong)(uVar4 << 1) * 4);
      piVar19 = piVar20 + 1;
      if (uVar14 < uVar5 && iVar21 != 0) {
        uVar12 = 0;
        uVar15 = 0;
        do {
          uVar2 = uVar5;
          if (uVar14 <= uVar4) {
            uVar2 = 0;
          }
          uVar3 = uVar15;
          if ((uint)uVar12 <= uVar15) {
            uVar3 = (uint)uVar12;
          }
          uVar22 = (ulong)uVar3;
          bVar10 = pbVar17[uVar22 - uVar14];
          piVar1 = (int *)(pbVar7 + (ulong)(((uVar4 - uVar14) + uVar2) * 2) * 4);
          bVar11 = pbVar17[uVar22];
          if (bVar10 == bVar11) {
            do {
              if (uVar8 - 1 == (int)uVar22) {
                *piVar20 = *piVar1;
                iVar16 = piVar1[1];
                goto LAB_00d9f738;
              }
              uVar22 = (ulong)((int)uVar22 + 1);
              bVar10 = pbVar17[uVar22 - uVar14];
              bVar11 = pbVar17[uVar22];
            } while (bVar10 == bVar11);
          }
          iVar21 = iVar21 + -1;
          if (bVar10 < bVar11) {
            *piVar20 = iVar13;
            piVar1 = piVar1 + 1;
            uVar12 = uVar22;
            piVar20 = piVar1;
          }
          else {
            *piVar19 = iVar13;
            uVar15 = (uint)uVar22;
            piVar19 = piVar1;
          }
          if (iVar21 == 0) break;
          iVar13 = *piVar1;
          uVar14 = iVar16 - iVar13;
        } while (uVar14 < uVar5);
      }
      iVar16 = 0;
      *piVar20 = 0;
LAB_00d9f738:
      *piVar19 = iVar16;
      iVar16 = *(int *)(param_1 + 1);
      *param_1 = pbVar17 + 1;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar16 + 1;
      if (iVar16 + 1 == *(int *)((long)param_1 + 0xc)) goto LAB_00d9f760;
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


