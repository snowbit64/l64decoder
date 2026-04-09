// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CommonPipelineData
// Entry Point: 00964c2c
// Size: 168 bytes
// Signature: undefined __thiscall ~CommonPipelineData(CommonPipelineData * this)


/* TextureStreamingManager::CommonPipelineData::~CommonPipelineData() */

void __thiscall
TextureStreamingManager::CommonPipelineData::~CommonPipelineData(CommonPipelineData *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  Mutex::~Mutex((Mutex *)(this + 0x88));
  ppvVar1 = (void **)*(void **)(this + 0x70);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x38));
  ppvVar1 = (void **)*(void **)(this + 0x20);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    if ((*(byte *)(ppvVar1 + 3) & 1) != 0) {
      operator_delete(ppvVar1[5]);
    }
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


