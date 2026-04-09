// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zError
// Entry Point: 00e369ec
// Size: 24 bytes
// Signature: undefined zError(void)


undefined8 zError(int param_1)

{
  return *(undefined8 *)(z_errmsg + (2 - (long)param_1) * 8);
}


