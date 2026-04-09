// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanStagingBuffer
// Entry Point: 00ad76f8
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanStagingBuffer(VulkanStagingBuffer * this)


/* VulkanStagingBuffer::~VulkanStagingBuffer() */

void __thiscall VulkanStagingBuffer::~VulkanStagingBuffer(VulkanStagingBuffer *this)

{
  ~VulkanStagingBuffer(this);
  operator_delete(this);
  return;
}


