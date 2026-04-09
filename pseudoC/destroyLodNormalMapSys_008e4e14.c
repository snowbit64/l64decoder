// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyLodNormalMapSys
// Entry Point: 008e4e14
// Size: 44 bytes
// Signature: undefined destroyLodNormalMapSys(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::destroyLodNormalMapSys() */

void BaseTerrain::destroyLodNormalMapSys(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0xe0));
  }
  *(undefined8 *)(in_x0 + 0xe0) = 0;
  return;
}


