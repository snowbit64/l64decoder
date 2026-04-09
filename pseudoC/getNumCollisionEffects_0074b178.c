// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumCollisionEffects
// Entry Point: 0074b178
// Size: 28 bytes
// Signature: undefined getNumCollisionEffects(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CollisionEffectManager::getNumCollisionEffects() const */

int CollisionEffectManager::getNumCollisionEffects(void)

{
  long *in_x0;
  
  return (int)((ulong)(in_x0[1] - *in_x0) >> 3) * 0x38e38e39;
}


