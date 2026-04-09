// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CommandPool
// Entry Point: 00ac36d8
// Size: 64 bytes
// Signature: undefined __thiscall ~CommandPool(CommandPool * this)


/* VulkanResourceAllocator::CommandPool::~CommandPool() */

void __thiscall VulkanResourceAllocator::CommandPool::~CommandPool(CommandPool *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__CommandPool_00fe6480;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


