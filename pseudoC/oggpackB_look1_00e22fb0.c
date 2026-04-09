// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_look1
// Entry Point: 00e22fb0
// Size: 56 bytes
// Signature: undefined oggpackB_look1(void)


ulong oggpackB_look1(long *param_1)

{
  if (*param_1 < param_1[4]) {
    return (ulong)(*(byte *)param_1[3] >> ((ulong)(7 - *(int *)(param_1 + 1)) & 0x3f)) & 1;
  }
  return 0xffffffffffffffff;
}


