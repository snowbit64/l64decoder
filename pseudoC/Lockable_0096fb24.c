// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 0096fb24
// Size: 72 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<TextureStreamingManager::RegistryPipeline::IdToPtrMapping> * this)


/* Lockable<TextureStreamingManager::RegistryPipeline::IdToPtrMapping>::~Lockable() */

void __thiscall
Lockable<TextureStreamingManager::RegistryPipeline::IdToPtrMapping>::~Lockable
          (Lockable<TextureStreamingManager::RegistryPipeline::IdToPtrMapping> *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)*(void **)(this + 0x40);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}


