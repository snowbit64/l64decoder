// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsLastInputChangeProcessed
// Entry Point: 00966490
// Size: 20 bytes
// Signature: undefined getIsLastInputChangeProcessed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::getIsLastInputChangeProcessed() const */

bool TextureStreamingManager::getIsLastInputChangeProcessed(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x838) == *(long *)(in_x0 + 0x830);
}


