// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanConstantBuffer
// Entry Point: 00ad72e4
// Size: 44 bytes
// Signature: undefined __thiscall ~VulkanConstantBuffer(VulkanConstantBuffer * this)


/* VulkanConstantBuffer::~VulkanConstantBuffer() */

void __thiscall VulkanConstantBuffer::~VulkanConstantBuffer(VulkanConstantBuffer *this)

{
  *(undefined ***)this = &PTR__VulkanConstantBuffer_00fe6aa0;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ad7308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


