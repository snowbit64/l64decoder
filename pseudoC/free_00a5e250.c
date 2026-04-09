// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: free
// Entry Point: 00a5e250
// Size: 16 bytes
// Signature: undefined free(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageLayerGraphics::Layer::free() */

void FoliageLayerGraphics::Layer::free(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x48));
    return;
  }
  return;
}


