// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanStructBuffer
// Entry Point: 00ad746c
// Size: 68 bytes
// Signature: undefined __thiscall ~VulkanStructBuffer(VulkanStructBuffer * this)


/* VulkanStructBuffer::~VulkanStructBuffer() */

void __thiscall VulkanStructBuffer::~VulkanStructBuffer(VulkanStructBuffer *this)

{
  *(undefined ***)this = &PTR__VulkanStructBuffer_00fe6af0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(this);
  return;
}


