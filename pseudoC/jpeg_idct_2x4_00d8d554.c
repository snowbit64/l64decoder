// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_2x4
// Entry Point: 00d8d554
// Size: 400 bytes
// Signature: undefined jpeg_idct_2x4(void)


void jpeg_idct_2x4(long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  
  piVar13 = *(int **)(param_2 + 0x58);
  param_5 = param_5 & 0xffffffff;
  lVar15 = *param_4;
  lVar11 = *(long *)(param_1 + 0x198) + -0x180;
  iVar14 = (piVar13[0x18] * (int)param_3[0x18] + piVar13[8] * (int)param_3[8]) * 0x1151;
  iVar9 = iVar14 + piVar13[8] * (int)param_3[8] * 0x187e;
  iVar5 = (*piVar13 * (int)*param_3 - piVar13[0x10] * (int)param_3[0x10]) * 0x2000;
  iVar6 = (piVar13[0x10] * (int)param_3[0x10] + *piVar13 * (int)*param_3) * 0x2000;
  iVar12 = (piVar13[0x19] * (int)param_3[0x19] + piVar13[9] * (int)param_3[9]) * 0x1151;
  iVar10 = iVar12 + piVar13[9] * (int)param_3[9] * 0x187e;
  iVar7 = (piVar13[0x12] * (int)param_3[0x11] + piVar13[2] * (int)param_3[1]) * 0x2000;
  iVar1 = iVar10 + iVar7;
  iVar2 = iVar9 + iVar6 + 0x2008000;
  iVar8 = (piVar13[2] * (int)param_3[1] - piVar13[0x12] * (int)param_3[0x11]) * 0x2000;
  iVar14 = iVar14 + piVar13[0x18] * (int)param_3[0x18] * -0x3b21;
  iVar12 = iVar12 + piVar13[0x19] * (int)param_3[0x19] * -0x3b21;
  iVar3 = iVar12 + iVar8;
  iVar4 = iVar14 + iVar5 + 0x2008000;
  *(undefined *)(lVar15 + param_5) =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar2 + iVar1) >> 0x10) & 0x3ff));
  iVar8 = iVar8 - iVar12;
  iVar5 = (iVar5 - iVar14) + 0x2008000;
  ((undefined *)(lVar15 + param_5))[1] =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar2 - iVar1) >> 0x10) & 0x3ff));
  lVar15 = param_4[1];
  iVar1 = (iVar6 - iVar9) + 0x2008000;
  *(undefined *)(lVar15 + param_5) =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar4 + iVar3) >> 0x10) & 0x3ff));
  ((undefined *)(lVar15 + param_5))[1] =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar4 - iVar3) >> 0x10) & 0x3ff));
  lVar15 = param_4[2];
  *(undefined *)(lVar15 + param_5) =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar5 + iVar8) >> 0x10) & 0x3ff));
  iVar7 = iVar7 - iVar10;
  ((undefined *)(lVar15 + param_5))[1] =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar5 - iVar8) >> 0x10) & 0x3ff));
  lVar15 = param_4[3];
  *(undefined *)(lVar15 + param_5) =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar1 + iVar7) >> 0x10) & 0x3ff));
  ((undefined *)(lVar15 + param_5))[1] =
       *(undefined *)(lVar11 + ((ulong)((uint)(iVar1 - iVar7) >> 0x10) & 0x3ff));
  return;
}


