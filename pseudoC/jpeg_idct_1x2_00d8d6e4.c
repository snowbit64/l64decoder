// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_1x2
// Entry Point: 00d8d6e4
// Size: 88 bytes
// Signature: undefined jpeg_idct_1x2(void)


void jpeg_idct_1x2(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = **(int **)(param_2 + 0x58) * (uint)*param_3 + 0x1004;
  iVar2 = (*(int **)(param_2 + 0x58))[8] * (uint)param_3[8];
  lVar3 = *(long *)(param_1 + 0x198) + -0x180;
  *(undefined *)(*param_4 + (ulong)param_5) =
       *(undefined *)(lVar3 + ((ulong)((uint)(iVar2 + iVar1) >> 3) & 0x3ff));
  *(undefined *)(param_4[1] + (ulong)param_5) =
       *(undefined *)(lVar3 + ((ulong)((uint)(iVar1 - iVar2) >> 3) & 0x3ff));
  return;
}


