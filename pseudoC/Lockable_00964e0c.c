// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 00964e0c
// Size: 72 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::TextureUsageInternal,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::TextureUsageInternal>>>> * this)


/* Lockable<std::__ndk1::unordered_map<unsigned long long,
   TextureStreamingManager::TextureUsageInternal, std::__ndk1::hash<unsigned long long>,
   std::__ndk1::equal_to<unsigned long long>, std::__ndk1::allocator<std::__ndk1::pair<unsigned long
   long const, TextureStreamingManager::TextureUsageInternal> > > >::~Lockable() */

void __thiscall
Lockable<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::TextureUsageInternal,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::TextureUsageInternal>>>>
::~Lockable(Lockable<std::__ndk1::unordered_map<unsigned_long_long,TextureStreamingManager::TextureUsageInternal,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,TextureStreamingManager::TextureUsageInternal>>>>
            *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)*(void **)(this + 0x38);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}


