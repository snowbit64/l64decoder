// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3ec50
// Entry Point: 00d3ec50
// Size: 340 bytes
// Signature: undefined FUN_00d3ec50(void)


undefined4 FUN_00d3ec50(long param_1,byte **param_2,byte *param_3,ushort **param_4,ushort *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ushort *puVar8;
  ushort *puVar9;
  byte *pbVar10;
  undefined4 uVar11;
  
  pbVar10 = *param_2;
  puVar8 = *param_4;
  bVar7 = pbVar10 < param_3;
  if ((bVar7) && (puVar8 < param_5)) {
    puVar9 = puVar8;
    do {
      bVar5 = *pbVar10;
      cVar6 = *(char *)(param_1 + 0x88 + (ulong)bVar5);
      if (cVar6 == '\a') {
        if ((long)param_5 - (long)puVar9 < 4) {
          *param_2 = pbVar10;
          *param_4 = puVar9;
          return 2;
        }
        if ((long)param_3 - (long)pbVar10 < 4) {
LAB_00d3ed84:
          *param_2 = pbVar10;
          *param_4 = puVar9;
          return 1;
        }
        pbVar1 = pbVar10 + 1;
        pbVar3 = pbVar10 + 2;
        pbVar2 = pbVar10 + 3;
        pbVar10 = pbVar10 + 4;
        uVar4 = (bVar5 & 7) << 0x12 | (*pbVar1 & 0x3f) << 0xc | (*pbVar3 & 0x3f) << 6 |
                *pbVar2 & 0x3f;
        *puVar9 = (ushort)(uVar4 + 0xff0000 >> 10) | 0xd800;
        puVar9[1] = (ushort)uVar4 & 0x3ff | 0xdc00;
        puVar8 = puVar9 + 2;
      }
      else if (cVar6 == '\x06') {
        if ((long)param_3 - (long)pbVar10 < 3) goto LAB_00d3ed84;
        pbVar1 = pbVar10 + 1;
        pbVar3 = pbVar10 + 2;
        pbVar10 = pbVar10 + 3;
        puVar8 = puVar9 + 1;
        *puVar9 = (ushort)bVar5 << 0xc | (ushort)((*pbVar1 & 0x3f) << 6) | *pbVar3 & 0x3f;
      }
      else if (cVar6 == '\x05') {
        if ((long)param_3 - (long)pbVar10 < 2) goto LAB_00d3ed84;
        pbVar1 = pbVar10 + 1;
        pbVar10 = pbVar10 + 2;
        puVar8 = puVar9 + 1;
        *puVar9 = *pbVar1 & 0x3f | (ushort)((bVar5 & 0x1f) << 6);
      }
      else {
        pbVar10 = pbVar10 + 1;
        puVar8 = puVar9 + 1;
        *puVar9 = (ushort)bVar5;
      }
      bVar7 = pbVar10 < param_3;
    } while ((bVar7) && (puVar9 = puVar8, puVar8 < param_5));
  }
  uVar11 = 2;
  if (!bVar7) {
    uVar11 = 0;
  }
  *param_2 = pbVar10;
  *param_4 = puVar8;
  return uVar11;
}


