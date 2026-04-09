// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adler32_z
// Entry Point: 00e25280
// Size: 816 bytes
// Signature: undefined adler32_z(void)


ulong adler32_z(ulong param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  bool bVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  byte *pbVar28;
  long lVar29;
  
  uVar23 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar24 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar24 = param_1;
    }
    uVar25 = (uVar24 + uVar23) * 0x10000;
    uVar16 = uVar25 - 0xfff10000;
    if (uVar24 + uVar23 < 0xfff1) {
      uVar16 = uVar25;
    }
    return uVar16 | uVar24;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      do {
        param_3 = param_3 - 1;
        param_1 = param_1 + *param_2;
        uVar23 = param_1 + uVar23;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar23;
    lVar26 = SUB168(auVar17 * ZEXT816(0xf00e10d2fc5cd),8);
    uVar23 = uVar23 + (lVar26 + (uVar23 - lVar26 >> 1) >> 0xf) * -0xfff1;
    uVar24 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar24 = param_1;
    }
LAB_00e25330:
    return uVar24 | uVar23 << 0x10;
  }
  if (param_3 >> 4 < 0x15b) {
LAB_00e25484:
    do {
      param_3 = param_3 - 0x10;
      lVar26 = param_1 + *param_2;
      lVar29 = lVar26 + (ulong)param_2[1];
      lVar3 = lVar29 + (ulong)param_2[2];
      lVar4 = lVar3 + (ulong)param_2[3];
      lVar5 = lVar4 + (ulong)param_2[4];
      lVar6 = lVar5 + (ulong)param_2[5];
      lVar7 = lVar6 + (ulong)param_2[6];
      lVar8 = lVar7 + (ulong)param_2[7];
      lVar9 = lVar8 + (ulong)param_2[8];
      lVar10 = lVar9 + (ulong)param_2[9];
      lVar11 = lVar10 + (ulong)param_2[10];
      lVar12 = lVar11 + (ulong)param_2[0xb];
      lVar13 = lVar12 + (ulong)param_2[0xc];
      lVar14 = lVar13 + (ulong)param_2[0xd];
      pbVar28 = param_2 + 0xf;
      lVar15 = lVar14 + (ulong)param_2[0xe];
      param_2 = param_2 + 0x10;
      param_1 = lVar15 + (ulong)*pbVar28;
      uVar23 = lVar26 + uVar23 + lVar29 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
               lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
    } while (0xf < param_3);
    if (param_3 == 0) goto LAB_00e2556c;
  }
  else {
    do {
      param_3 = param_3 - 0x15b0;
      iVar27 = -0x15b;
      pbVar28 = param_2;
      do {
        bVar22 = iVar27 != -1;
        iVar27 = iVar27 + 1;
        lVar26 = param_1 + *pbVar28;
        lVar29 = lVar26 + (ulong)pbVar28[1];
        lVar3 = lVar29 + (ulong)pbVar28[2];
        lVar4 = lVar3 + (ulong)pbVar28[3];
        lVar5 = lVar4 + (ulong)pbVar28[4];
        lVar6 = lVar5 + (ulong)pbVar28[5];
        lVar7 = lVar6 + (ulong)pbVar28[6];
        lVar8 = lVar7 + (ulong)pbVar28[7];
        pbVar1 = pbVar28 + 0xe;
        lVar9 = lVar8 + (ulong)pbVar28[8];
        lVar10 = lVar9 + (ulong)pbVar28[9];
        lVar11 = lVar10 + (ulong)pbVar28[10];
        lVar12 = lVar11 + (ulong)pbVar28[0xb];
        lVar13 = lVar12 + (ulong)pbVar28[0xc];
        pbVar2 = pbVar28 + 0xf;
        lVar14 = lVar13 + (ulong)pbVar28[0xd];
        pbVar28 = pbVar28 + 0x10;
        lVar15 = lVar14 + (ulong)*pbVar1;
        param_1 = lVar15 + (ulong)*pbVar2;
        uVar23 = lVar26 + uVar23 + lVar29 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
      } while (bVar22);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = param_1;
      lVar26 = SUB168(auVar18 * ZEXT816(0xf00e10d2fc5cd),8);
      param_2 = param_2 + 0x15b0;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar23;
      lVar29 = SUB168(auVar19 * ZEXT816(0xf00e10d2fc5cd),8);
      param_1 = param_1 + (lVar26 + (param_1 - lVar26 >> 1) >> 0xf) * -0xfff1;
      uVar23 = uVar23 + (lVar29 + (uVar23 - lVar29 >> 1) >> 0xf) * -0xfff1;
    } while (0x15a < param_3 >> 4);
    uVar24 = param_1;
    if (param_3 == 0) goto LAB_00e25330;
    if (0xf < param_3) goto LAB_00e25484;
  }
  do {
    param_3 = param_3 - 1;
    param_1 = param_1 + *param_2;
    uVar23 = param_1 + uVar23;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
LAB_00e2556c:
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_1;
  lVar29 = SUB168(auVar20 * ZEXT816(0xf00e10d2fc5cd),8);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar23;
  lVar26 = SUB168(auVar21 * ZEXT816(0xf00e10d2fc5cd),8);
  return param_1 + (lVar29 + (param_1 - lVar29 >> 1) >> 0xf) * -0xfff1 |
         (uVar23 + (lVar26 + (uVar23 - lVar26 >> 1) >> 0xf) * -0xfff1) * 0x10000;
}


