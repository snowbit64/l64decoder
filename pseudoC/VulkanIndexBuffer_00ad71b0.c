// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanIndexBuffer
// Entry Point: 00ad71b0
// Size: 92 bytes
// Signature: undefined __thiscall ~VulkanIndexBuffer(VulkanIndexBuffer * this)


/* VulkanIndexBuffer::~VulkanIndexBuffer() */

void __thiscall VulkanIndexBuffer::~VulkanIndexBuffer(VulkanIndexBuffer *this)

{
  VulkanRenderDevice::s_usedIndexBufferMemory =
       VulkanRenderDevice::s_usedIndexBufferMemory - *(int *)(this + 0x10);
  *(undefined ***)this = &PTR__VulkanIndexBuffer_00fe6a50;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


