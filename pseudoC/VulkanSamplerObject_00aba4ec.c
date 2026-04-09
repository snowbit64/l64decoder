// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanSamplerObject
// Entry Point: 00aba4ec
// Size: 64 bytes
// Signature: undefined __thiscall ~VulkanSamplerObject(VulkanSamplerObject * this)


/* VulkanSamplerObject::~VulkanSamplerObject() */

void __thiscall VulkanSamplerObject::~VulkanSamplerObject(VulkanSamplerObject *this)

{
  *(undefined ***)this = &PTR__VulkanSamplerObject_00fe6198;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


