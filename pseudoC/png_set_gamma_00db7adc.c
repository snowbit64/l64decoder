// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_gamma
// Entry Point: 00db7adc
// Size: 204 bytes
// Signature: undefined png_set_gamma(void)


/* WARNING: Removing unreachable block (ram,0x00db7b14) */
/* WARNING: Removing unreachable block (ram,0x00db7b60) */

void png_set_gamma(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(long)(param_1 + 0.5);
  if ((dVar1 <= 2147483647.0 && -2147483647.0 <= dVar1) &&
     (dVar2 = (double)(long)(param_2 + 0.5), dVar2 <= 2147483647.0 && -2147483647.0 <= dVar2)) {
    png_set_gamma_fixed(param_3,(int)dVar1,(int)dVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_fixed_error(param_3,"gamma value");
}


