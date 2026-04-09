// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00965db4
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>>> * this)


/* ScopedLock<std::__ndk1::queue<TextureStreamingManager::DowngradePipeline::ReallocateRequest,
   std::__ndk1::deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,
   std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest> > >
   >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::queue<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>>>
::~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::queue<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>>>
       )0x0) {
                    /* try { // try from 00965dc8 to 00965dcb has its CatchHandler @ 00965dd4 */
    Mutex::leaveCriticalSection();
  }
  return;
}


