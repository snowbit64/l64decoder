// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: free
// Entry Point: 00a5e17c
// Size: 60 bytes
// Signature: undefined free(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageLayerGraphics::BlockDensity::free() */

void FoliageLayerGraphics::BlockDensity::free(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 8));
  }
  if (*(void **)(in_x0 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x10));
    return;
  }
  return;
}


