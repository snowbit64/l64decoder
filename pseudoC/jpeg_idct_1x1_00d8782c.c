// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_1x1
// Entry Point: 00d8782c
// Size: 52 bytes
// Signature: undefined jpeg_idct_1x1(void)


void jpeg_idct_1x1(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  *(undefined *)(*param_4 + (ulong)param_5) =
       *(undefined *)
        (*(long *)(param_1 + 0x198) +
         ((ulong)(**(int **)(param_2 + 0x58) * (uint)*param_3 + 0x1004 >> 3) & 0x3ff) + -0x180);
  return;
}


