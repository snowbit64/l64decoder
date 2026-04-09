// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096d648
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>> * this)


/* ScopedLock<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer> > >::~ScopedLock()
    */

void __thiscall
ScopedLock<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>>
::~ScopedLock(ScopedLock<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>>
       )0x0) {
                    /* try { // try from 0096d65c to 0096d65f has its CatchHandler @ 0096d668 */
    Mutex::leaveCriticalSection();
  }
  return;
}


