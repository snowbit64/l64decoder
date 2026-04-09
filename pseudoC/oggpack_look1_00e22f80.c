// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_look1
// Entry Point: 00e22f80
// Size: 48 bytes
// Signature: undefined oggpack_look1(void)


ulong oggpack_look1(long *param_1)

{
  if (*param_1 < param_1[4]) {
    return (ulong)(*(byte *)param_1[3] >> ((ulong)*(uint *)(param_1 + 1) & 0x3f)) & 1;
  }
  return 0xffffffffffffffff;
}


