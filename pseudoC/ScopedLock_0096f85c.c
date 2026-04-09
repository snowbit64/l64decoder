// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096f85c
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>>> * this)


/* ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::WorkerResult,
   std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::WorkerResult,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult> > >
   >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>>>
::~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::queue<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::deque<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>>>
       )0x0) {
                    /* try { // try from 0096f870 to 0096f873 has its CatchHandler @ 0096f87c */
    Mutex::leaveCriticalSection();
  }
  return;
}


