// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7234c
// Entry Point: 00d7234c
// Size: 1348 bytes
// Signature: undefined FUN_00d7234c(void)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00d7234c(long *param_1,undefined param_2,undefined param_3,undefined param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  code **ppcVar9;
  byte *pbVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  byte **ppbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  uint *puVar24;
  
  ppbVar18 = (byte **)param_1[5];
  *(undefined *)(param_1 + 0x25) = param_2;
  *(undefined *)((long)param_1 + 0x129) = param_3;
  pbVar21 = *ppbVar18;
  pbVar23 = ppbVar18[1];
  *(undefined *)((long)param_1 + 0x12a) = param_4;
  if (pbVar23 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar21 = *ppbVar18;
    pbVar23 = ppbVar18[1];
    bVar5 = *pbVar21;
  }
  else {
    bVar5 = *pbVar21;
  }
  if (pbVar23 == (byte *)0x1) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar23 = ppbVar18[1] + -1;
    pbVar20 = *ppbVar18 + 1;
    bVar6 = **ppbVar18;
  }
  else {
    pbVar23 = pbVar23 + -2;
    pbVar20 = pbVar21 + 2;
    bVar6 = pbVar21[1];
  }
  if (pbVar23 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar20 = *ppbVar18;
    pbVar23 = ppbVar18[1];
    *(uint *)(param_1 + 0x23) = (uint)*pbVar20;
  }
  else {
    *(uint *)(param_1 + 0x23) = (uint)*pbVar20;
  }
  pbVar23 = (byte *)((long)pbVar23 + -1);
  if (pbVar23 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar20 = *ppbVar18;
    pbVar23 = ppbVar18[1];
    iVar7 = (uint)*pbVar20 << 8;
    *(int *)((long)param_1 + 0x34) = iVar7;
  }
  else {
    pbVar20 = (byte *)((long)pbVar20 + 1);
    iVar7 = (uint)*pbVar20 << 8;
    *(int *)((long)param_1 + 0x34) = iVar7;
  }
  pbVar23 = (byte *)((long)pbVar23 + -1);
  if (pbVar23 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar20 = *ppbVar18;
    pbVar23 = ppbVar18[1];
    *(uint *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + (uint)*pbVar20;
  }
  else {
    pbVar20 = (byte *)((long)pbVar20 + 1);
    *(uint *)((long)param_1 + 0x34) = iVar7 + (uint)*pbVar20;
  }
  pbVar23 = pbVar23 + -1;
  if (pbVar23 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar20 = *ppbVar18;
    pbVar23 = ppbVar18[1];
    iVar7 = (uint)*pbVar20 << 8;
    *(int *)(param_1 + 6) = iVar7;
  }
  else {
    pbVar20 = pbVar20 + 1;
    iVar7 = (uint)*pbVar20 << 8;
    *(int *)(param_1 + 6) = iVar7;
  }
  if (pbVar23 == (byte *)0x1) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar21 = *ppbVar18 + 1;
    pbVar23 = ppbVar18[1] + -1;
    *(uint *)(param_1 + 6) = *(int *)(param_1 + 6) + (uint)**ppbVar18;
  }
  else {
    pbVar21 = pbVar20 + 2;
    pbVar23 = pbVar23 + -2;
    *(uint *)(param_1 + 6) = iVar7 + (uint)pbVar20[1];
  }
  if (pbVar23 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar21 = *ppbVar18;
    pbVar23 = ppbVar18[1];
  }
  lVar11 = *param_1;
  *(uint *)(param_1 + 7) = (uint)*pbVar21;
  *(undefined4 *)(lVar11 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
  uVar3 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(lVar11 + 0x28) = 0x66;
  *(undefined4 *)(lVar11 + 0x30) = uVar3;
  *(undefined4 *)(lVar11 + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
  *(undefined4 *)(lVar11 + 0x38) = *(undefined4 *)(param_1 + 7);
  (**(code **)(lVar11 + 8))(param_1,1);
  if (*(char *)(param_1[0x49] + 0x19) != '\0') {
    ppcVar9 = (code **)*param_1;
    *(undefined4 *)(ppcVar9 + 5) = 0x3d;
    (**ppcVar9)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || (*(int *)(param_1 + 6) == 0)) ||
     (iVar7 = *(int *)(param_1 + 7), iVar7 < 1)) {
    ppcVar9 = (code **)*param_1;
    *(undefined4 *)(ppcVar9 + 5) = 0x21;
    (**ppcVar9)(param_1);
    iVar7 = *(int *)(param_1 + 7);
  }
  if ((ulong)CONCAT11(bVar5,bVar6) - 8 == (long)(iVar7 * 3)) {
    lVar11 = param_1[0x24];
  }
  else {
    ppcVar9 = (code **)*param_1;
    *(undefined4 *)(ppcVar9 + 5) = 0xc;
    (**ppcVar9)(param_1);
    lVar11 = param_1[0x24];
  }
  if (lVar11 == 0) {
    lVar11 = (**(code **)param_1[1])(param_1,1,(long)*(int *)(param_1 + 7) * 0x60);
    param_1[0x24] = lVar11;
    iVar7 = *(int *)(param_1 + 7);
  }
  else {
    iVar7 = *(int *)(param_1 + 7);
  }
  pbVar10 = pbVar23 + -1;
  pbVar20 = pbVar21 + 1;
  if (iVar7 < 1) {
LAB_00d72864:
    lVar11 = param_1[0x49];
    *ppbVar18 = pbVar20;
    ppbVar18[1] = pbVar10;
    *(undefined *)(lVar11 + 0x19) = 1;
    return 1;
  }
  pbVar20 = pbVar21 + 1;
  pbVar10 = pbVar23 + -1;
  uVar19 = 0;
  uVar22 = 0xfffffffe;
LAB_00d726e4:
  if (pbVar10 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar20 = *ppbVar18;
    pbVar10 = ppbVar18[1];
    bVar5 = *pbVar20;
    puVar24 = (uint *)param_1[0x24];
  }
  else {
    bVar5 = *pbVar20;
    puVar24 = (uint *)param_1[0x24];
  }
  uVar15 = (uint)bVar5;
  if (uVar19 != 0) {
    uVar1 = (ulong)(uVar19 - 2) + 1;
    uVar17 = (ulong)uVar22 + 1 & 0x1fffffffe;
    puVar13 = puVar24;
    uVar16 = uVar19;
LAB_00d72714:
    puVar12 = puVar13;
    if (*puVar12 != uVar15) goto code_r0x00d72720;
    puVar13 = puVar24 + 0x18;
    uVar15 = *puVar24;
    if (uVar19 < 2) goto LAB_00d72848;
    if (uVar19 - 2 == 0) {
      uVar16 = 1;
      puVar24 = puVar13;
      uVar14 = uVar15;
      goto LAB_00d72830;
    }
    uVar16 = (uint)uVar1 | 1;
    puVar13 = puVar13 + (uVar1 & 0x1fffffffe) * 0x18;
    uVar14 = uVar15;
    do {
      uVar4 = puVar24[0x30];
      uVar2 = puVar24[0x18];
      if ((int)puVar24[0x18] <= (int)uVar15) {
        uVar2 = uVar15;
      }
      if ((int)uVar4 <= (int)uVar14) {
        uVar4 = uVar14;
      }
      uVar17 = uVar17 - 2;
      uVar15 = uVar2;
      uVar14 = uVar4;
      puVar24 = puVar24 + 0x30;
    } while (uVar17 != 0);
    if ((int)uVar2 <= (int)uVar4) {
      uVar15 = uVar4;
    }
    puVar24 = puVar13;
    uVar14 = uVar15;
    if (uVar1 != (uVar1 & 0x1fffffffe)) {
LAB_00d72830:
      do {
        puVar13 = puVar24 + 0x18;
        uVar16 = uVar16 + 1;
        uVar15 = *puVar24;
        if ((int)*puVar24 <= (int)uVar14) {
          uVar15 = uVar14;
        }
        puVar24 = puVar13;
        uVar14 = uVar15;
      } while (uVar19 != uVar16);
    }
LAB_00d72848:
    *puVar13 = uVar15 + 1;
    puVar13[1] = uVar19;
    puVar24 = puVar13;
    goto joined_r0x00d72854;
  }
  *puVar24 = uVar15;
  puVar24[1] = 0;
  goto joined_r0x00d72854;
code_r0x00d72720:
  puVar13 = puVar12 + 0x18;
  uVar16 = uVar16 - 1;
  if (uVar16 == 0) goto code_r0x00d7272c;
  goto LAB_00d72714;
code_r0x00d7272c:
  *puVar13 = uVar15;
  puVar12[0x19] = uVar19;
  puVar24 = puVar13;
joined_r0x00d72854:
  if (pbVar10 == (byte *)0x1) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar21 = *ppbVar18 + 1;
    bVar5 = **ppbVar18;
    pbVar10 = ppbVar18[1] + -1;
    puVar24[2] = (uint)(bVar5 >> 4);
    puVar24[3] = bVar5 & 0xf;
  }
  else {
    pbVar21 = pbVar20 + 2;
    bVar5 = pbVar20[1];
    pbVar10 = pbVar10 + -2;
    puVar24[2] = (uint)(bVar5 >> 4);
    puVar24[3] = bVar5 & 0xf;
  }
  if (pbVar10 == (byte *)0x0) {
    cVar8 = (*(code *)ppbVar18[3])(param_1);
    if (cVar8 == '\0') {
      return 0;
    }
    pbVar21 = *ppbVar18;
    pbVar10 = ppbVar18[1];
  }
  pbVar20 = pbVar21 + 1;
  lVar11 = *param_1;
  uVar15 = *puVar24;
  puVar24[4] = (uint)*pbVar21;
  *(undefined4 *)(lVar11 + 0x28) = 0x67;
  *(uint *)(lVar11 + 0x2c) = uVar15;
  *(uint *)(lVar11 + 0x30) = puVar24[2];
  *(uint *)(lVar11 + 0x34) = puVar24[3];
  *(uint *)(lVar11 + 0x38) = puVar24[4];
  (**(code **)(lVar11 + 8))(param_1,1);
  uVar19 = uVar19 + 1;
  pbVar10 = pbVar10 + -1;
  uVar22 = uVar22 + 1;
  if (*(int *)(param_1 + 7) <= (int)uVar19) goto LAB_00d72864;
  goto LAB_00d726e4;
}


