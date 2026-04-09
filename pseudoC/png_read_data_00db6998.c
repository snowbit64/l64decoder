// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_data
// Entry Point: 00db6998
// Size: 36 bytes
// Signature: undefined png_read_data(void)


void png_read_data(long param_1)

{
  if (*(code **)(param_1 + 0x138) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00db69ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x138))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Call to NULL read function");
}


