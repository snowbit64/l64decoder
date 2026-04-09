// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d783c0
// Entry Point: 00d783c0
// Size: 212 bytes
// Signature: undefined FUN_00d783c0(void)


void FUN_00d783c0(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  if ((0 < param_5) && (uVar6 = *(uint *)(param_1 + 0x74), uVar6 != 0)) {
    lVar14 = *(long *)(param_1 + 0x268);
    lVar13 = *(long *)(param_1 + 0x198);
    lVar3 = *(long *)(lVar14 + 0x10);
    lVar5 = *(long *)(lVar14 + 0x18);
    lVar4 = *(long *)(lVar14 + 0x20);
    lVar14 = *(long *)(lVar14 + 0x28);
    do {
      lVar9 = (ulong)param_3 * 8;
      param_3 = param_3 + 1;
      puVar12 = (undefined *)*param_4;
      puVar10 = *(undefined **)(param_2[3] + lVar9);
      uVar11 = (ulong)uVar6;
      pbVar15 = *(byte **)(*param_2 + lVar9);
      pbVar16 = *(byte **)(param_2[1] + lVar9);
      pbVar17 = *(byte **)(param_2[2] + lVar9);
      do {
        bVar7 = *pbVar17;
        bVar8 = *pbVar16;
        uVar11 = uVar11 - 1;
        uVar2 = *pbVar15 ^ 0xff;
        *puVar12 = *(undefined *)(lVar13 + (int)(uVar2 - *(int *)(lVar3 + (ulong)bVar7 * 4)));
        puVar12[1] = *(undefined *)
                      (lVar13 + (int)(uVar2 - (int)((ulong)(*(long *)(lVar4 + (ulong)bVar7 * 8) +
                                                           *(long *)(lVar14 + (ulong)bVar8 * 8)) >>
                                                   0x10)));
        puVar12[2] = *(undefined *)(lVar13 + (int)(uVar2 - *(int *)(lVar5 + (ulong)bVar8 * 4)));
        puVar12[3] = *puVar10;
        puVar12 = puVar12 + 4;
        puVar10 = puVar10 + 1;
        pbVar15 = pbVar15 + 1;
        pbVar16 = pbVar16 + 1;
        pbVar17 = pbVar17 + 1;
      } while (uVar11 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


