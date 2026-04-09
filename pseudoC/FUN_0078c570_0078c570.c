// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078c570
// Entry Point: 0078c570
// Size: 48 bytes
// Signature: undefined FUN_0078c570(void)


void FUN_0078c570(long param_1)

{
  byte bVar1;
  
  bVar1 = NullGameStats::areStatsAvailable();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


