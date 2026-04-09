// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DowngradePipeline
// Entry Point: 00964a44
// Size: 108 bytes
// Signature: undefined __thiscall ~DowngradePipeline(DowngradePipeline * this)


/* TextureStreamingManager::DowngradePipeline::~DowngradePipeline() */

void __thiscall
TextureStreamingManager::DowngradePipeline::~DowngradePipeline(DowngradePipeline *this)

{
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0x170));
  Mutex::~Mutex((Mutex *)(this + 0x148));
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0x118));
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0xe8));
  Mutex::~Mutex((Mutex *)(this + 0xc0));
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0x90));
  std::__ndk1::
  __deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                   *)(this + 0x60));
  Mutex::~Mutex((Mutex *)(this + 0x38));
  std::__ndk1::
  __deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                   *)(this + 8));
  return;
}


