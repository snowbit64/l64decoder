// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_2x2
// Entry Point: 00d8778c
// Size: 160 bytes
// Signature: undefined jpeg_idct_2x2(void)


void jpeg_idct_2x2(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  
  piVar6 = *(int **)(param_2 + 0x58);
  iVar4 = *piVar6 * (uint)*param_3 + 0x1004;
  iVar1 = piVar6[8] * (uint)param_3[8] + iVar4;
  iVar4 = iVar4 - piVar6[8] * (uint)param_3[8];
  iVar2 = piVar6[9] * (uint)param_3[9] + piVar6[1] * (uint)param_3[1];
  lVar7 = *(long *)(param_1 + 0x198) + -0x180;
  puVar3 = (undefined *)(*param_4 + (ulong)param_5);
  iVar5 = piVar6[1] * (uint)param_3[1] - piVar6[9] * (uint)param_3[9];
  *puVar3 = *(undefined *)(lVar7 + ((ulong)((uint)(iVar2 + iVar1) >> 3) & 0x3ff));
  puVar3[1] = *(undefined *)(lVar7 + ((ulong)((uint)(iVar1 - iVar2) >> 3) & 0x3ff));
  puVar3 = (undefined *)(param_4[1] + (ulong)param_5);
  *puVar3 = *(undefined *)(lVar7 + ((ulong)((uint)(iVar5 + iVar4) >> 3) & 0x3ff));
  puVar3[1] = *(undefined *)(lVar7 + ((ulong)((uint)(iVar4 - iVar5) >> 3) & 0x3ff));
  return;
}


