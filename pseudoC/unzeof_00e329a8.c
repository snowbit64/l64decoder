// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzeof
// Entry Point: 00e329a8
// Size: 36 bytes
// Signature: undefined unzeof(void)


ulong unzeof(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x140) != 0)) {
    return (ulong)(*(long *)(*(long *)(param_1 + 0x140) + 0xc0) == 0);
  }
  return 0xffffff9a;
}


