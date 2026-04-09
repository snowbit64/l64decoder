// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d77f30
// Entry Point: 00d77f30
// Size: 188 bytes
// Signature: undefined FUN_00d77f30(void)


void FUN_00d77f30(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  
  if ((0 < param_5) && (uVar5 = *(uint *)(param_1 + 0x74), uVar5 != 0)) {
    lVar11 = *(long *)(param_1 + 0x268);
    lVar10 = *(long *)(param_1 + 0x198);
    lVar2 = *(long *)(lVar11 + 0x10);
    lVar4 = *(long *)(lVar11 + 0x18);
    lVar3 = *(long *)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    do {
      lVar14 = (ulong)param_3 * 8;
      param_3 = param_3 + 1;
      puVar9 = (undefined *)*param_4;
      uVar8 = (ulong)uVar5;
      pbVar12 = *(byte **)(*param_2 + lVar14);
      pbVar13 = *(byte **)(param_2[1] + lVar14);
      pbVar15 = *(byte **)(param_2[2] + lVar14);
      do {
        bVar6 = *pbVar15;
        uVar16 = (ulong)*pbVar12;
        bVar7 = *pbVar13;
        uVar8 = uVar8 - 1;
        *puVar9 = *(undefined *)(lVar10 + (long)*(int *)(lVar2 + (ulong)bVar6 * 4) + uVar16);
        puVar9[1] = *(undefined *)
                     (lVar10 + uVar16 + (long)(int)((ulong)(*(long *)(lVar3 + (ulong)bVar6 * 8) +
                                                           *(long *)(lVar11 + (ulong)bVar7 * 8)) >>
                                                   0x10));
        puVar9[2] = *(undefined *)(lVar10 + (long)*(int *)(lVar4 + (ulong)bVar7 * 4) + uVar16);
        puVar9 = puVar9 + 3;
        pbVar12 = pbVar12 + 1;
        pbVar13 = pbVar13 + 1;
        pbVar15 = pbVar15 + 1;
      } while (uVar8 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


