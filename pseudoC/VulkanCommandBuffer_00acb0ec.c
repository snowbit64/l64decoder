// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanCommandBuffer
// Entry Point: 00acb0ec
// Size: 40 bytes
// Signature: undefined __thiscall ~VulkanCommandBuffer(VulkanCommandBuffer * this)


/* non-virtual thunk to VulkanCommandBuffer::~VulkanCommandBuffer() */

void __thiscall VulkanCommandBuffer::~VulkanCommandBuffer(VulkanCommandBuffer *this)

{
  ~VulkanCommandBuffer(this + -8);
  operator_delete(this + -8);
  return;
}


