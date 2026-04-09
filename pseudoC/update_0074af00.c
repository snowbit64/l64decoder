// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0074af00
// Size: 36 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CollisionEffectManager::update() */

void CollisionEffectManager::update(void)

{
  updateEffects();
  processContacts();
  return;
}


