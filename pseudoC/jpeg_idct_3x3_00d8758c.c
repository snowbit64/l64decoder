// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_3x3
// Entry Point: 00d8758c
// Size: 512 bytes
// Signature: undefined jpeg_idct_3x3(void)


void jpeg_idct_3x3(long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  
  piVar18 = *(int **)(param_2 + 0x58);
  iVar7 = piVar18[9];
  sVar9 = param_3[0x11];
  iVar8 = piVar18[0x11];
  sVar10 = param_3[9];
  param_5 = param_5 & 0xffffffff;
  uVar4 = *piVar18 * (int)*param_3 * 0x2000 | 0x400;
  sVar11 = param_3[0x12];
  sVar12 = param_3[10];
  lVar14 = *(long *)(param_1 + 0x198) + -0x180;
  uVar5 = (long)(piVar18[1] * (int)param_3[1]) << 0xd | 0x400;
  iVar17 = piVar18[0x12];
  iVar13 = piVar18[10];
  iVar16 = uVar4 + piVar18[0x10] * (int)param_3[0x10] * 0x16a1;
  puVar1 = (undefined *)(*param_4 + param_5);
  uVar6 = (long)(piVar18[2] * (int)param_3[2]) << 0xd | 0x400;
  lVar22 = uVar5 + (long)iVar8 * (long)sVar9 * 0x16a1;
  lVar20 = uVar6 + (long)iVar17 * (long)sVar11 * 0x16a1;
  uVar2 = (piVar18[8] * (int)param_3[8] * 0x2731 + iVar16) * 4 + 0x8020000U & 0xffffe000;
  iVar15 = (int)((ulong)((long)iVar7 * (long)sVar10 * 0x2731 + lVar22) >> 0xb);
  iVar23 = (int)((ulong)((long)iVar13 * (long)sVar12 * 0x2731 + lVar20) >> 0xb);
  iVar21 = uVar2 + iVar23 * 0x16a1;
  uVar4 = (uVar4 + piVar18[0x10] * (int)param_3[0x10] * -0x2d42) * 4 + 0x8020000 & 0xffffe000;
  uVar3 = (iVar16 + piVar18[8] * (int)param_3[8] * -0x2731) * 4 + 0x8020000U & 0xffffe000;
  *puVar1 = *(undefined *)(lVar14 + ((ulong)((uint)(iVar21 + iVar15 * 0x2731) >> 0x12) & 0x3ff));
  iVar19 = (int)(uVar5 + (long)iVar8 * (long)sVar9 * -0x2d42 >> 0xb);
  iVar16 = (int)((ulong)(lVar22 + (long)iVar7 * (long)sVar10 * -0x2731) >> 0xb);
  puVar1[2] = *(undefined *)(lVar14 + ((ulong)((uint)(iVar21 + iVar15 * -0x2731) >> 0x12) & 0x3ff));
  iVar21 = (int)(uVar6 + (long)iVar17 * (long)sVar11 * -0x2d42 >> 0xb);
  iVar7 = uVar4 + iVar21 * 0x16a1;
  iVar17 = (int)((ulong)(lVar20 + (long)iVar13 * (long)sVar12 * -0x2731) >> 0xb);
  iVar8 = uVar3 + iVar17 * 0x16a1;
  puVar1[1] = *(undefined *)(lVar14 + ((ulong)(uVar2 + iVar23 * -0x2d42 >> 0x12) & 0x3ff));
  puVar1 = (undefined *)(param_4[1] + param_5);
  *puVar1 = *(undefined *)(lVar14 + ((ulong)((uint)(iVar7 + iVar19 * 0x2731) >> 0x12) & 0x3ff));
  puVar1[2] = *(undefined *)(lVar14 + ((ulong)((uint)(iVar7 + iVar19 * -0x2731) >> 0x12) & 0x3ff));
  puVar1[1] = *(undefined *)(lVar14 + ((ulong)(uVar4 + iVar21 * -0x2d42 >> 0x12) & 0x3ff));
  puVar1 = (undefined *)(param_4[2] + param_5);
  *puVar1 = *(undefined *)(lVar14 + ((ulong)((uint)(iVar8 + iVar16 * 0x2731) >> 0x12) & 0x3ff));
  puVar1[2] = *(undefined *)(lVar14 + ((ulong)((uint)(iVar8 + iVar16 * -0x2731) >> 0x12) & 0x3ff));
  puVar1[1] = *(undefined *)(lVar14 + ((ulong)(uVar3 + iVar17 * -0x2d42 >> 0x12) & 0x3ff));
  return;
}


