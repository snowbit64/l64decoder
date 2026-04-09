// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_GetNumAvailableBytes
// Entry Point: 00d9d064
// Size: 16 bytes
// Signature: undefined MatchFinder_GetNumAvailableBytes(void)


int MatchFinder_GetNumAvailableBytes(long param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
}


