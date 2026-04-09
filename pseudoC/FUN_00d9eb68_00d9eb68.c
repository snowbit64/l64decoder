// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9eb68
// Entry Point: 00d9eb68
// Size: 992 bytes
// Signature: undefined FUN_00d9eb68(void)


ulong FUN_00d9eb68(byte **param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if (uVar1 < 3) {
    iVar10 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (iVar10 + 1 == *(int *)((long)param_1 + 0xc)) {
      FUN_00d9dbd4();
    }
    uVar21 = 0;
  }
  else {
    pbVar11 = *param_1;
    iVar10 = *(int *)(param_1 + 1);
    pbVar9 = pbVar11 + 1;
    uVar16 = *(uint *)((long)param_1 + (ulong)*pbVar11 * 4 + 0x8c) ^ (uint)*pbVar9;
    lVar17 = (ulong)(uVar16 & 0x3ff) * 4;
    pbVar13 = param_1[5];
    lVar19 = (ulong)(((uVar16 ^ (uint)pbVar11[2] << 8) & *(uint *)(param_1 + 7)) + 0x400) * 4;
    iVar6 = *(int *)(pbVar13 + lVar17);
    iVar12 = *(int *)(pbVar13 + lVar19);
    *(int *)(pbVar13 + lVar19) = iVar10;
    *(int *)(pbVar13 + lVar17) = iVar10;
    uVar16 = *(uint *)((long)param_1 + 0x1c);
    uVar4 = iVar10 - iVar6;
    if ((uVar4 < uVar16) && (pbVar11[-(ulong)uVar4] == *pbVar11)) {
      uVar21 = 2;
      do {
        if (pbVar11[uVar21 - uVar4] != pbVar11[uVar21]) {
          lVar17 = 2;
          *param_2 = (uint)uVar21;
          param_2[1] = uVar4 - 1;
          uVar16 = *(uint *)((long)param_1 + 0x1c);
          goto LAB_00d9ed48;
        }
        uVar16 = (uint)uVar21 + 1;
        uVar21 = (ulong)uVar16;
      } while (uVar1 != uVar16);
      pbVar13 = param_1[6];
      *param_2 = uVar1;
      param_2[1] = uVar4 - 1;
      uVar16 = *(uint *)(param_1 + 3);
      uVar4 = *(uint *)((long)param_1 + 0x1c);
      iVar10 = *(int *)(param_1 + 1);
      uVar5 = iVar10 - iVar12;
      piVar18 = (int *)(pbVar13 + (ulong)(uVar16 << 1) * 4);
      piVar14 = piVar18 + 1;
      if ((uVar5 < uVar4) && (iVar6 = *(int *)((long)param_1 + 0x3c), iVar6 != 0)) {
        uVar7 = 0;
        uVar21 = 0;
        do {
          uVar25 = uVar4;
          if (uVar5 <= uVar16) {
            uVar25 = 0;
          }
          uVar23 = (uint)uVar21;
          if ((uint)uVar7 <= (uint)uVar21) {
            uVar23 = (uint)uVar7;
          }
          uVar22 = (ulong)uVar23;
          bVar2 = pbVar11[uVar22 - uVar5];
          piVar8 = (int *)(pbVar13 + (ulong)(((uVar16 - uVar5) + uVar25) * 2) * 4);
          bVar3 = pbVar11[uVar22];
          if (bVar2 == bVar3) {
            do {
              if (uVar1 - 1 == (int)uVar22) {
                *piVar18 = *piVar8;
                iVar10 = piVar8[1];
                goto LAB_00d9eefc;
              }
              uVar22 = (ulong)((int)uVar22 + 1);
              bVar2 = pbVar11[uVar22 - uVar5];
              bVar3 = pbVar11[uVar22];
            } while (bVar2 == bVar3);
          }
          iVar6 = iVar6 + -1;
          if (bVar2 < bVar3) {
            *piVar18 = iVar12;
            piVar8 = piVar8 + 1;
            uVar7 = uVar22;
            piVar18 = piVar8;
          }
          else {
            *piVar14 = iVar12;
            uVar21 = uVar22;
            piVar14 = piVar8;
          }
          if (iVar6 == 0) break;
          iVar12 = *piVar8;
          uVar5 = iVar10 - iVar12;
        } while (uVar5 < uVar4);
      }
      iVar10 = 0;
      *piVar18 = 0;
LAB_00d9eefc:
      *piVar14 = iVar10;
      iVar10 = *(int *)(param_1 + 1);
      *param_1 = pbVar9;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar10 + 1;
      if (iVar10 + 1 == *(int *)((long)param_1 + 0xc)) {
        FUN_00d9dbd4();
      }
      uVar21 = 2;
    }
    else {
      lVar17 = 0;
      uVar21 = 2;
LAB_00d9ed48:
      uVar4 = *(uint *)(param_1 + 3);
      puVar15 = param_2 + lVar17;
      iVar10 = *(int *)(param_1 + 1);
      pbVar13 = param_1[6];
      iVar6 = *(int *)((long)param_1 + 0x3c);
      uVar5 = iVar10 - iVar12;
      piVar18 = (int *)(pbVar13 + (ulong)(uVar4 << 1) * 4);
      piVar14 = piVar18 + 1;
      if (uVar5 < uVar16 && iVar6 != 0) {
        uVar7 = 0;
        uVar22 = 0;
        puVar20 = puVar15;
        do {
          uVar25 = uVar16;
          if (uVar5 <= uVar4) {
            uVar25 = 0;
          }
          uVar23 = (uint)uVar22;
          if ((uint)uVar7 <= (uint)uVar22) {
            uVar23 = (uint)uVar7;
          }
          uVar24 = (ulong)uVar23;
          piVar8 = (int *)(pbVar13 + (ulong)(((uVar4 - uVar5) + uVar25) * 2) * 4);
          puVar15 = puVar20;
          if (pbVar11[uVar24 - uVar5] == pbVar11[uVar24]) {
            uVar25 = uVar23 + 1;
            uVar24 = (ulong)uVar1;
            if ((uVar25 != uVar1) &&
               (uVar24 = (ulong)uVar25, pbVar11[(ulong)uVar25 - (ulong)uVar5] == pbVar11[uVar25])) {
              uVar25 = uVar23 + 2;
              do {
                uVar23 = uVar25;
                if (uVar1 == uVar23) {
                  uVar24 = (ulong)uVar1;
                  uVar25 = uVar1;
                  goto joined_r0x00d9eec4;
                }
                uVar25 = uVar23 + 1;
              } while (pbVar11[(ulong)uVar23 - (ulong)uVar5] == pbVar11[uVar23]);
              uVar24 = (ulong)uVar23;
            }
            uVar25 = (uint)uVar24;
joined_r0x00d9eec4:
            if ((uint)uVar21 < uVar25) {
              puVar15 = puVar20 + 2;
              *puVar20 = (uint)uVar24;
              puVar20[1] = uVar5 - 1;
              uVar21 = uVar24;
              if ((uint)uVar24 == uVar1) {
                *piVar18 = *piVar8;
                iVar10 = piVar8[1];
                goto LAB_00d9ed84;
              }
            }
          }
          iVar6 = iVar6 + -1;
          if (pbVar11[uVar24 - uVar5] < pbVar11[uVar24]) {
            *piVar18 = iVar12;
            piVar8 = piVar8 + 1;
            uVar7 = uVar24;
            piVar18 = piVar8;
          }
          else {
            *piVar14 = iVar12;
            piVar14 = piVar8;
            uVar22 = uVar24;
          }
          if (iVar6 == 0) break;
          iVar12 = *piVar8;
          uVar5 = iVar10 - iVar12;
          puVar20 = puVar15;
        } while (uVar5 < uVar16);
      }
      iVar10 = 0;
      *piVar18 = 0;
LAB_00d9ed84:
      *piVar14 = iVar10;
      iVar10 = *(int *)(param_1 + 1);
      uVar21 = (ulong)((long)puVar15 - (long)param_2) >> 2;
      *param_1 = pbVar9;
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar10 + 1;
      if (iVar10 + 1 == *(int *)((long)param_1 + 0xc)) {
        FUN_00d9dbd4();
      }
    }
  }
  return uVar21 & 0xffffffff;
}


