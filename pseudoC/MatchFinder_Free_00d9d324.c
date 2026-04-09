// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_Free
// Entry Point: 00d9d324
// Size: 92 bytes
// Signature: undefined MatchFinder_Free(void)


void MatchFinder_Free(long param_1,long param_2)

{
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    return;
  }
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


