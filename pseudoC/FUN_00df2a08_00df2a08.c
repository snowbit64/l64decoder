// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df2a08
// Entry Point: 00df2a08
// Size: 532 bytes
// Signature: undefined FUN_00df2a08(void)


void FUN_00df2a08(long param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  
  pbVar26 = (byte *)(param_1 + 3);
  iVar31 = *param_5;
  iVar27 = 8;
  do {
    bVar8 = pbVar26[-4];
    bVar9 = pbVar26[-3];
    bVar2 = pbVar26[1];
    bVar3 = pbVar26[2];
    bVar10 = pbVar26[-2];
    iVar12 = (uint)bVar9 - (uint)bVar8;
    iVar1 = -iVar12;
    if (-1 < iVar12) {
      iVar1 = iVar12;
    }
    bVar4 = pbVar26[3];
    iVar13 = (uint)bVar2 - (uint)bVar3;
    bVar11 = pbVar26[-1];
    iVar12 = -iVar13;
    if (-1 < iVar13) {
      iVar12 = iVar13;
    }
    iVar14 = (uint)bVar10 - (uint)bVar9;
    iVar13 = -iVar14;
    if (-1 < iVar14) {
      iVar13 = iVar14;
    }
    iVar15 = (uint)bVar3 - (uint)bVar4;
    bVar5 = pbVar26[4];
    bVar6 = *pbVar26;
    iVar14 = -iVar15;
    if (-1 < iVar15) {
      iVar14 = iVar15;
    }
    iVar16 = (uint)bVar11 - (uint)bVar10;
    bVar7 = pbVar26[5];
    iVar15 = -iVar16;
    if (-1 < iVar16) {
      iVar15 = iVar16;
    }
    iVar17 = (uint)bVar4 - (uint)bVar5;
    iVar16 = -iVar17;
    if (-1 < iVar17) {
      iVar16 = iVar17;
    }
    iVar18 = (uint)bVar6 - (uint)bVar11;
    iVar17 = -iVar18;
    if (-1 < iVar18) {
      iVar17 = iVar18;
    }
    iVar19 = (uint)bVar5 - (uint)bVar7;
    iVar18 = -iVar19;
    if (-1 < iVar19) {
      iVar18 = iVar19;
    }
    uVar21 = iVar17 + iVar15 + iVar13 + iVar1;
    uVar30 = iVar18 + iVar16 + iVar14 + iVar12;
    uVar20 = uVar21;
    if (0xfe < uVar21) {
      uVar20 = 0xff;
    }
    iVar31 = iVar31 + uVar20;
    uVar20 = uVar30;
    if (0xfe < uVar30) {
      uVar20 = 0xff;
    }
    *param_5 = iVar31;
    param_5[1] = param_5[1] + uVar20;
    if ((((int)uVar21 < param_4) && ((int)uVar30 < param_4)) &&
       ((int)((uint)bVar2 - (uint)bVar6) < param_3)) {
      uVar21 = (uint)bVar6;
      uVar30 = (uint)bVar2;
      if ((int)(uVar21 - uVar30) < param_3) {
        uVar25 = (uint)bVar8;
        iVar31 = uVar30 + 4 + uVar21;
        uVar24 = (uint)bVar10;
        uVar23 = (uint)bVar9;
        uVar20 = (uint)bVar11;
        uVar28 = (uint)bVar3;
        uVar29 = (uint)bVar4;
        pbVar26[-3] = (byte)(uVar21 + uVar25 + (uint)bVar8 * 2 + uVar23 * 2 + uVar24 + uVar20 + 4 >>
                            3);
        uVar22 = (uint)bVar6;
        *pbVar26 = (byte)(uVar23 + uVar24 + uVar20 + uVar21 * 2 + uVar30 + uVar28 + uVar29 + 4 >> 3)
        ;
        uVar21 = (uint)bVar5;
        pbVar26[-2] = (byte)(iVar31 + uVar23 + uVar20 + (uVar24 + uVar25) * 2 >> 3);
        pbVar26[-1] = (byte)(uVar25 + uVar23 + uVar24 + uVar20 * 2 + uVar22 + uVar30 + uVar28 + 4 >>
                            3);
        pbVar26[1] = (byte)((uint)bVar10 + (uint)bVar11 + uVar22 + (uint)bVar2 * 2 + uVar28 + uVar29
                            + uVar21 + 4 >> 3);
        pbVar26[2] = (byte)(bVar11 + uVar22 + (uint)bVar2 + uVar28 * 2 + uVar29 + uVar21 +
                            (uint)bVar7 + 4 >> 3);
        pbVar26[3] = (byte)(iVar31 + (uint)bVar3 + uVar21 + (bVar7 + uVar29) * 2 >> 3);
        pbVar26[4] = (byte)(uVar30 + 4 + (uint)bVar3 + (uint)bVar4 + uVar21 * 2 + (uint)bVar7 * 3 >>
                           3);
        iVar31 = *param_5;
      }
    }
    iVar27 = iVar27 + -1;
    pbVar26 = pbVar26 + param_2;
  } while (iVar27 != 0);
  return;
}


