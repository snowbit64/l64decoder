// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: wakeWorker_any
// Entry Point: 009672a0
// Size: 8 bytes
// Signature: undefined wakeWorker_any(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::wakeWorker_any() */

void TextureStreamingManager::wakeWorker_any(void)

{
  Semaphore::post();
  return;
}


