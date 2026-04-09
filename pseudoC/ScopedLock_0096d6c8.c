// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096d6c8
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<TextureStreamingManager::UpgradePipeline::SharedBuffer> * this)


/* ScopedLock<TextureStreamingManager::UpgradePipeline::SharedBuffer>::~ScopedLock() */

void __thiscall
ScopedLock<TextureStreamingManager::UpgradePipeline::SharedBuffer>::~ScopedLock
          (ScopedLock<TextureStreamingManager::UpgradePipeline::SharedBuffer> *this)

{
  if (this[0x10] == (ScopedLock<TextureStreamingManager::UpgradePipeline::SharedBuffer>)0x0) {
                    /* try { // try from 0096d6dc to 0096d6df has its CatchHandler @ 0096d6e8 */
    Mutex::leaveCriticalSection();
  }
  return;
}


