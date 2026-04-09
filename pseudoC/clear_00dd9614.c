// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00dd9614
// Size: 52 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* dtNodePool::clear() */

void dtNodePool::clear(void)

{
  long in_x0;
  
  memset(*(void **)(in_x0 + 8),0xff,(long)*(int *)(in_x0 + 0x1c) << 1);
  *(undefined4 *)(in_x0 + 0x20) = 0;
  return;
}


