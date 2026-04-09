// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078c540
// Entry Point: 0078c540
// Size: 48 bytes
// Signature: undefined FUN_0078c540(void)


void FUN_0078c540(uint *param_1)

{
  uint uVar1;
  
  uVar1 = NullGameStats::get(*param_1);
  param_1[0x40] = uVar1;
  param_1[0x42] = 4;
  return;
}


