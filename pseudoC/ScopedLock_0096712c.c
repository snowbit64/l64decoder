// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096712c
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::TextureUsageInternal,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::TextureUsageInternal>>>> * this)


/* ScopedLock<std::__ndk1::unordered_map<unsigned long long,
   TextureStreamingManager::TextureUsageInternal, std::__ndk1::hash<unsigned long long>,
   std::__ndk1::equal_to<unsigned long long>, std::__ndk1::allocator<std::__ndk1::pair<unsigned long
   long const, TextureStreamingManager::TextureUsageInternal> > > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::TextureUsageInternal,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::TextureUsageInternal>>>>
::~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::TextureUsageInternal,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::TextureUsageInternal>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::TextureUsageInternal,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::TextureUsageInternal>>>>
       )0x0) {
                    /* try { // try from 00967140 to 00967143 has its CatchHandler @ 0096714c */
    Mutex::leaveCriticalSection();
  }
  return;
}


