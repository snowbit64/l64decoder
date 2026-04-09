// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_data
// Entry Point: 00dc49a0
// Size: 36 bytes
// Signature: undefined png_write_data(void)


void png_write_data(long param_1)

{
  if (*(code **)(param_1 + 0x130) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dc49b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x130))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Call to NULL write function");
}


