// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00bab678
// Size: 8 bytes
// Signature: undefined lock(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::Bt2Broadphase::lock() const */

void Bt2PhysicsContextManager::Bt2Broadphase::lock(void)

{
  Mutex::enterCriticalSection();
  return;
}


