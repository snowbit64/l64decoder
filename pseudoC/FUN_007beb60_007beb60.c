// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007beb60
// Entry Point: 007beb60
// Size: 52 bytes
// Signature: undefined FUN_007beb60(void)


void FUN_007beb60(char **param_1)

{
  byte bVar1;
  
  bVar1 = ProfilerStats::exportFinalize(*param_1);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar1 & 1;
  return;
}


