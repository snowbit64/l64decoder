// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanShaderObject
// Entry Point: 00ac8880
// Size: 36 bytes
// Signature: undefined __thiscall ~VulkanShaderObject(VulkanShaderObject * this)


/* VulkanShaderObject::~VulkanShaderObject() */

void __thiscall VulkanShaderObject::~VulkanShaderObject(VulkanShaderObject *this)

{
  ~VulkanShaderObject(this);
  operator_delete(this);
  return;
}


