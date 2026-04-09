// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearCache
// Entry Point: 0098af60
// Size: 40 bytes
// Signature: undefined clearCache(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PlayerCenteredCollisionSystem::clearCache() */

void PlayerCenteredCollisionSystem::clearCache(void)

{
  long in_x0;
  
  PlayerCenteredCollisionHeightmap::clearCache();
  *(undefined4 *)(in_x0 + 0x20) = 0;
  return;
}


