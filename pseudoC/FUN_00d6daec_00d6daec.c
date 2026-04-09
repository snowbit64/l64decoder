// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6daec
// Entry Point: 00d6daec
// Size: 280 bytes
// Signature: undefined FUN_00d6daec(void)


void FUN_00d6daec(long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  
  uVar13 = *(uint *)(param_1 + 0x30);
  uVar14 = *(uint *)(param_1 + 0x154);
  uVar15 = (ulong)uVar14;
  iVar6 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  if (0 < (int)(iVar6 * 2 - uVar13)) {
    if ((int)uVar14 < 1) {
      return;
    }
    plVar16 = param_3;
    do {
      memset((void *)(*plVar16 + (ulong)uVar13),
             (uint)*(byte *)((long)(void *)(*plVar16 + (ulong)uVar13) + -1),
             (ulong)(iVar6 * 2 + ~uVar13) + 1);
      uVar15 = uVar15 - 1;
      plVar16 = plVar16 + 1;
    } while (uVar15 != 0);
    uVar14 = *(uint *)(param_1 + 0x154);
  }
  if ((0 < (int)uVar14) && (iVar6 != 0)) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      uVar13 = 1;
      pbVar11 = (byte *)param_3[lVar9];
      pbVar12 = *(byte **)((long)param_3 + (lVar9 * 8 | 8U));
      puVar10 = *(undefined **)(param_4 + lVar8 * 8);
      iVar7 = iVar6;
      do {
        bVar4 = *pbVar11;
        iVar7 = iVar7 + -1;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 2;
        bVar5 = *pbVar12;
        pbVar2 = pbVar12 + 1;
        iVar3 = uVar13 + bVar4;
        uVar13 = uVar13 ^ 3;
        pbVar12 = pbVar12 + 2;
        *puVar10 = (char)(iVar3 + (uint)*pbVar1 + (uint)bVar5 + (uint)*pbVar2 >> 2);
        puVar10 = puVar10 + 1;
      } while (iVar7 != 0);
      lVar9 = lVar9 + 2;
      lVar8 = lVar8 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x154));
  }
  return;
}


