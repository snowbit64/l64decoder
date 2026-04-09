// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueue
// Entry Point: 00aca458
// Size: 88 bytes
// Signature: undefined __thiscall ~LockFreeQueue(LockFreeQueue<VulkanResourceAllocator::Fence> * this)


/* LockFreeQueue<VulkanResourceAllocator::Fence>::~LockFreeQueue() */

void __thiscall
LockFreeQueue<VulkanResourceAllocator::Fence>::~LockFreeQueue
          (LockFreeQueue<VulkanResourceAllocator::Fence> *this)

{
  void *pvVar1;
  long lVar2;
  void **ppvVar3;
  
  lVar2 = *(long *)this;
  while (lVar2 != 0) {
    ppvVar3 = *(void ***)this;
    *(void **)this = ppvVar3[6];
    pvVar1 = *ppvVar3;
    if (pvVar1 != (void *)0x0) {
      ppvVar3[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(ppvVar3);
    lVar2 = *(long *)this;
  }
  return;
}


