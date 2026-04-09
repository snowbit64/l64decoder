// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_NeedMove
// Entry Point: 00d9d0e4
// Size: 52 bytes
// Signature: undefined MatchFinder_NeedMove(void)


bool MatchFinder_NeedMove(long *param_1)

{
  if (*(int *)((long)param_1 + 100) != 0) {
    return false;
  }
  return (param_1[8] + (ulong)*(uint *)((long)param_1 + 0x54)) - *param_1 <=
         (ulong)*(uint *)((long)param_1 + 0x5c);
}


