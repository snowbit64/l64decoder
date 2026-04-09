// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getITextureObject
// Entry Point: 006f346c
// Size: 28 bytes
// Signature: undefined getITextureObject(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ImageOverlay::getITextureObject() */

long ImageOverlay::getITextureObject(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x80) != 0) {
    return *(long *)(in_x0 + 0x80);
  }
  return *(long *)(*(long *)(in_x0 + 0x78) + 0x68);
}


