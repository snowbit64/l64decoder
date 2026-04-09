// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DescriptorPool
// Entry Point: 00ac3730
// Size: 4 bytes
// Signature: undefined __thiscall ~DescriptorPool(DescriptorPool * this)


/* VulkanResourceAllocator::DescriptorPool::~DescriptorPool() */

void __thiscall VulkanResourceAllocator::DescriptorPool::~DescriptorPool(DescriptorPool *this)

{
  operator_delete(this);
  return;
}


