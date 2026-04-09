// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00966f68
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>> * this)


/* ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,
   std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback> > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>>
::~ScopedLock(ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>>
       )0x0) {
                    /* try { // try from 00966f7c to 00966f7f has its CatchHandler @ 00966f88 */
    Mutex::leaveCriticalSection();
  }
  return;
}


