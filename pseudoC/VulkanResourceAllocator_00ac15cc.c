// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanResourceAllocator
// Entry Point: 00ac15cc
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanResourceAllocator(VulkanResourceAllocator * this)


/* VulkanResourceAllocator::~VulkanResourceAllocator() */

void __thiscall VulkanResourceAllocator::~VulkanResourceAllocator(VulkanResourceAllocator *this)

{
  ~VulkanResourceAllocator(this);
  operator_delete(this);
  return;
}


