// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f47854
// Entry Point: 00f47854
// Size: 32 bytes
// Signature: undefined FUN_00f47854(void)


bool FUN_00f47854(long param_1,long *param_2)

{
  return *param_2 == *(long *)(param_1 + 8) || param_2[1] == *(long *)(param_1 + 8);
}


