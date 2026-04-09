// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_raw_tell
// Entry Point: 00e1ff20
// Size: 28 bytes
// Signature: undefined ov_raw_tell(void)


undefined8 ov_raw_tell(long param_1)

{
  if (*(int *)(param_1 + 0x80) < 2) {
    return 0xffffffffffffff7d;
  }
  return *(undefined8 *)(param_1 + 0x10);
}


