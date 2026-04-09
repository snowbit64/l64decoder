// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8eb08
// Entry Point: 00d8eb08
// Size: 72 bytes
// Signature: undefined FUN_00d8eb08(void)


void FUN_00d8eb08(long param_1)

{
  FUN_00d8e9b4(param_1,1);
  FUN_00d8e9b4(param_1,0);
  jpeg_free_small(param_1,*(undefined8 *)(param_1 + 8),0xa8);
  *(undefined8 *)(param_1 + 8) = 0;
  jpeg_mem_term(param_1);
  return;
}


