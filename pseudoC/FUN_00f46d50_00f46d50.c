// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f46d50
// Entry Point: 00f46d50
// Size: 32 bytes
// Signature: undefined FUN_00f46d50(void)


bool FUN_00f46d50(long param_1,long *param_2)

{
  return *param_2 == *(long *)(param_1 + 8) || param_2[1] == *(long *)(param_1 + 8);
}


