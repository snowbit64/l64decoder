// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9f11c
// Entry Point: 00d9f11c
// Size: 1128 bytes
// Signature: undefined FUN_00d9f11c(void)


ulong FUN_00d9f11c(byte **param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if (uVar1 < 4) {
    iVar12 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (iVar12 + 1 == *(int *)((long)param_1 + 0xc)) {
      FUN_00d9dbd4();
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
    }
    goto LAB_00d9f558;
  }
  pbVar14 = *param_1;
  pbVar22 = param_1[5];
  uVar23 = *(uint *)((long)param_1 + (ulong)*pbVar14 * 4 + 0x8c) ^ (uint)pbVar14[1];
  uVar16 = uVar23 ^ (uint)pbVar14[2] << 8;
  lVar17 = (ulong)(uVar23 & 0x3ff) * 4;
  lVar21 = (ulong)((uVar16 & 0xffff) + 0x400) * 4;
  lVar7 = (ulong)(((uVar16 ^ *(int *)((long)param_1 + (ulong)pbVar14[3] * 4 + 0x8c) << 5) &
                  *(uint *)(param_1 + 7)) + 0x10400) * 4;
  iVar12 = *(int *)(param_1 + 1);
  iVar13 = *(int *)(pbVar22 + lVar17);
  iVar2 = *(int *)(pbVar22 + lVar21);
  iVar15 = *(int *)(pbVar22 + lVar7);
  *(int *)(pbVar22 + lVar7) = iVar12;
  *(int *)(pbVar22 + lVar21) = iVar12;
  *(int *)(pbVar22 + lVar17) = iVar12;
  uVar23 = iVar12 - iVar13;
  if ((uVar23 < *(uint *)((long)param_1 + 0x1c)) && (pbVar14[-(ulong)uVar23] == *pbVar14)) {
    bVar6 = false;
    uVar24 = 2;
    uVar10 = 2;
    *param_2 = 2;
    param_2[1] = uVar23 - 1;
    if (iVar2 == iVar13) goto LAB_00d9f288;
LAB_00d9f248:
    uVar16 = iVar12 - iVar2;
    if ((*(uint *)((long)param_1 + 0x1c) <= uVar16) || (pbVar14[-(ulong)uVar16] != *pbVar14))
    goto LAB_00d9f288;
    uVar23 = (uint)uVar24;
    uVar24 = (ulong)(uVar23 + 2);
    uVar10 = 3;
    param_2[uVar23 | 1] = uVar16 - 1;
LAB_00d9f294:
    if ((uint)uVar10 != uVar1) {
      do {
        if (pbVar14[uVar10 - uVar16] != pbVar14[uVar10]) {
          param_2[(int)uVar24 - 2] = (int)uVar10;
          goto LAB_00d9f3cc;
        }
        uVar23 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar23;
      } while (uVar1 != uVar23);
    }
    pbVar22 = param_1[6];
    param_2[(int)uVar24 - 2] = uVar1;
    uVar23 = *(uint *)(param_1 + 3);
    uVar16 = *(uint *)((long)param_1 + 0x1c);
    iVar12 = *(int *)(param_1 + 1);
    uVar5 = iVar12 - iVar15;
    piVar19 = (int *)(pbVar22 + (ulong)(uVar23 << 1) * 4);
    piVar18 = piVar19 + 1;
    if ((uVar5 < uVar16) && (iVar13 = *(int *)((long)param_1 + 0x3c), iVar13 != 0)) {
      uVar27 = 0;
      uVar10 = 0;
      do {
        uVar9 = uVar16;
        if (uVar5 <= uVar23) {
          uVar9 = 0;
        }
        uVar28 = (uint)uVar10;
        if ((uint)uVar27 <= (uint)uVar10) {
          uVar28 = (uint)uVar27;
        }
        uVar26 = (ulong)uVar28;
        bVar3 = pbVar14[uVar26 - uVar5];
        piVar8 = (int *)(pbVar22 + (ulong)(((uVar23 - uVar5) + uVar9) * 2) * 4);
        bVar4 = pbVar14[uVar26];
        if (bVar3 == bVar4) {
          do {
            if (uVar1 - 1 == (int)uVar26) {
              *piVar19 = *piVar8;
              iVar12 = piVar8[1];
              goto LAB_00d9f3b4;
            }
            uVar26 = (ulong)((int)uVar26 + 1);
            bVar3 = pbVar14[uVar26 - uVar5];
            bVar4 = pbVar14[uVar26];
          } while (bVar3 == bVar4);
        }
        iVar13 = iVar13 + -1;
        if (bVar3 < bVar4) {
          *piVar19 = iVar15;
          piVar8 = piVar8 + 1;
          uVar27 = uVar26;
          piVar19 = piVar8;
        }
        else {
          *piVar18 = iVar15;
          uVar10 = uVar26;
          piVar18 = piVar8;
        }
        if (iVar13 == 0) break;
        iVar15 = *piVar8;
        uVar5 = iVar12 - iVar15;
      } while (uVar5 < uVar16);
    }
    iVar12 = 0;
    *piVar19 = 0;
LAB_00d9f3b4:
    *piVar18 = iVar12;
    iVar12 = *(int *)(param_1 + 1);
    iVar15 = *(int *)((long)param_1 + 0xc);
    iVar13 = *(int *)(param_1 + 3);
  }
  else {
    uVar24 = 0;
    bVar6 = true;
    uVar10 = 1;
    if (iVar2 != iVar13) goto LAB_00d9f248;
LAB_00d9f288:
    uVar16 = uVar23;
    if (!bVar6) goto LAB_00d9f294;
    uVar24 = 0;
LAB_00d9f3cc:
    uVar23 = *(uint *)(param_1 + 3);
    uVar16 = *(uint *)((long)param_1 + 0x1c);
    pbVar22 = param_1[6];
    puVar11 = param_2 + uVar24;
    iVar12 = *(int *)(param_1 + 1);
    uVar5 = iVar12 - iVar15;
    piVar19 = (int *)(pbVar22 + (ulong)(uVar23 << 1) * 4);
    piVar18 = piVar19 + 1;
    if ((uVar5 < uVar16) && (iVar13 = *(int *)((long)param_1 + 0x3c), iVar13 != 0)) {
      uVar9 = (uint)uVar10;
      uVar24 = 0;
      uVar10 = 0;
      puVar20 = puVar11;
      if (uVar9 < 4) {
        uVar9 = 3;
      }
      do {
        uVar28 = uVar16;
        if (uVar5 <= uVar23) {
          uVar28 = 0;
        }
        uVar25 = (uint)uVar10;
        if ((uint)uVar24 <= (uint)uVar10) {
          uVar25 = (uint)uVar24;
        }
        uVar27 = (ulong)uVar25;
        piVar8 = (int *)(pbVar22 + (ulong)(((uVar23 - uVar5) + uVar28) * 2) * 4);
        puVar11 = puVar20;
        if (pbVar14[uVar27 - uVar5] == pbVar14[uVar27]) {
          uVar28 = uVar25 + 1;
          uVar27 = (ulong)uVar1;
          if ((uVar28 != uVar1) &&
             (uVar27 = (ulong)uVar28, pbVar14[(ulong)uVar28 - (ulong)uVar5] == pbVar14[uVar28])) {
            uVar28 = uVar25 + 2;
            do {
              uVar25 = uVar28;
              if (uVar1 == uVar25) {
                uVar27 = (ulong)uVar1;
                uVar28 = uVar1;
                goto joined_r0x00d9f510;
              }
              uVar28 = uVar25 + 1;
            } while (pbVar14[(ulong)uVar25 - (ulong)uVar5] == pbVar14[uVar25]);
            uVar27 = (ulong)uVar25;
          }
          uVar28 = (uint)uVar27;
joined_r0x00d9f510:
          if (uVar9 < uVar28) {
            puVar11 = puVar20 + 2;
            uVar9 = (uint)uVar27;
            *puVar20 = uVar9;
            puVar20[1] = uVar5 - 1;
            if (uVar9 == uVar1) {
              *piVar19 = *piVar8;
              iVar12 = piVar8[1];
              goto LAB_00d9f524;
            }
          }
        }
        iVar13 = iVar13 + -1;
        if (pbVar14[uVar27 - uVar5] < pbVar14[uVar27]) {
          *piVar19 = iVar15;
          piVar8 = piVar8 + 1;
          uVar24 = uVar27;
          piVar19 = piVar8;
        }
        else {
          *piVar18 = iVar15;
          piVar18 = piVar8;
          uVar10 = uVar27;
        }
        if (iVar13 == 0) break;
        iVar15 = *piVar8;
        uVar5 = iVar12 - iVar15;
        puVar20 = puVar11;
      } while (uVar5 < uVar16);
    }
    iVar12 = 0;
    *piVar19 = 0;
LAB_00d9f524:
    *piVar18 = iVar12;
    iVar12 = *(int *)(param_1 + 1);
    iVar15 = *(int *)((long)param_1 + 0xc);
    iVar13 = *(int *)(param_1 + 3);
    uVar24 = (ulong)((long)puVar11 - (long)param_2) >> 2;
  }
  *param_1 = pbVar14 + 1;
  *(int *)(param_1 + 3) = iVar13 + 1;
  *(int *)(param_1 + 1) = iVar12 + 1;
  if (iVar12 + 1 == iVar15) {
    FUN_00d9dbd4();
  }
LAB_00d9f558:
  return uVar24 & 0xffffffff;
}


