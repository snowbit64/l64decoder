// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_2x1
// Entry Point: 00d8bac0
// Size: 80 bytes
// Signature: undefined jpeg_idct_2x1(void)


void jpeg_idct_2x1(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_4;
  iVar1 = **(int **)(param_2 + 0x58) * (uint)*param_3 + 0x1004;
  iVar2 = (*(int **)(param_2 + 0x58))[1] * (uint)param_3[1];
  lVar4 = *(long *)(param_1 + 0x198) + -0x180;
  *(undefined *)(lVar3 + (ulong)param_5) =
       *(undefined *)(lVar4 + ((ulong)((uint)(iVar2 + iVar1) >> 3) & 0x3ff));
  ((undefined *)(lVar3 + (ulong)param_5))[1] =
       *(undefined *)(lVar4 + ((ulong)((uint)(iVar1 - iVar2) >> 3) & 0x3ff));
  return;
}


