// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61674
// Entry Point: 00d61674
// Size: 208 bytes
// Signature: undefined FUN_00d61674(void)


void FUN_00d61674(long param_1,byte **param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  byte *pbVar14;
  
  if ((0 < param_5) && (uVar6 = *(uint *)(param_1 + 0x30), uVar6 != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x208) + 0x10);
    do {
      lVar11 = (ulong)param_4 * 8;
      pbVar14 = *param_2;
      puVar9 = *(undefined **)(*param_3 + lVar11);
      puVar10 = *(undefined **)(param_3[1] + lVar11);
      puVar12 = *(undefined **)(param_3[2] + lVar11);
      uVar13 = (ulong)uVar6;
      do {
        bVar7 = *pbVar14;
        uVar13 = uVar13 - 1;
        pbVar2 = pbVar14 + 1;
        pbVar3 = pbVar14 + 2;
        pbVar14 = pbVar14 + 3;
        puVar4 = (undefined8 *)(lVar8 + (ulong)bVar7 * 8);
        lVar11 = lVar8 + (ulong)*pbVar2 * 8;
        lVar5 = lVar8 + (ulong)*pbVar3 * 8;
        *puVar9 = (char)((uint)(*(int *)(lVar11 + 0x800) + (int)*puVar4 + *(int *)(lVar5 + 0x1000))
                        >> 0x10);
        *puVar10 = (char)((uint)(*(int *)(lVar11 + 0x2000) + *(int *)(puVar4 + 0x300) +
                                *(int *)(lVar5 + 0x2800)) >> 0x10);
        *puVar12 = (char)((uint)(*(int *)(lVar11 + 0x3000) + *(int *)(puVar4 + 0x500) +
                                *(int *)(lVar5 + 0x3800)) >> 0x10);
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar13 != 0);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


