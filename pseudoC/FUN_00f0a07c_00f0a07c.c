// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0a07c
// Entry Point: 00f0a07c
// Size: 44 bytes
// Signature: undefined FUN_00f0a07c(void)


int FUN_00f0a07c(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(int *)(*(long *)(param_1 + 0x28) +
                   (long)(param_2 >> (*(uint *)(param_1 + 0x78) & 0x1f)) * 4) +
           (uint)*(byte *)(*(long *)(param_1 + 0x20) + (long)param_2);
  }
  return 0;
}


