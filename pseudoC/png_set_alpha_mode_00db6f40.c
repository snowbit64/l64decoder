// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_alpha_mode
// Entry Point: 00db6f40
// Size: 116 bytes
// Signature: undefined png_set_alpha_mode(void)


/* WARNING: Removing unreachable block (ram,0x00db6f68) */

void png_set_alpha_mode(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = (double)(long)(param_1 + 0.5);
  if (2147483647.0 < dVar1 || dVar1 < -2147483647.0) {
                    /* WARNING: Subroutine does not return */
    png_fixed_error(param_2,"gamma value");
  }
  png_set_alpha_mode_fixed(param_2,param_3,(int)dVar1);
  return;
}


