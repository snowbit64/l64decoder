// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 0096fb6c
// Size: 48 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>> * this)


/* Lockable<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer> > >::~Lockable() */

void __thiscall
Lockable<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>>
::~Lockable(Lockable<std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>>
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


