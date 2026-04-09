// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_MoveBlock
// Entry Point: 00d9d094
// Size: 80 bytes
// Signature: undefined MatchFinder_MoveBlock(void)


void MatchFinder_MoveBlock(long *param_1)

{
  memmove((void *)param_1[8],(void *)(*param_1 - (ulong)*(uint *)(param_1 + 0xb)),
          (ulong)((*(int *)(param_1 + 2) + *(uint *)(param_1 + 0xb)) - *(int *)(param_1 + 1)));
  *param_1 = param_1[8] + (ulong)*(uint *)(param_1 + 0xb);
  return;
}


