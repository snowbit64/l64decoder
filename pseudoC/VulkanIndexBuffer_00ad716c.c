// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanIndexBuffer
// Entry Point: 00ad716c
// Size: 68 bytes
// Signature: undefined __thiscall ~VulkanIndexBuffer(VulkanIndexBuffer * this)


/* VulkanIndexBuffer::~VulkanIndexBuffer() */

void __thiscall VulkanIndexBuffer::~VulkanIndexBuffer(VulkanIndexBuffer *this)

{
  VulkanRenderDevice::s_usedIndexBufferMemory =
       VulkanRenderDevice::s_usedIndexBufferMemory - *(int *)(this + 0x10);
  *(undefined ***)this = &PTR__VulkanIndexBuffer_00fe6a50;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ad71a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


