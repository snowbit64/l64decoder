// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopWorker_main
// Entry Point: 009663e0
// Size: 56 bytes
// Signature: undefined stopWorker_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::stopWorker_main() */

void TextureStreamingManager::stopWorker_main(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0xe0) = 1;
  Semaphore::post();
  Thread::join();
  *(undefined *)(in_x0 + 0xe0) = 0;
  return;
}


