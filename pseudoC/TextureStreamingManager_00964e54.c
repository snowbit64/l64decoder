// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TextureStreamingManager
// Entry Point: 00964e54
// Size: 416 bytes
// Signature: undefined __thiscall ~TextureStreamingManager(TextureStreamingManager * this)


/* TextureStreamingManager::~TextureStreamingManager() */

void __thiscall TextureStreamingManager::~TextureStreamingManager(TextureStreamingManager *this)

{
  uint uVar1;
  void **ppvVar2;
  void *pvVar3;
  
  uVar1 = *(uint *)(this + 0x878);
  pvVar3 = *(void **)(this + 0x8a8);
  *(undefined4 *)(this + 0x878) = 0;
  if (5 < uVar1) {
    *(void **)(this + 0x8b0) = pvVar3;
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x8b0) = pvVar3;
    operator_delete(pvVar3);
  }
  Mutex::~Mutex((Mutex *)(this + 0x850));
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0x7f8));
  Mutex::~Mutex((Mutex *)(this + 2000));
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0x7a0));
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0x770));
  Mutex::~Mutex((Mutex *)(this + 0x748));
  std::__ndk1::
  __deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
                   *)(this + 0x718));
  std::__ndk1::
  __deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                   *)(this + 0x6e8));
  Mutex::~Mutex((Mutex *)(this + 0x6c0));
  std::__ndk1::
  __deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::~__deque_base((__deque_base<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
                   *)(this + 0x690));
  UpgradePipeline::~UpgradePipeline((UpgradePipeline *)(this + 0x3d8));
  RegistryPipeline::~RegistryPipeline((RegistryPipeline *)(this + 0x2d0));
  CommonPipelineData::~CommonPipelineData((CommonPipelineData *)(this + 0x218));
  ppvVar2 = (void **)*(void **)(this + 0x200);
  while (ppvVar2 != (void **)0x0) {
    pvVar3 = *ppvVar2;
    operator_delete(ppvVar2);
    ppvVar2 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x1f0);
  *(undefined8 *)(this + 0x1f0) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  ppvVar2 = (void **)*(void **)(this + 0x1d8);
  while (ppvVar2 != (void **)0x0) {
    pvVar3 = *ppvVar2;
    operator_delete(ppvVar2);
    ppvVar2 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x1c8);
  *(undefined8 *)(this + 0x1c8) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x1a8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x1b0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 400);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x198) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x178);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar3;
    operator_delete(pvVar3);
  }
  ppvVar2 = (void **)*(void **)(this + 0x160);
  while (ppvVar2 != (void **)0x0) {
    pvVar3 = *ppvVar2;
    operator_delete(ppvVar2);
    ppvVar2 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x150);
  *(undefined8 *)(this + 0x150) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  ppvVar2 = (void **)*(void **)(this + 0x120);
  while (ppvVar2 != (void **)0x0) {
    pvVar3 = *ppvVar2;
    operator_delete(ppvVar2);
    ppvVar2 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x110);
  *(undefined8 *)(this + 0x110) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  Mutex::~Mutex((Mutex *)(this + 0xe8));
  Semaphore::~Semaphore((Semaphore *)(this + 0xd0));
  Thread::~Thread((Thread *)(this + 0x88));
  Event::~Event((Event *)(this + 0x20));
  return;
}


