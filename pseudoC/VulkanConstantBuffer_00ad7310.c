// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanConstantBuffer
// Entry Point: 00ad7310
// Size: 68 bytes
// Signature: undefined __thiscall ~VulkanConstantBuffer(VulkanConstantBuffer * this)


/* VulkanConstantBuffer::~VulkanConstantBuffer() */

void __thiscall VulkanConstantBuffer::~VulkanConstantBuffer(VulkanConstantBuffer *this)

{
  *(undefined ***)this = &PTR__VulkanConstantBuffer_00fe6aa0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


