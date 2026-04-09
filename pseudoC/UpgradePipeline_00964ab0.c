// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~UpgradePipeline
// Entry Point: 00964ab0
// Size: 188 bytes
// Signature: undefined __thiscall ~UpgradePipeline(UpgradePipeline * this)


/* TextureStreamingManager::UpgradePipeline::~UpgradePipeline() */

void __thiscall TextureStreamingManager::UpgradePipeline::~UpgradePipeline(UpgradePipeline *this)

{
  void *pvVar1;
  
  Mutex::~Mutex((Mutex *)(this + 0x278));
  pvVar1 = *(void **)(this + 0x260);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x268) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)(this + 0x238));
  pvVar1 = *(void **)(this + 0x218);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x220) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x200);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x208) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)(this + 0x1d8));
  std::__ndk1::
  __deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                   *)(this + 0x1a0));
  Mutex::~Mutex((Mutex *)(this + 0x178));
  std::__ndk1::
  __deque_base<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
                   *)(this + 0x148));
  std::__ndk1::
  __deque_base<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
                   *)(this + 0x118));
  Mutex::~Mutex((Mutex *)(this + 0xf0));
  std::__ndk1::
  __deque_base<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
                   *)(this + 0xc0));
  std::__ndk1::
  __deque_base<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>
  ::~__deque_base((__deque_base<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>
                   *)(this + 0x90));
  Mutex::~Mutex((Mutex *)(this + 0x68));
  std::__ndk1::
  __deque_base<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>
  ::~__deque_base((__deque_base<TextureStreamingManager::UpgradePipeline::WorkerResult,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult>>
                   *)(this + 0x38));
  std::__ndk1::
  __deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                   *)(this + 8));
  return;
}


