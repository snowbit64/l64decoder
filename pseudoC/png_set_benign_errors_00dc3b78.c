// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_benign_errors
// Entry Point: 00dc3b78
// Size: 32 bytes
// Signature: undefined png_set_benign_errors(void)


void png_set_benign_errors(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x700000;
  }
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xff8fffff | uVar1;
  return;
}


