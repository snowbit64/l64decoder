// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanVertexBuffer
// Entry Point: 00ad883c
// Size: 92 bytes
// Signature: undefined __thiscall ~VulkanVertexBuffer(VulkanVertexBuffer * this)


/* VulkanVertexBuffer::~VulkanVertexBuffer() */

void __thiscall VulkanVertexBuffer::~VulkanVertexBuffer(VulkanVertexBuffer *this)

{
  VulkanRenderDevice::s_usedVertexBufferMemory =
       VulkanRenderDevice::s_usedVertexBufferMemory - *(int *)(this + 0x10);
  *(undefined ***)this = &PTR__VulkanVertexBuffer_00fe6c78;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


