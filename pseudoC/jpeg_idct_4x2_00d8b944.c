// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_4x2
// Entry Point: 00d8b944
// Size: 380 bytes
// Signature: undefined jpeg_idct_4x2(void)


void jpeg_idct_4x2(long param_1,long param_2,ushort *param_3,long *param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int *piVar19;
  
  piVar19 = *(int **)(param_2 + 0x58);
  uVar10 = *param_3;
  iVar6 = *piVar19;
  iVar7 = piVar19[8];
  uVar11 = param_3[8];
  iVar8 = piVar19[2];
  iVar9 = piVar19[10];
  lVar18 = *(long *)(param_1 + 0x198) + -0x180;
  uVar12 = param_3[10];
  uVar13 = param_3[2];
  iVar1 = piVar19[9] * (int)(short)param_3[9] + piVar19[1] * (int)(short)param_3[1];
  iVar2 = piVar19[0xb] * (int)(short)param_3[0xb] + piVar19[3] * (int)(short)param_3[3];
  iVar16 = (iVar2 + iVar1) * 0x1151;
  iVar3 = iVar9 * (uint)uVar12 + iVar8 * (uint)uVar13;
  iVar4 = iVar7 * (uint)uVar11 + iVar6 * (uint)uVar10 + 0x1004;
  iVar17 = piVar19[1] * (int)(short)param_3[1] - piVar19[9] * (int)(short)param_3[9];
  iVar15 = iVar16 + iVar1 * 0x187e;
  iVar14 = (iVar4 + iVar3) * 0x2000;
  puVar5 = (undefined *)(*param_4 + (param_5 & 0xffffffff));
  iVar16 = iVar16 + iVar2 * -0x3b21;
  iVar2 = (iVar4 - iVar3) * 0x2000;
  iVar3 = piVar19[3] * (int)(short)param_3[3] - piVar19[0xb] * (int)(short)param_3[0xb];
  *puVar5 = *(undefined *)(lVar18 + ((ulong)((uint)(iVar15 + iVar14) >> 0x10) & 0x3ff));
  iVar9 = iVar8 * (uint)uVar13 - iVar9 * (uint)uVar12;
  iVar8 = (iVar3 + iVar17) * 0x1151;
  iVar1 = (iVar6 * (uint)uVar10 - iVar7 * (uint)uVar11) + 0x1004;
  iVar4 = iVar8 + iVar17 * 0x187e;
  iVar8 = iVar8 + iVar3 * -0x3b21;
  puVar5[3] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar14 - iVar15) >> 0x10) & 0x3ff));
  puVar5[1] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar16 + iVar2) >> 0x10) & 0x3ff));
  iVar3 = (iVar1 + iVar9) * 0x2000;
  iVar1 = (iVar1 - iVar9) * 0x2000;
  puVar5[2] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar2 - iVar16) >> 0x10) & 0x3ff));
  puVar5 = (undefined *)(param_4[1] + (param_5 & 0xffffffff));
  *puVar5 = *(undefined *)(lVar18 + ((ulong)((uint)(iVar4 + iVar3) >> 0x10) & 0x3ff));
  puVar5[3] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar3 - iVar4) >> 0x10) & 0x3ff));
  puVar5[1] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar8 + iVar1) >> 0x10) & 0x3ff));
  puVar5[2] = *(undefined *)(lVar18 + ((ulong)((uint)(iVar1 - iVar8) >> 0x10) & 0x3ff));
  return;
}


