// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 009434a0
// Size: 56 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DStreamingManager::destroy() */

void I3DStreamingManager::destroy(void)

{
  if (s_pI3DStreamingManager != (long *)0x0) {
    (**(code **)(*s_pI3DStreamingManager + 8))();
  }
  s_pI3DStreamingManager = (long *)0x0;
  return;
}


