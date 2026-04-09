// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanCommandList
// Entry Point: 00ad3218
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanCommandList(VulkanCommandList * this)


/* VulkanCommandBuffer::VulkanCommandList::~VulkanCommandList() */

void __thiscall VulkanCommandBuffer::VulkanCommandList::~VulkanCommandList(VulkanCommandList *this)

{
  ~VulkanCommandList(this);
  operator_delete(this);
  return;
}


