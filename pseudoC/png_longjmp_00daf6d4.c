// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_longjmp
// Entry Point: 00daf6d4
// Size: 36 bytes
// Signature: undefined png_longjmp(void)


void png_longjmp(long param_1)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x100) != (code *)0x0)) &&
     (*(long *)(param_1 + 0x108) != 0)) {
    (**(code **)(param_1 + 0x100))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


