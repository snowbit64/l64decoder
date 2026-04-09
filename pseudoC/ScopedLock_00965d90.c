// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00965d90
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>>> * this)


/* ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::ReallocateRequest,
   std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest> > >
   >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>>>
::~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>>>
       )0x0) {
                    /* try { // try from 00965da4 to 00965da7 has its CatchHandler @ 00965db0 */
    Mutex::leaveCriticalSection();
  }
  return;
}


