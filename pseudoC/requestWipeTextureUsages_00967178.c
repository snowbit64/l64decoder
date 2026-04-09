// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestWipeTextureUsages
// Entry Point: 00967178
// Size: 44 bytes
// Signature: undefined requestWipeTextureUsages(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::requestWipeTextureUsages() */

void TextureStreamingManager::requestWipeTextureUsages(void)

{
  char cVar1;
  long in_x0;
  
  cVar1 = *(char *)(in_x0 + 0x148);
  *(undefined *)(in_x0 + 0x148) = 1;
  if (cVar1 != '\0') {
    return;
  }
  *(long *)(in_x0 + 0x830) = *(long *)(in_x0 + 0x830) + 1;
  Semaphore::post();
  return;
}


