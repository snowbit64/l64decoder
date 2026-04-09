// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007beb08
// Entry Point: 007beb08
// Size: 48 bytes
// Signature: undefined FUN_007beb08(void)


void FUN_007beb08(long param_1)

{
  byte bVar1;
  
  bVar1 = ProfilerStats::exportInit();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


