// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_read1
// Entry Point: 00e233e0
// Size: 116 bytes
// Signature: undefined oggpackB_read1(void)


ulong oggpackB_read1(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*param_1 < param_1[4]) {
    iVar1 = *(int *)(param_1 + 1);
    uVar2 = (ulong)(*(byte *)param_1[3] >> ((ulong)(7 - iVar1) & 0x3f)) & 1;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (6 < iVar1) {
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[3] = (long)((byte *)param_1[3] + 1);
      *param_1 = *param_1 + 1;
      return uVar2;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
    param_1[3] = 0;
    *param_1 = param_1[4];
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return uVar2;
}


