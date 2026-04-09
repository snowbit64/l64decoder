// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_data_freer
// Entry Point: 00da9480
// Size: 76 bytes
// Signature: undefined png_data_freer(void)


void png_data_freer(long param_1,long param_2,int param_3,uint param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 == 2) {
      param_4 = *(uint *)(param_2 + 300) & (param_4 ^ 0xffffffff);
    }
    else {
      if (param_3 != 1) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Unknown freer parameter in png_data_freer");
      }
      param_4 = *(uint *)(param_2 + 300) | param_4;
    }
    *(uint *)(param_2 + 300) = param_4;
  }
  return;
}


