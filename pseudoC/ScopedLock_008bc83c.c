// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 008bc83c
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>> * this)


/* ScopedLock<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,
   std::__ndk1::allocator<SoundPlayer::SampleLoadInfo> > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>>
::~ScopedLock(ScopedLock<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>>
       )0x0) {
                    /* try { // try from 008bc850 to 008bc853 has its CatchHandler @ 008bc85c */
    Mutex::leaveCriticalSection();
  }
  return;
}


