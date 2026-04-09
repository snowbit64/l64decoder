// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueueSingleThreadedConsumer
// Entry Point: 00ad21b4
// Size: 84 bytes
// Signature: undefined __thiscall ~LockFreeQueueSingleThreadedConsumer(LockFreeQueueSingleThreadedConsumer<VulkanResourceAllocator::Fence> * this)


/* LockFreeQueueSingleThreadedConsumer<VulkanResourceAllocator::Fence>::~LockFreeQueueSingleThreadedConsumer()
    */

void __thiscall
LockFreeQueueSingleThreadedConsumer<VulkanResourceAllocator::Fence>::
~LockFreeQueueSingleThreadedConsumer
          (LockFreeQueueSingleThreadedConsumer<VulkanResourceAllocator::Fence> *this)

{
  void *pvVar1;
  void **ppvVar2;
  
  ppvVar2 = *(void ***)(this + 8);
  while (ppvVar2 != (void **)0x0) {
    pvVar1 = *ppvVar2;
    *(void **)(this + 8) = ppvVar2[6];
    if (pvVar1 != (void *)0x0) {
      ppvVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(ppvVar2);
    ppvVar2 = *(void ***)(this + 8);
  }
  return;
}


