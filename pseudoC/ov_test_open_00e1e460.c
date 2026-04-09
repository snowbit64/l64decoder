// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_test_open
// Entry Point: 00e1e460
// Size: 24 bytes
// Signature: undefined ov_test_open(void)


undefined8 ov_test_open(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    uVar1 = FUN_00e1db58();
    return uVar1;
  }
  return 0xffffff7d;
}


