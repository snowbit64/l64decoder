// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00969cc0
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::Status,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::Status>>>> * this)


/* ScopedLock<std::__ndk1::unordered_map<unsigned long long, TextureStreamingManager::Status,
   std::__ndk1::hash<unsigned long long>, std::__ndk1::equal_to<unsigned long long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long long const,
   TextureStreamingManager::Status> > > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::Status,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::Status>>>>
::~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::Status,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::Status>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::Status,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::Status>>>>
       )0x0) {
                    /* try { // try from 00969cd4 to 00969cd7 has its CatchHandler @ 00969ce0 */
    Mutex::leaveCriticalSection();
  }
  return;
}


