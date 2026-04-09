// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00bab680
// Size: 8 bytes
// Signature: undefined unlock(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::Bt2Broadphase::unlock() const */

void Bt2PhysicsContextManager::Bt2Broadphase::unlock(void)

{
  Mutex::leaveCriticalSection();
  return;
}


