// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d617bc
// Entry Point: 00d617bc
// Size: 276 bytes
// Signature: undefined FUN_00d617bc(void)


void FUN_00d617bc(long param_1,byte **param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  
  if ((0 < param_5) && (uVar4 = *(uint *)(param_1 + 0x30), uVar4 != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x208) + 0x10);
    do {
      pbVar15 = *param_2;
      lVar12 = (ulong)param_4 * 8;
      puVar9 = *(undefined **)(*param_3 + lVar12);
      puVar10 = *(undefined **)(param_3[1] + lVar12);
      puVar11 = *(undefined **)(param_3[2] + lVar12);
      pbVar13 = *(byte **)(param_3[3] + lVar12);
      uVar14 = (ulong)uVar4;
      do {
        uVar14 = uVar14 - 1;
        bVar5 = pbVar15[1];
        bVar6 = pbVar15[2];
        uVar7 = ~(uint)*pbVar15;
        *pbVar13 = pbVar15[3];
        uVar2 = bVar5 ^ 0xff;
        uVar3 = bVar6 ^ 0xff;
        pbVar15 = pbVar15 + 4;
        *puVar9 = (char)((uint)((int)*(undefined8 *)(lVar8 + (ulong)(uVar2 | 0x100) * 8) +
                                (int)*(undefined8 *)(lVar8 + ((ulong)uVar7 & 0xff) * 8) +
                               (int)*(undefined8 *)(lVar8 + (ulong)(uVar3 | 0x200) * 8)) >> 0x10);
        *puVar10 = (char)((uint)((int)*(undefined8 *)(lVar8 + (ulong)(uVar2 | 0x400) * 8) +
                                 (int)*(undefined8 *)(lVar8 + (ulong)(uVar7 & 0xff | 0x300) * 8) +
                                (int)*(undefined8 *)(lVar8 + (ulong)(uVar3 | 0x500) * 8)) >> 0x10);
        *puVar11 = (char)((uint)((int)*(undefined8 *)(lVar8 + (ulong)(uVar2 | 0x600) * 8) +
                                 (int)*(undefined8 *)(lVar8 + (ulong)(uVar7 & 0xff | 0x500) * 8) +
                                (int)*(undefined8 *)(lVar8 + (ulong)(uVar3 | 0x700) * 8)) >> 0x10);
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        pbVar13 = pbVar13 + 1;
      } while (uVar14 != 0);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}


