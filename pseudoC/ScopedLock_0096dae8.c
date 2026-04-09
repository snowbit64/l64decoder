// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096dae8
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<TextureStreamingManager::RegistryPipeline::IdToPtrMapping> * this)


/* ScopedLock<TextureStreamingManager::RegistryPipeline::IdToPtrMapping>::~ScopedLock() */

void __thiscall
ScopedLock<TextureStreamingManager::RegistryPipeline::IdToPtrMapping>::~ScopedLock
          (ScopedLock<TextureStreamingManager::RegistryPipeline::IdToPtrMapping> *this)

{
  if (this[0x10] == (ScopedLock<TextureStreamingManager::RegistryPipeline::IdToPtrMapping>)0x0) {
                    /* try { // try from 0096dafc to 0096daff has its CatchHandler @ 0096db08 */
    Mutex::leaveCriticalSection();
  }
  return;
}


