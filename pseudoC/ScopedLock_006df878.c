// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 006df878
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>const> * this)


/* ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,
   std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback> >
   const>::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>const>
::~ScopedLock(ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>const>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>const>
       )0x0) {
                    /* try { // try from 006df88c to 006df88f has its CatchHandler @ 006df898 */
    Mutex::leaveCriticalSection();
  }
  return;
}


