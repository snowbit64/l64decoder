// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_free_buffer_list
// Entry Point: 00dc837c
// Size: 64 bytes
// Signature: undefined png_free_buffer_list(void)


void png_free_buffer_list(undefined8 param_1,long **param_2)

{
  long *plVar1;
  
  plVar1 = *param_2;
  if (plVar1 != (long *)0x0) {
    *param_2 = (long *)0x0;
    do {
      plVar1 = (long *)*plVar1;
      png_free(param_1);
    } while (plVar1 != (long *)0x0);
  }
  return;
}


