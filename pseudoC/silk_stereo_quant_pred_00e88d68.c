// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_quant_pred
// Entry Point: 00e88d68
// Size: 632 bytes
// Signature: undefined silk_stereo_quant_pred(void)


void silk_stereo_quant_pred(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar13 = 0;
  iVar9 = 0;
  uVar8 = 0x7fffffff;
  sVar12 = -0x35a4;
  sVar7 = sVar12;
  do {
    iVar11 = (int)sVar7;
    sVar7 = (&DAT_00564d88)[uVar13];
    iVar3 = (sVar7 - iVar11) * 0x199a >> 0x10;
    uVar4 = *param_1 - (iVar3 + iVar11);
    uVar5 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar5 = uVar4;
    }
    if (uVar8 <= uVar5) {
      uVar13 = (ulong)*param_2;
      iVar10 = iVar9;
      goto LAB_00e88e80;
    }
    *param_2 = (byte)uVar13;
    param_2[1] = 0;
    iVar9 = iVar3 * 3 + iVar11;
    uVar4 = *param_1 - iVar9;
    uVar8 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar8 = uVar4;
    }
    iVar10 = iVar3 + iVar11;
    if (uVar5 <= uVar8) goto LAB_00e88e80;
    param_2[1] = 1;
    iVar1 = iVar3 * 5 + iVar11;
    uVar4 = *param_1 - iVar1;
    uVar5 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar5 = uVar4;
    }
    iVar10 = iVar9;
    if (uVar8 <= uVar5) goto LAB_00e88e80;
    param_2[1] = 2;
    iVar2 = iVar3 * 7 + iVar11;
    uVar8 = *param_1 - iVar2;
    uVar4 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    iVar10 = iVar1;
    if (uVar5 <= uVar4) goto LAB_00e88e80;
    param_2[1] = 3;
    iVar9 = iVar3 * 9 + iVar11;
    uVar5 = *param_1 - iVar9;
    uVar8 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar8 = uVar5;
    }
    iVar10 = iVar2;
    if (uVar4 <= uVar8) goto LAB_00e88e80;
    uVar13 = uVar13 + 1;
    param_2[1] = 4;
  } while (uVar13 != 0xf);
  uVar13 = 0xe;
  iVar10 = iVar9;
LAB_00e88e80:
  uVar14 = 0;
  uVar8 = 0x7fffffff;
  uVar5 = (char)uVar13 * 0x56;
  bVar6 = ((byte)(uVar5 >> 0xf) & 1) + (char)(uVar5 >> 8);
  param_2[2] = bVar6;
  *param_2 = bVar6 * -3 + (char)uVar13;
  *param_1 = iVar10;
  do {
    iVar3 = (int)sVar12;
    sVar12 = (&DAT_00564d88)[uVar14];
    iVar9 = (sVar12 - iVar3) * 0x199a >> 0x10;
    uVar4 = param_1[1] - (iVar9 + iVar3);
    uVar5 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar5 = uVar4;
    }
    if (uVar8 <= uVar5) {
      uVar14 = (ulong)param_2[3];
      iVar11 = iVar10;
      goto LAB_00e88fac;
    }
    param_2[3] = (byte)uVar14;
    param_2[4] = 0;
    iVar10 = iVar9 * 3 + iVar3;
    uVar4 = param_1[1] - iVar10;
    uVar8 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar8 = uVar4;
    }
    iVar11 = iVar9 + iVar3;
    if (uVar5 <= uVar8) goto LAB_00e88fac;
    param_2[4] = 1;
    iVar1 = iVar9 * 5 + iVar3;
    uVar4 = param_1[1] - iVar1;
    uVar5 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar5 = uVar4;
    }
    iVar11 = iVar10;
    if (uVar8 <= uVar5) goto LAB_00e88fac;
    param_2[4] = 2;
    iVar2 = iVar9 * 7 + iVar3;
    uVar8 = param_1[1] - iVar2;
    uVar4 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    iVar11 = iVar1;
    if (uVar5 <= uVar4) goto LAB_00e88fac;
    param_2[4] = 3;
    iVar10 = iVar9 * 9 + iVar3;
    uVar5 = param_1[1] - iVar10;
    uVar8 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar8 = uVar5;
    }
    iVar11 = iVar2;
    if (uVar4 <= uVar8) goto LAB_00e88fac;
    uVar14 = uVar14 + 1;
    param_2[4] = 4;
  } while (uVar14 != 0xf);
  uVar14 = 0xe;
  iVar11 = iVar10;
LAB_00e88fac:
  uVar8 = (char)uVar14 * 0x56;
  bVar6 = ((byte)(uVar8 >> 0xf) & 1) + (char)(uVar8 >> 8);
  param_2[5] = bVar6;
  param_2[3] = bVar6 * -3 + (char)uVar14;
  *param_1 = *param_1 - iVar11;
  param_1[1] = iVar11;
  return;
}


