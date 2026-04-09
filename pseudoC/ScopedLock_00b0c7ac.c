// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00b0c7ac
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::unordered_set<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>> * this)


/* ScopedLock<std::__ndk1::unordered_set<SoftAudioSource*, std::__ndk1::hash<SoftAudioSource*>,
   std::__ndk1::equal_to<SoftAudioSource*>, std::__ndk1::allocator<SoftAudioSource*> >
   >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::unordered_set<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>>
::~ScopedLock(ScopedLock<std::__ndk1::unordered_set<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::unordered_set<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>>
       )0x0) {
                    /* try { // try from 00b0c7c0 to 00b0c7c3 has its CatchHandler @ 00b0c7cc */
    Mutex::leaveCriticalSection();
  }
  return;
}


