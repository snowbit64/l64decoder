// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00969e00
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::StreamingDesc,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::StreamingDesc>>>> * this)


/* ScopedLock<std::__ndk1::unordered_map<unsigned long long, TextureStreamingManager::StreamingDesc,
   std::__ndk1::hash<unsigned long long>, std::__ndk1::equal_to<unsigned long long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long long const,
   TextureStreamingManager::StreamingDesc> > > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::StreamingDesc,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::StreamingDesc>>>>
::~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::StreamingDesc,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::StreamingDesc>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::StreamingDesc,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::StreamingDesc>>>>
       )0x0) {
                    /* try { // try from 00969e14 to 00969e17 has its CatchHandler @ 00969e20 */
    Mutex::leaveCriticalSection();
  }
  return;
}


