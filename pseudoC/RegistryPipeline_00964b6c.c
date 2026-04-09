// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RegistryPipeline
// Entry Point: 00964b6c
// Size: 192 bytes
// Signature: undefined __thiscall ~RegistryPipeline(RegistryPipeline * this)


/* TextureStreamingManager::RegistryPipeline::~RegistryPipeline() */

void __thiscall TextureStreamingManager::RegistryPipeline::~RegistryPipeline(RegistryPipeline *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xf0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xd8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0xb0));
  ppvVar1 = (void **)*(void **)(this + 0x98);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    if ((*(byte *)(ppvVar1 + 3) & 1) != 0) {
      operator_delete(ppvVar1[5]);
    }
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x88);
  *(undefined8 *)(this + 0x88) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x60));
  ppvVar1 = (void **)*(void **)(this + 0x48);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 8));
  return;
}


