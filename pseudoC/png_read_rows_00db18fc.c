// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_rows
// Entry Point: 00db18fc
// Size: 160 bytes
// Signature: undefined png_read_rows(void)


void png_read_rows(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  if (param_1 != 0) {
    if ((param_2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
          do {
            png_read_row(param_1,0,*param_3);
            param_4 = param_4 + -1;
            param_3 = param_3 + 1;
          } while (param_4 != 0);
        }
      }
      else if (param_4 != 0) {
        do {
          png_read_row(param_1,*param_2,0);
          param_4 = param_4 + -1;
          param_2 = param_2 + 1;
        } while (param_4 != 0);
      }
    }
    else if (param_4 != 0) {
      do {
        png_read_row(param_1,*param_2,*param_3);
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      } while (param_4 != 0);
    }
  }
  return;
}


