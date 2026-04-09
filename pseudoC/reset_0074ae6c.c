// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 0074ae6c
// Size: 36 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CollisionEffectManager::reset() */

void CollisionEffectManager::reset(void)

{
  stopEffects();
  unloadConfig();
  return;
}


