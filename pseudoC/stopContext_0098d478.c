// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopContext
// Entry Point: 0098d478
// Size: 16 bytes
// Signature: undefined stopContext(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScenegraphPhysicsContextManager::stopContext() */

void ScenegraphPhysicsContextManager::stopContext(void)

{
  long *in_x0;
  
  if (*in_x0 != 0) {
    Bt2ScenegraphPhysicsContext::stop();
    return;
  }
  return;
}


