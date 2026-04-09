// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanTextureObject
// Entry Point: 00aadb48
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanTextureObject(VulkanTextureObject * this)


/* VulkanTextureObject::~VulkanTextureObject() */

void __thiscall VulkanTextureObject::~VulkanTextureObject(VulkanTextureObject *this)

{
  ~VulkanTextureObject(this);
  operator_delete(this);
  return;
}


