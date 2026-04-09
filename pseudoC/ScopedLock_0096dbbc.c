// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096dbbc
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::ChangeRequest,std::__ndk1::deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>>> * this)


/* ScopedLock<std::__ndk1::queue<TextureStreamingManager::ChangeRequest,
   std::__ndk1::deque<TextureStreamingManager::ChangeRequest,
   std::__ndk1::allocator<TextureStreamingManager::ChangeRequest> > > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::queue<TextureStreamingManager::ChangeRequest,std::__ndk1::deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>>>
::~ScopedLock(ScopedLock<std::__ndk1::queue<TextureStreamingManager::ChangeRequest,std::__ndk1::deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::queue<TextureStreamingManager::ChangeRequest,std::__ndk1::deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>>>
       )0x0) {
                    /* try { // try from 0096dbd0 to 0096dbd3 has its CatchHandler @ 0096dbdc */
    Mutex::leaveCriticalSection();
  }
  return;
}


