// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9754c
// Entry Point: 00d9754c
// Size: 88 bytes
// Signature: undefined FUN_00d9754c(void)


size_t FUN_00d9754c(long param_1,void *param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + 0x10) < param_3) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    param_3 = *(ulong *)(param_1 + 0x10);
  }
  memcpy(*(void **)(param_1 + 8),param_2,param_3);
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_3;
  *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) - param_3;
  return param_3;
}


