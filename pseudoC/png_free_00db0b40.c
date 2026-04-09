// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_free
// Entry Point: 00db0b40
// Size: 32 bytes
// Signature: undefined png_free(void)


void png_free(long param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x430) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00db0b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x430))();
      return;
    }
    free(param_2);
    return;
  }
  return;
}


