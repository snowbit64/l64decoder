// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FenceObjects
// Entry Point: 00ac964c
// Size: 88 bytes
// Signature: undefined __thiscall ~FenceObjects(FenceObjects * this)


/* VulkanCommandBuffer::FenceObjects::~FenceObjects() */

void __thiscall VulkanCommandBuffer::FenceObjects::~FenceObjects(FenceObjects *this)

{
  void *pvVar1;
  long lVar2;
  void **ppvVar3;
  
  lVar2 = *(long *)(this + 0x18);
  while (lVar2 != 0) {
    ppvVar3 = *(void ***)(this + 0x18);
    *(void **)(this + 0x18) = ppvVar3[6];
    pvVar1 = *ppvVar3;
    if (pvVar1 != (void *)0x0) {
      ppvVar3[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(ppvVar3);
    lVar2 = *(long *)(this + 0x18);
  }
  Semaphore::~Semaphore((Semaphore *)(this + 8));
  return;
}


