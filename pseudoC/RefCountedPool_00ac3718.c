// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RefCountedPool
// Entry Point: 00ac3718
// Size: 4 bytes
// Signature: undefined __thiscall ~RefCountedPool(RefCountedPool * this)


/* VulkanResourceAllocator::RefCountedPool::~RefCountedPool() */

void __thiscall VulkanResourceAllocator::RefCountedPool::~RefCountedPool(RefCountedPool *this)

{
  operator_delete(this);
  return;
}


