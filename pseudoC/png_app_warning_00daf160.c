// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_app_warning
// Entry Point: 00daf160
// Size: 28 bytes
// Signature: undefined png_app_warning(void)


void png_app_warning(long param_1)

{
  if ((*(byte *)(param_1 + 0x16a) >> 5 & 1) != 0) {
    png_warning();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error();
}


