// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e7a768
// Entry Point: 00e7a768
// Size: 400 bytes
// Signature: undefined FUN_00e7a768(void)


void FUN_00e7a768(short *param_1,short *param_2,undefined8 *param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  psVar8 = param_2 + 3;
  sVar9 = *param_2;
  sVar11 = param_2[1];
  sVar10 = param_2[2];
  if ((int)param_4 < 4) {
    sVar12 = 0;
    uVar14 = 0;
    uVar16 = 1;
    if ((int)param_4 < 1) goto LAB_00e7a888;
  }
  else {
    iVar19 = *(int *)param_3;
    iVar18 = *(int *)((long)param_3 + 4);
    iVar15 = *(int *)(param_3 + 1);
    iVar17 = *(int *)((long)param_3 + 0xc);
    iVar13 = 0;
    do {
      sVar1 = *param_1;
      iVar5 = (int)sVar9;
      sVar12 = *psVar8;
      iVar6 = (int)sVar11;
      iVar7 = (int)sVar10;
      sVar9 = psVar8[1];
      sVar2 = param_1[1];
      sVar11 = psVar8[2];
      sVar3 = param_1[3];
      sVar4 = param_1[2];
      sVar10 = psVar8[3];
      psVar8 = psVar8 + 4;
      iVar13 = iVar13 + 4;
      param_1 = param_1 + 4;
      iVar19 = iVar19 + sVar1 * iVar5 + sVar2 * iVar6 + sVar4 * iVar7 + (int)sVar3 * (int)sVar12;
      iVar18 = iVar18 + sVar1 * iVar6 + sVar2 * iVar7 + (int)sVar4 * (int)sVar12 +
               (int)sVar3 * (int)sVar9;
      iVar15 = iVar15 + sVar1 * iVar7 + (int)sVar2 * (int)sVar12 + (int)sVar4 * (int)sVar9 +
               (int)sVar3 * (int)sVar11;
      iVar17 = iVar17 + (int)sVar12 * (int)sVar1 + (int)sVar9 * (int)sVar2 +
               (int)sVar11 * (int)sVar4 + (int)sVar10 * (int)sVar3;
    } while (iVar13 < (int)(param_4 - 3));
    uVar14 = param_4 & 0xfffffffc;
    *(int *)param_3 = iVar19;
    *(int *)((long)param_3 + 4) = iVar18;
    *(int *)(param_3 + 1) = iVar15;
    *(int *)((long)param_3 + 0xc) = iVar17;
    uVar16 = uVar14 | 1;
    if ((int)param_4 <= (int)uVar14) goto LAB_00e7a888;
  }
  sVar1 = *param_1;
  param_1 = param_1 + 1;
  sVar12 = *psVar8;
  param_3[1] = CONCAT44((int)((ulong)param_3[1] >> 0x20) + (int)sVar1 * (int)sVar12,
                        (int)param_3[1] + (int)sVar1 * (int)sVar10);
  *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20) + (int)sVar1 * (int)sVar11,
                      (int)*param_3 + (int)sVar1 * (int)sVar9);
  psVar8 = psVar8 + 1;
LAB_00e7a888:
  if ((int)uVar16 < (int)param_4) {
    sVar1 = *param_1;
    param_1 = param_1 + 1;
    sVar9 = *psVar8;
    param_3[1] = CONCAT44((int)((ulong)param_3[1] >> 0x20) + (int)sVar1 * (int)sVar9,
                          (int)param_3[1] + (int)sVar1 * (int)sVar12);
    *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20) + (int)sVar1 * (int)sVar10,
                        (int)*param_3 + (int)sVar1 * (int)sVar11);
    psVar8 = psVar8 + 1;
  }
  if ((int)(uVar14 | 2) < (int)param_4) {
    sVar11 = *param_1;
    param_3[1] = CONCAT44((int)((ulong)param_3[1] >> 0x20) + (int)sVar11 * (int)*psVar8,
                          (int)param_3[1] + (int)sVar11 * (int)sVar9);
    *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20) + (int)sVar11 * (int)sVar12,
                        (int)*param_3 + (int)sVar11 * (int)sVar10);
    return;
  }
  return;
}


