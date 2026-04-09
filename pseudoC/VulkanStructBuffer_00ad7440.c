// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanStructBuffer
// Entry Point: 00ad7440
// Size: 44 bytes
// Signature: undefined __thiscall ~VulkanStructBuffer(VulkanStructBuffer * this)


/* VulkanStructBuffer::~VulkanStructBuffer() */

void __thiscall VulkanStructBuffer::~VulkanStructBuffer(VulkanStructBuffer *this)

{
  *(undefined ***)this = &PTR__VulkanStructBuffer_00fe6af0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ad7464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


