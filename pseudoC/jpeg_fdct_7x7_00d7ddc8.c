// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_7x7
// Entry Point: 00d7ddc8
// Size: 732 bytes
// Signature: undefined jpeg_fdct_7x7(void)


void jpeg_fdct_7x7(undefined8 *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
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
  long lVar16;
  long lVar17;
  
  lVar9 = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar9) + (param_3 & 0xffffffff));
    piVar2 = (int *)((long)param_1 + lVar9 * 4);
    lVar9 = lVar9 + 8;
    lVar5 = (ulong)pbVar1[6] + (ulong)*pbVar1;
    lVar7 = (ulong)*pbVar1 - (ulong)pbVar1[6];
    bVar3 = pbVar1[3];
    lVar14 = (ulong)pbVar1[5] + (ulong)pbVar1[1];
    lVar10 = (ulong)pbVar1[1] - (ulong)pbVar1[5];
    lVar17 = (ulong)pbVar1[4] + (ulong)pbVar1[2];
    lVar12 = (ulong)pbVar1[2] - (ulong)pbVar1[4];
    lVar13 = (lVar14 - lVar17) * 0xa12;
    lVar16 = (lVar5 - lVar14) * 0x1c37 + 0x400;
    lVar6 = (lVar17 + lVar5 + (ulong)bVar3 * -4) * 0xb50;
    lVar15 = (lVar10 + lVar7) * 0x1def;
    lVar8 = (lVar12 + lVar7) * 0x13a3 + 0x400;
    piVar2[6] = (int)((ulong)(lVar16 + (lVar5 - lVar17) * -0x1d76 + lVar6) >> 0xb);
    lVar11 = (lVar12 + lVar10) * -0x2c1f;
    *piVar2 = ((uint)bVar3 + (int)lVar14 + (int)(lVar17 + lVar5)) * 4 + -0xe00;
    piVar2[1] = (int)((ulong)(lVar8 + (lVar7 - lVar10) * -0x573 + lVar15) >> 0xb);
    piVar2[2] = (int)(lVar13 + (lVar5 - lVar17) * 0x1d76 + lVar6 + 0x400U >> 0xb);
    piVar2[3] = (int)(lVar11 + (lVar7 - lVar10) * 0x573 + lVar15 + 0x400U >> 0xb);
    piVar2[4] = (int)(lVar16 + lVar13 + (lVar14 + (ulong)(uint)bVar3 * -2) * -0x16a1 >> 0xb);
    piVar2[5] = (int)((ulong)(lVar8 + lVar12 * 0x3bde + lVar11) >> 0xb);
  } while (lVar9 != 0x38);
  lVar9 = 0;
  do {
    piVar2 = (int *)((long)param_1 + lVar9);
    lVar9 = lVar9 + 4;
    lVar10 = (long)(piVar2[0x30] + *piVar2);
    lVar14 = (long)piVar2[0x18];
    lVar17 = (long)(piVar2[0x28] + piVar2[8]);
    lVar12 = (long)(piVar2[0x20] + piVar2[0x10]);
    iVar4 = piVar2[0x10] - piVar2[0x20];
    lVar5 = (long)(*piVar2 - piVar2[0x30]);
    lVar13 = (lVar17 - lVar12) * 0xd27;
    lVar6 = (long)(piVar2[8] - piVar2[0x28]);
    lVar11 = (lVar10 - lVar17) * 0x24da + 0x4000;
    lVar8 = (lVar12 + lVar10 + lVar14 * -4) * 0xec7;
    *piVar2 = (int)((lVar14 + lVar17 + lVar12 + lVar10) * 0x29cc + 0x4000U >> 0xf);
    piVar2[0x20] = (int)((ulong)(lVar11 + lVar13 + (lVar17 + lVar14 * -2) * -0x1d8e) >> 0xf);
    lVar14 = (iVar4 + lVar5) * 0x19a5 + 0x4000;
    lVar7 = (iVar4 + lVar6) * -0x39a0;
    lVar17 = (lVar6 + lVar5) * 0x2719;
    piVar2[0x10] = (int)(lVar13 + (lVar10 - lVar12) * 0x267a + lVar8 + 0x4000U >> 0xf);
    piVar2[0x30] = (int)((ulong)(lVar11 + (lVar10 - lVar12) * -0x267a + lVar8) >> 0xf);
    piVar2[8] = (int)((ulong)(lVar14 + (lVar5 - lVar6) * -0x71e + lVar17) >> 0xf);
    piVar2[0x18] = (int)(lVar7 + (lVar5 - lVar6) * 0x71e + lVar17 + 0x4000U >> 0xf);
    piVar2[0x28] = (int)((ulong)(lVar14 + (long)iVar4 * 0x4e31 + lVar7) >> 0xf);
  } while ((int)lVar9 != 0x1c);
  return;
}


