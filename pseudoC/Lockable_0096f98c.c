// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 0096f98c
// Size: 48 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>> * this)


/* Lockable<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,
   std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback> > >::~Lockable() */

void __thiscall
Lockable<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>>
::~Lockable(Lockable<std::__ndk1::vector<TextureStreamingManager::Stats::TextureAndFeedback,std::__ndk1::allocator<TextureStreamingManager::Stats::TextureAndFeedback>>>
            *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}


