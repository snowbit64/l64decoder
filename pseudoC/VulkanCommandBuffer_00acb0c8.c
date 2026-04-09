// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanCommandBuffer
// Entry Point: 00acb0c8
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanCommandBuffer(VulkanCommandBuffer * this)


/* VulkanCommandBuffer::~VulkanCommandBuffer() */

void __thiscall VulkanCommandBuffer::~VulkanCommandBuffer(VulkanCommandBuffer *this)

{
  ~VulkanCommandBuffer(this);
  operator_delete(this);
  return;
}


