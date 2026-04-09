// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Free
// Entry Point: 00ecc8fc
// Size: 44 bytes
// Signature: undefined Free(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::Volume::Free() */

void VHACD::Volume::Free(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x70));
  }
  *(undefined8 *)(in_x0 + 0x70) = 0;
  return;
}


