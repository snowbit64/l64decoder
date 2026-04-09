// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_ReduceOffsets
// Entry Point: 00d9d074
// Size: 32 bytes
// Signature: undefined MatchFinder_ReduceOffsets(void)


void MatchFinder_ReduceOffsets(long param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
  *(ulong *)(param_1 + 8) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) - param_2,
                (int)*(undefined8 *)(param_1 + 8) - param_2);
  return;
}


