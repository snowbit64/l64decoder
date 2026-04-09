// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df4490
// Entry Point: 00df4490
// Size: 388 bytes
// Signature: undefined FUN_00df4490(void)


byte * FUN_00df4490(byte *param_1,byte **param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  
  bVar2 = *param_1;
  pbVar12 = *param_2;
  uVar4 = 1 << (ulong)(bVar2 & 0x1f);
  *pbVar12 = bVar2;
  bVar3 = *param_1;
  lVar6 = 8;
  if (bVar2 != 0) {
    lVar6 = (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3) + 8;
  }
  pbVar12[2] = param_1[2];
  *param_2 = pbVar12 + lVar6;
  if (bVar3 == 0) {
    pbVar12[1] = param_1[1];
  }
  else if (bVar3 != 0x1f) {
    uVar13 = 0;
    do {
      uVar14 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
      lVar6 = FUN_00df4490(*(undefined8 *)(param_1 + uVar14 + 8),param_2);
      uVar4 = (int)uVar13 + 1;
      uVar11 = (ulong)uVar4;
      iVar5 = 1 << (ulong)((uint)*param_1 - (uint)*(byte *)(lVar6 + 2) & 0x1f);
      *(long *)(pbVar12 + uVar14 + 8) = lVar6;
      if (1 < iVar5) {
        lVar8 = (long)(int)uVar4;
        lVar7 = (long)(iVar5 + (int)uVar13);
        uVar11 = lVar8 + 1;
        *(long *)(pbVar12 + (long)(int)uVar4 * 8 + 8) = lVar6;
        if ((long)uVar11 < lVar7) {
          uVar13 = (lVar7 - lVar8) - 2;
          if ((int)(uVar4 + (int)uVar13) < (int)uVar4 || uVar13 >> 0x20 != 0) {
            lVar9 = lVar8 << 0x20;
            do {
              lVar1 = lVar9 >> 0x1d;
              lVar6 = lVar8 + 1;
              lVar9 = lVar9 + 0x100000000;
              *(undefined8 *)(pbVar12 + lVar8 * 8 + 0x10) = *(undefined8 *)(pbVar12 + lVar1 + 8);
              lVar1 = lVar8 + 2;
              lVar8 = lVar6;
            } while (lVar1 < lVar7);
          }
          else {
            uVar10 = *(undefined8 *)(pbVar12 + lVar8 * 8 + 8);
            do {
              lVar6 = lVar8 + 1;
              *(undefined8 *)(pbVar12 + lVar8 * 8 + 0x10) = uVar10;
              lVar9 = lVar8 + 2;
              lVar8 = lVar6;
            } while (lVar9 < lVar7);
          }
          uVar11 = lVar6 + 1;
        }
      }
      uVar13 = uVar11 & 0xffffffff;
    } while ((int)uVar11 < 1 << (ulong)(bVar3 & 0x1f));
  }
  return pbVar12;
}


