// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_app_error
// Entry Point: 00daf17c
// Size: 28 bytes
// Signature: undefined png_app_error(void)


void png_app_error(long param_1)

{
  if ((*(byte *)(param_1 + 0x16a) >> 6 & 1) != 0) {
    png_warning();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error();
}


