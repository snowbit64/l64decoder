// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferSize
// Entry Point: 00b08cf8
// Size: 20 bytes
// Signature: undefined getBufferSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::getBufferSize() */

int AudioLoaderOGG::getBufferSize(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x30) * *(int *)(in_x0 + 0x3c) * 4;
}


