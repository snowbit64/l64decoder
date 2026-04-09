// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanSamplerObject
// Entry Point: 00aba4c8
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanSamplerObject(VulkanSamplerObject * this)


/* VulkanSamplerObject::~VulkanSamplerObject() */

void __thiscall VulkanSamplerObject::~VulkanSamplerObject(VulkanSamplerObject *this)

{
  *(undefined ***)this = &PTR__VulkanSamplerObject_00fe6198;
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


