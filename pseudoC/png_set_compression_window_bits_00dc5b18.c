// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_compression_window_bits
// Entry Point: 00dc5b18
// Size: 92 bytes
// Signature: undefined png_set_compression_window_bits(void)


void png_set_compression_window_bits(long param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 < 0x10) {
    if (7 < param_2) goto LAB_00dc5b64;
    param_2 = 8;
    pcVar1 = "Only compression windows >= 256 supported by PNG";
  }
  else {
    param_2 = 0xf;
    pcVar1 = "Only compression windows <= 32k supported by PNG";
  }
  png_warning(param_1,pcVar1);
LAB_00dc5b64:
  *(int *)(param_1 + 0x1fc) = param_2;
  return;
}


