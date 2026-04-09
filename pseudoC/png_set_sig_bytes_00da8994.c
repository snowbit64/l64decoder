// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_sig_bytes
// Entry Point: 00da8994
// Size: 48 bytes
// Signature: undefined png_set_sig_bytes(void)


void png_set_sig_bytes(long param_1,uint param_2)

{
  if (param_1 != 0) {
    param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
    if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Too many bytes for PNG signature");
    }
    *(char *)(param_1 + 0x2a5) = (char)param_2;
  }
  return;
}


