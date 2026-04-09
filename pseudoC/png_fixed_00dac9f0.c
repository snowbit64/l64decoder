// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_fixed
// Entry Point: 00dac9f0
// Size: 76 bytes
// Signature: undefined png_fixed(void)


int png_fixed(undefined8 param_1)

{
  double dVar1;
  
  dVar1 = (double)NEON_fmadd(param_1,0x40f86a0000000000,0x3fe0000000000000);
  dVar1 = (double)(long)dVar1;
  if (dVar1 <= 2147483647.0 && -2147483648.0 <= dVar1) {
    return (int)dVar1;
  }
                    /* WARNING: Subroutine does not return */
  png_fixed_error();
}


