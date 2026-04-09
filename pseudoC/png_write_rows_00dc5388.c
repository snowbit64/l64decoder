// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_rows
// Entry Point: 00dc5388
// Size: 72 bytes
// Signature: undefined png_write_rows(void)


void png_write_rows(long param_1,undefined8 *param_2,int param_3)

{
  if ((param_1 != 0) && (param_3 != 0)) {
    do {
      png_write_row(param_1,*param_2);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


