// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInputChange
// Entry Point: 00965020
// Size: 24 bytes
// Signature: undefined onInputChange(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::onInputChange() */

void TextureStreamingManager::onInputChange(void)

{
  long in_x0;
  
  *(long *)(in_x0 + 0x830) = *(long *)(in_x0 + 0x830) + 1;
  Semaphore::post();
  return;
}


